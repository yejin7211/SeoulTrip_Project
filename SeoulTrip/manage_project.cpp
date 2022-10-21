#include "manage_project.h"

void start_program() { //���α׷� ������ �˸��� �Լ�
	printf("< ���� ��õ ���� ��� �Ұ� ���α׷� > \n\n");
}

void finish_program() { //���α׷� ���Ḧ �˸��� �Լ�
	printf("< ���α׷� ���� >\n");
}

void get_placeInfo(PlaceInfo pArr[], int* placeCnt) { //������ ���� ������ �ҷ����� �Լ�
	FILE* fp = fopen("placeData.txt", "r");
	char buf[1000];
	
	if (fp == NULL) {
		Unable_to_open_file(); //���� ���� ����
		return;
	}

	while (feof(fp) == 0) { //��� �����͸� ���α׷��� ����
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

void save_placeInfo(PlaceInfo pArr[], int placeCnt) { //��� ������ �ؽ�Ʈ ���Ͽ� �����ϴ� �Լ�
	char buf[1000];
	FILE* fp = fopen("placeData.txt", "w");

	if (fp == NULL) {
		Unable_to_open_file(); //���� ���� ����
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