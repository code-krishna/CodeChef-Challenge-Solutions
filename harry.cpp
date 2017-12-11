#include<bits/stdc++.h>
using namespace std;
char A[10000][10000] ;
int visit[10000][10000];

int check(int a,int b,int c)
{ if(visit[a][b]==0)
{
    visit[a][b]=1;
  if(A[a+1][b]=='*')
   c++;
  else { c=check(a+1,b,c);}
  if(A[a][b+1]=='*')
   c++;
  else c=check(a,b+1,c);
  if(A[a-1][b]=='*')
   c++;
  else c=check(a-1,b,c);
  if(A[a][b-1]=='*')
   c++;
  else c=check(a,b-1,c) ;}
  return c;
}
int main()
{ int t,n,m,k,a,b;
  cin>>t;
  while(t--)
  { cin>>n>>m>>k;
    for(int i=0;i<n;++i)
    { for(int j=0;j<m;++j)
       cin>>A[i][j];
    }
    for(int i=0;i<k;++i)
    { int c=0;
      cin>>a>>b;
      c=check(a-1,b-1,c);
      cout<<c<<endl;
       }
    }
  return 0;
}
