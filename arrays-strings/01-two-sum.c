#include <stdio.h>

int main()
{
    int nums[] = {3,2,4};
    int target = 6;
    int n = 3;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                printf("[%d, %d]", i, j);
                return 0;
            }
        }
    }

    return 0;
}