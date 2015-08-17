#include"problems.h"

/* Description: Find the largest sum contiguous sub array.   
 * The length of the returned sub array must be at least of length 2. */  

//Maximum Subarray
pair<int,int> maxSubarray(vector<int> arr) {
	int curMax = arr[0];
	int sumMax = arr[0];
	int end = 0;
	pair<int,int> ret;
	for(int i=1;i<arr.size();i++) {
		curMax = max(arr[i],curMax+arr[i]);
		if(sumMax<curMax) {
			sumMax = curMax;
			end = i;
		}
	}
	int start=end;
	int tmp = sumMax;
	while(tmp) {
		tmp-=arr[start];
		if(tmp) {
			start--;
		}
	}
	ret.first = start;
	ret.second = end;
	return ret;
}