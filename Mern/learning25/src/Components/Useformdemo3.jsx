import React, { useState } from 'react'
import { useForm } from 'react-hook-form'

export const Useformdemo3 = () => {
    const{register,handleSubmit,formState:{errors}}= useForm()
     const [data1,setdata]= useState({})
    const[isSubmitted , setisSubmitted] = useState()
    const submitHandler = (data)=>{
        console.log(data);
        setdata(data)
        setisSubmitted(true)  
    }

      const validationSchema  ={
        addressValidator:{
          minLength:{
            value:5,
            message:"min length should be 5"
          },
          maxLength:{
            value:10,
            message:"max length should be 10"
          }
        },
    }

  return (
    <div style={{textAlign:'center'}} >
        <h1>Useformdemo3</h1>
        <form action="" onSubmit={handleSubmit(submitHandler)}>
            <div>
                <label>FirstName</label>
               <input type='text' {...register("firstname",{required:{value:true,message:"Firstname is requied"}})}></input>
                {
                    errors.firstname?.message
                }
            </div>
            <div>
                <label>LastName</label>
               <input type='text' {...register("lastName",{required:{value:true,message:"lastName is requied"}})}></input>
                {
                    errors.lastName?.message
                }
            </div>
            <div>
                <label>Address</label>
               <input type='text' {...register("address",validationSchema.addressValidator)}></input>
                {
                    errors.address?.message
                }
            </div>
            <div>
                    <input type='submit'></input>
            </div>

        </form>
        {
            isSubmitted && <div>
                  <h1>OUTPUT</h1>
                    <h2>FirstName= {data1.firstname}</h2>
                    <h2>Lastname = {data1.lastName}</h2>
                    <h2>Address = {data1.address}</h2>



                </div>
        }

    </div>
  )
}
