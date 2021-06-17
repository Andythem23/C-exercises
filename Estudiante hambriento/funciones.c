#include "biblio.h"
bool secome (int v) {
    while (v>0) {
        if (v%7==0 || v%3==0)
            return true;
        v-=3;
    }
    return false;
}