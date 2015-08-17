#include"problems.h"

/* Description: Given a array   
 * {{ 4,7,3,6,7}}   
 * construct a triangle like   
 * {{81}}   
 * {{40,41}}   
 * {{21,19,22}}   
 * {{11,10,9,13}}  
 * {{ 4,7,3,6,7}} */  

//Triangle
void triangle(vector<int> arr, vector<vector<int>> &ret) {
	if(arr.size()==0) {
		return;
	} else {
		vector<int> new_array(arr.size()-1);
		for(int i=0;i<arr.size()-1;i++) {
			new_array[i] = arr[i]+arr[i+1];
		}
		triangle(new_array,ret);
	}
	ret.push_back(arr);
}