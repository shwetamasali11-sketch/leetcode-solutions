#include <stdio.h>
#include <string.h>

void reverseString(char *s, int sSize)
{
    int left = 0;
    int right = sSize - 1;

    while (left < right)
    {
        char temp = s[left];
        s[left] = s[right];
        s[right] = temp;

        left++;
        right--;
    }
}

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    int length = strlen(s);

    reverseString(s, length);

    printf("Reversed string: %s\n", s);

    return 0;
}