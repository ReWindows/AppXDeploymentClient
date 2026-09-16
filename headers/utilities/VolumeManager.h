#pragma once
#include "../windissect_forwards.h"

// Reconstructed from AppXDeploymentClient.dll by Windissect. 18 member(s).
namespace Common::Deployment {
class VolumeManager {
public:
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByKey@VolumeManager@Deployment@Common@@SAJIPEAVVolume@23@@Z
    static long FindByKey(unsigned int, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMediaId@VolumeManager@Deployment@Common@@SAJPEBGPEAVVolume@23@@Z
    static long FindByMediaId(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByName@VolumeManager@Deployment@Common@@SAJPEBGPEAVVolume@23@@Z
    static long FindByName(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByPath@VolumeManager@Deployment@Common@@SAJPEBGPEAVVolume@23@@Z
    static long FindByPath(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetAllVolumes@VolumeManager@Deployment@Common@@SAJPEAV?$Array@VVolume@Deployment@Common@@V?$ContainerOperations@VVolume@Deployment@Common@@V123@@3@VNoKey@3@V?$ContainerOperations@VNoKey@Common@@VVolume@Deployment@2@@3@V?$ArrayOperations@VVolume@Deployment@Common@@VNoKey@3@@3@@3@@Z
    static long GetAllVolumes(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetDefaultVolume@VolumeManager@Deployment@Common@@SAJPEAVVolume@23@@Z
    static long GetDefaultVolume(WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeClusterSize@VolumeManager@Deployment@Common@@SAJIPEAI@Z
    static long GetVolumeClusterSize(unsigned int, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeClusterSize@VolumeManager@Deployment@Common@@SAJPEBVVolume@23@PEAI@Z
    static long GetVolumeClusterSize(WindissectOpaque const *, unsigned int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeInformationW@VolumeManager@Deployment@Common@@SAJPEBGPEAPEAG1PEAW4VolumeFlags@23@@Z
    static long GetVolumeInformationW(unsigned short const *, unsigned short * *, unsigned short * *, int *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetVolumeName@VolumeManager@Deployment@Common@@SAJPEBGPEAGI@Z
    static long GetVolumeName(unsigned short const *, unsigned short *, unsigned int);
private:
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnsureVolumeIsComplete@VolumeManager@Deployment@Common@@CAJPEAVVolume@23@@Z
    static long EnsureVolumeIsComplete(WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?EnumerateVolumesInternal@VolumeManager@Deployment@Common@@CAJ_NPEAV?$Array@VVolume@Deployment@Common@@V?$ContainerOperations@VVolume@Deployment@Common@@V123@@3@VNoKey@3@V?$ContainerOperations@VNoKey@Common@@VVolume@Deployment@2@@3@V?$ArrayOperations@VVolume@Deployment@Common@@VNoKey@3@@3@@3@@Z
    static long EnumerateVolumesInternal(bool, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByMediaIdInternal@VolumeManager@Deployment@Common@@CAJPEBGPEAVVolume@23@@Z
    static long FindByMediaIdInternal(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?FindByNameInternal@VolumeManager@Deployment@Common@@CAJPEBGPEAVVolume@23@@Z
    static long FindByNameInternal(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetFirstMountPointFromVolumeName@VolumeManager@Deployment@Common@@CAJPEBGPEAVStringBuffer@3@@Z
    static long GetFirstMountPointFromVolumeName(unsigned short const *, WindissectOpaque *);
    // Category: Accessor | Source: PDB Internal
    // Symbol: ?GetMediaIdForMountPoint@VolumeManager@Deployment@Common@@CAJPEBGPEAGI@Z
    static long GetMediaIdForMountPoint(unsigned short const *, unsigned short *, unsigned int);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVolume@VolumeManager@Deployment@Common@@CAJPEBGPEAVVolume@23@@Z
    static long ReadVolume(unsigned short const *, WindissectOpaque *);
    // Category: Method | Source: PDB Internal
    // Symbol: ?ReadVolume@VolumeManager@Deployment@Common@@CAJIPEAVVolume@23@@Z
    static long ReadVolume(unsigned int, WindissectOpaque *);
};
} // namespace Common::Deployment
