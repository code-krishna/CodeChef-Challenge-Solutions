#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int n,V[110];
    for(int i=0;i<110;++i)
     V[i]=0;
    cin>>n;
    int maxi = INT_MIN, mini = INT_MAX;
    int *A = new int[n];
    for(int i=0;i<n;++i)
     {cin>>A[i]; V[A[i]]++;
      if(A[i]>maxi)maxi = A[i];if(A[i]<mini) mini = A[i];}
    int flag1 = 0,flag2 = 0,flag3 = 0;
    for(int i=0;i<n/2;++i)
     if(A[i]!=A[n-1-i])
     {flag1=1; break;}
    for(int i=1;i<=7;++i)
    if(V[i]==0)
    {flag2 = 1; break;}
    if(maxi!=7 || mini!=1)
        flag3 = 1;
    if(flag1 || flag2 ||flag3)
    cout<<"no"<<endl;
    else
    cout<<"yes"<<endl;
    }
    return 0;
    }



