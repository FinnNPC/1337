#!/bin/sh
find . -name "*.sh" | sed 's/\.sh$//' | xargs -n 1 basename

