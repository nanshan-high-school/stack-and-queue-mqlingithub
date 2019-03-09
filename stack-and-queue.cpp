#include <iostream>
#include <stack>
using namespace std; 

int main() {
  stack <int> books;
  int num, moves, b = 1, c = 0;
  cin >> num >> moves;
  int out[num];
  for (int i = 0; i < moves; i++) {
    char a;
    int times;
    cin >> a >> times;
    if (a == 'a') {
      for (int i = 0; i < times; i++) {
        books.push(b);
        b++;
      }
    }
    else {
      for (int i = 0; i < times; i++) {
        out[c] = books.top();
        books.pop();
        c++;
      }
    }
  }
  for (int i = 0; i < c; i++) {
    cout << out[i];
  }
}
