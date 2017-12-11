#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { string s;
    cin>>s;
    int b=0,d=0;
    for(int i=0;i<s.size();++i)
    {
        if(s[i]=='>') d--;
        else d++;
        if(d==0) b = i+1;
        else if(d<0) break;
    }
    cout<<b<<endl;
  }
  return 0;
}
