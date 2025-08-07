#include "logic.h"

void init(int** matrix, int N, int M) {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			matrix[i][j] = rand() % 11;
		}
	}
}

string print_matrix(int** matrix, int N, int M) {
	string s = "";

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			s += to_string(matrix[i][j]) + " ";
		}
		s += "\n";
	}

	return s;
}

int calculate_sum_of_main_diagonal(int** matrix, int N, int M) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (i == j) {
				sum += matrix[i][j];
			}
		}
		
	}

	return sum;
}

//int calculate_sum_of_secondary_diagonal(int** matrix, int N, int M) {
//	int sum = 0;
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if () {
//				sum += matrix[i][j];
//			}
//		}
//
//	}
//
//	return sum;
//}