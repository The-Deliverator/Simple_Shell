#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(void)
{
	pid_t my_pid;

	my_pid = getpid();
	printf("%u\n", my_pid);
	printf("ppid = %u\n", getppid());
	return (1);
}
