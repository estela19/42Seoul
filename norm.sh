#! ./bin/bash

loc=`cat main.c | grep '#' | cut -d ' ' -f2 | tr -d '\"'`
Norminette -R CheckForbiddenSourceHeader "$loc"