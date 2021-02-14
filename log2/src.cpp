/* ******************************************************************
 * last modified 14 Feb 2021
 * @author kajouri
 *
 * 
 * *****************************************************************/
// ******************************************************************
// essential libraries
#include <iostream>
long unsigned int log2(const long unsigned int num){
	if (num <= 1)
		return 0;
	else
		return 1 + log2(num/2);
}

int main(int argc, char *argv[]){

	long unsigned int num;
	if (argc>1)
		num = std::stoul(argv[1]);
	else
		num = 8;

	printf("The value of log2(%lu): %lu\n", num, log2(num));
	return EXIT_SUCCESS;
}
