#include<stdio.h>

main(){
	char A ='a';
	
	do{
		if(A%4==1){
			printf("%c   ",A);
		}
	
		A++;
	}
	while(A<='z');
	
}
