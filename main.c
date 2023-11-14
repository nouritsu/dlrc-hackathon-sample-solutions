#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    FILE* input_file = fopen("./input.txt", "r");
    char buffer[50];

    if (input_file == NULL) {
        return -1;
    }

    int i = 0;
    long sum = 0;
    while (fgets(buffer, sizeof(buffer),
                 input_file)) {   // Read input file line by line
        long num = atoi(buffer);  // Convert line to int
        sum += num * num;         // Square number and add to sum
    }
    printf("The sum is %d", sum);

    return 0;
}