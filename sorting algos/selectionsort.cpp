#include<iostream>
using namespace std;

int main(){
    int n=5;
    int arr[n]={64,65,74,38,22};
     for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i+1;j<n;j++)
        if(arr[j]<arr[min])min=j;

        int temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
  for(int i=0;i< n;i++)
printf("%d ",arr[i]);

return 0;
}