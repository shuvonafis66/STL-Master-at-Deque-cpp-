#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 5};

    deque1.emplace_back(1);
    deque1.emplace_back(2);
    deque1.emplace_back(200);
    deque1.emplace_back(3);
    deque1.emplace_back(4);
    deque1.emplace_back(5);
    deque1.emplace_back(300);
    deque1.emplace_back(700);
    deque1.emplace_back(1000);

    cout << "After updating the elements are: " << endl;
    for (int i = 0; i < deque1.size(); i++)
    {
        cout << deque1[i] << " ";
    }

    return 0;
}
