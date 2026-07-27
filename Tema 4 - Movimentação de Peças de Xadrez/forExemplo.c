
/*
// EXEMPLO 1
#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}

*/

// EXEMPLO 2 - DE 10 EM 10
#include <stdio.h>
 
int main() {
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
        }
    }
   
    return 0;
}

/*
//EXEMPLO 3 DE 100 ATE 0
#include <stdio.h>
 
int main() {
    for (int i = 100; i >= 0; i -= 10) {
        printf("%d\n", i);
    }
   
    return 0;
}
*/