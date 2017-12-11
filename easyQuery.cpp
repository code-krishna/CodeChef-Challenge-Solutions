#include<bits/stdc++.h>
using namespace std;
void build_segTree(vector<int> segTree[],int A[],int h,int l,int pos)
{ if(h == l)
   {segTree[pos].push_back(A[l]);return;}
  else
   { int mid = (h+l)/2;
     build_segTree(segTree,A,mid,l,2*pos+1);
     build_segTree(segTree,A,h,mid+1,2*pos+2);
     if(segTree[2*pos+1][segTree[2*pos+1].size()-1]>segTree[2*pos+2][segTree[2*pos+2].size()-1])
     {segTree[pos].push_back(segTree[2*pos+2][segTree[2*pos+2].size()-1]);
      segTree[pos].push_back(segTree[2*pos+1][segTree[2*pos+1].size()-1]);}
     else
     {
         segTree[pos].push_back(segTree[2*pos+1][segTree[2*pos+1].size()-1]);
         segTree[pos].push_back(segTree[2*pos+2][segTree[2*pos+2].size()-1]);
     }
   }
}
int findmin(vector<int> segTree[],int a,int b,int pos,int l,int h,int k)
{
    if(a<=l && b>=h)
        return segTree[pos][k-1];
    if(b<l || a>h)
     return INT_MAX;
    int mid = (l+h)/2;
    return min(findmin(segTree,a,b,2*pos+1,l,mid,k),findmin(segTree,a,b,2*pos+2,mid+1,h,k));


}
int main()
{ int n;
  cin>>n;
  int A[n];
  for(int i=0;i<n;++i)
   cin>>A[i];
  int p = pow(2,n-1) - 1;
  vector<int> segTree[p];
  int high = n-1, low = 0;
  int pos = 0,k;
  build_segTree(segTree,A,high,low,pos);
  int a,b;
  for(int i=0;i<p;++i)
  {
      for(int j=0;j<segTree[i].size();++j)
        cout<<segTree[i][j]<<" ";
      cout<<endl;
  }
  cin>>a>>b>>k;
  pos = 0;
  cout<<endl<<findmin(segTree,a,b,pos,low,high,k);
  return 0;
}
