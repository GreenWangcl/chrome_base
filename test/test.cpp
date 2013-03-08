#include <stdio.h>

#include "base/time.h"

int main()
{
    base::Time test = base::Time::NowFromSystemTime();
    printf("NowFromSystemTime:%f\n", test.ToDoubleT());
    return 0;
}
