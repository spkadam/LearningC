#include <stdio.h>
int main(){
    int t = 1, n = 12345;
    int sum = 0;
    int rem = 0;
    scanf("%d", &t);
    for (int i = 0;i<t; i++){
        scanf("%d",&n);
        while(n>0){
            rem = n%10;
            n = n/10;
            sum = sum +rem;

        }
       
        printf("%d",sum);
    }
    
    return 0;
}