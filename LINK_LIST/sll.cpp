#include <iostream>
using namespace std;


class Node {
public:         // ← you forgot to make data & next public
    int data;
    Node* next;

    Node(int data) {   // ← constructor syntax was wrong
        this->data = data;
        this->next = NULL;
    }
};
// Node* insertBeg(int arr[],int size){
//   Node* Head =NULL;
//   int i=0;
//   while(i<size){
//     if(Head==NULL){
//       Head =new Node(arr[i]);
//       i++;
//     }
//     else{
//       Node* temp=new Node(arr[i]);
//       temp->next=Head;
//       Head=temp;
//       i++;
//     }
//   }
//   return Head;
// }
Node* insertEnd(int arr[],int size){
  int i=0;
  Node* Head=NULL;
  Node* Tail=NULL;
  while(i<size){
    if(Head==NULL){
      Head=new Node(arr[i]);
      Tail=Head;
      i++;
    }
    else{
      Tail->next=new Node(arr[i]);
      Tail=Tail->next;
      i++;
    }
  }
  return Head;
}

int main() {
    // Node* Head = new Node(20);

    // cout << "Head Data: " << Head->data << endl;

    // return 0;

    //Lets do insertion at beggining 

    // // if L.L already present  and Head points to the head of l.l
    // Node* temp=new node(whatever we have to add);
    // temp->next= Head;
    // Head=temp;


    // //What if L>L not there 
    // Node* Head =new Node(val);






    //Lets insert from an array
    // int arr[5]={1,2,3,4,5};
    // Node* Head;
    // Head=insertBeg(arr,5);


    // //Traversal
    // Node* temp=Head;
    // while(temp){
    //   cout<<temp->data<<endl;
    //   temp=temp->next;
    // }


    //Insertion at End of L.L;
    //L.l empty then we can simply Node* Head=new NOde(val);

    //If L.L exit then we make take a tail pointer

    // Node* Tail=Head;
    // while(Tail->next !=NULL){
    //   Tail->next;
    // }
    // Tail->next =new Node(val);

    //This process in loop will always traverse list for tail to go at end 



    //INsert at end from array but keep a tail at end


    int arr[5]={1,2,3,4,5};
    Node* Head=insertEnd(arr,5);
    Node* temp=Head;
    while(temp){
      cout<<temp->data<<" ";
      temp=temp->next;
    }
    cout<<endl;

}
