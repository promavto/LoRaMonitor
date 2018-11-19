function rDecode(){

var vline1=document.userform.line1.value;

document.getElementById('resistor').innerHTML='Организация';
document.userform.line1.disabled = 'disabled';
document.userform.line1.options[2].selected = 'selected';
//visibled("inPostInd", false);
//visibled("inStreet", false);
//visibled("inTel", false);

//if (vDost == 1) {visibled("inPostInd", true);  visibled("inStreet", true);}
//if (vDost == 2) {visibled("inTel", true); visibled("inTel", true);}
//if (vDost == 3) {visibled("inTel", true);}
//if (vDost == 4) {visibled("inTel", true);}

}//function showDelivery()




function changeAmount(product, amount){
$_SESSION['cart'][product] = amount;
document.getElementById('basketcost').innerHTML='Организация';
}

function refreshBasket(){

document.getElementById('basketcost').innerHTML='Организация';

}

function changePayment(){

var vPayment=document.userform.payment.value;




if (vPayment == 5) 
  { 
   document.userform.delivery.disabled = 'disabled';
   document.userform.delivery.options[0].selected = 'selected';
   showDelivery();
  }
else
  {
  document.userform.delivery.disabled = '';
  }
}//changePayment

function showDelivery(){

var vDost=document.userform.delivery.value;


visibled("inPostInd", false);
visibled("inStreet", false);
visibled("inTel", false);

if (vDost == 1) {visibled("inPostInd", true);  visibled("inStreet", true);}
if (vDost == 2) {visibled("inTel", true); visibled("inTel", true);}
if (vDost == 3) {visibled("inTel", true);}
if (vDost == 4) {visibled("inTel", true);}

}//function showDelivery()



function visibled(id,a){
  var mode; 
  if(a==true) 
    mode=""; 
  else 
    mode="none";
  document.getElementById(id).style.display=mode;
}

function add_to_basket(art,ret) {
	if (ret!='') { ret='&back=goodspage'; }
	window.location.href='to_basket.php?art='+art+ret+'&count='+window.prompt('Введите необходимое количество единиц товара');
}

function refresh_cost() {
  document.getElementById('basketcost').innerHTML='4';
}

