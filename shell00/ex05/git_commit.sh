#! /bin/bash
git log --pretty=short -5 | grep "^commit" | cut -d ' ' -f 2
