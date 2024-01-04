#include <iostream>
#include <deque>

using namespace std;

int main() {
  deque<int> deque3 = {1, 2, 3};

  cout << "Before inserting new elements the size and the maximum size are: " << endl;

  cout << "The size of the deque is: " << deque3.size() << endl;
  cout << "The maximum size of the deque is: " << deque3.max_size() << endl;

  deque3.push_back(5);
  deque3.push_back(8);
  deque3.push_back(9);
  deque3.push_back(10);

  cout << "After inserting new elements the size and the maximum size are: " << endl;

  cout << "The size of the deque is: " << deque3.size() << endl;
  cout << "The maximum size of the deque is: " << deque3.max_size() << endl;

  return 0;
}
