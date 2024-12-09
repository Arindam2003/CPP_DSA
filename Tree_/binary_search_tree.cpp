#include<iostream>
using namespace std;

struct  node
{
    node *left;
    int data;
    node *right;
};

class BST
{
private:
    node *root;
public:
    BST();
    
};

BST::BST()
{
    root=nullptr;
}



