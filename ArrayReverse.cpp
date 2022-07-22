/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

void arrayReverse(int arr[],  int n)
{
 
     int s=0,e=n-1;
    while(s<=e)
    {
        //we can use this or inbuit method swap(a,b)
        // int temp = arr[s];
        // arr[s]=arr[e];
        // arr[e]=temp;
        swap(arr[s],arr[e]);
        s++;e--;
        
    }

}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    
    int n=sizeof(arr)/sizeof(int);
    cout<<"Before\n";
      for(int a:arr)
     cout<<a<<" ";

   arrayReverse(arr,n);
      cout<<"\nAfter\n";
   for(int a:arr)
   cout<<a<<" ";
    return 0;
}
