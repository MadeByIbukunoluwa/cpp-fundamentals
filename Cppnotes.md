
# Errors

Compiler time errors

Runtime Errors  - compilation will succeed but the code doesn’t do what you want 

# Warnings

# Basics

## Statements

A statement is a basic unit of computation in a C++ Program  

Statements end with a semi colon  
Statements are executed form top to bottom when the program is run  
Execution keeps going on until there’s a condition that meds it terminate  

## Standard input and output

Data is going from your program to std::cout  

Std::in reading data from the terminal  

Std:err - printing errors to the console  

Std:clog - printing messages to the console  

## C++ Memory and Program Execution Model  

When we execute and compile the code, it gets turned into a binary

## C++ Core language vs Standard library vs STL

Core language has core features these are the building blocks that make up the language itself how you define variables and declaring functions

Standard library is a set of ready to use highly socialised components that we can use in a c++ program eg iostream , string etc

The STL is a highly specialized part of the C++ standard library but is a set of container types 
We have a set of types that allow us to store collections ,algorithms or functions that working these collections and we have specialised types called iterators that allow us to navigate through these containers

# Variables and data types

Void represents a typeless type

The auto type is a keyword used in C++ to reduce other types

If you have 1 digit you can represent two states zero and 1
If you two digits you can represent zero one two three

Generally if you have n digits we will be able to represent any number between  0 - 2^n -1 digits

 As your range of of data grows , so will the number of digits you have to store in memory
For hexadecimal numbers ,we split the binary numbers them in groups of four bits then convert each of them to hexadecimal to shorten the length of the binary number

Eg 0111 represents 7
1111 represents 15 which is E
1010 represents 10 which is A
0101 represents 5
And so on
We use a 0x in front to indicate the this is a Hexadecimal number

If we have numbers that can’t fit in groups of four then you start from the right group in fours and then pad the non four bit number with zeros

In C++ if you add a 0 infront of a number it means the number is octal , if you add a 0x it means the number is octal , if you add a 0b it means the number is binary etc it was possible since C++ 14 
  
## Int  

Stores decimal
Typically stores or occupies four bytes in memory

## Integer modifiers 

We can use this formula to calculate the range of values for a signed or unsigned integers

Unsigned range - 0 ~ 2^n -1

Signed Range -  2^n-1 ~ 2^n-1  - 1

n is the numbers of bits for memory

We can also flag our integers types as short or long

If we have the short variable it is going to be 2 bytes in memory - short , signed short, unsigned short all the same

if we have the normal int variable it is going to be 4 bytes in memory - int , signed int, unsigned int all the same

If we have the long variable it is going to be 4 or 8 bytes in memory - long , signed long, unsigned long all the same

If we have the long long variable it is going to be 8 bytes in memory - long long , signed long long, unsigned long long all the same

Theses modifiers only work with integral data types - types that you can store decimal numbers
