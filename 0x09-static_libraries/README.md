## Static libraries

### What is a static library, how does it work, how to create one, and how to use it
A static library is a collection of object files that are linked together to form a single library. The library is then linked with the program that uses it. The advantage of using a static library is that it is faster to link with the program than a dynamic library. The disadvantage is that the library cannot be updated without recompiling the program.

To create a static library, the object files are first created using the `gcc` command with the `-c` flag. Then the `ar` command is used to create the library. The `ar` command has the following syntax: `ar -rc lib_name.a file1.o file2.o ...`. The `-r` flag tells `ar` to replace any existing files in the library. The `-c` flag tells `ar` to create the library if it does not exist. The `lib_name.a` is the name of the library. The `file1.o` and `file2.o` are the object files that will be added to the library.