#!/bin/bash
touch secreto.txt
echo "Mensaje confidencial" > secreto.txt
chmod 600 secreto.txt
chmod 644 secreto.txt
ls -l secreto.txt
