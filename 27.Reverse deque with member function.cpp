#include <iostream>
#include <deque>

using namespace std;

int main()
{
    // Get the deque
    deque<int> a = {1, 45, 54, 71, 76, 12};

    // Print the deque
    cout << "Deque: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // Reverse the deque
    reverse(a.begin(), a.end());

    // Print the reversed deque
    cout << "Reversed Deque: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}
