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

size_t vector_get_size(const intvector *V)
{
	if(V->size)
	{
		return V->size;
	}
	else
	{
		printf("\nERROR\n");
		return NULL;
	}
size_t vector_get_capacity(const intvector *V)
{
	if(V->capacity)
	{
		return V->capacity;
	}
	else
	{
		printf("\nERROR\n");
		return NULL;
	}
	
}

int int_vector_get_item(const IntVector *V, size_t index)
{
	return V->data[index-1];
}

void int_vector_set_item(intvector *v, size_t index, int item)
{
	V->data[index-1] = item;
}