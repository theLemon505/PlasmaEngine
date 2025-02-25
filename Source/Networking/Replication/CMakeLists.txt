add_library(Replication)

plasma_setup_library(Replication ${CMAKE_CURRENT_LIST_DIR} TRUE)
plasma_use_precompiled_header(Replication ${CMAKE_CURRENT_LIST_DIR})

target_sources(Replication
  PRIVATE
    ${CMAKE_CURRENT_LIST_DIR}/BandwidthStats.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Enums.hpp
    ${CMAKE_CURRENT_LIST_DIR}/LinkInbox.cpp
    ${CMAKE_CURRENT_LIST_DIR}/LinkInbox.hpp
    ${CMAKE_CURRENT_LIST_DIR}/LinkOutbox.cpp
    ${CMAKE_CURRENT_LIST_DIR}/LinkOutbox.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Message.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Message.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MessageChannel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/MessageChannel.hpp
    ${CMAKE_CURRENT_LIST_DIR}/MessageConfig.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Packet.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Packet.hpp
    ${CMAKE_CURRENT_LIST_DIR}/PacketConfig.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Peer.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Peer.hpp
    ${CMAKE_CURRENT_LIST_DIR}/PeerLink.cpp
    ${CMAKE_CURRENT_LIST_DIR}/PeerLink.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Precompiled.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Precompiled.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ProtocolMessageData.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Replica.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Replica.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaChannel.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaChannel.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaConfig.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaProperty.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaProperty.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaStream.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicaStream.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicationStandard.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicationStandard.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Replicator.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Replicator.hpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicatorLink.cpp
    ${CMAKE_CURRENT_LIST_DIR}/ReplicatorLink.hpp
    ${CMAKE_CURRENT_LIST_DIR}/Route.cpp
    ${CMAKE_CURRENT_LIST_DIR}/Route.hpp
)

plasma_target_includes(Replication
  PUBLIC
    Common
    LightningCore
    Geometry
    tracy
)
