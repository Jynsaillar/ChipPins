#ifndef __ChipPins_H__
#define __ChipPins_H__

#include "PinTypes.h"

namespace Jynsaillar::ChipPins
{
    class ChipPin
    {
    private:
    public:
        const char *Name;              // Pin name, e.g. CE, SCL, SDA, CS, ...
        bool Enabled;                  // Pin enabled/disabled?
        PinTypes::PinType PinType;               // Analog/Digital/NC?
        ActivationType ActivationType; // Active High/Active Low?
        Signal Signal;                 // High/Low/HighImpedance?

        operator bool() const;
    };
} // namespace Jynsaillar::ChipPins

#endif // __ChipPins_H__