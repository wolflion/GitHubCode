window.addEventListener("load",initAll,false);

function initAll(){
	document.getElementById("theForm").addEventListener("submit",addNode,false);
}

function addNode(evt){
	var inText = document.getElementById("textArea").value;
	var newText = document.createTextNode(inText);
	
	var newGraf = document.createElement("p");
	newGraf.appendChild(newText);
	
	var docBody = document.getElementsByTagName("body")[0];
	docBody.appendChild(newGraf);
	
	evt.preventDefault();
}