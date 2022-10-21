#include "remove_placeInfo.h"

void remove_placeInfo(PlaceInfo pArr[], int* placeCnt) { //장소 정보를 삭제하는 함수
	int num;
	printf("몇 번째 장소를 삭제하고 싶나요? ");
	scanf_s("%d", &num);
	printf("\n");

	if (num <= 0 || num > *placeCnt) {
		inputed_nonexisted_placeNum(); //존재하지 않는 장소 입력 에러
		return;
	}

	int removedIdx = num - 1;
	for (int i = removedIdx; i < *placeCnt; i++) {
		strcpy(pArr[i].place, pArr[i + 1].place);
		strcpy(pArr[i].position, pArr[i + 1].position);
		strcpy(pArr[i].explanation, pArr[i + 1].explanation);
	}
	*placeCnt -= 1;

	printf("장소 삭제가 완료되었습니다.\n\n");
};