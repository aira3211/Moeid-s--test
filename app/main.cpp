
# include <iostream>
# include <chrono>

using namespace std;


int main()
{
  auto t1 = std::chrono::high_resolution_clock::now();
  // int a;
  // int b;
  int total[2];
  int counter = 0;
  cout << "Enter a tow Number: " << endl;
  cin >> total[0];
  cin >> total[1];
  for(int i=total[0]; i<total[1]+1; ++i)
  {
      counter += i;
  }
  cout << "The sum of two numbers: "<< counter << endl;
  auto t2 = std :: chrono:: high_resolution_clock::now();
  auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();
  cout <<"Time: " <<duration;
  return 0;



}
