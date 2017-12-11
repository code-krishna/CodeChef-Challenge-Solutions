#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int n,d,sum=0;
    cin>>n>>d;
    long long int *A = new long long int[n];
    for(int i=0;i<n;++i)
     {cin>>A[i]; sum+=A[i];}
    if(sum%n!=0)
    cout<<-1<<endl;
    else if(n==1)
    cout<<0<<endl;
    else
    { long long int m=0,c=sum/n;
      long long int i=0;
      while(i+d<n)
      { if(A[i]!=c)
        {
            if(A[i]>=c)
           {
               A[i+d]+=(A[i] - c);
               m += (A[i] - c);
               A[i]=c;}
          else
           {
               A[i+d]-=(c-A[i]);
               m += (c-A[i]);
               A[i]=c;}
        }
        i++;
      }
      int flag=0;
      for(int i=0;i<n-1;++i)
        {
            if(A[i]!=A[i+1])
            {flag=1; break;}
        }
        if(flag==0)
      cout<<m<<endl;
      else cout<<-1<<endl;
    }
  }
  return 0;
}
