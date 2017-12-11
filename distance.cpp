#include<bits/stdc++.h>
using namespace std;
struct Node{ int data;
 Node *left,*right;
};
Node* newNode(int n)
{ Node *no = new Node;
  no->data = n;
  no->left = NULL;
  no->right = NULL;
  return no;
}
void LevelOrder(Node *root,int level)
{ if(root==NULL)
    return;
  if(level==1)
   cout<<root->data<<" ";
  if(level>1)
   { LevelOrder(root->left,level-1);
     LevelOrder(root->right,level-1);
   }
}
void printDistance(Node *root,int dist)
{ LevelOrder(root,dist+1);
}
int main()
{ Node *root;
  root = newNode(5);
  root->left = newNode(6);
  root->left->left = newNode(7);
  root->left->right = newNode(8);
  root->right = newNode(9);
  root->right->right = newNode(10);
  int d;
  cin>>d;
  printDistance(root,d);
  return 0;
}
