#include <iostream>
#include <iomanip> 
#include <cmath> 

using namespace std;

int main ()
{
  int posInt = 0;
  int two = 0;
  int three = 0;
  
  cout << "Enter a positive integer: " << endl;
  cin >> posInt;

  if (posInt % 2 != 0 && posInt % 3 != 0) 
  {
    cout << "No" << endl;
  } 
  else 
  {
    while(posInt % 2 == 0 || posInt % 3 == 0) {
      if (posInt % 2 == 0) 
      {
        two++;
        posInt = posInt / 2;
      } 
      else 
      {
        three++;
        posInt = posInt / 3;
      }
    }
  }

    if (posInt == 1) {
        cout << "Yes" << endl;
        cout << "Twos=" << two << " " << "Threes=" << three << endl;
    }
    else {
        cout << "No" << endl;
    }

  return 0;
}