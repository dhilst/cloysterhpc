//
// Created by Vinícius Ferrão on 06/04/22.
//

#ifndef CLOYSTERHPC_BMC_H
#define CLOYSTERHPC_BMC_H

#include <string>

struct BMC {
    enum class kind { IPMI };

    std::string m_address;
    std::string m_username;
    std::string m_password;
    int m_serialPort{0};
    int m_serialSpeed{115200};
};

#endif //CLOYSTERHPC_BMC_H
