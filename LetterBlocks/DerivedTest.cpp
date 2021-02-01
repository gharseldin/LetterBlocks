//
//  DerivedTest.cpp
//  LetterBlocks
//
//  Created by Ahmed Ghars El-Din on 01/02/2021.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#include "DerivedTest.hpp"

DerivedTest::DerivedTest() : BeautifulTextWriter(){
    specs = specifyText();
}
Specification DerivedTest::specifyText() {
    Specification MyString;
    MyString.style = 3;
    MyString.text = "TRIAL";
    return MyString;
}
