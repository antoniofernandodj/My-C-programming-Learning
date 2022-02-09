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
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("%d\t", nums3d[i][j][k]);
            } printf("\n"); k = 0;
        } printf("\n"); j = 0;
    } printf("\n"); i = 0;

    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            for (k = 0; k < 4; k++) {
                printf("%p\t", &nums3d[i][j][k]);
            } printf("\n"); k = 0;
        } printf("\n"); j = 0;
    } printf("\n"); i = 0;

    return 0;
}
