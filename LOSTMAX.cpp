#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int v[1001];
    long long int p,i=0,maxi=INT_MIN;
    char temp; int flag=0;
    do{
        scanf("%d%c", &v[i], &temp);
        i++;
        } while(temp!= '\n');

    for(long long int j=0;j<i;++j)
    {
        if(v[j]!=(i-1) || flag)
      {if(v[j]>maxi) maxi = v[j];}
      else flag=1;
    }
    if(i==1) cout<<0<<endl;
    else
    cout<<maxi<<endl;
  }
  return 0;
}
