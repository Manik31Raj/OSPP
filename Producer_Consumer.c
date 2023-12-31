#include<stdio.h>
#include<stdlib.h>
int mutex=1,full=0,empty=3,x=0;
int wait(int s)
 {
   return(--s);
  }
int signal(int s)
 {
  return(++s);
 }     
void producer()
{
	--mutex;
	++full;
	--empty;
	x++;
	printf("\nProducer produces item %d\n",x);
	++mutex;
}

void consumer()
{
	--mutex;
	--full;
	++empty;
	printf("\nConsumer consumes item %d\n",x);
	x--;
	++mutex;
}
 int main()
  {
   int n;
   void producer();
   void consumer();
   int wait(int);
   int signal(int);
   printf("\n1. Producer \n2. Consumer \n3. Exit \n");
   while(1)
    {
     printf("Enter your Choice : ");
     scanf("%d",&n);
     switch(n)
      {
        case 1:
         if((mutex==1)&&(empty!=0))
          {
           producer();
          }
         else
          {
           printf("\nBuffer is full!!\n"); 
          }
        break;
        case 2:
         if((mutex==1)&&(full!=0))
          {
           consumer();
          }
         else
          {
           printf("\nBuffer is empty!!\n"); 
          }
        break;             
        case 3:
         exit(0);
         break;
       }
     } 
   return 0;
 }             
