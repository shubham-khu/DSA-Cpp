#include <iostream>
using namespace std;

int main()
{
    int arr[]={10,20,30,40,50,60};
    
    //this will take more time as we are running nested loop
   /*
    for(int a:arr)
    {
        for(int b:arr)
        {
            if(a==b||a>b)
            continue;
            cout<<"("<<a<<","<<b<<")\n";
        }
    }
    */
    
    //using for loop we can reduce time
    
    int n=sizeof(arr)/sizeof(arr[0]);
    
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
             cout<<"("<<arr[i]<<","<<arr[j]<<")\n";
        }
    }
   
    return 0;
}
