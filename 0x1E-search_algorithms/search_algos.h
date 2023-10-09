#ifndef _SEARCH_ALGOS_H_
#define _SEARCH_ALGOS_H_

/* Libraries we will use for these tasks */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

/* Prottotypes needed */
/**
 * struct listint_s - singly linked list
 *
 * @n: Integer data type for this task
 * @index: tells us the psoition of the items
 * @next: the next node will be pointed
 *
 * Description: single listed node type
 */
typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;
/**
 * struct skiplist_s - Singly linked list with an express lane
 *
 * @n: Integer
 * @index: Index of the node in the list
 * @next: Pointer to the next node
 * @express: Pointer to the next node in the express lane
 *
 * Description: singly linked list node structure with an express lane
 */
typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/* PROTOS DEFINED HERE */

void free_list(listint_t *list);
void print_list(const listint_t *list);
skiplist_t *linear_skip(skiplist_t *list, int value);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
listint_t *create_list(int *array, size_t size);

#endif

