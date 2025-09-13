# CPP Module 00

This repository contains the first module of a C++ learning series. The module is divided into three exercises, each focusing on basic C++ concepts, compilation, and object-oriented programming.

## Structure

- **ex00/**
  - `megaphone.cpp`: Simple program to transform input to uppercase.
  - `Makefile`: Build instructions for the exercise.

- **ex01/**
  - `Contact.cpp`, `Contact.hpp`: Contact class implementation.
  - `PhoneBook.cpp`, `PhoneBook.hpp`: PhoneBook class implementation.
  - `main.cpp`: Main program for managing contacts.
  - `Makefile`: Build instructions for the exercise.

- **ex02/**
  - `Account.cpp`, `Account.hpp`: Account class implementation.
  - `tests.cpp`: Test cases for the Account class.
  - `Makefile`: Build instructions for the exercise.

## How to Build

Each exercise folder contains its own `Makefile`. To build an exercise, navigate to the folder and run:

```bash
make
```

## How to Run

After building, execute the generated binary (usually named after the exercise or `main`). For example:

```bash
./megaphone      # in ex00
./main           # in ex01
./tests          # in ex02
```

## Exercises Overview

### ex00: Megaphone
- Reads input from command line arguments and prints them in uppercase.
- Demonstrates basic I/O and string manipulation.

### ex01: PhoneBook
- Implements a simple phone book using classes.
- Allows adding, searching, and displaying contacts.
- Demonstrates object-oriented programming and encapsulation.

### ex02: Account
- Implements an Account class with basic banking operations.
- Includes test cases for validation.
- Demonstrates class design and testing in C++.

## Requirements
- C++ compiler (e.g., g++, clang++)
- Make utility

## Author
- Jeferson Sopan R

## License
This project is for educational purposes.
