
#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  string str, temp;
  int i = 0, j;
  cout << "enter string to check palindrom:";
  cin >> str;
  temp = str;
  j = str.length () - 1;
  while (i < j)
	{
	  swap (str[i], str[j]);
	  i++;
	  j--;
	}
  if (temp == str)
	{
	  cout << "palindrom" << " ";

	}
  else
	{
	  cout << "n.p" << " ";
	}

  return 0;
}
