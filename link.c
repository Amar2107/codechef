#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node{
int data;
struct node* next;	
};

void insert(struct node **head,int a)
{
	struct node *new,*temp;      
    new=(struct node*)malloc(sizeof(struct node));
    if (!new){
    	printf("malloc error\n");           
        exit(0);
        }          
    new->data=a;
    new->next=NULL;
    if(*head==NULL)
    {
    	*head=new;
    	temp=new;
    }  
    temp->next=new;
    temp=new;
}

struct node *concat(struct node *start1,struct node *start2)
{
struct node *head3=NULL,*head2=NULL,*previous=NULL,*temp;

while(start1!=NULL)
{
    temp = (struct node *) malloc (sizeof(struct node));
    temp->data=start1->data;
    temp->next=start2;

    if(head2==NULL)
    {
        head2=temp;
        previous=temp;
    }
    else
    {
        previous->next=temp;
        previous=temp;          
    }
    start1=start1->next;
}
while(start2!=NULL)
{
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=start2->data;
	temp->next=NULL;
	previous->next=temp;
        previous=temp;  
        start2=start2->next;
}
return head2;
}

void display(struct node *head)
{
	while(head!=NULL)
	{
		printf("%d ",head->data);
		head=head->next;
	}
}

int main()
{
	struct node *head=NULL,*head1=NULL,*head2=NULL;
	int i,n;
	printf("Enter the data for 1st linked list\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the data\n");
		scanf("%d",&n);
		insert(&head,n);
	}
	printf("Enter the data for the second linked list\n");
	for(i=0;i<5;i++)
	{
		printf("Enter the data\n");
		scanf("%d",&n);
		insert(&head1,n);
	}	
	head2=concat(head,head1);
	printf("The concated linked list is \n");
	display(head2);
}