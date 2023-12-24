//Task 1 STRING REVERSAL
//[NAME -ANUPAM KUMAR VERMA C/C++ INTERNSHIP]

/*Write a program that takes a string
as input and reverses it. Display
the reversed string on the
console.*/

//USING SWAPPING (STRING REVERSAL)
#include <stdio.h>

void reverseString(char str[]) {
    int i, lent;
    char temp;

    // Calculate the length of the string.....
    for (lent = 0; str[lent] != '\0'; lent++);

    // Swap characters from both ends.....
    for (i = 0; i < lent / 2; i++) {
        temp = str[i];
        str[i] = str[lent - 1 - i];
        str[lent - 1 - i] = temp;
    }

    // Print the reversed string
    printf("Reversed string: %s\n", str);
}

int main(void) {
    char str[60];

    printf("Please insert the string you wish to get reversed: ");
    scanf("%s", str);

    reverseString(str);  //USING FUNCTION reverseString

    return 0;
}
