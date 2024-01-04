#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<pair<int, int>> deque1;

    deque1.push_back({1, 3});
    deque1.emplace_back(4, 5);

    cout << deque1[1].second;

    return 0;
}
