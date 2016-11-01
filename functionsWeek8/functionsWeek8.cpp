// functionsWeek8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"





int lowest(int nums[], int len);
int highest(int nums[], int len);
double average(int nums[], int len);
int numPassed(int nums[], int len);
int numFailled(int nums[], int len);


int main()
{
	int arr[10] = { 5,25,45,66,77,34,90,22,68,84 };
	int low, high;
	double avg;
	int numFails, numPasses;
	low = lowest(arr, 10);
	high = highest(arr, 10);
	avg = average(arr, 10);
	numFails = numFailled(arr, 10);
	numPasses = numPassed(arr, 10);
	printf("Here are the scores:\n");
	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);
	printf("\nLowest = %d \n", low);
	printf("Highest = %d \n", high);
	printf("Average = %.2lf \n", avg);
	printf("There were %d passes and %d fails\n", numPasses, numFails);
	return 0;
}

int lowest(int nums[], int len)
{
	int small = 100;
	for(int i = 0; i < len; i++)
	{
		if(small > nums[i])
		{
			small = nums[i];
		}
	}
	return small;
}


int highest(int nums[], int len)
{
	int high = 0;
	for (int i = 0; i < len; i++)
	{
		if (high < nums[i])
		{
			high = nums[i];
		}
	}
	return high;

}

double average(int nums[], int len)
{
	double total = 0;
	double avg = 0;
	for(int i = 0; i < len; i++)
	{
		total += nums[i];
	}
	avg = total / len;
	return avg;
}

int numPassed(int nums[], int len)
{
	int passed = 0;
	for(int i = 0; i < len; i++)
	{
		if (nums[i] > 40)
		{
			passed++;
		}
	}
	return passed;
}

int numFailled(int nums[], int len)
{
	int failed = 0;
	for(int i = 0; i < len; i++)
	{
		if(nums[i]<40)
		{
			failed++;
		}
	}
	return failed;
}

