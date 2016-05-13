window.addEventListener("load",initAll,false);

function initAll(){
	document.getElementById("theForm").addEventListener("submit",addNode,false);
	document.getElementById("deleteNode").addEventListener("click",delNode,false);
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

function delNode(evt){
	var allGrafs = document.getElementsByTagName("p");
	
	if(allGrafs.length > 1){
		var lastGraf = allGrafs[allGrafs.length-1];
		var docBody = document.getElementsByTagName("body")[0];
		docBody.removeChild(lastGraf);
	}
	else{
		alert("Nothing to remove!");
	}
	
	evt.preventDefault();
}