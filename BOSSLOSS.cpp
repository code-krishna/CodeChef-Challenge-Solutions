#include<bits/stdc++.h>
using namespace std;
int main()
{ long long int t;
  cin>>t;
  while(t--)
  { long long int n,m,sum;
    cin>>n>>m;
    long long int mid;
     mid =ceil (sqrt((8*m) + 1));
     mid = mid-1;
     mid=ceil(mid/2);
    if(mid>n) cout<<-1<<endl;
    else
    cout<<mid<<endl;
    }
  return 0;
}
