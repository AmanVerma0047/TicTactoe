#include<stdio.h>

void print_board(p1row_no,p1col_no,p2row_no,p2col_no){
//printing board tic tac toe;
for(int row=1;row<4;row++){
    for(int col = 1;col<4;col++)
        {
        if (row == p1row_no && col == p1col_no){
            printf("X");
        }
        else{
        printf("_");//
        }
// for player one..
        if (row == p2row_no && col == p2col_no){
            printf("O");
        }
        else{
        printf("_");//
        }
//for player two...
        if(col == 3){
            printf(" ");
            }
        else
            {
            printf("|");
            }

        }printf("\n");
}
//printing done...!!!
}

void main(){
int choice=1,p1row_no=4,p1col_no=4,p2row_no=4,p2col_no=4;
print_board(p1row_no,p1col_no,p2row_no,p2col_no);

do {
printf("{Player-1}Enter row_no.:");
scanf("%d",&p1row_no);
printf("{Player-1}Enter col_no.:");
scanf("%d",&p1col_no);

print_board(p1row_no,p1col_no,p2row_no,p2col_no);

printf("{Player-2}Enter row_no.:");
scanf("%d",&p1row_no);
printf("{Player-2}Enter col_no.:");
scanf("%d",&p1col_no);

print_board(p1row_no,p1col_no,p2row_no,p2col_no);


}while(choice!=0);

}
