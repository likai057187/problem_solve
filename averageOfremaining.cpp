#include"problems.h"

/* Description: User inputs a series of numbers and terminates the series by a zero.   
 * Your program should find the first three maximum values in the series and exclude them   
 * from the series and compute the average of the remaining numbers. (excluding zero as well)   
 * Ex - 3, 7, 12, 2, 25, 8, 9, 13, 10, 0   
 * First three maximum numbers = 25, 13, 12   
 * Average of the rest = (3 + 7 + 2 + 8 + 9 + 10) / 6 = 6.5 */  

//Average of the remaining numbers
int averageRemaining(void) {
	int max1 = INT_MIN;
	int max2 = INT_MIN;
	int max3 = INT_MIN;
	int tmp;
	int sum=0;
	int count = 0;
	while(cin>>tmp) {
		if(tmp==0) break;
		count++;
		sum+=tmp;
		if(tmp>max1) {
			max1 = tmp;
			if(tmp>max2) {
				swap(max1,max2);
				if(tmp>max3) {
					swap(max2,max3);
				}
			}
		}
	}
	cout<<max1<<" "<<max2<<" "<<max3<<endl;
	return ((double)(sum-max1-max2-max3))/(count-3);
}