#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string c = "";
    string s = "Let's take LeetCode contest";
    string word="";
    vector<string> str;
    int n = s.length();
    
    for(auto x:s)
    {
        if(x == ' ')
        {
            int n1 = word.length();
            int i =0;
            int j = n1-1;
            while(i<j)
            {
                int temp = word[i];
                word[i] = word[j];
                word[j] = temp;
                i++;j--;
            }
            str.push_back(word);
            //cout<<word<<endl;
            word = "";
        }
        else
        {
            word +=x;
        }
        
    }
     int n2 = word.length();
            int i =0;
            int j = n2-1;
            while(i<j)
            {
                int temp = word[i];
                word[i] = word[j];
                word[j] = temp;
                i++;j--;
            }
    str.push_back(word);
   for(auto x:str)
  {
      c = c+" "+x;
  }
  cout<<c;
    return 0;
}
