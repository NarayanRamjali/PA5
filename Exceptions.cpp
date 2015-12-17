#include "Exceptions.h"
using namespace std;

namespace Gaming {
    
    std::ostream &operator<<(std::ostream &os, const GamingException &ex) {
        
        return os;
    }
    
    
    void GamingException::setName(std::string name){
    
    }
    
    DimensionEx::DimensionEx(unsigned expWidth, unsigned expHeight, unsigned width, unsigned height) {
    
    }
    
    
    
    unsigned DimensionEx::getExpWidth() const{
        __exp_width = expWidth;
    }
    
    unsigned DimensionEx::getExpHeight() const{
         __exp_height = expHeight;
    }
    
    unsigned DimensionEx::getWidth() const{
        __width = width;
    }
    
    unsigned DimensionEx::getHeight() const{
       __height = height;
    }
    
    void InsufficientDimensionsEx::__print_args(std::ostream &os) const {
        
        cout << "Args for InsufficientDimensionsEx  " << endl;
        cout << "Width: " << __width << endl;
        cout << "Height: " << __height << endl;
        cout << "ExpWidth: " << __exp_width << endl;
        cout << "ExpHeight: " << __exp_height << endl;
        
    }
    
    void OutOfBoundsEx::__print_args(std::ostream &os) const {
        
        cout <<"Args for OutOfBoundsEx " << endl;
        cout << "Width: " << __width << endl;
        cout << "Height: " << __height << endl;
        cout << "ExpWidth: " << __exp_width << endl;
        cout << "ExpHeight: " << __exp_height << endl;
        
    }
}
