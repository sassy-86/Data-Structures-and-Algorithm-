//graph implementation using array
#include <stdio.h>
#define MAX 10
int mat[MAX][MAX];
void addedge(int u, int v)
{
    mat[u][v] =1;
    mat[v][u] =1; //undirected graph 
    
}
void printgraph(int vertices)
{
    for(int i=0; i<vertices; i++)
    {
        for(int j=0;  j<vertices; j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    int edge , vertices, u, v;
    printf("enter vertices: ");
    scanf("%d", &vertices);
    
    printf("enter the edge: ");
    scanf("%d", &edge);
    
    
    for(int i=0; i<edge; i++ )
    {
        printf("enter the edge (u v):");
        scanf("%d %d",&u,&v);
        addedge(u,v);
        
    }
    printgraph(vertices);
    

    return 0;
}
