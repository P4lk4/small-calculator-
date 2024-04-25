#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//p4lk4
//Este es un pequeño proyecto, realmente no tiene mucho sentirlo subirlo pero aqui esta///This is a small project, it doesn't really make much sense to upload it but here it is
//22/4/24

//Sum of two numbers
int sum ()
{
    presentation ();
    int a,b,c;
    printf("Give me two numbers to add them:\n");
    scanf("%d%d",&a,&b);
    c=a+b;
    return c;
}

//presentation
void presentation ()
{

    printf("==========================\n");
    printf("P4lk4 small calculator\n");
    printf("==========================\n\n\n");

}

//power
int power ()
{
    presentation ();
    int base,exp,i,power=1,d;
    printf("give me a base and an exponent:\n");
    scanf("%d%d",&base,&exp);
    for (i=0;i<exp;i++)
        power=power*base;
        d=power;
    return d;
}
//multiplication
void multipli()
{
    presentation ();
    int num,i;
    printf("Give me a number to multiply up to 10:\n");
    scanf("%d",&num);
    i=1;
    while (i<=10)
    {
        printf("%d*%d=%d\n",num,i,num*i);
        i++;
    }

}
//Square root
float square ()
{
    presentation ();
    float n;
    float r;
    printf ("Give me a number\n");
    scanf("%f",&n);
    n= sqrt(n);
    r=n;
    return r;

}
int main()
{

    int opc;
    int c;
    int d;
    float r;
    presentation ();
    do
    {
    printf("Enter a number to choose a section\n\n");
    printf("\nSum of two numbers = '1'\nPowers = '2' \nmultiplication = '3'\nSquare root ='4' \nDigit '5' to exit\n");
    scanf("%d",&opc);
    system("CLS");
    switch(opc)
    {
        case 1: c=sum ();
                printf("The sum is equal to = %d\n",c);
                break;
        case 2: d=power ();
                printf("The power is  = %d\n",d);
                break;
        case 3: multipli ();
                break;
        case 4: r=square ();
                printf ("The square root is = %f\n",r);
                break;

    }
    system ("PAUSE");
    system ("CLS");
    }while(opc!=5);

    return 0;
}
