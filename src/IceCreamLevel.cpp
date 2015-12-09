
//
//  IceCreamLevel.cpp
//  tongueGame
//
//  Created by Miri Park on 12/8/15.
//
//

#include "IceCreamLevel.h"

#define MAXIMAGES 75

ofImage iceCreamAnimation[MAXIMAGES];

IceCreamLevel::IceCreamLevel(){
    string index;
    for(int i =0; i< MAXIMAGES; i++){
        index = ofToString(i + 10);
        iceCreamAnimation[i].loadImage("iceCream/iceCream000" + index + ".png");
    }
    imgHeight = iceCreamAnimation[0].getHeight();
    imgWidth = iceCreamAnimation[0].getWidth();
    scaleFactor = 0.5;
    
    initialPosX = -imgWidth * 0.5 * scaleFactor;
    initialPosY = ofGetWindowHeight() - imgHeight * scaleFactor;
    iceCreamPosX = initialPosX;
    iceCreamPosY = initialPosY;
    
    moveIncrement = 5;
}

void IceCreamLevel::draw(){
    iceCreamAnimation[imageIndex].draw(iceCreamPosX, iceCreamPosY, imgWidth * scaleFactor, imgHeight * scaleFactor);
}

void IceCreamLevel::update(){
    if (ofGetFrameNum() % 7 == 0){
        imageIndex = (imageIndex + 1) % MAXIMAGES;
    }
    cout << imageIndex << endl;
}

void IceCreamLevel::move(){
    iceCreamPosX += moveIncrement;
    if (iceCreamPosX > ofGetWindowWidth()/2 - imgWidth * scaleFactor || iceCreamPosX < -ofGetWindowWidth()/2){
        moveIncrement *= -1;
    }
}