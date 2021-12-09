#!/usr/bin/python3
"""determines if all the boxes can be opened."""


def canUnlockAll(boxes):
    """Function that returns True if all
boxes can be opened, else return False"""
    unlocked = [0]
    for sublist in boxes:
        for ele in sublist:
            if boxes.index(sublist)in unlocked:
                unlocked.append(ele)
    for sublist in boxes:
        for ele in sublist:
            if boxes.index(sublist)in unlocked:
                unlocked.append(ele)
    u = set(unlocked)
    last = len(boxes)-1
    for x in range(1, last):
        if x not in u:
            return False
    return True
