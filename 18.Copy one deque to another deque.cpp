#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 5, 5};
    deque<int> deque2(deque1);

    cout << "Printing the elements of deque 2: " << endl;
    for (auto i = deque2.begin(); i != deque2.end(); i++)
    {
        cout << *i << " ";
    }

    return 0;
}
