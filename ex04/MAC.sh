#!/bin/bash
ifconfig | grep -oP '(?<=ether\s)[\da-fA-F:]{17}'
