#include<stdio.h>


char board[3][3] = {
{' ',' ',' '},
{' ',' ',' '},
{' ',' ',' '}
};

void print_board(int player,int get_row,int get_col){


if(player ==1){
board[get_row][get_col] = 'X';
}
else if(player == 2){
board[get_row][get_col] = 'O';
}


    for(int i =0; i<3;i++){
        for(int j =0; j<3;j++){
            printf("| %c  ",board[i][j]);

        }printf("\n ---  ---  ----\n\n");
    }
}


void get_input(){
int row,col,player_no;
printf("{Player-1} Enter row and col as rowcol\n");
scanf("%d%d",&row,&col);
player_no = 1;

print_board(player_no,row,col);

printf("{Player-2} Enter row and col as rowcol\n");
scanf("%d%d",&row,&col);
player_no = 2;
print_board(player_no,row,col);
check_win();
}


char player(){
if (board[0][0] == 'x'){
return 1;}
else if (board[0][0] == 'o'){
return 2;
}
}


void check_win(){
if (board[0][0] == board[0][1] && board[0][0] == board[0][2]){
printf("%c player wins!", board[0][0]);}
else if (board[1][0] == board[1][1] && board[0][0] == board[1][2]){
printf("%c player wins!", board[1][0]);
}
else if (board[2][0] == board[2][1] && board[2][0] == board[2][2]){
printf("%c player wins!", board[2][0]);
}
else if(board[0][0] == board[1][0] && board[1][0] == board[2][0]){
printf("%c player wins!", board[1][0]);
}
else if(board[0][1] == board[1][1] && board[1][1] == board[2][1]){
printf("%c player wins!", board[0][1]);
}
else if(board[0][2] == board[1][2] && board[1][2] == board[2][2]){
printf("%c player wins!", board[1][0]);
}
else if(board[0][0] == board[1][1] && board[1][1] == board[2][2]){
printf("%c player wins!", board[0][0]);}
else if(board[0][2] == board[1][1] && board[1][1] == board[2][0]){
printf("%c player wins!", board[0][2]);}

}

void main(){
get_input();

}
