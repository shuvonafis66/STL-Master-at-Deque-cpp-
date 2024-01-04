#include<iostream>
#include<deque>

using namespace std;

int main()
{
    deque<int> deque1(5, 200);

    deque1.insert(deque1.begin() + 2, 300);
    deque1.emplace(deque1.begin() + 3, 500);

    cout << "The elements are: " << endl;

    for (auto i : deque1)
    {
        cout << i << " ";
    }
return 0;
}
