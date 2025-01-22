#include <iostream>
#include <string>
using namespace std;
int main()
{
   char str[30],c;
   int i,j,f=1;
   cout<<"enter string "<<" ";
   cin>>str;
   for(int len=0;str[len]!='\0';len++)
   for(int i=0,j=len-1;i<len/2;i++,j--){
       if (str[i]!=str[j]){
           f=0;
           
           break;
       }
   }
    if(f!=0){
        cout<<"palindrom"<<" ";
    }
    else{
        cout<<" n.p";
    }
    return 0;
}