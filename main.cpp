// Necessary directives
#include <iostream>
#include "order.h"
#include "order.cpp"
using namespace std;

// Start of main function
int main() {
    Order orderSystem; // Initializes the "system" that manages the queue with all of the individual order objects
    int choice = -1; // Automatically sets the users choice to "false" so the menu options will execute

    cout << "Welcome to our ordering system for our state-of-the-art widgets! Please select one of the following menu options below!" << endl << endl;

    // While the user is not done using the program (they do not select "0"), prompt them with menu options and execute them. Each menu option calls the respective method
    while (choice != 0) {
        cout << "0. End the program" << endl;
        cout << "1. Add an order" << endl;
        cout << "2. Remove an order" << endl;
        cout << "3. Check the number of orders in the queue" << endl;
        cout << "4. Receive a list of the orders currently in the queue" << endl;
        cout << "5. Process the next pending order in the queue" << endl;;
        cout << "6. Update the number of widgets for an order" << endl << endl;
        cout << "Enter a menu option: ";
        cin >> choice; // Asks the user for a menu option
        cout << endl; // Formatting purposes
        
        // Menu option 1 (adds order)
        if (choice == 1) {
            Order newOrder;
            orderSystem.AddOrder(newOrder);
        }

        // Menu option 2 (removes order)
        else if (choice == 2) {
            int orderNum;
            cout << "Please enter the order number: ";
            cin >> orderNum; // Asks the user for their order number
            orderSystem.RemoveOrder(orderNum);
        }

        // Menu option 3 (checks the number of orders)
        else if (choice == 3) {
            orderSystem.CheckNumberOfOrders();
        }

        // Menu option 4 (prints a list of the current orders in the queue)
        else if (choice == 4) {
            orderSystem.PrintPendingOrders();
        }

        // Menu option 5 (processes the next order)
        else if (choice == 5) {
            orderSystem.ProcessNextOrder();
        }

        // Menu option 6 (updates the number of widgets for a given order)
        else if (choice == 6) {
            int orderNum, widgets;
            cout << "Please enter the order number: ";
            cin >> orderNum; // Asks the user for their order number
            cout << "Please enter the amount of widgets you would now like to order: ";
            cin >> widgets; // Asks the user for the new amount of widgets
            orderSystem.ChangeNumWidgets(orderNum, widgets);
        }

        cout << endl; // Fortmatting
    }

    cout << "Thank you for using our ordering system. Have a widget-tastic day!" << endl; // Executes once the user is done

    return 0; // End of program
}
