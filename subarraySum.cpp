// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
vector<int> sum(int arr[],int n,long long s)
{
       vector<int> res;
        int sum = 0;
        int i = 0;
         int c = i;
        for(i = 0;i<=n;i++)
        {
            
            sum = sum + arr[i];
             if(sum == s)
            {
                res.push_back(c+1);
                res.push_back(i+1);
                return res;
            } 
            if(i == n || sum>s)
            {
                sum = 0;
                c++;
                i = c-1;
            }
            if(c == n)
            {
                res.push_back(-1);
                return res;
            }
        }
}
int main() {
    int arr[] = {7,2,3,7,5};
    int n = 5;
    int s = 25;
    vector<int> res = sum(arr,n,s);
    for(auto x:res)
        cout<<x<<"  ";
    return 0;
}
