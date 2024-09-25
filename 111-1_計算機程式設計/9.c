/*#include <stdio.h>
#include <string.h>

int main() {
    char s;
    int count = 0, word = 0;
    while ((s = getchar()) != '\n')
        if (s == ' ') {
            word = 0;
        }
        else if (word == 0) {
            word = 1;
            count++;
        }
    printf("%d", count);
	return 0;
}
*/

#include <stdio.h>

int main() {
    int i, n = 1, st = 1;
    char s[200];
    gets(s);
    for (i = 0; s[i]; i++)
        if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= 'a' && s[i] <= 'z' || s[i] == '-') {
            st = 1;
            printf("%c", s[i]);
        }
        else{
            if (st == 1) { 
                printf("\n");
                n++; 
            }
            st = 0;
        }
    printf("\n%d", n);
    return 0;
}