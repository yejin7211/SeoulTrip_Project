#include "input_userActivity.h"

int input_userActivity() { //����ڷκ��� ������ Ȱ���� �Է¹޴� �Լ�
	int choice;
	printf(" *************** ����â ****************\n");
	printf("1. ��� ��õ ����Ʈ Ȯ�� �� �� ���� Ȯ��\n");
	printf("2. �ڽ��� �ƴ� ���� ��� �߰�\n");
	printf("3. Ư�� ��� ���� �Ϻ� ����\n");
	printf("4. ����Ʈ �� Ư�� ��� ����\n");
	printf("5. ���α׷� ����\n");
	printf("���� >> ");
	scanf_s("%d", &choice);
	printf("\n");

	return choice;
}