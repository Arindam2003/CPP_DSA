

/*
#include<stdio.h>
#include<string.h>

int countPrefixSuffixPairs(char** words, int wordsSize) {
    int i,j;
    int count=0;
    for(i=0;i<wordsSize;i++)
    {
        for(j=0;j<wordsSize;j++)
        {
            if(i!=j)
            {
                char* pschar=words[i];
                char* target=words[j];
                int pslen=strlen(pschar);
                int targetlen=strlen(target);


                //check if prefix present 
                int isprefix=strncmp(pschar,target,pslen)==0;  //strncmp -> for checking n number of string checking in the words

                int issuffix= (pslen <= targetlen) && (strncmp(pschar,target+targetlen-pslen,pslen)==0);

                if(isprefix && issuffix)
                {
                    count++;
                }

            }
        }
    }
    return count;
}
*/
#include<iostream>
#include<vector>
#include<string>
using namespace std;

class Solution
{
    bool isprefix(const string &s1,const string &s2)
    {
        int m=s1.size();
        int n=s2.size();
        if(m>n)
        {
            return false;
        }
        for(int i=0;i<m;i++)
        {
            if(s1[i]!=s2[i])
            {
                return false;
            }
        }
        return true;
    }
    bool issuffix(const string &s1,const string &s2)
    {
        int m=s1.size();
        int n=s2.size();
        if(m>n)
        {
            return false;
        }
        for(int i=m-1;i>=0;i--)
        {
            if(s1[i]!=s2[n-(m-i)])
            {
                return false;
            }
        }
        return true;
    }

public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int i,j;
        int count=0;
        for (i=0;i<words.size();i++)
        {
            for(j=i+1;j<words.size();j++)
            {
                if(isprefix(words[i],words[j])&& issuffix(words[i],words[j]))
                count++;
            }
        }
        return count;
    }
};


int main()
{
    Solution s;
    vector<string> words;
    words.push_back("a");
    words.push_back("aba");
    words.push_back("ababa");
    words.push_back("aa");
    int result=s.countPrefixSuffixPairs(words);
    cout<<"Prefix and suffix number is:"<<result<<endl;
    return 0;
}