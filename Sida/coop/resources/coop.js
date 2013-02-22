
var li=0;


function myFunction(li)
{

document.getElementsByClassName('list0')[li-1].style.visibility='hidden';
document.getElementsByClassName('list7')[li-1].style.backgroundColor= 'green';
}
function Function1()
{
	var i=-1;
	while (i<1)
	{
	i++;


}
}

function printObject(row1, i)
{
document.write('<tr class="listopt">');
document.write('<td class="list7" id="opt1">');

document.write('<button class="list0">');
document.write(row1.status); 
document.write('</button>');

document.getElementsByClassName('list0')[0].style.backgroundColor = 'rgb(198, 198, 198)';
document.getElementsByClassName('list0')[0].style.borderWidth = '0';

document.getElementsByClassName('list0')[i].style.backgroundColor = 'rgb(198, 198, 198)';
document.getElementsByClassName('list0')[i].style.borderWidth = '0';

document.write('</td>');
document.write('<td class="list1" id="opt2">');
document.write(row1.lev);
document.write('</td>');
document.write('<td class="list2" id="opt3">');
document.write(row1.prod);
document.write('</td>');
document.write('<td class="list3" id="opt4">');
document.write(row1.cat);
document.write('</td>');
document.write('<td class="list4" id="opt5">');
document.write(row1.country);
document.write('</td>');
document.write('<td class="list5" id="opt6">');
document.write(row1.risk);
document.write('</td>');
document.write('<td class="list6" id="opt7">');
document.write(row1.nextrev);
document.write('</td>');
document.write('</tr>');
}


	function Row(status, lev, prod, cat, country, risk, nextrev)
	{

  this.status = status;
  this.lev = lev;
  this.prod = prod;
  this.cat = cat;
  this.country = country;
  this.risk = risk;
  this.nextrev = nextrev;


}
	document.getElementsByClassName('list0')[0].style.borderWidth='0';
	document.getElementsByClassName('list0')[0].style.backgroundColor = 'rgb(198, 198, 198)';


