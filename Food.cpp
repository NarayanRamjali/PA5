#include "Food.h"

namespace Gaming
{
    const char Food::FOOD_ID = 'F';
    
    Food::~Food(){
        
    }
    
    void Food::print(std::ostream & os) const{
        os << FOOD_ID;
    }
}
