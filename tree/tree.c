#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node{
	int data;
	struct node* left;
	struct node* right;
};

int Search(struct node* root, int data)
{

	if(root==NULL)
		return 0;

	else if(data==root->data)
		return 1;
	
	else if(data>(root->data))
		Search(root->right,data);
	
	else
		Search(root->left,data);

}

struct node* getnode(int data)
{
	struct node* new=(struct node*)malloc(sizeof(struct node));
	new->data=data;
	new->left=NULL;
	new->right=NULL;

	return new;
}


struct node* insert(struct node* root,int data)
{
	struct node* newnode=getnode(data);

	if(root==NULL)
		root=newnode;

	else if(data<=root->data)
		root->left=insert(root->left,data);
	
	else
		root->right=insert(root->right,data);

	return root;
}

int main()
{
	struct node* root=NULL;
	
	root=insert(root,20);
	root=insert(root,10);
	root=insert(root,15);
	root=insert(root,25);

	int ans=Search(root,10);
	printf("%d",ans);
	
	return 0;
}
