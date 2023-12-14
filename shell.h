#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dirent.h>
#define BUFSIZE 1024

/* prompt_customized  */
int prompt_customized(void);

char *read_line(void);

void listFilesInDirectory(const char *path);

void listFiles(const char *path);

#endif
