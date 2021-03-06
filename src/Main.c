/**
 * @file    Main.c
 * @ingroup CrashHandler
 * @brief   A basic Linux crash signal handler in C.
 *
 * Copyright (c) 2018 Sebastien Rombauts (sebastien.rombauts@gmail.com)
 *
 * Distributed under the MIT License (MIT) (See accompanying file LICENSE.txt
 * or copy at http://opensource.org/licenses/MIT)
*/
#include "SignalHandler.h"

#include <stdio.h>      // printf()

int main() {
    printf("installSignalHandler\n");
    installSignalHandler();
    printf("while(1)...\n");
    while(1)
    {}
    printf("bye\n");
    return 0;
}
