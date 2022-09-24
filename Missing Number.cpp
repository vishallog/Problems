int MissingNumber(vector<int>& array, int n) {
        int sum1=0,sum2=0;
    for(int i = 0;i<=n;i++)
    {
        sum1 += i;
    }
    for(int i = 0;i<n-1;i++)
    {
        sum2 += array[i];
    }
    int ans = sum1 - sum2;
    return ans;
    }
