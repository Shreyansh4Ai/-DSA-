#include<iostream>
#include<vector>
using namespace std;
int partition(vector<int>&arr,int st,int end){
    int indx=st-1,pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            indx;
        }
        swap(arr[j],arr[indx]);
    }

}
void quicksort(vector<int>&arr,int st,int end){
    if(st<end){
        int pvt=partition(arr,st,end);
        quicksort(arr,st,pvt-1); //left half
        quicksort(arr,pvt+1,end); //right half
    }
}

int main(){
    vector<int >arr={12,23,45,65,2,14,56};
    for(int val:arr){
      cout<<val<<" ";

    }

    return 0;
}