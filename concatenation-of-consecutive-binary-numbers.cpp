#include<iostream>
#include <bits/stdc++.h>
#include <string>
#include <sstream>
using namespace std;

int main()
{
    string sum = "";
    int arr[] = {1,10,11,100,101,110,111,1000,1001,1010,1011,1100,1101,1110,1111};
    
    int n =3;
    for(int i = 0;i<n;i++)
    {
        sum += to_string(arr[i]);
    }
    //cout<<sum<<endl;
        stringstream geek(sum);

        int num = 0;
        geek>>num;
        int dec = 0;
        int lastno = 0;
        int base = 1;
        int temp = num;
        while(temp)
        {
            //cout<<temp;
            lastno = temp%10;
            dec  += (base) * lastno;
            
            temp = temp/10;
            base = base *2;
        }
        
        cout<<dec;
    return 0;
}
