#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3146, 10, 11, 23, 45};

    cout << "Sorting the deque in decreasing order " << endl;

    sort(deque1.begin(), deque1.end());

    for (auto it = deque1.rbegin(); it != deque1.rend(); it++)
    {
        cout << " " << *it;
    }

    cout << endl;

    cout << "Sorting the deque in increasing order " << endl;

    // sort(deque1.rbegin(),deque1.rend());

    for (auto it = deque1.begin(); it != deque1.end(); it++)
    {
        cout << " " << *it;
    }

    return 0;
}
