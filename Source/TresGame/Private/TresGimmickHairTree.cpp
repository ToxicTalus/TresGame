#include "TresGimmickHairTree.h"

FVector ATresGimmickHairTree::GetActionPointLocation(int32 InIndex) {
    return FVector{};
}

ATresGimmickHairTree::ATresGimmickHairTree(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->m_HairType = false;
    this->m_ActionPointSize2D = 550.00f;
}

