def email_domain(emails):
    d = {}
    for i in emails:
        domain = i.split("@")[1]
        d[i] = domain
    print("Dictionary:", d)

def gmail_emails(emails):
    t = ()
    for i in emails:
        if i.split("@")[1] == "gmail.com":
            t = t + (i,)
    print("Gmail Emails:", t)

def count_domain(emails):
    d = {}
    for i in emails:
        domain = i.split("@")[1]
        if domain in d:
            d[domain] = d[domain] + 1
        else:
            d[domain] = 1
    print("Domain Count:", d)

def remove_duplicate(emails):
    s = set(emails)
    print("Set:", s)

def sort_email(emails):
    emails.sort()
    print("Sorted Emails:", emails)

n = int(input("Enter number of emails: "))
emails = []

for i in range(n):
    email = input("Enter Email: ")
    emails.append(email)

email_domain(emails)
gmail_emails(emails)
count_domain(emails)
remove_duplicate(emails)
sort_email(emails)