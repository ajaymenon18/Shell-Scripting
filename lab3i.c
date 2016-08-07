#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<unistd.h>
void main()
 {
    printf("I am a process with pid %d\n",(int) getpid());
  }
/* On compilation we get different process id's because whenever we execute and run the program we get different processes in the memory area hence on creation of a new process a new pid will be allocated.*/
