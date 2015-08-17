#include"problems.h"

/* Description: Length is given as input.Print all possible permutations of numbers between 0-9.   
 * Eg: if input length=4   
 * all possible combinations can be 0123, 1234, 5678,9864,...etc all combinations of length from   
 * in all numbers between 0-9 */  

//Permutations of numbers
vector<vector<int>> permutations_nums_res;
void permutations_nums_dfs(vector<int> str, vector<int> digitsAvailable, int n) {
	if(str.size()==n) {
		permutations_nums_res.push_back(str);
	} else {
		for(int i=0;i<digitsAvailable.size();i++) {
			int temp = digitsAvailable[i];
			digitsAvailable.erase(digitsAvailable.begin()+i);
			str.push_back(temp);
			permutations_nums_dfs(str,digitsAvailable,n);
			str.pop_back();
			digitsAvailable.insert(digitsAvailable.begin(),temp);
		}
	}
}