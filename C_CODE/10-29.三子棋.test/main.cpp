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
			printf("�ɹ�������Ϸ\n");
			Game();
			break;
		case 2:
			printf("�˳�\n");
			quit = 1;
			break;
		default:
			printf("���������������\n");
			break;
		}
	}
	printf("ByeBye!\n");
	/*system("pause");*/
	return 0;
}