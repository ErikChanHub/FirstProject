/*
 ============================================================================
 Name        : main.c
 Author      : cjm
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C
 ============================================================================
 */

#include <stdio.h>

/*
 *
 * Print a greeting message on standard output and exit.
 *
 * On embedded platforms this might require semi-hosting or similar.
 *
 * For example, for toolchains derived from GNU Tools for Embedded,
 * to enable semi-hosting, the following was added to the linker:
 *
 * --specs=rdimon.specs -Wl,--start-group -lgcc -lc -lc -lm -lrdimon -Wl,--end-group
 *
 * Adjust it for other toolchains.
 *
 */

int
main(void)
{
  printf("Hello ARM World!" "\n");
  printf("Thank you!" "\n");
  printf("Welcome!" "\n");
  printf("Fine!" "\n");
  printf("Relax" "\n");
  printf("Relax123" "\n");
  return 0;
}
