// #include<iostream>
// #include<vector>
// using namespace std;
// class NODE
// {
//   public:
//   int data;
//  NODE *next;
//  NODE(int data){
//   this->data=data;
//   next=NULL;
//  }

// };
// int main(){
//   // NODE A(400);
//   // // A.data=400;
//   // // A.next=NULL;
//   // // cout<< A.data <<endl << A.next;

//   // //Insertion at first place
//   // //linked list is not created as of now

//   // NODE *Head;
//   // if(Head==NULL)
//   // {
//   //   Head=new NODE(28);
//   // }
//   // //Inserting in ll if list already present

//   // else{
//   //   NODE *temp=new Node(28);
//   //   //will create a new node with 28 as data item and null in last whatever thing of link list 

//   //   //now i need to like put original first node address in its 2nd like next pointer and move head to point this new node

//   //   temp->next=Head;
//   //   Head=temp;
//   // }

// // //insert elements from an array to ll
// // int n;
// // cin>>n;
// // vector<int> arr(n);
// // cout<<"Enter elements of array :";
// // for(int i=0;i<n;i++){
// //   cin>>arr[i];
// // }

// // //insert them at the starting of linked list
// // NODE *Head=NULL;
// // for(int i=0;i<n;i++){
// //   if(Head==NULL){
// //     Head=new NODE(arr[i]);
// //   }
// //   else{
// //     NODE *temp=new NODE(arr[i]);
// //     temp->next=Head;
// //     Head=temp;
// //   }
// // }

// // NODE *temp=Head;
// // while(temp!=NULL){
// //   cout<<temp->data;
// //   temp=temp->next;
// // }
// int n;
// cin>>n;
// vector<int> arr(n);
// cout<<"Enter elements of array :";
// for(int i=0;i<n;i++){
//   cin>>arr[i];
// }
// //Insert at end
// // NODE *Head=NULL;
// // for(int i=0;i<n;i++)
// // {
// //   if(Head==NULL)
// //   {
// //     Head=new NODE(arr[i]);

// //   }
// //   else{
// //     NODE *tail=Head;
// //     while(tail->next !=NULL)
// //     {
// //       tail=tail->next;
// //     }
// //     tail->next=new NODE(arr[i]);
// //   }
// // }
// // NODE *temp=Head;
// // while(temp !=NULL)
// // {
// //   cout<<temp->data<<" ";
// //   temp=temp->next;
// // }



// //Insert at end but keep one tail at end
// NODE *Head=NULL;
// NODE *Tail=NULL;
// for(int i=0;i<n;i++)
// {
//   if(Head==NULL)
//   {
//     Head=new NODE(arr[i]);
//     Tail=Head;
//   }
//   else
//   {
//     Tail->next=new NODE(arr[i]);
//     Tail=Tail->next;
//   }
// }
//   NODE *temp=Head;
//   while(temp!=NULL)
//   {
//     cout<<temp->data<<" ";
//     temp=temp->next;
//   }
// }






//Using recursion
#include<bits/stdc++.h>
using namespace std;
class Node{
public:
int data;
Node *next;
Node(int a)
{
  data=a;
  next=NULL;
}
};
Node* createLinkedList(vector<int>&arr,int index)
{
  int n=arr.size()-1;
  if(index==n) return NULL;
  Node *temp= new Node(arr[index]);
  temp->next=createLinkedList(arr,index+1);
  return temp;
}
int main()
{
  int n;
  cin>>n;
  vector<int> arr(n);
  //Driver code 
  //Insert array elements into link list using recursion
}