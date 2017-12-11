#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,q;
    cin>>n>>q;
    long long int A[n];
    for(int i=0;i<n;++i)
     cin>>A[i];
    while(q--)
    { long long int p,j,k,l,r,x,w,present;
      cin>>p;
      switch(p)
      { case 1 : cin>>j>>k;
                 w=0;
                 while(k && w<100)
                 { if(A[j-1]<A[j]) {k--; j++; present = j; w=0;}
                   else {j++; w++;}
                 }
                 cout<<present<<endl;
                 break;
        case 2 : cin>>l>>r>>x;
                 for(int i=l-1;i<r;++i)
                  A[i]+=x;
                  break;
      }
    }
  return 0;
}
