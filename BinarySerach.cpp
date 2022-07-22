#include<iostream>
using namespace std;
int binarySearch(int arr[], int key, int n)
{
 
     int s=0,e=n-1,m=(s+e)/2;
    while(s<=e)
    {
        if(key==arr[m])
            return m;
        else if(key<arr[m])
        {
            e=m-1;
        }
        else if(key>arr[m])
        {
            s=m+1;
        }
               m=(s+e)/2;
        
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9};
    
    int n=sizeof(arr)/sizeof(int);
    int key=9;
   

   cout<<"Key find at "<<binarySearch(arr,key,n);
    return 0;
}
