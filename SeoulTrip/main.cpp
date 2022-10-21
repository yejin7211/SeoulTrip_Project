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
Author: 조예진
Date: 2022.10.20
Description : 서울 명소 추천 프로그램이다.
*/

PlaceInfo pArr[MAX_MEMORY];

int main() {
	int placeCnt = 0;
	bool finished = false;
	
	get_placeInfo(pArr, &placeCnt); //데이터 파일 정보를 불러오는 함수
	start_program(); //프로그램 시작을 알리는 함수
	while (1) {
		int choice = input_userActivity(); //사용자로부터 수행할 활동을 입력받는 함수
		switch (choice) {
		case 1:
			show_placeList(pArr, placeCnt); //명소 리스트 보여주는 함수
			break;
		case 2:
			if (placeCnt < MAX_MEMORY) 
				input_placeInfo(pArr, &placeCnt); //장소 정보를 추가하는 함수
			else
				insufficient_memory(); //불충분한 메모리 공간 에러
			break;
		case 3:
			modify_placeInfo(pArr, placeCnt); //장소 정보를 수정하는 함수
			break;
		case 4:
			remove_placeInfo(pArr, &placeCnt); //장소 정보를 삭제하는 함수
			break;
		case 5:
			finished = true;
			printf("\n");
			break;
		default:
			inputed_invalid_number(); //적절하지 않은 숫자 입력 에러
			break;
		}

		if (finished) {
			save_placeInfo(pArr, placeCnt); //모든 정보를 텍스트 파일에 저장하는 함수
			break;
		}
	}
	finish_program(); //프로그램 종료를 알리는 함수
	return 0;
}