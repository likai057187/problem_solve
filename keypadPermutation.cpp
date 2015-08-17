#include"problems.h"

/* Description: key pad question - you how your phone has letters on the number keys.   
 * for example, number 2 has ABC on it, number 3 has DEF, 4 number has GHI,... ,   
 * and number 9 has WXYZ. Write a program that will print out all of the possible   
 * combination of those letters depending on the users input. For example,   
 * say a user presses 234, the output should be   
 * ADG, ADH, ADI, AEG, AEH, AEI, AFG, AFH, AFI   
 * BDG, BDH, BDI, BEG, BEH, BEI, BFG, BFH, BFI   
 * CDG, CDH, CDI, CEG, CEH, CEI, CFG, CFH, CFI */  

vector<string> keypadPermutation_res;
void keypadPermutation_dfs(map<char,string> mp, string tmp, string input, int i) {
	if(tmp.length()==input.length()) {
		keypadPermutation_res.push_back(tmp);
	} else {
		for(int j=0;j<mp[input[i]].size();j++) {
			keypadPermutation_dfs(mp,tmp+mp[input[i]][j],input,i+1);
		}
	}
}