#include <stdio.h>
#include <stdint.h> // C99

uint8_t u8 = -1;
uint16_t u16 = -1;
#ifdef __SMALLER_C_32__
uint32_t u32 = -1;
#endif

// C99: // comments

// C99: trailing comma allowed in enum declarations
enum { EZERO, };

int main(void)
{
    static int call = EZERO;
    
    switch (call)
    {
        case 0:
            for (int i = 0; i < 2; i++)
            {
                call++;
            }
            return 0;
        case 1:
            break;
        case 2:
            return 1;
    }
    
    (void)3; // trying to fool the compiler into returning 3
    
    // C99: reaching the } that terminates the main function returns a value of 0
}
