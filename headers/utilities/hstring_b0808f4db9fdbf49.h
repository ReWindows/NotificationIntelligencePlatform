#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationIntelligencePlatform.dll by Windissect. 2 member(s).
namespace winrt::param {
class hstring {
public:
    // Category: Ctor | Source: PDB Internal
    // Symbol: ??0hstring@param@winrt@@QEAA@QEB_W@Z
    hstring(wchar_t const * const);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_string_reference@hstring@param@winrt@@AEAAXQEB_W_K@Z
    void create_string_reference(wchar_t const * const, uint64_t);
};
} // namespace winrt::param
