#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
   struct Node*next; // points the next node and links them 
};

struct Node*createNode(int value){   // memory management+node creator 
    struct Node*NewNode=(struct Node*)malloc(sizeof(struct Node));
    NewNode->data=value;
    NewNode->next=NULL;
    return NewNode;
}

int main(){
    struct Node *Head= NULL;  //initialising head pointer 
    int arr[]={2,4,6,8,10};
    int size=5;

    for(int i=0;i<5;i++){
        // linked list is not given 
        if (Head==NULL){
            Head=createNode(arr[i]); //1 st node 
        }else{
            struct Node *temp=Head;
            temp=createNode(arr[i]);
            temp->next=Head;
            Head = temp;
        }
    }
     //printing values 
      struct Node*temp=Head;
      while(temp!=NULL){
         printf("%d ",temp->data);
         temp=temp->next; // simillar to temp++ type thing 
      }

    return 0;
}