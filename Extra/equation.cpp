Some properties of bitwise operations:
a|b = a⊕b + a&b , a⊕(a&b) = (a|b)⊕b,
b⊕(a&b) = (a|b)⊕a ,(a&b)⊕(a|b) = a⊕b
Addition: a+b = a|b + a&b, a+b = a⊕b + 2(a&b)
Subtraction:
a-b = (a⊕(a&b))-((a|b)⊕a),a-b = ((a|b)⊕b)-((a|b)⊕a)
,a-b = (a⊕(a&b))-(b⊕(a&b)),a-b = ((a|b)⊕b)-(b⊕(a&b))
