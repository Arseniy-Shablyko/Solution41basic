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

double find_best_class(int** matrix, int N, int M) {
	double best_avg = 0.0;
	

	for (int i = 0; i < N; i++) {
		int sum = 0;
		for (int j = 0; j < M; j++) {
			sum += matrix[i][j];
		}
		double avg = (sum / 1.0) / (M / 1.0);

		if (avg > best_avg) {
			best_avg = avg;
		}
	}

	return best_avg;
}
