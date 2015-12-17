#include "AggressiveAgentStrategy.h"

namespace Gaming
{
    AggressiveAgentStrategy::DEFAULT_AGGRESSION_THRESHOLD = Game::STARTING_AGENT_ENERGY * 0.75;
    
    AggressiveAgentStrategy::~AggressiveAgentStrategy(){
        
    }
    
    ActionType AggressiveAgentStrategy::ActionType operator()(const Surroundings & s) const{
        auto it = s.array.begin();
        int index = 0;
        
        for( ; it != s.array.end(); ++it)
        {
            if((__agentEnergy >= DEFAULT_AGGRESSION_THRESHOLD) && (*it == SIMPLE || *it == STRATEGIC))
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
     
            else if(*it == ADVANTAGE)
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
     
            else if(*it == FOOD)
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
    
     
            else if(*it == EMPTY)
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

   


