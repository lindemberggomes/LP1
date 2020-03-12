SUDOKU Programming Project

# Introduction

This document describes the first exercise related to the development of a [**Sudoku**](https://en.wikipedia.org/wiki/Sudoku) puzzle solver and generator.

# The Task

In this assignment you will receive a code, `sudoku_checker.cpp` that have a few complete sudoku boards _hard coded_.

You should complete the program by creating, at least, the following function:

1. A function called `print_board()` to print the board on the standard output with `std::cout`.
2. A function called `is_valid()` that receives a sudoku board as an argument and return `true` is the input sudoku board is valid, or `false` if the board is not valid.

# What You Will Learn

The main topics involved in this exercise are:

* Learn how to tackle a complex task (to code a Sudoku solver) by solving and coding small parts of the project,
* How to create functions in C++.
* How to pass an entire matrix to a function.
* How to format the output send to the standard C output stream `stdout`.
* How to traverse parts of a matrix.

# Input

This program does not have any input, since the Sudoku boards to evaluate have been hard-coded in the source code provided.

# Output

For each input board found, your program should print out the board and a indication whether it is a valid Sudoku puzzle or not.

# Compiling and Running

To compile:

```
g++ -Wall -std=c++11 sudoku_checker.cpp -o sd_checker
```

To run:

```
./sd_checker
```

# Challenges

* How would go about creating a 3D matrix to store all boards into a single unit? This would make the testing code cleaner, because we would have a loop over all boards, rather than calling the checking function on each individual board.


* How would you modify your code to read several Sudoku boards from the terminal or text file, as in:

```
./sd_checker < input.txt
```

where `input.txt` is a text file with one or more Sudoku boards.
