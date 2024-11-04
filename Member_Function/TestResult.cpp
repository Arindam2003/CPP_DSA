#include<iostream>
using namespace std;

class TestResult{
    private:
        int roll_no,right,wrong,net_score;
        static int right_weightage,wrong_weightage;
    public:
        void setRoll(int r){roll_no=r;}
        void setRight(int r){right=r;}
        void setWrong(int w){wrong=w;}
        void setNetscore(int n){net_score=n;}
        static void setRightweightage(int rw){right_weightage=rw;}
        static void setWrongweightage(int ww){wrong_weightage=ww;}

        int get_Roll(){return roll_no;}
        int get_Right(){return right;}
        int get_Wrong(){return wrong;}
        int get_NetScore(){return net_score;}
        static int get_RightWeightage(){return right_weightage;}
        static int get_WrongWeightage(){return wrong_weightage;}
};
int TestResult::right_weightage = 0;
int TestResult::wrong_weightage = 0;

void setValue(TestResult &t,int r,int right,int wrong)
{

    t.setRoll(r);
    t.setRight(right);
    t.setWrong(wrong);
    t.setNetscore(t.get_Right()*TestResult::get_RightWeightage()+t.get_Wrong()*TestResult::get_WrongWeightage());
}

void sort_netscore(TestResult t[],int size)
{
    TestResult temp;
    int i,j;
    for(i=0;i<size-1;i++)
    {
        for(j=0;j<size-1-i;j++)
        {
            if(t[j].get_NetScore()<t[j+1].get_NetScore())
            {
                temp=t[j];
                t[j]=t[j+1];
                t[j+1]=temp;
            }
        }
    }
}

void Display_TestResult(TestResult t[],int size)
{
    int i;
    cout<<"Roll Right Wrong NetScore"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<" ";
        cout<<t[i].get_Roll()<<"    ";
        cout<<t[i].get_Right()<<"  ";
        cout<<t[i].get_Wrong()<<"  ";
        cout<<t[i].get_NetScore()<<"  ";
        cout<<endl;
    }
}

int main()
{
    TestResult::setRightweightage(4);
    TestResult::setWrongweightage(-1);
    TestResult t[5];
    int i,right,wrong,roll;
    for(i=0;i<5;i++)
    {
        cout<<"Enter Roll no:";
        cin>>roll;
        cout<<"Enter Number of Right Answer:";
        cin>>right;
        cout<<"Enter Number of Wrong Answer:";
        cin>>wrong;
        setValue(t[i],roll,right,wrong);
        cout<<endl;
    }
    sort_netscore(t,5);
    Display_TestResult(t,5);
    cout<<endl;
    return 0;
}