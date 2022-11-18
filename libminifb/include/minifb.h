#pragma once

#include <stdio.h>

#include <export.h>

/* Print a greeting for the specified name into the specified
 * stream. On success, return the number of characters printed.
 * On failure, set errno and return a negative value.
 */
LIBMINIFB_SYMEXPORT int
say_hello (FILE *, const char *name);