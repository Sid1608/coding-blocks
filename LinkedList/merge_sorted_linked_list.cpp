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


node* head take_input(){
    int d;
    // cin>>d;
    node* head=NULL;
    while(cin>>d){
        insertAtHead(head,d);
    } 
    return head;
}
node* merge(node* a,node* b){
    if(a==NULL){
        return b;
    }
    if(b==NULL)return a;
    node* c;
    if(a->data<b->data){
        c=a;
        c->next=merge(a->next,b);
    }else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c; 
}
int main(){
    node* head,*head2;
    cin>>head>>head2;
    cout<<head<<head2;
    node* newHead=merge(head,head2);
    cout<<newHead<<" ";

} 