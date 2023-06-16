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
// insert head and tail----------------
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
// reverse linked list------------
void print_recursion(Node* &head){
  if(head == NULL) return;
  cout<<head->val<<" ";
  print_recursion(head->next);
}
// original linked list-----------
void print_reverse(Node* &head){
  if(head == NULL) return;
  print_reverse(head->next);
  cout<<head->val<<" ";
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
  print_reverse(head);
  cout<<endl;
  print_recursion(head);
  return 0;
}