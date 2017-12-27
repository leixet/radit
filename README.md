R4dit - Programari per a la radiodifusió.
=============================================

![Radit-1](https://raw.githubusercontent.com/jfperini/radit/master/screenshots/radit-header.jpg "Radit-1")

#### Radit és un projecte de programari lliure per a l'automatització d'emisores de ràdio.
#### Aquest fork es crea per a traduir-lo al català i convertir-lo en la versió Radit Linkat-SoftCatalà, que s'inclou al perfil de ràdio del sistema operatiu Linkat del Departament d'Ensenyament de la Generalitat de Catalunya.


Entre altres funcions, Radit permet:

    Foses entre peces d'àudio
    Compatibilitat amb formats MP2, MP3, WAV, WMA, OGG, FLAC
    Reproducció aleatòria de carpetes
    Sistema d'esdeveniments per automatitzar els continguts
    Dos reproductors auxiliars i un de principal
    Registre d'emissió
    Locucions d'hora, temperatura i humitat
    Trepitjadors d'entrada i sortida.
    Conexions amb ràdios online.
    Seqüències i llistes per implementar blocs publicitaris o musicals
    I molt més...

## Instal·lació

    A ArchLinux:

    [user@archlinux:~] yaourt -S radit
    
Es necessiten alguns permisos. Executeu l'[script](https://github.com/jfperini/radit/blob/master/radit.sh):

    [user@archlinux:~] sh ~/Baixades/radit.sh
    
    [user@archlinux:~] radit

## Compil·lació

    cd src

    qmake-qt4 radit.pro

    make

El binari generat es troba a la carpeta LinuxDesktop.

![Radit-2](https://raw.githubusercontent.com/jfperini/radit/master/screenshots/radit-footer.jpg "Radit-2")

Pàgina oficial de Radit: http://www.radit.org/

Pàgina de Linkat: http://linkat.xtec.cat/

Pàgina de Softcatalà: https://www.softcatala.org


