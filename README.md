# Factory Queue

A C++ console application for managing widget orders in a factory queue. The program helps staff add orders, process them in sequence, and update order details as customer requests change.

## Overview

- Add customer orders to the queue
- Remove orders by order number
- View all pending orders in order sequence
- Process the next order at the front of the queue

This project demonstrates queue-based data management and menu-driven workflow design.

## Why This Project Matters

Factories receive orders continuously and must process them in the order they arrive. Without a structured queue, order handling becomes disorganized and customers may be served out of sequence. This application keeps order processing fair and efficient.

## Features

- FIFO queue processing for factory orders
- Unique order number generation
- Order removal by order number
- Queue size and pending order checks

## Technical Stack

- Language: C++
- Programming Paradigm: Object-oriented programming
- Core Concepts: queue data structure, class design, menu logic
- Data Structure: FIFO queue for order sequencing

## Application Design

- Order: stores customer name, order number, and widget count
- Queue Manager: controls the pending order list
- Menu System: supports all user actions
- Validation Logic: checks order numbers and input values

This structure keeps the queue logic clear and easy to maintain.

## Project Structure

```text
Factory-Queue/
├── main.cpp
├── order.h
├── order.cpp
├── README.md
└── Ramirez Joaquin - Software Design Document Factory Queue.pdf
```

## How to Run

1. Clone the repository.
2. Open the project in Visual Studio.
3. Build the solution.
4. Run the application.
5. Use the menu to manage the queue.

## Example Workflow

- Add a new widget order
- View pending orders in queue order
- Process the next order in line
- Update an order if widget quantity changes

## Testing and Validation

The program includes test cases for queue operations, order removal, processing, and updates. It also checks that the queue behaves correctly when empty and that order numbers remain unique.

## Software Design Document

The full design document for this project is available in the repository:

[Ramirez, Joaquin - Software Design Document Factory Queue](./Ramirez%20Joaquin%20-%20Software%20Design%20Document%20Factory%20Queue.pdf)
