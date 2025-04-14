#include<iostream>
using namespace std;
class node{
  public:
   int data;
   node*prev;
   node*next;
//    constructor
node(int data){
    this->data=data;
    this->prev=NULL;
    this->next=NULL;
}
~node(){
    int value=this->data;
    if(next!=NULL){
        delete next;
        next=NULL;
    }
    cout<<"memory free for node with data"<<value;

}

};
void print(node*head){

    node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"\t";
        temp=temp->next;
    }
    cout<<endl;

}
// traverse 
int getLength(node*head){
    int len=0;
    node*temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;


}
 void insertAtHead(node*&tail,node*&head,int item){
    if(head==NULL){
        node*temp=new node(item);
        head=temp;
        tail=temp;
    }
    else{
        node*newnode=  new node(item);
    newnode->next=head;
    head->prev=newnode;
    head=newnode;

    }
    
 }
 void insertAtTail(node* &tail,node*&head,int item){
     if(tail==NULL){
        node*temp=new node(item);
        tail=temp;
        head=temp;
    }
    else{
         node* newnode= new node(item);
    newnode->next=NULL;
    tail->next=newnode;
      tail=newnode;
    }
   
 }
 void insertAtPosition(node*&head,node*&tail,int item,int pos){
    int count;
    node*temp=head;
    // position is 1
    if(pos==1){
        insertAtHead(tail,head,item);
        return;
    }
    // position is any
    else{
        node*newnode= new node(item);
        while(count<pos){
       temp=temp->next;
       count++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
        temp=newnode;
    }
    // position is last
    if(temp->next==NULL){
        insertAtTail(tail,head,item);
        return;
    }
    // creating a node for item
    node*nodeToInsert=new node(item);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;




 }
//  deletion of doubly ll
void deleteNode(int pos,node*&head){
    // deleting starting node
    if(pos==1){
        node*temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }
    // deleting node in middle

    else{
        node*curr=head;
        node*prev=NULL;
        int count=0;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;

        }
        curr->prev=NULL;
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;

    }
}
int main(){
    node*head=NULL;
     node*tail=NULL;


    print(head);
    // int n=getLength(head);
    // cout<<endl<<n<<endl;
    // insertAtHead(tail,head,15);

    // insertAtHead(tail,head,60);

    // insertAtHead(tail,head,62);
    // insertAtTail(tail,head,45);
    // insertAtPosition(head,tail,90,4 );
    // insertAtPosition(head,tail,56,3);
    //     insertAtPosition(head,tail,87,1);
   insertAtHead(tail,head,11);
   print(head);
   insertAtHead(tail,head,13);
   print(head);
   insertAtHead(tail,head,8);
   print(head);
   insertAtTail(tail,head,25);
   print(head);
//    insertAtPosition(tail,head,2,100);
//    print(head);
//    insertAtPosition(tail,head,1,101);
//    print(head);
deleteNode(1,head);
cout<<"\n";
print(head);


}