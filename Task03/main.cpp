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
	cout << "Matrix: \n" << print_matrix(matrix, N, M) << endl;

	int sum_of_main_diagonal = calculate_sum_of_main_diagonal(matrix, N, M);
	cout << "\nSum o f main diagonal = " << sum_of_main_diagonal << endl;

	return 0;
}