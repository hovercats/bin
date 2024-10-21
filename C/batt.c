#include <stdio.h>

int
main()
{
	FILE *fptr;

	fptr = fopen("/sys/class/power_supply/BAT1/capacity", "r");
	char capacity[10];
	fgets(capacity, 10, fptr);
	printf("%s", capacity);
	fclose(fptr);

	fptr = fopen("/sys/class/power_supply/BAT1/status", "r");
	char status[10];
	fgets(status, 10, fptr);
	printf("%s", status);
	fclose(fptr);
	return 0;
}
