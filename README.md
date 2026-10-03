# Factory Queue

A C++ console application for managing widget orders in a factory queue system. The application helps factory staff track incoming orders, process them sequentially, and manage order details efficiently through a menu-driven interface.

## Overview

Factory Queue is a desktop application built in C++ that allows factory staff to:
- add new customer orders to the queue with customer name and widget count
- remove orders from the queue by order number
- check the total number of pending orders waiting to be processed
- view a detailed list of all pending orders in queue sequence
- process the next order at the front of the queue
- update existing orders by changing the number of widgets requested

This project demonstrates object-oriented programming, queue data structures, and practical software design for factory order management.

## Why This Project Matters

Factories receive orders throughout the day that must be processed in the sequence they arrive. Without a structured queue system, tracking order status, managing customer requests, and prioritizing production becomes chaotic and error-prone. This application gives factory managers a reliable way to organize incoming orders, track their status, and process them systematically—ensuring fair order fulfillment and operational efficiency.

## Features

- Queue-based order management with FIFO (First In, First Out) processing
- Add customer orders with automatic unique order number generation
- Remove orders from the queue by order number
- Check current queue size and pending order count
- Display all pending orders with customer names and widget quantities
- Process orders sequentially from the front of the queue
- Modify widget quantities for existing orders
- Input validation for safe order entry
- Menu-driven console interface for easy operation
- Order number uniqueness checking to prevent duplicates

## Technical Stack

- Language: C++
- Programming Paradigm: Object-oriented programming
- Core Concepts: std::queue, class design, data management, menu systems
- Data Structure: Queue (FIFO) for order sequencing

## Application Design

The application is organized around a core component:

- Order: represents a single customer order with customer name, order number, and widget quantity
- OrderQueue: manages the queue of pending orders and user operations
- Menu system: provides six main operations for interacting with the queue
- Validation logic: ensures order numbers are unique and input is valid
- Processing logic: handles sequential order fulfillment from queue front

This structure demonstrates proper use of the queue data structure and clean separation of concerns in order management systems.

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
5. Use the menu to add orders, process them, and manage the queue.

## Example Workflow

- Add a customer order with their name and desired widget quantity
- View all pending orders in the queue to track incoming requests
- Check how many orders are currently waiting to be processed
- Process the next order at the front of the queue
- Update an order if the customer requests a different widget quantity
- Remove an order if the customer cancels their request
- Repeat as new orders arrive throughout the day

## Testing and Validation

The program includes comprehensive test cases to verify all menu operations function correctly. It validates that orders are processed in the correct sequence (FIFO), prevents duplicate order numbers, and handles edge cases such as attempting to process an empty queue or remove non-existent orders.

## Software Design Document

The full design document for this project is available in the repository:

[Ramirez, Joaquin - Software Design Document Factory Queue](./Ramirez%20Joaquin%20-%20Software%20Design%20Document%20Factory%20Queue.pdf)
