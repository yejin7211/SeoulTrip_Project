#ifndef __MODIFY_PLACEINFO__
#define __MODIFY_PLACEINFO__

#include <string.h>
#include "struct.h"
#include "show_error_message.h"
#include "show_placeList.h"

void modify_placeInfo(PlaceInfo pArr[], int placeCnt); //장소 정보를 수정하는 함수

void modify_placeName(PlaceInfo pArr[], int idx); //장소명 정보를 수정하는 함수
void modify_placePos(PlaceInfo pArr[], int idx); //장소 위치 정보를 수정하는 함수
void modify_placeDesc(PlaceInfo pArr[], int idx); //장소 설명 정보를 수정하는 함수

#endif // !__MODIFY_PLACEINFO__