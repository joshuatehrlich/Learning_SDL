#include <input.h>

void handleWASD(SDL_Event *event, DirectionalInputs& dirIn) {
    if (event->type == SDL_EVENT_KEY_DOWN)
    {
        switch (event->key.key)
        {
        case SDLK_D:
            dirIn.right = true;
            break;
        case SDLK_A:
            dirIn.left = true;
            break;
        case SDLK_S:
            dirIn.down = true;
            break;
        case SDLK_W:
            dirIn.up = true;
            break;
        };
    }
	else if (event->type == SDL_EVENT_KEY_UP)
    {
        switch (event->key.key)
        {

        case SDLK_D:
            dirIn.right = false;
            break;
        case SDLK_A:
            dirIn.left = false;
            break;
        case SDLK_S:
            dirIn.down = false;
            break;
        case SDLK_W:
            dirIn.up = false;
            break;
        };
    }
}

void handleIinputDirection(DirectionalInputs &dirIn, InputDirection &inDir)
{
    if (dirIn.right && !dirIn.left)
        inDir.x = 1;
    else if (!dirIn.right && dirIn.left)
        inDir.x = -1;
    else
        inDir.x = 0;

    if (dirIn.down && !dirIn.up)
        inDir.y = 1;
    else if (!dirIn.down && dirIn.up)
        inDir.y = -1;
    else
        inDir.y = 0;
}