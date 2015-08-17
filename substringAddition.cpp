#include"problems.h"

/* Description: Substring Addition   
 * Write a program to add the substring   
 * eg :say you have a list {1 7 6 3 5 8 9 } and user is entering a sum 16.  
 * Output should display (2-4) that is {7 6 3} cause 7+6+3=16. */  

//Substring Addition
string substringAddition(vector<int> arr, int sum) {
	string ret;
	int total;
	for(int i=0;i<arr.size();i++) {
		total = 0;
		for(int j=i;j<arr.size();j++) {
			total+=arr[j];
			if(total==sum) {
				ret += to_string(static_cast<long long>(i+1)) + "-" + to_string(static_cast<long long>(j+1));
				return ret;
			}
		}
	}
	return "Not Found";
}