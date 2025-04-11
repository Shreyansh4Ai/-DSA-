#include<stdio.h>
int binary(int arr[],int key , int size){
    int start=0;
    int end=size-1;

    while(start<=end){
        int mid=(start+end)/2; 
    
        if(arr[mid]==key){   //sab ghum k yhi ayega mittr
            return mid;
        }
          if(key < arr[mid]){
               end=mid-1;
          } else{
            start = mid + 1;
                      }
    }
    return -1; //if key not found 
}
int main(){
    int arr[]={1,2,3,4,5,6};
    int key=3;
    int size=6;

    int result=binary(arr,key,size);

    if (result!=-1){
        printf("the key has been found at the index %d",result);
    } else{
        printf("please enter a valid key ");
    }
    return 0;
}