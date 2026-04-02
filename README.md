# Project-8-level-5-Queue-Line

# Queue Line Management System in C++

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue)
![Data Structure](https://img.shields.io/badge/Data%20Structure-Queue-green)
![Project](https://img.shields.io/badge/Type-Educational-orange)

---

# Project Overview

This project implements a **Queue Line Management System** in **C++** using the **Queue and Stack Data Structures**.

The system simulates real-world ticket queues used in places such as:

* Banks
* Government service centers
* Hospitals
* Customer service offices

Each client receives a **ticket number**, and the system manages the order of clients waiting to be served.

---

# Key Concepts Used

The project demonstrates the use of:

* **Queue (FIFO)** → First client served first
* **Stack (LIFO)** → Used for reversing ticket display order
* **Object-Oriented Programming**
* **Nested Classes**
* **Date & Time Handling**

---

# System Features

## Ticket Issuing

Each client receives a ticket with:

* Ticket Number
* Prefix (Queue type)
* Ticket Time
* Number of waiting clients
* Expected serving time

Example ticket:

```id="t1"
A01
12/10/2025 10:30
Waiting Clients = 3
Serve Time In 30 Minutes
```

---

# Queue Operations

| Function        | Description                         |
| --------------- | ----------------------------------- |
| IssueTicket     | Adds a new client ticket            |
| ServeNextClient | Removes the first client from queue |
| WaitingClients  | Returns number of waiting clients   |
| ServedClients   | Returns number of served clients    |
| WhoIsNext       | Shows next ticket to be served      |

---

# Ticket Display Methods

The system supports multiple ways to display the queue:

### Right → Left

```id="t2"
A01 <-- A02 <-- A03 <-- A04
```

### Left → Right

```id="t3"
A04 <-- A03 <-- A02 <-- A01
```

---

# Queue Information

Example output:

```id="t4"
Queue Info

Prefix         = A0
Total Tickets  = 5
Served Clients = 1
Waiting Clients= 4
```

---

# Project Structure

```id="t5"
QueueLineSystem
│
├── clsMyQueueLine.h
├── clsDate.h
├── main.cpp
└── README.md
```

---

# Example Usage

## Creating Queue

```cpp id="t6"
clsMyQueueLine PayBillsQueue("A0", 10);
clsMyQueueLine SubscriptionsQueue("B0", 5);
```

### Parameters

| Parameter        | Meaning                                   |
| ---------------- | ----------------------------------------- |
| Prefix           | Ticket prefix                             |
| AverageServeTime | Average service time per client (minutes) |

---

# Example Program Flow

1️⃣ Issue Tickets

```id="t7"
PayBillsQueue.IssueTicket();
PayBillsQueue.IssueTicket();
PayBillsQueue.IssueTicket();
```

2️⃣ Show Queue Info

```id="t8"
PayBillsQueue.PrintInfo();
```

3️⃣ Serve Next Client

```id="t9"
PayBillsQueue.ServeNextClient();
```

---

# Algorithm Visualization

### Queue Behavior (FIFO)

```id="t10"
Ticket Issued Order:

A01 → A02 → A03 → A04

Serving Order:

A01 served first
A02 served second
A03 served third
```

---

# Learning Objectives

This project helps practice:

* Queue Data Structure
* Stack Data Structure
* Object-Oriented Design
* Simulation of real-world systems
* Time estimation algorithms

---

# Possible Improvements

Future upgrades could include:

* GUI interface
* Multiple service windows
* Priority queues
* Database storage
* Real-time display system

---

# Author

Ahmed Mohamed
