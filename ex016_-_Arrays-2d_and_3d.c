#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums2d[3][2] = {
                        {00,01},
                        {10,11},
                        {20,21}
    };

    int nums3d[2][3][4] = {
                            {   {0,     1,      2,      3 },
                                {10,    11,     12,     13},
                                {20,    21,     22,     23}   },

                            {   {100,   101,    102,    103},
                                {110,   111,    112,    113},
                                {120,   121,    122,    123}  }
    };

    int i, j, k;
    printf("{\n");
    for (i = 0; i < 2; i++) {
        printf("\t{\n");
        for (j = 0; j < 3; j++) {
            printf("\t\t{ ");
            for (k = 0; k < 4; k++) {
                printf("\t %d\t", nums3d[i][j][k]);
            }
            printf("\t}\n"); k = 0;
        }
        printf("\t}\n"); j = 0;
    }
    printf("{\n"); i = 0;

    printf("\n");

    printf("{\n");
    for (i = 0; i < 2; i++) {
        printf("\t{\n");
        for (j = 0; j < 3; j++) {
            printf("\t\t{ ");
            for (k = 0; k < 4; k++) {
                printf("\t [%p]\t", &nums3d[i][j][k]);
            }
            printf("\t}\n"); k = 0;
        }
        printf("\t}\n"); j = 0;
    }
    printf("{\n"); i = 0;

    return 0;
}
