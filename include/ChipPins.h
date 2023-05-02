#ifndef __ChipPins_H__
#define __ChipPins_H__

#include "PinTypes.h"
#include "ActivationTypes.h"
#include "Signals.h"

namespace Jynsaillar::ChipPins
{
    class ChipPin
    {
    private:
    public:
        const char *Name;                               // Pin name, e.g. CE, SCL, SDA, CS, ...
        bool Enabled;                                   // Pin enabled/disabled?
        PinTypes::PinType PinType;                      // NC/Analog/Digital?
        ActivationTypes::ActivationType ActivationType; // Active Low/Active High?
        Signals::Signal Signal;                         // Low/High/HighImpedance?

        operator bool() const;
    };
} // namespace Jynsaillar::ChipPins

#endif // __ChipPins_H__