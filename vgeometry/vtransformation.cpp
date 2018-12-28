#include "vtransformation.h"
#include <math.h>

using namespace std;


TransformationUtils::TransformationUtils(float sh_x, float sh_y, float sh_z, float route_angle_y, float route_angle_z)
    : _sh_x(sh_x)
    , _sh_y(sh_y)
    , _sh_z(sh_z)
    , _route_angle_y(route_angle_y)
    , _route_angle_z(route_angle_z)
{}

void TransformationUtils::route_angle_z(float *new_x, float *new_y)
{
    float x = *new_x;
    float y = *new_y;

    auto rotate_z = _route_angle_z * M_PI / 180;

    *new_x = x * cos(rotate_z) - y * sin(rotate_z);
    *new_y = x * sin(rotate_z) + y * cos(rotate_z);
}

void TransformationUtils::route_angle_y(float *new_x, float *new_z)
{
    float x = *new_x;
    float z = *new_z;

    auto rotate_y = _route_angle_y * M_PI / 180.0;

    *new_x =  x * cos(rotate_y) + z * sin(rotate_y);
    *new_z = -x * sin(rotate_y) + z * cos(rotate_y);
}

void TransformationUtils::shift(float *x, float *y, float *z)
{
    *x += _sh_x;
    *y += _sh_y;
    *z += _sh_z;
}

void TransformationUtils::shift(float *x, float *y)
{
    *x += _sh_x;
    *y += _sh_y;
}
