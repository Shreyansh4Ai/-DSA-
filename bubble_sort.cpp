#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,4,7,5,8,3,};
    int n = 6;  //size

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]< arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(int k=0;k<n;k++){
        cout<<arr[k] << " ";
    }
        
    return 0;
}