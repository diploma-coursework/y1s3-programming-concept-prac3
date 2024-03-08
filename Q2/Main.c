#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE* fp;
	int numOfLetters = 0, numOfVowels = 0, numOfConsonants = 0,
		numOfBlanks = 0, numOfWords = 0, numOfCharacters = 0;

	fp = fopen("text.txt", "r");

	while (1) {
		char c = fgetc(fp);
		numOfCharacters++;
		if (feof(fp)) break;

		if (isalpha(c)) {
			numOfLetters++;

			tolower(c);
			if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
				numOfVowels++;
			}
			else numOfConsonants++;
			continue;
		} 

		if (c == ' ') numOfBlanks++;
	}
	fclose(fp);

	numOfWords = numOfBlanks + 1;

	printf(
		"Total number of characters: %d\n"
		"Number of letters         : %d\n"
		"Number of vowels          : %d\n"
		"Number of consonants      : %d\n"
		"Number of blanks (spaces) : %d\n"
		"Approx no. of words       : %d\n",
		numOfCharacters, numOfLetters, numOfVowels, numOfConsonants, numOfBlanks,
		numOfWords
	);
}