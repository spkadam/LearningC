#include <stdio.h>

int main(void) {
	// your code goes here
	int n ;
    printf("Input a number:");
    scanf("%d", &n);


    if(n>0 && n<100000){
        printf("%d", n);
    }
	
	
	return 0;
}