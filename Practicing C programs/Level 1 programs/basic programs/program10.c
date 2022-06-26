#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    for (int i =0; i<t; i++){
        int n, k;
        scanf("%d %d", &n, &k);
        int sub;
        while(n>=0){
            sub = n-k;
            if(sub>0){
                n=sub;
                
            }
            printf("%d",n);
            
        }
        
    }
    return 0;
}