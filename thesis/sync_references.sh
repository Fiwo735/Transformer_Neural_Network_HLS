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

    # Remove characters causing problems in NatBib
    filtered=${contents//[ö]/o}
    filtered=${filtered//[ń]/n}
    filtered=${filtered//[é]/e}
    filtered=${filtered//[ü]/u}
    filtered=${filtered//[ý]/y}
    filtered=${filtered//[ø]/o}
    
    echo "${filtered}" >> "${all_references}"
  fi
done

# put capitalised words in titles in {} as otherwise NatBib makes them lowercase
python3 fix_caps_in_title.py ${all_references}