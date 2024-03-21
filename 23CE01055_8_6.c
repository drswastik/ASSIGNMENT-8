   #include<stdio.h>
#include<string.h>

int main() {
    int a, b;
    printf("Enter the length of first string: ");
    scanf("%d", &a);
    printf("Enter the length of second string: ");
    scanf("%d", &b);
    char str1[a + 1]; 
    char str2[b + 1]; 
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    int tl = a + b;
    char cstr[tl + 1]; 
    char *ptr = cstr;
    char *temp = str1;
    while (*temp != '\0') {
        *ptr = *temp;
        ptr++;
        temp++;
    }
    temp = str2;
    while (*temp != '\0') {
        *ptr = *temp;
        ptr++;
        temp++;
    }

    *ptr = '\0'; 
    printf("Concatenated string: %s\n", cstr);

    return 0;
}