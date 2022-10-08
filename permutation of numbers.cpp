 // Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
   vector<int> nums = {1,2,3};
   int n = nums.size();
   vector<vector<int>> a;
   a.push_back({nums[0]});
   for(int i = 1; i < n;i++)
   {
       vector<vector<int>> temp;
       for(int j = 0;j<a.size();j++)
       {
           auto y = a[j];
           int len = y.size();
           for(int k = 0;k<=len;k++)
           {
               y.insert(y.begin()+k,nums[i]);
               temp.push_back(y);
               y = a[j];
           }
       }
       a  = temp;
   }
   for(int i = 0;i<a.size();i++)
   {
       auto y = a[i];
       for(int j = 0;j< y.size();j++)
       {
           cout<<y[j]<<"    ";
       }
       cout<<endl;
   }
   
    return 0;
}
