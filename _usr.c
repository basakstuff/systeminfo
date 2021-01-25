#include <stdio.h>
#include <linux/kernel.h>
#include <sys/syscall.h>
#include <unistd.h>

int main()
{  
    printf("Invoking 'systemifo' system call");
         
    long int ret_status = syscall(551); 
         
    if(ret_status == 0) 
         printf("System call 'systeminfo' executed correctly. Use dmesg to check processInfo\n");
    
    else 
         printf("System call 'systeminfo' did not execute as expected\n");
          
     return 0;
}
