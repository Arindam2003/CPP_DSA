#include<iostream>
using namespace std;

class Distance{
    private:
        int km, m, cm;
    public:
        void setData(int k,int mi,int c)
        {
            km=k;
            m=mi;
            cm=c;
        }
        Distance operator+(Distance d)
        {
            Distance temp;
            temp.km=km+d.km;
            temp.m=m+d.m;
            temp.cm=cm+d.cm;
            if(temp.cm>100)
            {
                temp.m=temp.m+(temp.cm/100);
                temp.cm=temp.cm%100;
            }
            if(temp.m>1000)
            {
                temp.km=temp.km+(temp.m/1000);
                temp.m=temp.m%1000;
            }
            return temp;
        }
        void displayData()
        {
            cout<<km<<"km "<<m<<"m "<<cm<<"cm "<<endl;
        }
        Distance operator--() //! Pre Decrement
        {
            Distance temp;
            if(km=0 && m==0 && cm==0)
            {
                temp.km=km;
                temp.m=m;
                temp.cm=cm;
            }
            else{
                if(cm==0)
                {
                    cm=100;
                    if(m==0)
                    {
                        m=999;
                        --km;
                    }else
                    {
                        --m;
                    }
                }
                else{
                    --cm;
                }
                temp.cm=--cm;
                temp.m=m;
                temp.km=km;
            }
            return temp;
        }
        Distance operator--(int)  //! Post Decrement
        {
            Distance temp;
            if(km=0 && m==0 && cm==0);
            else{
                if(cm==0)
                {
                    cm=100;
                    if(m==0)
                    {
                        m=999;
                        --km;
                    }else
                    {
                        --m;
                    }
                }
                else{
                    --cm;
                }
                cm=--cm;
                m=m;
                km=km;
            }
            return temp;
        }
};

int main()
{
    Distance dis1,dis2,dis3;
    dis1.setData(12,23,34);
    dis2.setData(12,23,34);
    dis3=dis1+dis2;
    dis3.displayData();
}