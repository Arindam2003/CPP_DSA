#include<iostream>
using namespace std;

class Matrix
{
private:
    int A[3][3];
public:
    void inputMatrix();
    void displayMatrix();
    Matrix operator+(Matrix);
    Matrix operator-(Matrix);
    Matrix operator*(Matrix);
};
void Matrix::inputMatrix()
{
    cout<<"Enter 9 Number for Matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cin>>A[i][j];
        }
    }
}
void Matrix::displayMatrix(){
    cout<<"Numbers in Matrix:"<<endl;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cout<<A[i][j]<<" ";
        }
    }
}
Matrix Matrix::operator+(Matrix a)
{
    Matrix temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp.A[i][j]=A[i][j]+a.A[i][j];
        }
    }
    return temp;
}
Matrix Matrix::operator-(Matrix a)
{
    Matrix temp;
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            temp.A[i][j]=A[i][j]-a.A[i][j];
        }
    }
    return temp;
}
Matrix Matrix::operator*(Matrix a)
{
    Matrix temp;
    int i,j,k,sum;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0,sum=0;k<3;k++)
            {
                sum=sum+A[i][k]*a.A[k][j];
            }
            temp.A[i][j]=sum;
        }
    }
    return temp;
}
int main()
{
    Matrix m1,m2,m3;
    m1.inputMatrix();
    m2.inputMatrix();
    m3=m1+m2;
    m3.displayMatrix();
}