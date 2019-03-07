// pch.cpp: 미리 컴파일된 헤더에 해당하는 소스 파일입니다. 성공하려면 컴파일이 필요합니다.

#include "pch.h"

// 일반적으로 이 파일을 무시하지만 미리 컴파일된 헤더를 사용하는 경우 유지합니다.

void quicksort(int *a, int start, int length) {
	int i = start;
	int temp = 0, v = length;
	int j = length;

	if (start >= length) return;

	while (i <= j) {
		while (a[i] < a[v]) {
			i++;
		}
		while (a[j] > a[v]) {
			j--;
		}
		if (i >= j) break;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
	}

	if (a[i] > a[v]) {
		temp = a[i];
		a[i] = a[v];
		a[v] = temp;
	}

	quicksort(a, start, i-1);
	quicksort(a, i+1, length);
}