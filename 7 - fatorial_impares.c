#include <stdio.h>

int main(){
	
	int i;
	int fatorial = 1;
	
	for(i = 1;i <= 11;i++){
		if(i % 2 != 0){
			fatorial = fatorial * i;
			printf("!%d = %d * %d\n",i,fatorial,i);
		}
		
	}
	printf("%d",fatorial);
	
	
	
	
	return(0);
}