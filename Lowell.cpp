//
//  Lowell.cpp
//  tankGameProto
//
//  Created by Batacan, Lowell (Student) on 11/6/17.
//  Copyright © 2017 Batacan, Lowell (Student). All rights reserved.
//

#include "Angel.h"
#include "Lowell.h"
#include "tankGame.h"



void CallLowell()
{
    drawTank1();
}

void drawTank1()
{
    vec4 ka, kd, ks;
    vec3 translation, rotation, scalation;
    
    mat4 transformTank =  Translate(TranslationTank[Xaxis], TranslationTank[Yaxis],TranslationTank[Zaxis]) * RotateY(RotationTank[Yaxis]) ;

    //-----Core
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 0.0, 0.0, 0.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(2.0, 0.5, 2.0);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 0.0, -0.5, 0.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(2.0, 0.5, 2.5);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    //------Head
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 0.0, 0.6, -0.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(2.4, 0.7, 2.6);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    //-------Head Cap
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 0.0, 1.0, -0.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(2.0, 0.3, 2.0);
    drawTankCylinder(ka, kd, ks, translation, scalation, rotation, transformTank);
    
    //------Barrel
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 0.0, 0.6, 2.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(0.3, 0.3, 2.0);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    //-----Barrel Stub
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 0.0, 0.6, 3.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(0.5, 0.5, 0.2);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    
    //-----Legs
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 1.4, -0.5, 0.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(0.8, 0.7, 3.0);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(0.0, 0.5, 0.1, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( -1.4, -0.5, 0.0 );
    rotation = vec3( 0.0, 0.0, 0.0);
    scalation = vec3(0.8, 0.7, 3.0);
    drawTankCube(ka, kd, ks, translation, scalation, transformTank);
    
    //------Treads
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(1.0, 1.0, 1.0, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( -1.4, -0.8, 0.0 );
    rotation = vec3( 0.0, 0.0, 90);
    scalation = vec3(0.8, 0.7, 2.8);
    drawTankCylinder(ka, kd, ks, translation, scalation, rotation, transformTank);
    
    ka =vec4( 0.4, 0.4, 0.4, 1.0 );
    kd =vec4(1.0, 1.0, 1.0, 1.0);
    ks =vec4(0.2, 0.2, 0.2, 1.0);
    translation = vec3( 1.4, -0.8, 0.0 );
    rotation = vec3( 0.0, 0.0, 90);
    scalation = vec3(0.8, 0.7, 2.8);
    drawTankCylinder(ka, kd, ks, translation, scalation, rotation, transformTank);
    
    

    
    
}