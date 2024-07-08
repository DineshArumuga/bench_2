#include <stdio.h>
#include <string.h>


void printSubsequences(char str[], int index, char subseq[], int subIndex) {
    if (index == strlen(str)) {
        subseq[subIndex] = '\0'; 
        printf("%s\n", subseq);  
        return;
    }

    
    subseq[subIndex] = str[index];
    printSubsequences(str, index + 1, subseq, subIndex + 1);

    printSubsequences(str, index + 1, subseq, subIndex);
}

int main() {
    char str[] = "abc";
    int n = strlen(str);
    char subseq[n + 1];

    printf("All subsequences of the string \"%s\" are:\n", str);
    printSubsequences(str, 0, subseq, 0);

    return 0;
}