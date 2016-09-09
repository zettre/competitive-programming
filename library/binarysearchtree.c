#include <stdio.h>
struct Node
{
	int num;
	struct Node *left,*right;
};
struct Node *root=NULL;
void addNode(int num)
{
	struct Node *t;
	t=(struct Node*)malloc(sizeof(struct Node));
	t->num=num;
	t->left=NULL;
	t->right=NULL;
	if(root==NULL) root=t;
	else
	{
		struct Node *j;
		j=root;
		while(1)
		{
			if(j->num>=t->num)
			{
				if(j->left==NULL)
				{
					j->left=t;
					break;
				}
				j=j->left;
			}
			if(j->num<t->num)
			{
				if(j->right==NULL)
				{
					j->right=t;
					break;
				}
				j=j->right;
			}
		}
	}

}
int removeNode(int num)
{
struct Node *t,*j,*e,*f;
t=root;
while(t!=NULL)
{
	if(num==t->num)
	{
		break;
	}
	j=t;
	if(num<t->num)
	{
		t=t->left;
	}
	if(num>t->num)
	{
		t=t->right;
	}
}
if(t==NULL)
{
	return 0;
}
if(t==root)
{
	if(t->left==NULL && t->right==NULL)
	{
		root=NULL;
		free(t);
		return 1;
	}
	if(t->left==NULL)
	{
		root=t->right;
		free(t);
		return 1;
	}
	if(t->right==NULL)
	{
		root=t->left;
		free(t);
		return 1;
	}
	e=t->left;
	f=t->right;
	while(f->left!=NULL)
	{
		f=f->left;
	}
	f->left=e;
	root=t->right;
	free(t);
	return 1;
}
if(t->num<j->num)
{
	if(t->left==NULL && t->right==NULL)
	{
		j->left=NULL;
		free(t);
		return 1;
	}
	if(t->left==NULL)
	{
		j->left=t->right;
		free(t);
		return 1;
	}
	if(t->right==NULL)
	{
		j->left=t->left;
		free(t);
		return 1;
	}
	e=t->left;
	f=t->right;
	while(f->left!=NULL)
	{
		f=f->left;
	}
	f->left=e;
	j->left=t->right;
	free(t);
}
else
{
	if(t->left==NULL && t->right==NULL)
	{
		j->right=NULL;
		free(t);
		return 1;
	}
	if(t->left==NULL)
	{
		j->right=t->right;
		free(t);
		return 1;
	}
	if(t->right==NULL)
	{
		j->right=t->left;
		free(t);
		return 1;
	}
	e=t->left;
	f=t->right;
	while(f->left!=NULL)
	{
		f=f->left;
	}
	f->left=e;
	j->right=t->right;
	free(t);
}
return 1;
}
void inOrderTraversal(struct Node *node)
{
	if(node==NULL)
	{
		return;
	}
	inOrderTraversal(node->left);
	printf("%d\n",node->num);
	inOrderTraversal(node->right);
}
int main()
{
	while(1)
	{
	int ch,num;
	printf("1.Add\n");
	printf("2.Delete\n");
	printf("3.Print\n");
	printf("4.Exit\n");
	printf("Enter your choice..\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("Enter a number to be added...\n");
		scanf("%d",&num);
		addNode(num);
		printf("%d added to tree\n",num);
	}
	if(ch==2)
	{
		int i;
		printf("Enter a number to deleted...\n");
		scanf("%d",&num);
		i=removeNode(num);
		if(i==0)
		{
			printf("%d not found..\n",num);
		}
		else
		{
			printf("%d deleted ....\n",num);
		}
	}
	if(ch==3)
	{
		printf("The ordered list is..\n");
		inOrderTraversal(root);
	}
	if(ch==4)
	{
		printf("Thank You..\n");
		break;
	}
	if(ch<1 || ch>4)
	{
		printf("Invalid choice...\n");
	}
	}
	return 0;
}