import React from 'react'

export default function Contents() {
    var age = 30;
  var Sname = "Khushi";
  var Isactive = true;
  return (

    <div>
        <h1>Contents</h1>
        <div>
             
              hello
              <h2>{age}</h2>
              <h3>active ??? {Isactive == true? "Active" : "not Avtive"}</h3>
            </div>
          
        </div>
    
  )
}
