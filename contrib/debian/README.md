
Debian
====================
This directory contains files used to package qbod/qbo-qt
for Debian-based Linux systems. If you compile qbod/qbo-qt yourself, there are some useful files here.

## qbo: URI support ##


qbo-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install qbo-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your qboqt binary to `/usr/bin`
and the `../../share/pixmaps/qbo128.png` to `/usr/share/pixmaps`

qbo-qt.protocol (KDE)

