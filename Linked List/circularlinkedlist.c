#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
    
    
};

struct node *head =NULL;

void append(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
   
    if(head == NULL)
    {
        
        head = newnode;
        newnode->next = head;
    }
    else{
        struct node *temp=head;
        while(temp->next!=head)
        {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        
    }
}



void display()
{
    struct node *temp=head;
    
    do{
        printf("%d ", temp->data);
        temp = temp->next;
    }while(temp!=head);
}



int main(){
    int n, val;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
    {
        scanf("%d",&val);
        if(val>0){
            append(val);
        }
    
    }

    
    display();
   
   
    return 0;
}
