#include "game.h"
int main1() {       //ɨ��
	int quit = 0;
	int select = 0;
	while (!quit) {
		Menu();
		scanf("%d", &select);
		
		switch (select) {
		case 1:
			Game();
			break;
		case 2:
			break;
		default:
			printf("�������,����\n");
			break;
		}
	}

	printf("��Ϸ���� , �ݰ�!\n");
	system("pause");
	return 0;
}