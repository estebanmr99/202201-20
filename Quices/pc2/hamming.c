#include "hamming.h"

int main(int argc, char**argv)
{
    char *type = argv[1];
    char *inputFlag;
    char *hexCode;

    if (strcmp(type, "encode") == 0) {
        inputFlag = argv[2];
        if (strcmp(inputFlag, "--input") == 0) {
            hexCode = argv[3];
            int binaryLen = (strlen(hexCode) - 2) * 4;

            long n = strtol(hexCode, NULL, 16);

            printf("Binary numbers: %d\n", binaryLen);
        }
    } else if (strcmp(type, "decode") == 0) {
        printf("Not implemented\n");
    } else {
        printf("Command not recognized\n");
    }

    return 0;
}