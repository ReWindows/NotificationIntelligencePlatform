#pragma once
#include "../windissect_forwards.h"

// Reconstructed from NotificationIntelligencePlatform.dll by Windissect. 5 member(s).
namespace IntelligentNotificationTelemetry {
class GetSuggestionsActivity {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartActivity@GetSuggestionsActivity@IntelligentNotificationTelemetry@@QEAAX_K@Z
    void StartActivity(uint64_t);
    // Category: Method | Source: PDB Internal
    // Symbol: ?Stop@GetSuggestionsActivity@IntelligentNotificationTelemetry@@QEAAXK_N0AEBW4AuthCodeResult@NotificationIntelligencePlatform@@AEBW4UrlExtractorResult@4@0@Z
    void Stop(unsigned long, bool, bool, int const &, int const &, bool);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1GetSuggestionsActivity@IntelligentNotificationTelemetry@@QEAA@XZ
    ~GetSuggestionsActivity();
protected:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StopActivity@GetSuggestionsActivity@IntelligentNotificationTelemetry@@MEAAXXZ
    virtual void StopActivity();
    // Category: Method | Source: PDB Internal
    // Symbol: ?WasAlreadyReportedToTelemetry@GetSuggestionsActivity@IntelligentNotificationTelemetry@@MEAA_NJ@Z
    virtual bool WasAlreadyReportedToTelemetry(long);
};
} // namespace IntelligentNotificationTelemetry
