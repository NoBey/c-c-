var arr = [
  [2, 3, 5, 0],
  [5, 1, 2, -4],
  [3, 1, -8, 1],
  [34, 1, -8, 10]
];
k=50 
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

for (var i = 0; i < arr2.length; i++) {
  for (var tmp1 = i + 1; tmp1 < arr2.length; tmp1++) {
    var sum = arr2[i] + arr2[tmp1];
    if (sum > val && sum <= k) {
      val = sum;
      coor = [i, tmp1];
    }
  }
}

function c(x) {
  return '(' + Math.ceil((x + 1) / h) + ',' + (1 + (x % l)) + ')';
}
console.log(c(coor[0]) + arr2[coor[0]] + ' + ' + c(coor[1]) + arr2[coor[1]] + ' = ' + val)
