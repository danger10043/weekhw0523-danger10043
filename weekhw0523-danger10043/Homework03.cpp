#include <iostream>
#include <stdio.h>
#include <time.h>

#include "Homework03.h"

int playGame()
{
	srand(time(0));
	
	int Number1 = 0, Number2 = 0, Number3 = 0;
	Number1 = rand() % 10;
	Number2 = rand() % 10;
	Number3 = rand() % 10;

	if (Number1 == 7 && Number2 == 7 && Number3 == 7) {
		return 10000;
	}
	else if (Number1 == Number2 && Number1 == Number3) {
		return 50;
	}
	else {
		return 0;
	}
}

int setBetAmount(int playerMoney) {
	while (true) {
		printf("이번 게임에 베팅할 금액을 입력하세요.(최소")
	}
}

void Homework03_Run() {
	printf("<< HOMEWORK - 03 >>\n\n");

	int playerMoney = 10000;
	printf("[ 슬롯 머신 게임 ]\n\n");
	
	while (true) {
		printf("현재 소지금 : [ %d원 ]\n", playerMoney);
		printf("베팅 금액을 입력하세요.")
	}
}
