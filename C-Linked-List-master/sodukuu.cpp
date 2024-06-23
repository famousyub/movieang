#include<iostream>
#include<cstdlib>
#include<string>


#define N 9



using namespace std ;

void _print(int arr[N][N])
{

    int i  , j ;

    for(i = 0 ;  i <N ; i++){

        for  (j= 0 ; j<N;j++){
              cout << arr[i][j] <<endl ;

        }
        cout <<endl;

    }
}

bool _issafe( int grid[N][N] ,    int row ,   int col , int num)

{
 
    int x , y  , z ;

    for (x=0 ; x<N ; x++){
        if(grid[x][col] == num)return false ;

    }

    int startRow  = row - row % 3 ;
    int startCol = col -col % 3;

    for(y = 0 ; y<3 ; y++)
       for(z = 0 ; z <3 ; z++){
        if(grid[y+startRow][z+startCol] == num) return false ;
       }


       return true ;

}

bool solveSoduku(int grid[N][N] ,  int row , int col )
{

    if(row == N - 1 && col ==N)return true ;

    if(col ==N) {
        row++ ; 
        col =0;

    }

    if(grid[row][col] > 0 ){
        return solveSoduku(grid , row , col+1);
    }


    int _num = 1;

    for (_num = 1 ;  _num < N ; _num++){

        if(_issafe(grid, row, col , _num)){
            grid[row][col] = _num;
            if(solveSoduku(grid, row, col+1)) return true; 

        }
    }

  
}