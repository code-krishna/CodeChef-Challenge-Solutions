#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{ if(b==0)
   return a;
  return gcd(b,a%b);
}
int gcd1(int a[],int n)
{ int ans = a[0];
  for(int i=1;i<n;++i)
   ans = gcd(a[i],ans);
  return ans;
}
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
    cin>>n;
    int *A = new int[n];
    for(int i=0;i<n;++i)
     cin>>A[i];
    cout<<gcd1(A,n)<<endl;
  }
  return 0;
}
