Data Structures Practical Programs in C

Welcome to my Data Structures Practical Programs repository.

This repository contains Data Structures practical programs implemented in the C programming language. The programs are written in a simple and beginner-friendly way for college practicals, lab assignments, viva preparation, and exam practice.

About

Subject: Data Structures

Programming Language: C

Type: Practical / Lab Programs

Level: Beginner Friendly

Programs: 1 to 17

Practical Programs

No.

Program

Operations / Concept

1

Stack

Push, Pop, Peep, Modify, Display

2

Double Stack

Push, Pop, Peep, Modify, Display

3

Infix to Suffix

Convert Infix Expression to Suffix using Stack

4

Simple Queue

Insert, Delete, Modify, Display

5

Double Queue

Insert, Delete, Modify, Display

6

Circular Queue

Insert, Delete, Modify, Display

7

Process Queue

Process Queue Implementation

8

Priority Queue

Insert, Delete, Display

9

Singly Linked List

Insert, Delete, Modify, Display

10

Singly Circular Linked List

Insert, Delete, Modify, Display

11

Doubly Linked List

Insert, Delete, Modify, Display

12

Insertion Sort

Sorting

13

Merge Sort

Sorting

14

Quick Sort

Sorting

15

Radix Sort

Sorting

16

Heap Sort

Sorting

17

Linear and Binary Search

Searching

1. Stack

Stack follows the LIFO (Last In First Out) principle.

Operations

Push

Pop

Peep

Modify

Display

Stack Overflow

Stack Underflow

Example

Push: 10
Push: 20
Push: 30

Stack:

30  <- Top
20
10

2. Double Stack

Double Stack implements two stacks using a single array.

Operations

Push Stack 1

Push Stack 2

Pop Stack 1

Pop Stack 2

Peep Stack 1

Peep Stack 2

Modify Stack 1

Modify Stack 2

Display

Stack 1  --->       <---  Stack 2

[10][20][30][   ][70][60][50]

3. Infix to Suffix Expression

This program converts an infix expression into a suffix/postfix expression using a stack.

Example

Infix:
A+B*C

Suffix:
ABC*+

Concepts

Stack

Push

Pop

Peek

Operator Precedence

Operator Precedence

^       Highest
* /
+ -

4. Simple Queue

Queue follows the FIFO (First In First Out) principle.

Operations

Insert

Delete

Modify

Display

Queue Overflow

Queue Underflow

Example

Front                 Rear
  |                     |
  v                     v
[10] [20] [30] [40] [50]

The element inserted first is deleted first.

5. Double Queue

Double Queue allows insertion and deletion from both ends of the queue.

Operations

Insert

Delete

Modify

Display

6. Circular Queue

In a circular queue, the last position is connected back to the first position.

Operations

Insert

Delete

Modify

Display

Queue Overflow

Queue Underflow

Circular movement is implemented using:

(rear + 1) % MAX

and

(front + 1) % MAX

7. Process Queue

This program implements a process queue.

Processes are inserted into a queue and executed in units. If a process still has remaining units after execution, it is inserted back into the queue.

8. Priority Queue

A priority queue processes elements according to their priority.

Priority Levels

Priority 1
Priority 2
Priority 3

Operations

Insert

Delete

Display

9. Singly Linked List

A singly linked list consists of nodes connected using a next pointer.

Operations

Insert

Delete

Modify

Display

Structure

HEAD
 |
 v
[10|*] -> [20|*] -> [30|NULL]

10. Singly Circular Linked List

A singly circular linked list is similar to a singly linked list, but the last node points back to the first node.

Operations

Insert

Delete

Modify

Display

Structure

       +----------------------+
       |                      |
       v                      |
[10] -> [20] -> [30] --------+
 ^
 |
HEAD

11. Doubly Linked List

A doubly linked list contains two pointers:

Previous pointer

Next pointer

Operations

Insert

Delete

Modify

Display

Structure

NULL <- [10] <-> [20] <-> [30] -> NULL

12. Insertion Sort

Insertion Sort sorts an array by inserting each element into its correct position.

Example

Before:
50 20 40 10 30

After:
10 20 30 40 50

Basic Idea

Take an element
      |
      v
Compare with previous elements
      |
      v
Shift larger elements
      |
      v
Insert at correct position

13. Merge Sort

Merge Sort uses the Divide and Merge technique.

Basic Process

Array
  |
  v
Divide
  |
  v
Sort smaller parts
  |
  v
Merge
  |
  v
Sorted Array

14. Quick Sort

Quick Sort uses a pivot to divide the array into smaller parts.

Basic Process

Array
  |
  v
Select Pivot
  |
  v
Partition
  |
  +------+
  |      |
  v      v
Left   Right
  |      |
  +------+
      |
      v
   Sorted

15. Radix Sort

Radix Sort sorts numbers digit by digit.

Example

170
045
075
090
002
024
802
066

The sorting is performed according to:

Units
  |
  v
Tens
  |
  v
Hundreds

This implementation is intended for non-negative integers.

16. Heap Sort

Heap Sort uses a heap data structure for sorting.

Basic Process

Array
  |
  v
Build Max Heap
  |
  v
Remove Maximum
  |
  v
Heapify
  |
  v
Sorted Array

17. Linear and Binary Search

This program implements both Linear Search and Binary Search.

Linear Search

Linear Search checks each element one by one.

10 20 30 40 50

Search = 40

10 -> 20 -> 30 -> 40
                  ^
                Found

Binary Search

Binary Search repeatedly divides a sorted array into two parts.

Important

The array must be sorted before performing Binary Search.

10 20 30 40 50

Search = 40

Middle = 30

40 > 30

Search right side

40 50

40 = Found

Topics Covered

Stack

Double Stack

Queue

Double Queue

Circular Queue

Process Queue

Priority Queue

Singly Linked List

Singly Circular Linked List

Doubly Linked List

Infix to Suffix Conversion

Insertion Sort

Merge Sort

Quick Sort

Radix Sort

Heap Sort

Linear Search

Binary Search

How to Run

Step 1: Clone Repository

git clone https://github.com/GohilVijay07/Data-Structur.git

Step 2: Open Repository

cd Data-Structur

Step 3: Compile a C Program

Using GCC:

gcc program.c -o program

Step 4: Run

Windows

program.exe

Linux / macOS

./program

Example

If the file name is:

stack.c

Compile:

gcc stack.c -o stack

Run on Windows:

stack.exe

Run on Linux/macOS:

./stack

Learning Purpose

These programs are created for educational and practical learning purposes.

They can be useful for:

College Practicals

Lab Assignments

C Programming Practice

Data Structures Practice

Viva Preparation

Exam Preparation

Beginner DSA Learning

Practical List

01. Stack
02. Double Stack
03. Infix to Suffix Expression
04. Simple Queue
05. Double Queue
06. Circular Queue
07. Process Queue
08. Priority Queue
09. Singly Linked List
10. Singly Circular Linked List
11. Doubly Linked List
12. Insertion Sort
13. Merge Sort
14. Quick Sort
15. Radix Sort
16. Heap Sort
17. Linear and Binary Search

Goal

The goal of this repository is to maintain Data Structures practical programs in C in one place and make them easy to understand, practice, and revise.

Author

Vijay Gohil

GitHub:

https://github.com/GohilVijay07

Support

If this repository helps you in learning Data Structures, consider giving the repository a ⭐ Star.

Note

This repository is created for educational and practical learning purposes.

The programs are kept simple and beginner-friendly for students who are learning Data Structures using the C programming language.