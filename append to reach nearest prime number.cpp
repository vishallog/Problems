#include<iostream>
using namespace std;
int append_to_reach_nearest_prime(int input1[],int input2)
{
    
    int count = 0,i =0;
    
    while(i<input2)
    {
         
        count  += input1[i];
        i++;
    }

    int count1 = count;
    int near = 0;
    int j = 2;
   
    while(count != 0)
    {
        bool isPrime = false;
        while(j<count)
        {
            
                
            if(count % j == 0)
            {
               
                isPrime = true;
                break;
            }
            j++;
        }
         
        if(isPrime == false)
        {
            //cout<<count;
            near = count - count1;
            return near;
        }
        count++;
    }
}
int main()
{
    int input1[] = {100,200,28,24,22};
    int input2 = sizeof(input1)/sizeof(input1[0]);
     
    //int dis = 3;
    int dis = append_to_reach_nearest_prime(input1,input2);
    if(dis == 5)
    {
        cout<<"Test case is Passed..";
    }
   
    return 0;
}
