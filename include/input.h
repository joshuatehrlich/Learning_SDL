#ifndef INPUT_H
#define INPUT_H
#include <SDL3/SDL.h>

struct DirectionalInputs
{
    bool left, right, up, down;
};
struct InputDirection
{
    double x, y;
};

void handleWASD(SDL_Event *event, DirectionalInputs& dirIn);

void handleIinputDirection(DirectionalInputs &dirIn, InputDirection &inDir);

#endif // INPUT_H