//
// Created by Aslak on 4/5/2024.
//
BasicPlane Plane;

struct Drawer {

    void Creator() {
        Plane.CreateMeshPlane();
    }

    void DrawObjects(unsigned int shaderProgram) {
        Plane.DrawPlane(shaderProgram);
    }

};

#ifndef DRAWOBJECTS_H
#define DRAWOBJECTS_H

#endif //DRAWOBJECTS_H
