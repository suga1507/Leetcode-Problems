#include <stdio.h>
#include <stdbool.h>
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    static bool result[100];
    int max = candies[0];
    for (int i = 1; i < candiesSize; i++) {
        if (candies[i] > max) {
            max = candies[i];
        }
    }
    for (int i = 0; i < candiesSize; i++) {
        result[i] = (candies[i] + extraCandies >= max);
    }
    *returnSize = candiesSize;
    return result;
}