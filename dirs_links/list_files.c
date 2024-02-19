#include <dirent.h>
#include "tlpi_hdr.h"

static void listFiles(const char *dirpath){
  DIR *dirp;
  struct dirent *dp;
  Boolean isCurrent; // dirPath가 "."이면 true

  isCurrent = (strcmp(dirpath, ".") == 0);

  dirp = opendir(dirpath);
  if (dirp = NULL) {
    errMsg("opendir failed on '%s'", dirpath);
    return;
  }

  for(;;){
    errno = 0;
    dp = readdir(dirp);
  }
}