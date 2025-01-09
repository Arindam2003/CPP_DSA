#include<iostream>

using namespace std;

class Solution
{
    bool isprefix(string s1,string s2)
    {
        int n1=s1.size();  //word
        int n2=s2.size();  //pref
        if(n2>n1)
        {
            return false;
        }
        for(int i=0;i<n2;i++)
        {
            if(s2[i]!=s1[i])
            {
                return false;
            }
        }
        return true;
    }
public:
    int prefixCount(vector<string>& words, string pref)
    {
        int count=0;
        for (int i=0;i<words.size();i++)
        {
            if(isprefix(words[i],pref)){
                count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<string> arr;
    arr.push_back("pay");
    arr.push_back("attention");
    arr.push_back("practice");
    arr.push_back("attend");
    int number;
    string check="at";
    Solution s;
    number=s.prefixCount(arr,check);
    cout<<"Count is: "<<number<<endl;
    return 0;
}
