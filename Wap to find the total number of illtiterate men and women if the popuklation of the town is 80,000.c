#include <stdio.h>
int main() {
    int population = 80000;
    int men = (52 * population) / 100;
    int women = population - men;
    int literate = (48 * population) / 100;
    int literate_men = (35 * population) / 100;
    int illiterate_men = men - literate_men;
    int literate_women = literate - literate_men;
    int illiterate_women = women - literate_women;
    printf("Illiterate Men: %d\n", illiterate_men);
    printf("Illiterate Women: %d\n", illiterate_women);
}