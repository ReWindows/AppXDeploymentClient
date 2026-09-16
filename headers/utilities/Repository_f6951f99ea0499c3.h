#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 2 member(s).
namespace PackageRepository {
class Repository {
public:
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetReadOnlySession@Repository@PackageRepository@@SAJPEAPEAVIRepositorySession@2@@Z
    static long GetReadOnlySession(WindissectOpaque * *);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?Initialize@Repository@PackageRepository@@CAJXZ
    static long Initialize();
};
} // namespace PackageRepository
