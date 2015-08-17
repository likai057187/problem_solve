#include"problems.h"

/* Description: Write a program for a word search. If there is an NxN grid with one letter   
 * in each cell. Let the user enter a word and the letters of the word are said to be found   
 * in the grid either the letters match vertically, horizontally or diagonally in the grid.   
 * If the word is found, print the coordinates of the letters as output. */  

//Finding Words
vector<vector<string>> findWords_res;
void findWords_dfs(int i, int j, string word, vector<string> interval, vector<vector<char>>& grid) {
	string tmp = to_string(static_cast<long long>(i)) + "," + to_string(static_cast<long long>(j));
	interval.push_back(tmp);
	if(word.size()==interval.size()) {
		findWords_res.push_back(interval);
	} else {
		//check upper
		if(i>0 && word[interval.size()]==grid[i-1][j]) {
			findWords_dfs(i-1,j,word,interval,grid);
		}
		//check lower
		if(i>grid.size()-1 && word[interval.size()]==grid[i+1][j]) {
			findWords_dfs(i+1,j,word,interval,grid);
		}
		//check left
		if(j>0 && word[interval.size()]==grid[i][j-1]) {
			findWords_dfs(i,j-1,word,interval,grid);
		}
		//check right
		if(j<grid[0].size()-1 && word[interval.size()]==grid[i][j+1]) {
			findWords_dfs(i,j+1,word,interval,grid);
		}
		//check upper left
		if(i>0 && j>0 && word[interval.size()]==grid[i-1][j-1]) {
			findWords_dfs(i-1,j-1,word,interval,grid);
		}
		//check upper right
		if(i>0 && j<grid[0].size()-1 && word[interval.size()]==grid[i-1][j+1]) {
			findWords_dfs(i-1,j+1,word,interval,grid);
		}
		//check lower left
		if(i<grid.size()-1 && j>0 && word[interval.size()]==grid[i+1][j-1]) {
			findWords_dfs(i+1,j-1,word,interval,grid);
		}
		//check lower right
		if(i<grid.size()-1 && j<grid[0].size()-1 && word[interval.size()]==grid[i+1][j+1]) {
			findWords_dfs(i+1,j+1,word,interval,grid);
		}
	}
}
bool findWords(vector<vector<char>>& grid, string word) {
	vector<string> tmp;
	for(int i=0;i<grid.size();i++) {
		for(int j=0;j<grid[0].size();j++) {
			if(grid[i][j]==word[0]) {
				findWords_dfs(i,j,word,tmp,grid);
				if(findWords_res.size()) {
					return true;
				} else {
					return false;
				}
			}
		}
	}
	return false;
}