//
//  IceCreamLevel.h
//  tongueGame
//
//  Created by Miri Park on 12/8/15.
//
//

#include "ofMain.h"

class IceCreamLevel{
public:
    IceCreamLevel();
    void draw();
    void update();
    void move();
    void sprinkles();
    int imageIndex;
    float imgHeight, imgWidth;
    float scaleFactor;
    
    //ice cream position
    float iceCreamPosX;
    float iceCreamPosY;
    float initialPosX;
    float initialPosY;
    float moveIncrement;
    
    //sprinkles position
    float sprinkPosX;
    float sprinkPosY;
    
    //string
    
};