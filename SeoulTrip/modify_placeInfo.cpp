#include "modify_placeInfo.h"

void modify_placeInfo(PlaceInfo pArr[], int placeCnt) { //��� ������ �����ϴ� �Լ�
	int idx;
	printf("�� ��° ����� ��Ҹ� �����ϰ� �ͽ��ϱ�? ");
	scanf("%d", &idx);
	printf("\n");
	if (idx > placeCnt || idx <= 0) {  
		inputed_nonexisted_placeNum();  //�������� �ʴ� ��� �Է� ����
		return;
	}

	show_placeInfo(pArr, idx, placeCnt); //Ư�� ����� ������ �����ִ� �Լ�

	int choice;
	printf("��Ҹ��� ������ ���ϽŴٸ�: 1 �Է�\n");
	printf("��ġ ���� ������ ���ϽŴٸ�: 2 �Է�\n");
	printf("��� ���� ���� ������ ���ϽŴٸ�: 3 �Է�\n");
	printf("�Է� >> ");
	scanf("%d", &choice);
	printf("\n");

	switch (choice) {
	case 1:
		modify_placeName(pArr, idx - 1); //��Ҹ� ������ �����ϴ� �Լ�
		break;
	case 2:
		modify_placePos(pArr, idx - 1); //��� ��ġ ������ �����ϴ� �Լ�
		break;
	case 3:
		modify_placeDesc(pArr, idx - 1); //��� ���� ������ �����ϴ� �Լ�
	default:
		inputed_invalid_number(); //�������� ���� ���� �Է� ����
		break;
	}
}

void modify_placeName(PlaceInfo pArr[], int idx) { //��Ҹ� ������ �����ϴ� �Լ�
	char place[50];

	printf("��Ҹ��� �����Ͻÿ�.(50�� ��) ");
	scanf(" %[^\n]s\n", place);
	printf("\n");

	strcpy(pArr[idx].place, place);

	printf("��Ҹ� ������ �Ϸ�Ǿ����ϴ�.\n\n");
}

void modify_placePos(PlaceInfo pArr[], int idx) { //��� ��ġ ������ �����ϴ� �Լ�
	char position[50];

	printf("��� ��ġ�� �Է��Ͻÿ�.(50�� ��) ");
	scanf(" %[^\n]", position);
	printf("\n");

	strcpy(pArr[idx].position, position);

	printf("��� ��ġ ������ �Ϸ�Ǿ����ϴ�.\n\n");
}

void modify_placeDesc(PlaceInfo pArr[], int idx) { //��� ���� ������ �����ϴ� �Լ�
	char desc[50];
	
	printf("��ҿ� ���� ������ �Է��Ͻÿ�.(1000�� ��) ");
	scanf(" %[^\n]", desc);
	printf("\n");

	strcpy(pArr[idx].explanation, desc);

	printf("��ҿ� ���� ���� ������ �Ϸ�Ǿ����ϴ�.\n\n");
}