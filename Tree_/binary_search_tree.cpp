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
    void insert(int);
};

BST::BST()
{
    root = nullptr;
}

void BST::insert(int d)
{
    node *t = root;
    node *newnode = new node;
    newnode->data = d;
    newnode->left = nullptr;
    newnode->right = nullptr; //! New node create ...
    if (d == t->data)
        throw DUPLICATE;
    while (t != nullptr)
    {
        if (d < t->data)
        {
            if (t->left == nullptr)
            {
                t->left = newnode;
            }
            else
            {
                t = t->left;
            }
        }
        else
        {
            if (t->right == nullptr)
            {
                t->right = newnode;
            }
            else
            {
                t = t->right;
            }
        }
    }
}

int main()
{
    BST b;
    b.insert(12);
    cout << endl;
    return 0;
}
