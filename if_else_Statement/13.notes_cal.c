#include<stdio.h>

int main()
{
    int amount=0,c2000=0,c500=0,c200=0,c100=0,c50=0,c20=0,c10=0,c5=0,c2=0,c1=0;

    printf("\nEnter amount: ");
    scanf("%d",&amount);

    printf("\n\n ************************************************** \n ");

    printf("\t\t--------------------\n\t\t  Notes Calculator \n\t\t--------------------");

    if(amount>=2000)
    {
        c2000 = amount/2000;
        amount-= c2000*2000;

        printf("\n\n\t\tNotes of 2000: %d\n",c2000);

    }
    if(amount>=500)
    {
        c500 = amount/500;
        amount-= c500*500;

        printf("\n\t\tNotes of 500 : %d\n",c500);

    }
    if(amount>=200)
    {
        c200 = amount/200;
        amount-= c200*200;

        printf("\n\t\tNotes of 200 : %d\n",c200);

    }
    if(amount>=100)
    {
        c100 = amount/100;
        amount-= c100*100;

        printf("\n\t\tNotes of 100 : %d\n",c100);

    }
    if(amount>=50)
    {
        c50 = amount/50;
        amount-= c50*50;

        printf("\n\t\tNotes of 50  : %d\n",c50);

    }
    if(amount>=20)
    {
        c20 = amount/20;
        amount-= c20*20;

        printf("\n\t\tNotes of 20  : %d\n",c20);

    }
    if(amount>=10)
    {
        c10 = amount/10;
        amount-= c10*10;

        printf("\n\t\tNotes of 10  : %d\n",c10);

    }
    if(amount>=5)
    {
        c5 = amount/5;
        amount-= c5*5;

        printf("\n\t\tNotes of 5   : %d\n",c5);

    }
    if(amount>=2)
    {
        c2 = amount/2;
        amount-= c2*2;

        printf("\n\t\tCoin of 2    : %d\n",c2);

    }
    if(amount>=1)
    {
        c1 = amount/1;
        amount-= c1*1;

        printf("\n\t\tCoin of 1    : %d\n",c1);

    }

    printf("\n\n ************************************************** \n ");

    return 0;
}
