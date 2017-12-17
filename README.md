R4dit - Programari per a la radiodifusió.
=============================================

![Radit-1](https://raw.githubusercontent.com/jfperini/radit/master/screenshots/radit-header.jpg "Radit-1")

#### Radit és un projecte de programari lliure per a l'automatització d'emisores de ràdio.
#### Aquest fork es crea per a traduir-lo al català i convertir-lo en la versió Radit Linkat-SoftCatalà, que s'inclou al perfil de ràdio del sistema operatiu Linkat del Departament d'Ensenyament de la Generalitat de Catalunya.


Entre otras funciones Radit soporta:

    Crossfade entre audios.
    Soporte para formatos (MP2, MP3, WAV, WMA, OGG, FLAC).
    Reproducción aleatoria de carpetas.
    Sistema de eventos para automatizar nuestros contenidos.
    Dos reproductores auxiliares y uno principal.
    Log de emisión
    Locuciones de hora, temperatura y humedad.
    Pisadores de entrada y salida.
    Conexiones con radios on-line.
    Secuencias y tandas para armar bloques publicitarios o musicales
    Y mucho más........

## Instalar

    En ArchLinux:

    [user@archlinux:~] yaourt -S radit
    
Se necesitan algunos permisos. Ejecutar el [script](https://github.com/jfperini/radit/blob/master/radit.sh):

    [user@archlinux:~] sh ~/Descargas/radit.sh
    
    [user@archlinux:~] radit

## Compilar

    cd src

    qmake-qt4 radit.pro

    make

El binario generado se encuntra en la carpeta LinuxDesktop.

![Radit-2](https://raw.githubusercontent.com/jfperini/radit/master/screenshots/radit-footer.jpg "Radit-2")

Página oficial: http://www.radit.org/net


