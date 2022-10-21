#ifndef __MODIFY_PLACEINFO__
#define __MODIFY_PLACEINFO__

#include <string.h>
#include "struct.h"
#include "show_error_message.h"
#include "show_placeList.h"

void modify_placeInfo(PlaceInfo pArr[], int placeCnt); //��� ������ �����ϴ� �Լ�

void modify_placeName(PlaceInfo pArr[], int idx); //��Ҹ� ������ �����ϴ� �Լ�
void modify_placePos(PlaceInfo pArr[], int idx); //��� ��ġ ������ �����ϴ� �Լ�
void modify_placeDesc(PlaceInfo pArr[], int idx); //��� ���� ������ �����ϴ� �Լ�

#endif // !__MODIFY_PLACEINFO__