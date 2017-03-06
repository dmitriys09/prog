#include<stdio.h>
#include"int_vector.h"
#include<stdlib.h> 


int main()
{
  size_t size;

  printf("input number of elements");
  scanf("%zd", &size);

  int_vector_new(size);
}
 
