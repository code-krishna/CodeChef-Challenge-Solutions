#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int n,sum;
    cin>>n;
    sum=n*(n+3);
    sum/=2;
    cout<<sum<<endl;
  }
  return 0;
}
