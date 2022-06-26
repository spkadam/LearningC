#include <stdio.h>
int main(){
    int t;
    scanf("%d", &t);
    int n;
    int sum = 0;
    int first,last;
    
    for (int i=0; i<t;i++){
        scanf("%d", &n);
        last= n%10;
        int j = 0;
        while(n>0){
            first=n%10;
            n=n/10;
            j++;
        }
    sum = first + last;
    printf("%d \n",sum);   
    }
    
}