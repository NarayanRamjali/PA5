#include "Game.h"
#include "Piece.h"
#include "Simple.h"
#include "Food.h"
#include "Advantage.h"
#include "Strategic.h"

namespace Gaming
{
    static const unsigned int Game::NUM_INIT_AGENT_FACTOR = 4;
    static const unsigned int Game::NUM_INIT_RESOURCE_FACTOR = 2;
    static const unsigned Game::MIN_WIDTH = 3;
    static const unsigned Game::MIN_HEIGHT = 3;
    static const double Game::STARTING_AGENT_ENERGY = 20;
    static const double Game::STARTING_RESOURCE_CAPACITY = 10;
    
    void Game::populate(){
    }
    
    Game::Game(){
    }
    
    Game::Game(const Game & another){
    }
    
    Game::Game(unsigned int width, unsigned int height, bool manual){
    }
    
    Game::~Game(){
        
    }
    
    unsigned int Game::getNumPieces() const{
        
        return pieces;
        
    }
    
    unsigned int Game::getNumAgents() const{
        return getNumSimple() + getNumStrategic();
    }
    
    unsigned int Game::getNumSimple() const{
        
        return 0;
    }
    
    unsigned int Game::getNumStrategic() const{
        
        return 0;
    }
    
    unsigned int Game::getNumResources(){
        
        return 0;
    }
    
    bool Game::addSimple(const Position & position){
            return true;
    }
    
    bool Game::addSimple(unsigned x, unsigned y){        return true;
    }
    
    bool Game::addStrategic(const Position & position, Strategy *s){
   
        return true;
    }
    
    bool Game::addStrategic(unsigned x, unsigned y, Strategy *s){
    
        return true;
    }
    
    bool Game::addFood(const Position & position){
   
        return true;
    }
    
    bool Game::addFood(unsigned x, unsigned y){
     
        return true;
    }
    
    bool Game::addAdvantage(const Position & position){
     
        return true;
    }
    
    bool Game::addAdvantage(unsigned x, unsigned y){
      
        return true;
    }
    
    const Surroundings Game::getSurroundings(const Position & pos) const{
    
        return Surroundings;
    }
    
    void Game::populate(){
        
    }
    
    std::ostream &operator<<(std::ostream & os, const Game & game){
    
        return os;
    }
    
    bool Game::isLegal(const ActionType & ac, const Position & pos) const{
     
        return true;
    }
    
    const Position Game::move(const Position & pos, const ActionType & ac) const{
     
        return pos;
        
    }
    
    const ActionType Game::reachSurroundings(const Position & from, const Position & to){
    }
    
    void Game::play(bool){
        round();
    }
    
}

