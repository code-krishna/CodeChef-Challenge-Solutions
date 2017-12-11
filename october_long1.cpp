#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int p,n,e=0,h=0;
    cin>>n>>p;
    long long int A;
    for(long long int i=0;i<n;++i)
    {cin>>A;
     if(A<=(p/10))
       h++;
     else if(A>=(p/2))
       e++; }
      // cout<<e<<" "<<p<<endl;
    if(h==2 && e==1)
     cout<<"yes"<<endl;
     else
      cout<<"no"<<endl;
  }
  return 0;
}
