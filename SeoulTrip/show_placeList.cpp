#include "show_placeList.h"

void show_placeList(PlaceInfo pArr[], int placeCnt) { //명소 리스트 보여주는 함수
	printf(">> 서울 관광 명소 추천 리스트\n");
	for (int i = 0; i < placeCnt; i++) {
		printf("%d. %s\n", i + 1, pArr[i].place);
	}
	printf("\n");

	int num;
	printf("특정 명소의 자세한 정보를 원하시면 해당 번호를, 그렇지 않다면 0 입력: ");
	scanf_s("%d", &num);
	printf("\n");

	if (num != 0)
		show_placeInfo(pArr, num, placeCnt); //특정 명소의 정보를 보여주는 함수
	else if (num < 0)
		inputed_invalid_number(); //적절하지 않은 숫자 입력 에러
}

void show_placeInfo(PlaceInfo pArr[], int idx, int placeCnt) { //특정 명소의 정보를 보여주는 함수
	idx -= 1;
	if (idx < 0 || idx + 1 > placeCnt) {
		inputed_nonexisted_placeNum();  //존재하지 않는 장소 입력 에러
		return;
	}

	printf("> %s\n", pArr[idx].place);
	printf("위치: %s\n", pArr[idx].position);
	printf("설명: %s\n\n", pArr[idx].explanation);
}