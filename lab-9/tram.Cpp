#include<bits/stdc++.h>
using namespace std;
int main()
{
      int n;
      cin>>n;
      int a,b;
      int arr[n],cnt=0,bnt=0;
      while(n--)
      {
            cin>>a>>b;
            cnt=cnt-a;
            cnt=cnt+b;
            arr[bnt++]=cnt;
      }
      sort(arr,arr+bnt);
      cout<<arr[bnt-1]<<endl;
}
