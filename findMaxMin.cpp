#include"problems.h"

/* Description: Take a series of integers as input till a zero is entered.   
 * Among these given integers, find the maximum of the odd numbers and the   
 * minimum of the even integers (not including zero) and print them. */  

//Find Max/Min Number
void findMaxMin(void) {
	int maxOdd = INT_MIN;
	int minEven = INT_MAX;
	int x;
	while(cin>>x) {
		if(x==0) break;
		if(x%2==0) {
			//even, find minimum
			minEven = min(minEven,x);
		} else {
			//odd, find maximum
			maxOdd = max(maxOdd,x);
		}
	}
	cout<<minEven<<" "<<maxOdd<<endl;
}