#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
 {long long int x,y,n,b;
  cin>>n>>b;
  y = n/(2*b);
  x = n - (y*b);
  long long int z1 = (y*x);
  long long int z2 = (y+1)*(x-b);
  if(z1>z2) cout<<z1<<endl;
  else cout<<z2<<endl;}
  return 0;
}
