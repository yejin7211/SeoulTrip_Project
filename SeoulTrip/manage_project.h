#ifndef __MANAGE_PROJECT__
#define __MANAGE_PROJECT__

#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "show_error_message.h"

void start_program(); //���α׷� ������ �˸��� �Լ�
void finish_program(); //���α׷� ���Ḧ �˸��� �Լ�

void get_placeInfo(PlaceInfo pArr[], int* placeCnt); //������ ���� ������ �ҷ����� �Լ�
void save_placeInfo(PlaceInfo pArr[], int placeCnt); //��� ������ �ؽ�Ʈ ���Ͽ� �����ϴ� �Լ�

#endif // !__MANAGE_PROJECT__