from flask import Flask, redirect, render_template, request, url_for

import helpers
import os
import sys

from analyzer import Analyzer
from termcolor import colored

app = Flask(__name__)

@app.route("/")
def index():
    return render_template("index.html")

@app.route("/search")
def search():

    # validate screen_name
    screen_name = request.args.get("screen_name", "")
    if not screen_name:
        return redirect(url_for("index"))

    # get screen_name's tweets
    tweets = helpers.get_user_timeline(screen_name, 100)
    if tweets is None:
        return redirect(url_for("index"))

     # absolute paths to lists
    positives = os.path.join(sys.path[0], "positive-words.txt")
    negatives = os.path.join(sys.path[0], "negative-words.txt")
    
    # instantiate analyzer
    analyzer = Analyzer(positives, negatives)
    
    sump = 0
    sumn = 0
    sumg = 0
    for tweet in tweets:
        # analyze word
        score = analyzer.analyze(tweet)
        if score > 0.0:
            sump +=1
        elif score < 0.0:
            sumn += 1
        else:
            sumg += 1
    sumt = sump + sumn + sumg
    rp = (sump/sumt)*100
    rn = (sumn/sumt)*100
    rg = (sumg/sumt)*100
    positive, negative, neutral = rp, rn, rg

    # generate chart
    chart = helpers.chart(positive, negative, neutral)

    # render results
    return render_template("search.html", chart=chart, screen_name=screen_name)
