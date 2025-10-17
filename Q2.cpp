#include <iostream>
using namespace std;

// Define the Color structure
struct Color {
    int red;
    int green;
    int blue;
};

int main() {
    // Declare and initialize an array of 5 Color structures with sample RGB values
    Color colors[5] = {
        {255, 0, 0},      // Red
        {0, 255, 0},      // Green
        {0, 0, 255},      // Blue
        {128, 128, 128},  // Gray
        {255, 255, 0}     // Yellow
    };
   
    cout << "Original RGB Values:" << endl;
    cout << "====================" << endl;
   
    // Display original RGB values
    for(int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": ";
        cout << "R=" << colors[i].red << ", ";
        cout << "G=" << colors[i].green << ", ";
        cout << "B=" << colors[i].blue << endl;
    }
   
    cout << "\nInverting the first 3 colors..." << endl;
   
    // Use a for loop to invert the color values of the first 3 elements
    for(int i = 0; i < 3; i++) {
        colors[i].red = 255 - colors[i].red;
        colors[i].green = 255 - colors[i].green;
        colors[i].blue = 255 - colors[i].blue;
    }
   
    cout << "\nNew RGB Values After Inversion:" << endl;
    cout << "===============================" << endl;
   
    // Display the new RGB values for all 5 elements
    for(int i = 0; i < 5; i++) {
        cout << "Color " << i + 1 << ": ";
        cout << "R=" << colors[i].red << ", ";
        cout << "G=" << colors[i].green << ", ";
        cout << "B=" << colors[i].blue << endl;
    }
   
    return 0;
}

