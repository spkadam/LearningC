#include <stdio.h>
int main (){
    int t;
    scanf("%d", &t);
    int n,p,x,y;
    for(int i=0;i<t;i++){
        scanf("%d %d %d %d \n",&n, &p, &x, &y);
        int min = 0;
        int total = 0;
        for(int j=0;j<=p;j++){
            int arr[n];
            scanf("%d ",&arr[j]);
            
            if(arr[j]==1){
                min = y;
            }
            if(arr[j]==0){
                min = x;
            }
            total = total + min;
            

        }
        
        printf("%d \n", total);

    }
    return 0;
}