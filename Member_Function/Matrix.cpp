#include<iostream>
using namespace std;

class Matrix{
    private:
        int A[3][3];
    public:
        void input()
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;i<3;j++)
                {
                    cin>>A[i][j];
                }
            }
        }
        void display()
        {
            int i,j;
            for(i=0;i<3;i++)
            {
                for(j=0;i<3;j++)
                {
                    cout<<A[i][j]<<" ";
                }
                cout<<endl;
            }
        }
        Matrix add(Matrix m)
        {
            Matrix temp;
            int i,j;
            for ( i = 0; i < 3; i++)
            {
                for(j=0;j<3;j++)
                {
                    temp.A[i][j]=A[i][j]+m.A[i][j];
                }
            }
            return temp;
        }
        Matrix sub(Matrix m)
        {
            Matrix temp;
            int i,j;
            for ( i = 0; i < 3; i++)
            {
                for(j=0;j<3;j++)
                {
                    temp.A[i][j]=A[i][j]-m.A[i][j];
                }
            }
            return temp;
        }
        Matrix multiply(Matrix m)
        {
            Matrix temp;
            int i,j,k,sum;
            for ( i = 0; i < 3; i++)
            {
                for(j=0;j<3;j++)
                {
                    for(k=0;k<3;k++)
                    {
                        sum+=A[i][k]*m.A[k][i];
                    }
                    temp.A[i][j]=A[i][j]+m.A[i][j];
                }
            }
            return temp;
        }

};