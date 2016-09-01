#include <stdio.h>


int main(int argc, char const *argv[]) {
  int i=39;
  int ii;
  char var[]="";
  char *ip = &var;
    // ip=ip+1;
  strcat(var ,"sss");
  printf("%s\n", var);
  // printf("%c\n", *(ip+3));
  // printf("%x\n", &var);　
  // printf("%x\n", ip);　
  return 0;
}


char * left(char *dst,char *src, int n)
{
    char *p = src;
    char *q = dst;
    int len = strlen(src);
    if(n>len) n = len;
    /*p += (len-n);*/   /*从右边第n个字符开始*/
    while(n--) *(q++) = *(p++);
    *(q++)='\0'; /*有必要吗？很有必要*/
    return dst;
}
