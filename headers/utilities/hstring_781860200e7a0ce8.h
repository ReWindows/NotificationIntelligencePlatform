#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationIntelligencePlatform.dll by Windissect. 5 member(s).
namespace winrt {
class hstring {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?c_str@hstring@winrt@@QEBAPEB_WXZ
    wchar_t const * c_str() const;
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@winrt@@QEAA@PEB_W@Z
    hstring(wchar_t const *);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@winrt@@QEAA@PEB_WI@Z
    hstring(wchar_t const *, unsigned int);
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@winrt@@QEAA@AEBU01@@Z
    hstring(WindissectOpaque const &);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1hstring@winrt@@QEAA@XZ
    ~hstring();
};
} // namespace winrt
