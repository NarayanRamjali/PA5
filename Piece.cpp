#include "Piece.h"

namespace Gaming
{
    
    Piece::Piece(const Game &g, const Position &p):{
        __id=g;
        __finished=false;
        __turned= false;
        __position=p;
    }
    
    Piece::~Piece(){
        
    }
    
    std::ostream &Gaming::operator<<(std::ostream &os, const Piece &piece){
        return os;
    }
    
}
