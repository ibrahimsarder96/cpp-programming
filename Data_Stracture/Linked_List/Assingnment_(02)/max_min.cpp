#include<bits/stdc++.h>
using namespace std;
class Node{
  public:
        int val;
        Node* next;
        Node(int val){
          this->val=val;
          this-> next = NULL;
        }
};
// insert head and tail
void insert_head_tail(Node *&head, Node* &tail, int val){
      Node* newNode = new Node(val);
      if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
      }
      tail->next = newNode;
      tail = newNode;
}
// print function
void print_linked_list(Node* &head){
  Node* tmp = head;
  int max=INT_MIN,min=INT_MAX;
  while(tmp != NULL){
   if(tmp->val>max){
    max=tmp->val;
   }
   if(tmp->val<min){
    min=tmp->val;
   }
    tmp=tmp->next;
  }
  cout<<max<<" "<<min;
  cout<<endl;
}

main()
{
  Node* head = NULL;
  Node* tail = NULL;
  int val;
  while(true){
    cin>>val;
    if(val == -1){
      break;
    }  
     insert_head_tail(head,tail,val);
  }
  print_linked_list(head);
  return 0;
}