#!/usr/bin/env python3

import sys, os, json

def load_layer(layer):
    LA1, LA2, LA3, LA4, LA5, LA6, LA7, LA8, LA9, \
    LB1, LB2, LB3, LB4, LB5, LB6, LB7, LB8, LB9, \
    LC1, LC2, LC3, LC4, LC5, LC6, LC7, LC8, LC9, \
    LD1, LD2, LD3, LD4, LD5, LD6, LD7, LD8, LD9, \
    LE1, LE2, LE3, LE4, LE5, LE6, KC_NO, KC_NO, LE9, \
    RA1, RA2, RA3, RA4, RA5, RA6, RA7, RA8, RA9, \
    RB1, KC_NO, RB3, RB4, RB5, RB6, RB7, RB8, RB9, \
    RC1, KC_NO, RC3, RC4, RC5, RC6, RC7, RC8, RC9, \
    RD1, KC_NO, RD3, RD4, RD5, RD6, RD7, RD8, RD9, \
    RE1, KC_NO, RE3, RE4, RE5, RE6, RE7, KC_NO, RE9 \
    = layer

    print(
    f"{LA1}, {LA2}, {LA3}, {LA4}, {LA5}, {LA6}, {LA7}, {LA8}, {LA9},      {RA9}, {RA8}, {RA7}, {RA6}, {RA5}, {RA4}, {RA3}, {RA2}, {RA1},\n"
    f"{LB1}, {LB2}, {LB3}, {LB4}, {LB5}, {LB6}, {LB7}, {LB8}, {LB9},      {RB9}, {RB8}, {RB7}, {RB6}, {RB5}, {RB4}, {RB3},        {RB1},\n"
    f"{LC1}, {LC2}, {LC3}, {LC4}, {LC5}, {LC6}, {LC7}, {LC8}, {LC9},      {RC9}, {RC8}, {RC7}, {RC6}, {RC5}, {RC4}, {RC3},        {RC1},\n"
    f"{LD1}, {LD2}, {LD3}, {LD4}, {LD5}, {LD6}, {LD7}, {LD8}, {LD9},      {RD9}, {RD8}, {RD7}, {RD6}, {RD5}, {RD4}, {RD3},        {RD1},\n"
    f"{LE1}, {LE2}, {LE3}, {LE4}, {LE5}, {LE6},               {LE9},      {RE9}, {RE7}, {RE6}, {RE5}, {RE4}, {RE3},               {RE1}\n"
    )

def main():
    if len(sys.argv) < 2:
        print("Usage: convert-via.py <via-json-file>")
        sys.exit(1)
    filename = sys.argv[1]
    if not os.path.exists(filename):
        print("File not found: {}".format(filename))
        sys.exit(1)
    with open(filename, "r") as f:
        data = json.load(f)
    layers = data["layers"]
    for layer in layers:
        load_layer(layer)

if __name__ == "__main__":
    main()
