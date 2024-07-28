/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;
int
main ()
{

  int a, b, c;
  cin >> a >> b >> c;

  if (a > b)
	{
	  if (a > c)
		{
		  cout << a << endl;
		}
	  else
		{
		  cout << c << endl;
		}

	}

  else
	{
	  if (b > c)
		{
		  cout << b << endl;
		}
	  else
		{
		  cout << c << endl;
		}
	}





  return 0;
}
