# Graph Traversal Toolkit

## 🧠 Overview
This C++ project implements graph traversal algorithms with a focus on Dijkstra’s shortest path algorithm. It simulates traversal through various graph topologies using a modular object-oriented approach.

## 👥 Authors
- Aryan Shah
- Tushar Sachan

## 🚀 Features
- 📌 Dijkstra’s algorithm for finding shortest paths from a source node
- 📊 Graph structure using Vertex and Edge classes
- 📂 Multiple test cases provided in the `test_cases/` directory
- 🛠️ Modular code split into `Vertex`, `Edge`, and `Main`

## 🛠️ Technologies Used
- C++17
- Standard Template Library (STL)
- Makefile for compilation
- CLI-based interaction

## ⚙️ How to Compile and Run

### Compile:
1. Navigate to the directory
2. Compile the project:
   ```bash
   make
3. Run:
  ```bash
  ./a.out < test_cases/square-in-square.txt
  ```
Replace the test case with any desired .txt file from the test_cases folder.

## 🧪 Example Test Cases
The test_cases/ directory includes:
- square-in-square.txt
- triangle-in-triangle.txt
- all-odd.txt
- eco-florida.txt
and more...

Each test file represents a graph format suitable for Dijkstra's algorithm processing.

## 📌 Notes
- Ensure C++17 or higher is available on your system
- Makefile assumes a standard Unix-like build environment

