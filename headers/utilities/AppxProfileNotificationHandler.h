#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 8 member(s).
class AppxProfileNotificationHandler {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnCreate@AppxProfileNotificationHandler@@UEAAJPEBG0K@Z
    virtual long OnCreate(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PDB Internal
    // Symbol: ?OnDelete@AppxProfileNotificationHandler@@UEAAJPEBG0K@Z
    virtual long OnDelete(unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnLoad@AppxProfileNotificationHandler@@UEAAJPEBG0KH@Z
    virtual long OnLoad(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnMigrate@AppxProfileNotificationHandler@@UEAAJPEBG00K@Z
    virtual long OnMigrate(unsigned short const *, unsigned short const *, unsigned short const *, unsigned long);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUnload@AppxProfileNotificationHandler@@UEAAJPEBG0KH@Z
    virtual long OnUnload(unsigned short const *, unsigned short const *, unsigned long, int);
    // Category: Method | Source: PE Export
    // Symbol: ?OnUpgrade@AppxProfileNotificationHandler@@UEAAJPEBG0K@Z
    virtual long OnUpgrade(unsigned short const *, unsigned short const *, unsigned long);
};
