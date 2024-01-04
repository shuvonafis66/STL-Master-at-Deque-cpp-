#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int>deque1={1,2,3,4,5,6,7,9};

    deque1.pop_front();
    deque1.push_front(9);
    deque1.emplace_front(151);

    for(auto i: deque1)
    {
        cout<<i<<" ";
    }

    return 0;
}

