#include  <stdio.h>
#include  <string.h>
#include  <sys/types.h>

#define   MAX_COUNT  200
#define   BUF_SIZE   100

void  main(void)
{
     pid_t  pid;
     pid_t ptd;
     int    i;
     char   buf[BUF_SIZE];

     ptd = fork();
     pid = getpid();
     for (i = 1; i <= MAX_COUNT; i++) {
          sprintf(buf, "This line is from pid %d, value = %d, fork Value = %d\n", pid, i, ptd);
          write(1, buf, strlen(buf));
     } 
}