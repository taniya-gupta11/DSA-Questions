//program to convert string to proper case i.e, to capitalize first letter of each word of the string i.e, my name is:My Name Is
#include <iostream>
using namespace std;

int main()
{
  char  str[80];
  
  cout<<"enter any string:";
  gets(str);
  str[0]=toupper(str[0]);
  for(int i=0; str[i]!='\0';i++){
      if(str[i]==' '){
          str[i+1]=toupper(str[i+1]);
      }
      
  }
  cout<<"update string:"<<str;
    return 0;
}