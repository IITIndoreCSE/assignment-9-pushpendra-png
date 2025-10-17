#include <iostream>
using namespace std;

// Define the Point structure
struct Point {
    float x;
    float y;
};

int main() {
    // Declare an array of 7 Point structures
    Point points[7];
   
    cout << "Enter coordinates for 7 points:" << endl;
    cout << "==============================" << endl;
   
    // Use a for loop to read the x and y coordinates for all 7 points
    for(int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << ":" << endl;
        cout << "Enter x coordinate: ";
        cin >> points[i].x;
        cout << "Enter y coordinate: ";
        cin >> points[i].y;
        cout << endl;
    }
   
    // Count points in the first quadrant
    int countFirstQuadrant = 0;
   
    // Iterate through the array to count points in first quadrant
    for(int i = 0; i < 7; i++) {
        if(points[i].x > 0 && points[i].y > 0) {
            countFirstQuadrant++;
        }
    }
   
    // Display results
    cout << "\nResults:" << endl;
    cout << "========" << endl;
    cout << "Total points entered: 7" << endl;
    cout << "Points in first quadrant (x > 0 and y > 0): " << countFirstQuadrant << endl;
   
    // Optional: Display all points and their quadrant information
    cout << "\nDetailed Point Information:" << endl;
    cout << "==========================" << endl;
    for(int i = 0; i < 7; i++) {
        cout << "Point " << i + 1 << ": (" << points[i].x << ", " << points[i].y << ")";
       
        if(points[i].x > 0 && points[i].y > 0) {
            cout << " - First Quadrant" << endl;
        } else if(points[i].x < 0 && points[i].y > 0) {
            cout << " - Second Quadrant" << endl;
        } else if(points[i].x < 0 && points[i].y < 0) {
            cout << " - Third Quadrant" << endl;
        } else if(points[i].x > 0 && points[i].y < 0) {
            cout << " - Fourth Quadrant" << endl;
        } else {
            cout << " - On Axis" << endl;
        }
    }
   
    return 0;
}

