#include<iostream>
#include<deque>
#include<algorithm>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 4, 131, 53, 131, 12426, 14, 131};

    cout << "The maximum element is: " << endl;
    int n = *max_element(deque1.begin(), deque1.end());

    cout << n << endl;

    cout << "The minimum element is: " << endl;

    int m = *min_element(deque1.begin(), deque1.end());

    cout << m << endl;

    return 0;
}
