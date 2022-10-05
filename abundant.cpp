/********************************************************
 * Description:
 *   Displays the top 3 most "abundant" (see writeup)
 *   numbers in the input sequence.  The input sequence
 *   is assumed to be valid natural numbers separated
 *   by spaces and ending with 0.
 *
 *   ABSOLUTELY NO ARRAY or `string`/`vector`/etc. usage
 *   is allowed!

 *   You may only declare: bool, int, or unsigned int
 *   No library functions (beyond cin/cout) are allowed.
 *
 *   You may NOT modify any of the given template code.
 *   This ensures our automated checkers can parse your
 *   output.  Failure to follow this direction will lead
 *   to a score of 0 on this part of the assignment.
 ********************************************************/

#include <iostream>
using namespace std;

int main()
{
  // n1 is the number with the highest abundance, a1
  // n2 is the number with the 2nd-highest abundance, a2
  // n3 is the number with the 3rd-highest abundance, a3
  unsigned int n1 = 0, n2 = 0, n3 = 0;
  int a1 = 0, a2 = 0, a3 = 0;
  int check = 0;

  // num_abundant counts how many numbers in the input
  // sequence are abundant
  int num_abundant = 0;

  cout << "Enter a sequence of natural numbers, separated by spaces, ";
  cout << "and ending with 0." << endl;

  /*====================*/
  /* Start of your code */

  int val;
  int valAb = 0;

  cin >> val;
  while (val != 0)
  {
    for (int i = 1; i <= val / 2; i++)
    {
      if (val % i == 0) 
      {
        valAb += i;
      }
    }

    if (valAb > val)
    {
      num_abundant++;
      check++;
    }

    if (check>0)
    {
    if (valAb > a1) 
    {
      a3 = a2;
      n3 = n2;
      a2 = a1;
      n2 = n1;
      a1 = valAb;
      n1 = val;
    }
    else if (valAb > a2) 
    {
      a3 = a2;
      n3 = n2;
      a2 = valAb;
      n2 = val;
    }
    else if (valAb > a3)
    {
      a3 = valAb;
      n3 = val;
    }

    }

    cin >> val;
    valAb = 0;
    check = 0;
  }

  
  /* End of your code */
  /*==================*/
  
  cout << "Abundant number count: " << num_abundant << endl;
  cout << "Top 3 most abundant numbers: " << endl;
  cout << n1 << " : " << a1 << endl;
  cout << n2 << " : " << a2 << endl;
  cout << n3 << " : " << a3 << endl;


  return 0;

}
