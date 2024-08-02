#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream input("input.txt"); // Open input file for reading
    int n;
    input >> n;            // Read the number of elements
    int *arr = new int[n]; // Dynamically allocate an array of size n
    for (int i = 0; i < n; ++i)
    {
        input >> arr[i]; // Read each element into the array
    }
    // Close the input file
    input.close();
    // Print the array to the console
    cout << "2 so: ";
    for (int i = 0; i < n-1; i++)
    {
        cout << arr[i] + arr[i+1] << " ";
        
    }
    cout << endl;
    cout << "3 so: ";
    for (int i = 0; i < n-2; i++)
    {
        cout << arr[i] + arr[i+1] + arr[i+2] << " ";
        
    }
    cout << endl;
    cout << "4 so: ";
    for (int i = 0; i < n-3; i++)
    {
        cout << arr[i] + arr[i+1] + arr[i+2] + arr[i+3] << " ";
        
    }
    cout << endl;





    delete[] arr; // Free the dynamically allocated memory

    return 0;
}
