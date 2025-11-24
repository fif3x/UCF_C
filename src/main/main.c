#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "../../include/main/vecf.h"
#include "../../include/main/shapes.h"
#include "../../include/main/general.h"

int main()
{
    vecf results;
    vecf_init(&results, 10);

    bool pause = false;
    bool skip = false;
    char *input = (char *)malloc(8 * sizeof(char));
    char *shape = (char *)malloc(16 * sizeof(char));

    int counter = 0;

    while (!pause)
    {
        skip = false;
        result = 0.0f;
        if (counter >= vecf_size(&results) || counter >= vecf_capacity(&results))
        {
            vecf_resize(&results, vecf_capacity(&results) + 5);
        }

        if (showmem)
        {
            printf("                                                  MEM: %d\n", memUsage);
        }

        printf("OP:> ");
        scanf("%s", input);
        if (!strcmp(input, "exit") || !strcmp(input, ":q"))
        {
            pause = true;
            break;
        }
        else if (!strcmp(input, "shape"))
        {
            printf("SHAPE:> ");
            scanf("%s", shape);
            if (!strcmp(shape, "circle"))
            {
                float temp = 0.0f;
                printf("RADIUS:> ");
                scanf("%f", &temp);
                result = area_circle(temp);
            }
            else if (!strcmp(shape, "cone"))
            {
                float temp_y = 0.0f;
                float temp_r = 0.0f;
                printf("RADIUS:> ");
                scanf("%f", &temp_r);
                printf("HEIGHT:> ");
                scanf("%f", &temp_y);
                result = vol_cone(temp_r, temp_y);
            }
            else if (!strcmp(shape, "cube"))
            {
                float temp_b = 0.0f;
                printf("BASELINE:> ");
                scanf("%f", &temp_b);
                result = vol_cube(temp_b);
            }
            else if (!strcmp(shape, "cylinder"))
            {
                float temp_r = 0.0f;
                float temp_y = 0.0f;
                printf("RADIUS:> ");
                scanf("%f", &temp_r);
                printf("HEIGHT:> ");
                scanf("%f", &temp_y);
                result = vol_cylinder(temp_r, temp_y);
            }
            else if (!strcmp(shape, "pyramid"))
            {
                float temp_y = 0.0f;
                float temp_areaX = 0.0f;
                float temp_areaZ = 0.0f;
                printf("SIDE X:> ");
                scanf("%f", &temp_areaX);
                printf("SIDE Z:> ");
                scanf("%f", &temp_areaZ);
                printf("HEIGHT:> ");
                scanf("%f", &temp_y);
                result = vol_pyramid(temp_areaX, temp_areaZ, temp_y);
            }
            else if (!strcmp(shape, "sphere"))
            {
                float temp_r = 0.0f;
                printf("RADIUS:> ");
                scanf("%f", &temp_r);
                result = vol_sphere(temp_r);
            }
            else if (!strcmp(shape, "triangle"))
            {
                float temp_b = 0.0f;
                float temp_y = 0.0f;
                printf("BASE:> ");
                scanf("%f", &temp_b);
                printf("HEIGHT:> ");
                scanf("%f", &temp_y);
                result = area_triangle(temp_b, temp_y);
            }
            else
            {
                printf("INVALID SHAPE");
            }
        }
        else if (!strcmp(input, "results") == 0)
        {
            for (int i = 0; i < vecf_size(&results); i++)
            {
                printf("%f, ", (float)vecf_at(&results, i));
            }
        }
        else if (!strcmp(input, "+") == 0)
        {
            printf("ARG1:> ");
            scanf("%f", &arg1);
            printf("ARG2:> ");
            scanf(" %f", &arg2);
            result = arg1 + arg2;
        }
        else if (!strcmp(input, "-") == 0)
        {
            printf("ARG1:> ");
            scanf("%f", &arg1);
            printf("ARG2:> ");
            scanf(" %f", &arg2);
            result = arg1 - arg2;
        }
        else if (!strcmp(input, "*") == 0)
        {
            printf("ARG1:> ");
            scanf("%f", &arg1);
            printf("ARG2:> ");
            scanf(" %f", &arg2);
            result = arg1 * arg2;
        }
        else if (!strcmp(input, "/") == 0)
        {
            printf("ARG1:> ");
            scanf("%f", &arg1);
            printf("ARG2:> ");
            scanf(" %f", &arg2);
            if (arg2 == 0.0f)
            {
                printf("MATH ERROR: Division by zero is undefined\n");
                return 1;
            }
            result = arg1 / arg2;
        }
        else if (!strcmp(input, "^") == 0)
        {
            printf("ARG1:> ");
            scanf(" %f", &arg1);
            printf("ARG2:> ");
            scanf(" %f", &arg2);
            for (int i = 0; i < arg2; i++)
            {
                if (i == 0)
                {
                    ftemp = arg1;
                }
                else
                {
                    ftemp = ftemp * arg2;
                }
            }
            result = ftemp;
        }
        else if (!strcmp(input, "C++") == 0)
        {
            printf("The C++ version can be found on GitHub\n");
            skip = true;
        }
        else
        {
            printf("Invalid input\n");
            skip = true;
        }

        if (!skip)
        {
            printf(" = %.4f\n", result);

            vecf_push_back(&results, result);
            counter++;
        }
    }

    vecf_free(&results);
    free(input);
    free(shape);

    return 0;
}