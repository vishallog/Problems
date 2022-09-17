#include<iostream>
using namespace std;
int bracket_match(string bracket_string)
{
    string s = bracket_string;
    int n = s.size();
    char arr[10];
    int count = -1;
    int cnt = 0;
    int i=0;
   
    while(i<n)
    {
        
        if(s[i] == '(')
        {
            
            count++;
            arr[count] = '(';
            
        }
        else 
        {
            if(count == -1)
            {
               cnt +=1; 
            }
            else
            {
                count--;
            }
        }
        i++;
    }
    cnt += count+1;
    return cnt;
}
int main()
{
    string s1 = ")(";
    int i = bracket_match(s1); 
    if(i == 2)
        cout<<"Test case Passed..";
    return 0;
}
