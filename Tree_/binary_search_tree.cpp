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
protected:
    void preorderrec(node *);
    void inorderrec(node *);
    void postorderrec(node *);
public:
    BST();
    bool isempty();
    void insert(int);
    void preorder();
    void inorder();
    void postorder();
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


//!Traversal

void BST::preorder()   //!Preorder
{
    preorderrec(root);
}

void preorderrec(node *ptr)
{
    cout<<ptr->data<<" ";
    preorderrec(ptr->left);
    preorderrec(ptr->right);
}

void BST::inorder()   //!Inorder
{
    inorderrec(root);
}
void inorderrec(node *ptr)
{
    inorderrec(ptr->left);
    cout<<ptr->data<<" ";
    inorderrec(ptr->right);
}

void BST::postorder()  //! Postorder
{
    postorderrec(root);
}
void postorderrec(node *ptr)
{
    preorderrec(ptr->left);
    preorderrec(ptr->right);
    cout<<ptr->data<<" ";
}

int main()
{
    BST b;
    b.insert(12);
    cout << endl;
    return 0;
}
