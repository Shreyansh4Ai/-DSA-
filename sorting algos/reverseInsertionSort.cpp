#include<iostream>
using namespace std ;
int main(){
    int n ;
    cin>> n ;
    int arr[n];
    for(int i = 0 ;i<n ;i++){
        cin>>arr[i];
    }

    for(int i =n ;i>0 ; i--){  // key point last se loop chalao 
        for(int j=i ;j>0;j++){
            if (arr[j] > arr[j-1]){  // key point >
                swap(arr[j],arr[j-1]);
            }else{
                break;  // because agar upar wala condition satisfy nhi hua h then aage bhi nhi hoga 
            }
        }
    }

    for (int i=0;i<n ;i++){
        cout<< arr[i]<<" ";
    }
}