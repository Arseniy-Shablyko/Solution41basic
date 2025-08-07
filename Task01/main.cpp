#include "logic.h"

int main() {
	int N, M;

	cout << "Input matrix size(N, M): ";
	cin >> N >> M;

	int** matrix = new int* [N];
	for (int i = 0; i < M; i++) {
		matrix[i] = new int[M];
	}

	init(matrix, N, M);
	cout << "Matrix: \n" << print_matrix(matrix, N, M)  << endl;

	double best_avg = find_best_class(matrix, N, M);
	cout << "\nAverage number of best class = " << best_avg << endl;

	return 0;
}