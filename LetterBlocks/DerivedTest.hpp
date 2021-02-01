//
//  DerivedTest.hpp
//  LetterBlocks
//
//  Created by Ahmed Ghars El-Din on 01/02/2021.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#ifndef DerivedTest_hpp
#define DerivedTest_hpp
#include "BeautifulTextWriter.h"

class DerivedTest:public BeautifulTextWriter{

public:
    DerivedTest();

protected:
    Specification specifyText() override;
    
};
#endif /* DerivedTest_hpp */
