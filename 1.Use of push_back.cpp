#include<iostream>
#include<deque>

using namespace std;

int main()
{
    // Declare variables
    int n, value;
    deque<int> deque1;

    // Prompt user for the number of elements to store in the deque
    cout << "How many elements you want to store in deque: " << endl;
    cin >> n;

    // For taking input from the user and adding elements to the deque
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the element number " << i + 1 << ": " << endl;
        cin >> value;
        deque1.push_back(value);
    }

    // For printing the elements of the deque
    for (int i = 0; i < n; i++)
    {
        cout << "The element number " << i + 1 << " is = " << deque1[i] << endl;
    }

    return 0;
}
