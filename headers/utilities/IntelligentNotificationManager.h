#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationIntelligencePlatform.dll by Windissect. 3 member(s).
namespace winrt::WindowsInternal::NotificationIntelligencePlatform::implementation {
class IntelligentNotificationManager {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetIntelligentSuggestionsAsync@IntelligentNotificationManager@implementation@NotificationIntelligencePlatform@WindowsInternal@winrt@@QEAA?AU?$IAsyncOperation@U?$IVector@UIntelligentSuggestion@NotificationIntelligencePlatform@WindowsInternal@winrt@@@Collections@Foundation@Windows@winrt@@@Foundation@Windows@5@_K@Z
    WindissectOpaque GetIntelligentSuggestionsAsync(uint64_t);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?ConvertToFileTime@IntelligentNotificationManager@implementation@NotificationIntelligencePlatform@WindowsInternal@winrt@@AEAA?AU_FILETIME@@AEBUhstring@5@@Z
    _FILETIME ConvertToFileTime(WindissectOpaque const &);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ParsePayload@IntelligentNotificationManager@implementation@NotificationIntelligencePlatform@WindowsInternal@winrt@@AEAA?AUAppNotificationEntity@3@PEB_W@Z
    ::NotificationIntelligencePlatform::AppNotificationEntity ParsePayload(wchar_t const *);
};
} // namespace winrt::WindowsInternal::NotificationIntelligencePlatform::implementation
