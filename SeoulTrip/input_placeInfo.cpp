#include "input_placeInfo.h"

void input_placeInfo(PlaceInfo pArr[], int* placeCnt) { //��� ������ �߰��ϴ� �Լ�
	char place[50];
	char position[50];
	char explanation[5000];

	printf("�ڽ��� ��õ�ϴ� ���� ��Ҵ� ����ΰ���?(50�� ��) ");
	scanf(" %[^\n]s\n", place);

	printf("�ش� ����� ��ġ�� ����ΰ���?(50�� ��) ");
	scanf(" %[^\n]s\n", position);

	printf("�ش� ��ҿ� ���� ������ �����ּ���.(1000�� ��) ");
	scanf(" %[^\n]s\n", explanation);
	printf("\n");
	
	//��� ���� �߰�
	strcpy(pArr[*placeCnt].place, place);
	strcpy(pArr[*placeCnt].position, position);
	strcpy(pArr[*placeCnt].explanation, explanation);
	*placeCnt += 1;

	printf("��� ����� �Ϸ�Ǿ����ϴ�.\n\n");
}