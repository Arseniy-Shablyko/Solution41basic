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

	int sum = calculate_sum_of_all_elements(matrix, N, M);
	int sum_of_even_elements = calculate_sum_of_even_elements(matrix, N, M);

	cout << "\nSum of matrix elements = " << sum << endl;
	cout << "Sum of even matrix elements = " << sum_of_even_elements << endl;

	return 0;
}