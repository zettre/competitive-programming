#include <stdio.h>
struct Node
{
int item;
struct Node* next;
};
int main()
{
	struct Node* new=(struct Node*)malloc(sizeof(struct Node));
	new->data=10;
	new->next=NULL;
	
	return 0;
}