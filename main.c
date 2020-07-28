// AjitSingh_BrarAssign1 created by Ajit Singh Brar, on June 5, 2020
//Sudoku Game created with demo running and user prompting followed by new Grid validation


// header files
#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>
#define SIZE 9


void firstRow(int valid[SIZE][SIZE],int size);
void secondRow(int valid[SIZE][SIZE],int size);
bool getfinal(int validgrid[][9]);


//first row validation
void firstRow(int valid[SIZE][SIZE],int size)
{
    while(size != 0) {
        if (size == 0) {
            break;
        } else {
           //duplicates validation
            for (int i = 0; i < SIZE; i++) {
                for (int j = i + 1; j < SIZE; j++) {
                    if (valid[0][i] == valid[0][j]) {
                        printf("There is a duplicate entry\n");
                        for (int i = 0; i < 1; i++) {
                            for (int j = 0; j < 9; j++) {
                                valid[i][j] = 0;
                            }
                        }

                        printf("Enter row %d of your Sudoku grid, No duplicates Please\n", 1);
                        printf("Use Space/Tab/Return key to enter next values\n");
                        printf("and press 'Return' after entering nine integers\n");
                        printf("Remember, to make a valid row of Sudoku grid,\n");
                        printf("all integers should be distinct and range from 1 to 9\n");
                        char tempy[80];
                        fgets(tempy, sizeof(tempy), stdin);
                        sscanf(tempy, "%d%d%d%d%d%d%d%d%d", &valid[0][0], &valid[0][1], &valid[0][2], &valid[0][3],&valid[0][4],
                               &valid[0][5],&valid[0][6],&valid[0][7],&valid[0][8]);
                        size--;
                        break;
                    }
                    else {
                        size = 0;
                    }}}
// for out of range validation
            for (int a = 0; a < 1; a++) {
                for (int k = 0; k < 9; k++) {
                    if (valid[a][k] > 9 || valid[a][k] < 0) {
                        printf("One of more entries are out of range 1 to 9 !\n");
                        for (int a = 0; a < 1; a++) {
                            for (int k = 0; k < 9; k++) {
                                valid[a][k] = 0;
                            }
                        }
                        printf("Enter row 1 of your Sudoku grid\n");
                        printf("Use Space/Tab/Return key to enter next values\n");
                        printf("and press 'Return' after entering nine integers\n");
                        printf("Remember, to make a valid row of Sudoku grid,\n");
                        printf("all integers should be distinct and range from 1 to 9\n");
                       char tempy[80];
                        fgets(tempy, sizeof(tempy), stdin);
                        sscanf(tempy, "%d%d%d%d%d%d%d%d%d", &valid[0][0], &valid[0][1], &valid[0][2], &valid[0][3],&valid[0][4],
                               &valid[0][5],&valid[0][6],&valid[0][7],&valid[0][8]);
                        size++;
                        break;
                    }
                    else{
                        size = 0;
                    }}}}}

}

//second row validation
void secondRow(int valid[SIZE][SIZE],int size) {


    while(size != 0) {

        if (size == 0) {
            break;
        }
        else {
            //duplicates validation
            for (int i = 0; i < SIZE; i++) {
                for (int j = i + 1; j < SIZE; j++) {
                    if (valid[1][i] == valid[1][j]) {
                        printf("There is a duplicate entry\n");
                        for (int i = 1; i < 2; i++) {
                            for (int j = 1; j < 9; j++) {
                                valid[i][j] = 0;
                            }
                        }

                        printf("Enter row %d of your Sudoku grid, No duplicates Please\n", 2);
                        printf("Use Space/Tab/Return key to enter next values\n");
                        printf("and press 'Return' after entering nine integers\n");
                        printf("Remember, to make a valid row of Sudoku grid,\n");
                        printf("all integers should be distinct and range from 1 to 9\n");
                        char tem[80];
                        fgets(tem, sizeof(tem), stdin);
                        sscanf(tem, "%d%d%d%d%d%d%d%d%d", &valid[1][0], &valid[1][1], &valid[1][2], &valid[1][3],&valid[1][4],
                               &valid[1][5],&valid[1][6],&valid[1][7],&valid[1][8]);
                        size--;
                        break;
                    }
                    else {
                        size = 0;
                    }}}


            //out of range validation
            for (int a = 1; a < 2; a++) {
                for (int k = 0; k < 9; k++) {
                    if (valid[a][k] > 9 || valid[a][k] < 0) {
                        printf("One of more entries are out of range 1 to 9 !\n");
                        for (int a = 1; a < 2; a++) {
                            for (int k = 0; k < 9; k++) {
                                valid[a][k] = 0;
                            }
                        }
                        printf("Enter row %d of your Sudoku grid\n",2);
                        printf("Use Space/Tab/Return key to enter next values\n");
                        printf("and press 'Return' after entering nine integers\n");
                        printf("Remember, to make a valid row of Sudoku grid,\n");
                        printf("all integers should be distinct and range from 1 to 9\n");

                        char tem[80];
                        fgets(tem, sizeof(tem), stdin);
                        sscanf(tem, "%d%d%d%d%d%d%d%d%d", &valid[1][0], &valid[1][1], &valid[1][2], &valid[1][3],&valid[1][4],
                               &valid[1][5],&valid[1][6],&valid[1][7],&valid[1][8]);
                        size++;
                        break;
                    }
                    else{
                        size = 0;
                    }}}}}

}

// checking fo valid or invalid grid
bool getfinal(int validgrid[][9])
{
    //  rows testing done for duplicates
    for (int a = 0; a < 9; a++) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (validgrid[a][i] == (validgrid[a][j])) {
                    return false;
                }}}}

    // for columns
    for (int a = 0; a < 9; a++) {
        for (int i = 0; i < 9; i++) {
            for (int j = i + 1; j < 9; j++) {
                if (validgrid[i][a] == (validgrid[j][a])) {
                    return false;
                }}}}
    //for the subsquares validation
    for(int row = 0; row < 9; row += 3)
    {
        for(int col = 0; col < 9; col += 3)
        {    // row, col is start of the 3 by 3 grid
            for(int pos = 0; pos < 8; pos++)
            {     for(int pos2 = pos + 1; pos2 < 9; pos2++)
                {      if(validgrid[row + pos%3][col + pos/3]==validgrid[row + pos2%3][col + pos2/3])
                    {    return false;
                    }}}}}


    return true;
}

// main method
int main() {
    int validGrid[][9] = {{5, 3, 4, 6, 7, 8, 9, 1, 2},
                          {6, 7, 2, 1, 9, 5, 3, 4, 8},
                          {1, 9, 8, 3, 4, 2, 5, 6, 7},
                          {8, 5, 9, 7, 6, 1, 4, 2, 3},
                          {4, 2, 6, 8, 5, 3, 7, 9, 1},
                          {7, 1, 3, 9, 2, 4, 8, 5, 6},
                          {9, 6, 1, 5, 3, 7, 2, 8, 4},
                          {2, 8, 7, 4, 1, 9, 6, 3, 5},
                          {3, 4, 5, 2, 8, 6, 1, 7, 9}};

//printing the demo grid in 9 * 9 matrix
    for(int i=0;i<SIZE;i++)
    {
        for(int j = 0; j< SIZE;j++)
        {
            printf("%d ",validGrid[i][j]);
        }
        printf("\n");
    }

  // validation of demo grid
    if(getfinal(validGrid) == false)
    {
        printf("\n It is an invalid solution.\n");
    }
    else{
        printf("\nGiven Sudoku grid is valid.\n");
    }



    int valid[SIZE][SIZE];
    char tempy[80];

    // accepting the first row from user
    printf("\n Enter row %d of your Sudoku grid\n", 1);
    printf("Use Space/Tab/Return key to enter next values\n");
    printf("and press 'Return' after entering nine integers\n");
    printf("Remember, to make a valid row of Sudoku grid,\n");
    printf("all integers should be distinct and range from 1 to 9\n");



            fgets(tempy, sizeof(tempy), stdin);
            sscanf(tempy, "%d%d%d%d%d%d%d%d%d", &valid[0][0], &valid[0][1], &valid[0][2], &valid[0][3],&valid[0][4],
                   &valid[0][5],&valid[0][6],&valid[0][7],&valid[0][8]);


    firstRow(valid,9);
// accepting second row from user
    printf("\nEnter row %d of your Sudoku grid\n", 2);
    printf("Use Space/Tab/Return key to enter next values\n");
    printf("and press 'Return' after entering nine integers\n");
    printf("Remember, to make a valid row of Sudoku grid,\n");
    printf("all integers should be distinct and range from 1 to 9\n");

  char tem[80];
    fgets(tem, sizeof(tem), stdin);
    sscanf(tem, "%d%d%d%d%d%d%d%d%d", &valid[1][0], &valid[1][1], &valid[1][2], &valid[1][3],&valid[1][4],
           &valid[1][5],&valid[1][6],&valid[1][7],&valid[1][8]);


    secondRow(valid,9);



    printf("\n---------------------Sudoku Grid-----------------\n");


    srand(time(NULL));
// randomly generating the rest rows
    int a[9];
    int i,j,c,temp;

    for(i=0;i<9;i++)
    {
        a[i] = i+1;
    }



    for(i=2;i<9;i++)
    {
        for(int k =0;k<9;k++)
        {
            c= (rand()%8) + 1 ;
            temp = a[k];
            a[k] = a[c];
            a[c] = temp;
        }
        for(j=0;j<9;j++)
        {
            valid[i][j]= a[j];
        }
    }


    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {

            printf("%d ", valid[i][j]);
        }
        printf("\n");
    }
// validation of grid checked in method getfinal()
    if(getfinal(valid) == false)
    {
        printf("\n It is an invalid solution.\n");
    }
    else{
        printf("\nGiven Sudoku grid is valid.\n");
    }

    return 0;
}
