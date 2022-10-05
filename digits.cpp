#include <iostream>
#include <cmath>
using namespace std;

int main()
{

int number;
int digOne;
int digTwo;
int digThree;

cout << "Enter an integer between 0 and 999: " << endl;

cin >> number;

if (100 <= number)
{
  digOne = number % 10;
  cout << digOne << endl;
  digTwo = (number / 10) % 10;
  cout << digTwo << endl;
  digThree = (number / 100) % 10;
  cout << digThree << endl;
}
else if (10 <= number)
{
  digOne = number % 10;
  cout << digOne << endl;
  digTwo = (number / 10) % 10;
  cout << digTwo << endl;
}
else
{
  digOne = number;
  cout << digOne << endl;
}

return 0;
}
 