////////////////////////////////////////////////////////////////////////////////////////////////////////
// Auto-generated code. Do not edit.

#ifndef NET_CORDA_CORE_CRYPTO_SECUREHASH_H
#define NET_CORDA_CORE_CRYPTO_SECUREHASH_H

#include "corda.h"
#include "net/corda/core/utilities/OpaqueBytes.h"

namespace net {
namespace corda {
namespace core {
namespace crypto {
class SecureHash$SHA256;
class SecureHash;
}
}
}
}
namespace net {
namespace corda {
namespace core {
namespace utilities {
class OpaqueBytes;
}
}
}
}
namespace net {
namespace corda {
namespace core {
namespace crypto {

class SecureHash : public net::corda::core::utilities::OpaqueBytes {
public:
    

    SecureHash() = default;

    explicit SecureHash(proton::codec::decoder &decoder) : net::corda::core::utilities::OpaqueBytes(decoder) {
        
    }
};

}
}
}
}

net::corda::TypeRegistration Registration9("net.corda:b79PeMBLsHxu2A23yDYRaA==", [](proton::codec::decoder &decoder) { return new net::corda::core::crypto::SecureHash(decoder); }); // NOLINT(cert-err58-cpp)

#endif