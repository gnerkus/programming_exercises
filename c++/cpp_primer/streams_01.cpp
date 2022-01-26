//
// Created by Ifeanyi Oraelosi on 23.01.22.
//

#include <iostream>

int main() {
	std::cout<<"Enter two numbers"<<std::endl;
	int v1 = 0, v2 = 0;
	std::cin>>v1>>v2;
	std::cout<<"The sum of "<<v1<<" and "<<v2<<" is "<<v1 + v2<<std::endl;

	std::clog<<"Testing the IO log"<<std::endl;

	return 0;
}

/*
 * `endl` flushes the buffer. It's advisable to always do this
 * when debugging.
 *
 * The `::` (scope) operator is used to access names in a namespace
 *
 *	It's recommended to use namespaces e.g std::cout
 *
 *
 *
 * */
