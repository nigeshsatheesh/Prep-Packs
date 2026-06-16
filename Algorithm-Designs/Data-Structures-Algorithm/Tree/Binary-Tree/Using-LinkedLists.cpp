#include <iostream>
#include <queue>
using namespace std;

//BINARY TREE

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

class BinaryTree
{
  public:
    int count;
    Node* root;
    BinaryTree()
    {
      root=nullptr;
    }
    
    //INSERTION
    
    Node* insert(Node*root,int data)
    {
      Node* n=new Node(data);
      if(root==nullptr)
      {
        root=n;
        count++;
        return root;
      }
      else
      {
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
          Node* temp=q.front();
          q.pop();
          if(temp->left==nullptr)
          {
            temp->left=n;
            count++;
            return root;
          }
          else
          {
            q.push(temp->left);
          }
          if(temp->right==nullptr)
          {
            temp->right=n;
            count++;
            return root;
          }
          else
          {
            q.push(temp->right);
          }
        }
      }
    }
    
    //INORDER TRAVERSAL
    
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
    
    //PREORDER TRAVERSAL
    
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
    
    //POSTORDER TRAVERSAL
    
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
    
    //LEVELORDER TRAVERSAL - BFS TRAVERSAL
    
    void levelOrder(Node* root)
    {
      if(root==nullptr)
      {
        cout << "No node is present\n";
      }
      else
      {
        queue<Node*> q;
        q.push(root);
        while(!q.empty())
        {
          Node* temp=q.front();
          q.pop();
          cout << temp->data << " ";
          if(temp->left!=nullptr)
          {
            q.push(temp->left);
          }
          if(temp->right!=nullptr)
          {
            q.push(temp->right);
          }
        }
      }
    }
    
    //HEIGHT OF THE LEAF TREE
    
    int height(Node* root)
    {
      if(root==nullptr)
      {
        return 0;
      }
      int left_height=height(root->left);
      int right_height=height(root->right);
      return max(left_height,right_height)+1;
    }
    
    //NO OF NODE IN BINARYTREE
    
    int countBT()
    {
      return count;
    }
    
};
int main()
{
  BinaryTree t;
  t.root=t.insert(t.root,70);
  t.root=t.insert(t.root,20);
  t.root=t.insert(t.root,50);
  t.root=t.insert(t.root,90);
  t.root=t.insert(t.root,80);
  t.inOrder(t.root);cout<<endl;
  t.preOrder(t.root);cout<<endl;
  t.postOrder(t.root);cout<<endl;
  t.levelOrder(t.root);cout<<endl;
  cout << "Count: " << t.countBT() << endl;
  cout << "Height of the BST: " << t.height(t.root); 
  
}