Array.prototype.unique = function() {
  var newArr = [];
  for (var i = 0; i < this.length; i++) {
    if (newArr.indexOf(this[i]) == -1) {
      newArr.push(this[i]);
    }
  }
  return newArr;
}
var arr = [
  [2, 3, 5, 0],
  [5, 1, 2, -4],
  [3, 1, -8, 1],
  [34, 1, -8, 10]
];
var k = 50;
var val = 0;
var l = arr[0].length;
var h = arr.length;
var arr2 = [];
var coor = [];

for (var i = 0; i < arr.length; i++) {
  for (var ii = 0; ii < arr[i].length; ii++) {
    arr2.push(arr[i][ii]);
  }
}

var arrtmp = arr2.unique().sort((a, b) => b - a)
var arr3 = [];

for (var i = 0; i < arrtmp.length; i++) {
  if (val <= k && (k - val >= arrtmp[i]) && arrtmp[i] > 0) {
    arr3.push(arrtmp[i]);
    val += arrtmp[i];
  }
}

arr3.map((a) => {
  coor.push(arr2.indexOf(a));
})

function c(x) {
  return '(' + Math.ceil((x + 1) / h) + ',' + (1 + (x % l)) + ')';
}

var out = '';

coor.map((val, i) => {
  out += c(val) + arr2[val];
  if (i < coor.length - 1) out += ' + ';
})

out += ' = ' + val;
console.log(out)
