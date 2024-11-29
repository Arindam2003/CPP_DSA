void reverseArray(int arr[], int n) {
    // Code here
    int i=0;
    int j=n-1;
    while(i<=j)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
}