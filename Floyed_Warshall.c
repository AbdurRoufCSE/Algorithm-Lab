#include<stdio.h>
#include<limits.h>


#define INF INT_MAX

int n = 4;

int min(int a, int b)
{
    if(a<b)
        return a;
    else
        return b;
}

void all_pair_shortest_path(int graph[n][n])
{
    int dist[n][n],i,j,k;

    for(i =0; i<n ; i++)
    {
        for(j =0; j<n ; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }


    for(k =0 ; k<n ; k++)
    {
        printf("\nVia -- %d \n:",(k+1));
        for(i =0 ; i<n ; i++)
        {
            for(j =0; j<n ; j++)
            {
                if(dist[i][k] == INF || dist[k][j] == INF)
                {
                    dist[i][j] = dist[i][j];
                }
                else
                {
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }

                if(dist[i][j] == INF)
                {
                    printf("\tINF");
                }
                else
                    printf("\t%d",dist[i][j]);
            }
            printf("\n");
        }
    }
}

int main()
{
    int graph[4][4] =
    {
        {0,3,INF,7},
        {8,0,2,INF},
        {5,INF,0,1},
        {2,INF,INF,0}
    };


    all_pair_shortest_path(graph);
    return 0;
}
