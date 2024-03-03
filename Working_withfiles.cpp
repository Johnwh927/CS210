//John Hill
//CS-210 Programming Languages: 5-2 Working With Files
//2/12/24

#include <iostream>
#include <fstream>
#include <string>
#include <cmath>

using namespace std;

// Function to convert Fahrenheit to Celsius
int fahrenheitToCelsius(int fahrenheit) {
    return round((fahrenheit - 32) * 5.0 / 9.0);
}

int main() {
    string city = "";
    int fahrenheit = 0;

    ifstream inputFile;
    ofstream outputFile;

    // Open input file
    inputFile.open("C:/Users/johnw/OneDrive/Desktop/FahrenheitTemperature.txt");

    if (!inputFile) {
        cout << "Error opening input file!" << endl;
        return 1; // Exit with error
    }

    // Open output file
    outputFile.open("C:/Users/johnw/OneDrive/Desktop/CelsiusTemperature.txt");

    if (!outputFile) {
        cout << "Error opening output file!" << endl;
        inputFile.close(); // Close input file before exiting
        return 1; // Exit with error
    }

    // Read data from input file and write to output file
    while (inputFile >> city >> fahrenheit) {
        // Convert Fahrenheit to Celsius
        int celsius = fahrenheitToCelsius(fahrenheit);

        // Write to output file
        outputFile << city << " " << celsius << endl;
    }

    // Close files
    inputFile.close();
    outputFile.close();

    cout << "Conversion Complete!" << endl;

    return 0;
}
	
