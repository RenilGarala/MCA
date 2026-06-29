def vowel_count(words):
    count = 0
    for i in words:
        if i[0].lower() in "aeiou":
            count += 1
    print("Words starting with vowel:", count)

def reverse_dict(words):
    d = {}
    for i in words:
        d[i] = i[::-1]
    print("Dictionary:", d)

def longest_shortest(words):
    longest = words[0]
    shortest = words[0]

    for i in words:
        if len(i) > len(longest):
            longest = i
        if len(i) < len(shortest):
            shortest = i

    print("Longest word:", longest)
    print("Shortest word:", shortest)

def display_words(words):
    print("Words having more than 4 characters:")
    for i in words:
        if len(i) > 4:
            print(i)

s = input("Enter string: ")
words = s.split()

vowel_count(words)
reverse_dict(words)
longest_shortest(words)
display_words(words)