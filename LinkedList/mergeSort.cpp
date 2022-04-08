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
node* mergeSort(node* head){
    //base case
    if(head==NULL or head->next==NULL)
        return head;
    //rec Case
    //1. break
    node* mid=midpoint(head);
    node* a=head;
    node* b=mid->next;
    mid->next=NULL;
    // 2. rec sort the two parts
    a=mergeSort(a);
    b=mergeSort(b);
    //3. merge them
    node* c=merge(a,b);
    return c;

}
int main(){
    node* head;
    cin>>head;
    node* newHead=mergeSort(head);
    cout<<newHead<<endl;
    

}  