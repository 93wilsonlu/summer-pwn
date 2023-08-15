FROM debian:latest

RUN apt-get update
RUN apt-get install ncat -y

RUN useradd -d /home/ctf/ -m -p ctf -s /bin/bash ctf
RUN echo "ctf:ctf" | chpasswd

WORKDIR /home/ctf

COPY ret2libc .
COPY flag.txt .

RUN chmod 755 /home/ctf
RUN chown -R root:root /home/ctf

USER ctf
CMD ncat -klvp 8308 -c ./ret2libc