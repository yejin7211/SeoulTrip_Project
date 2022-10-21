#include "modify_placeInfo.h"

void modify_placeInfo(PlaceInfo pArr[], int placeCnt) { //장소 정보를 수정하는 함수
	int idx;
	printf("몇 번째 저장된 명소를 수정하고 싶습니까? ");
	scanf("%d", &idx);
	printf("\n");
	if (idx > placeCnt || idx <= 0) {  
		inputed_nonexisted_placeNum();  //존재하지 않는 장소 입력 에러
		return;
	}

	show_placeInfo(pArr, idx, placeCnt); //특정 명소의 정보를 보여주는 함수

	int choice;
	printf("장소명의 변경을 원하신다면: 1 입력\n");
	printf("위치 내용 변경을 원하신다면: 2 입력\n");
	printf("장소 설명 내용 변경을 원하신다면: 3 입력\n");
	printf("입력 >> ");
	scanf("%d", &choice);
	printf("\n");

	switch (choice) {
	case 1:
		modify_placeName(pArr, idx - 1); //장소명 정보를 수정하는 함수
		break;
	case 2:
		modify_placePos(pArr, idx - 1); //장소 위치 정보를 수정하는 함수
		break;
	case 3:
		modify_placeDesc(pArr, idx - 1); //장소 설명 정보를 수정하는 함수
	default:
		inputed_invalid_number(); //적절하지 않은 숫자 입력 에러
		break;
	}
}

void modify_placeName(PlaceInfo pArr[], int idx) { //장소명 정보를 수정하는 함수
	char place[50];

	printf("장소명을 변경하시오.(50자 내) ");
	scanf(" %[^\n]s\n", place);
	printf("\n");

	strcpy(pArr[idx].place, place);

	printf("장소명 변경이 완료되었습니다.\n\n");
}

void modify_placePos(PlaceInfo pArr[], int idx) { //장소 위치 정보를 수정하는 함수
	char position[50];

	printf("장소 위치를 입력하시오.(50자 내) ");
	scanf(" %[^\n]", position);
	printf("\n");

	strcpy(pArr[idx].position, position);

	printf("장소 위치 변경이 완료되었습니다.\n\n");
}

void modify_placeDesc(PlaceInfo pArr[], int idx) { //장소 설명 정보를 수정하는 함수
	char desc[50];
	
	printf("장소에 대한 설명을 입력하시오.(1000자 내) ");
	scanf(" %[^\n]", desc);
	printf("\n");

	strcpy(pArr[idx].explanation, desc);

	printf("장소에 대한 설명 변경이 완료되었습니다.\n\n");
}