#include "func.h"

int main()
{
    Cache cache;
    init_cache(&cache);
    menu(&cache);
    free_cache(&cache);
    return 0;
}