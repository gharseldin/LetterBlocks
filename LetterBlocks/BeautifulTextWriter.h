//
//  BeautifulTextWriter.hpp
//  LetterBlocks
//
//  Created by Amr Gharseldin on 1/31/21.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#ifndef BeautifulTextWriter_h
#define BeautifulTextWriter_h

#include <stdio.h>
#include <iostream>

using namespace std;

struct Specification{
    string text;
    int style;
};


class BeautifulTextWriter{

private:
    // Internaal implementation Attributes
    
    // Number of lines in the letter style
    int style1Size;
    int style2Size;
    int style3Size;
    
    // The start point in the letters file
    int style1Start;
    int style2Start;
    int style3Start;
    
    // The line delta between every letter and the next
    int deltaStyle;
    
    // File containing letter styles
    string fileName;
    
    // Internal implementation Methods
    void writeText();
    int initializeStyle();
    int getStart();
    int getDelta();
    void printLetters(string letter, int lines, int LettersFileStart);
    
protected:
    Specification specs;
    virtual Specification specifyText();
    
public:
    BeautifulTextWriter();
    void write();
    
};
#endif /* BeautifulTextWriter_hpp */
