import React, { useState } from 'react'
import { useForm } from 'react-hook-form'

export const Useformdemo = () => {
     const{register,handleSubmit}=useForm()
    const [data,setdata]= useState({})
    const[isSubmitted , setisSubmitted] = useState()

     const SubmitHandler = (data)=>{
        console.log(data)
        setdata(data)
        setisSubmitted(true)           
     }
  return (
    <div style={{
        textAlign: "center",
        color: "black",
        height: "auto",
        width: "100%",
        backgroundColor: "whitesmoke",
        border: "1px solid",
    }}>
        <h1>FormDemo1</h1>
        <form onSubmit={handleSubmit(SubmitHandler)}>
            <div>
            <label>NAME</label>
            <input type="text" {...register("name")}></input>
        </div>
        <div>
            <label>AGE</label>
            <input type="text" {...register("age")}></input>
        </div>

        <div>
            <label>Gender</label><br />
            Male<input type='Radio' value='male' {...register("gender")}></input><br></br>
            Female<input type='Radio' value='Female' {...register("gender")}></input><br></br>
        </div>

        <div>
            <label>HOBBIES</label><br></br>
            SPORTS <input type="checkbox" {...register("hobbies")} value="sports"></input><br></br>
            TRAVEL <input type="checkbox" {...register("hobbies")} value="TRAVEL"></input><br></br>
            HIKING <input type="checkbox" {...register("hobbies")} value="hikinng"></input><br></br>
        </div>

        <div>
            <input type="submit"></input>
        </div>
        </form>
        {
            isSubmitted && <div>
                 <h1>OUTPUT</h1>
                 <h1>NAME = {data.name}</h1>
                 <h2>
                    <ul>
                        {
                            
                        }
                    </ul>
                 </h2>
                </div>
                
        }
        
    </div>

  )
}
