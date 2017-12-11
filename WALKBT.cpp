#include<bits/stdc++.h>
using namespace std;
stack<int> st;
int main()
{ int t;

  int n,q,x=0,counti=0,c;
  cin>>t;
  while(t--)
  {
  cin>>n>>q;
  int p = pow(2,n+1);
  int *visit = new int[p];
  for(int i=0;i<p-1;++i)
    { visit[i]=0;}
    visit[0]=1;
    while(q--)
  { char ch;
    cin>>ch;
    if(ch=='!')

  {cin>>c;
  int q = pow(2,c);
  int r = pow(2,n);
   x = (x+q)%r;
   int y = x;

  while(y)
  {
      st.push(y%2);
      y/=2;
  }
  y = n;
  int j=0;
  if(st.size()!=y)
  {
      while(st.size()!=y)
      {
          if(visit[2*j+1]==0)
            visit[2*j+1] = 1;
        j = 2*j+1;
        y--;
      }
  }

  while(st.size()){
    if(st.top()==1)
    {
        st.pop();
        if(visit[2*j+2]==0)
            visit[2*j+2] = 1;
        j = 2*j+2;
    }
    else{
        st.pop();
        if(visit[2*j+1]==0)
            visit[2*j+1] = 1;
        j = 2*j+1;
    }
  }
  }
  else
  {  counti=0;
      for(int i=0;i<p-1;++i)
    if(visit[i]) counti++;
    cout<<counti<<endl;
  }

    } }

  return 0;
}
