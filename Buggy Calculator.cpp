#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { string a,b;
    int c=0;
    cin>>a>>b;
    int i=a.size()-1;
    int j=b.size()-1;
    int k=1;
    while(i>=0 && j>=0)
    { int d = (a[i]+b[j])%10;
      c+=(k*d);
      cout<<c<<" "<<d<<" "<<a[i]<<" "<<b[j]<<" "<<a[i]+b[j]<<" ";
      k*=10;
      i--; j--;
    }
    while(i>=0)
     {c+=k*a[i--];
       k*=10;}
    while(j>=0)
     {c+=k*b[j--];
      k*=10;}
    cout<<c<<endl;
  }
  return 0;
}
