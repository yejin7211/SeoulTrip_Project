#include "show_placeList.h"

void show_placeList(PlaceInfo pArr[], int placeCnt) { //��� ����Ʈ �����ִ� �Լ�
	printf(">> ���� ���� ��� ��õ ����Ʈ\n");
	for (int i = 0; i < placeCnt; i++) {
		printf("%d. %s\n", i + 1, pArr[i].place);
	}
	printf("\n");

	int num;
	printf("Ư�� ����� �ڼ��� ������ ���Ͻø� �ش� ��ȣ��, �׷��� �ʴٸ� 0 �Է�: ");
	scanf_s("%d", &num);
	printf("\n");

	if (num != 0)
		show_placeInfo(pArr, num, placeCnt); //Ư�� ����� ������ �����ִ� �Լ�
	else if (num < 0)
		inputed_invalid_number(); //�������� ���� ���� �Է� ����
}

void show_placeInfo(PlaceInfo pArr[], int idx, int placeCnt) { //Ư�� ����� ������ �����ִ� �Լ�
	idx -= 1;
	if (idx < 0 || idx + 1 > placeCnt) {
		inputed_nonexisted_placeNum();  //�������� �ʴ� ��� �Է� ����
		return;
	}

	printf("> %s\n", pArr[idx].place);
	printf("��ġ: %s\n", pArr[idx].position);
	printf("����: %s\n\n", pArr[idx].explanation);
}