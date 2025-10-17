#include <iostream>
#include <string>
using namespace std;

// Define the SalesRecord structure
struct SalesRecord {
    string month;
    float amount;
};

int main() {
    // Declare an array of 12 SalesRecord structures
    SalesRecord sales[12];
   
    cout << "Enter sales data for 12 months:" << endl;
    cout << "===============================" << endl;
   
    // Use a for loop to accept user input for all 12 months
    for(int i = 0; i < 12; i++) {
        cout << "Month " << i + 1 << ":" << endl;
        cout << "Enter month name: ";
        cin >> sales[i].month;
        cout << "Enter sales amount: ";
        cin >> sales[i].amount;
        cout << endl;
    }
   
    // Initialize variables to track max and min sales
    int maxIndex = 0;  // Index of month with maximum sales
    int minIndex = 0;  // Index of month with minimum sales
   
    // Single pass with a for loop to find max and min sales
    for(int i = 1; i < 12; i++) {
        // Check for maximum sales
        if(sales[i].amount > sales[maxIndex].amount) {
            maxIndex = i;
        }
        // Check for minimum sales
        if(sales[i].amount < sales[minIndex].amount) {
            minIndex = i;
        }
    }
   
    // Display results
    cout << "\nSales Analysis Results:" << endl;
    cout << "======================" << endl;
    cout << "Month with maximum sales: " << sales[maxIndex].month
         << " ($" << sales[maxIndex].amount << ")" << endl;
    cout << "Month with minimum sales: " << sales[minIndex].month
         << " ($" << sales[minIndex].amount << ")" << endl;
   
    return 0;
}

