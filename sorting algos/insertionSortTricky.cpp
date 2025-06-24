#include<iostream>
using namespace std ;
int main(){
int n ;              // fix krna h isse abhim issue h insertion at end se krna h isse 
cin>> n ;
int arr[n];
for(int i = 0 ;i<n ;i++){
    cin>>arr[i];

}

for(int i =n-1;i>0 ;i--){

for(int j=i;j>0; j--){

    if(arr[j] < arr[j+1]){
        swap(arr[j],arr[j+1]);
    }else{
        break;
    }
}

}

for (int i =0 ;i<n ;i++){
    cout<<arr[i]<<" ";
}

}