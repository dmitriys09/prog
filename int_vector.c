#include<stdio.h>
#include<stdlib.h>
#include"int_vector.h"

intvector* int_vector_new(size_t initial_size)
{
	intvector *V = (intvector*) malloc(sizeof(intvector));
		
		if(!V)
		{
			return NULL;
		}
	
	V->data = (int*) malloc(initial_size * sizeof(int));
 		if(!V->data)
		{
			return NULL;
		}	
	
		
	V->size = initial_size;
	V->capacity = 0;
	return V;
}

void int_vector_free(intvector *V)
{
	
	
	free(V->data);
	free(V->size);
	free(V->capacity);
	free(V);
}
