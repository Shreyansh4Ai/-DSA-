#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,};
    int key=4;
    int size=5;
    for(int i=0;i<5;i++){
        if(arr[i]==key) {printf("The key has found on the index %d",i);
        break;
    }
    }
    return 0;
}