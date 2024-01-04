#include<iostream>
#include<deque>

using namespace std;

int main()
{

    deque<int> deque1 = {1, 2, 3, 4, 6, 6};

    deque1.pop_back();

    // Printing elements after removing the last element
    for (int i = 0; i < deque1.size(); i++)
    {
        cout << " " << deque1[i];
    }

    return 0;
}



