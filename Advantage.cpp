//
// Created by Narayan Ramjali
//


#include <iostream>
#include "Advantage.h"

namespace Gaming {
    
    char Advantage::ADVANTAGE_ID = 'D';
    double Advantage::ADVANTAGE_MULT_FACTOR = 2.0;
    
    void Advantage::print(std::ostream & os) const{
        os << ADVANTAGE_ID;
    }
    
    double Advantage::getCapacity() const{
        return __capacity;
    }
    
    double Advantage::consume(){
        return consume;
    }
}
