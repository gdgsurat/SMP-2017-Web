function deepEqual(a, b) {
  if (a === b) return true;
  
  if (a == null || typeof a != "object" ||
      b == null || typeof b != "object")
    return false;
  
  var pra = 0, prb = 0;

  for (var pr in a)
    pra += 1;

  for (var pr in b) {
    prb += 1;
    if (!(pr in a) || !deepEqual(a[pr], b[pr]))
      return false;
  }

  return pra == prb;
}

var obj = {pr1: "str", pr2: 2};
console.log(deepEqual(obj, obj));
console.log(deepEqual(obj, {pr1: 1, pr2: 2}));
console.log(deepEqual(obj, {pr1: "str", pr2: 2}));