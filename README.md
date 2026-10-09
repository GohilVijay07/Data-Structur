# 📚 Data Structures Practical Programs in C

A collection of **beginner-friendly Data Structures practical programs written in C**, designed for college students, laboratory practice, viva preparation, and understanding fundamental data structure concepts.

This repository covers **Stacks, Queues, Linked Lists, Sorting Algorithms, Searching Algorithms, and Expression Conversion** through simple and easy-to-understand C programs.

---

## 📌 Programs Included

| No. | Practical                               | Topic                      |
| :-: | --------------------------------------- | -------------------------- |
|  01 | Menu Driven Stack                       | Stack                      |
|  02 | Menu Driven Double Stack                | Double Stack               |
|  03 | Infix to Suffix Expression              | Stack / Expression         |
|  04 | Menu Driven Simple Queue                | Queue                      |
|  05 | Menu Driven Double Queue                | Double Queue               |
|  06 | Menu Driven Circular Queue              | Circular Queue             |
|  07 | Process Queue                           | Queue / Process Scheduling |
|  08 | Priority Queue                          | Priority Queue             |
|  09 | Menu Driven Singly Linked List          | Linked List                |
|  10 | Menu Driven Singly Circular Linked List | Circular Linked List       |
|  11 | Menu Driven Doubly Linked List          | Doubly Linked List         |
|  12 | Insertion Sort                          | Sorting                    |
|  13 | Merge Sort                              | Sorting                    |
|  14 | Quick Sort                              | Sorting                    |
|  15 | Radix Sort                              | Sorting                    |
|  16 | Heap Sort                               | Sorting                    |
|  17 | Linear & Binary Search                  | Searching                  |

---

# 🧩 Detailed Programs

## 01. Menu Driven Stack

### Operations

* Push
* Pop
* Peep
* Modify
* Display

### Concept

A **Stack** follows the **LIFO (Last In, First Out)** principle.

```text
Push    → Add an element
Pop     → Remove the top element
Peep    → View an element
Modify  → Update an element
Display → Show stack elements
```

---

## 02. Menu Driven Double Stack

### Operations

* Push
* Pop
* Peep
* Modify
* Display

### Concept

Two stacks are maintained within a **single array**.

```text
Stack 1  →  ←  Stack 2
```

This demonstrates how a single array can efficiently be used to maintain two independent stacks.

---

## 03. Infix to Suffix Expression

### Concept

This program converts an **infix expression into a suffix (postfix) expression** using a stack.

### Example

**Infix:**

```text
A + B * C
```

**Suffix:**

```text
ABC*+
```

### Main Concepts

* Stack
* Operator precedence
* Associativity
* Parentheses
* Postfix expressions

---

# 🚦 Queue Programs

## 04. Menu Driven Simple Queue

### Operations

* Insert
* Delete
* Modify
* Display

### Concept

A **Queue** follows the **FIFO (First In, First Out)** principle.

```text
Insertion → Rear
Deletion  → Front
```

---

## 05. Menu Driven Double Queue

### Operations

* Insert
* Delete
* Modify
* Display

### Concept

A **Double-Ended Queue (Deque)** allows insertion and deletion from both ends.

```text
Front  ↔  Elements  ↔  Rear
```

---

## 06. Menu Driven Circular Queue

### Operations

* Insert
* Delete
* Modify
* Display

### Concept

A **Circular Queue** connects the last position of the queue back to the first position.

```text
Last Position
      ↓
First Position
```

This allows previously occupied positions to be reused efficiently.

---

## 07. Process Queue

### Concept

This program demonstrates the processing of jobs or processes using a queue.

Processes are inserted into the queue and executed sequentially. If a process still has remaining work, it can be inserted back into the queue for further processing.

### Main Concepts

* Queue
* Process scheduling
* Sequential processing
* Re-insertion of unfinished processes

---

## 08. Priority Queue

### Concept

A **Priority Queue** processes elements according to their priority rather than simply following FIFO order.

This practical uses three priority levels:

```text
Priority 1
Priority 2
Priority 3
```

The higher-priority queue is processed before lower-priority queues.

---

# 🔗 Linked List Programs

## 09. Menu Driven Singly Linked List

### Operations

* Insert
* Delete
* Modify
* Display

### Structure

```text
[Data | Next] → [Data | Next] → [Data | NULL]
```

Each node contains:

* Data
* Address of the next node

---

## 10. Menu Driven Singly Circular Linked List

### Operations

* Insert
* Delete
* Modify
* Display

### Structure

```text
      ┌──────────────────────┐
      ↓                      │
[Data|Next] → [Data|Next] → [Data|Next]
      ↑______________________│
```

In a **Singly Circular Linked List**, the last node points back to the first node.

---

## 11. Menu Driven Doubly Linked List

### Operations

* Insert
* Delete
* Modify
* Display

### Structure

```text
NULL ← [Prev|Data|Next] ↔ [Prev|Data|Next] → NULL
```

Each node contains:

* Address of the previous node
* Data
* Address of the next node

---

# 🔃 Sorting Algorithms

## 12. Insertion Sort

**Insertion Sort** builds the sorted array one element at a time.

### Example

**Before:**

```text
5 3 4 1 2
```

**After:**

```text
1 2 3 4 5
```

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n)       |
| Average | O(n²)      |
| Worst   | O(n²)      |

---

## 13. Merge Sort

**Merge Sort** divides an array into smaller subarrays, sorts them, and then merges them back together.

### Working

```text
Divide
   ↓
Sort
   ↓
Merge
```

### Time Complexity

```text
Best      : O(n log n)
Average   : O(n log n)
Worst     : O(n log n)
```

---

## 14. Quick Sort

**Quick Sort** selects a pivot element and partitions the array around that pivot.

### Working

```text
Select Pivot
     ↓
Partition
     ↓
Quick Sort Left & Right
```

### Time Complexity

| Case    | Complexity |
| ------- | ---------- |
| Best    | O(n log n) |
| Average | O(n log n) |
| Worst   | O(n²)      |

---

## 15. Radix Sort

**Radix Sort** sorts numbers digit by digit, starting from the least significant digit.

### Example

```text
170
045
075
090
802
024
002
066
```

The algorithm processes:

```text
Units Digit
     ↓
Tens Digit
     ↓
Hundreds Digit
```

> **Note:** The implementation in this repository is intended for non-negative integers.

---

## 16. Heap Sort

**Heap Sort** uses a Heap data structure to sort elements.

For ascending order, a **Max Heap** is used.

### Working

```text
Build Max Heap
      ↓
Move Maximum to End
      ↓
Heapify
      ↓
Repeat
```

### Time Complexity

```text
Best      : O(n log n)
Average   : O(n log n)
Worst     : O(n log n)
```

---

# 🔎 Searching Algorithms

## 17. Linear Search & Binary Search

### Linear Search

Linear Search checks each element sequentially until the required element is found.

**Example:**

```text
Array:
10 20 30 40 50

Search:
30

Result:
Found
```

### Time Complexity

```text
O(n)
```

---

### Binary Search

Binary Search repeatedly divides a **sorted array** into two halves to locate the required element.

### Working

```text
Sorted Array
     ↓
Find Middle
     ↓
Compare
   ↙   ↘
Left   Right
```

### Time Complexity

```text
O(log n)
```

> **Important:** Binary Search requires the array to be sorted.

---

# 📖 Topics Covered

### Stack

* Push
* Pop
* Peep
* Modify
* Display
* Infix to Suffix Conversion

### Queue

* Simple Queue
* Double-Ended Queue
* Circular Queue
* Process Queue
* Priority Queue

### Linked List

* Singly Linked List
* Singly Circular Linked List
* Doubly Linked List

### Sorting

* Insertion Sort
* Merge Sort
* Quick Sort
* Radix Sort
* Heap Sort

### Searching

* Linear Search
* Binary Search

---

# ⚙️ How to Run

## 1. Clone the Repository

```bash
git clone https://github.com/GohilVijay07/Data-Structur.git
```

## 2. Navigate to the Repository

```bash
cd Data-Structur
```

## 3. Compile a Program

For example:

```bash
gcc program.c -o program
```

## 4. Run the Program

### Windows

```bash
program.exe
```

### Linux / macOS

```bash
./program
```

---

# 💻 Example

Suppose the program file is:

```text
stack.c
```

Compile it using:

```bash
gcc stack.c -o stack
```

### Windows

```bash
stack.exe
```

### Linux / macOS

```bash
./stack
```

---

# 🎓 Learning Objectives

This repository is useful for:

* 🎓 College practicals
* 💻 Data Structures laboratory work
* 🧠 Understanding fundamental data structures
* 🔍 Learning sorting and searching algorithms
* 📝 Practical examination preparation
* 🎤 Viva preparation
* 🧑‍💻 C programming practice
* 🚀 Building a strong foundation in Data Structures

---

# 📝 Practical List

| No. | Practical                   |
| :-: | --------------------------- |
|  01 | Stack                       |
|  02 | Double Stack                |
|  03 | Infix to Suffix             |
|  04 | Simple Queue                |
|  05 | Double Queue                |
|  06 | Circular Queue              |
|  07 | Process Queue               |
|  08 | Priority Queue              |
|  09 | Singly Linked List          |
|  10 | Singly Circular Linked List |
|  11 | Doubly Linked List          |
|  12 | Insertion Sort              |
|  13 | Merge Sort                  |
|  14 | Quick Sort                  |
|  15 | Radix Sort                  |
|  16 | Heap Sort                   |
|  17 | Linear & Binary Search      |

---

# 🎯 Repository Goal

The goal of this repository is to provide **simple, practical, and beginner-friendly C programs** that help students understand the fundamentals of Data Structures and Algorithms.

The programs are intentionally kept easy to understand so that they can be used for **college practicals, laboratory exercises, self-learning, and viva preparation**.

---

# 👨‍💻 Author

**Vijay Gohil**

### GitHub Profile

[GohilVijay07](https://github.com/GohilVijay07?utm_source=chatgpt.com)

### Repository

[Data-Structur Repository](https://github.com/GohilVijay07/Data-Structur?utm_source=chatgpt.com)

---

# ⭐ Support

If this repository helps you with your **college practicals, Data Structures learning, or C programming practice**, consider giving the repository a ⭐ **Star** on GitHub.

Your support helps the project grow and motivates further improvements.

---

# 📌 Disclaimer

These programs are created for **educational and practical purposes**.

You are free to study, modify, and adapt the programs according to your **college syllabus, laboratory requirements, or learning objectives**.

---

## 📚 Happy Coding!

**Learn → Practice → Understand → Build**

⭐ If you find this repository useful, don't forget to **Star the repository**!
