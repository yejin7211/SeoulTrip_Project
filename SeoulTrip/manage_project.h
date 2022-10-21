#ifndef __MANAGE_PROJECT__
#define __MANAGE_PROJECT__

#include <stdio.h>
#include <string.h>
#include "struct.h"
#include "show_error_message.h"

void start_program(); //프로그램 시작을 알리는 함수
void finish_program(); //프로그램 종료를 알리는 함수

void get_placeInfo(PlaceInfo pArr[], int* placeCnt); //데이터 파일 정보를 불러오는 함수
void save_placeInfo(PlaceInfo pArr[], int placeCnt); //모든 정보를 텍스트 파일에 저장하는 함수

#endif // !__MANAGE_PROJECT__