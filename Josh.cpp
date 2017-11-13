//
//  Josh.cpp
//  tankGameProto
//
//  Created by Batacan, Lowell (Student) on 11/6/17.
//  Copyright © 2017 Batacan, Lowell (Student). All rights reserved.
//
#include <unistd.h>

#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <iostream>
using namespace std;

#include <GLUT/glut.h>


#include "Josh.h"
#include "Angel.h"
#include "tankGame.h"


//----------------------------------------------------------------------------







void CallJosh()
{
    vec4 ka, kd, ks;
    //ka = vec4(0.4, 0.4, 0.4, 1.0);
    //kd = vec4(0.3, 0.3, 1.0, 1.0);
    //ks = vec4(0.2, 0.2, 0.2, 1.0);
    
    vec4 lpos = vec4( -15.0, 5.0, 0.0, 1.0 );
    
    
    ka = vec4(0.7, 0.0, 1.0, 1.0);
    kd = vec4(0.7, 0.0, 1.0, 1.0);
    ks = vec4(0.7, 0.0, 1.0, 1.0);
    float s = 1.0;
    vec3 Translation = (-10, 1.0, -5.0);
    vec3 scalation = (2.0, 2.0, 2.0);
    drawCubeStatic(ka, kd, ks, Translation, scalation, lpos);
    
    
}
