#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int n;
    cin>>n;
    long long int *A = new long long int[n];
    for(int i=0;i<n;++i)
     cin>>A[i];
    sort(A,A+n);
    long long int sum1=0,sum2=0;
    for(int i=n-1;i>=0;i-=2)
     sum1+=A[i];
    for(int i=n-2;i>=0;i-=2)
     sum2+=A[i];
    if(sum1>sum2)
    cout<<sum1<<endl;
    else
    cout<<sum2<<endl;
  }
  return 0;
}
