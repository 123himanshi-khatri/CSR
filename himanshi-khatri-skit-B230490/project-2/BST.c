
#include<stdio.h>
#include<stdlib.h>



struct bst
{
	int info;
	struct bst*lc,*rc;
	
}*root=NULL;
typedef struct bst bst;
bst*bstinsert(bst*root,int item)
{
	bst*newnode;
	bst*ptr,*par;
	newnode=(bst*)malloc(sizeof(bst));
	newnode->lc=newnode->rc=NULL;
	newnode->info=item;
	if(root==NULL)
{

root=newnode;
return root;
}
else{
	ptr=root;
	while(ptr!=NULL){
		if(ptr->info>item){
			par=ptr;
			ptr=ptr->lc;
		}
		else if(ptr->info<item)
		{
			par=ptr;
			ptr=ptr->rc;
		}
		else{
			printf("duplicate value");
			return 0;
		}
	}
	if (par->info>item){
		par->lc=newnode;
			}
			else{
				par->rc=newnode;
			}
			return root;
}
}


void preorder(bst*root){
	bst*ptr=root;
	if(ptr==NULL){
		return;
	}
	printf("%d ",ptr->info);
	preorder(ptr->lc);
	preorder(ptr->rc);
}
void inorder(bst*root){
	bst*ptr=root;
	if(ptr==NULL)
	return;
	inorder(ptr->lc);
	printf("%d ",ptr->info);
	inorder(ptr->rc);
}
void postorder(bst*root){
	bst*ptr=root;
	if(ptr==NULL)
	return;
	postorder(ptr->lc);
	postorder(ptr->rc);
	printf("%d ",ptr->info);
}
int main()
{
	int n,i;
	printf("enter the no. of values to be inserted");
	scanf("%d",&n);
	while(n>0){
		printf("enter the value to be inserted");
		scanf("%d",&i);
		root=bstinsert(root,i);
		n--;
	}
	printf("tree is\n\n");
	printf("\n\n preorder\n\n");
	preorder(root);
	printf("\n\ninorder\n\n");
	inorder(root);
	printf("\n\npostorder\n\n");
	postorder(root);
	
}