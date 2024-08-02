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
    for (int i = 0; i < n; i++)
    {
        bool check = true;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i] == arr[j]) {
                check = false;
                break;
            }
        }
        if(check) {
            cout << arr[i] << " ";
        }
        
        
    }
    



    delete[] arr; // Free the dynamically allocated memory

    return 0;
}
