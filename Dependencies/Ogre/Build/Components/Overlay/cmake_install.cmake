# Install script for directory: C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/sdk")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/lib/Release/OgreOverlay.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/bin/Release/OgreOverlay.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/lib/RelWithDebInfo/OgreOverlay.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/bin/RelWithDebInfo/OgreOverlay.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/lib/MinSizeRel/OgreOverlay.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/bin/MinSizeRel/OgreOverlay.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY OPTIONAL FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/lib/Debug/OgreOverlay_d.lib")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE SHARED_LIBRARY FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/bin/Debug/OgreOverlay_d.dll")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/bin/Debug/OgreOverlay_d.pdb")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE FILE FILES "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/bin/RelWithDebInfo/OgreOverlay.pdb")
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/OGRE/Overlay" TYPE FILE FILES
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreBorderPanelOverlayElement.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreFont.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreFontManager.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlay.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlayContainer.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlayElement.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlayElementCommands.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlayElementFactory.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlayManager.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlayProfileSessionListener.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreOverlaySystem.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgrePanelOverlayElement.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Components/Overlay/include/OgreTextAreaOverlayElement.h"
    "C:/hlocal/P3/ProyectoBasico/Dependencies/Ogre/Build/include/OgreOverlayPrerequisites.h"
    )
endif()

