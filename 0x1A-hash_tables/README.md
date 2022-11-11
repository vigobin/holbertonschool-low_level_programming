# Project 0x1A. C - Hash tables

## Description
This project involves learning about the following concepts:
 * What is a hash function.
 * What makes a good hash function.
 * What is a hash table, how do they work and how to use them.
 * What is a collision and what are the main ways of dealing with collisions in the context of a hash table.
 * What are the advantages and drawbacks of using hash tables.
 * What are the most common use cases of hash tables.


## Compilation
* Files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`.

## Header File
* `hash_tables.h` will include all the prototypes of the functions.

## Tasks:

#### 0. >>> ht = {} 

* `0-hash_table_create.c`: Function that creates a hash table.
 * Prototype: `hash_table_t *hash_table_create(unsigned long int size);`
 * Where size is the size of the array.
 * Returns a pointer to the newly created hash table.
 * If something went wrong, your function should return NULL.
