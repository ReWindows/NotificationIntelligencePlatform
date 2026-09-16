#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationIntelligencePlatform.dll by Windissect. 11 member(s).
namespace winrt {
class impl {
public:
    class atomic_ref_count;
    class factory_cache_entry_base;
    class factory_count_guard;
    class implements_delegate_base;
    class slim_source_location;
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?create_hstring_on_heap@impl@winrt@@YAPEAUhstring_header@12@PEB_WI@Z
    WindissectOpaque * create_hstring_on_heap(wchar_t const *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?get_agile_reference@impl@winrt@@YA?AUhresult@2@AEBUguid@2@PEAXPEAPEAX@Z
    WindissectOpaque get_agile_reference(WindissectOpaque const &, void *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?hresult_from_win32@impl@winrt@@YAHI@Z
    int hresult_from_win32(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?make_marshaler@impl@winrt@@YAHPEAUtype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@12@PEAPEAX@Z
    int make_marshaler(WindissectOpaque *, void * *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?precreate_hstring_on_heap@impl@winrt@@YAPEAUshared_hstring_header@12@I@Z
    WindissectOpaque * precreate_hstring_on_heap(unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?report_failed_invoke@impl@winrt@@YA_NXZ
    bool report_failed_invoke();
    // Category: Method | Source: PDB Internal
    // Symbol: ?resume_background_callback@impl@winrt@@YAXPEAX0@Z
    void resume_background_callback(void *, void *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?trim_hresult_message@impl@winrt@@YA?AUhstring@2@QEB_WI@Z
    WindissectOpaque trim_hresult_message(wchar_t const * const, unsigned int);
};
} // namespace winrt
