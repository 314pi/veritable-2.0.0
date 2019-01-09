# This file will be configured to contain variables for CPack. These variables
# should be set in the CMake list file of the project before CPack module is
# included. Example variables are:
#   CPACK_GENERATOR                     - Generator used to create package
#   CPACK_INSTALL_CMAKE_PROJECTS        - For each project (path, name, component)
#   CPACK_CMAKE_GENERATOR               - CMake Generator used for the projects
#   CPACK_INSTALL_COMMANDS              - Extra commands to install components
#   CPACK_INSTALLED_DIRECTORIES           - Extra directories to install
#   CPACK_PACKAGE_DESCRIPTION_FILE      - Description file for the package
#   CPACK_PACKAGE_DESCRIPTION_SUMMARY   - Summary of the package
#   CPACK_PACKAGE_EXECUTABLES           - List of pairs of executables and labels
#   CPACK_PACKAGE_FILE_NAME             - Name of the package generated
#   CPACK_PACKAGE_ICON                  - Icon used for the package
#   CPACK_PACKAGE_INSTALL_DIRECTORY     - Name of directory for the installer
#   CPACK_PACKAGE_NAME                  - Package project name
#   CPACK_PACKAGE_VENDOR                - Package project vendor
#   CPACK_PACKAGE_VERSION               - Package project version
#   CPACK_PACKAGE_VERSION_MAJOR         - Package project version (major)
#   CPACK_PACKAGE_VERSION_MINOR         - Package project version (minor)
#   CPACK_PACKAGE_VERSION_PATCH         - Package project version (patch)

# There are certain generator specific ones

# NSIS Generator:
#   CPACK_PACKAGE_INSTALL_REGISTRY_KEY  - Name of the registry key for the installer
#   CPACK_NSIS_EXTRA_UNINSTALL_COMMANDS - Extra commands used during uninstall
#   CPACK_NSIS_EXTRA_INSTALL_COMMANDS   - Extra commands used during install


SET(CPACK_BINARY_BUNDLE "")
SET(CPACK_BINARY_CYGWIN "")
SET(CPACK_BINARY_DEB "")
SET(CPACK_BINARY_DRAGNDROP "")
SET(CPACK_BINARY_NSIS "ON")
SET(CPACK_BINARY_OSXX11 "")
SET(CPACK_BINARY_PACKAGEMAKER "")
SET(CPACK_BINARY_RPM "")
SET(CPACK_BINARY_STGZ "")
SET(CPACK_BINARY_TBZ2 "")
SET(CPACK_BINARY_TGZ "")
SET(CPACK_BINARY_TZ "")
SET(CPACK_BINARY_ZIP "OFF")
SET(CPACK_CMAKE_GENERATOR "MinGW Makefiles")
SET(CPACK_COMPONENT_UNSPECIFIED_HIDDEN "TRUE")
SET(CPACK_COMPONENT_UNSPECIFIED_REQUIRED "TRUE")
SET(CPACK_GENERATOR "ZIP")
SET(CPACK_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp$;\\.#;/#")
SET(CPACK_INSTALLED_DIRECTORIES "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt;/")
SET(CPACK_INSTALL_CMAKE_PROJECTS "")
SET(CPACK_INSTALL_PREFIX "C:/Program Files (x86)/veritable")
SET(CPACK_MODULE_PATH "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt/cmake/modules")
SET(CPACK_NSIS_CONTACT "veritable-devel@lists.sourceforge.net")
SET(CPACK_NSIS_DISPLAY_NAME "vERITABLE 2.0.0")
SET(CPACK_NSIS_DISPLAY_NAME_SET "TRUE")
SET(CPACK_NSIS_HELP_LINK "http:\\\\veritable.sourceforge.net")
SET(CPACK_NSIS_INSTALLED_ICON_NAME "veritable.exe")
SET(CPACK_NSIS_INSTALLER_ICON_CODE "")
SET(CPACK_NSIS_INSTALLER_MUI_ICON_CODE "")
SET(CPACK_NSIS_INSTALL_ROOT "$PROGRAMFILES")
SET(CPACK_NSIS_MENU_LINKS "veritable.exe;vERITABLE 2.0.0")
SET(CPACK_NSIS_MUI_ICON "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt/ima/data\\veritable.ico")
SET(CPACK_NSIS_PACKAGE_NAME "vERITABLE 2.0.0")
SET(CPACK_NSIS_URL_INFO_ABOUT "http:\\\\veritable.sourceforge.net")
SET(CPACK_OUTPUT_CONFIG_FILE "D:/quantrong/iTalc/qtcreator-build/CPackConfig.cmake")
SET(CPACK_PACKAGE_DEFAULT_LOCATION "/")
SET(CPACK_PACKAGE_DESCRIPTION_FILE "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt/README")
SET(CPACK_PACKAGE_DESCRIPTION_SUMMARY "vERITABLE - Intelligent Teaching And Learning with Computers")
SET(CPACK_PACKAGE_EXECUTABLES "veritable.exe;vERITABLE 2.0.0")
SET(CPACK_PACKAGE_FILE_NAME "veritable-2.0.0--Source")
SET(CPACK_PACKAGE_ICON "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt/data\\nsis_branding.bmp")
SET(CPACK_PACKAGE_INSTALL_DIRECTORY "vERITABLE 2.0.0")
SET(CPACK_PACKAGE_INSTALL_REGISTRY_KEY "vERITABLE 2.0.0")
SET(CPACK_PACKAGE_NAME "veritable")
SET(CPACK_PACKAGE_RELOCATABLE "true")
SET(CPACK_PACKAGE_VENDOR "VERITABLE Developers")
SET(CPACK_PACKAGE_VERSION "2.0.0-")
SET(CPACK_PACKAGE_VERSION_MAJOR "2")
SET(CPACK_PACKAGE_VERSION_MINOR "0")
SET(CPACK_PACKAGE_VERSION_PATCH "0-")
SET(CPACK_RESOURCE_FILE_LICENSE "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt/COPYING")
SET(CPACK_RESOURCE_FILE_README "C:/Program Files (x86)/CMake 2.8/share/cmake-2.8/Templates/CPack.GenericDescription.txt")
SET(CPACK_RESOURCE_FILE_WELCOME "C:/Program Files (x86)/CMake 2.8/share/cmake-2.8/Templates/CPack.GenericWelcome.txt")
SET(CPACK_SET_DESTDIR "OFF")
SET(CPACK_SOURCE_CYGWIN "")
SET(CPACK_SOURCE_GENERATOR "ZIP")
SET(CPACK_SOURCE_IGNORE_FILES "/CVS/;/\\.svn/;/\\.bzr/;/\\.hg/;/\\.git/;\\.swp$;\\.#;/#")
SET(CPACK_SOURCE_INSTALLED_DIRECTORIES "D:/quantrong/iTalc/veritable-2.0.0 - OpenInQt;/")
SET(CPACK_SOURCE_OUTPUT_CONFIG_FILE "D:/quantrong/iTalc/qtcreator-build/CPackSourceConfig.cmake")
SET(CPACK_SOURCE_PACKAGE_FILE_NAME "veritable-2.0.0--Source")
SET(CPACK_SOURCE_TBZ2 "")
SET(CPACK_SOURCE_TGZ "")
SET(CPACK_SOURCE_TOPLEVEL_TAG "win32-Source")
SET(CPACK_SOURCE_TZ "")
SET(CPACK_SOURCE_ZIP "ON")
SET(CPACK_STRIP_FILES "")
SET(CPACK_SYSTEM_NAME "win32")
SET(CPACK_TOPLEVEL_TAG "win32-Source")
