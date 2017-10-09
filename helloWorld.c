#include <stdio.h>
#include <stdlib.h>

int message1 ();
int message2 ();

int main () {
	message1 ();
	message2 ();
	return EXIT_SUCCESS;
}

int message1 () {
	printf ("Hello World!!!\n");
	return 0;
}

int message2 () {
	printf ("learning git!!!\n");
	return 0;
}
