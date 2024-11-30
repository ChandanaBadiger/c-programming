#include<stdio.h>
int main(){
     int arr[5],i,even = 0, odd = 0;
     clrscr();
      printf("Enter 5 Element \n:");
      for(i = 0 ; i < 5 ; i++){
	scanf("%d",&arr[i]);
	if(arr[i] % 2 == 0){
	even ++ ;
    } else {
	odd ++;
	}
    }
	printf("Even Number : %d\n",even);
	printf("odd Number : %d\n",odd);
	return 0;
    }
