#ifndef __SIGNALS_H__
#define __SIGNALS_H__

namespace Jynsaillar::Signals
{
    enum Signal
    {
        None = -1,
        Low = 0,
        High = 1,
        HighImpedance = 2
    };
} // namespace Jynsaillar::Signals

#endif // __SIGNALS_H__