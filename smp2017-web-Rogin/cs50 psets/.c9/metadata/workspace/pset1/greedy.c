{"changed":true,"filter":false,"title":"greedy.c","tooltip":"/pset1/greedy.c","value":"#include<stdio.h>\n#include<cs50.h>\n#include<math.h>\nint main(void)\n{\nfloat a;\nprintf(\"O hai! How much change is owed?\\n\");\na=get_float();\nwhile(a<0.00)\n{\nprintf(\"How much change is owed?\\n\");\na=get_float();\n}\nint c=round(a*100);\nint x=0;\nx=x+c/25;\nc=c%25;\nx=x+c/10;\nc=c%10;\nx=x+c/5;\nc=c%5;\nx=x+c;\nprintf(\"%d\\n\",x);\nreturn 0;\n}","undoManager":{"mark":92,"position":100,"stack":[[{"start":{"row":13,"column":4},"end":{"row":13,"column":5},"action":"insert","lines":["x"],"id":852}],[{"start":{"row":13,"column":5},"end":{"row":13,"column":6},"action":"insert","lines":["="],"id":853}],[{"start":{"row":13,"column":6},"end":{"row":13,"column":7},"action":"insert","lines":["0"],"id":854}],[{"start":{"row":13,"column":7},"end":{"row":13,"column":8},"action":"insert","lines":[";"],"id":855}],[{"start":{"row":13,"column":8},"end":{"row":14,"column":0},"action":"insert","lines":["",""],"id":856}],[{"start":{"row":14,"column":0},"end":{"row":14,"column":1},"action":"insert","lines":["x"],"id":857}],[{"start":{"row":14,"column":1},"end":{"row":14,"column":2},"action":"insert","lines":["="],"id":858}],[{"start":{"row":14,"column":2},"end":{"row":14,"column":3},"action":"insert","lines":["x"],"id":859}],[{"start":{"row":14,"column":3},"end":{"row":14,"column":4},"action":"insert","lines":["+"],"id":860}],[{"start":{"row":14,"column":4},"end":{"row":14,"column":5},"action":"insert","lines":["c"],"id":861}],[{"start":{"row":14,"column":5},"end":{"row":14,"column":6},"action":"insert","lines":["/"],"id":862}],[{"start":{"row":14,"column":6},"end":{"row":14,"column":7},"action":"insert","lines":["2"],"id":863}],[{"start":{"row":14,"column":7},"end":{"row":14,"column":8},"action":"insert","lines":["5"],"id":864}],[{"start":{"row":14,"column":8},"end":{"row":14,"column":9},"action":"insert","lines":[";"],"id":865}],[{"start":{"row":14,"column":9},"end":{"row":15,"column":0},"action":"insert","lines":["",""],"id":866}],[{"start":{"row":15,"column":0},"end":{"row":15,"column":1},"action":"insert","lines":["c"],"id":867}],[{"start":{"row":15,"column":1},"end":{"row":15,"column":2},"action":"insert","lines":["="],"id":868}],[{"start":{"row":15,"column":2},"end":{"row":15,"column":3},"action":"insert","lines":["c"],"id":869}],[{"start":{"row":15,"column":3},"end":{"row":15,"column":4},"action":"insert","lines":["%"],"id":870}],[{"start":{"row":15,"column":4},"end":{"row":15,"column":5},"action":"insert","lines":["2"],"id":871}],[{"start":{"row":15,"column":5},"end":{"row":15,"column":6},"action":"insert","lines":["5"],"id":872}],[{"start":{"row":15,"column":6},"end":{"row":15,"column":7},"action":"insert","lines":[";"],"id":873}],[{"start":{"row":15,"column":7},"end":{"row":16,"column":0},"action":"insert","lines":["",""],"id":874}],[{"start":{"row":16,"column":0},"end":{"row":16,"column":1},"action":"insert","lines":["x"],"id":875}],[{"start":{"row":16,"column":1},"end":{"row":16,"column":2},"action":"insert","lines":["="],"id":876}],[{"start":{"row":16,"column":2},"end":{"row":16,"column":3},"action":"insert","lines":["x"],"id":877}],[{"start":{"row":16,"column":3},"end":{"row":16,"column":4},"action":"insert","lines":["+"],"id":878}],[{"start":{"row":16,"column":4},"end":{"row":16,"column":5},"action":"insert","lines":["c"],"id":879}],[{"start":{"row":16,"column":5},"end":{"row":16,"column":6},"action":"insert","lines":["/"],"id":880}],[{"start":{"row":16,"column":6},"end":{"row":16,"column":7},"action":"insert","lines":["1"],"id":881}],[{"start":{"row":16,"column":7},"end":{"row":16,"column":8},"action":"insert","lines":["0"],"id":882}],[{"start":{"row":16,"column":8},"end":{"row":16,"column":9},"action":"insert","lines":[";"],"id":883}],[{"start":{"row":16,"column":9},"end":{"row":17,"column":0},"action":"insert","lines":["",""],"id":884}],[{"start":{"row":17,"column":0},"end":{"row":17,"column":1},"action":"insert","lines":["c"],"id":885}],[{"start":{"row":17,"column":1},"end":{"row":17,"column":2},"action":"insert","lines":["="],"id":886}],[{"start":{"row":17,"column":2},"end":{"row":17,"column":3},"action":"insert","lines":["c"],"id":887}],[{"start":{"row":17,"column":3},"end":{"row":17,"column":4},"action":"insert","lines":["%"],"id":888}],[{"start":{"row":17,"column":4},"end":{"row":17,"column":5},"action":"insert","lines":["1"],"id":889}],[{"start":{"row":17,"column":5},"end":{"row":17,"column":6},"action":"insert","lines":["0"],"id":890}],[{"start":{"row":17,"column":6},"end":{"row":17,"column":7},"action":"insert","lines":[";"],"id":891}],[{"start":{"row":17,"column":7},"end":{"row":18,"column":0},"action":"insert","lines":["",""],"id":892}],[{"start":{"row":18,"column":0},"end":{"row":18,"column":1},"action":"insert","lines":["x"],"id":893}],[{"start":{"row":18,"column":1},"end":{"row":18,"column":2},"action":"insert","lines":["="],"id":894}],[{"start":{"row":18,"column":2},"end":{"row":18,"column":3},"action":"insert","lines":["x"],"id":895}],[{"start":{"row":18,"column":3},"end":{"row":18,"column":4},"action":"insert","lines":["+"],"id":896}],[{"start":{"row":18,"column":4},"end":{"row":18,"column":5},"action":"insert","lines":["c"],"id":897}],[{"start":{"row":18,"column":5},"end":{"row":18,"column":6},"action":"insert","lines":["/"],"id":898}],[{"start":{"row":18,"column":6},"end":{"row":18,"column":7},"action":"insert","lines":["5"],"id":899}],[{"start":{"row":18,"column":7},"end":{"row":18,"column":8},"action":"insert","lines":[";"],"id":900}],[{"start":{"row":18,"column":8},"end":{"row":19,"column":0},"action":"insert","lines":["",""],"id":901}],[{"start":{"row":19,"column":0},"end":{"row":19,"column":1},"action":"insert","lines":["c"],"id":902}],[{"start":{"row":19,"column":1},"end":{"row":19,"column":2},"action":"insert","lines":["="],"id":903}],[{"start":{"row":19,"column":2},"end":{"row":19,"column":3},"action":"insert","lines":["c"],"id":904}],[{"start":{"row":19,"column":3},"end":{"row":19,"column":4},"action":"insert","lines":["%"],"id":905}],[{"start":{"row":19,"column":4},"end":{"row":19,"column":5},"action":"insert","lines":["5"],"id":906}],[{"start":{"row":19,"column":5},"end":{"row":19,"column":6},"action":"insert","lines":[";"],"id":907}],[{"start":{"row":19,"column":6},"end":{"row":20,"column":0},"action":"insert","lines":["",""],"id":908}],[{"start":{"row":20,"column":0},"end":{"row":20,"column":1},"action":"insert","lines":["x"],"id":909}],[{"start":{"row":20,"column":1},"end":{"row":20,"column":2},"action":"insert","lines":["="],"id":910}],[{"start":{"row":20,"column":2},"end":{"row":20,"column":3},"action":"insert","lines":["c"],"id":911}],[{"start":{"row":20,"column":2},"end":{"row":20,"column":3},"action":"remove","lines":["c"],"id":912}],[{"start":{"row":20,"column":2},"end":{"row":20,"column":3},"action":"insert","lines":["x"],"id":913}],[{"start":{"row":20,"column":3},"end":{"row":20,"column":4},"action":"insert","lines":["+"],"id":914}],[{"start":{"row":20,"column":4},"end":{"row":20,"column":5},"action":"insert","lines":["c"],"id":915}],[{"start":{"row":20,"column":5},"end":{"row":20,"column":6},"action":"insert","lines":[";"],"id":916}],[{"start":{"row":12,"column":4},"end":{"row":12,"column":5},"action":"remove","lines":["c"],"id":917}],[{"start":{"row":12,"column":4},"end":{"row":12,"column":5},"action":"insert","lines":["k"],"id":918}],[{"start":{"row":12,"column":4},"end":{"row":12,"column":5},"action":"remove","lines":["k"],"id":919}],[{"start":{"row":12,"column":4},"end":{"row":12,"column":5},"action":"insert","lines":["c"],"id":920}],[{"start":{"row":12,"column":6},"end":{"row":12,"column":7},"action":"insert","lines":["r"],"id":921}],[{"start":{"row":12,"column":7},"end":{"row":12,"column":8},"action":"insert","lines":["o"],"id":922}],[{"start":{"row":12,"column":8},"end":{"row":12,"column":9},"action":"insert","lines":["u"],"id":923}],[{"start":{"row":12,"column":9},"end":{"row":12,"column":10},"action":"insert","lines":["n"],"id":924}],[{"start":{"row":12,"column":10},"end":{"row":12,"column":11},"action":"insert","lines":["d"],"id":925}],[{"start":{"row":12,"column":11},"end":{"row":12,"column":12},"action":"insert","lines":["("],"id":926}],[{"start":{"row":12,"column":17},"end":{"row":12,"column":18},"action":"insert","lines":[")"],"id":927}],[{"start":{"row":2,"column":0},"end":{"row":3,"column":0},"action":"insert","lines":["",""],"id":928}],[{"start":{"row":2,"column":0},"end":{"row":2,"column":1},"action":"insert","lines":["#"],"id":929}],[{"start":{"row":2,"column":1},"end":{"row":2,"column":2},"action":"insert","lines":["i"],"id":930}],[{"start":{"row":2,"column":2},"end":{"row":2,"column":3},"action":"insert","lines":["n"],"id":931}],[{"start":{"row":2,"column":3},"end":{"row":2,"column":4},"action":"insert","lines":["c"],"id":932}],[{"start":{"row":2,"column":4},"end":{"row":2,"column":5},"action":"insert","lines":["l"],"id":933}],[{"start":{"row":2,"column":5},"end":{"row":2,"column":6},"action":"insert","lines":["u"],"id":934}],[{"start":{"row":2,"column":6},"end":{"row":2,"column":7},"action":"insert","lines":["d"],"id":935}],[{"start":{"row":2,"column":7},"end":{"row":2,"column":8},"action":"insert","lines":["e"],"id":936}],[{"start":{"row":2,"column":8},"end":{"row":2,"column":9},"action":"insert","lines":["<"],"id":937}],[{"start":{"row":2,"column":9},"end":{"row":2,"column":10},"action":"insert","lines":["m"],"id":938}],[{"start":{"row":2,"column":10},"end":{"row":2,"column":11},"action":"insert","lines":["a"],"id":939}],[{"start":{"row":2,"column":11},"end":{"row":2,"column":12},"action":"insert","lines":["t"],"id":940}],[{"start":{"row":2,"column":12},"end":{"row":2,"column":13},"action":"insert","lines":["h"],"id":941}],[{"start":{"row":2,"column":13},"end":{"row":2,"column":14},"action":"insert","lines":["."],"id":942}],[{"start":{"row":2,"column":14},"end":{"row":2,"column":15},"action":"insert","lines":["h"],"id":943}],[{"start":{"row":2,"column":15},"end":{"row":2,"column":16},"action":"insert","lines":[">"],"id":944}],[{"start":{"row":24,"column":1},"end":{"row":24,"column":2},"action":"insert","lines":["l"],"id":945}],[{"start":{"row":24,"column":2},"end":{"row":24,"column":3},"action":"insert","lines":["e"],"id":946}],[{"start":{"row":24,"column":3},"end":{"row":24,"column":4},"action":"insert","lines":["a"],"id":947}],[{"start":{"row":24,"column":4},"end":{"row":24,"column":5},"action":"insert","lines":["r"],"id":948}],[{"start":{"row":24,"column":4},"end":{"row":24,"column":5},"action":"remove","lines":["r"],"id":949}],[{"start":{"row":24,"column":3},"end":{"row":24,"column":4},"action":"remove","lines":["a"],"id":950}],[{"start":{"row":24,"column":2},"end":{"row":24,"column":3},"action":"remove","lines":["e"],"id":951}],[{"start":{"row":24,"column":1},"end":{"row":24,"column":2},"action":"remove","lines":["l"],"id":952}]]},"ace":{"folds":[],"scrolltop":14,"scrollleft":0,"selection":{"start":{"row":24,"column":1},"end":{"row":24,"column":1},"isBackwards":false},"options":{"guessTabSize":true,"useWrapMode":false,"wrapToView":true},"firstLineState":{"row":0,"state":"start","mode":"ace/mode/c_cpp"}},"timestamp":1497635896995}