#include<iostream>
using namespace std;

class Array{
    private:
        int *p,size;
    public:
        //! deep copy
        Array operator=(Array arr)
        {
            size=arr.size;
            p=new int[size];
            for(int i=0;i<size;i++)
            {
                p[i]=arr.p[i];
            }
            return *this;
        }
        friend Array* operator+(Array ,Array );
};
//! Dynamically Concatinating the array

Array* operator+(Array a1,Array a2)  
{
    Array *arrptr;
    arrptr=new Array();  //! Dynamacially because if i want then memory release
    arrptr->size=a1.size+a2.size;
    arrptr->p=new int[arrptr->size];
    int k=0;
    for(int i=0;i<a1.size;i++,k++)
    {
        arrptr->p[k]=a1.p[i];
    }
    for(int i=0,k;i<a2.size;i++,k++)
    {
        arrptr->p[k]=a2.p[i];
    }
    return arrptr;
    
}