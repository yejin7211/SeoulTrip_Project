#include "input_userActivity.h"

int input_userActivity() { //사용자로부터 수행할 활동을 입력받는 함수
	int choice;
	printf(" *************** 선택창 ****************\n");
	printf("1. 명소 추천 리스트 확인 및 상세 정보 확인\n");
	printf("2. 자신이 아는 서울 명소 추가\n");
	printf("3. 특정 명소 정보 일부 수정\n");
	printf("4. 리스트 내 특정 장소 삭제\n");
	printf("5. 프로그램 종료\n");
	printf("선택 >> ");
	scanf_s("%d", &choice);
	printf("\n");

	return choice;
}