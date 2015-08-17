#include"problems.h"

/* Description: A number is called as a stepping number if the adjacent digits are having   
 * a difference of 1. For eg. 8,343,545 are stepping numbers. While 890, 098 are not.   
 * The difference between a ¡®9¡¯ and ¡®0¡¯ should not be considered as 1.   
 * Given start number(s) and an end number(e) your function should list out all the   
 * stepping numbers in the range including both the numbers s & e. */  

//The stepping number
vector<int> stepping(int start,int end) {
	vector<int> ret;
	int n;
	bool flag = false;
	for(int i=start;i<=end;i++) {
		n=i;
		while(n>9) {
			if(abs(n%10-(n/10)%10)==1) {
				flag = true;
				n/=10;
			} else {
				flag = false;
				break;
			}
		}
		if(flag) ret.push_back(i);
	}
	return ret;
}