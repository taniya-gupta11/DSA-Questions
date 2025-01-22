#include <iostream>
#include <string>
using namespace std;
string ispalindrom(string s){
  
  for(int i=0; i<s.length()/2; i++){
      //s[i] is not equal to s[n-i-1]
      if(s[i]!=s[s.length()-i-1]){
          return "No";
      }
  }
  //return yes
  return "yes";
      
}

 int main()
{
 string s = "kanak";
cout<< ispalindrom(s);

return 0;
}