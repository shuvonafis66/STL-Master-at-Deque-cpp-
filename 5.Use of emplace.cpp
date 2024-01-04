#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1 = {1, 2, 3, 4, 5};

    deque1.emplace(deque1.begin() + 3, 200);
    deque1.emplace(deque1.end(), 300);
    auto it = deque1.begin() + 2;
    deque1.emplace(it, 700);

    cout << "After updating the elements are: " << endl;
    for (int i = 0; i < deque1.size(); i++)
    {
        cout << deque1[i] << " ";
    }

    return 0;
}
