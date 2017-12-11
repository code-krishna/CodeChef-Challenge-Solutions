#include<bits/stdc++.h>
using namespace std;
int main()
{ string s;
  int p=1,k=1;
  cin>>s;
  int m = -1;
  for(int i=0;i<s.length();++i)
  { char symb = s[i];
    p=i+1;
    while((symb==s[p] || s[p]=='=') && p<s.length())
     {k++; p++;}
    if(k>m)
    m = k;
    k=1;
  }
  if(m==1 && s[0]=='=')
  cout<<m<<endl;
  else
  cout<<m+1<<endl;

  return 0;
}
