
Debian
====================
This directory contains files used to package bigdatacashd/bigdatacash-qt
for Debian-based Linux systems. If you compile bigdatacashd/bigdatacash-qt yourself, there are some useful files here.

## bigdatacash: URI support ##


bigdatacash-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install bigdatacash-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your bigdatacashqt binary to `/usr/bin`
and the `../../share/pixmaps/bigdatacash128.png` to `/usr/share/pixmaps`

bigdatacash-qt.protocol (KDE)

