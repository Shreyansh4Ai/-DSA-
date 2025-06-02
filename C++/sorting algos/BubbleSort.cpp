#include<iostream>
using namespace std ;

int main(){
   int n ;   // size of arraya
   cin>> n ;

   int arr[n];   // array input 
   for(int i =0 ;i<n ;i++){
    cin>> arr[i];
   }

   for (int i=n-2;i>=0;i--){   //n-2 == number of rounds 
     bool swapped =0;      // check is swapping happend if not then already sorted
      for(int j=0 ; j<=i ;j++) {
        if(arr[j]>arr[j+1]){        // creating bubbles abnd checking and then swapping them 
            swap(arr[j],arr[j+1]);
            swapped = 1 ;   //swapping occured 
        }
    }
     if(swapped == 0){    // checking for swapping if not them stop the loop aready sirted the array
        break;
     }

   }
  
    for(int i =0 ;i<n ;i++){   // output after swapping 
        cout<<arr[i]<<" ";
    }


    return 0;
}