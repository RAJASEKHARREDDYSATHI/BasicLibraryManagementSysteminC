#include<stdio.h>
int main()
{
int id,dd,mm,yyyy,n,book,y;
printf("enter the student 10 digit ID no\n");
scanf("%d",&id);
printf("enter any one of the book number(Algorithms =1;data structures=2;computers=3;c=4;cpp=5;java=6;python=7;oracle=8;probability=9;statistics=10)\n");         //taken 10 books as example with an indication
scanf("%d",&book);
if(book==1)
 printf("AVAILABLE,in row 1\n");
 else if(book==2)
 printf("AVAILABLE,in row 2\n");
 else if(book==3)
 printf("AVAILABLE,in row 3\n");
 else if(book==4)
 printf("AVAILABLE,in row 4\n");
 else if(book==5)
  printf("AVAILABLE,in row 5\n");
 else if(book==6)
 printf("AVAILABLE,in row 6\n");
 else if(book==7)
  printf("AVAILABLE,in row 7\n");
  else if(book==8)
 printf("AVAILABLE,in row 8\n");
 else if(book==9)
printf("AVAILABLE,in row 9\n");
 else if(book==10)
printf("AVAILABLE,in row 10\n");
else{
printf("NOT AVAILABLE");}
if(book<=10)  {
 printf("enter the value of issue date in dd,mm,yyyy");
 scanf("%d%d%d",&mm,&dd,&yyyy);  }
 printf("enter the no.of days does he/she remain the book");
scanf("%d",&n);
  if(n>30){
    y=(n-30);
    printf("fine=%d rupees",y*2);}
    else {
    printf("THANKYOU");
    } return 0;
}