#include <stdio.h>
#include <stdlib.h>

void displayRecords() {
	printf(
		"LIST OF RECORDS - mixed.txt\n"
		"NAME                 MARK\n"
		"====                 ====\n"
	);
	FILE* fp;
	fp = fopen("mixed.txt", "r");
	char buffer[20];	
	int leftSide = 0;

	while (!feof(fp)) {
		if (leftSide)
		fgets(buffer, 20, fp);
		buffer[18] = "\0";

		if (side) {
			//printf("%3s\n", buffer);
		}
		else {
			printf(".%-20s .\n", buffer);
		}
		side = !side;
	}

	fclose(fp);
}

int main() {
	displayRecords();
}