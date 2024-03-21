#include <stdio.h>

void findDuplicates(int *nums, int n) {
    printf("Duplicate numbers: ");
    for (int i = 0; i < n + 1; i++) {
        int *current = nums + i;
        int value = *current;
        if (value < 0) {
            printf("%d ", -value);
        } else {
            *(nums + value) = -(*(nums + value));
        }
    }
}

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int nums[n + 1];
    printf("Enter %d integers where every integer in the range [1, %d] occurs at least once:\n", n + 1, n);
    for (int i = 0; i < n + 1; i++) {
        scanf("%d", &nums[i]);
    }
    findDuplicates(nums, n);
    return 0;
}