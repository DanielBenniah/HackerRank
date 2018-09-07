#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
void string_reverse (char* a) {
	for (int i = 0; i < strlen(a) / 2; i++) {
		char temp = a[i];
		a[i] = a[strlen(a) - i - 1];
		a[strlen(a) - i - 1] = temp;
	}
}
char* multiply_by_2 (char* a) {
    int number = 2;
	int carry = 0;
    for (int i = 0; i < strlen(a); i++) {
    	printf ("a[%d] = %c\n", i, a[i]);
        number *= (a[i] - '0');
        printf ("number = %d\n", number);
        carry = number / 10;
        printf ("carry = %d\n", carry);
        a[i] = (char)((number % 10) + '0');
        if (carry != 0) {
        	if (a[i + 1] == '\0') {
        		a[i + 1] = '0';
        		a[i + 1] = (char)((a[i + 1] - '0') + carry + '0');
        		break;
        	}
        	else
        		a[i + 1] = (char)((a[i + 1] - '0') + carry + '0');
        }
    }
    string_reverse (a);
    printf ("Returned a = \n");
    for (int i = 0; i < strlen(a); i++)
    	printf ("%c", a[i]);
    printf ("\n");
    return a;
}
int main() {
    int n;
    scanf ("%d", &n);
    
    char* arr = malloc (sizeof(char) * 100000);
    for (int i = 0; i < 100000; i++)
        arr[i] = '\0';
    arr[0] = '2';
    while (n > 0) {
    	printf ("n = %d\n", n);
        multiply_by_2(arr);
        n--;
    }
    for (int i = strlen(arr) - 1; i >= 0; i--)
    	printf ("%c", arr[i]);
    return 0;
}

