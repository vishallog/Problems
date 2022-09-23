#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;
int numberOfBits(int n) {
		  return log2(n) + 1;
    }
int main()
{    
    int n=4;
    
        long ans = 0, MOD = 1e9 + 7;
        
        for (int i = 1; i <= n; ++i) {
            int len = numberOfBits(i);
            cout<<i<<"   len --"<<len<<"   ans --"<<ans<<"  MOD--"<<MOD<<endl;
            cout<<"     "<<(ans << len) <<endl;
            ans = ((ans << len) % MOD + i) % MOD;
        }
        cout<<ans;
    
    return 0;
}
