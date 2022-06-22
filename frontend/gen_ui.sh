#!/bin/bash

cd ./src/view_xml/
for filename in ./*.ui; do
    # Compile ui xml to C++ header file
    uic -o ../view/${filename%.*}.hpp $filename
done