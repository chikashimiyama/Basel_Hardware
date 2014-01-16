#!/bin/sh
gpio reset
sleep 0.5
gpio mode 11 out
while true; do
  gpio write 11 1
  sleep 0.2
  gpio write 11 0
  sleep 0.2
done
