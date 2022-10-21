#include "remove_placeInfo.h"

void remove_placeInfo(PlaceInfo pArr[], int* placeCnt) { //��� ������ �����ϴ� �Լ�
	int num;
	printf("�� ��° ��Ҹ� �����ϰ� �ͳ���? ");
	scanf_s("%d", &num);
	printf("\n");

	if (num <= 0 || num > *placeCnt) {
		inputed_nonexisted_placeNum(); //�������� �ʴ� ��� �Է� ����
		return;
	}

	int removedIdx = num - 1;
	for (int i = removedIdx; i < *placeCnt; i++) {
		strcpy(pArr[i].place, pArr[i + 1].place);
		strcpy(pArr[i].position, pArr[i + 1].position);
		strcpy(pArr[i].explanation, pArr[i + 1].explanation);
	}
	*placeCnt -= 1;

	printf("��� ������ �Ϸ�Ǿ����ϴ�.\n\n");
};