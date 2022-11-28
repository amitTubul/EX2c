#include <stdio.h>
#include "my_mat.h"

int main() {
    char c;

    while (scanf("%c", &c)!=EOF)
    {
        switch (c) {
            case 'A':
                A();
                break;
            case 'B':
                B();
                break;
            case 'C':
                C();
                break;
            case 'D':
                return 0;

        }


    }
    return 0;
}