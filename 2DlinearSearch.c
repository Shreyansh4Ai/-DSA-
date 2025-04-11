#include<stdio.h>
int main(){
    int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int key=3;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(arr[i][j]==key){
                printf("the key has found on the %d , %d index",i,j);

            }
        }
    }
    return 0;
}