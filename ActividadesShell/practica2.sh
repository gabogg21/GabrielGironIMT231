#!/bin/bash
touch archivo1.txt
echo "Hola este es un archivo de prueba" > archivo1.txt
cp archivo1.txt archivo_copia.txt
mkdir -p practica_shell/backup
mv archivo_copia.txt practica_shell/backup/
rm archivo1.txt 
ls practica_shell/backup/
