#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *rear = NULL;
struct node *front = NULL;

int main()
{
    int n,val;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        struct node *newnode = malloc(sizeof(struct node));
        scanf("%d",&val);
        newnode->data = val;
        newnode->next =NULL;
    
        if(rear==NULL)
        {
            rear=front=newnode;
        }
        else{
            rear->next =newnode;
            rear = newnode;
        }
    
    }
    printf("\n dispaying queue using linked listn:\n ");
    struct node *temp = front;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    return 0;
    
    
    
}



