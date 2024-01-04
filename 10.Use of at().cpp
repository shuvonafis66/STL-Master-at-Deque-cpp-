#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 5, 6, 7, 13, 25};

    cout << "The elements are: " << endl;

    for (int i = 0; i < deque1.size(); i++)
    {
        cout << " " << deque1.at(i);
    }

    return 0;
}
