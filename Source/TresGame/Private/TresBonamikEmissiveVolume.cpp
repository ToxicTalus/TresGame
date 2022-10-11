#include "TresBonamikEmissiveVolume.h"

ATresBonamikEmissiveVolume::ATresBonamikEmissiveVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_DirectionSpace = ESQEX_Bonamik_EmissiveDirection_UpVec;
    this->m_BaseStrength = 0.00f;
    this->m_WaveAmplitude = 0.00f;
    this->m_WavePeriod = 0.00f;
}

