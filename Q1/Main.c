#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *fp;
	int sum = 0, i = 0;
	double average = 0;

	fp = fopen("numbers.txt", "r");
	int buffer;

	while (fscanf(fp, "%d", &buffer) != EOF) {
		sum += buffer;
		i++;
	}

	average = (double) sum / i;
	fclose(fp);

	fp = fopen("results.txt", "w");
	fprintf(fp, "%d %.2f", sum, average);
	fclose(fp);

	printf("Process completed\n");
}