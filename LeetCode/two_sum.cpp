#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;

class Solution
{

public:
    // vector<int> sub_array_sum(int arr[],int start,int end)
    // {
    //     int i;
    //     vector<int> sub_sum;
    //     for(i=start;i<=end;i++)
    //     {
    //         for(int j=i+1;j<end;j++)
    //         {
    //             sub_sum.push_back(arr[i]+arr[j]);
    //         }
    //     }
    //     return sub_sum;
    // }
    

    //Brute Froce...
    /*
    vector<int> twoSum(vector<int>& nums, int target) {
        int i,j;
        int n=nums.size();
        
        vector<int>index;
        for(int i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    index.push_back(i);
                    index.push_back(j);
                    return index;
                }
            }
        }
        return {};  //edge case handle
    }
    */

    // Using sorting...

    /*
    vector<int> twoSum(vector<int>& nums, int target)
    {
        int n=nums.size();
        sort(arr.begin(),arr.end());
        int i=0,j=n-1;
        vector<int>index;
        while(i<j)
        {
            if((nums[i]+nums[j])==target)
            {
                index.push_back(i);
                index.push_back(j);
                return index; 
            }
            else if((nums[i]+nums[j])<target)
            {
                i++;
            }
            else if((nums[i]+nums[j])>target)
            {
                j--;
            }
            else{
                return {};
            }
        }
        return {};
    }
    */

    // Hashing ....
    /*
    vector<int> twoSum(vector<int>& nums, int target)
    {
        unordered_map<int, int> hashMap;

        for(int i=0;)
    }
    */
};

int main()
{
    Solution s1;
    vector<int> arr={12,23,34,1,2,3,5};
    vector<int> sub_sum=s1.twoSum(arr,36);
    for(int sum:sub_sum)
    {
        cout<<sum<<",";
    }
    cout<<endl;
}

