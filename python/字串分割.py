def censor(text,word):
  w1 =0
  str4 = ""
  str1 = word.lower()
  str2 = text.lower()
  for c1 in word:
    w1 = w1 +1
  str3 = "*" * w1
  str4 = str3.join(text.split(str1))
  return str4
print (censor("Yo go fro yo go","go"))
