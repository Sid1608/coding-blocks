#include<iostream>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int d){
            data=d;
            next=NULL;
        }

}
//Linked class (object oriented)
// class LinkedList{
//     node *head;
//     node* tail;
//     public:
//         LinkedList(){

//         }
//         void insert(int d){}
// }
//Functions (procedural languages)
void buid(){}
//passing a pointer by reference
void insertAtHead(node* &head,int d){
    //why dynamic allocation 
    //when function call over all variable create statically will be distroyed

    if(head==NULL){
        head=new Node(d);
        return ;
    }
    Node* n=new Node(d);
    // (*n).next=head;
    n->next=head;
    head=n;
}
int length(node* head){
    int cnt=0;
    while(head){
        cnt++;
        head=head->next;
    }
    return cnt;
}
void insertAtTail(node* &head,int d){
    if(head==NULL){
        head=new Node(d);
        return ;
    }
    node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new Node(d);
    return ;
}
void insertAtMiddle(node* &head,int d,int p){
    //corner case 
    if(head==NULL or p==0){
        insertAtHead(head,data);
        return ;
    }else if(pos>length(head)){
        insertAtTail(head,data);
    }else{
        //take p-1 jumps over
        int jump=1;
        node* temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        //create a new node 
        node* n=new Node(d);
        n->next=temp->next;
        temp->next=n;
    }
}
void print(node* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
    }
}
void deleteHead(node* &head){
     if(head==NULL){
         return ;
     }
     Node* temp=head->next;
     delete head;
     head=temp;
}
//search operation 
//linear search
bool search(node* head,int key){
    node* temp=head;
    while(temp!=NULL){
        if(head->data==key){
            return true;
        }
        head=head->next; 
    }
    return false;
}
//recurcively search
bool searchRecurcive(node* head,int key){
    if(head==NUL)return false;
    if(head->data==key){
        return true;
    }else{
        return searchRecurcive(head->next,key);
    }
}
ostream& operator<<(ostream &os, node* head){
    print(head);
    return os;//cout
}
istream& operator>>(istream &is,node* &head){
    head=take_input(head);
    return is;
}
node* head take_input(){
    int d;
    // cin>>d;
    node* head=NULL;
    while(cin>>d){
        insertAtHead(head,d);
    } 
    return head;
}
int main(){
    node* head=take_input();
    node * head2=take_input();
    //overloading left shift operator
    cout<<head;//print entire linked list
    cout<<head2;
    cout<<head<<head2;

    //overloading right shift operator
    node* head3,head4;
    cin>>head3>>head4;
    cout<<head3<<head4;


}