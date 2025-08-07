#include <iostream>
#include <string>
using namespace std;

void init(int** matrix, int N, int M);
string print_matrix(int** matrix, int N, int M);
int calculate_sum_of_main_diagonal(int** matrix, int N, int M);
int calculate_sum_of_secondary_diagonal(int** matrix, int N);