#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { int x,y,k,n;
    cin>>x>>y>>k>>n;
    int counti = x-y;
    int a,b,flag=0;
    for(int i=0;i<n;++i)
    { cin>>a>>b;
      if(a>=counti && b<=k) flag=1;
    }
    if(flag) cout<<"LuckyChef"<<endl;
    else cout<<"UnluckyChef"<<endl;
  }
  return 0;
}
