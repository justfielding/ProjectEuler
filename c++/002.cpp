// Project Euler - projecteuler.net
// Problem - .cpp
// Author: fielding johnston - fielding@justfielding.com
//
// Description:
//
// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
//
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
//
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.
//
// Notes: I looked at my javascript solution, and decided there was no point in changing this to fit that method, because this arrives at the solution in under half a second as it is.


#include <iostream>

unsigned int fib( int term );

using namespace std; 

int main( int argc, const char * argv[] )
{ 
  unsigned int limit = 4000000, n = 0, sum;

  int term = 0, i = 0;

  while ( n < limit )
  {
    n = fib(i);
    
    if ( n < limit && n % 2 == 0 )
      sum += n;
    
    ++i;
  }

  cout << sum << endl;
  return 0;
}

unsigned int fib ( int term ) 
{
  switch ( term )
  {
    case 0:
      return 0;
      break;
    case 1:
      return 1;
      break;
    default:
      return fib( term - 1 ) + fib ( term - 2 );
  }
}