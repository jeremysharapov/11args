#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char ** parse_args(char * line){
  char ** args = (char **)calloc(6, sizeof(char *));
  int i;
  for(i = 0; line; i++){
    args[i] = strsep(&line, " ");
  }
  args[i] = NULL;
  return args;
}

void main(){
  char line[] = "ls -a -l";
  char ** args = parse_args(line);
  execvp(args[0], args);
  free(args);
}
