#!/bin/sh
cat /etc/passwd | cut -d ':' -f-4,6- | sed -n 2~2p | rev | sort -r | awk -F ":" '{print $6}' | sed -n "$FT_LINE1","$FT_LINE2"p | sed 's/\n/, /' | sed 's/.$/./'
