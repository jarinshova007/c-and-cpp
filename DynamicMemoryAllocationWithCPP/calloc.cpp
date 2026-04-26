#include<iostream>
#include<stdlib.h>
using namespace std;

// take input using dynamic memory allocation
int main() {
    // for multiple integer
    // block an empty space in the memory
    int *ptr1 = (int*) calloc(1, sizeof(int));

    // Print the integer before taking input
    cout << "before taking input: pointer1 = " << *ptr1 << endl;

    // taking input
    cout << "pointer1 = ";
    cin >> *ptr1;

    // Print the integer after taking input
    cout << "after taking input: pointer1 = " << *ptr1 << endl;

    cout << "\n";

    // for multiple integer
    // scan the number of integer you want to store
    cout << "number of inputs = ";
    int n;
    cin >> n;

    // block empty spaces in the memory
    int *ptr2 = (int*) calloc(n, sizeof(int));

    // print the integers before taking inputs
    cout << "before taking inputs: pointer2: ";
    for (int i = 0; i < n; i++) {
        cout << ptr2[i] << " ";
    }

    cout << "\n";

    // taking inputs
    cout << "take the input of " << n << " integers:" << endl;

    for (int i = 0; i < n; i++) {
        cin >> ptr2[i];
    }

    // print the integers after taking inputs
    cout << "after taking inputs: pointer2:" << endl;

    for (int i = 0; i < n; i++) {
        cout << ptr2[i] << "\n";
    }
}

