/**
 * @param {string} s
 * @param {string} t
 * @return {boolean}
 */
var isAnagram = function (s, t) {
  if (!t && !s) return true;
  if (!t || t.length < s.length || t.length > s.length) return false;
  var str1 = s.split("").sort()
  var str2 = t.split("").sort()
  for(var i=0 ; i<str1.length ; i++) if(str1[i] !== str2[i]) return false;
  return true;
};