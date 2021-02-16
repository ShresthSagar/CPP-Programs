#include<iostream>
using namespace std;
struct node
{
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};



int treesize(node *root)
{
    if(root==NULL)
        return 0;
    return (treesize(root->left)+treesize(root->right)+1);

}


int maxnode(node *root)
{

    node *temp = root;
    if(root==NULL)
        return -1;

     return max(max(maxnode(root->left),maxnode(root->right)),root->data);
}


int height(node *root)
{

    if(root==NULL)
        return 0;

    return (max(height(root->left), height(root->right))+1);

}


void preorder(node *root)
{

    if(root==NULL)
        return;

    cout<<root->data<<"\t";
    preorder(root->left);
    preorder(root->right);

}


void inorder(node *root)
{

    if(root==NULL)
        return;

    inorder(root->left);
    cout<<root->data<<"\t";
    inorder(root->right);

}


void postorder(node *root)
{

    if(root==NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<"\t";

}


int main()
{
    int val;
    node *root = NULL;
    root = new node(10);
    root->left = new node(20);
    root->right = new node(30);
    root->left->left = new node(40);
    root->left->right = new node(50);
    root->right->left = new node(60);
    root->right->right = new node(70);
    node *temp = root;

    cout<<"Node with maximum value - > "<<maxnode(root);
    cout<<"\nHeight of tree is - > "<<height(root)<<endl;
    preorder(root);
    cout<<"\n";
    inorder(root);
    cout<<"\n";
    postorder(root);
    cout<<"\n";
    cout<<"Tree size = " <<treesize(root);
}
