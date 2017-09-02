#!/bin/bash

find -iname "*.o" |xargs rm
find -iname "*.sub" |xargs rm
find -iname "Debug" |xargs rm -rf
find -iname "a.out" |xargs rm
