//tjulia.h

#ifndef TJULIA
#define TJULIA

#include <complex.h>

#include "texture.h"

class TJulia : public Texture
{
 public:
  TJulia(void);
 
  int max_iter;
  double attract,escape;
  Texture *min, *max;
 protected:
  virtual complex<double> function(complex<double> x) const;
  virtual Surface _get_surface(Vector pos) const;
 private:
};

#endif
