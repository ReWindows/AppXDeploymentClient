#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 3 member(s).
namespace StateRepository {
class LongRunningTransaction {
public /*unspecified*/:
    // Category: Method | Source: PDB Internal
    // Symbol: ?RemoveOldRecords@LongRunningTransaction@StateRepository@@YAJPEBDAEAVDatabase@2@W4ExecutionFlags@2@_N@Z
    long RemoveOldRecords(char const *, WindissectOpaque &, int, bool);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateChangeIds@LongRunningTransaction@StateRepository@@YAJPEBDAEAVDatabase@2@AEA_J2W4ExecutionFlags@2@@Z
    long UpdateChangeIds(char const *, WindissectOpaque &, int64_t &, int64_t &, int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?UpdateDeletedChangeIds@LongRunningTransaction@StateRepository@@YAJPEBDAEAVDatabase@2@AEA_J2W4ExecutionFlags@2@@Z
    long UpdateDeletedChangeIds(char const *, WindissectOpaque &, int64_t &, int64_t &, int);
};
} // namespace StateRepository
