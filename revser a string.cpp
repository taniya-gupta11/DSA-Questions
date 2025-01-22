#include <iostream>
using namespace std;

void reverse(char name[], int n){
    int s=0;
    int e = n-1;
    while(s<e){
        swap(name[s++] , name[e--]);
        
    }
}

int getLength(char name[]){
int count = 0;
for(int i=0; name[i]!='\0';i++){
     count++;
   }
   return count;


}
int main()
{
    char name[5];
    cout<<"enter your name:";
    cin>>name;
  
   cout <<"your name is:"<<name<<endl;
   
   int len = getLength(name);
   cout <<len<<endl;
   reverse(name,len);
   cout<<"your name is:";
   cout<<name;
   
    return 0;
}