#!/bin/bash
mkdir documentos imagenes scrips 
cd documentos
touch nota1.txt nota2.txt nota3.txt nota4.txt nota5.txt
cd ..
mv documentos/nota3.txt practica_shell/backup/
mv documentos/nota4.txt practica_shell/backup/
rm -r imagenes

