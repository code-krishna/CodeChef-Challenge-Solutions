#include<bits/stdc++.h>
using namespace std;
map<long long int,long long int> m;
int main()
{ long long int n,q,l,r,k,flag=-1;
  cin>>n>>q;
  long long int *A = new long long int[n];
  for(int i=0;i<n;++i)
   {cin>>A[i];
    m[A[i]]++;}
  while(q--)
  { cin>>l>>r>>k;
    for(int i=l-1;i<r;++i)
     if(m[A[i]]>=k){flag = A[i]; break;}
    cout<<flag<<endl;
  }
  return 0;
}
