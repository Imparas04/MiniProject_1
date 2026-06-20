# 🚒 Firetruck Route Finder

## 📌 Project Overview

Firetruck Route Finder is a C++ project that helps find all possible routes from a fire station to a destination street corner in a city map.

The city is represented as a graph where:

* Street corners = Nodes
* Roads between street corners = Edges

The program takes street connections as input and calculates all possible routes from the fire station (Street Corner 1) to the destination using **Depth First Search (DFS)** and **Backtracking**.

---

## 🎯 Objective

The main goal of this project is to simulate how a firetruck can find all available paths to reach an emergency location.

This project helps in understanding:

* Graph Representation using Adjacency Matrix
* Recursion
* Depth First Search (DFS)
* Backtracking Algorithm

---

## ⚙️ Features

* Takes destination street corner as input
* Accepts street connections between corners
* Finds all possible routes from fire station to destination
* Displays each route
* Counts total number of possible routes

---

## 🛠️ Technologies Used

* Language: C++
* Compiler: GCC / g++
* IDE: CodeBlocks / Dev-C++ / VS Code

---

## 🧠 Algorithm Used

### 1. Adjacency Matrix

The graph is stored using a 20x20 adjacency matrix.

Example:

```cpp
int paths[20][20];
```

---

### 2. Depth First Search (DFS)

DFS is used to explore all possible paths from source to destination.

---

### 3. Backtracking

After exploring one path, the program goes back and checks other possible paths.

---

## 📂 Project Structure

```bash
Firetruck-Route-Finder/
│
├── main.cpp
└── README.md
```

---

## ▶️ How to Run

### Step 1: Compile the program

```bash
g++ main.cpp -o firetruck
```

### Step 2: Run the program

```bash
./firetruck
```

---

## 📥 Input Format

1. Enter destination street corner
2. Enter street connections
3. Stop input by entering:

```bash
0 0
```

Example:

```bash
Enter the destination street corner: 6
Enter the street connections:
1 2
1 3
2 4
3 4
4 6
0 0
```

---

## 📤 Output Example

```bash
Routes from the firestation to streetcorner 6:
1 2 4 6
1 3 4 6

There are 2 routes from the firestation to streetcorner 6.
```

---

## 📚 Learning Outcomes

By building this project, I learned:

* Graph data structures
* DFS traversal
* Recursive problem solving
* Backtracking technique
* C++ implementation of graph algorithms

---

## 🚀 Future Improvements

* Add shortest route calculation
* GUI visualization of routes
* Use weighted graphs for realistic road distances
* Improve scalability for larger maps

---

## 👨‍💻 Author

**Mahendra Choudhary**
First Year Engineering Student

---

## ⭐ GitHub

If you like this project, feel free to star the repository.
