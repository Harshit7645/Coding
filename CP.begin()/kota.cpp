#include<bits/stdc++.h>
using namespace std;

struct node
{
        node* left;
        node* right;
        char info;
};

int convert(char c)
{
    int t;
    t = c - '0';
    return t;
}

int eval(node* root)
{
    if(!root)
    return 0;
    if(!root->left && !root->right)
    return convert(root->info);
    // int l_val = eval(root->left);
    // int r_val = eval(root->right);
    return 0;
    // if(root->info == '+')
    // return l_val+r_val;
    // if(root->info == '-')
    // return l_val-r_val;
    // if(root->info == '*')
    // return l_val*r_val;
    // if(root->info == '/')
    // return l_val/r_val;
    // else return 1;
}

int main ()
{
    struct node* ip;
    struct node* first;
    struct node* second;
    /*root =(node)malloc(sizeof(node));
    second =(node)malloc(sizeof(node));
    first =(node)malloc(sizeof(node));*/
    //first
    cout<<1<<endl;
    first->info='5';
    first->left=NULL;
    first->right = NULL;
    //second
    cout<<122<<endl;
    second->info='5';
    second->left=NULL;
    second->right = NULL;
    //root
    cout<<1<<endl;
    /*ip->info = '+';
    ip->left = second;
    ip->right = first;*/
}