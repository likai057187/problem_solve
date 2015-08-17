#include"problems.h"

/*
 * There¡¯sa N*N board, two players join the jump game. The chess could go vertically andhorizontally. 
 * If the adjacent chess is opponent player¡¯s and the spot besidethat is empty, then the chess could 
 * jump to that spot. One chess could not beenjumped twice. Given the position of the spot on the board, 
 * write the program tocount the longest length that chess could go.*/

void jump(vector<vector<int>> &board){
    int maxLen = 0;
    for(int i=0;i<board.size();i++){
        for(int j=0;j<board[0].size();j++){
            if(board[i][j]!=0){
                maxLen = max(canJump(board, i,j),maxLen);
            }
        }
    }
    cout << maxLen << endl;
}
int canJump(vector<vector<int>> &board,int r,int c){
    int row = board.size();
    int col = board[0].size();
    int count1 = 0,count2=0,count3=0,count4=0;
    // Jump to right
    if(c<col-2&&board[r][c]!=board[r][c+1]&&board[r][c+1]!=0&&board[r][c+2]==0&&board[r][c+1]!=-1){
        board[r][c+2] = board[r][c]; //Jump to another slot
        board[r][c] = 0; //Orginal slot become empty
        int temp = board[r][c+1];
        board[r][c+1] = -1; // Mark the slot which has been jumped over. In case of jump back;
        count1 = count1+1+canJump(board, r, c+2);
        // Restore the orginal strucure of the board
        board[r][c] = board[r][c+2];
        board[r][c+2] = 0;
        board[r][c+1] = temp;
             
    }
    //Jump to left
    if(c>=2&&board[r][c]!=board[r][c-1]&&board[r][c-1]!=0&&board[r][c-2]==0&&board[r][c-1]!=-1){
        board[r][c-2]=board[r][c];
        board[r][c] = 0;
        int temp = board[r][c-1];
        board[r][c-1] = -1;
        count2 = count2+1+canJump(board, r, c-2);
        board[r][c] = board[r][c-2];
        board[r][c-2] = 0;
        board[r][c-1] = temp;
    }
    //Jump up
    if(r<row-2 && board[r][c] != board[r+1][c] && board[r+2][c] == 0&& board[r+1][c]!=0&&board[r+1][c]!=-1){
        board[r+2][c] = board[r][c];
        board[r][c] = 0;
        int temp = board[r+1][c];
        board[r+1][c] = -1;
        count3 = count3+1+canJump(board,r+2,c);
        board[r][c] = board[r+2][c];
        board[r+2][c] = 0;
        board[r+1][c] = temp;
    }
    //Jump down
    if(r>=2 && board[r][c] != board[r-1][c] && board[r-2][c] == 0&& board[r-1][c]!=0&&board[r-1][c]!=-1){
        board[r-2][c] = board[r][c];
        board[r][c] = 0;
        int temp = board[r-1][c];
        board[r-1][c] = -1;
        count4 = count4+1+canJump(board,r-2,c);
        board[r][c] = board[r-2][c];
        board[r-2][c] = 0;
        board[r-1][c] = temp;
    }
    return max(max(count1,count2),max(count3,count4));
}