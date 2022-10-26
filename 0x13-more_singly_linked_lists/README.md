# This is the README for the "More Singly Linked Lists" project

## Pre-requisites

### 0. Print list

Write a function that prints all the elements of a listint_t list.

- Prototype: `size_t print_listint(const listint_t *h);`
- Return: the number of nodes
- You are allowed to use `printf`

### 1. List length

A function that returns number of elements in a linked list `listint_t`

- Prototype: `size_t listint_len(const list_int *h);`

### 2. Add node

A function that adds a new node at the beginning of `listint_t` lists.

- Prototype: `listint_t *add_nodeint(listint_t **head, const int n);`
- Return: the address of the new element or `NULL` if it failed

### 3. Add node at the end

A function that adds a new node at the end of a `listint_t` list

- Prototype: `listint_t *add_nodeint_end(listint_t **head, const int n);`
- Return: the address of the new element or `NULL` if it failed

### 4. Free list

A function that frees a `listint_t` list

- Prototype: `void free_listint(listint_t *head);`

### 5. Free

A function that frees a `listint_t` list

- Prototype: `void free_listint2(listint_t **head);`

### 6. Pop

A function that deletes the head node of a `listint_t` linked list, and returns the head node's data (n)

- Prototype: `int pop_listint(listint_t **head);`
- If the linked list is empty return `0`

### 7. Get node at index

A function that returns the nth node of a `listint_t` linked list

- Prototype: `listint_t *get_nodeint_at_index(listint_t *head, unsigned int index);`
- Where index is the index of the node starting from `0`
- If the node does not exist, return `0`

### 8. Sum list

A function that returns the sum of all data (n) of a linked list `listint_t`

- Prototype: `int sum_listint(listint_t *head);`
- If the list is empty, return `0`

### 9. Insert

A function that inserts a new node at a given position

- Prototype: `listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n);`
- where `idx` is the index of the list where the new node should be added, starting from `0`
- Return: the address of the new node or `NULL` if it failed
- if it is not possible to add a new node at `idx`, do not add the new node and return `NULL`

### 10. Delete at index

A function that deletes the node at index `index` of a `listint_t` linked list

- Prototype: `int delete_nodeint_at_index(listint_t **head, unsigned int index);`
- where index is the index of the node to be deleted starting from `0`
- Return 1 if it succeeded and -1 if it  failed.

### 11. Reverse list

A function that reverses a `listint_t` linked list

- Prototype: `listint_t *reverse_listint(listint_t **head);`
- Return: a pointer to the first node of the reversed list

### 12. Print (safe version)

A function that prints a `listint_t` linked list

- Prototype: `size_t print_listint_safe(const listint_t *head);`
- Return: the number of nodes in the list

### 13. Free (safe version)

A function that frees a `listint_t` list

- Prototype: `size_t free_listint_safe(listint_t **h);`
- Return: the size of the list that was free'd

### 14. Find the loop

A function that finds the loop in a linked list

- Prototype: `listint_t *find_listint_loop(listint_t *head);`
- Return: the address of the node where the loop starts or `NULL` if there is no loop
