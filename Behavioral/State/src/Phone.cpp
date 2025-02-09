#include "Phone.h"

Phone::Phone(IScreenState* state) : m_ScreenState(state) {}

void Phone::SetScreenState(IScreenState* state) {
    m_ScreenState = state;
}

void Phone::DoubleTap() {
    if (m_ScreenState != nullptr) {
        m_ScreenState->DoubleTap();
    }
}

