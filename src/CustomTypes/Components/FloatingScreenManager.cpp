#include "CustomTypes/Components/FloatingScreenManager.hpp"
#include "CustomTypes/Components/FloatingScreen.hpp"
#include "CustomTypes/Components/FloatingScreenMoverPointer.hpp"

#include "UnityEngine/GameObject.hpp"

#include "VRUIControls/VRPointer.hpp"

DEFINE_CLASS(QuestUI::FloatingScreenManager);

void QuestUI::FloatingScreenManager::createMover(QuestUI::FloatingScreen* screen, VRUIControls::VRPointer* vrPointer){
    auto mover = vrPointer->get_gameObject()->AddComponent<QuestUI::FloatingScreenMoverPointer*>();
    mover->Init(screen, vrPointer);
}