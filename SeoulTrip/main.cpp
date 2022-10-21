#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "struct.h"
#include "manage_project.h"
#include "input_userActivity.h"
#include "show_placeList.h"
#include "input_placeInfo.h"
#include "modify_placeInfo.h"
#include "remove_placeInfo.h"
#include "show_error_message.h"
#define MAX_MEMORY	100

/*
Author: ������
Date: 2022.10.20
Description : ���� ��� ��õ ���α׷��̴�.
*/

PlaceInfo pArr[MAX_MEMORY];

int main() {
	int placeCnt = 0;
	bool finished = false;
	
	get_placeInfo(pArr, &placeCnt); //������ ���� ������ �ҷ����� �Լ�
	start_program(); //���α׷� ������ �˸��� �Լ�
	while (1) {
		int choice = input_userActivity(); //����ڷκ��� ������ Ȱ���� �Է¹޴� �Լ�
		switch (choice) {
		case 1:
			show_placeList(pArr, placeCnt); //��� ����Ʈ �����ִ� �Լ�
			break;
		case 2:
			if (placeCnt < MAX_MEMORY) 
				input_placeInfo(pArr, &placeCnt); //��� ������ �߰��ϴ� �Լ�
			else
				insufficient_memory(); //������� �޸� ���� ����
			break;
		case 3:
			modify_placeInfo(pArr, placeCnt); //��� ������ �����ϴ� �Լ�
			break;
		case 4:
			remove_placeInfo(pArr, &placeCnt); //��� ������ �����ϴ� �Լ�
			break;
		case 5:
			finished = true;
			printf("\n");
			break;
		default:
			inputed_invalid_number(); //�������� ���� ���� �Է� ����
			break;
		}

		if (finished) {
			save_placeInfo(pArr, placeCnt); //��� ������ �ؽ�Ʈ ���Ͽ� �����ϴ� �Լ�
			break;
		}
	}
	finish_program(); //���α׷� ���Ḧ �˸��� �Լ�
	return 0;
}