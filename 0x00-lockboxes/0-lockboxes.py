#!/usr/bin/python3
"""lockbox algorithm"""


def canUnlockAll(boxes):
    """return True if all unlockable"""
    keys = [0]
    boxLen = len(boxes)
    for k in boxes[0]:
        keys.append(k)  # add all the keys in box 0

    for i in keys:
        if i >= boxLen:
            continue
        for num in boxes[i]:
            if num < boxLen and num not in keys:
                keys.append(num)  # add new key

    for key in range(boxLen):
        if key in keys:
            continue  # key can unlock box
        else:
            return False  # at least one box is still locked

    return True
