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
    void preorderrec(node*);
    void inorderrec(node*);
    void postorderrec(node*);
    node* deletenode(node *ptr,int d);
public:
    BST();
    bool isempty();
    void insert(int);
    void preorder();
    void inorder();
    void postorder();
    void del(int);
    node* search(int);
    ~BST();
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
        t=root;
        while (d!=t->data)
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
    cout<<"Preorder Traversal"<<endl;
    preorderrec(root);
}

void BST::preorderrec(node *ptr)
{
    if(ptr){
        cout<<ptr->data<<"--> ";
        preorderrec(ptr->left);
        preorderrec(ptr->right);
    }
}

void BST::inorder()   //!Inorder
{
    cout<<"Inorder Traversal"<<endl;
    inorderrec(root);
}
void BST::inorderrec(node *ptr)
{
    if(ptr)
    {
        inorderrec(ptr->left);
        cout<<ptr->data<<"-->";
        inorderrec(ptr->right);
    }
}

void BST::postorder()  //! Postorder
{
    cout<<"Inorder Traversal"<<endl;
    postorderrec(root);
}
void BST::postorderrec(node *ptr)
{
    if(ptr)
    {
        preorderrec(ptr->left);
        preorderrec(ptr->right);
        cout<<ptr->data<<"-->";
    }
}

node* BST::search(int d)
{
    node *ptr=root;
    while(ptr)
    {
        if(ptr->data==d)
        {
            return ptr;
        }
        if(d<ptr->data)
        {
            ptr=ptr->left;
        }
        else{
            ptr=ptr->right;
        }
    }
    return ptr;
}

void BST::del(int d)
{
    root=deletenode(root,d);
}

node* BST::deletenode(node *ptr,int d)
{
    if(ptr==nullptr)
        return nullptr;
    if(d<ptr->data)
    {
        ptr->left=deletenode(ptr->left,d);
    }
    else if(d>ptr->data){
        ptr->right=deletenode(ptr->right,d);
    }
    else  //Node found
    {
        // No child
        if(ptr->left==nullptr && ptr->right==nullptr )
        {
            delete ptr;
            return nullptr;
        }
        if(ptr->left==nullptr || ptr->right==nullptr)
        {
            
        }
    }
}

int main()
{
    BST b;
    b.insert(10);
    b.insert(6);
    b.insert(4);
    b.insert(8);
    b.insert(15);
    cout<<endl;
    b.preorder();
    cout<<endl;
    b.inorder();
    cout << endl;
    b.postorder();
    cout<<endl;
    return 0;
}
