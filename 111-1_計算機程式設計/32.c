/*
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

#define LEN_NAME 50

struct student {
    // Student name
    char name[LEN_NAME];

    // English score
    int english;

    // Math score
    int math;
};

int main() {
    printf("Hello world!");
    return 0;
}
*/
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student s;

struct student {
    char name[50];
    int english;
    int math;
};

int main() {
    s n;
    int T, length = 0;
    scanf("%d\n", &T);
    while (T--) {
        char str[50] = { '\0' };
        gets(str);
        sscanf(str, "%[^,],%d,%d", &n.name, &n.english, &n.math);
        printf("%s: %d, %d\n", n.name, n.english, n.math);
    }
    return 0;
}