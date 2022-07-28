#include<iostream>
#include<queue>
using namespace std;

class node{
	public:
		int data;
		node* left;
		node* right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}

};
//return address of root node
node* buildTree(){
	int d;
	cin>>d;
	if(d==-1)
		return NULL;
	node* root=new node(d);
	root->left=buildTree();
	root->right=buildTree();
	return root;
}
void preorder(node* root){
	  if(root==NULL){
		  return;
	  }
	  //Otherwise print the root first followed by subtree(children)
	  cout<<root->data<<" ";
	  preorder(root->left);
	  preorder(root->right);

}
void inorder(node* root){
	  if(root==NULL){
		  return;
	  }
	 
	  inorder(root->left);
      cout<<root->data<<" ";
	  inorder(root->right);

}
void postorder(node* root){
	  if(root==NULL){
		  return;
	  }
	  
	  postorder(root->left);
	  postorder(root->right);
      cout<<root->data<<" ";

}
int height(node* root){
	if(root==NULL)return 0;
	int ls=height(root->left);
	int rs=height(root->right);
	return max(ls,rs)+1;
}
void printKthLevel(node* root,int k){
	if(root==NULL){
		return ;
	}
	if(k==1){
		cout<<root->data<<" ";
		return;
	}
	printKthLevel(root->left,k-1);
	printKthLevel(root->right,k-1);
}
void printAllLevels(node* root){
	int H=height(root);//o(n) for skew tree
	for(int i=1;i<=H;i++){//o(1)+o(2)+....+o(n)=o(n^2)
		printKthLevel(root,i);
		cout<<endl;
	}
}
void bfs(node* root){
	queue<node*>q;
	q.push(root);
	while(!q.empty()){
		node* f=q.front();
		cout<<f->data<<",";
		q.pop();
		if(f->left){
			q.push(f->left);
		}
		if(f->right){
			q.push(f->right);
		}
	}
}
void bfs2(node* root){
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		node* f=q.front();
		if(f==NULL){
			cout<<endl;
			q.pop();
			if(!q.empty()){
				q.push(NULL);
			}
		}else{
			cout<<f->data<<",";
			q.pop();
			if(f->left){
				q.push(f->left);
			}
			if(f->right){
				q.push(f->right);
			}
		}
	}
}
int count(node* root){//preorder traversal 
	if(root==NULL) return 0; 
	return 1+count(root->left)+count(root->right);
}
int diameter_brute_force(node* root){//worst case:o(n^2)
	if(root==NULL){
		return 0;
	}
	int h1=height(root->left);//o(n)
	int h2=height(root->right);//o(n)
	int op1=h1+h2;
	int op2=diameter_brute_force(root->left);
	int op3=diameter_brute_force(root->right);
	return max(op1,max(op2,op3));
}
class Pair{
	public:
		int height;
		int diameter;
};
Pair fastDiameter(node* root){//Bottom up=>postorder
	Pair p;
	if(root==NULL){
		p.diameter=p.height=0;
		return p;
	}

	//Otherwise
	Pair left=fastDiameter(root->left);
	Pair right=fastDiameter(root->right);

	p.height=max(left.height,right.height)+1;
	p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
	return p;
}
int replaceSum(node* root){
	if(root==NULL){
		return 0;
	}
	if(root->left==NULL and root->right==NULL){
		return root->data;
	}

	//recurcive part
	int leftSum=replaceSum(root->left);
	int rightSum=replaceSum(root->right);

	int temp=root->data;
	root->data=leftSum+rightSum;
	return temp+root->data;
}
int main() {
	node* root=buildTree();
	preorder(root);
	cout<<endl;
    inorder(root);
	cout<<endl;
    postorder(root);
	cout<<height(root)<<endl;
	printAllLevels(root);
	// bfs2(root)<<endl;
	cout<<count(root)<<endl;
	Pair p=fastDiameter(root);
	cout<<p.height<<endl;
	cout<<p.diameter<<endl;
	
	return 0;
}

//input
//3 4 -1 6 -1 -1 5 1  -1 -1 -1