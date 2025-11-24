#include "../../include/main/shapes.h"

inline float area_circle(float r){
    return PI * (r * r);
} 

inline float vol_cone(float r, float y){

    return (PI * (r * r) * y) / 3.0f;
}

inline float vol_cube(float baseline){
    return baseline * baseline * baseline;
}

inline float vol_cylinder(float r, float y){
    return (PI * (r * r)) * y;
}

inline float vol_pyramid(float areaX, float areaZ, float y){
    return ((areaX * areaZ) * y) / 3.0f;
}

inline float vol_sphere(float r){
    return (4.0f / 3.0f) * PI * (r * r * r);
}

inline float area_triangle(float base, float y){
    return (base * y) / 2.0f;
}