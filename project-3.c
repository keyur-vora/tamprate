#include<stdio.h>

main(){
int n,last,sum;

printf("Enter your value   : ");
scanf("%d",&n);
last=n%10;
while(n>9){
n=n/10;
}
sum=n+last;
printf("Sum of First and Last digit is = %d",sum);

}
