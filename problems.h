#include<iostream>
#include<vector>
#include<map>
#include<stack>
#include<stdint.h>
#include<algorithm>
#include<queue>
#include<string>
#include<set>
#include<list>
#include<sstream>
#include<algorithm>
#include <math.h> 

using namespace std;

bool isColorfulNum(int num);
void wellorderedPwd_dfs(int num, int start, int remain);
vector<char> spiralOrder(vector<vector<char>> mat);
bool allowedPWD(vector<int> pwd, vector<int> user, vector<vector<int>> keypad);
vector<string> contiAlphabets(string input);
bool isPalindrome(string s);
set<string> Palindromes(string str);
int averageRemaining(void);
void triangle(vector<int> arr, vector<vector<int>> &ret);
void printStars(int height);
vector<int> seedNumber(int num);
void permutations_nums_dfs(vector<int> str, vector<int> digitsAvailable, int n);
vector<int> snakesequence(vector<vector<int>> input);
list<int> unique(list<int> arr_list);
bool checker(string actual, string expected);
string countdAndsayHelper(string s);
vector<string> countAndSay(int n);
string substringAddition(vector<int> arr, int sum);
string a_to_one(string str);
void wellOrderString(int remain, int start, string prefix);
void phoneNumber_dfs(string num, string digits, int n);
string sms(string str);
void keypadPermutation_dfs(map<char,string> mp, string tmp, string input, int i);
vector<int> stepping(int start,int end);
bool isPrime(int num);
void Goldbach(int num);
void findWords_dfs(int i, int j, string word, vector<string> interval, vector<vector<char>>& grid);
bool findWords(vector<vector<char>>& grid, string word);
pair<int,int> maxSubarray(vector<int> arr);
vector<int> sub(vector<int> arr1, vector<int> arr2);
bool isAdditive(string &str);
void findMaxMin(void);
void edge_detect(vector<int> input, int W, int H, int T);
void jump(vector<vector<int>> &board);
int canJump(vector<vector<int>> &board,int r,int c);
