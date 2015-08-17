#include"problems.h"

/* Description: Find the seed of a number.   
 * Eg : 1716 = 143*1*4*3 =1716 so 143 is the seed of 1716. find all possible seed for a given number. */  

//Seed Number
vector<int> seedNumber(int num) {
	int temp;
	int product;
	vector<int> ret;
	for(int i=sqrtl(num);i<num;i++) {
		if(num%i==0) {
			temp = i;
			product = i;
			while(temp) {
				product*=(temp%10);
				temp/=10;
			}
			if(num==product) {
				ret.push_back(i);
			}
		}
	}
	return ret;
}