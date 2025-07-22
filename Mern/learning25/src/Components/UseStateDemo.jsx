import React, { useState } from 'react'

export const UseStateDemo = () => {

    const [count,setcount] = useState(0)
    const Increment=()=>{
        setcount(count+1)
        console.log("count = ",count)
    }
  return (
    <div>
        <h1>UseStateDemo</h1>
        <h1>COUNT = {count}</h1>
        <button onClick={()=>(Increment())}>Increment</button>
        </div>
  )
}
