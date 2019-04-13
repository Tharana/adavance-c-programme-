#include<stdio.h>
int main()
{


int a,b ,tot = 0,tot2 = 0;
char c1;
do{

printf("Enter your book code:");
scanf("%d" , &a);



if (a == 100){
    printf("Enter Quntity:");
    scanf("%d" , &b);

    tot = 350 * b;}
else if (a == 200){
    printf("Enter Quntity:");
    scanf("%d" , &b);

    tot = 950 * b;}
else if (a == 300){
    printf("Enter Quntity:");
    scanf("%d" , &b);

    tot = 100 * b;}
else if (a == 101){
    printf("Enter Quntity:");
    scanf("%d" , &b);

    tot = 1500 * b;}
else if (a == 102){
    printf("Enter Quntity:");
    scanf("%d" , &b);

    tot = 500 * b;}
else
    printf("invalide book code \n");



printf("do you need another book:");
scanf("%s", &c1);

tot2 = tot2+tot;

}while(c1 == 'Y' || c1 == 'y');

   if (c1 == 'n')
       printf("totol amount is %d" ,tot2);

  return 0;
}



