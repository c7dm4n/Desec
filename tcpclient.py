#!/usr/bin/python
import socket

print("\033[1m\033[32m[+] TCP Client v0.1")
print("\033[1m\033[32m[+] Made by: c7dm4n\n")

ip = raw_input("\033[1m\033[0;0m[?] Type an ip: ")
port = input("\033[1m\033[0;0m[?] Type an port: ")
mysockt = socket.socket(socket.AF_INET, socket.SOCK_STREAM)

if mysockt.connect_ex((ip, port)):
        print("\n\033[1m\033[31m[!] Port closed\n")
else:
        mysockt.sendall(b"Hello, world")
        data = mysockt.recv(4098)
        print("\n\033[1m\033[32m[!] Key:\n")
        print(data)
