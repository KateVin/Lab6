/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
pred (int upper, int low, double ch)
{
  if (ch == int (ch))
    {
      if (ch >= low && ch <= upper)
	{
	  cout << "Число входит в диапозон" << endl;
	  return ch;
	}
      else
	{
	  cout << "Число не входит в диапозон" << endl;
	  return -1;
	}
    }
  else
    {
      cout << "Число не целочисленное" << endl;
      return 0;
    }
}

void
min ()
{
  int low = -1;
  int upper = -1;
  double ch = -1;
  bool b = true;
  while (b)
    {
      cout << "1) Ввод верхнего предела" << endl;
      cout << "2) Ввод нижнего предела" << endl;
      cout << "3) Ввод числа" << endl;
      cout << "4) Выход" << endl;

      int vibor;
      do
	{
	  cin >> vibor;
	}
      while (vibor < 1 || vibor > 4);

      switch (vibor)
	{
	case 1:
	  cout << "Введите верхний предел: ";
	  cin >> upper;
	  break;
	case 2:
	  cout << "Введите нижний предел: ";
	  cin >> low;
	  break;
	case 3:
	  cout << "Введите число: ";
	  cin >> ch;
	  break;
	case 4:
	  b = false;
	  break;
	}

      if (low != -1 && upper != -1 && ch != -1 && b != false)
	{
	  int result = pred (upper, low, ch);
	  if (result == 0)
	    b = false;
	  if (result == -1)
	    continue;

	}

    }
}

int
main ()
{
  min ();

  return 0;
}
