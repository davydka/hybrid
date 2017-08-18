// import {TweenMax} from "gsap";
const TweenMax = require("gsap").TweenMax;


var arr1 = [50,-150,170,150,-70,150];
var arr2 = [50,50,50,50,50,50]; 

arr2.onUpdate = function() {
  TweenMax.set('body', {webkitClipPath:'polygon('+arr1[0]+'%'+arr1[1]+'%,'+arr1[2]+'%'+arr1[3]+'%,'+arr1[4]+'%'+arr1[5]+'%)'});
};

TweenLite.to(arr1,3, arr2);
