#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 5, 6, 2, 1, 131, 13};

    auto i = find(deque1.begin(), deque1.end(), 131) - deque1.begin();
    cout << "The index of the element is: " << i;

    return 0;
}
