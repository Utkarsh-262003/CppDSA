#include<iostream>
using namespace std;
class Node{
  public:
  int data;
  Node* next;
  Node(int data){
    this->data=data;
    next=NULL;
  };
}
int main(){
  //Insert at any position
  //Inser 3 at X==3 (3rd position)
  //current list is 1,2,4,5;
  //What if L.L. doesnot exiat(if (head==null) new node(val))
  //we will only deal with if list exist
  // if(X==1){
  //   Node* temp=new Node(3);
  //   temp->next=Head;
  //   Head=temp;

  // }
  
  Node* temp=Head;
  X-=1;
  while(X--){
    temp=temp->next;

  }
  Node* val=new Node(val);
  val->next=temp->next;
  temp->next=val;


}