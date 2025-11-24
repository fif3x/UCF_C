#ifndef VARS
#define VARS

extern float r;
extern float y;
extern float V;
extern float areaX;
extern float areaZ;
extern float base;
extern float area;
extern float baseline;

#define PI 3.141592

#endif

#ifndef SHAPES
#define SHAPES


extern inline float area_circle(float r);
extern inline float vol_cone(float r, float y);
extern inline float vol_cube(float baseline);
extern inline float vol_cylinder(float r, float y);
extern inline float vol_pyramid(float sideX, float sideZ, float y);
extern inline float vol_sphere(float r);
extern inline float area_triangle(float base, float y);


#endif