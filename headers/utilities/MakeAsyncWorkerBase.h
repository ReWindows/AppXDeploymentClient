#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 5 member(s).
namespace details {
class MakeAsyncWorkerBase {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?StartSelf@MakeAsyncWorkerBase@details@@QEAAJPEAU_TP_CALLBACK_ENVIRON_V3@@@Z
    long StartSelf(_TP_CALLBACK_ENVIRON_V3*);
    // Category: Dtor | Source: PDB Internal
    // Symbol: ??1MakeAsyncWorkerBase@details@@UEAA@XZ
    virtual ~MakeAsyncWorkerBase();
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Execute@MakeAsyncWorkerBase@details@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z
    static void Execute(_TP_CALLBACK_INSTANCE *, void *, _TP_WORK *);
};
} // namespace details
