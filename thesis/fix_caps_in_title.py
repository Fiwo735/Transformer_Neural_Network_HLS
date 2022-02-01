import sys
import re
import fileinput

if __name__ == "__main__":
  filename = 'references/references.bib' if len(sys.argv) == 1 else sys.argv[1]
  for line in fileinput.input(filename, inplace=True):
    # remove RefWorks from name
    line = re.sub(r'(@.*{)RefWorks:RefID:', r"\1", line)

    # fix capitalized words in titles
    if re.search(r"[ |	]*title[ |	]*=", line):
      print(re.sub(r'([A-Z][A-Z]+)([a-z]*)', r"{\1}\2", line), end='')
    else:
      print(line, end='')