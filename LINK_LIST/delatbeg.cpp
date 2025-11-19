// void delATEND(){
//   if(Head==NULL) return;
//   if(Head->next==NULL){
//     Node* temp=Head;
//     Head=NULL;
//     delete(temp);
//   }
//   Node* prev=NULL;
//   Node* curr=Head;
//   while(curr->next){
//     prev=curr;
//     curr=curr->next;
//   }
//   delete(curr);
//   prev->next=NULL;
// }




//Delete at position X
if(X==1){
  Node* temp=Head;
  Head=Head->next;
  delete(temp);
  return;
}

Node* prev=NULL;
Node* curr=Head;

X-=1
while(X--){
  prev=curr;
  curr=curr->next;
}
prev->next=curr->next;
delete(curr);