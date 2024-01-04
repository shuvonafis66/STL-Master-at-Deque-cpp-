#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1(5, 200);
    deque<int> deque2 = {1, 2, 3, 4, 5};

    deque2.insert(deque2.begin(), deque1.begin(), deque1.end());

    cout << "The elements are: " << endl;

    for (auto i : deque2)
    {
        cout << i << " ";
    }

    return 0;
}


