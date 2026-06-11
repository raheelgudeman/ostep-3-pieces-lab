#include <stdio.h>
#include <pthread.h>

void* print_message(void* arg) {
	printf("Hello from a thread!\n");
	return NULL;
}

int main() {
	pthread_t thread;

	printf("=== OSTEP Concurrency Lab ===\n");

	pthread_create(&thread, NULL, print_message, NULL);
	pthread_join(thread, NULL);

	printf("Main program finished.\n");

	return 0;
}
