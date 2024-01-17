#include <string>

#include "daisy_seed.h"
#include "daisysp.h"

#ifndef BUTTON_H // include guard
#define BUTTON_H

class Button
{
    private:
        daisy::Switch hwButton;
        std::string pitchName{}; // Pitch name, e.g. A3
        float frequency{}; // e.g. 440
        bool isHeld{};

    public:
        Button(daisy::Switch hwButton, std::string pitchName, float frequency, bool isHeld);

        daisy::Switch getHwButton() const { return hwButton; }
        std::string getPitchName() const { return pitchName; }
        float getFrequency() const { return frequency; }
        bool getIsHeld() const { return isHeld; }

};

// static std::vector<Button::Button> buttons;

#endif
