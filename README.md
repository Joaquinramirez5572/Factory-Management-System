# Factory Management System

A C++ console application for managing factory operations, tracking production schedules, monitoring equipment status, and organizing workforce assignments. The project is designed to help factory managers optimize production workflows, maintain equipment inventories, and coordinate employee schedules efficiently.

## Overview

Factory Management System is a desktop application built in C++ that allows factory managers to:
- record and track production orders and schedules
- manage equipment inventory and maintenance logs
- assign workers to production lines and tasks
- monitor production metrics and efficiency statistics
- validate data entry to reduce operational errors
- organize records by department, shift, or equipment type

This project demonstrates object-oriented programming, modular system design, and practical software architecture for enterprise factory operations.

## Why This Project Matters

Modern factories handle complex operations involving multiple production lines, equipment maintenance schedules, and workforce coordination. Without a structured management system, tracking production orders, equipment status, and worker assignments becomes error-prone and inefficient. This application gives factory managers a centralized platform to organize production data, track equipment lifecycles, and schedule workforce assignments—enabling better decision-making and operational efficiency.

## Features

- Persistent data storage using file I/O for factory records
- Production order tracking with status monitoring
- Equipment inventory management and maintenance scheduling
- Worker assignment and shift scheduling
- Production metrics and efficiency analytics
- Input validation for safe and consistent data entry
- Sorting and filtering of records by department or equipment type
- Statistical reporting on production output and equipment utilization
- Practical factory optimization recommendations based on operational data

## Technical Stack

- Language: C++
- Programming Paradigm: Object-oriented programming
- Core Concepts: std::vector, std::sort, lambda expressions, file handling, data persistence
- Design Approach: modular classes with separated responsibilities

## Application Design

The application is organized around a comprehensive set of core components:

- FactoryManager: manages overall factory operations and user workflows
- ProductionOrder: represents manufacturing orders with scheduling and tracking
- Equipment: tracks machinery, maintenance history, and operational status
- Worker: manages employee assignments, shifts, and task allocation
- Department: organizes production lines and staff by functional area
- Data persistence layer: saves and reads factory data from local storage
- Validation logic: ensures operational data is accurate and consistent
- Analytics and reporting: computes production metrics and efficiency statistics

This structure keeps the system maintainable, scalable, and demonstrates clean separation of responsibilities—critical in enterprise-level software design.

## Project Structure

```text
Factory-Management-System/
├── main.cpp
├── FactoryManager.h
├── FactoryManager.cpp
├── ProductionOrder.h
├── ProductionOrder.cpp
├── Equipment.h
├── Equipment.cpp
├── Worker.h
├── Worker.cpp
├── Department.h
├── Department.cpp
├── data.txt
├── README.md
└── Ramirez Joaquin - Software Design Document Factory Management System.pdf
```

## How to Run

1. Clone the repository.
2. Open the project in Visual Studio.
3. Build the solution.
4. Run the application.
5. Enter and manage factory operations through the console interface.

## Example Workflow

- Add a new production order with deadline and specifications
- Assign workers to production lines based on availability and skills
- Log equipment maintenance and track maintenance schedules
- View production metrics and efficiency reports
- Adjust resource allocation to meet production targets
- Monitor department-level performance and output statistics

## Testing and Validation

The program includes comprehensive validation checks to improve operational reliability and reduce data entry errors. It also supports data persistence so factory records remain available across application sessions for continuity and audit trails.

## Software Design Document

The full design document for this project is available in the repository:

[Ramirez, Joaquin - Software Design Document Factory Management System](./Ramirez%20Joaquin%20-%20Software%20Design%20Document%20Factory%20Management%20System.pdf)
