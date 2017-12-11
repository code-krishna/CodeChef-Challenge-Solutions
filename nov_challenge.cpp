#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { string s;
    cin>>s;
    int count[2] = {0};
    int c=0;
    char last='C';
    for(int i=0;i<s.size();++i)
    { if(s[i]=='A' || s[i]=='B')
       { if(last==s[i])
          count[s[i]-'A']+=c;
         c=0; last = s[i]; count[s[i]-'A']++;
       }
      else
      c++;
    }
    cout<<count[0]<<" "<<count[1]<<endl;
  }
  return 0;
}
