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
    if (!new){ // if malloc is not allocated
    	printf("malloc error\n");           
        exit(0);
        }          
    new->data=a; //inserting data
    new->next=NULL; // setting end of list to NULL
    if(*head==NULL)
    {
    	*head=new;//setting the starting address of the LL
    	temp=new;
    }  
    temp->next=new; //linking next of previous node to the current new (before it would have been NULL or the previous address )
    temp=new;// changing the address to current new
}

struct node *concat(struct node *start1,struct node *start2)//start1 is the head poineter of 1st LL and start2 for the 2nd LL
{
struct node *head2=NULL,*previous=NULL,*temp;//head2 holds the starting address of the concated LL, previous is used to traverse 

while(start1!=NULL) //copying the contents of the 1st LL into the new(concat) LL
{
    temp = (struct node *) malloc (sizeof(struct node));
    temp->data=start1->data;//copying data
    temp->next=start2;//here we keep changing the last address of the LL to the head address of the 2nd LL, since after the 1st LL
		      //is finished printing it refernces to the 2nd LL
    if(head2==NULL) // the starting of the new LL
    {
        head2=temp; // setting the starting address for the new list
        previous=temp;
    }
    else
    {
        previous->next=temp;// traversing the new list
        previous=temp;          
    }
    start1=start1->next; // traversing the 1st LL
}
while(start2!=NULL)// no starting address required here as copying will continue after the 1st LL
{
	temp=(struct node *)malloc(sizeof(struct node));
	temp->data=start2->data;
	temp->next=NULL; // keep changing the last address of the total(new) list to NULL(End of list)
	previous->next=temp;
        previous=temp;  
        start2=start2->next;
}
return head2;// return the starting address of the new LL
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
	struct node *head=NULL,*head1=NULL,*head2=NULL;// two head pointers for the user input linked list and a third head pointer
							// concat holding linked list
	int i,n;
	printf("Enter the data for 1st linked list\n"); //user input for 1st linked list
	for(i=0;i<5;i++)
	{
		printf("Enter the data\n");
		scanf("%d",&n);
		insert(&head,n); //referencing the address of the head pointer to set to the 1st LL starting addresss
	}
	printf("Enter the data for the second linked list\n"); //user input for 2nd linked list
	for(i=0;i<5;i++)
	{
		printf("Enter the data\n");
		scanf("%d",&n);
		insert(&head1,n); //referencing the address of the head1 pointer to set to the 2nd LL starting addresss
	}	
	head2=concat(head,head1); //sending in head pointers of the two linked list, no referencing required as pointer(address) value
				  // was set in the insert method
	printf("The concated linked list is \n");
	display(head2);
}
