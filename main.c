#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char **parse_args(char *line) {
  char *curr = malloc(sizeof(char) * sizeof(line));
  curr = line;
  strsep(&curr, " ");
  return &curr;
}

int main() {
  char *line = malloc(sizeof(char) * 100);
  strcpy(line, "ls -a -l");
  char **args = parge_args(line);
  execvp(args[0], args);
}
