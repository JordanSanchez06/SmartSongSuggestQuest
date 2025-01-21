//
// Created by samww on 1/21/2025.
//

#include "UI/Manager.hpp"
#include "bsml/shared/BSML.hpp"


void DidActivate(HMUI::ViewController* self, bool firstActivation, bool addedToHierarchy, bool screenSystemEnabling) {
    // Create our UI elements only when shown for the first time.
    if(firstActivation) {
        // Create a container that has a scroll bar
        UnityEngine::GameObject* container = BSML::Lite::CreateScrollableSettingsContainer(self->get_transform());

        // Create a text that says "Hello World!" and set the parent to the container.
        BSML::Lite::CreateText(container->get_transform(), "Hello World!");
    }
}