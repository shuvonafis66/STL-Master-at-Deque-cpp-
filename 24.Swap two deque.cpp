#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1(5, 200);
    deque<int> deque2 = {1, 2, 3, 4, 5};

    deque1.swap(deque2);

    cout << "The elements of deque 1 are: " << endl;

    for (auto i : deque1)
    {
        cout << i << " ";
    }

    cout << endl;

    cout << "The elements of deque 2 are: " << endl;

    for (auto i : deque2)
    {
        cout << i << " ";
    }

    return 0;
}
