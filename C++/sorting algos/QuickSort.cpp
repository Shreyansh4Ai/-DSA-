#include<iostream>
using namespace std ;

int partition(int arr [ ] , int start , int end ){
int position = start ;
for(int i =0; i<=end ;i++){
    if(arr[i]<=arr[end]){
        swap(arr[i] , arr[position]);
        position++;
    }
}
return position -1 ; 
}

void quicksort(int arr[],int start , int end){
   
    int pivot = partition(arr , start ,end ) ; 


    // left side 
      quicksort(arr ,start , pivot-1 );

    // right side 

     quicksort(arr ,pivot , end) ;

}



int main(){
     int arr[]={10,3 , 4 , 1 ,5 ,6 , 3 , 2 ,11 , 9 };


    quicksort(arr,0,9);
    
     for(int i =0 ; i<9 ;i++){
        cout<<arr[i]<<" ";
     }

}