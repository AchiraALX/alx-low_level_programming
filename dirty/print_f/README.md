# Implementing printf function

        int printf(const char *format, ...);

## Print formatted data to stdout

Write the C string pointed by format to stdout. If format includes format specifiers (subsequences beginning with %), the additional arguments following format are formatted and inserted in the resulting string replacing their respective specifiers.

## Parameters

C string that contains the text to be written to stdout. It can optionally contain embedded format specifiers that are replaced by the values specified in subsequent additional arguments and formatted as requested.

A format specifier follows this prototype:

        %[flags][width][.precision][length]specifier

Where the specifier character at the end is the most significant component , since it defines the type and the interpretation of it corresponding argument.

        Specifier | Output | Example
        ---|---|---
        d or i | Signed decimal integer | 392
        u | Unsigned decimal integer | 7235
        o | Unsigned octal | 610
        x | Unsigned hexadecimal integer | 7fa
        X | Unsigned hexadecimal integer (uppercase) | 7FA
        f | Decimal floating point, lowercase | 392.65
        F | Decimal floating point, uppercase | 392.65
        e | Scientific notation (mantissa/exponent), lowercase | 3.9265e+2
        E | Scientific notation (mantissa/exponent), uppercase | 3.9265E+2
        g | Use the shortest representation: %e or %f | 392.65
        G | Use the shortest representation: %E or %F | 392.65
        a | Hexadecimal floating point, lowercase | -0xc.90fep-2
        A | Hexadecimal floating point, uppercase | -0XC.90FEP-2
        c | Character | a
        s | String of characters | sample
        p | Pointer address | b8000000
        n | Nothing printed. The corresponding argument must be a pointer to a signed int. The number of characters written so far is stored in the pointed location. | -

## Passing a variable number of parameters

        Use variadic functions to pass a variable number of parameters to a function.

## CDECL calling convention

Arguments:

- passed through stack
- pushed from right to left
- caller removes parameters from stack

Return:

- integers, pointers: EAX
- floating point: ST(0)

Registers:

- EAX, ECX, EDX, saved by caller
- all others saved by callee

Name mangling: C functions are prepended with a leading underscore and a trailing at sign.
