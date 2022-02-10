#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void swap(void *a,void *b,int size){
 void *temp;
 temp = malloc(size);
 memcpy(temp,a,size);
 memcpy(a,b,size);
  memcpy(b,temp,size);
  free(temp);
}
int main()
{
int a=5,b=2;
 printf("a = %d b = %d\n",a,b);
swap(&a,&b,sizeof(int));
printf("a = %d b = %d\n",a,b);
 return 0;
}
