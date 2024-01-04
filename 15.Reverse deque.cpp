#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3146, 10, 11, 23, 45};

    for (auto it = deque1.rbegin(); it != deque1.rend(); it++)
    {
        cout << " " << *it;
    }

    return 0;
}
