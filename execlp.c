#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
main()
{
 int pid;
 if((pid=fork()<0))
 {
   exit(1);
 }
if(pid==0)
{
 printf("The value of pid is %d \n",pid);
  execlp("/bin/ls","ls",NULL);
 exit(1);
}
}// The execlp is a variable argument function it takes two constant char*  arguments and any other arguments given//
//In this case the file "/bin/ls" gives the executable that you want to execute and ls is the string which we want to appear as the arg[0].In this case on executing the program this will list out the pid and also all the files present in the current working directory.The rest are additional arguments given if no arguments are given then use null
