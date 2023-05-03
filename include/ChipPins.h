#ifndef __ChipPins_H__
#define __ChipPins_H__

#include "PinTypes.h"
#include "ActivationTypes.h"
#include "Signals.h"
#include <cstdint>

namespace Jynsaillar::ChipPins
{
    class ChipPin
    {
    private:
    public:
        uint8_t Number;                                 // Pin number
        uint8_t ProxyPin;                               // Pin on an external device (e.g. an Arduino) that the signal should be redirected to (e.g. via Arduino 'digitalWrite(...)' function)
        const char *Name;                               // Pin name, e.g. CE, SCL, SDA, CS, ...
        bool Enabled;                                   // Pin enabled/disabled?
        PinTypes::PinType PinType;                      // NC/Analog/Digital?
        ActivationTypes::ActivationType ActivationType; // Active Low/Active High?
        Signals::Signal Signal;                         // Low/High/HighImpedance?

        operator bool() const;
    };
} // namespace Jynsaillar::ChipPins

#endif // __ChipPins_H__