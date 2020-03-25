from collections import Counter

if __name__ == "__main__":
    words = [
    'look', 'into', 'my', 'eyes', 'look', 'into', 'my', 'eyes',
    'the', 'eyes', 'the', 'eyes', 'the', 'eyes', 'not', 'around', 'the',
    'eyes', "don't", 'look', 'around', 'the', 'eyes', 'look', 'into',
    'my', 'eyes', "you're", 'under'
    ]
    morewords = ['why','are','you','not','looking','in','my','eyes']
    word_counts = Counter(words)
    print(word_counts.items())
    print(word_counts.most_common(3))
    word_counts.update(morewords)
    print(word_counts.most_common(3))
    another_counts = Counter(morewords)
    print((word_counts+another_counts).most_common(3))
    print((word_counts-another_counts).most_common(3))
    