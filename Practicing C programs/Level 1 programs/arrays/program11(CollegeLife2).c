#include <stdio.h>
int main (){
    int t;
    int total;
    //int song =0;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        int s; //total number of seasons 
        scanf("%d ",&s);
        int arr[s];
        //duration of intro song in each season (in min)
        for(int j=0;j<s;j++){
            scanf("%d ",&arr[j]);
        }
        int e; // number of episodes in ith season
        int ar[e+1];
        for(int a=0;a<s;a++){
            scanf("%d ", &e);
            ar[0]=e;
            for (int k = 1; k < e + 1; k++)
            {   scanf("%d ",&ar[k]);
            }
            int x,y;
            for (int b = 1; b < e + 1; b++)
                {   
                    if(b==1){
                        x = ar[b];
                        printf("%d ",x);
                    }

                    else{
                        y =ar[b]-arr[b-1];
                        printf("%d\n",y);
                    }
                    
                }
        
        }
        
    }

    return 0;
}