// ============================================================================
// diceplot.cpp
//
//
// ============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

// Prototype/define functions anywhere below
int roll();
void printHistogram(int*);

int main()
{
  int seed, n;
  cin >> seed >> n;

  // Seed the pseudo-random number generator for repeatable results
  srand(seed);

  // Your code here
  int array[21]; // rolling 0, 1, 2, 3 are not possible so start at cell 4 instead of 0
  int sum = 0;
  for (int i = 0; i < 21; i++)
  {
    array[i] = 0;
  }

  for (int i = 0; i < n; i++)
  {
    for (int i = 0; i < 4; i++)
    {
      sum = sum + roll();
    }
    array[sum - 4] = array[sum - 4] + 1;
    sum = 0;
  }

printHistogram(array);
return 0;
} // end of main

  int roll() 
  {
    return rand() % 6 + 1; // rolling 1 dice 4x instead of 4 dice 1x each so code is easily altered if need be
  }

  void printHistogram(int array[]) 
  {
    for (int i = 0; i < 21; i++)
    {
      cout << i + 4 << ":";
      for (int j = 0; j < array[i]; j++)
      {
        cout << "X";
      }
      cout << endl;
    }
  }