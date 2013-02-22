<!DOCTYPE HTML>
<html>

<script type="text/javascript">

</script>

<head>


	<title>Coop</title>
<meta http-equiv="Content-Type" content="text/html; charset=UTF-8" />
	<LINK REL=StyleSheet HREF="resources/coop.css" TYPE="text/css">


	<script type="text/javascript" src="resources/coop.js"></script>
</head>
<body>
<div id="myDiv"></div>

<body onload="Function1()">


	<div id="topbox"></div>



	<div class="mainbox">


<table class="list" border="1">
	

			<td class="list7" id="opt1"><button onclick="myFunction('1')" class="list0" type="button"></button></td>
			<td class="list1" id="opt2">Leverantör</td>
			<td class="list2" id="opt3">Vara</td>
			<td class="list3" id="opt4">Kategori</td>
			<td class="list4" id="opt5">Land</td>
			<td class="list5" id="opt6">Riskpoäng</td>
			<td class="list6" id="opt7">Nästa revision</td>


	<script>
var i3=0;

		
	var rows = [];
	rows.push(new Row("Status", "Grej1", "Grej2", "Grej3", "Grej4", "Grej5", "Grej6"));
	rows.push(new Row("Fnatus", "Grej1", "Grej2", "Grej3", "Grej4", "Grej5", "Grej6"));
	rows.push(new Row("Blatus", "Grej1", "Grej2", "Grej3", "Grej4", "Grej5", "Grej6"));


	while (i3<1)
	{

i3++;
printObject(rows[0]);
printObject(rows[1]);
printObject(rows[2]);

}


</script>
		</table>
	</div>


</body>
</html>