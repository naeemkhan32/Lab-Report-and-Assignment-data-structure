
/*

#include<stdio.h>  
int main()
{   

int n,i,m=0,flag=0;    

printf("Enter the number to check prime:");    

scanf("%d",&n);    

m=n/2;    

for(i=2;i<=m;i++)    

{    

if(n%i==0)    

{    

printf("Number is not prime");    

flag=1;    

break;    

}    

}    

if(flag==0)    

printf("Number is prime");     

return 0;  

 }    

*/


/*

#include <stdio.h>

#include <conio.h>

void main()

{

	int num,res=0;

	clrscr();

	printf("\nENTER A NUMBER: ");

	scanf("%d",&num);

	res=prime(num);

	if(res==0)

		printf("\n%d IS A PRIME NUMBER",num);

	else

		printf("\n%d IS NOT A PRIME NUMBER",num);

	getch();

}

int prime(int n)

{

	int i;

	for(i=2;i<=n/2;i++)

	{

		if(n%i!=0)

			continue;

		else

			return 1;

	}

	return 0;

}

*/


#include<stdio.h>
int main()
{
    int first = 0,second = 0,fibo,n,count;
    printf("Enter range ");
    scanf("%d ",&n);

    while(count<n){

        if(count<=1){
            fibo = count;
        }

        else{
            fibo = first + second;
            first = second;
            second = fibo;

        }
        printf("%d ",fibo);
        count++;
    }

    return 0;
}







