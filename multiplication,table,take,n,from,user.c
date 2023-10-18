#include<stdio.h>
  int main (){
  	int n ;    
  	printf("enter any n number to print table");
  	scanf("\n%d",&n);
  	for ( int i=1 ; i<=10; i++){
  		int result = n*i ;
  		printf("%dx%d=%d\n",n,i,result);
  		
	  }
  }
  