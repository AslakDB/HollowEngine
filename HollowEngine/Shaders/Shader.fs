#version 330 core
out vec4 FragColor;

#define MAX_POINT_LIGHTS 64

in vec3 ourNormal;
in vec3 ourColor;
in vec3 ourPos;
uniform vec4 Color;
vec3 lightColor;
vec3 lightPos;
vec3 norm;


void main()
{
lightColor = vec3(1.0);
lightPos = vec3(10, 10, 0);
norm = normalize(ourNormal);

lightPos = normalize(lightPos- ourPos);

float diff = max(dot(norm, lightPos), 0.0);
vec3 diffuse = diff * lightColor;

float ambientStrength = 0.6;
    vec3 ambient = ambientStrength * lightColor;


    vec3 result = (ambient +diffuse) * ourColor;
    FragColor = vec4(result, 1.0);
};