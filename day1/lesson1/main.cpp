// main.cpp
#include <iostream>
#include "fileio.h"
using namespace std;

int main()
{
    int n;
    int *arr = nullptr;

    // Read the array from the input file
    readArrayFromFile("input.txt", arr, n);

    // Process the array (example: print unique elements)
    for (int i = 0; i < n; i++)
    {
        bool check = true;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                check = false;
                break;
            }
        }
        if (check)
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    // Write the array to the output file (optional)
    // writeArrayToFile("output.txt", arr, n);

    delete[] arr; // Free the dynamically allocated memory

    return 0;
}
