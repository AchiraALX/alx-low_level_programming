// How to merge lines of two file alternately?

#include <stdio.h>

#include <stdlib.h>

// Open two files to be merged

*fp1 =

,

*fp2 =

,

// Open file to store the result

*fp3 =

,

(fp1 == NULL || fp2 == NULL || fp3 == NULL)

"Could not open files"

// Copy contents of first file to file3.txt

((c =

(fp1)) != EOF)

(c, fp3);

// Copy contents of second file to file3.txt

((c =

(fp2)) != EOF)

(c, fp3);

"Merged file1.txt and file2.txt into file3.txt"