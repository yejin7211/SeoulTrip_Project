#include "show_error_message.h"

void Unable_to_open_file() { //파일 오픈 에러
	printf("File Open Error!!\n\n");
}

void insufficient_memory() { //불충분한 메모리 공간 에러
	printf("Out of Memory!!\n\n");
}

void inputed_invalid_number() { //적절하지 않은 숫자 입력 에러
	printf("Inputed invalid number!!\n\n");
}

void inputed_nonexisted_placeNum() { //존재하지 않는 장소 입력 에러
	printf("Inputed non-existent place Number!!\n\n");
}