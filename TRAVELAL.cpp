#include<bits/stdc++.h>
using namespace std;
int mini(int a,int b)
{ if(a<b) return a;
  else return b;
}
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n;
    cin>>n;
    int *A = new int[n];
    int *B = new int[n];
    for(int i=0;i<n;++i)
     cin>>A[i]>>B[i];
    int d1,d2,minx=INT_MAX,i1,i2;
    for(int i=0;i<n;++i)
     for(int j=i+1;j<n;++j)
      if(abs(A[j]-A[i])<minx)
       { minx = abs(A[j]-A[i]); i1 = i; i2 = j;
       }
    d1 = minx + abs(B[i1]-B[i2]);
    cout<<d1<<" "<<minx<<endl;
    minx = INT_MAX;
    for(int i=0;i<n;++i)
     for(int j=i+1;j<n;++j)
      if(abs(B[j]-B[i])<minx)
       { minx = abs(B[j]-B[i]); i1 = i; i2 = j;
       }
    d2 = minx + abs(A[i1]-A[i2]);
    cout<<d2<<" "<<minx<<endl;
    cout<<mini(d1,d2)<<endl;
  }
  return 0;
}
