#include<iostream>
using namespace std;

class TestResult{
    private:
        int roll_no,right,wrong,net_score,rw,ww;
    public:
        void setRoll(int r){roll_no=r;}
        void setRight(int r){right=r;}
        void setWrong(int w){wrong=w;}
        int RightWeightage();
        int WrongWeightage();
        int getNetScore();
};
int TestResult:: RightWeightage()
{
    rw=(right*4);
    return rw;
}
int TestResult:: WrongWeightage()
{
    ww= (wrong*(-1));
    return ww;
}
int TestResult::getNetScore()
{
    return (rw+ww);
}

void setRoll(TestResult t)
{
    int i,x;
    scanf("%d",&x);
    t.setRoll(x);
}
void setRight(TestResult t)
{
    int i,x;
    scanf("%d",&x);
    t.setRight(x);
}
void setWrong(TestResult t)
{
    int i,x;
    scanf("%d",&x);
    t.setWrong(x);
}



int main()
{
    int i;
    TestResult t[5];
    for(i=0;i<5;i++)
    {
        t[i].
    }


    return 0;
}