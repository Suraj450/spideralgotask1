#include <iostream>
#include <cmath>
#include <string>
  using namespace std;
  int bin_dec(int a) //function for changing binary to decimal
   {  int sum=0 ,i=0;
       while(a!=0)
       {
            int rem= a%10;
          a=a/10;
          sum=sum+rem*pow(2,i); i++;
       } return sum;
   }
   int dec_bin(int a) // function for changing decimal to binary
   {   int sum=0,i=1;
       while(a!=0)
       {
           int rem= a%2;
           a=a/2;
         sum=sum+rem*i;
           i=i*10;
       } return sum;
   }

  int main(){int n;
      cout<<"enter the length of string \n";
      cin>>n;
      int a;
      cout<<"enter string \n";
      cin>>a;
      int value=bin_dec(a);
      int lower=pow(2,n-1);
      int higher=pow(2,n)-1;
     if(value<=4||value==lower||value==higher) //cheaking the the two strings have same length or not
        cout<<"-1";
     else{
        int lower1=dec_bin(value-1);
        int higher1=dec_bin(value+1);
        cout<<lower1<<" "<<higher1;
     }
     cout<<"\n";
     return 0;
}
