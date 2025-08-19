#include <arch/int.h>
#include <arch/irq.h>


/**********************************************************************
 * functions
 **********************************************************************/

void irq_timer()
{
}

void irq_handler(word_t irq)
{
}

void irq_init()
{
    // initialise hardware

    int_setup();
    irq_setup();
}
