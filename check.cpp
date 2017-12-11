#include<bits/stdc++.h>
using namespace std;
struct Node { int data;
   Node *left,*right;
};
Node* newNode(int n)
{ Node *no = new Node;
  no->data = n;
  no->left = NULL;
  no->right = NULL;
  return no;
}
int isBSTUtil(Node *root,int min,int max)
{ if(root==NULL)
   return 1;
  if(root->data<min || root->data>max)
   return 0;
  return (isBSTUtil(root->left,min,root->data+1) && isBSTUtil(root->right,root->data-1,max));
}
int isBST(Node *root)
{ return (isBSTUtil(root,INT_MIN,INT_MAX));
}
int main()
{ Node *root = newNode(5);
  root->left = newNode(3);
  root->right = newNode(8);
  (root->left)->left = newNode(2);
  (root->left)->right = newNode(4);
  (root->right)->left = newNode(6);
  (root->right)->right = newNode(9);
  if(isBST(root)) cout<<"IS BST";
  else
   cout<<"NOT BST";
   return 0;
}
