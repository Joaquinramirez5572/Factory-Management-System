// Necessary directives
#include "order.h"
#include <string>
#include <queue>
#include <iostream>
#include <cstdlib> // Used for our "random" function to generate order numbers

using namespace std;

queue<Order> Order::orderQueue; // Our queue definition

// Default constructor definition
Order::Order() {

}

// Parameterized constructor (with values)
Order::Order(string name, int num, int widgets) {
    customerName = name;
    orderNum = num;
    numWidgets = widgets;
}

// Add order definition taking in our order as a pass by reference
void Order::AddOrder(Order& order) {
    cout << "Enter your name: "; // Asks the user for their name
    cin.ignore(); // Clears the input buffer so the user can enter their full name even with spaces
    getline(cin, order.customerName);

    cout << "Enter number of widgets: "; // Asks the user for the number of widgets
    cin >> order.numWidgets;

    order.orderNum = rand() % 90000 + 10000; // Generates a random order number from 10000 to 99999

    orderQueue.push(order); // Adds that order to the queue
    cout << "Done. Order #" << order.orderNum << " added!" << endl; // Tells the user that their order is added
}

// RemoveOrder() definition taking in the order number as a parameter
void Order::RemoveOrder(int orderNum) {
    queue<Order> temp; // Create a temporary queue

    // We deque everything from our current queue and enqueue onto our temporary queue until our current queue is empty
    while (!orderQueue.empty()) {
        /* 
         We add every element/order of the queue to the temporary queue 
         except for the one to be removed (because we cannot access at an arbitrary index)
        */
        Order current = orderQueue.front(); 
        orderQueue.pop();

        if (current.orderNum != orderNum)
            temp.push(current);
    }

    orderQueue = temp; // Re-assigns our current order queue with the temporary one
    cout << "Done. Order #" << orderNum << " removed!" << endl; // Tells the user that their order is removed
}

// ProcessNextOrder() definition
void Order::ProcessNextOrder() {
    // If the queue is empty, display the following message to the user
    if (orderQueue.empty()) {
        cout << "No orders are currently in the queue." << endl;
        return; // Immediately exits the method
    }

    Order processed = orderQueue.front(); // Tells the compiler that our "order-to-be-processed" is at the fron
    orderQueue.pop(); // Removes it

    cout << "Done! Order #" << processed.orderNum << " is processed." << endl; // Tells the user that their order is processed
}

// CheckNumberOfOrders() definition
int Order::CheckNumberOfOrders() {
    cout << "There is/are currently " << orderQueue.size() << " order(s) in the queue." << endl; // Tells the user how many orders are in the queue
    return orderQueue.size(); // Also returns the queue size
}

// PrintPendingOrders() definition
void Order::PrintPendingOrders() {
    // If the queue is empty, output the following message to the user
    if (orderQueue.empty()) {
        cout << "There are currently no orders in the queue." << endl;
    }

    // While the temporary queue is not empty, print a list from the front to back. After printing each element, remove it from the temporary queue
    else {
        queue<Order> temp = orderQueue; // Initializes a temporary queue with the same elements (but we preserve the original queue)
        cout << "The current orders in the queue are (from front of the queue to the back):" << endl; // Header for our printed list
        while (!temp.empty()) {
            Order current = temp.front();
            cout << "   -Order #" << current.orderNum << ": " << current.customerName << ", " << current.numWidgets << " widget(s)" << endl; // Formatted list
            temp.pop();
        }
    }
}

// ChangeNumWidgets() definition by taking in the order number and number of widgets
void Order::ChangeNumWidgets(int orderNum, int widgets) {
    queue<Order> temp; // We make a temporary queue, just like for remove order, to modify a given order in the queue

    // We dequeue our current queue's elements and enqueue them to the temporary queue (line 113)
    while (!orderQueue.empty()) {
        Order current = orderQueue.front();
        orderQueue.pop();

        // Changes the user's order number with whatever they want to pass in for the new number of widgets
        if (current.orderNum == orderNum) {
            current.numWidgets = widgets;
        }

        temp.push(current);
    }

    orderQueue = temp; // We restore the value for the queue with our updated temporary queue
}

// End of the .cpp file and respective declarations