def occur(s, word):
    words = list(s.split())
    
    return words.count(word)

def lastWord(s):
    # finding the last space
    idx = s.rfind(" ")
    
    return s[idx + 1:]
  
s = str(input())
word = "not"

if lastWord(s) == "True":
    if occur(s, word) % 2 == 0:
        print("True")
    else:
        print("False")

else:
    if occur(s, word) % 2 == 0:
        print("False")
    else:
        print("True")