#ifndef INT_VECTOR_H
#define INT_VECTOR_H

typedef struct
{
	int *data;
	size_t size;
	size_t capacity;
	
}intvector;

intvector* int_vector_new(size_t initial_size);


#endif
