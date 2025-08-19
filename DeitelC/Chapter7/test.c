#include <stdio.h>

void copy1 (char * const s1, const char * const s2);
void copy2 (char * s1, const char * s2);

int main(void)
{
	char str1[10];
	char *str2 = "Hello"; //str2 points a string
	copy1(str1, str2);
	puts(str1);

	char str3[10];
	char str4[] = "Goodbye!"; //str4 creates an array containing string
	copy2(str3, str4);
	puts(str4);

	return 0;
}

// array notation
void copy1 (char * const s1, const char * const s2) {
	for (size_t i = 0; (s1[i] = s2[i]) != '\0' ; i++) {
		;
	} 
}

// pointer notation
void copy2 (char * s1, const char * s2) {
	for (; (*s1 = *s2) != '\0'; ++s1, ++s2) {
		;
	} 
}
