#ifndef _TASK_ADC_H
#define _TASK_ADC_H

#ifdef __cplusplus
 extern "C" {
#endif 

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <errno.h>

#include <nuttx/analog/adc.h>


/****************************************************************************
 * Private Data
 ****************************************************************************/

int master_adc(int argc, char *argv[]);
float read_DC_I(void);



#ifdef __cplusplus
}
#endif

#endif 