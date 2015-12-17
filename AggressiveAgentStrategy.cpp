#include "AggressiveAgentStrategy.h"

namespace Gaming
{
    AggressiveAgentStrategy::DEFAULT_AGGRESSION_THRESHOLD = Game::STARTING_AGENT_ENERGY * 0.75;
    
    AggressiveAgentStrategy::~AggressiveAgentStrategy(){
        
    }
    
    ActionType AggressiveAgentStrategy::Actiontype operator()(const Surroundings & s) const{
        auto iterator = s.array.begin();
        int index = 0;
        
        for(iterator != s.array.end(); iterator++)
        {
            if((__agentEnergy >= DEFAULT_AGGRESSION_THRESHOLD) &&  (*iterator == STRATEGIC)))
            {
                switch(index)
                {
                    case 0: return N;
                        break;
                    case 1: return NE;
                        break;
                    case 2: return NW;
                        break;
                    case 3: return E;
                        break;
                    case 4: return W;
                        break;
                    case 5: return SE;
                        break;
                    case 6: return SW;
                        break;
                    case 7: return STAY;
                        break;
                    case 8: return S;
                        break;
                }
            }
            
            else if(*iterator == ADVANTAGE)
            {
                switch(index)
                {
                    case 0: return N;
                        break;
                    case 1: return NE;
                        break;
                    case 2: return NW;
                        break;
                    case 3: return E;
                        break;
                    case 4: return W;
                        break;
                    case 5: return SE;
                        break;
                    case 6: return SW;
                        break;
                    case 7: return STAY;
                        break;
                    case 8: return S;
                        break;
                }
            }
            
            else if(*iterator == FOOD)
            {
                switch(index)
                {
                    case 0: return N;
                        break;
                    case 1: return NE;
                        break;
                    case 2: return NW;
                        break;
                    case 3: return E;
                        break;
                    case 4: return W;
                        break;
                    case 5: return SE;
                        break;
                    case 6: return SW;
                        break;
                    case 7: return STAY;
                        break;
                    case 8: return S;
                        break;
                }
            }
            
            else if(*iterator == EMPTY)
            {
                switch(index)
                {
                    case 0: return N;
                        break;
                    case 1: return NE;
                        break;
                    case 2: return NW;
                        break;
                    case 3: return E;
                        break;
                    case 4: return W;
                        break;
                    case 5: return SE;
                        break;
                    case 6: return SW;
                        break;
                    case 7: return STAY;
                        break;
                    case 8: return S;
                        break;
                }
            }
        }
        
        index ++;
        
        return STAY;
    }
}
