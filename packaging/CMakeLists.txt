include(GNUInstallDirs)
include(CMakePackageConfigHelpers)

if (NOT DEFINED ChipPins_INSTALL_CMAKEDIR)
   set(ChipPins_INSTALL_CMAKEDIR "${CMAKE_INSTALL_LIBDIR}/cmake/ChipPins"
       CACHE STRING "Path to ChipPins CMake files")
endif ()

install(TARGETS ChipPins EXPORT ChipPins_Targets
        RUNTIME COMPONENT ChipPins_Runtime
        LIBRARY COMPONENT ChipPins_Runtime
        NAMELINK_COMPONENT ChipPins_Development
        ARCHIVE COMPONENT ChipPins_Development
        INCLUDES DESTINATION "${CMAKE_INSTALL_INCLUDEDIR}")

install(DIRECTORY "${ChipPins_SOURCE_DIR}/include/" "${ChipPins_BINARY_DIR}/include/"
        TYPE INCLUDE
        COMPONENT ChipPins_Development)

if (BUILD_SHARED_LIBS)
    set(type shared)
else ()
    set(type static)
endif ()

install(EXPORT ChipPins_Targets
        DESTINATION "${ChipPins_INSTALL_CMAKEDIR}"
        NAMESPACE ChipPins::
        FILE ChipPins-${type}-targets.cmake
        COMPONENT ChipPins_Development)

write_basic_package_version_file(
    ChipPinsConfigVersion.cmake
    COMPATIBILITY SameMajorVersion)

install(FILES
        "${CMAKE_CURRENT_SOURCE_DIR}/ChipPinsConfig.cmake"
        "${CMAKE_CURRENT_BINARY_DIR}/ChipPinsConfigVersion.cmake"
        DESTINATION "${ChipPins_INSTALL_CMAKEDIR}"
        COMPONENT ChipPins_Development)

# TODO: add additional CPack variables here
include(CPack)
