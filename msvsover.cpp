//----
// msvsover
//----
#include <string>
#include <cstdint>
#include <iostream>


#include "Bitwidth_Style_Types.h"

// explicitly named funcs implement proper per type
// (these are needed for c)

std::string t_uint8(conduit_uint8) { return "ui8";}
std::string t_uint16(conduit_uint16) { return "ui16";}
std::string t_uint32(conduit_uint32) { return "ui32";}
std::string t_uint64(conduit_uint64) { return "ui64";}

std::string t_float32(conduit_float32) { return "f32";}
std::string t_float64(conduit_float64) { return "f64";}

// overload funcs use explicitly named variants

std::string t(conduit_uint8  v)  { return t_uint8(v);}
std::string t(conduit_uint16 v)  { return t_uint16(v);}
std::string t(conduit_uint32 v)  { return t_uint32(v);}
std::string t(conduit_uint64 v)  { return t_uint64(v);}

std::string t(conduit_float32 v) { return t_float32(v);}
std::string t(conduit_float64 v) { return t_float64(v);}


int main()
{   
    // bitwidth style types we want to support 
    // (windows, linux, osx)
    conduit_uint8  u8  = 8;
    conduit_uint16 u16 = 16;
    conduit_uint32 u32 = 32;
    conduit_uint64 u64 = 64;
    
    conduit_float32 f32 = 3.14159;
    conduit_float64 f64 = 3.14159;
    
    std::cout << "u8:  " << t(u8)  << std::endl
              << "u16: " << t(u16) << std::endl
              << "u32: " << t(u32) << std::endl
              << "u64: " << t(u64) << std::endl
              << "f32: " << t(f32) << std::endl
              << "f64: " << t(f64) << std::endl;
                
    // c-native types we want to support on all platforms 
    // (windows, linux, osx)
    unsigned char  uc  = 10;
    unsigned short us  = 10;
    unsigned int   ui  = 10;
    unsigned long  ul  = 10;

    float          f   = 3.1415;
    double         d   = 3.1415;

    std::cout << "uc: " << t(uc) << std::endl
              << "us: " << t(us) << std::endl
              << "ui: " << t(ui) << std::endl
              << "ul: " << t(ul) << std::endl
              << "f:  " << t(f) << std::endl
              << "d:  " << t(d) << std::endl;
                


}