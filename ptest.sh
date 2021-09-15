#! /bin/bash
export PROJECT=$1
echo $1
cd /mnt/c/github/42seoul/$1
bash /mnt/c/github/42seoul/unittest/test.sh $1