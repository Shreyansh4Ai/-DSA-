#include<iostream>
using namespace std;

int binary(int arr[],int key ,int size){

  int start =0;
  int end =size-1;
  
    while(start<=end){
         int mid=(start+end)/2; 
         if(key==arr[mid]) // mid value of index 

          return mid; // mid== index 
         
         if(key < arr[mid])
          end = mid-1;
         
         else  {
          start=mid+1;
         }
    }
    return -1; // key not found 
  
}
int main(){
  int arr[]={1,2,3,4,5, };
  int key= 3;
  int size= 5;

  int result= binary(arr,key,size);

  if (result!= -1){
    cout<<"element found at index"<< result << endl;

  }
  else{
    cout<< "element not found "<< endl;
  }
  return 0;
}
