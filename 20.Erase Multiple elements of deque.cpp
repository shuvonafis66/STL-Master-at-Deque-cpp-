#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 8, 34, 3536};

    deque1.erase(deque1.begin() + 2, deque1.begin() + 4);

    for (auto it : deque1)
    {
        cout << it << " ";
    }

    return 0;
}
