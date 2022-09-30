#include <bits/stdc++.h>
#include<vector>
using namespace std;

  


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0;i<n;i++)
        cin>>arr[i];
    vector<int> even;
    vector<int> odd;
    for(int i = 0;i<n;i++){
        if(arr[i]%2 !=0)
            odd.push_back(arr[i]);
    }
    for(int i = 0;i<n;i++){
        if(arr[i]%2 ==0)
            even.push_back(arr[i]);
    }
    vector<int> res;
    for(int i = 0;i<even.size();i++){
        res.push_back(even[i]); }
    for(int i = 0;i<odd.size();i++){
        res.push_back(odd[i]); }
    for(int i = 0;i<n;i++)
        arr[i] = res[i];
    for(int i = 0;i<n;i++)
        cout<<arr[i]<<"  ";
    
    return 0;
}
