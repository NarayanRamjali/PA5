#include "Resource.h"

namespace Gaming
{
    double Resource::RESOURCE_SPOIL_FACTOR = 1.2;
    
    Resource(const Game &g, const Position &p, double __capacity){
        __capacity=capacity;
    }
    
    
    double Resource::consume(){
        return 0;
    }
    
    void Resource::age(){
        __capacity-=RESOURCE_SPOIL_FACTOR;
    }
    
    ActionType Resource::takeTurn(const Surroundings & s) const{
    
    }
    
    Piece & Resource::operator*(Piece & other){
        return this;
    }
    
    Piece & Resource::interact(Agent * a){
        return *this;
    }
    
    Piece & Resource::interact(Resource * r){
        return *this;
    }
}
