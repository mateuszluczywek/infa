text = "Ala ma kota, a kot ma Ale."

print(f"Oryginalny tekst: {text}")

# W Pythonie napisy są niezmienne, więc metody tworzą nową wersję tekstu
text_lower = text.lower()
print(f"Małe litery:       {text_lower}")

text_upper = text.upper()
print(f"Wielkie litery:    {text_upper}")

print(f"Długość tekstu:    {len(text)} znaków")