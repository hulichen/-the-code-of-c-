#include "contact.h"

static void Menu()
{
	printf("###############################\n");
	printf("# 1. add   2. del   3. search #\n");
	printf("# 4. mod   5. show  6. clear  #\n");
	printf("# 7. sort           0. exit   #\n");
	printf("###############################\n");
	printf("Please Select:> ");
}

int main()
{
	int quit = 0;
	int select = 0;
	contact_t* ct = NULL;
	InitContact(&ct);

	while (!quit) {
		Menu();
		scanf("%d", &select);
		switch (select) {
		case 1:
			AddPersonToContact(&ct);
			break;
		case 2:
			DelPersonContact(ct);
			break;
		case 3:
			SearchContact(ct);
			break;
		case 4:
			ModContact(ct);
			break;
		case 5:
			ShowContact(ct,-1);//参数为-1则显示全部
			break;
		case 6:
			ClearContact(ct);
			break;
		case 7:
			SortContact(ct);
			break;
		default:
			quit = 1;
			break;
		}
	}
	printf("byebye!\n");
	system("pause");
	return 0;
}