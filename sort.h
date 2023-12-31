#ifndef SORT_H
#define SORT_H

#include <stddef.h>
#define DEBUG 0

/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
    const int n;
    struct listint_s *prev;
    struct listint_s *next;
} listint_t;


/* Predefined task function prototypes*/
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
void swap(listint_t **h, listint_t **node1, listint_t *node2);


void l_sort(int *array, size_t size, int left, int right);
void swap_ints(int *a, int *b);
int l_partition(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);


/*Self defined function prototypes*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);

#endif
