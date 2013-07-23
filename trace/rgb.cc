//rgb.cc

#include <iostream.h>
#include "rgb.h"

void rgb::full_dump(void)
{
 cout << ((valid=true)?"valid":"invalid") << ", " << red << ", " << green << ", " << blue << "\n";
}
