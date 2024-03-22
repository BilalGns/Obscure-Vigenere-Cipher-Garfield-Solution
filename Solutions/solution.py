#!/usr/bin/env python

from string import ascii_uppercase
numbers = '07271978'

flag = []
with open("message.txt") as handle:
    message = handle.read()
    counter = 0
    for c in message:
        c = c.upper()

        if c in ascii_uppercase:
            index = ascii_uppercase.index(c)
            offset = int(numbers[counter % len(numbers)])
            new_char = ascii_uppercase[(index - offset) % len(ascii_uppercase)] 
            flag.append(new_char)
            counter += 1
        else:
            flag.append(c) 
print(''.join(flag))