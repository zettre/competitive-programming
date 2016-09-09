#include<stdio.h>
#include<malloc.h>
struct Node
{
int data;
struct Node* next;
};
struct Node *start=NULL;
void insertAtEnd(int num)
{
struct Node *t,*j;
t=(struct Node *)malloc(sizeof(struct Node));
t->data=num;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
j=start;
while(j->next!=NULL)
{
j=j->next;
}
j->next=t;
}
}
void insertAtStart(int num)
{
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->data=num;
t->next=NULL;
if(start==NULL)
{
start=t;
}
else
{
t->next=start;
start=t;
}
}
void insertAtPosition(int num,int pos)
{
struct Node *p1,*p2;
int x;
struct Node *t;
t=(struct Node *)malloc(sizeof(struct Node));
t->data=num;
t->next=NULL;
if(pos<=0) pos=1;
x=1;
p1=start;
while(x<pos && p1!=NULL)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL)
{
if(start==NULL)
{
start=t;
}
else
{
p2->next=t;
}
}
else
{
if(p1==start)
{
t->next=start;
start=t;
}
else
{
t->next=p1;
p2->next=t;
}
}
}
void removeFromPosition(int pos)
{
struct Node *p1,*p2;
int x;
if(start==NULL)
{
printf("List is empty!");
return;
}
x=1;
p1=start;
while(x<pos && p1!=NULL)
{
p2=p1;
p1=p1->next;
x++;
}
if(p1==NULL)
{
printf("Invalid position!");
return;
}
if(p1==start)
{
start=start->next;
}
else
{
p2->next=p1->next;
}
free(p1);
}
void traverseTopToBottom()
{
struct Node* t;
t=start;
while(t!=NULL)
{
printf("%d\n",t->data);
t=t->next;
}
}
void traverseBottomToTop(struct Node* t)
{
if(t==NULL)
{
return;
}
traverseBottomToTop(t->next);
printf("%d\n",t->data);
}
int main()
{
insertAtEnd(20);
insertAtEnd(30);
insertAtEnd(40);
insertAtStart(10);
insertAtStart(5);
insertAtPosition(15,2);
removeFromPosition(2);
traverseTopToBottom();
traverseBottomToTop(start);
return 0;
}