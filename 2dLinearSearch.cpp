#include<iostream>
using namespace std;
int main(){
    int arr [3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int key=8;
    for(int i=0; i<3 ;i++){
        for(int j=0 ; j<3 ;j++){
            if(arr[i][j]== key){
                cout<<"the row and column index are"<< i << j << endl;
            }
        
        }
    }
    return 0;
}