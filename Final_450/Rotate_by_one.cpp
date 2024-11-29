class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n=arr.size();
        int store=arr[n-1];
        int i;
        for(i=n-1;i>0;i--)
        {
            arr[i]=arr[i-1];
        }
        arr[i]=store;
    }
};