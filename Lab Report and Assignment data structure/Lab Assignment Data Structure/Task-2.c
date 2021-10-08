#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int r1,c1,c2,r2,i,j,k,sum=0;
    float count=0,average;
    printf("ENTER ROW AND COLUM FOR A MATRIX : ");
    scanf("%d %d",&r1,&c1);
    printf("ENTER ROW AND COLUM FOR B MATRIX : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("\nERORR !! ENTER AGAIN ROW AND COLUM FOR MATRIX A & B :");
        printf("ENTER ROW AND COLUM FOR A MATRIX : ");
        scanf("%d %d",&r1,&c1);
        printf("ENTER ROW AND COLUM FOR B MATRIX : ");
        scanf("%d %d",&r2,&c2);

    }


    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c1 ; j++)
        {
            printf("\nA[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }


     for(i=0 ; i<r2 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            printf("\nB[%d][%d] = ",i,j);
            scanf("%d",&b [i][j]);
        }
        printf("\n");
    }

    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            for(k=0 ; k<c1 ; k++)
            {
                 sum=sum + a[i][k]*b[k][j];
            }
            c[i][j]=sum;
            sum=0;

        }
    }

    printf("A =\n");
    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c1 ; j++)
        {
            printf("%d  ",a[i][j]);

        }
        printf("\n");
    }


    printf("\n \nB =\n");
    for(i=0 ; i<r2 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            printf("%d  ",b[i][j]);

        }
        printf("\n");
    }


    printf("\n\nC(A X B) =\n");
    for(i=0 ; i<r1 ; i++)
    {
        for(j=0 ; j<c2 ; j++)
        {
            printf("%d  ",c[i][j]);

        }
        printf("\n");
    }

    for(int i=0 ; i<c2; i++)
    {
        for(int j=0 ; j<r1 ; j++)
        {
            count+=c[i][j];
        }
    }

    average = count/(r1*c2);

    printf("%.2f\n",average);
    return 0 ;
}

