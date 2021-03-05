//
//  string_swap.c
//  hw0103
//
//  Created by Michael Leong on 2021/3/5.
//

#include "string_swap.h"
#include <string.h>

int stringSwap(char **str1, char **str2) {
    char *tempStr = *str1;
    
    *str1 = *str2;
    *str2 = tempStr;
    
    return 1;
}
