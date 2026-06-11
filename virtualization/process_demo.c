#include <stdio.h>
#include <unistd.h>

int main() {
	printf("=== OSTEP Virtualization Lab ===\n");
	printf("My PID is: %d\n", getpid());
	printf("My Parent PID is: %d\n", getppid());

	return 0;
}
