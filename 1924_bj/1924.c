#include <stdio.h>

int calc(int month, int day);

int main(void)
{
	int month, day, result;
	scanf("%d %d", &month, &day);
		
	result = calc(month, day);
	result = result % 7;

	switch(result)
	{
	case 1:
	    printf("MON\n");
	    return 0;
	case 2:
	    printf("TUE\n");
	    return 0;
	case 3:
	    printf("WED\n");
	    return 0;
	case 4:
	    printf("THU\n");
	    return 0;
	case 5:
	    printf("FRI\n");
	    return 0;
	case 6:
	    printf("SAT\n");
	    return 0;
	case 0:
	    printf("SUN\n");
	    return 0;
	default:
	    return 1;
	}
}

int calc(int month, int day)
{
    int result;
    switch(month)
    {
    case 1:
	return day;
    case 2:
	return 31+day;
    case 3:
	return 31+28+day;
    case 4:
	return 31+28+31+day;
    case 5:
	return 31+28+31+30+day;
    case 6:
	return 31+28+31+30+31+day;
    case 7:
	return 31+28+31+30+31+30+day;
    case 8:
	return 31+28+31+30+31+30+31+day;
    case 9:
	return 31+28+31+30+31+30+31+31+day;
    case 10:
	return 31+28+31+30+31+30+31+31+30+day;
    case 11:
	return 31+28+31+30+31+30+31+31+30+31+day;
    case 12:
	return 31+28+31+30+31+30+31+31+30+31+30+day;
    default:
	return -1;
    }
}

