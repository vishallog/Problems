#include <iostream>
#include<vector>
#include<bits/stdc++.h>
#include<string>
using namespace std;
int main() {
	int num = 4;    
	//cout << "Input number is " << num << endl;	
	int arr[num] = {3,6,1,0};
	vector<string> res;
	for(int i = 0;i<num-1;i++){
		for(int j = i+1;j<num;j++){
			if(arr[i]!=0 && arr[j] != 0)
			{
		    string s1 = to_string(arr[i]);
		    s1 += to_string(arr[j]);
		
			res.push_back(s1);
			}
		}
	}
	int arr1[res.size()];
	for(int i = 0;i<res.size();i++)
	{
	    //cout<<res[i]<<"   ";
	    arr1[i] = stoi(res[i]);
	}
	int mini = INT_MAX;
	for(auto x:arr1)
	{
	       //cout<<x<<"  ";
	       if(x%3== 0)
	       {
	           mini = min(mini,x);
	       }
	}
	//cout<<endl;
	cout<<mini;
	return 0;
}
