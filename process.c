

#include <stdio.h>
#include <unistd.h>

int main()
{
    int child_process_id, parent_process_pid;

    child_process_id = getpid(); 
    parent_process_pid = getppid(); 

    printf("Process ID: %d\n", child_process_id);
    printf("Parent Process ID: %d\n", parent_process_pid);

    return 0;
}
