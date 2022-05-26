#!/usr/bin/python3
"""Rotate 2D Matrix"""
def rotate_2d_matrix(matrix):
    """function that rotate a mayrix
    90 degrees clockwise"""
    for ele in zip(*matrix):
        matrix.append(list(reversed(ele)))
        matrix.pop(0)
