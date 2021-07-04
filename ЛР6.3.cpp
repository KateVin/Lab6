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
  int a[10], i, j, g;
  cout<<"Заполните массив"<<endl;
  for (i = 0; i < 10; i++)
    {
      cout<<"a["<<i<<"] = ";
      cin>>a[i];
    }
  for (i = 1, j; i < 10; i++)
    {
      g = a[i];
      for (j = i - 1; j >= 0 && a[j] > g; j--)
	{
	  a[j + 1] = a[j];
	}
      a[j + 1] = g;
    }
  for (i = 0; i < 10; i++)
    {
      cout<<a[i]<<" ";
    }
}
