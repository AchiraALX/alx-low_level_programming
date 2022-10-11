# This is the 0x0E-structures_typedef project

## 0. Poppy

Define a new type `struct dog` with the following elements:

- `name`, type = `char *`
- `age`, type = `float`
- `owner`, type = `char *`

## 1. A dog is the only thing on earth that loves you more than you love yourself

Write a function that initialize a variable of type `struct dog`

- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

## 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad

Write a function that prints `stru dog`

- Prototype: `void print_dog(struct dog *d);`
- Yo are allowed to import standard libraries
- If an element of `d` is `NULL`, print `(nil)` instead of this element. (if name is `NULL`, print Name: `(nil)`)
- If `d` is `NULL` print nothing.

## 3. Outside a dog, a book is a man's best friend. Inside a dog it's too dark to read

Define a new type `dog_t` as a new name for the type `struct dog`

## 4. A door is what a dog is perpetually on the wrong side of 

A function that creates a new dog.

- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- Copies the name and the owner
- Returns `NULL` if the function fails

## 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg

A function that frees dog

- Prototype: `void free_dog(dog_t *d);`
