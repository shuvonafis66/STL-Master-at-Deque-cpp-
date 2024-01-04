#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 4, 131, 53, 131, 12426, 14, 131};

    int k = count(deque1.begin(), deque1.end(), 131); // number of occurrences of elements
    cout << k << endl;
    return 0;
}

