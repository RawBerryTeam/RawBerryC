/* 
 * ---------------------------------------------------------------
 *                            RawBerry
 * (c) RawBerry Team
 * Published on license MIT. Read `/LICENSE` for more details.
 * ---------------------------------------------------------------
*/
#include "main.h"
#include "../drivers/vga.h"
#include "../drivers/port.h"
#include <stdio.h>

void launch_kernel(void) {
    vga_initialize();
    vga_print_string("Kernel loaded.\n");
    print_log(); //hehe
    vga_print_string("Welcome RawBerry!\n");
    
    vga_print_string("user.host > ");
}
