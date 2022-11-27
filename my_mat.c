#include "my_mat.h"
#include <stdio.h>

int mat[10][10];
int ans[10][10];

int min(int a, int b)
{
    if (a>b)
    {
        return b;
    }
    return a;
}

void A()
{
    int x;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            scanf("%d",&x);
            mat[i][j]=x;
        }
    }
    for (int k = 0; k <10 ; k++)
    {
        for (int i= 0; i <10 ; i++)
        {
            for (int j = 0; j <10 ; j++)
            {
                ans[i][j]=min(mat[i][j],mat[i][k]+mat[k][j]);
            }
        }
    }
}



void B()
{
    int i;
    int j;

    scanf("%d",&i);
    scanf("%d",&j);

    if(mat[i][j]!=0)
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
}
void C()
{
    int i;
    int j;
    scanf("%d",&i);
    scanf("%d",&j);
    if(ans[i][j]==0)
    {
        printf("-1\n");
    }
    printf( "%d\n",ans[i][j]);
}





