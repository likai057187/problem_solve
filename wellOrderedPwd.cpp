#include"problems.h"

/* Description: Find all the possible passwords, given the length of the password and that   
 * it is a well ordered number (159 is well-ordered as 1<5<9) */ 

//well-ordered password
vector<int> wellorderedPwd_res;
void wellorderedPwd_dfs(int num, int start, int remain) {
	if(remain==0) {
		wellorderedPwd_res.push_back(num);	
	} else {
		for(int i=start+1;i<=10-remain;i++) {
			wellorderedPwd_dfs(num*10+i,i,remain-1);
		}
	}
}