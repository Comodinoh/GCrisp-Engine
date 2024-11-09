#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv)
{
  char* str;
  if(argc >= 2)
  {
    char* arg = argv[1];
    char* sp = " ";
    str = malloc(strlen(arg)+strlen(sp)+1);
    strcpy(stpcpy(str, sp), arg);
  }else{
    str = "";
  }
  printf("Hello world%s!\n", str);
  return 0;
}
