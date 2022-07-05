#include <stdio.h>
int main (){
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        //n = number of researchers excluding chef
        //m = total number of fields
        int n,m;
        scanf("%d %d ",&n,&m);
        int arr[n]; //research topics of the researchers
        for(int j=0;j<n;j++){
            scanf("%d ",&arr[j]);
        }
        //find distinct numbers from the array
        int count=1;
        for(int k =0;k<n;k++){
            for(int l =1;l<n;l++){
                if(arr[k]==arr[l]){

                }
            }
        }
    }
    return 0;
}