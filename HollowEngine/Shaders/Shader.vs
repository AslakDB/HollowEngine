﻿#version 330 core

layout (location = 0) in vec3 aPos;
layout (location = 1) in vec3 aColor;
layout (location = 2) in vec3 aNormal;

out vec3 ourColor;
out vec3 ourNormal;
out vec3 ourPos;


uniform mat4 transform;
uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

void main()
{
    gl_Position = projection * view * model * vec4(aPos, 1.0);
    ourNormal = aNormal;
    ourColor = aColor;
    ourPos = vec3 (model * vec4(aPos,1.0));

};