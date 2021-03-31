#include<stdio.h>
int factorial(int n){
	int i,f=1;
	for(i=1;i<=n;i++)
	 f=f*i;
	 return f;
}
int main(){
	int n;
	printf("enter a number" ,n);
	scanf("%d" ,&n);
	printf("factorial is %d:" ,factorial(n));
}
