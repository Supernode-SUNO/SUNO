
Debian
====================
This directory contains files used to package supernodecoind/supernodecoin-qt
for Debian-based Linux systems. If you compile supernodecoind/supernodecoin-qt yourself, there are some useful files here.

## supernodecoin: URI support ##


supernodecoin-qt.desktop  (Gnome / Open Desktop)
To install:

	sudo desktop-file-install supernodecoin-qt.desktop
	sudo update-desktop-database

If you build yourself, you will either need to modify the paths in
the .desktop file or copy or symlink your supernodecoin-qt binary to `/usr/bin`
and the `../../share/pixmaps/supernodecoin128.png` to `/usr/share/pixmaps`

supernodecoin-qt.protocol (KDE)

