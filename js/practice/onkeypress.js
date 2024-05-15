var count = 0;
var starttime;
var flag = true;
function highlightWord() {

    if(count === 0){
        starttime = performance.now();
        // console.log(starttime);
    }
    count++
    var sentence = document.getElementById("sentence").textContent;
    var textmark = document.getElementById("textMark").value;
    // var highlight = document.getElementById("highlight");
    var highlightedSentence = "";

    for (var i = 0; i < sentence.length; i++) {
        if (sentence[i] == textmark[i])
        {
            flag= true;
            highlightedSentence += '<span class="highlight">' + sentence[i] + '</span>';
            // highlightedSentence += highlight + sentence[i];
        } 
        else
        {
            highlightedSentence =  highlightedSentence + sentence[i]; 
            flag = false;
        }
    }
    var sentence = document.getElementById("sentence");
    sentence.innerHTML = highlightedSentence;
}

function end(){
    
    var time = document.getElementById("time");
    var endtime = performance.now();
    // console.log(endtime);

    if(flag){
        var diff = (endtime - starttime)/1000;
        console.log("Matched! Time taken: " + diff + " seconds.");
    }
    else{
        alert("The text does not match.");
    }



}
