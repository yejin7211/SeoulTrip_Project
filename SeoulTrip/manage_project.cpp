#include "manage_project.h"

void start_program() { //프로그램 시작을 알리는 함수
	printf("< 서울 추천 관광 명소 소개 프로그램 > \n\n");
}

void finish_program() { //프로그램 종료를 알리는 함수
	printf("< 프로그램 종료 >\n");
}

void get_placeInfo(PlaceInfo pArr[], int* placeCnt) { //데이터 파일 정보를 불러오는 함수
	FILE* fp = fopen("placeData.txt", "r");
	char buf[1000];
	
	if (fp == NULL) {
		Unable_to_open_file(); //파일 오픈 에러
		return;
	}

	while (feof(fp) == 0) { //장소 데이터를 프로그램에 저장
		fgets(buf, 1000, fp);
		buf[strlen(buf) - 1] = '\0';
		strcpy(pArr[*placeCnt].place, buf);
		fgets(buf, 1000, fp);
		buf[strlen(buf) - 1] = '\0';
		strcpy(pArr[*placeCnt].position, buf);
		fgets(buf, 1000, fp);
		buf[strlen(buf) - 1] = '\0';
		strcpy(pArr[*placeCnt].explanation, buf);
		*placeCnt += 1;
	}
	
	fclose(fp);
}

void save_placeInfo(PlaceInfo pArr[], int placeCnt) { //모든 정보를 텍스트 파일에 저장하는 함수
	char buf[1000];
	FILE* fp = fopen("placeData.txt", "w");

	if (fp == NULL) {
		Unable_to_open_file(); //파일 오픈 에러
		return;
	}

	for (int i = 0; i < placeCnt; i++) {
		fprintf(fp, "%s\n", pArr[i].place);
		fprintf(fp, "%s\n", pArr[i].position);
		if (i == placeCnt - 1)
			fprintf(fp, "%s", pArr[i].explanation);
		else fprintf(fp, "%s\n", pArr[i].explanation);
	}
	
	fclose(fp);
}