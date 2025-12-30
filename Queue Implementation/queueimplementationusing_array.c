//queue using array
#include<stdio.h>
#define MAX 5

int queue[MAX];
int front= -1;
int rear = -1;

int main()
{
    int n, value;
    printf("enter the size[max %d]:",MAX);
    scanf("%d",&n);
    
  
    if(n>MAX)
    {
        printf("queue overflow");
        
    }
    
    front =0;
    
    for(int i=0; i<n; i++)
    {
        scanf("%d",&value);
        queue[++rear]=value;
    }
    
    
    for(int i=front; i<=rear; i++)
    {
        printf("%d ",queue[i]);
    }
    return 0;
}
