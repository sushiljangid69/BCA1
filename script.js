// var isOn = false;
var a = 'f';
function onoff(){
    var image = document.getElementById('image');
    var button = document.getElementById('button');
    if(a == 'o'){
        image.src = "bulb_off.jpg";
        button.innerHTML = "ON";
        //isOn = false;
        a = 'f';
    }else{
        image.src = "bulb_on.jpg";
        button.innerHTML = "OFF";
        //isOn = true;
        a = 'o';
    }
    console.log(a);
}