#include <fcntl.h>
#include <sys/stat.h>

#include "tlpi_hdr.h"

#define CMD_SIZE 200
#define BUF_SIZE 1024

int main(int argc, char *argv[]) {
  int fd, j, numBlocks;
  char shellCmd[CMD_SIZE];
  char buf[BUF_SIZE];

  if (argc < 2 || strcmp(argv[1], "--help") == 0)
    usageErr("%s temp-file [num-1KB-blocks] \n", argv[0]);

  numBlocks = (argc > 2) ? getInt(argv[2], GN_GT_0, "num-1KB-blocks") : 100000;

  fd = open(argv[1], O_WRONLY | O_CREAT | O_EXCL, S_IRUSR | S_IWUSR);

  if (fd == -1) errExit("open");

  if (unlink(argv[1]) == -1)  // 파일이름 제거
    errExit("unlink");

  for (j = 0; j < numBlocks; j++)
    if (write(fd, buf, BUF_SIZE) != BUF_SIZE) fatal("partial/failed write");
  
  // first df command 
  snprintf(shellCmd, CMD_SIZE, "df -k `dirname %s`", argv[1]);
  system(shellCmd);

  if (close(fd) == -1)
    errExit("close");
  printf("********** Closed file descriptor\n");

  // second df command 
  system(shellCmd);
  exit(EXIT_SUCCESS);
}