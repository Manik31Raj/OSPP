#include<stdio.h>
int main()
 {
   FILE *fptr;
   char name[20];
   int age;
   float salary;
   fptr=fopen("emp.txt","w");
   if(fptr==NULL)
     {
      printf("File does not exists \n");
      return 0;
     }
   else
    {
      printf("Enter the name : ");
      scanf("%s",name);
      fprintf(fptr,"NAME = %s\n",name);
      printf("Enter the age : ");
      scanf("%d",&age);
      fprintf(fptr,"AGE = %d\n",age);
      printf("Enter the salary : ");
      scanf("%f",&salary);
      fprintf(fptr,"SAlARY = %.2f\n",salary);
      fclose(fptr);
    }
 }        
