//
//  I_Printable.cpp
//  StudyPlan
//
//  Created by Hoang Viet on 08/02/2021.
//

#include "I_Printable.h"
#include <iostream>

std::ostream &operator<<(std::ostream &os, const I_Printable_Section_16 &obj){
    obj.print_Section_16(os);
    return os;
}
