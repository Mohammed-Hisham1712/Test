#include <stdio.h>
#include <stdint.h>

/*Git Tutorial Test*/
typedef struct padding_s1
{
    uint8_t  foo1;
    uint16_t foo2;
    uint32_t foo3;
    uint8_t  foo4;
} padding1_t;

typedef struct padding_s2
{
    uint32_t foo3;
    uint16_t foo2;
    uint8_t  foo1;
    uint8_t  foo4;
} padding2_t;

int main(void)
{
    printf("%ld\n", sizeof(padding2_t));
    return 0;
}
