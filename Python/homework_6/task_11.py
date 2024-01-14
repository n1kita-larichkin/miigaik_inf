vowels = "aeiouyAEIOUYауоыиэяюёеАУОЫИЭЯЮЁЕ"
count = 0
words = input()

for i in words:
    count += vowels.count(i)

print(count)