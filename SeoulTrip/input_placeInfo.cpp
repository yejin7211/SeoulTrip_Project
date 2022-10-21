#include "input_placeInfo.h"

void input_placeInfo(PlaceInfo pArr[], int* placeCnt) { //장소 정보를 추가하는 함수
	char place[50];
	char position[50];
	char explanation[5000];

	printf("자신이 추천하는 서울 명소는 어디인가요?(50자 내) ");
	scanf(" %[^\n]s\n", place);

	printf("해당 장소의 위치는 어디인가요?(50자 내) ");
	scanf(" %[^\n]s\n", position);

	printf("해당 장소에 대한 설명을 적어주세요.(1000자 내) ");
	scanf(" %[^\n]s\n", explanation);
	printf("\n");
	
	//장소 정보 추가
	strcpy(pArr[*placeCnt].place, place);
	strcpy(pArr[*placeCnt].position, position);
	strcpy(pArr[*placeCnt].explanation, explanation);
	*placeCnt += 1;

	printf("장소 등록이 완료되었습니다.\n\n");
}