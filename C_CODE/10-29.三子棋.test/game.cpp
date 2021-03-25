#include "game.h"
void Menu() {
	printf("#######################################\n");
	printf("select: 1(游戏)       select: 2（退出）\n");
	printf("#######################################\n");
}


int ShunXu() {
	printf("来猜数字决定谁先手，电脑随机生成0或1\n");
	printf("玩家猜中则玩家先手，否则机器先手,一局定胜负\n");
	int num = 0;
	srand((unsigned long)time(NULL));
	int randnum = rand() % 2;
	int flag = 1;
	while (flag) {
		printf("输入0或1\n");
		scanf("%d", &num);
		if (num != 0 && num != 1) {
			printf("输入错误，重输\n");
			continue;
		}
		printf("test\n");
		if (num == randnum) {
			flag = 0;
			return 1;
		}
		flag = 0;
		return 0;
	}

}

void DrawBoard(char board[][COL], int row, int col) {
	printf("  | 1 | 2 | 3 |\n");
	printf("---------------\n");
	for (int i = 0; i < row;i++) {
		printf("  |");
		for (int j = 0; j < col; j++) {
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		printf("---------------\n");
	}
}

void PlayMove(char board[][COL], int row, int col) {

	while (1) {
		printf("请输入坐标\n");
		int x = 0;
		int y = 0;
		scanf("%d %d", &x, &y);
		if (x < 0 || x>row+1|| y < 0 || y>col+1) {
			printf("输入错误，超出边界，重新输入\n");
			continue;
		}
		if (board[x-1][y-1] != ' ') {
			printf("输入错误，重新输入\n");
			continue;
		}
		
		else {
			board[x-1][y-1] = 'X';
			break;
		}
	}
}

char Judge(char board[][COL], int row, int col)
{      //'X', 'O', 'N', 'P'
	for (int i = 0; i < row; i++) {
		if (board[i][0] == board[i][1] && \
			board[i][1] == board[i][2] && \
			board[i][0] != ' ') {
			return board[i][0];
		}
		if (board[0][i] == board[1][i] && \
			board[1][i] == board[2][i] && \
			board[0][i] != ' ') {
			return board[0][i];
		}
	}
		if (board[0][0] == board[1][1] && \
			board[1][1] == board[2][2] && \
			board[0][0] != ' ') {
			return board[0][0];
		}
		if (board[0][2] == board[1][1] && \
			board[1][1] == board[2][0] && \
			board[1][1] != ' ') {
			return board[1][1];
		}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < col; j++) {
				if (board[i][j] == ' ') {
					return 'N';
				}
			}
		}
		return 'P';
}

void ComputerMove(char board[][COL], int row, int col)
{	
	while (1) {
		srand((unsigned long)time(NULL));
		int x = rand() % 3;
		int y = rand() % 3;		
		if (x < 0 || x>2 || y < 0 || y>2) {
			continue;
		}
		if (board[x][y] != ' ') {
			continue;
		}
		else {
			board[x][y] = 'O';
			break;
		}
	}
}

void Game()
{
	char board[ROW][COL];
	for (int i = 0; i < ROW; i++) {
		for (int j = 0; j < COL; j++) {
			board[i][j] = ' ';
		}
	}
	char win = '\0';
	if (ShunXu()) {
		printf("ren先手\n");
		while (1) {
			// shunxu(); 判断谁先走  返回值为0  机器走       1  人走   
			DrawBoard(board, ROW, COL);
			PlayMove(board, ROW, COL);
			DrawBoard(board, ROW, COL);
			win = Judge(board, ROW, COL);
			if (win != 'N') {
				break;
			}
			ComputerMove(board, ROW, COL);
			win = Judge(board, ROW, COL);
			if (win != 'N') {
				break;
			}
		}
	}
	else {
		printf("diannao先手\n");
		while (1) {
			ComputerMove(board, ROW, COL);
			DrawBoard(board, ROW, COL);
			win = Judge(board, ROW, COL);
			if (win != 'N') {
				break;
			}
			PlayMove(board, ROW, COL);
			win = Judge(board, ROW, COL);
			if (win != 'N') {
				break;
			}
		}
	}

	switch (win){
		case ' ':
			printf("you  loss!\n");
			break;
		case 'X':
			printf("you  WIN!\n");
			break;
		case 'P':
			printf("平局\n");
			break;
		default:
			break;
	}	
}