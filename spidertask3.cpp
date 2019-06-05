#include <iostream>
#include <cmath>
#include <string>
  using namespace std;
  int hcf(int a,int b,int c)
  {
      int gcf=1,flag=0,count;
      for(count=2;flag==0;count++)
      {
          if(a%count==0&&b%count==0&&c%count==0)
            gcf=count;
          if(count>a||count>b||count>c)
            flag=1;
      }
      return gcf;
  }
  int main()
  {
    int a[6],b[4],i;
     cout<<"enter array in your order\n";
    for(i=0;i<6;i++)
        cin>>a[i];

    cout<<"enter products of a[0]*a[i] , where 1<=i<=4 \n";
    for(i=0;i<4;i++)
        cin>>b[i];

    a[0]=hcf(b[0],b[1],b[2]);
    a[1]=b[0]/a[0];
     a[2]=b[1]/a[0];
      a[3]=b[2]/a[0];
       a[4]=b[3]/a[0];
       a[5]=93-a[0]-a[1]-a[2]-a[3]-a[4];
        cout<<"\n your array is : \n";
        for(i=0;i<6;i++)
        cout<<a[i]<<" ";
        cout<<"\n";
       return 0;

  }
