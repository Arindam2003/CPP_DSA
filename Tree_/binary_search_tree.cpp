#include <iostream>
#define DUPLICATE 1;
using namespace std;

struct node
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
    bool isempty();
    void insert(int);
    void preorder();
};

BST::BST()
{
    root = nullptr;
}

bool BST::isempty()
{
    return (root == nullptr);
}

void BST::insert(int d)
{
    node *t;
    node *newnode = new node;
    newnode->data = d;
    newnode->left = nullptr;
    newnode->right = nullptr; //! New node create ...
    if (isempty())
    {
        root = newnode;
    }
    else
    {
        while (t != nullptr)
        {
            if (d < t->data)  // Insert Left Subtree
            {
                if (t->left == nullptr)
                {
                    t->left = newnode;
                    break;
                }
                else
                {
                    t = t->left;
                }
            }
            else  //Insert Right Subtree
            {
                if (t->right == nullptr)
                {
                    t->right = newnode;
                    break;
                }
                else
                {
                    t = t->right;
                }
            }
        }
        if(t->data==d)  //Safe for memory leake
            delete newnode;
    }
}



void BST::preorder()
{
    node *t=root;
    if(isempty())
        cout<<"No value in Tree"<<endl;
    else
    {
        while (t!=nullptr)
        {
            cout<<t->data<<"-->";
            t=t->left;

        }
        
    }
}

// void BST::()`

int main()
{
    BST b;
    b.insert(12);
    cout << endl;
    return 0;
}
