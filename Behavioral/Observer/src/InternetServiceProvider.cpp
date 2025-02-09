#include "InternetServiceProvider.h"
#include <algorithm>

InternetServiceProvider::InternetServiceProvider() : m_PriceInUSD(0.0f) {}

void InternetServiceProvider::Attach(IUser* user) {
    if (std::find(m_Users.begin(), m_Users.end(), user) == m_Users.end()) {
        m_Users.emplace_back(user);
    }
}

void InternetServiceProvider::Remove(IUser* user) {
    m_Users.remove(user);
}

void InternetServiceProvider::Notify() {
    for (IUser* user : m_Users) {
        user->Update(m_PriceInUSD);
    }
}

void InternetServiceProvider::set_price(const float& price_in_USD) {
    if (price_in_USD > 0.0f) {
        m_PriceInUSD = price_in_USD;
        Notify();
    }
}

