/*
Cumulative Sum

The cumulative sum of an array at index i is defined as the sum of all elements of the array from index 0 to index i.

Examples
Initial Array: [1, 2, 3, 4]
Cumulative Sum: [1, 3, 6, 10]
*/
#include<bits/stdc++.h>
using namespace std;

 vector<int> getCumulativeSum(vector<int> &arr) {
	// add your logic here
	int sum=arr[0];
	for(int i=1;i<arr.size();i++)
	{
		sum=sum+arr[i];
		arr[i]=sum;
	}
	return arr;
}

int main()
{
    
    vector<int> arr{ 1, 2, 3, 4};
    arr=getCumulativeSum(arr);
    for(int i:arr)
    cout<<i<<" ";
}
   