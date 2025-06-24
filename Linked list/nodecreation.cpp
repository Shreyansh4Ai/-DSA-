#include<iostream> 
using namespace std ; 

class Node{
    public:
    int val;
    Node*next ;

    Node(int value){
          val = value ;
          next = NULL;
    }
};


int main(){

Node* n = new Node(1); 

cout << n->val <<" "<< n->next << endl ;




return 0 ;
}