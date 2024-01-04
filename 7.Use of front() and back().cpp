#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 6, 6};

    cout << deque1.front() << endl;
    cout << deque1.back();

    return 0;
}
