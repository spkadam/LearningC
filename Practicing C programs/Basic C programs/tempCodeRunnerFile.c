#include <stdio.h>

int main(){
    int t  , n;
    int num,rem;
    printf("Input t");
    scanf("%d",&t);
    for(int i=0; i<t; i++){
        printf("Input n");
        scanf("%d",&n);
        while(n>0){
            rem = n%10;
            n = n/10;
            num = rem;
            printf("%d",num);

        }
        printf("\n");
      
        

    }

    return 0;
}