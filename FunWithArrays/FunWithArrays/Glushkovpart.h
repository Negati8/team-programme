#include <iostream>
#ifndef Glushkovpart
#define Glushkovpart

template <typename Type>
int32_t MaxElement(Type* array, int32_t size) {
	Type maxElement{ array[0] };
	int32_t numberOfPosition{ 1 };
	for (size_t i{}; i < size; ++i) {
		if (array[i] > maxElement) {
			maxElement = array[i];
			numberOfPosition = i + 1;
		}
	}
	return numberOfPosition;
}
template <typename Type>
int32_t MinElement(Type* array, int32_t size) {
	Type minElement{ array[0] };
	int32_t numberOfPosition{ 1 };
	for (size_t i{}; i < size; ++i) {
		if (array[i] < minElement) {
			minElement = array[i];
			numberOfPosition = i + 1;
		}
	}
	return numberOfPosition;
}
template <typename Type>
Type CalculateAverage(Type* array, int32_t size) {
	return (array[MaxElement(array, size) - 1] + array[MinElement(array, size) - 1]) / 2;
}

bool IsPrime(int32_t number);

int32_t FindSumOfPrimeNumbers(int32_t* array, int32_t size);

#endif

