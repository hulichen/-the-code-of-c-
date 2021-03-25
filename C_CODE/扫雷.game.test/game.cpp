#include "game.h"
void Menu() {
	printf("###################################\n");
	printf("### 1.开始游戏        2. 退出 #####\n");
	printf("###################################\n");
	printf("请输入：");
}

void SetMines(char board[][COL],int row,int col){
	int num = NUMS;
	while (num) {
		int x = rand() % 10 + 1;
		int y = rand() % 10 + 1;
		if (board[x][y] == '0') {
			board[x][y] = '1';
			num--;
		}	
	}
}

void ShowBoard(char board[][COL], int row, int col) {
	printf("  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 |10 |");
	printf("\n-------------------------------------------\n");
	for (int i = 1; i < ROW - 1; i++) {
		printf("%d |", i);
		for (int j = 1; j < COL - 1; j++) {
			printf("%2c |",board[i][j]);
		}
		printf("\n-------------------------------------------\n");
	}

}

int  GetNums(char board[][COL], int row, int col,int x,int y) {
	int num = 0;
	num = board[x - 1][y - 1] + board[x - 1][y] + board[x - 1][y + 1]\
		+ board[x][y - 1] + board[x][y + 1] \
		+ board[x + 1][y - 1] + board[x + 1][y] + board[x + 1][y + 1] - 8 * 48;
	return num;
}

void Game() {
	srand((unsigned long)time(NULL));
	char show_board[ROW][COL];
	char mine_board[ROW][COL];
	memset(show_board, '*', sizeof(show_board));
	memset(mine_board, '0', sizeof(mine_board));

	SetMines(mine_board, ROW, COL);
	int count = (ROW - 2) * (COL - 2) - NUMS;
	int x = 0;
	int y = 0;

	do{
		system("cls");
		ShowBoard(show_board, ROW, COL);
		printf("请输入坐标#\n");
		scanf("%d %d", &x, &y);
		if (x < 1 || x>ROW-2 || y < 1 || y>COL-2) {
			printf("坐标越界，重新输入\n");
			Sleep(1000);
			continue;
		}
		if (show_board[x][y]!='*') {
			printf("该位置已经探测过，无雷，重新输入\n");
			Sleep(1000);
			continue;
		}
		if (mine_board[x][y] == '0') {
			show_board[x][y] = GetNums(mine_board, ROW, COL, x, y) + 48;
			continue;
		}
		if (mine_board[x][y] == '1') {
			printf("踩雷！游戏结束!\n");
			ShowBoard(mine_board, ROW, COL);
			break;
		}
		count--;
	} while (count);	
	if (count == 0) {
		system("cls");
		ShowBoard(show_board, ROW, COL);
		printf("厉害了，通关！\n");
	}
}





