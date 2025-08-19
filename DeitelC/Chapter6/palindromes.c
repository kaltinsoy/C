 #include <stdio.h>
 #include <string.h>

 int palindromes(const char *c);
 int testPal(const char *c, int start, int end);

 int palindromes(const char *c) {
	 int length = 0;
	 while (c[length] != '\0') {
		 length++;
	 }

	 return testPal(c, 0, length - 1);
 }

 int testPal(const char *c, int start, int end) {
	 int test = 1;
	 
	 if(start >= end) {
		 return test;
	 }

	 if(c[start] != c[end]) {
		 return !test;
	 }

	 return testPal(c, ++start, --end);

	 return test;
 }

 int main (void) {
	 char str1[] = "radar";
	 char str2[] = "A man, a plan, a canal: Panama";
	 char str3[] = "hello";

		 printf("%s is %s a palindrome\n", str1, palindromes(str1) ? "" : "not");
		 printf("%s is %s a palindrome\n", str2, palindromes(str2) ? "" : "not");
		 printf("%s is %s a palindrome\n", str3, palindromes(str3) ? "" : "not");
	 return 0;
 }
