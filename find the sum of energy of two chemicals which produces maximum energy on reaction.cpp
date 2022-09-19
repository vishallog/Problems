#include<iostream>
using namespace std;
int sum_of_energy(int input,int input1[])
{
    int count1 = 0;
    int count = 0;
    for(int i = 0;i<input;i++)
    {
        for(int j = 0;j<input && j!=i;j++)
        {
            if(count >= count1)
            {
                count1 = count;
            }
            count = input1[i] + input1[j];
        }
    }
    return count1;
}
int main()
{
    int input1[] = {9,-3,9,-6,-7,8,10};
    int input = sizeof(input1)/sizeof(input1[0]);
    int output = sum_of_energy(input,input1);
    cout<<output;
    return 0;
}
