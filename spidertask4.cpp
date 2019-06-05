#include <iostream>
#include <cmath>
#include <string>
  using namespace std;
  int main()
  { int n,r,x,y,i;
      cout<<"enter no of days, his initial rating, the parameter x and the parameter y respectively with spaces.\n";
      cin>>n>>r>>x>>y;
      int arr1[n],arr2[n];
      int sum=n;
      cout<<"enter string of sequence 0 (or) 1 where contest happen or not. \n";
      for(i=0;i<n;i++)
        cin>>arr1[i];
       cout<<"\ enter string of sequence 0 (or) 1 where he eats SCN or not. \n";
      for(i=0;i<n;i++)
        cin>>arr2[i];

        for(i=0;i<n;i++)
        {
            if(arr1[i]==1 && arr2[i]==1)
                sum=sum+x;
            else sum=sum-y;
        }
        if(sum<n) cout<<"demoted \n";
        if(sum>n) cout<<"promoted \n";
        if(sum==n) cout<<"no change\n ";
        return 0;
  }
