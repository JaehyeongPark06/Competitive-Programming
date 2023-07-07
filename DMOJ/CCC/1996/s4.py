RTI = {"I": 1, "V": 5, "X": 10, "L": 50, "C": 100, "D": 500, "M": 1000}

TC = int(input())

while TC:
    S = input()
    l = ""
    r = ""
    curr = "l"

    for i in range(len(S) - 1):
        if S[i] == "+":
            curr = "r"
            continue

        if curr == "l":
            l += S[i]
        else:
            r += S[i]

    lSum = 0
    lSum += RTI[l[0]]
    previous = l[0]

    for i in range(1, len(l)):
        if RTI[l[i]] > RTI[previous]:
            lSum -= RTI[previous]
            lSum += RTI[l[i]] - RTI[previous]
        else:
            lSum += RTI[l[i]]
        previous = l[i]

    rSum = 0
    rSum += RTI[r[0]]
    previous = r[0]

    for i in range(1, len(r)):
        if RTI[r[i]] > RTI[previous]:
            rSum -= RTI[previous]
            rSum += RTI[r[i]] - RTI[previous]
        else:
            rSum += RTI[r[i]]
        previous = r[i]

    sum = lSum + rSum

    if sum > 1000:
        print(S + "CONCORDIA CUM VERITATE")
    else:
        out = ""
        while True:
            if sum == 0:
                break
            if sum >= 1000:
                out += "M"
                sum -= 1000
            elif sum >= 900:
                out += "CM"
                sum -= 900
            elif sum >= 500:
                out += "D"
                sum -= 500
            elif sum >= 400:
                out += "CD"
                sum -= 400
            elif sum >= 100:
                out += "C"
                sum -= 100
            elif sum >= 90:
                out += "XC"
                sum -= 90
            elif sum >= 50:
                out += "L"
                sum -= 50
            elif sum >= 40:
                out += "XL"
                sum -= 40
            elif sum >= 10:
                out += "X"
                sum -= 10
            elif sum >= 9:
                out += "IX"
                sum -= 9
            elif sum >= 5:
                out += "V"
                sum -= 5
            elif sum >= 4:
                out += "IV"
                sum -= 4
            else:
                out += "I"
                sum -= 1

        print(S + out)

    TC -= 1
