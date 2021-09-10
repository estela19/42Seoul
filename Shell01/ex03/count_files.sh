#! /bin/bash
cnt=`ls -RAl | grep \s | awk '{ print $9 }' | wc -l`
echo `expr $cnt + 1`
