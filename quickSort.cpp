#include<iostream>
#include<vector>
using namespace std;

void quicksort(vector<int>&arr,int st,int end){
    if(st<end){
        int pvt=partition(arr,st,end);
        quicksort(arr,st,pvt-1); //left half
        quicksort(arr,pvt+1,end); //right half
    }
}
int partition(vector<int>&arr,int st,int end){
    int indx=st-1,pivot=arr[end];
    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            indx++;
        
        swap(arr[j],arr[indx]);
    }
}
swap(arr[indx+1],arr[end]);
return indx+1;
}
int main(){
    vector<int >arr={12,23,45,65,2,14,56};
    quicksort(arr,0,arr.size()-1);
    for(int val:arr){
      cout<<val<<" ";
    }

    return 0;
}