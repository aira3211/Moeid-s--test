#include <iostream>

# include <chrono>

using namespace std;

int main()
{
  int x,y,total;
  auto t1 = std::chrono::high_resolution_clock::now();
  cout << "Enter a tow Number: "<<'\n';
  cin >> x >> y;
  total = (std :: abs(x-y)+1)*(x+y)/2;
  auto t2 = std :: chrono:: high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
  cout << total << '\n';
  cout << "Time: "<<duration;
}
