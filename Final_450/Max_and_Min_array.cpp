class Solution {
  public:
    pair<long long, long long> getMinMax(vector<long long int> arr) {
        // code here
        int n=arr.size();
        int i,j;
        long long min=arr[0];
        long long max=arr[0];
        for(i=1,j=1;i<n,j<n;i++,j++)
        {
            if(min>arr[i])
            {
                min=arr[i];
            }
            if(max<arr[j])
            {
                max=arr[j];
            }
        }
        return {min,max};
        
    }
};