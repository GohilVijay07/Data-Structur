📚 Data Structures Practical Programs in C






A collection of Data Structures practical programs written in C for college/lab practice.

The programs cover Stack, Queue, Linked List, Sorting and Searching concepts.

📌 Programs Included

No.

Practical

Main Topic

01

Menu Driven Stack

Stack

02

Menu Driven Double Stack

Double Stack

03

Infix to Suffix Expression

Stack / Expression

04

Menu Driven Simple Queue

Queue

05

Menu Driven Double Queue

Double Queue

06

Menu Driven Circular Queue

Circular Queue

07

Process Queue

Queue

08

Priority Queue

Priority Queue

09

Menu Driven Singly Linked List

Linked List

10

Menu Driven Singly Circular Linked List

Circular Linked List

11

Menu Driven Doubly Linked List

Doubly Linked List

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

Linear & Binary Search

Searching

🧩 Detailed Programs

01. Menu Driven Stack

Operations

Push

Pop

Peep

Modify

Display

Concept

A Stack follows the LIFO (Last In, First Out) principle.

Example

Push → Add an element
Pop  → Remove the top element
Peep → View an element

02. Menu Driven Double Stack

Operations

Push

Pop

Peep

Modify

Display

Concept

Two stacks are maintained in a single array.

Stack 1  →  ←  Stack 2

This demonstrates how one array can be used for two stacks.

03. Infix to Suffix Expression

Concept

This program converts an infix expression into a suffix (postfix) expression using a stack.

Example

Infix:
A+B*C

Suffix:
ABC*+

Main Concepts

Stack

Operator precedence

Parentheses

Postfix expression

04. Menu Driven Simple Queue

Operations

Insert

Delete

Modify

Display

Concept

A Queue follows the FIFO (First In, First Out) principle.

Insertion → Rear
Deletion  → Front

05. Menu Driven Double Queue

Operations

Insert

Delete

Modify

Display

Concept

A double-ended queue allows insertion and deletion from both ends.

Front  ↔  Elements  ↔  Rear

06. Menu Driven Circular Queue

Operations

Insert

Delete

Modify

Display

Concept

A circular queue connects the last position back to the first position.

Last Position
      ↓
First Position

This helps reuse empty positions in the queue.

07. Process Queue

Concept

This program demonstrates processing of jobs/processes using a queue.

Processes are inserted into a queue and executed in sequence. If a process still has remaining work, it can be inserted again.

Main Concepts

Queue

Process scheduling

Re-insertion of unfinished process

08. Priority Queue

Concept

A Priority Queue processes elements according to their priority.

In this practical, three priority levels are used:

Priority 1
Priority 2
Priority 3

The higher-priority queue is processed before the lower-priority queue.

09. Menu Driven Singly Linked List

Operations

Insert

Delete

Modify

Display

Structure

[Data | Next] → [Data | Next] → [Data | NULL]

Concept

Each node contains:

Data

Address of the next node

10. Menu Driven Singly Circular Linked List

Operations

Insert

Delete

Modify

Display

Structure

      ┌──────────────────────┐
      ↓                      │
[Data|Next] → [Data|Next] → [Data|Next]
      ↑______________________│

The last node points back to the first node.

11. Menu Driven Doubly Linked List

Operations

Insert

Delete

Modify

Display

Structure

NULL ← [Prev|Data|Next] ↔ [Prev|Data|Next] → NULL

Each node contains:

Previous node address

Data

Next node address

🔃 Sorting Programs

12. Insertion Sort

Insertion Sort builds the sorted array one element at a time.

Example

Before:
5 3 4 1 2

After:
1 2 3 4 5

Complexity

Best: O(n)

Average: O(n²)

Worst: O(n²)

13. Merge Sort

Merge Sort divides the array into smaller parts and then merges them in sorted order.

Steps

Divide
  ↓
Sort
  ↓
Merge

Complexity

O(n log n)

14. Quick Sort

Quick Sort selects a pivot and partitions the array around it.

Steps

Select Pivot
     ↓
Partition
     ↓
Quick Sort Left & Right

Complexity

Average: O(n log n)

Worst: O(n²)

15. Radix Sort

Radix Sort sorts numbers digit by digit.

Example

170
045
075
090
802
024
002
066

The program processes:

Units digit

Tens digit

Hundreds digit

And so on

Note: The given implementation is intended for non-negative integers.

16. Heap Sort

Heap Sort uses a Heap data structure to sort the elements.

For ascending order, a Max Heap is used.

Steps

Build Max Heap
      ↓
Move Maximum to End
      ↓
Heapify
      ↓
Repeat

Complexity

O(n log n)

🔎 Searching Programs

17. Linear Search & Binary Search

Linear Search

Checks elements one by one.

Array:
10 20 30 40 50

Search:
30

Result:
Found

Complexity

O(n)

Binary Search

Binary Search repeatedly divides a sorted array into two parts.

Sorted Array
     ↓
Find Middle
     ↓
Compare
     ↓
Search Left / Right

Complexity

O(log n)

Important: Binary Search requires the array to be sorted.

📖 Topics Covered

Stack

Push

Pop

Peep

Modify

Display

Infix to Suffix

Queue

Simple Queue

Double Queue

Circular Queue

Process Queue

Priority Queue

Linked List

Singly Linked List

Singly Circular Linked List

Doubly Linked List

Sorting

Insertion Sort

Merge Sort

Quick Sort

Radix Sort

Heap Sort

Searching

Linear Search

Binary Search

⚙️ How to Run

1. Clone the Repository

git clone https://github.com/GohilVijay07/Data-Structur.git

2. Open the Repository

cd Data-Structur

3. Compile a Program

For example:

gcc program.c -o program

4. Run

Windows

program.exe

Linux / macOS

./program

💻 Example

If the file is:

stack.c

Compile:

gcc stack.c -o stack

Run on Windows:

stack.exe

Run on Linux:

./stack

🎓 Learning Purpose

These programs are useful for:

College practicals

Data Structures lab work

C programming practice

Viva preparation

Understanding basic data structures

Understanding sorting and searching algorithms

📝 Practical List 01–17

01. Stack
02. Double Stack
03. Infix to Suffix
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
17. Linear & Binary Search

🎯 Goal

The main goal of this repository is to provide simple, practical and beginner-friendly C programs for learning Data Structures.

👨‍💻 Author

Vijay Gohil

GitHub:

https://github.com/GohilVijay07

Repository:

https://github.com/GohilVijay07/Data-Structur

⭐ Support

If this repository helps you in your practical work or learning, you can Star ⭐ the repository on GitHub.

📌 Note

These programs are prepared for educational and practical purposes.
You can modify the programs according to your college requirements.