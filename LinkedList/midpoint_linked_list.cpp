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

void print(node* head){
    while(head){
        cout<<head->data<<"->";
        head=head->next;
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
void reverse(node* &head){
    node* c=head;
    node* prev=NULL;
    node* N;
    while(c){
        N=c->next;
        c->next=prev;
        prev=c;
        c=n;
    }
    head=prev;
}
node* recReverse(node* head){
    //smallest linked list
    if(head->next==NULL or head==NULL){
        return head;
    }

    //rec case 
    node* shead=recReverse(head->next);
    node* shead=temp;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    head->next=NULL;
    temp->next=head;
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
node* midpoint(node* head){
    if(head==NULL || head->next==NULL){
        return head;
    }
    node* slow=head;
    node* fast=head->next;
    while(fast!=NULL and fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int main(){
    node* head;
    cin>>head;
    cout<<head;
    node* mid=midpoint(head);
    cout<<mid->data<<" ";

} 