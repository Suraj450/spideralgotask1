#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
  using namespace std;

  int main()
  { string s1,s2,s3;
     int n,k=1,j=0,i;
      cout<<"enter length of string\n";
    cin>>n;
    cout<<"enter sting\n";
    cin>>s1;
    if(n%2!=0) cout<<endl<<0;
    else{
       while(k!=0){
        s2=s1.substr(0,n/2);  s3=s1.substr(n/2,n);
        i=s2.compare(s3);
        if(i==0){
       s1=s2; j++; n=n/2;}

         else {k=0;}
      }
   cout<<endl<<j;
  }
  cout<<"\n";
  return 0;
}
