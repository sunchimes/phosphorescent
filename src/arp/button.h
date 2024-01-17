// button.h 
#include <string>
#include "daisy_seed.h"
#include "daisysp.h"

using namespace daisy;

#ifndef BUTTON // include guard
#define BUTTON

namespace button 
{
    class Button
    {
        public:
            Switch hwButton;
            std::string pitchName; // Pitch name, e.g. A3
            float frequency; // e.g. 440
            bool isHeld;
            Button(Switch hwButton, std::string pitchName, float frequency, bool isHeld);
    };
    static std::vector<button::Button> buttons;
}

#endif
