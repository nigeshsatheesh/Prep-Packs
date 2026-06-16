#include <iostream>
using namespace std;

//BINARY SEARCH TREE USING DOUBLY LINKEDLISTS

//NODE DECLARATION

class Node
{
  public:
    int data;
    Node* left;
    Node* right;
    Node(int data)
    {
      this->data=data;
      left=nullptr;
      right=nullptr;
    }
};

//BST DECLARATION

class BinarySearchTree
{
  public:
    Node* root;
    BinarySearchTree()
    {
      root=nullptr;
    }
    
    //INSERT
    
    Node* insert(Node* root,int data)
    {
      Node* n=new Node(data);
      if(root==nullptr)
      {
        root=n;
        return root;
      }
      if(data<root->data)
      {
        root->left=insert(root->left,data);
      }
      else
      {
        root->right=insert(root->right,data);
      }
      return root;
    }
    
    //INORDER
    
    void inOrder(Node* root)
    {
      if(root!=nullptr)
      {
        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
      }
      return;
    }
    
    //PREORDER
    
    void preOrder(Node* root)
    {
      if(root!=nullptr)
      {
        cout << root->data << " ";
        preOrder(root->left);
        preOrder(root->right);
      }
      return;
    }
    
    //POSTORDER
    
    void postOrder(Node* root)
    {
      if(root!=nullptr)
      {
        postOrder(root->left);
        postOrder(root->right);
        cout << root->data << " ";
      }
      return;
    }

    //COUNT

    int count(Node* root)
    {
      if(root==nullptr)
      {
        return 0;
      }
      return 1+count(root->left)+count(root->right); //1->root
    }

    //SEARCH A NODE

    int search(Node *root,int data)
    {
      if(root==nullptr)
      {
        return 0;
      }
      else if(root->data==data)
      {
        return 1;
      }
      else if(data<root->data)
      {
        return search(root->left,data);
      }
      else if(data>root->data)
      {
        return search(root->right,data);
      }
    }

    //HEIGHT OF A TREE

    int height(Node *root)
    {
      if(root==nullptr)
      {
        return 0;
      }
      int left_length=height(root->left);
      int right_length=height(root->right);
      return (left_length>right_length)?left_length+1:right_length+1;
    }

    //MINIMUM ELEMENT OF BST

    int min(Node* root)
    {
      if(root==nullptr)
      {
        cout << "No node is present\n";
        return 0;
      }
      else if(root->left==nullptr)
      {
        return root->data;
      }
      return min(root->left);
    }

    //MAXIMUM ELEMENT OF BST

    int max(Node* root)
    {
      if(root==nullptr)
      {
        cout << "No node is present\n";
        return 0;
      }
      else if(root->right==nullptr)
      {
        return root->data;
      }
      return max(root->right);
    }
};

int main()
{
  BinarySearchTree t;
  t.root=t.insert(t.root,70);
  t.root=t.insert(t.root,20);
  t.root=t.insert(t.root,50);
  t.root=t.insert(t.root,90);
  t.root=t.insert(t.root,80);
  t.inOrder(t.root);cout<<endl;
  t.preOrder(t.root);cout<<endl;
  t.postOrder(t.root);cout<<endl;
  cout << "Count: " << t.count(t.root) << endl;
  cout << "Search of 50 at " << t.search(t.root,50) << endl;
  cout << "Height of the BST: " << t.height(t.root) << endl; 
  cout << "Minimum element of the BST: " << t.min(t.root) << endl; 
  cout << "Maximum element of the BST: " << t.max(t.root) << endl; 
}