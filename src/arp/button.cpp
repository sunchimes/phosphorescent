#include <string>

#include "daisy_seed.h"
#include "daisysp.h"

#include "button.h"

Button::Button(daisy::Switch hwButton, std::string pitchName, float frequency, bool isHeld)
    : hwButton{ hwButton }
    , pitchName{ pitchName }
    , frequency{ frequency }
    , isHeld{ isHeld }
{
}
