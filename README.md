# 🚀 Data Structures & Algorithms

<div align="center">

![DSA Banner](https://capsule-render.vercel.app/api?type=waving\&color=gradient\&height=200\&section=header\&text=Data%20Structures%20%26%20Algorithms\&fontSize=40\&fontAlignY=35\&animation=twinkling)

### 🧠 Learn • Code • Visualize • Solve

**A structured journey through Data Structures & Algorithms using C++**

[![Language](https://img.shields.io/badge/Language-C%2B%2B-blue?style=for-the-badge\&logo=c%2B%2B)](https://isocpp.org/)
[![DSA](https://img.shields.io/badge/Focus-DSA-orange?style=for-the-badge)](#-roadmap)
[![GitHub](https://img.shields.io/badge/Repository-GitHub-black?style=for-the-badge\&logo=github)](https://github.com/RajatBhardwaj2006/Data_Structure_and_algorithms)

</div>

---

## 🧩 What is DSA?

**Data Structures & Algorithms (DSA)** is the foundation of computer science and software engineering.

It teaches us how to:

* 🗂️ Organize and store data efficiently
* ⚡ Solve problems faster
* 🧠 Think logically and systematically
* 📉 Optimize time and space complexity
* 💻 Write scalable and maintainable code
* 🎯 Prepare for technical interviews and competitive programming

> **The goal isn't just to make code work — it's to make code work efficiently.**

---

# 🗺️ DSA Roadmap

```text
                    🧠 DSA
                      │
        ┌─────────────┼─────────────┐
        │             │             │
     Basics        Linear        Non-Linear
        │             │             │
     C++ STL       Arrays        Trees
     Recursion     Strings       Graphs
     Complexity    Linked List   Heaps
                   Stack
                   Queue
                      │
                      ▼
                  Algorithms
                      │
          ┌───────────┼───────────┐
          │           │           │
        Sorting     Searching    Greedy
          │           │           │
          ▼           ▼           ▼
       Merge       Binary       DP
       Quick       Search       Backtracking
       Bubble      Two Pointer  Graph Algorithms
```

---

# 📚 Topics Covered

## 🟢 Fundamentals

* [x] C++ Basics
* [x] Arrays
* [x] Strings
* [x] Functions
* [x] Recursion
* [x] Time Complexity
* [x] Space Complexity

---

## 🔵 STL — Standard Template Library

Learning STL to write cleaner and more efficient C++.

### Containers

* [x] `vector`
* [x] `pair`
* [x] `stack`
* [x] `queue`
* [x] `deque`
* [x] `set`
* [x] `multiset`
* [x] `unordered_set`
* [x] `map`
* [x] `multimap`
* [x] `unordered_map`
* [ ] `priority_queue`

### STL Algorithms

* [x] `sort()`
* [x] `reverse()`
* [x] `max_element()`
* [x] `min_element()`
* [x] `count()`
* [x] `find()`
* [x] `binary_search()`
* [x] `__builtin_popcount()`

---

# 📦 Data Structures

## Arrays

Understanding indexing, traversal, insertion, deletion and searching.

```text
Index:   0    1    2    3    4
         ↓    ↓    ↓    ↓    ↓
Array:  [10] [20] [30] [40] [50]
```

Topics:

* Traversal
* Insertion
* Deletion
* Searching
* Prefix Sum
* Two Pointer
* Sliding Window

---

## 🔗 Linked List

```text
┌─────┐     ┌─────┐     ┌─────┐
│  10 │ ──► │  20 │ ──► │  30 │ ──► NULL
└─────┘     └─────┘     └─────┘
```

Topics:

* Singly Linked List
* Doubly Linked List
* Circular Linked List
* Insertion
* Deletion
* Reversal
* Fast & Slow Pointer

---

## 📚 Stack

**LIFO — Last In, First Out**

```text
       ┌─────┐
 TOP → │  5  │
       ├─────┤
       │  4  │
       ├─────┤
       │  3  │
       ├─────┤
       │  2  │
       ├─────┤
       │  1  │
       └─────┘

       ↓ POP
       5
```

Common operations:

```cpp
push()
pop()
top()
size()
empty()
```

---

## 🚶 Queue

**FIFO — First In, First Out**

```text
FRONT                              BACK
  ↓                                  ↓
[10] → [20] → [30] → [40] → [50]
  ↑                                  ↑
 dequeue                            enqueue
```

---

# 🌳 Trees

Trees represent hierarchical relationships.

```text
             10
           /    \
          5      15
         / \    /  \
        2   7  12  20
```

Topics:

* Binary Tree
* Binary Search Tree
* Tree Traversal
* DFS
* BFS
* Height & Depth
* Lowest Common Ancestor

### Tree Traversals

```text
Preorder   → Root → Left → Right
Inorder    → Left → Root → Right
Postorder  → Left → Right → Root
Level Order → Level by Level
```

---

# 🕸️ Graphs

Graphs are used to represent relationships between objects.

```text
        A
       / \
      B   C
      |   |
      D---E
```

### Graph Traversal

The two fundamental traversal techniques are:

**BFS — Breadth First Search**

```text
Start
  │
  ▼
Level 0 → A
          │
          ▼
Level 1 → B C
          │
          ▼
Level 2 → D E
```

**DFS — Depth First Search**

```text
A
│
B
│
D
│
E
│
C
```

### 🎬 Graph Traversal Visualization

A visual animation makes BFS and DFS much easier to understand:

> **BFS explores level-by-level, while DFS explores as deeply as possible before backtracking.**

[▶️ Watch Graph Traversal Visualization](https://www.youtube.com/results?search_query=BFS+DFS+graph+traversal+animation)

---

# 🔍 Searching Algorithms

| Algorithm     | Average / Typical Complexity |
| ------------- | ---------------------------: |
| Linear Search |                       `O(n)` |
| Binary Search |                   `O(log n)` |
| Hash Search   |               `O(1)` average |

### Binary Search

```text
Sorted Array

[10] [20] [30] [40] [50] [60] [70]
                 ↑
               middle
```

Instead of checking every element, binary search repeatedly cuts the search space in half.

---

# 🔀 Sorting Algorithms

| Algorithm      |       Best |    Average |      Worst |
| -------------- | ---------: | ---------: | ---------: |
| Bubble Sort    |       O(n) |      O(n²) |      O(n²) |
| Selection Sort |      O(n²) |      O(n²) |      O(n²) |
| Insertion Sort |       O(n) |      O(n²) |      O(n²) |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) |
| Quick Sort     | O(n log n) | O(n log n) |      O(n²) |

---

# ⚡ Complexity Cheat Sheet

```text
🚀 O(1)          Constant
📈 O(log n)      Logarithmic
📦 O(n)          Linear
🔄 O(n log n)    Linearithmic
🐢 O(n²)         Quadratic
💀 O(2ⁿ)         Exponential
☠️ O(n!)         Factorial
```

### Think about it like this:

```text
O(1)       █
O(log n)   ██
O(n)       █████
O(n log n) ███████
O(n²)      █████████████████
```

> **Rule of thumb:** As input size grows, lower time complexity usually means better scalability.

---

# 🧠 Problem Solving Patterns

Learning algorithms is not enough. The real skill is recognizing patterns.

### 🔥 Important Patterns

* Two Pointers
* Sliding Window
* Prefix Sum
* Hashing
* Binary Search
* Recursion
* Backtracking
* Greedy
* Divide & Conquer
* Dynamic Programming
* BFS
* DFS
* Topological Sort
* Shortest Path

---

# 🧮 Recursion

A function solving a problem by calling itself.

```cpp
void print(int n) {

    if (n == 0)
        return;

    cout << n << " ";

    print(n - 1);
}
```

```text
print(5)
   ↓
print(4)
   ↓
print(3)
   ↓
print(2)
   ↓
print(1)
   ↓
print(0)
   ↓
 return
```

### The two rules of recursion

```text
1️⃣ Base Case
2️⃣ Recursive Case
```

Without a proper base case:

```text
function()
   ↓
function()
   ↓
function()
   ↓
∞
```

💥 **Stack Overflow**

---

# 🛠️ Tech Stack

<div align="center">

![C++](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge\&logo=c%2B%2B\&logoColor=white)
![VS Code](https://img.shields.io/badge/VS%20Code-007ACC?style=for-the-badge\&logo=visual-studio-code\&logoColor=white)
![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge\&logo=git\&logoColor=white)
![GitHub](https://img.shields.io/badge/GitHub-181717?style=for-the-badge\&logo=github\&logoColor=white)

</div>

---

# 📂 Repository Structure

```text
Data_Structure_and_algorithms/
│
├── 📁 Array/
│   ├── insertion.cpp
│   └── traversal.cpp
│
├── 📁 STL/
│   ├── vector.cpp
│   ├── pair.cpp
│   ├── stack.cpp
│   ├── queue.cpp
│   ├── set.cpp
│   └── map.cpp
│
├── 📁 Recursion/
│   └── recursion.cpp
│
├── 📁 LinkedList/
│
├── 📁 Tree/
│
├── 📁 Graph/
│
├── 📁 Sorting/
│
├── 📁 Searching/
│
└── 📄 README.md
```

---

# 🎯 Learning Goals

```text
[x] Understand C++ fundamentals
[x] Learn STL
[x] Master basic data structures
[ ] Master linked lists
[ ] Master trees
[ ] Master graphs
[ ] Master sorting algorithms
[ ] Master searching algorithms
[ ] Master greedy algorithms
[ ] Master dynamic programming
[ ] Solve 100+ DSA problems
```

---

# 🏆 Problem Solving Philosophy

```text
Understand the problem
        ↓
Think about brute force
        ↓
Analyze complexity
        ↓
Find an optimized approach
        ↓
Write clean code
        ↓
Test edge cases
        ↓
Optimize 🚀
```

> **Don't memorize solutions. Understand the pattern behind them.**

---

# 📈 Progress

I'm continuously adding implementations, explanations, and problems to this repository.

### Current Focus

```text
C++        ███████████████████░░  Learning
STL        ███████████████░░░░░░  Learning
Arrays     █████████████░░░░░░░░  Learning
Recursion  █████████░░░░░░░░░░░░  Learning
Graphs     ███░░░░░░░░░░░░░░░░░░  Coming Soon
Trees      ███░░░░░░░░░░░░░░░░░░  Coming Soon
DP         ░░░░░░░░░░░░░░░░░░░░░  Coming Soon
```

---

# 📚 Resources

### Visual Learning

* 🎬 Graph Algorithms & Visualizations
* 🧩 Algorithm Visualizer
* 📖 C++ Reference
* 💻 Practice Problems

### Practice Platforms

* [LeetCode](https://leetcode.com/)
* [GeeksforGeeks](https://www.geeksforgeeks.org/)
* [Codeforces](https://codeforces.com/)
* [HackerRank](https://www.hackerrank.com/)

---

# ⭐ Why This Repository?

This repository is my **DSA learning journey**.

Every topic contains:

```text
📖 Concept
   +
💻 Implementation
   +
🧪 Examples
   +
⚡ Complexity
   +
🧠 Problem Solving
```

The goal is to build a strong foundation rather than simply collect code.

---

# 🤝 Contributions

Found something that can be improved?

Feel free to:

1. Fork the repository
2. Create a new branch
3. Make your changes
4. Commit your changes
5. Open a Pull Request

Every improvement is welcome! 🚀

---

# 🌟 Star This Repository

If this repository helps you learn DSA, consider giving it a ⭐.

It motivates me to keep adding more implementations and visual explanations.

---

<div align="center">

### 💻 Code. 🧠 Think. ⚡ Optimize. 🚀 Repeat.

**Made with ❤️ while learning DSA**

</div>

![Footer](https://capsule-render.vercel.app/api?type=waving\&color=gradient\&height=100\&section=footer)
