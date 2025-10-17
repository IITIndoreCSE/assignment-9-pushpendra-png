#include <iostream>
using namespace std;

// Define the Item structure
struct Item {
    int id;
    float cost;
};

int main() {
    // Declare an array of 6 Item structures
    Item items[6];
   
    // Initialize the first four elements with sample data
    items[0] = {101, 25.50f};
    items[1] = {102, 75.80f};
    items[2] = {103, 45.25f};
    items[3] = {104, 120.75f};
    // The last two elements (items[4] and items[5]) remain uninitialized
   
    cout << "Items with cost greater than 50.00:" << endl;
    cout << "-----------------------------------" << endl;
   
    // Use a for loop to iterate through the entire array
    for(int i = 0; i < 6; i++) {
        // Display details only if cost is greater than 50.00
        if(items[i].cost > 50.00) {
            cout << "Item ID: " << items[i].id << endl;
            cout << "Cost: $" << items[i].cost << endl;
            cout << "-------------------" << endl;
        }
    }
   
    return 0;
}

