#!/bin/sh
ifconfig | awk '/ether/{print $2}{ORS="\n"}'
