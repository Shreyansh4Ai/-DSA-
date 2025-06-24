#include<iostream> 
using namespace std ;

class Node{
      public:

  int val ;
  Node*next;

  Node(int value  ){
    val = value ;
    next = NULL ;

  }
};

void insertatHead(Node*&head ,int val){
    Node* new_node = new Node(val);

    new_node->next = head;
    head =new_node ;
}
void display(Node *head){
    Node*temp = head ;
    while(temp!= NULL){
        cout<<temp->val << endl;
          temp = temp ->next ;
    }

    cout <<"NULL"<<endl;
    

}

int main(){
Node* head = NULL;
insertatHead(head , 2 );
display(head);
}