// Necessary guards/directives
#ifndef ORDER_H
#define ORDER_H
#include <string>
#include <queue> // Queue data structure

using namespace std;

// Class declaration
class Order {
private:
    // Required attributes
    string customerName;
    int orderNum;
    int numWidgets;

    static queue<Order> orderQueue; // Our queue that manages all of our order objects and is shared across all order instances

public:
    Order();  // This order constructor initializes an order objects with no specific values
    Order(string customerName, int orderNum, int numWidgets); // This constructor initializes our individual order objects stored in the queue

    // Required methods
    void AddOrder(Order& order);
    void RemoveOrder(int orderNum);
    void ProcessNextOrder();
    int CheckNumberOfOrders();
    void PrintPendingOrders();
    void ChangeNumWidgets(int orderNum, int numWidgets);
};

#endif // End guard
