#include "matrix.h"

int main(int argc, char *argv[]){

	if(argc != 4){
		std::cerr << "usage: ./matmult A.in B.in C.out" << std::endl;
		return -1;
	}
	
	Matrix matrix_a(argv[1]);
	Matrix matrix_b(argv[2]);
	Matrix matrix_c = matrix_a*matrix_b;
	matrix_c.print(argv[3]);
	return 0;
}
