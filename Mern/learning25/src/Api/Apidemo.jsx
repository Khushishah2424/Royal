import axios from 'axios'
import React, { useEffect, useState } from 'react'
import { Loader } from '../Components/loader'

export const Apidemo = () => {

     const [message, setmessage] = useState("")
    const [users, setusers] = useState([])
    const [isLoading,setIsloading]=useState(false)
    const getApiCall=async()=>{

        setIsloading(true)  
        const res = await axios.get("https://node5.onrender.com/user/user")
        console.log("axios object",res)
        console.log(res.data)
        console.log(res.data.message)
        setmessage(res.data.message)
        console.log(res.data.data)
        setusers(res.data.data)
        setIsloading(false)

    }

    const deleteUser = async(id)=>{
      const res = await axios.delete("https://node5.onrender.com/user/user/"+id)
      console.log(res)
      if(res.status == 204){
        getApiCall()
      }
    }
    useEffect(()=>{
      getApiCall()
    },[])

  return (
    <div style={{textAlign:"center"}}>
      {
        isLoading && <Loader></Loader>
      }
        <h1>API DEMO 1</h1>
        {/* <button onClick={()=>{getApiCall()}}>GET</button> */}
        {message}
        {
          <table>
            <thead>
              <tr>
                <th>ID</th>
                <th>Name</th>
                <th>Email</th>
                <th>Status</th>
                <th>PassWord</th>
                <th>Action</th>
              </tr>
            </thead>

            <tbody>
                {
                    users.map((user)=>{
                        return <tr>
                          <td>{user._id}</td>
                            <td>{user.name}</td>
                            <td>{user.age}</td>
                            <td>{user.isActive ? "YES" : "NO"}</td>
                            <td>{user.password ? user.password : "NA"}</td>
                            <button onClick={()=>{deleteUser(user._id)}} className='btn btn-danger'>Delete</button>
                        </tr>
                    })
                }
            </tbody>
          </table>
        }
        
    </div>
  )
}
