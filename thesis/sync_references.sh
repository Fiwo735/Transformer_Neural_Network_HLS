#!/bin/bash

win_path="/mnt/c/Users/Filip/References/"
WSL_path="references/"
all_references="references/references.bib"

echo "Copying everything from ${win_path} to ${WSL_path}"
cp ${win_path}* ${WSL_path}

# clear all_refences
> "${all_references}"

# copy references from all files
for filename in ${WSL_path}*bib; do
  if [ "${filename}" != "${all_references}" ]; then
    echo "Appending contents of ${filename}"
    contents=$(<${filename})
    echo "${contents}" >> "${all_references}"
  fi
done
