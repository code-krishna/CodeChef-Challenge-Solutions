#include<bits/stdc++.h>
using namespace std;

int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
    cin>>n;
    long long int *A = new long long int[n];
    for(int i=0;i<n;++i)
     cin>>A[i];
    long long int B = 0;
    for(int i=0;i<n;++i)
    { int cnt = 0;
      if(A[i]%2==0)
       { while(A[i]%2==0)
          {A[i]/=2;
          cnt++;}
       }
       B+=cnt;
    }
    if(B%2==0)
     cout<<"Alan"<<endl;
    else
     cout<<"Charlie"<<endl;
  }
  return 0;
}
