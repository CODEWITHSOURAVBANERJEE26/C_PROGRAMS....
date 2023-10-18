# include<stdio.h>
    int main(){
    int n=0;
    printf ("enter any number for n");
    scanf("%d",&n);
    printf("print a even number 1 to %d\n",n);
    int i=1;
    while (i<=n){
    	if ( i % 2==0){
    	printf("%d\n",i);
    }
    	i++ ;
	}
	}
