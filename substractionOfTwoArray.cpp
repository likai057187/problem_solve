#include"problems.h"

/* Description: Suppose you want to do the subtraction of two numbers.   
 * Each digit of the numbers is divided and put in an array. Like A=[1,2, 3, 4, 5],  
 * B=[4, 5, 3, 5]. You should output an array C=[7, 8, 1, 0].  
 * Remember that your machine can¡¯t hand numbers larger than 20. */  

//Subtraction of two Arrays
vector<int> sub(vector<int> arr1, vector<int> arr2) {
	vector<int> ret;
	int carry = 0;
	int digit1,digit2, sub;
	for(int i=arr1.size()-1, j=arr2.size()-1;i>=0||j>=0;i--,j--) {
		i>=0?digit1=arr1[i]:digit1=0;
		j>=0?digit2=arr2[j]:digit2=0;
		if(digit1-digit2+carry<0) {
			ret.insert(ret.begin(),digit1-digit2+carry+10);
			carry=-1;
		} else {
			ret.insert(ret.begin(),digit1-digit2+carry);
			carry = 0;
		}
	}
	for(int i=0;i<ret.size();i++) {
		if(ret[i]!=0) {
			break;
		} else {
			ret.erase(ret.begin()+i);
		}
	}
	return ret;
}