#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  int n,an;
  cin>>t;
  while(t--)
  {cin>>n>>an;
  int A;
  int aleft=INT_MIN,aright=INT_MAX;
  int flag=0;
  for(int i=0;i<n;++i)
  { cin>>A;
    if(A<an){
      if(A<aleft) flag=1;
      else aleft=A;
    }
    else if(A>an){
      if(A>aright) flag=1;
      else aright=A;
    }
  }
  if(flag)
   cout<<"NO"<<endl;
  else
   cout<<"YES"<<endl; }
  return 0;
}
