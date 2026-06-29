def vowel_count(words):
    d = {}
    for i in words:
        count = 0
        for j in i.lower():
            if j in "aeiou":
                count += 1
        d[i] = count
    print("Dictionary:", d)

def same_letter(words):
    t = ()
    for i in words:
        if i[0].lower() == i[-1].lower():
            t = t + (i,)
    print("Tuple:", t)

def reverse_words(words):
    print("Reversed words:")
    for i in words:
        print(i[::-1])

def long_words(words):
    s = set()
    for i in words:
        if len(i) > 5:
            s.add(i)
    print("Set:", s)

n = int(input("Enter number of words: "))
words = []

for i in range(n):
    w = input("Enter word: ")
    words.append(w)

vowel_count(words)
same_letter(words)
reverse_words(words)
long_words(words)