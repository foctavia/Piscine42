#!/bin/sh
cat /etc/passwd | cut -d ':' -f-4,6- | sed -n 2~2p | awk -F ":" '{print $1}' | rev | sort -r | awk "FNR >= $FT_LINE1 && FNR <= $FT_LINE2" | tr "\n" ","| sed 's/,$/./g' | sed 's/,/,\ /g'
