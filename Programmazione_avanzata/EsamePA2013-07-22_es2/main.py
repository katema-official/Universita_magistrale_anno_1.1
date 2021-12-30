def reverse(s):
    return s if len(s) == 1 else s[-1] + reverse(s[:-1])

def strip(s, ex):
    if s == "": return ""
    return strip(s[1:], ex) if s[0] in ex else s[0] + strip(s[1:], ex)

def split(s, ex):
    i = 0
    flag = False
    word = ""
    for i in range(len(s)):
        if s[i] in ex and flag:
            return [word] + split(s[i:], ex)
        if not s[i] in ex or flag:
            flag = True
            word += s[i]
    return []

def find(s, ch):
    start = 0
    if hasattr(find, "last_s") and hasattr(find, "last_ch"):
        if find.last_s == s and find.last_ch == ch:
            start = find.last_res + 1
    if hasattr(find, "last_res") and find.last_res == -1: start = 0
    find.last_s = s
    find.last_ch = ch
    for i in range(start, len(s)):
        if s[i] == ch:
            find.last_res = i
            return i
    find.last_res = -1
    return -1


if __name__ == "__main__":
    s0 = "The deadline is approximately midnight though it could vary."
    s1 = "She is a fascinating lady; she has an astonishing smile, an alluring voice and an entertaining sense of humor."
    s2 = "The topic is appealing nevertheless the speaker was too monotonous."
    s3 = "The topic ais appealing nevertheless the speaker was too monotonous."
    print(strip(s0, "aeiou"))
    print(reverse(s0))
    print(strip(reverse(s0), "aeiou"))
    print(split(s1," ;, ."))
    print(reverse(s2))
    print("tests on find:")
    print(find(s2, "a"))
    print(find(s2, "a"))
    print(find(s2, "a"))
    print(find(s3, "a"))
    print(find(s3, "t"))
    print(find(s3, "t"))
    print(find(s3, "t"))
    print(find(s3, "t"))
    print(find(s3, "t"))
    print(find(s3, "t"))
    print(find(s3, "t"))
