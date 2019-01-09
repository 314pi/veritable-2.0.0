

Name:		
Version:	2.0.0
Release:	0
Summary:	didactical software for teachers etc.
Summary(de):	Didaktische Software fuer Lehrer usw.
License:	GPL
URL:		http://veritable.sourceforge.net/
Group:		Applications/Networking
Packager:	Tobias Doerffel <tobydox@users.sourceforge.net>
%if 0%{?suse_version} 
BuildRequires:	gcc gcc-c++ libstdc++-devel autoconf automake make openssl openssl-devel zlib zlib-devel libjpeg libjpeg-devel
BuildRequires:	libqt4-devel
Requires:	libqt4 libqt4-x11 openssl zlib libjpeg
%endif
Source:		%{name}-%{version}.tar.bz2
BuildRoot:	%{_tmppath}/%{name}-%{version}-buildroot
Prefix:		%{_prefix}

%description
vERITABLE is a use- and powerful didactical tool for teachers. It lets you view and control other computers in your network in several ways. It supports Linux and Windows 2000/XP/Vista.

Features:

* see what's going on in computer-labs by using overview mode and make snapshots
* remote-control computers to support and help other people
* show a demo (either in fullscreen or in a window) - the teacher's screen is shown on all student's computers in realtime
* lock workstations for moving undivided attention to teacher
* send text-messages to students
* powering on/off and rebooting computers per remote
* remote logon and logoff and remote execution of arbitrary commands/scripts
* home-schooling - vERITABLE's network-technology is not restricted to a subnet and therefore students at home can join lessons via VPN-connections just by installing vERITABLE client

Furthermore vERITABLE is optimized for usage on multi-core systems (by making
heavy use of threads). No matter how many cores you have, vERITABLE can make use
of all of them. 


%description -l de
vERITABLE ist ein nuetzliches und leistungsfaehiges didaktisches Werkzeug für
Lehrer, mit dem man andere Computer im Netzwerk auf verschiedene Art und Weise
beobachten und fernsteuern kann.

vERITABLE unterstuetzt derzeit Linux und Windows 2000/XP/Vista.

Funktionen:

* sehen, was in Computerkabinetten los ist (Uebersichtsmodus) und Schnapsschuesse erstellen
* Computern fernsteuern, um anderen Leuten zu unterstuetzen
* eine Demo zeigen (entweder als Vollbild oder in einem Fenster) - der Lehrer-Bildschirm wird auf alle Schuelercomputer in Echtzeit uebertragen
* Schuelercomputer sperren um Aufmerksamkeit zu erlangen
* Textnachrichten an Schueler senden
* Computer uebers Netzwerk an- und ausschalten sowie neustarten
* Remote-Anmeldung sowie Ausfuehrung beliebiger Befehle/Skripte
* Anbindung zu Hause sitzender Schueler ueber VPN moeglich

Weiterhin ist vERITABLE optimiert auf die Nutzung auf Mehrkern-Systemen (indem es in grossen Umfang Threads benutzt). Egal wie viele Kerne sie haben, vERITABLE kann von allen Gebrauch machen.


%package client
Summary:	software for vERITABLE-clients
Summary(de):	Software fuer vERITABLE-Clients
Group:		Applications/Networking
Requires:	veritable = %{version}

%description client
This package contains the software, needed by vERITABLE-clients.

See /usr/share/veritable/doc/INSTALL for details on how to install and setup vERITABLE
in your network.

%description client -l de
Dieses Paket beinhaltet die Software, die auf vERITABLE-Clients benoetigt wird.

Weitere Details ueber die Installation und Einrichtung von vERITABLE in Ihrem
Netzwerk finden Sie in /usr/share/veritable/doc/INSTALL.


%package master
Summary:	vERITABLE master software
Summary(de):	vERITABLE-Master-Software
Group:		Applications/Networking
Requires:	veritable = %{version}
Requires:	veritable-client = %{version}

%description master
This package contains the actual master-software for accessing clients.

See /usr/share/veritable/doc/INSTALL for details on how to install and setup vERITABLE
in your network.

%description master -l de
Dieses Paket beinhaltet die eigentliche Master-Software, um auf Clients
zuzugreifen.

Weitere Details ueber die Installation und Einrichtung von vERITABLE in Ihrem
Netzwerk finden Sie in /usr/share/veritable/doc/INSTALL.



%prep
%setup -q


%build
CFLAGS="$RPM_OPT_FLAGS" CXXFLAGS="$RPM_OPT_FLAGS" ./configure --prefix=%{prefix}

make %{?jobs:-j%jobs}


%install
make DESTDIR=$RPM_BUILD_ROOT install

%clean
[ "$RPM_BUILD_ROOT" != "/" ] && rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root)
%{_datadir}/veritable/


%files client
%defattr(-,root,root)
%{_bindir}/ica
%{_libdir}/veritable/libveritable_core.so
%doc %{_mandir}/man1/ica.1.gz


%files master
%defattr(-,root,root)
%{_bindir}/veritable
%doc %{_mandir}/man1/veritable.1.gz
%{_datadir}/applications/veritable.desktop
%{_datadir}/menu/veritable
%{_datadir}/pixmaps/veritable.xpm
%{_datadir}/icons/veritable.png


%changelog
* Mon Mar 03 2008 Tobias Doerffel
- added missing library

* Sat Apr 12 2007 Tobias Doerffel
- lot of updates for "new" vERITABLE

* Sat Jun 25 2005 Tobias Doerffel
- updated project-homepage and email-address of packager

* Sat May 5 2005 Tobias Doerffel
- created veritable.spec.in

