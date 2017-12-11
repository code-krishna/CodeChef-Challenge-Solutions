#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n,x,maxi=-1;
    cin>>n;
    int *A = new int[n];
    for(int i=0;i<n;++i)
     { cin>>x;
       A[i] = i+x;
       if(A[i]>maxi) maxi = A[i];
     }
     cout<<maxi<<endl;
  }
}
