#include<stdio.h>
int square(int n){
	return n*n;
}
int main(){
	int n;
	printf("enter the number  " ,n);
	scanf("%d" ,&n);
	printf("square of the number is %d\n" ,square (n));
	return 0;
}
