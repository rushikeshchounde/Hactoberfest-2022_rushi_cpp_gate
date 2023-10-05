#include <iostream>  
using namespace std;  
int main()  
{  
  //Enter the number
  int n, r,sum=0;
  int temp;    
  cout<<"Enter the Number=";    
  cin>>n;    
 temp=n;    
 while(n>0)    
{    
 r=n%10;    
 sum=(sum*10)+r;    
 n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Palindrome.";    
else    
cout<<"Number is not Palindrome.\n\n\n";   
  return 0;
}  
