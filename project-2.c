#include<stdio.h>
main(){

int n,i=1;


printf("Enter your number : ");
scanf("%d",&n);


if(n<10){
	printf("Total number of digit is : %d",i);
}
else if(n<100){
	i+=1;
	printf("Total number of digit is : %d",i);
}
else if(n<1000){
	i+=2;
	printf("Total number of digit is : %d",i);
}
else if(n<10000){
	i+=3;
	printf("Toatl number of digit is : %d",i);
}
else{
	printf("Your number is too big to define.");
}
getch();
}
