import nltk

class Analyzer():
    """Implements sentiment analysis."""

    def __init__(self, positives, negatives):
        """Initialize Analyzer."""
        
        self.positive_words = set()
        file = open(positives, "r")
        for line in file:
            if line.startswith(';') == False:
                self.positive_words.add(line.strip("\n"))
                
        self.negative_words = set()
        file = open(negatives, "r")
        for line in file:
            if line.startswith(';') == False:
                self.negative_words.add(line.strip("\n"))

    def analyze(self, text):
        """Analyze text for sentiment, returning its score."""
        tokenizer = nltk.tokenize.TweetTokenizer()
        tokens = tokenizer.tokenize(text)
        sum = 0;
        for word in tokens:
            if word.lower() in self.positive_words:
                sum += 1
            elif word.lower() in self.negative_words:
                sum -= 1
            else:
                continue
            
        return sum    
