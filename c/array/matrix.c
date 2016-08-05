#include<malloc.h>

int main()
{
    int R=3, C=4;

    int *arr=(int *)malloc(R * C * sizeof(int));

    int i,j,count=0;

    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            *(arr + i*C + j)= ++count;

        }
    }


    for(i=0;i<R;i++)
    {
        for(j=0;j<C;j++)
        {
            printf("%d   " ,*(arr + i*C + j));
        }
        printf("\n");
    }
}
