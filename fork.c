#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
#include<stdlib.h>
//here we are creaing a type of nested fork() by invoking fork() method.
void main()
 {
    int pid,pid1,pid2,pid3,pid4,pid5;
    printf("I am a process with pid %d which is A\n",(int)getpid());
   pid=fork();
   if(pid<0)
   {
    printf("The fork as failed");
   }
   if(pid==0)
   {
     printf("This is the child process of A with pid %d which is B\n",(int)getpid());
     pid1=fork();
     if(pid==0)
      {
        printf("This is a child process of B  with pid %d which is C\n",(int)getpid());
      }
    }
  else
    {
       pid3=fork();
      
        if(pid3==0)
         {
           printf("This is a child process of A with pid %d which is H\n",(int)getpid());  
           pid4=fork();
          if(pid4==0)
           {
             printf("This is a child process of H with pid %d which is I\n",(int)getpid());
            }
        }
        else
           {
             pid5=fork();
              if(pid5==0)
            {
              printf("This is a child process of H which is  k\n");
            }
         }
   }  

}
