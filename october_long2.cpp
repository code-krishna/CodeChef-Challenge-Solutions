#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int n,k;
    cin>>n>>k;
    long long int A,B[200010];
    for(int i=0;i<200010;++i)
     B[i]=0;
    for(int i=0;i<n;++i)
     {cin>>A; B[A]++;}
    for(int i=0;i<200010;++i)
    { if(B[i]==0 && k)
      { B[i]++; k--;
      }
      else if(k==0) break;
    }
    for(int i=0;i<200010;++i)
     if(B[i]==0) {cout<<i<<endl; break;}
  }
}
