#include<bits/stdc++.h>
using namespace std;
int B[100005];
int main()
{ int n;
  cin>>n;
  int mini = INT_MAX;
  int *A = new int[n];
  for(int i=0;i<n;++i)
   cin>>A[i];
  int q;
  cin>>q;
  for(int i=0;i<100005;++i)
    B[i] = -1;
  B[0] = 0; B[1] = n;
  int k;
  int *Q = new int[q];
  for(int i=0;i<q;++i)
  { cin>>Q[i]; if(mini>Q[i]) mini = Q[i];}
  int *a = new int[n];
  int point=0;
  for(int i=0;i<n;++i)
    if(A[i]>=mini) a[point++] = A[i];
  for(int i=0;i<q;++i)
   { if(B[Q[i]]==-1)
    { B[Q[i]] = 0;
     for(int j=0;j<point;++j)
     if(a[j]%Q[i]==0) B[Q[i]]++;}
    cout<<B[Q[i]]<<endl;
  }
  return 0;
}
