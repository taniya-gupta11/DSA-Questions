//Prime no. or not Ada
#include <iostream>
using namespace std;

int main()
{
   int n=2;
   cout<<"enter any no.:"<<" ";
   cin>>n;
   int start = n/2;
   int Prime = 1;//True
   
   while(1){    //hameshsa chalega loop
       if(start==1){
       break;
   }
       if(n%start==0){
           Prime = 0; //False 
           break;
       }
       else{
           start--;
       }
   }
   if(Prime==1){
       cout<<"Prime no.";
   }
   else{
       cout<<"Not Prime"<<" ";
   }
   

    return 0;
}



//  =2 , Start= n/2

#include <iostream>
using namespace std;

int main()
{
   int n=2 ;
   cout<<"enter any no.:"<<" ";
   cin>>n;
   int start = n/2;
   int Prime = 1;    //True
   
   while(start!=0){
      
       if(n%start==0){
           Prime = 0; //False 
           break;
       }
       else{
           start--;
       }
   }
   if(Prime!=1){
       cout<<"Prime no.";
   }
   else{
       cout<<"Not Prime"<<" ";
   }
   
   

    return 0;
}


// n=n/2 , start=2


#include <iostream>
using namespace std;

int main()
{
   int n=n/2 ;
   cout<<"enter any no.:"<<" ";
   cin>>n;
   int start = 2;
   int Prime = 1;    //True
   
   while(start!=0){
      
       if(n%start==0){
           Prime = 0; //False 
           break;
       }
       else{
           start--;
       }
   }
   if(Prime==0){
       cout<<"Prime no.";
   }
   else{
       cout<<"Not Prime"<<" ";
   }
   
   

    return 0;
}