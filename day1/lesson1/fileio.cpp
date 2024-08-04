// fileio.cpp
#include "fileio.h"
#include <iostream>
#include <fstream>
using namespace std;

void readArrayFromFile(const string &filename, int *&arr, int &n)
{
    ifstream input(filename); // Open input file for reading
    if (!input)
    {
        cerr << "Error opening file " << filename << endl;
        exit(1);
    }
    input >> n;            // Read the number of elements
    arr = new int[n];      // Dynamically allocate an array of size n
    for (int i = 0; i < n; ++i)
    {
        input >> arr[i]; // Read each element into the array
    }
    input.close(); // Close the input file
}

void writeArrayToFile(const string &filename, int *arr, int n)
{
    ofstream output(filename); // Open output file for writing
    if (!output)
    {
        cerr << "Error opening file " << filename << endl;
        exit(1);
    }
    for (int i = 0; i < n; ++i)
    {
        output << arr[i] << " "; // Write each element to the file
    }
    output.close(); // Close the output file
}
