/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int vozvrat (int a, int b, int c)
{
  int max;
  max = a;
  if (max < b)
    {
      max = b;
    }
  if (max < c)
    {
      max = c;
    }
  cout<<"max = " <<max <<endl;
  return max;
}

int main ()
{
  int a, b, c;
  cout<<"Введите 3 переменные:"<<endl;
  cout<<"a = ";
  cin>>a;
  cout<<"b = ";
  cin>>b;
  cout<<"c = ";
  cin>>c;
  vozvrat (a, b, c);

  return 0;
}
