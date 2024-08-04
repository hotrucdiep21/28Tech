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

    int num = 0;

    for (int i = 0; i < n; i++)
    {
        bool check = true;
        for ( int j = 0; j < i; j++)
        {
            if(arr[i]==arr[j]) {
                check = false;
                break;
            }
        }
        if(check) {
            num+=1;
        }
    }
    cout << num ;
    return 0;
    
}