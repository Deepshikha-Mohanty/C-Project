#include<stdio.h>
#define max 100

void main()
{
    int vertices, edge,N=100;
    int graph[100][100];
    int a,b,c,a2,b2,a3,b3,c3,a4,b4,s1,s2,s3;//variables used to take input for the graph in different parts of the program
    int i, j;
    printf("enter the value of vertices and edge");
    scanf("%d,%d", &vertices,&edge);
    for(i=0;i<vertices;i++){
        
        for(j=0;j<vertices;j++){
            graph[i][j]=0;
        }
    }
    int l,k,m,g,h,r,k2,m2,i2,j2,l2,k3,m3,i4,j4,k5,m5,o,p,o2,p2,k6,m6,l3,w,z,t1;//loop variables
      for(l=0;l<edge;l++)
      {
        printf("enter the nodes and value of edge\n");
        scanf("%d,%d,%d", &a,&b,&c);
        graph[a][b]=c;
      }
    printf("the directed and weighted graph: \n");
    for(k=0;k<vertices;k++)
    {
        for(m=0;m<vertices;m++)
        {
            printf("%d ", graph[k][m]);
        }
        printf("\n ");
    }//printing of directed and weighted graph
    for(h=0; h< vertices; h++)
    {
         for(g=0; g<vertices; g++)
         {   
              graph[h][g]=0;
         }
    }
       for(r=0; r< edge; r++)
       {
           printf("enter the nodes\n");
           scanf("%d,%d", &a2,&b2);
           
           graph[a2][b2]=1;
       }
       
    printf("the directed and unweighted graph: \n");
    for(k2=0;k2<vertices;k2++)
    {
        for(m2=0;m2<vertices;m2++)
       {
            printf("%d ", graph[k2][m2]);
       }
        printf("\n");  
    }//printing of directed and unweighted graph
     for(i2=0; i2<vertices; i2++)
     {
         for( j2=0; j2<vertices; j2++)
         {
             
             graph[i2][j2]=0;
         }
     }
          
         for(l2=0;l2<edge; l2++)
         {
             printf("enter the nodes and value of the edge\n");
             scanf("%d,%d,%d", &a3, &b3, &c3);
             
             graph[a3][b3]= graph[b3][a3]=c3;
            
         }
          printf("the undirected and weighted graph: \n");
          for(k3=0; k3<vertices; k3++)
          {
           for(m3=0;m3<vertices;m3++)
           {
               printf("%d", graph[k3][m3]);
           }   
          printf("\n");
          }  //printing of undirected and weighted graph
          
          
         for(i4=0; i4<vertices; i4++)
         {
            for( j4=0; j4<vertices; j4++)
            {
             graph[i4][j4]=0;
            }
         }
         for(l3=0;l3<edge;l3++)
        {
             printf("enter the nodes\n");
             scanf("%d,%d", &a4, &b4);
             
             graph[a4][b4]= graph[b4][a4]=1;
            
        }
          printf("the undirected and unweighted graph: \n");
          for(k5=0; k5<vertices; k5++)
          {
           for(m5=0;m5<vertices;m5++)
           {
               printf("%d", graph[k5][m5]);
           }
          }//printing of undirected and unweighted graph
           for(w=0;w<vertices;w++)
          {
              for(z=0;z<vertices;z++)
              {
                  graph[w][z]=0;//reseting the value of graph elements
              }
          }
          for(t1=0;t1<edge;t1++)
          {
              printf("enter the nodes and value of the edge \n");
              scanf("%d,%d,%d", &s1, &s2, &s3);
              graph[s1][s2]=s3;
          }
          for(o=0;o<vertices;o++)
          {
             for(p=0;p<vertices;p++)
            {
               if(graph[o][p]==0)
              {
                continue;
              }
               else
              {
                graph[o][p]=1;
              }
            }
          }
          printf("the  adjacency matrix :\n");
           for(k6=0;k6<vertices;k6++)
          {
             for(m6=0;m6<vertices;m6++)
            {
              printf("%d", graph[k6][m6]);
            }
            printf("\n");
          }
          int search;
          printf("enter the value to search\n");
          scanf("%d", &search);
           for(o2=0;o2<vertices;o2++)
          {
             for(p2=0;p2<vertices;p2++)
           {
              if(graph[o2][p2]==search)
             { 
               printf("the search value %d was found at %d,%d", search,o2,p2);
               break;
             }
           }
          } //to search a particular value in the graph 
          int adj[max][max],node,n,ip;
          printf("the number of nodes that is maximum=%d\n", max);
          scanf("%d", &n);
          out(adj,n);
          int i0,visited[n],f,q[r];
           for(i0=0;i0<n;i0++)
          { 
             printf(" the indegree of the node %d =%d\n",i0,indeg(adj,i0,n));
             printf("the outdegree of the node %d =%d\n",i0,outdeg(adj,i0,n));
          }
          int v1,is,js;
          printf("\n enter the no. of vertices:\n");
          scanf("%d", &n);
           for (is=0;is<n;is++) // mark all the vertices as not visited
          {
             visited[is]=0;
          }
          printf("\n enter the graph data in the matrix form:\n");
           for(is=0;is<n;is++)
          {
            for(js=0;js<n;js++)
            {
              scanf("%d", &adj[is][js]);
              printf("\n enter the starting vertex:\n");
              scanf("%d", &v1);
              f=r=0;
              q[r]=v1;
              printf("\n the bfs traversal is :\n");
              visited[v1]=1; // mark the starting vertex as visited
             printf("%d", v1);
            }
          }
           bfs(v1);
           if(r!=n-1)
             printf("\n the bfs is not possible");
           int v,ir,jr;
           printf("\nenter the number of vertices");
           scanf("%d", &n);
           for(ir=0;ir<n;ir++)
          {
            visited[ir]=0;
          }
          printf("enter the graph data in matrix form:\n");
          for(ir=0;ir<n;ir++)
          for(jr=0;jr<n;jr++)
          scanf("%d", &v);
          printf("\n dfs traversal is:\n");
          visited[v]=1; // mark the strating vertex as visited
          printf("%d", v);
          dfs(v);
          int search1,o3,p3;
          printf("enter the edge to be removed");
          scanf("%d", &search1);
          for(o3=0;o3<vertices;o3++)
          {
            for(p3=0;p3<vertices;p3++)
           {
               if(graph[o3][p3] == search1)
              {
                  graph[o3][p3] == 0;
              }
           }
          }
          int search2,r2,c2,x,y;
          printf("the graph after removal:\n");
          for(int k7=0;k7<vertices;k7++)
         {
            for(int m7=0;m7<vertices;m7++)
           {
               printf("%d ", graph[k7][m7]);
           }
           printf("\n");
         }
          printf("enter the value of edge to add and the nodes");
          scanf("%d,%d,%d", &search2,&r2,&c2);
          graph[r2][c2]= search2;
          printf("the graph after addition of edge:\n");
          for(x=0;x<vertices;x++)
          {
           for(y=0;y<vertices;y++)
           {
             printf("%d ", graph[x][y]);
           }
           printf("\n");
          }

}
   
int out(int adj[][max],int n)
{   int t,s;
   for(t=0;t<n;t++)
   {   for(s=0;s<n;s++)
     {
         printf("if there is an edge between %d and %d enter 1 else enter 0 ");
         scanf("%d", &adj[t][s]);
     }
   }
}

int outdeg(int adj[][max],int x5,int n)
{
   int f,count=0;
   for(f=0;f<n;f++)
 { if(adj[x5][f]==1) count++;
      return(count);
 }
}

int indeg (int adj[][max],int x6,int n)
{
   int e, count =0;
   for(e=0;e<n;e++)
   { if(adj[e][x6]==1) count++;
         return(count);
   }
}


int a[20][20],q[20],visited[20],nr,f=-1,r=-1;

void bfs(int v)
{
   int i;
   for(i=0;i<nr;i++) // check all the vertices in the graph
  {
     if(a[v][i]!=0 && visited[i]==0) //adjacent to v and not visited
    {
      r=r+1;
      q[r]=i; // insert them into queue
      visited[i]=1; // mark the vertex visited
      printf("%d",i);
    }
  }
   f=f+1; //remove the vertex at front of the queue
   if(f<=r) //as long as there are elements in the queue
      bfs(q[f]); //perform bfs again on the vertex at front of the queue
}


 int a[20][20],q[20],visited[20],n;
void dfs(int v)
{
   int i;

   for(i=0;i<n;i++) // check all the vertices in the graph
  {
     if(a[v][i]!= 0 && visited[i] == 0) // adjacent to v and not visited
    {
       visited[i]=1; //mark the vertex visited
       printf("%d",i);
       dfs(i);
    }
  }
}

