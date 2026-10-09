# 📚 Data Structures Practical Programs in C

![Language](https://img.shields.io/badge/Language-C-blue)
![Practicals](https://img.shields.io/badge/Practicals-01--21-green)
![IDE](https://img.shields.io/badge/IDE-Microsoft%20Visual%20C-blue)

Beginner-friendly C programs for Data Structures practicals, college lab work, and viva preparation.

This repository is developed and tested for **Microsoft Visual C / Visual Studio on Windows**. Linux commands are included only as an optional reference.

## 📌 Practical List (01–21)

| No. | Practical | Topic |
|---:|---|---|
| 01 | Menu-Driven Stack | Stack |
| 02 | Menu-Driven Double Stack | Double Stack |
| 03 | Infix to Suffix Expression | Stack / Expression |
| 04 | Menu-Driven Simple Queue | Queue |
| 05 | Menu-Driven Double Queue | Double Queue |
| 06 | Menu-Driven Circular Queue | Circular Queue |
| 07 | Process Queue | Process Scheduling |
| 08 | Priority Queue | Priority Queue |
| 09 | Singly Linked List | Linked List |
| 10 | Singly Circular Linked List | Circular Linked List |
| 11 | Doubly Linked List | Doubly Linked List |
| 12 | Insertion Sort | Sorting |
| 13 | Merge Sort | Sorting |
| 14 | Quick Sort | Sorting |
| 15 | Radix Sort | Sorting |
| 16 | Heap Sort | Sorting |
| 17 | Linear and Binary Search | Searching |
| 18 | Binary Tree: Insert and Traversals | Binary Tree |
| 19 | Binary Tree: Iterative Insert, Display and Delete | Binary Search Tree |
| 20 | Multilinked Matrix: Create and Display | Matrix |
| 21 | Matrix Addition and Multiplication | Matrix Operations |

---

## 🧩 Program Details

### 01. Menu-Driven Stack
**Operations:** Push, Pop, Peep, Modify, Display. A stack follows **LIFO (Last In, First Out)**.

### 02. Menu-Driven Double Stack
**Operations:** Push, Pop, Peep, Modify, Display. Two stacks share one array and grow from opposite ends.

### 03. Infix to Suffix Expression
Converts infix notation to suffix/postfix notation using a stack.
```text
Infix:  A+B*C
Suffix: ABC*+
```

### 04. Menu-Driven Simple Queue
**Operations:** Insert, Delete, Modify, Display. A queue follows **FIFO (First In, First Out)**.

### 05. Menu-Driven Double Queue
**Operations:** Insert, Delete, Modify, Display. A double-ended queue (deque) supports operations at both ends, according to the implementation.

### 06. Menu-Driven Circular Queue
**Operations:** Insert, Delete, Modify, Display. Reuses queue positions by treating the final position as connected to the first.

### 07. Process Queue
Demonstrates process execution in turns. The current program uses a time quantum of **2 burst-time units** per turn until each process finishes.

### 08. Priority Queue
Organizes elements into priority groups and processes the higher-priority group first.

### 09. Singly Linked List
**Operations:** Insert, Delete, Modify, Display. Each node stores data and a pointer to the next node.
```text
[Data | Next] → [Data | Next] → [Data | NULL]
```

### 10. Singly Circular Linked List
**Operations:** Insert, Delete, Modify, Display. The last node points back to the first node.
```text
10 → 20 → 30
↑         ↓
└─────────┘
```

### 11. Doubly Linked List
**Operations:** Insert, Delete, Modify, Display. Each node has previous and next pointers.
```text
NULL ← 10 ⇄ 20 ⇄ 30 → NULL
```

### 12. Insertion Sort
Inserts each element into its correct place in the sorted portion. Best case `O(n)`; average/worst case `O(n²)`.

### 13. Merge Sort
Divides the array, sorts each part, and merges the parts. Typical time complexity: `O(n log n)`.

### 14. Quick Sort
Partitions the array around a pivot. Average complexity: `O(n log n)`; worst case: `O(n²)`.

### 15. Radix Sort
Sorts numbers digit by digit. The provided implementation is intended for non-negative integers.

### 16. Heap Sort
Uses a max heap to sort elements in ascending order. Time complexity: `O(n log n)`.

### 17. Linear and Binary Search
- **Linear Search:** checks items one by one; `O(n)`.
- **Binary Search:** halves the search range repeatedly; `O(log n)`.
- **Important:** Binary Search requires a sorted array.

### 18. Binary Tree: Insert and Traversals
**Operations:** Insert, Preorder, Inorder, Postorder. This practical uses BST-style insertion: smaller values go left and larger values go right.
- **Preorder:** Root → Left → Right
- **Inorder:** Left → Root → Right
- **Postorder:** Left → Right → Root

### 19. Binary Tree: Iterative Insert, Display and Delete
**Operations:** Iterative Insert, Iterative Display, Delete a node by value. Display uses a stack for iterative inorder traversal. Deletion handles nodes with zero, one, or two children.

### 20. Multilinked Structure of Matrix: Create and Display
**Operations:** Create, Display. A node represents a non-zero matrix element and stores its row, column, value, right link, and down link.

### 21. Matrix Addition and Multiplication
**Operations:** Matrix Addition, Matrix Multiplication.
- **Addition:** both matrices must have the same dimensions.
- **Multiplication:** columns in the first matrix must equal rows in the second matrix.
- **Implementation note:** The beginner-friendly version currently uses 2D arrays. If multilinked nodes are specifically required, use a linked-node implementation.

---

## 📖 Topics Covered
- **Stacks:** Push, Pop, Peep, Modify, Display, expression conversion
- **Queues:** Simple, double-ended, circular, process, and priority queues
- **Linked Lists:** Singly, singly circular, and doubly linked lists
- **Sorting:** Insertion, Merge, Quick, Radix, and Heap Sort
- **Searching:** Linear and Binary Search
- **Trees:** BST insertion, traversals, iterative display, and deletion
- **Matrices:** Multilinked representation, creation, display, addition, multiplication

---

## 🖥️ How to Run in Microsoft Visual C / Visual Studio (Windows)

These practical programs are intended to be compiled and run in **Microsoft Visual C / Visual Studio**.

1. Open **Microsoft Visual Studio**.
2. Select **Create a new project**.
3. Choose **Console App** for C/C++ (the exact template name depends on your Visual Studio version).
4. Create/open the C source file, for example `program1.c`.
5. Paste the required program code into the `.c` file.
6. Save the file.
7. Run using **Debug → Start Without Debugging** (`Ctrl + F5`) or use **Build → Build Solution** first.

**Important:** Select/keep the source file extension as `.c` to compile it as C rather than C++. Some older Microsoft Visual C versions have a different project setup, but the same C source code should be saved in a `.c` file.

### If you use the Visual C command-line compiler

Open the **Developer Command Prompt for Visual Studio**, go to the folder containing the source file, and compile:

```bat
cl program1.c
```

Then run the generated executable:

```bat
program1.exe
```

Replace `program1.c` with the actual filename.

### Optional: Running on Linux with GCC

The following commands are for Linux only; **you do not need these commands when using Microsoft Visual C on Windows**.

```bash
gcc program.c -o program
./program
```

---

## 🎓 Learning Objectives
- Practise C programming
- Understand data structures and algorithms
- Prepare for practical examinations and viva
- Learn sorting, searching, trees, queues, linked lists, and matrix operations

## 👨‍💻 Author
**Vijay Gohil**

- GitHub: [GohilVijay07](https://github.com/GohilVijay07)
- Repository: [Data-Structur](https://github.com/GohilVijay07/Data-Structur)

## ⭐ Support
If this repository helps you, consider giving it a ⭐ Star on GitHub.

## 📌 Disclaimer
These programs are for educational and practical purposes. Follow your college syllabus and instructor's requirements.

**Happy Coding!**  
*Learn → Practise → Understand → Build*
