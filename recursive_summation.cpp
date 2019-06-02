/* ##################################################################
   The code finds the sum of all elements of a sequence by the
   recursive method.

   This code has written by Rasoul Kajouri.
   for more info. rasoulkajouri@gmail.com

   Copy lefts, all lefts reserved! Last update : Jun 2 2019

   ################################################################*/

#include <iostream>
#include <vector>

int sum_list (std::vector <int> &list, int l){

	int dummy = list[list.size()-1];
	list.pop_back();

	if(list.size() == 0) return dummy;

	return dummy + sum_list(list);
}

int main(){

	std::cout << " Enter your numbers, at the end entry character \'n\'.\n";

	int x;
	std::vector<int> a;

	while(std::cin >> x) a.push_back(x);

	if(a.size() == 0) std::cout << " Sum of all elements are zero!\n";
	else std::cout << " Sum of all elements are " << sum_list(a) << " .\n";

	return 0;
}
