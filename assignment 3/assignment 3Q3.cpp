#include<stdio.h>
int gcd(int ,int );
int lcm(int , int );
int main(){
	int n1,n2,GCD,LCM;
	printf("enter two numbers ");
	scanf("%d %d", &n1,&n2);
	GCD=gcd(n1,n2);
	printf("GCD=%d" ,GCD);
	LCM=lcm(n1,n2);
	printf("LCM=%d \n" ,LCM);
	return 0;
}
int gcd(int a, int b)	
{
	if(a== 0)return b;
	if(b== 0)return a;
	if(a > b)
	return gcd(a%b, b);
	else
	return gcd(b%a, a);}
		
		
int lcm(int x, int y){
	
	
		static int s=1;
		if(s%x==0 && s%y==0)
		return s;
		else
		{s++; lcm(x,y
		);
		return s;
		}
	
} 


