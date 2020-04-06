//Lisong Sun, lcs2672
#include <stdint.h>

int sumsTo(uint32_t x[], uint32_t n, uint32_t k, uint32_t v) {
    if (v == 0 && k == 0) {
        return 1;
    }
    if (v != 0 && k == 0) {
        return 0;
    }
    if (n == 0) {
        return 0;
    }
    int res1 = 0;
    if (v >= x[0]) {
        res1 = sumsTo(x+1, n-1, k-1, v-x[0]);
    }
    int res2  = sumsTo(x+1, n-1, k, v);
    return res1 || res2;
}
