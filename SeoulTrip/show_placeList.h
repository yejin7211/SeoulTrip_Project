#ifndef __SHOW_PLACELIST__
#define __SHOW_PLACELIST__

#include <stdio.h>
#include "struct.h"
#include "show_error_message.h"

void show_placeList(PlaceInfo pArr[], int placeCnt); //명소 리스트 보여주는 함수

void show_placeInfo(PlaceInfo pArr[], int idx, int placeCnt); //특정 명소의 정보를 보여주는 함수

#endif // !__SHOW_PLACELIST__