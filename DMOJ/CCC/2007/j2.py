import sys

for _ in sys.stdin.read().split("\n"):
    dic = {
        "CU": "see you",
        ":-)": "I'm happy",
        ":-(": "I'm unhappy",
        ";-)": "wink",
        ":-P": "stick out my tongue",
        "(~.~)": "sleepy",
        "TA": "totally awesome",
        "CCC": "Canadian Computing Competition",
        "CUZ": "because",
        "TY": "thank-you",
        "YW": "you're welcome",
        "TTYL": "talk to you later",
    }
    try:
        print(dic[_])
    except:
        print(_)
