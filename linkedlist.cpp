#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node *next;

    Node(int value){ //constructor
       data=value;
     next = NULL;
    }
};

int main(){
    Node *Head;
    Head = new Node(4);  //dynamically

    cout<<Head->data<<endl;
    cout<<Head->next<<endl;
}