#!/bin/bash
if [ "$1" == "" ]
then
echo "################################"
echo "[?] Searching hosts..."
echo "[?] try: $0 site.alvo.com.br"
echo "################################"
else
echo "###################################"
echo "[!] Searching hosts..."
echo "[+] Made by: c7dm4n"
echo "###################################"
wget "$1" --quiet
grep href index.html | cut -d "/" -f3 | grep "\." | cut -d '"' -f1 > lista.txt
for url in $(cat lista.txt);do host $url;done | grep "has address"
rm index.html
rm lista.txt
fi
