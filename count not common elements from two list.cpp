#include<iostream>
using namespace std;
int count_non_common_elements(int input11[],int input12,int input21[],int input22)
{
    int count = 0;
    for(int i = 0;i<input12;i++)
    {
        bool isEqual = false;
        for(int j=0;j<input22;j++)
        {
            
            if(input11[i] == input21[j])
            {
                isEqual = true;
                break;
            }
        }
        if(isEqual == false)
        {
            count += 1;
        }
    }
      for(int i = 0;i<input22;i++)
    {
        bool isEqual = false;
        for(int j=0;j<input12;j++)
        {
            
            if(input21[i] == input11[j])
            {
                isEqual = true;
                break;
            }
        }
        if(isEqual == false)
        {
            count += 1;
        }
    }
    return count;
}
int main()
{
    int input11[] = {1,1,2,3,4,5,5,7,6,9,10};
    int input12 = sizeof(input11)/sizeof(input11[0]);
    int input21[] = {11,12,13,4,5,6,7,18,19,20};
    int input22 = sizeof(input21)/sizeof(input21[0]);
    int output = count_non_common_elements(input11,input12,input21,input22);
    cout<<output;
    return 0;
}
