#include "game.h"



int main() 
{
int quit = 0;
	while(!quit) {
		Menu();
		int select = 0;
		scanf("%d", &select);
		switch (select) {
		case 1:
			printf("成功进入游戏\n");
			Game();
			break;
		case 2:
			printf("退出\n");
			quit = 1;
			break;
		default:
			printf("输入错误，重新输入\n");
			break;
		}
	}
	printf("ByeBye!\n");
	/*system("pause");*/
	return 0;
}