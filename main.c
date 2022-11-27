#include <stdio.h>
#include "my_mat.h"


int main() {
    char c;
    while (scanf("%c", &c)==1)
    {
        switch (c) {
            case 'A':
                A();
            case 'B':
                B();
            case 'C':
                C();
            case 'D':
                return 0;
        }
    }
    return 0;
}