#include "game.h"
int main1() {       //É¨À×
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
			printf("ÊäÈë´íÎó,ÖØÊä\n");
			break;
		}
	}

	printf("ÓÎÏ·½áÊø , °İ°İ!\n");
	system("pause");
	return 0;
}