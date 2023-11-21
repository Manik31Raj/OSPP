#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>
void* thread_function(void* data);
int main()
 {
   pthread_t thread_1;
   printf("Creating the thread \n");
   pthread_create(&thread_1,NULL,thread_function,NULL);
   for(int a=0;a!=5;a++)
    {
     printf("From main function \n");
     sleep(3);
    }
   return 0;
 }
void* thread_function(void* n)
 {
   for(int a=0;a!=5;a++)
    {
     printf("From main thread \n");
     sleep(3);
    }   
   printf("End of thread\n");
   pthread_exit(n);
 }   
