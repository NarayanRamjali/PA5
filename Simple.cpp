#include "Simple.h"

namespace Gaming
{
    const char Simple::SIMPLE_ID = 'S';
    
    
    void Simple::print(std::ostream &os) const{
        os<<SIMPLE_ID;
    }
    
    ActionType Simple::takeTurn(const Surroundings &surroundings) const{
      
    }
}
