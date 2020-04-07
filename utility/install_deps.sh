#!/bin/sh
apt-get update
cat linux_dependencies.txt | xargs sudo apt-get -y install