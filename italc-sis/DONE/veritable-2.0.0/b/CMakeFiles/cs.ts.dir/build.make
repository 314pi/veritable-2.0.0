# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canoncical targets will work.
.SUFFIXES:

# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list

# Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/npt/Desktop/veritable-2.0.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/npt/Desktop/veritable-2.0.0/b

# Utility rule file for cs.ts.

CMakeFiles/cs.ts:
	QT_LUPDATE_EXECUTABLE-NOTFOUND -I/home/npt/Desktop/veritable-2.0.0/lib/include -locations none -no-obsolete /home/npt/Desktop/veritable-2.0.0/b/CMakeFiles/CompilerIdCXX/CMakeCXXCompilerId.cpp /home/npt/Desktop/veritable-2.0.0/ica/helpers/VeritableAuthHelper.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/DesktopAccessPermission.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/ScreenLockSlaveLauncher.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/VeritableSlaveManager.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/LocalSystemIca.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/VeritableCoreServer.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/DemoServerSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/WindowsService.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/MessageBoxSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/DemoClientSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/AccessDialogSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/IcaMain.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/SystemTrayIconSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/InputLockSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/DemoServer.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/RfbVeritableCursor.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/VeritableVncServer.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/RfbLZORLE.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/ScreenLockSlave.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/DemoServerMaster.cpp /home/npt/Desktop/veritable-2.0.0/ica/src/DemoClient.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/ultravnc-veritable.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/ultravnc.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/common/win32_helpers.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/common/Clipboard.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/MSLogonACL.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/vncImportACL.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/vncExportACL.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauthNT4/ldapAuthnt4.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/workgrpdomnt4/workgrpdomnt4.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauth/ldapAuth.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncAccessControl.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/GenClientServerContext.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/EventLogging.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncSecurityEditor.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/authSSP.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncSSP.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauth9x/ldapAuth9x.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/logging/logging.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/testauth/ntlogon.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authadm/authadmin.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/omnithread/nt.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/omnithread/threaddata.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/DSMPlugin/DSMPlugin.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncserver.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeTight.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/IPC.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vistahook.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncabout.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencoderCursor.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncbuffer.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/helpers.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbUpdateTracker.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/translate.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/service.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncconndialog.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeZlibHex.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodehext.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/CpuUsage.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vsocket.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeUltra.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/benchmark.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncOSVersion.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/buildtime.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnchttpconnect.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncproperties.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncdesktopthread.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeUltra2.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncdesktopsink.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncmenu.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencoder.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncacceptdialog.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbRegion_win32.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/inifile.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncdesktop.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncntlm.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/videodriver.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncclient.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/black_layered.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/initipp.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/service_motor.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnctimedmsgbox.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnclog.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncpropertiesPoll.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/httpconnect.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/winvnc.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/tableinitcmtemplate.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncListDlg.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncDesktopSW.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/security.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/Timer.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeZlib.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodecorre.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnckeymap.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/videodrivercheck.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncsetauth.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/tableinittctemplate.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncsockconnect.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnclogon.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/tabletranstemplate.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodezrle.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/getinfo.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/Dtwinver.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/HideDesktop.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencoderre.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/stdhdrs.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/TextChat.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncservice.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/read_write_ini.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncinsthandler.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncMultiMonitor.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/vnchooks/SharedData.cpp /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/vnchooks/VNCHooks.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/DsaKey.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/SystemKeyTrapper.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Inject.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/PasswordDialog.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Logger.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/LocalSystem.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/3rdparty/XEventLog.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/VncView.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/FastQImage.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/VeritableCore.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/AuthenticationCredentials.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/DecoratedMessageBox.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/LockWidget.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/LogonAuthentication.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Snapshot.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/dh.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/ProgressWidget.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Configuration/XmlStore.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Configuration/Object.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Configuration/LocalStore.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/AboutDialog.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/VeritableVncConnection.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/VeritableConfiguration.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/VeritableCoreConnection.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Ipc/QtSlaveLauncher.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Ipc/Slave.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Ipc/SlaveLauncher.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Ipc/Master.cpp /home/npt/Desktop/veritable-2.0.0/lib/src/Ipc/Core.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/RemoteControlWidget.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/MainToolBar.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/main.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/ClassroomManager.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/MainWindow.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/SideBar.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/OverviewWidget.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/ConfigWidget.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/SnapshotList.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/Dialogs.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/Client.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/SideBarWidget.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/ToolButton.cpp /home/npt/Desktop/veritable-2.0.0/ima/src/RunCommandsDialog.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/SystemConfigurationModifier.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/main.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/MainWindow.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/FileSystemBrowser.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/KeyDirectoriesPage.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/Win32AclEditor.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/LogonGroupEditor.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/KeyFileAssistantModePage.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/KeyFileAssistant.cpp /home/npt/Desktop/veritable-2.0.0/imc/src/ImcCore.cpp /home/npt/Desktop/veritable-2.0.0/b/rfb/rfbconfig.h /home/npt/Desktop/veritable-2.0.0/b/lib/ui_AboutDialog.h /home/npt/Desktop/veritable-2.0.0/b/lib/ui_PasswordDialog.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_Overview.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_RunCommandsDialog.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_MainWindow.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_Snapshots.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_ClientSettingsDialog.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_TextMessageDialog.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_SupportDialog.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_RemoteLogonDialog.h /home/npt/Desktop/veritable-2.0.0/b/ima/ui_Config.h /home/npt/Desktop/veritable-2.0.0/b/veritableconfig.h /home/npt/Desktop/veritable-2.0.0/b/imc/ui_LogonGroupEditor.h /home/npt/Desktop/veritable-2.0.0/b/imc/ui_KeyFileAssistant.h /home/npt/Desktop/veritable-2.0.0/b/imc/ui_MainWindow.h /home/npt/Desktop/veritable-2.0.0/ica/src/WindowsService.h /home/npt/Desktop/veritable-2.0.0/ica/src/VeritableCoreServer.h /home/npt/Desktop/veritable-2.0.0/ica/src/DesktopAccessPermission.h /home/npt/Desktop/veritable-2.0.0/ica/src/InputLockSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/IcaSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/RfbVeritableCursor.h /home/npt/Desktop/veritable-2.0.0/ica/src/ScreenLockSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/ScreenLockSlaveLauncher.h /home/npt/Desktop/veritable-2.0.0/ica/src/DemoServer.h /home/npt/Desktop/veritable-2.0.0/ica/src/DemoServerSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/DemoServerMaster.h /home/npt/Desktop/veritable-2.0.0/ica/src/DemoClientSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/RfbLZORLE.h /home/npt/Desktop/veritable-2.0.0/ica/src/MessageBoxSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/DemoClient.h /home/npt/Desktop/veritable-2.0.0/ica/src/VeritableVncServer.h /home/npt/Desktop/veritable-2.0.0/ica/src/SystemTrayIconSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/AccessDialogSlave.h /home/npt/Desktop/veritable-2.0.0/ica/src/VeritableSlaveManager.h /home/npt/Desktop/veritable-2.0.0/ica/x11/libvncclient/tls.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/rates.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/pm.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/nox11.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xrandr.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/macosxCGS.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xinerama.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/8to24.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xkb_bell.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/v4l.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/solid.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/enums.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/linuxfb.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/blackout_t.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/nox11_funcs.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/help.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/options.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/scan.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/keyboard.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/avahi.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/params.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/user.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xdamage.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/win_utils.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/userinput.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/macosxCG.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/cleanup.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/pointer.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/scrollevent_t.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/inet.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/connections.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xwrappers.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/remote.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/ssltools.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/enc.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/sslcmds.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/macosx.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/winattr_t.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/util.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/allowed_input_t.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/selection.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/uinput.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/macosxCGP.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/unixpw.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/macosx_opengl.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/x11vnc.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xevents.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/tkx11vnc.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/xrecord.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/sslhelper.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/screen.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/cursor.h /home/npt/Desktop/veritable-2.0.0/ica/x11/x11vnc/gui.h /home/npt/Desktop/veritable-2.0.0/ica/x11/rfb/default8x16.h /home/npt/Desktop/veritable-2.0.0/ica/x11/rfb/rfbregion.h /home/npt/Desktop/veritable-2.0.0/ica/x11/libvncserver/scale.h /home/npt/Desktop/veritable-2.0.0/ica/x11/libvncserver/zrleoutstream.h /home/npt/Desktop/veritable-2.0.0/ica/x11/libvncserver/private.h /home/npt/Desktop/veritable-2.0.0/ica/x11/libvncserver/zrletypes.h /home/npt/Desktop/veritable-2.0.0/ica/x11/libvncserver/zrlepalettehelper.h /home/npt/Desktop/veritable-2.0.0/ica/x11/common/minilzo.h /home/npt/Desktop/veritable-2.0.0/ica/x11/common/d3des.h /home/npt/Desktop/veritable-2.0.0/ica/x11/common/lzodefs.h /home/npt/Desktop/veritable-2.0.0/ica/x11/common/lzoconf.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/OutStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/types.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/MemOutStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/FixedMemOutStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/MemInStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/FdInStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/InStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/NullOutStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/Exception.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/FdOutStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/ZlibInStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/rdr/ZlibOutStream.h /home/npt/Desktop/veritable-2.0.0/ica/win32/common/Clipboard.h /home/npt/Desktop/veritable-2.0.0/ica/win32/common/win32_helpers.h /home/npt/Desktop/veritable-2.0.0/ica/win32/common/ScopeGuard.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/logger/messages.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/vncImportACL.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/vncExportACL.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/buildtime.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/MSLogonACL/MSLogonACL.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauthNT4/ldapAuthnt4.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauthNT4/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/workgrpdomnt4/workgrpdomnt4.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/workgrpdomnt4/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauth/ldapAuth.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauth/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncAccessControl.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncSecurityEditor.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/EventLogging.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncSecurityEditorProps.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/GenClientServerContext.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/vncSSP.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/authSSP.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authSSP/Auth_Seq.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauth9x/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/ldapauth9x/ldapAuth9x.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/logging/logging.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/logging/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/testauth/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authadm/authadmin.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/ms-logon/authadm/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/addon/versioninfo.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/lzo/minilzo.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/libjpeg-turbo-win/jpeglib.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/omnithread/omnithread.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/omnithread/nt.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/rfb/zrleEncode.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/crtdbg.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/DSMPlugin/DSMPlugin.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/zlib/zlib.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbRegion.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncserver.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncOSVersion.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncinsthandler.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/d3des.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodezrle.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncproperties.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncdesktopthread.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnckeymap.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnclogon.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbMisc.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncabout.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/Localization.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodecorre.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/TextChat.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbUpdateTracker.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncsockconnect.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncacceptdialog.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vtypes.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnchttpconnect.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeZlib.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/IPC.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncmenu.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnclog.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncsetauth.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfb.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencoderre.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/Timer.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncbuffer.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncservice.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncauth.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/keysymdef.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/Dtwinver.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodemgr.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencodehext.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/minmax.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeUltra.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncclient.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vsocket.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/httpconnect.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncencoder.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vnctimedmsgbox.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncListDlg.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/inifile.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/videodriver.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncpasswd.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbRect.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeZlibHex.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/stdhdrs.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/winvnc.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbRegion_X11.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/rfbRegion_win32.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncpropertiesPoll.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeUltra2.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncmemcpy.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncdesktop.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/CpuUsage.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncconndialog.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/vncEncodeTight.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/HideDesktop.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/winvnc/translate.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/vnchooks/SharedData.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/vnchooks/resource.h /home/npt/Desktop/veritable-2.0.0/ica/win32/winvnc/vnchooks/VNCHooks.h /home/npt/Desktop/veritable-2.0.0/lib/include/VeritableCoreConnection.h /home/npt/Desktop/veritable-2.0.0/lib/include/PasswordDialog.h /home/npt/Desktop/veritable-2.0.0/lib/include/LogonAuthentication.h /home/npt/Desktop/veritable-2.0.0/lib/include/QtUserEvents.h /home/npt/Desktop/veritable-2.0.0/lib/include/rfb/rfb.h /home/npt/Desktop/veritable-2.0.0/lib/include/rfb/rfbproto.h /home/npt/Desktop/veritable-2.0.0/lib/include/rfb/rfbint.h /home/npt/Desktop/veritable-2.0.0/lib/include/rfb/keysym.h /home/npt/Desktop/veritable-2.0.0/lib/include/rfb/rfbclient.h /home/npt/Desktop/veritable-2.0.0/lib/include/rfb/dh.h /home/npt/Desktop/veritable-2.0.0/lib/include/QuadTree.h /home/npt/Desktop/veritable-2.0.0/lib/include/DsaKey.h /home/npt/Desktop/veritable-2.0.0/lib/include/VeritableCore.h /home/npt/Desktop/veritable-2.0.0/lib/include/DecoratedMessageBox.h /home/npt/Desktop/veritable-2.0.0/lib/include/AboutDialog.h /home/npt/Desktop/veritable-2.0.0/lib/include/Snapshot.h /home/npt/Desktop/veritable-2.0.0/lib/include/VeritableRfbExt.h /home/npt/Desktop/veritable-2.0.0/lib/include/VeritableConfiguration.h /home/npt/Desktop/veritable-2.0.0/lib/include/ProgressWidget.h /home/npt/Desktop/veritable-2.0.0/lib/include/SystemKeyTrapper.h /home/npt/Desktop/veritable-2.0.0/lib/include/AuthenticationCredentials.h /home/npt/Desktop/veritable-2.0.0/lib/include/LocalSystem.h /home/npt/Desktop/veritable-2.0.0/lib/include/Configuration/Store.h /home/npt/Desktop/veritable-2.0.0/lib/include/Configuration/Object.h /home/npt/Desktop/veritable-2.0.0/lib/include/Configuration/UiMapping.h /home/npt/Desktop/veritable-2.0.0/lib/include/Configuration/XmlStore.h /home/npt/Desktop/veritable-2.0.0/lib/include/Configuration/LocalStore.h /home/npt/Desktop/veritable-2.0.0/lib/include/VeritableVncConnection.h /home/npt/Desktop/veritable-2.0.0/lib/include/SocketDevice.h /home/npt/Desktop/veritable-2.0.0/lib/include/VncView.h /home/npt/Desktop/veritable-2.0.0/lib/include/FastQImage.h /home/npt/Desktop/veritable-2.0.0/lib/include/LockWidget.h /home/npt/Desktop/veritable-2.0.0/lib/include/Logger.h /home/npt/Desktop/veritable-2.0.0/lib/include/Ipc/SlaveLauncher.h /home/npt/Desktop/veritable-2.0.0/lib/include/Ipc/Slave.h /home/npt/Desktop/veritable-2.0.0/lib/include/Ipc/Core.h /home/npt/Desktop/veritable-2.0.0/lib/include/Ipc/Master.h /home/npt/Desktop/veritable-2.0.0/lib/include/Ipc/QtSlaveLauncher.h /home/npt/Desktop/veritable-2.0.0/lib/include/Inject.h /home/npt/Desktop/veritable-2.0.0/lib/src/3rdparty/XEventLog.h /home/npt/Desktop/veritable-2.0.0/ima/src/ToolButton.h /home/npt/Desktop/veritable-2.0.0/ima/src/MainWindow.h /home/npt/Desktop/veritable-2.0.0/ima/src/MainToolBar.h /home/npt/Desktop/veritable-2.0.0/ima/src/RunCommandsDialog.h /home/npt/Desktop/veritable-2.0.0/ima/src/SideBar.h /home/npt/Desktop/veritable-2.0.0/ima/src/Client.h /home/npt/Desktop/veritable-2.0.0/ima/src/OverviewWidget.h /home/npt/Desktop/veritable-2.0.0/ima/src/SnapshotList.h /home/npt/Desktop/veritable-2.0.0/ima/src/ConfigWidget.h /home/npt/Desktop/veritable-2.0.0/ima/src/Dialogs.h /home/npt/Desktop/veritable-2.0.0/ima/src/ClassroomManager.h /home/npt/Desktop/veritable-2.0.0/ima/src/SideBarWidget.h /home/npt/Desktop/veritable-2.0.0/ima/src/RemoteControlWidget.h /home/npt/Desktop/veritable-2.0.0/imc/src/KeyFileAssistantModePage.h /home/npt/Desktop/veritable-2.0.0/imc/src/netfw.h /home/npt/Desktop/veritable-2.0.0/imc/src/MainWindow.h /home/npt/Desktop/veritable-2.0.0/imc/src/FileSystemBrowser.h /home/npt/Desktop/veritable-2.0.0/imc/src/KeyFileAssistant.h /home/npt/Desktop/veritable-2.0.0/imc/src/Win32AclEditor.h /home/npt/Desktop/veritable-2.0.0/imc/src/KeyDirectoriesPage.h /home/npt/Desktop/veritable-2.0.0/imc/src/LogonAclSettings.h /home/npt/Desktop/veritable-2.0.0/imc/src/LogonGroupEditor.h /home/npt/Desktop/veritable-2.0.0/imc/src/ImcCore.h /home/npt/Desktop/veritable-2.0.0/imc/src/SystemConfigurationModifier.h /home/npt/Desktop/veritable-2.0.0/lib/dialogs/AboutDialog.ui /home/npt/Desktop/veritable-2.0.0/lib/dialogs/PasswordDialog.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/Snapshots.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/Overview.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/SupportDialog.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/TextMessageDialog.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/Config.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/RemoteLogonDialog.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/RunCommandsDialog.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/ClientSettingsDialog.ui /home/npt/Desktop/veritable-2.0.0/ima/dialogs/MainWindow.ui /home/npt/Desktop/veritable-2.0.0/imc/Forms/KeyFileAssistant.ui /home/npt/Desktop/veritable-2.0.0/imc/Forms/LogonGroupEditor.ui /home/npt/Desktop/veritable-2.0.0/imc/Forms/MainWindow.ui -ts /home/npt/Desktop/veritable-2.0.0/lib/resources/cs.ts

cs.ts: CMakeFiles/cs.ts
cs.ts: CMakeFiles/cs.ts.dir/build.make
.PHONY : cs.ts

# Rule to build all files generated by this target.
CMakeFiles/cs.ts.dir/build: cs.ts
.PHONY : CMakeFiles/cs.ts.dir/build

CMakeFiles/cs.ts.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cs.ts.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cs.ts.dir/clean

CMakeFiles/cs.ts.dir/depend:
	cd /home/npt/Desktop/veritable-2.0.0/b && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/npt/Desktop/veritable-2.0.0 /home/npt/Desktop/veritable-2.0.0 /home/npt/Desktop/veritable-2.0.0/b /home/npt/Desktop/veritable-2.0.0/b /home/npt/Desktop/veritable-2.0.0/b/CMakeFiles/cs.ts.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/cs.ts.dir/depend

