//
//  BeautifulTextWriter.cpp
//  LetterBlocks
//
//  Created by Amr Gharseldin on 1/31/21.
//  Copyright © 2021 Gharseldin. All rights reserved.
//

#include "BeautifulTextWriter.h"
#include <iostream>
#include <fstream>

using namespace std;

BeautifulTextWriter::BeautifulTextWriter(){
    
    style1Size = 6;
    style2Size = 13;
    style3Size = 2;
    
    style1Start = 0;
    style2Start = 8;
    style3Start = 21;
    
    deltaStyle = 24;
    
    
    fileName = "Letters.txt";
    specs = specifyText();
}

void BeautifulTextWriter::write(){
    int styleUsed = initializeStyle();
    int LettersFileStart = getStart();

    printLetters(specs.text, styleUsed, LettersFileStart);
}

int BeautifulTextWriter::initializeStyle(){
    switch(specs.style){
        case 1:
            return style1Size;
        case 2:
            return style2Size;
        case 3:
            return style3Size;
        default:
            return style1Size;
    }
}

int BeautifulTextWriter::getStart(){
    switch(specs.style){
        case 1:
            return style1Start;
        case 2:
            return style2Start;
        case 3:
            return style3Start;
        default:
            return style1Size;
    }
}

void BeautifulTextWriter::printLetters(string letters, int lines, int LettersFileStart){
    for(int l = 0; l<lines; l++){
        for(int character = 0; character<int(letters.size()); character++){
            ifstream lettersFile(fileName);
            string line;
            for(int i=0; i<LettersFileStart;i++){
                getline (lettersFile, line);
            }
            int diff = int(letters[character]) - 'A';
            for(int i=0; i< diff ; i++){
                for(int j=0 ; j<deltaStyle; j++)
                    getline(lettersFile, line);
            }
            getline(lettersFile, line);
            cout<<line<<" ";
            lettersFile.close();
        }
        cout<<endl;
        LettersFileStart++;
    }
}

Specification BeautifulTextWriter::specifyText(){
    Specification spec;
    spec.text = "TEST";
    spec.style = 2;
    return spec;
}
