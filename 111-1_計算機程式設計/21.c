/*#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
    int num1 = 0, num2 = 0, entry = 0, exit = 0;
    char arr[15][16]; // '\0'
    //輸入迷宮
    for (int i = 0; i < 15; i++) { 
        for (int j = 0; j < 16; j++) {
            scanf("%c", &arr[i][j]);
        }
    }
    //找入口
    for (int i = 0; i < 15; i++) {
        if (arr[i][0] == 'X') {
            num1++;
            entry = i;
        }
    }
    if (num1 != 1) {
        printf("This maze has no solution");
        return 0;
    }
    //找出口
    for (int i = 0; i < 15; i++) {
        if (arr[i][14] == 'X') {
            num2++;
            exit = i;
        }
    }
    if (num2 != 1) {
        printf("This maze has no solution");
        return 0;
    }



    return 0;
}

*/
#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>
int location[2] = { 0, 0 };
char maze[20][20];
int O = 0;
char orient = 'R';
int count = 0;

int main() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 16; j++) {
            scanf("%c", &maze[i][j]);
        }
    }
    for (int i = 0; i < 15; i++) {
        if (maze[i][0] == 'X')
            O = i;
    }
    location[0] = O;
    //move(location[2], maze[20][20], O, orient);
    do {
        //printf("Location: %d, %d, orient %c\n", location[0], location[1], orient);
        count++;
        switch (orient) {
        case 'U':
            if (maze[location[0]][location[1] + 1] == 'X') { //右邊
                //printf("[%d][%d] = %c\n", location[0], location[1] + 1, maze[location[0]][location[1] + 1]);
                orient = 'R';
                location[1]++;
            }
            else if (maze[location[0] - 1][location[1]] == 'X') { //上面
                //printf("[%d][%d] = %c\n", location[0] - 1, location[1], maze[location[0] - 1][location[1]]);
                orient = 'U';
                location[0]--;
            }
            else {
                orient = 'L';
            }
            break;
        case 'R':
            if (maze[location[0] + 1][location[1]] == 'X') { //下面
                //printf("[%d][%d] = %c\n", location[0] + 1, location[1], maze[location[0] + 1][location[1]]);
                orient = 'D';
                location[0]++;
            }
            else if (maze[location[0]][location[1] + 1] == 'X') { //右邊
                //printf("[%d][%d] = %c\n", location[0], location[1] + 1, maze[location[0]][location[1] + 1]);
                orient = 'R';
                location[1]++;
            }
            else {
                orient = 'U';
            }
            break;
        case 'D':
            if (maze[location[0]][location[1] - 1] == 'X') { //左邊
                //printf("[%d][%d] = %c\n", location[0], location[1] - 1, maze[location[0]][location[1] - 1]);
                orient = 'L';
                location[1]--;
            }
            else if (maze[location[0] + 1][location[1]] == 'X') { //下面
                //printf("[%d][%d] = %c\n", location[0] + 1, location[1], maze[location[0] + 1][location[1]]);
                orient = 'D';
                location[0]++;
            }
            else {
                orient = 'R';
            }
            break;
        case 'L':
            if (maze[location[0] - 1][location[1]] == 'X') { //上面
                //printf("[%d][%d] = %c\n", location[0] - 1, location[1], maze[location[0] - 1][location[1]]);
                orient = 'U';
                location[0]--;
            }
            else if (maze[location[0]][location[1] - 1] == 'X') { //左邊
                //printf("[%d][%d] = %c\n", location[0], location[1] - 1, maze[location[0]][location[1] - 1]);
                orient = 'L';
                location[1]--;
            }
            else {
                orient = 'D';
            }
        }
        if (location[0] == O && location[1] == 0)
            break;
    } while (location[1] != 14);

    if (location[1] == 14)
        printf("This maze has a solution");
    if (location[0] == O && location[1] == 0)
        printf("This maze has no solution");

    return 0;
}