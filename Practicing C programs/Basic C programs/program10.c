
#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    int n;
    
    for (int i =0; i<t;i++){
        int count=0;
        scanf("%d",&n);
        //printf("%d \n",n);
        while(n>0)
        {
            if(n%10==4){
                count++;
            }
            else{
                count = count;
            }
            n=n/10;
      
        }
        
        //printf("%d \n",n);
        printf("%d \n",count);
         
    }
    
    return 0;
}

