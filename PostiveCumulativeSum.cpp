/*
Positive Cumulative Sum

The cumulative sum of an array at index i is defined as the sum of all elements of the array from index 0 to index i.

Examples
Initial Array: [1, -2, 3, 4, -6]
Cumulative Sum: [1, -1, 2, 6, 0]
Initial Array: [1, -1, -1, -1, 1]
Cumulative Sum: [1, 0, -1, -2, -1]
Initial Array: [1, 3, 5, 7]
Cumulative Sum: [1, 4, 9, 16]
 */

#include<bits/stdc++.h>
using namespace std;

vector<int> getPositiveCumulativeSum(vector<int> &arr) {
	
    vector<int> result;

        int sum=0;
		for(int i=0;i<arr.size();i++)
		{
			sum=sum+arr[i];
			if(sum>0)
			result.push_back(sum);
		}
		return result;
}
int main()
{

vector<int> num={4 ,1, 3, 5, 7};
vector<int> result=getPositiveCumulativeSum(num);
for(int a:result)
cout<<a<<" ";
}