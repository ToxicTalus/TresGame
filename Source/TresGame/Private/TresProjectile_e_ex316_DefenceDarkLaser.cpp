#include "TresProjectile_e_ex316_DefenceDarkLaser.h"

ATresProjectile_e_ex316_DefenceDarkLaser::ATresProjectile_e_ex316_DefenceDarkLaser(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_LightBulbEffectData = NULL;
    this->m_DarkLaserEffectData = NULL;
    this->m_DarkLaserCoveringEffectData = NULL;
    this->m_DarkLaserDecalEffectData = NULL;
    this->m_DarkLaserLength = 10000.00f;
    this->m_CanterDistance = 30.00f;
    this->m_DarkLaserDecalSpawnTime = 0.10f;
    this->m_DarkLaserRotateSpeedCurveData = NULL;
    this->m_DarkLaserDecal = NULL;
}
