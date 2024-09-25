#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
#include <string.h>
int main() {
    int t = 0;
    scanf("%d", &t);
    while (t--) {
        char str[205];
        scanf("%s", &str);
        int n = strlen(str);
        int s = 0, c = 1;
        if (str[0] == 'O')
            s = 1;
        for (int i = 1; i < n; i++) {
            if (str[i] == 'O') {
                if (str[i] == str[i - 1])
                    c++;
                    s += c;
            }
            else
                c = 1;
        }
        printf("%d\n", s);   
    }
    return 0;
}
