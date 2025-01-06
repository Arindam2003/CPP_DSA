#include<iostream>
using namespace std;

class String {
    private:
        char *s;
        int length;
    public:
        String()
        {
            s=nullptr;
            length=0;
        }
        void printString()
        {
            cout<<s<<endl;
        }
        void inputString()
        {
            int i,size=1;
            char *p,*q;
            char ch=0;
            *q='\0';
            while(ch!=10){
                p = new char[size];
                ch=cin.get();
                if(ch==13)
                {
                    delete []p;
                    s=q;
                    break;
                }
                for(i=0;i<size;i++)
                {
                    p[i]=q[i];
                }
                *(p+i-1)=ch;
                delete []q;
                q=new char[size+1];
                for(i=0;i<size;i++)
                {
                    q[i]=p[i];
                }
                q[i]='\0';
                delete []p;
                size++;
            }
        }
        void lower()
        {
            int i;
            for(i=0;i<length;i++)
            {
                if(s[i]>='A' && s[i<='Z'])
                {
                    s[i]=s[i]+32;
                }
            }
        }
        void upper()
        {
            int i;
            for(i=0;i<length;i++)
            {
                if(s[i]>='a' && s[i<='z'])
                {
                    s[i]=s[i]-32;
                }
            }
        }
        int leng()
        {
            return length;
        }
        char* getString()
        {
            return s;
        }
};

int main()
{
    String s1;
    s1.inputString();
    s1.printString();
}