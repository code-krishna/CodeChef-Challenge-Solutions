#include<bits/stdc++.h>
using namespace std;
int main()
{ int t;
  cin>>t;
  while(t--)
  { string s,p;
    char ch = 'B';
    cin>>s>>p;
    int a[27] = {0};
    int b[27] = {0};
    for(int i=0;i<s.size();++i)
     a[s[i]-'a']++;
    for(int i=0;i<p.size();++i)
     b[p[i]-'a']++;
    int ctb=0;
 		for(int k=0;k<26;k++)
 		{
 			if(b[k]>0)
 				ctb++;
 		}
 		int ctint=0,ctint2=0;
 		for(int l=0;l<26;l++)
 		{			if(b[l]>0  && a[l]>0 )
 				ctint++;
 			else if(a[l]>0 && b[l]==0)
 				ctint2++;
 		}
 		int cta2=0;
 		for(int x=0;x<26;x++)
 		{
 			if(a[x]>1 && b[x]==0)
 				cta2++;
 		}
 		if(ctint==ctb && ctint2>0)
 			cout<<"A"<<"\n";
 		else if(cta2>0)
 			cout<<"A"<<"\n";
 		else
 			cout<<"B"<<"\n";
 	}

  return 0;
}
