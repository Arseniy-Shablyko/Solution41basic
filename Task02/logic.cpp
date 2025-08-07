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

int calculate_sum_of_all_elements(int** matrix, int N, int M) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			sum += matrix[i][j];
		}
	}

	return sum;
}

int calculate_sum_of_even_elements(int** matrix, int N, int M) {
	int sum = 0;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (matrix[i][j] % 2 == 0 ) {
				sum += matrix[i][j];
			}
		}
	}

	return sum;
}