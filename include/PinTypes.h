#ifndef __PINTYPES_H__
#define __PINTYPES_H__

namespace Jynsaillar::PinTypes
{
    enum PinType
    {
        NC = 0,      // [N]ot [C]onnected
        Analog = 1,  // Analog signals, for analog-digital-converter pins
        Digital = 2, // Purely digital signals, LOW & HIGH
        Net = 3      // Power network, e.g. GND, COM, VSS, VCC
    };
}
#endif // __PINTYPES_H__