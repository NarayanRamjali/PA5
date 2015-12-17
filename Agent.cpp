//
// Created by Narayan Ramjali
//

include "Agent.h"

namespace Gaming
{
   double Agent::AGENT_FATIGUE_RATE = 0.3;
    
    
    Agent::Agent(const Game &g, const Position &p, double energy):Piece(g,p){
        e=energy;
    }
    
    Agent::~Agent(){
        
    }
    
    Piece & Agent::operator*(Piece & other){
        return other.interact(this);
    }
    
    Piece & Agent::interact(Agent *other){
        return *this;
    }
    
    Piece & Agent::interact(Resource *r){
        e+=resource->consume();
        return *this;
    }
    
    void Agent::age(){
        e = e * AGENT_FATIGUE_RATE;
    }
    
}
