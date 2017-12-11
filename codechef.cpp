#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t,a,b,c,*A,*B,*C;
  cin>>t;
  while(t--)
  { cin>>a>>b>>c;
    A = new long long int[a];
    B = new long long int[b];
    C = new long long int[c];
    for(int i=0;i<a;++i)
     cin>>A[i];
    for(int i=0;i<b;++i)
     cin>>B[i];
    for(int i=0;i<c;++i)
     cin>>C[i];
    long long int sum=0;
    vector<long long int> x,y;
    for(int i=0;i<a;++i)
     { for(int j=0;j<b;++j)
        if(B[j]>=A[i]){ x.push_back(A[i]);
           y.push_back(B[j]);
        }
     }
    vector<long long int> x1,y1,z;
    for(int i=0;i<c;++i)
     { for(int j=0;j<y.size();++j)
        if(y[j]>=C[i]){ x1.push_back(x[j]);
           y1.push_back(y[j]);
           z.push_back(C[i]);
        }
     }
    for(int i=0;i<x1.size();++i)
     sum+=((x1[i]+y1[i])*(y1[i]+z[i]));
    cout<<(sum%1000000007)<<endl;
  }
}
