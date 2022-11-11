# Project 0x18. C - Doubly linked lists

## Description
This project involves learning about the following concepts:
 * What is a doubly linked list
 * How to use doubly linked lists

## Compilation
* Files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Header File
* `lists.h` will include all the prototypes of the functions.

## Tasks:

#### 0. Print list

* `0-print_dlistint.c`: Function that prints all the elements of a `dlistint_t` list.
 * Prototype: `size_t print_dlistint(const dlistint_t *h);`
 * Return: the number of nodes.
 
#### 1. List length

* `1-dlistint_len.c`: Function that returns the number of elements in a linked `dlistint_t` list.
 * Prototype: `size_t dlistint_len(const dlistint_t *h);`

#### 2. Add node

* `2-add_dnodeint.c`: Function that adds a new node at the beginning of a `dlistint_t list`.
 * Prototype: `dlistint_t *add_dnodeint(dlistint_t **head, const int n);`
 * Return: the address of the new element, or NULL if it failed.
 
#### 3. Add node at the end

* `3-add_dnodeint_end.c`: Function that adds a new node at the end of a `dlistint_t list`.
 * Prototype: `dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);`
 * Return: the address of the new element, or NULL if it failed.
 
#### 4. Free list

* `4-free_dlistint.c`: Function that frees a `dlistint_t` list.
 * Prototype: `void free_dlistint(dlistint_t *head);`
 
#### 5. Get node at index

* `5-get_dnodeint.c`: Function that returns the nth node of a `dlistint_t` linked list.
 * Prototype: `dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);`
 * Where index is the index of the node, starting from 0.
 * If the node does not exist, return NULL.
 
#### 6. Sum list

* `6-sum_dlistint.c`: Function that returns the sum of all the data (n) of a `dlistint_t` linked list.
 * Prototype: `int sum_dlistint(dlistint_t *head);`
 * If the list is empty, return 0.
 
#### 7. Print list backward

* `9-print_dlistint_backward.c`: Function that prints all the elements of a `dlistint_t` list backwards.
 * Prototype: `size_t print_dlistint_backward(const dlistint_t *h);`
 * Return: the number of nodes.
 
#### 8. Delete at index

* `8-delete_dnodeint.c`: Function that deletes the node at index index of a `dlistint_t` linked list.
 * Prototype: `int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);`
 * Where index is the index of the node that should be deleted. Index starts at 0.
  * Returns: 1 if it succeeded, -1 if it failed.
