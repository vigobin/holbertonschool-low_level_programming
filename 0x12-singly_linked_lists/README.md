# Project 0x13. C - Singly linked lists

## Description
This project involves learning about the following concepts:
 * When and why using linked lists vs arrays.
 * How to build and use linked lists

## Compilation
* Files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Header File
* `lists.h` will include all the prototypes of the functions.

## Tasks:

#### 0. Print list 

* `0-print_list.c`: Function that prints all the elements of a list_t list.
 * Prototype: size_t print_list(const list_t *h);
 * Return: the number of nodes.
 * Format: see example.
 * If str is NULL, print [0] (nil).
 
#### 1. List length

* `1-list_len.c`: Function that returns the number of elements in a linked list_t list.
 * Prototype: size_t list_len(const list_t *h);

#### 2. Add node

* `2-add_node.c`: Function that adds a new node at the beginning of a list_t list.
 * Prototype: list_t *add_node(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed.
 * str needs to be duplicated.
 
#### 3. Add node at the end

* `3-add_node_end.c`: Function that adds a new node at the end of a list_t list.
 * Prototype: list_t *add_node_end(list_t **head, const char *str);
 * Return: the address of the new element, or NULL if it failed.
 * str needs to be duplicated.

#### 4. Free list

* `4-free_list.c`: Function that frees a list_t list.
 * Prototype: void free_list(list_t *head);
