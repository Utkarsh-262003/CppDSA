//given singly linked list convert into circular
Node* temp=head;
while(temp->next){
  temp=temp->next;
}
temp->next=head;
