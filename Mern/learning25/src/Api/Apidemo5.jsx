import axios from 'axios'
import React, { useState } from 'react'
import { useForm } from 'react-hook-form'
import { useNavigate } from 'react-router-dom'


export const Apidemo5 = () => {
    const[name,setName] = useState("");
    const[email,setEmail] = useState("");
    const[age,setAge] = useState("");
    const[isActive,setIsActive] = useState("");
    const[password,setPassword] = useState("");


    const navigate = useNavigate()
    const [isLoading, setisLoading] = useState(false)
    const userObj={
      name,
      email,
      age,
      isActive,
      password
    }
    // setisLoading(true)
    const addUser=async()=>{
        const res =  await axios.post("https://node5.onrender.com/user/user",userObj)
        console.log(res)
        if(res.status == 201){
          // setisLoading(false)
          navigate("/apidemo1")

        }
        else{
          alert("not")
          // setisLoading(false)

        }
    }
  return (

    <div style={{}}>
      
        <h1>Apidemo5</h1>
      

            <div>
                <label>Name</label><br />
                <input type="text" value={name} onChange={(e) => setName(e.target.value)} />
            </div>

            <div>
                <label>Email</label><br />
                <input type="text" value={email} onChange={(e) => setEmail(e.target.value)} />
            </div>

            <div>
                <label>Age</label><br />
                <input type="text" value={age} onChange={(e) => setAge(e.target.value)} />
            </div>

            <div>
                <label>isActive (true/false)</label><br />
                <input type="text" value={isActive} onChange={(e) => setIsActive(e.target.value)} />
            </div>

            <div>
                <label>Password</label><br />
                <input type="text" value={password} onChange={(e) => setPassword(e.target.value)} />
            </div>
       
        <button onClick={()=>{addUser()}} className='btn btn-info'>ADD</button>

    </div>
  )
}
