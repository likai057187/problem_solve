#include"problems.h"

/* You are given a grid of numbers. A snake sequence is made up of adjacent numbers   
 * such that for each number, the number on the right or the number below it is +1 or -1 its value.   
 * For example,   
 * 1 3 2 6 8   
 * -9 7 1 -1 2  
 * 1 5 0 1 9   
 * In this grid, (3, 2, 1, 0, 1) is a snake sequence.   
 * Given a grid, find the longest snake sequences and their lengths   
 * (so there can be multiple snake sequences with the maximum length). */  

//Snake sequence
vector<int> snakesequence(vector<vector<int>> input) {
	vector<int> longest;
	vector<vector<vector<int>>> sequence(input.size(),vector<vector<int>>(input[0].size(),vector<int>()));
	for(int i=0;i<input.size();i++) {
		for(int j=0;j<input[0].size();j++) {
			sequence[i][j].push_back(input[i][j]);
			if(i>0 && (abs(input[i][j]-input[i-1][j])==1)) {
				if(sequence[i][j].size()<sequence[i-1][j].size()+1) {
					sequence[i][j].assign(sequence[i-1][j].begin(),sequence[i-1][j].end());
					sequence[i][j].push_back(input[i][j]);
				}
			}
			if(j>0 && (abs(input[i][j]-input[i][j-1])==1)) {
				if(sequence[i][j].size()<sequence[i][j-1].size()+1) {
					sequence[i][j].assign(sequence[i][j-1].begin(),sequence[i][j-1].end());
					sequence[i][j].push_back(input[i][j]);
				}
			}
			if(sequence[i][j].size() > longest.size()) {
				longest.assign(sequence[i][j].begin(),sequence[i][j].end());
			}
		}
	}
	return longest;
}