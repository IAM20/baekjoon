#include <stdio.h>

//
// https://www.acmicpc.net/problem/2839
// Delivering sugar
// 2018.03.14 HYU LEE
// Success date 2018.03.14
//

int calculate(int kg);

int main(int argc, char * argv[])
{
	if(argc != 1)
	{
		return 0;
	}
	int kg;
	scanf("%d", &kg);

	printf("%d\n", calculate(kg));
	return 0;
}

int calculate(int kg)
{
	int num_of_five;
	int rest;

	num_of_five = kg/5;
	rest = kg % 5;
	switch(rest)
	{
	case 0:
		return num_of_five; // correct
	case 1:
		if(num_of_five > 0)
			return --num_of_five + 2;
		else
			return -1; // correct
	case 2:
		if(num_of_five > 1)
			return num_of_five + 2;
		else
			return -1;
	case 3:
		return ++num_of_five;
	
	case 4:
		if(num_of_five > 0)
			return --num_of_five + 3;
		else
			return -1;
	}
}
