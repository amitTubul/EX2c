#include "my_mat.h"
#include <stdio.h>
#include <limits.h>

#define T 10
#define inf INT_MAX

int mat[T][T];
int ans[T][T];
int temp[T][T];



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

    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < T; j++)
        {
            scanf("%d",&x);
            mat[i][j]=x;
            if (x==0 && i!=j)
            {
                ans[i][j] = inf;
                temp[i][j] = inf;
            }
            else
            {
                ans[i][j] = x;
                temp[i][j] = x;
            }
        }
    }

    for (int k = 0; k < T ; k++)
    {
        for (int i= 0; i < T ; i++)
        {
            for (int j = 0; j < T ; j++)
            {
                if(temp[i][k]==inf || temp[k][j]==inf || temp[i][k] + temp[k][j]==inf || temp[i][k] + temp[k][j]<0)
                {
                    ans[i][j]=temp[i][j];
                    continue;
                }
                ans[i][j] = min(temp[i][j], temp[i][k] + temp[k][j]);

            }
        }

        for (int i= 0; i < T ; i++)
        {
            for (int j = 0; j < T; j++)
            {
               temp[i][j]=ans[i][j];
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
    if(ans[i][j]!=inf && ans[i][j]!=0)
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
    if(ans[i][j]==inf || ans[i][j]==0)
    {
        printf("-1\n");
    }
    else
    {
        printf("%d\n", ans[i][j]);
    }
}





