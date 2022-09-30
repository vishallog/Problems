#include <bits/stdc++.h>
#include<vector>
using namespace std;

  


int main(){
    float x1,x2,x3,y1,y2,y3;
    cout<<"Enter coordinates of the first point of the triangle"<<endl;
    cin>>x1>>y1;
    
    
    cout<<"\n Enter coordinates of the second point of the triangle"<<endl;
    cin>>x2>>y2;
    
    
    cout<<"\nEnter coordinates of the third point of the triangle"<<endl;
    cin>>x3>>y3;
    
    float x = (x1+x2+x3)/3;
    float y = (y1+y2+y3)/3;
    cout<<"\nEquidistant point is"<<"  "<<x<<"   "<<y;
    
    return 0;
}
