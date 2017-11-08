//
//  tankGame.h
//  TankProject
//
//  Created by Steward, Joshua on 11/8/17.
//  Copyright © 2017 Steward, Joshua. All rights reserved.
//

//extern enum { Xaxis = 0, Yaxis = 1, Zaxis = 2, NumAxes = 3 };
const int Xaxis = 0;
const int Yaxis = 1;
const int Zaxis = 2;
const int NumAxes = 3;
extern int      Axis;
extern GLfloat  Theta1[NumAxes];
extern GLfloat  Theta2[NumAxes];
extern GLfloat  Theta3[NumAxes];
extern GLfloat  Theta4[NumAxes];
extern GLfloat TranslationTank[NumAxes];
extern GLfloat RotationTank[NumAxes];

void SetMaterial(vec4 ka, vec4 kd, vec4 ks, float s);
void SetLight( vec4 lpos, vec4 la, vec4 ld, vec4 ls );
void drawTankCube(vec4 ka, vec4 kd, vec4 ks, vec3 translation, vec3 scalation, mat4 transformTank);
void drawCubeStatic(vec4 ka, vec4 kd, vec4 ks, vec3 translation, vec3 scalation, mat4 transform);
void drawSphere(vec4 ka, vec4 kd, vec4 ks, vec3 translation, vec3 scalation);
void drawCylinder(vec4 ka, vec4 kd, vec4 ks, vec3 translation, vec3 scalation);
void drawTankCylinder(vec4 ka, vec4 kd, vec4 ks, vec3 translation, vec3 scalation, mat4 transformTank);
