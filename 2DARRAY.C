#include<stdio.h>
  #define M 3
  #define N 3

    //These M and N can also be declare as macros
    void print(int arr[M][N]){
	 int i,j;
	 for(i = 0; i < M; i++){
	     for(j = 0; j < N; j++)
	     printf("%d",arr[i][j]);
	     printf("\n");
	}
   }

 int main(){
     //intialization of array
     int arr[][3] = {
	   {1,2,3},
	   {4,5,6},
	   {7,8,9}
	   };
	   clrscr();

    print(arr);
    return 0;
     }

