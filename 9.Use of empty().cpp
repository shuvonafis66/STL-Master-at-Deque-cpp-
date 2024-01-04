#include<iostream>
#include<deque>

using namespace std;

int main()
{
    // Before empty
    deque<int> deque1 = {1, 2, 3, 4, 5, 6, 7, 13, 25};

    cout << deque1.empty() << endl;

    // After empty
    deque<int> deque2 = {};

    cout << deque2.empty();

    return 0;
}
