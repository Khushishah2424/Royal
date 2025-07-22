import React, { useMemo, useState } from 'react'

export const UseMemoBomb = () => {
    var GridSize = 4;
    var totalSize = GridSize * GridSize;
    const [clicktiles, setclicktitles] = useState([])
    const [gameOver, setgameOver] = useState(false)
    const[amount,setamount] = useState();
    const [Wining , setWinnning]= useState(0);


      var bombpas = useMemo(()=>{
        return Math.floor(Math.random()*totalSize);
       
    },[])
     console.log("rd",bombpas);
    const HandClick=(index)=>{
        console.log("before..",clicktiles);
        var x = [...clicktiles,index];
        console.log("after",x);
        setclicktitles(x);
        const multi = 1+x.length*0.5; 
        setWinnning(amount*multi);
        if (bombpas == index){
            setgameOver(true);
            // window.location.reload();
        }
    }

    const StartGame= ()=>{
        var x = parseInt(prompt("enter amout to bet"));
        console.log(x);
        setamount(x);

    }



    
  return (
    <div style={{textAlign:"center"}}>
      <h1> UseMemoBomb</h1>
      <button onClick={()=>{StartGame()}}>StartGame</button>
      <div
        style={{
          display: "grid",
          gridTemplateColumns: `repeat(${GridSize}, 50px)`,
          gap: "10px",
          justifyContent: "center",
        }}
      >

     {Array.from({length:totalSize}).map((_,index)=>{
        return(
            <div
            onClick={()=>{HandClick(index)}}
              style={{
                width: "50px",
                height: "50px",
                display: "flex",
                alignItems: "center",
                justifyContent: "center",
                border: "1px solid black",
         
                cursor: "pointer",
                 backgroundColor:clicktiles.includes(index)?"#ddd":"#fff",
              }}
            >
                 {
                    gameOver && index==bombpas ? "💣":  index+1
                }
            </div>
        );
        
     })} 
        </div>
        {
            gameOver && Wining
        }
        </div>
  )
}
