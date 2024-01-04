#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1(5, 10);

    cout << "The elements are: " << endl;

    for (int i = 0; i < deque1.size(); i++)
    {
        cout << " " << deque1[i];
    }

    return 0;
}
