#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 5, 6, 2, 1, 131, 13};
    sort(deque1.begin(), deque1.end());

    cout << binary_search(deque1.begin(), deque1.end(), 13) << endl;

    return 0;
}
