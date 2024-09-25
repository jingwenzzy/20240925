#pragma warning(disable : 4996)
#pragma warning(disable : 6031)
#include <stdio.h>

int main() {
	int n = 0;
	int i = 0, j = 0;
	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		for (j = 1; j <= n - i; j++) {
			printf(" ");
		}
		switch (i) {
			case 1: printf("A"); break;
			case 2: printf("BBB"); break;
			case 3: printf("CCCCC"); break;
			case 4: printf("DDDDDDD"); break;
			case 5: printf("EEEEEEEEE"); break;
			case 6: printf("FFFFFFFFFFF"); break;
			case 7: printf("GGGGGGGGGGGGG"); break;
			case 8: printf("HHHHHHHHHHHHHHH"); break;
			case 9: printf("IIIIIIIIIIIIIIIII"); break;
			case 10: printf("JJJJJJJJJJJJJJJJJJJ"); break;
			case 11: printf("KKKKKKKKKKKKKKKKKKKKK"); break;
			case 12: printf("LLLLLLLLLLLLLLLLLLLLLLL"); break;
			case 13: printf("MMMMMMMMMMMMMMMMMMMMMMMMM"); break;
			case 14: printf("NNNNNNNNNNNNNNNNNNNNNNNNNNN"); break; 
			case 15: printf("OOOOOOOOOOOOOOOOOOOOOOOOOOOOO"); break;
			case 16: printf("PPPPPPPPPPPPPPPPPPPPPPPPPPPPPPP"); break;
			case 17: printf("QQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQQ"); break;
			case 18: printf("RRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRRR"); break;
			case 19: printf("SSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSSS"); break; 
			case 20: printf("TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"); break; 
			case 21: printf("UUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUUU"); break;
			case 22: printf("VVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVVV"); break;
			case 23: printf("WWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWWW"); break;
			case 24: printf("XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX"); break;
			case 25: printf("YYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYYY"); break;
			default : printf("ZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZZ"); break;
		}
	
		printf("\n");
	}

	return 0;
}