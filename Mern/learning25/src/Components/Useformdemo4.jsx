import React, { useState } from 'react'
import { useForm } from 'react-hook-form'

export const Useformdemo4 = () => {
    const {register ,handleSubmit , formState:{errors}}= useForm()
    const{data,setdata}= useState({})
    const submitHandler = (data)=>{
        console.log(data);  
        setdata(data) 
    }
    console.log(errors)
    var refercode = ["royal","dhiraj"];
    const validationSchema = {
        refcodevalidatoe :{
            required:{
                value :true,
                message :"Ref code is requied..."
            },
            validate:(value)=>{
                return refercode.includes(value) || "value must be there in refcode"
            }
    
        },
        phonevalidator:{
            required:{
                value:true,
                message:"phone num is required"
            },
            pattern:{
                value:/[6-9]{1}[0-9]{9}/,
                message:"invalid phone"
            }
        }
    }

  return (
    <div>
        <h1>Useformdemo4</h1>
        <form onSubmit={handleSubmit(submitHandler)}>
             <div>
                 <label>Ref Code</label>
                 <input type='text' {...register("refcode",validationSchema.refcodevalidatoe )}></input>
                 {errors.refcode?.message}
            </div>
              <div>
                 <label>Phonenum</label>
                 <input type='text' {...register("phonenum",validationSchema.phonevalidator)}></input>
                 {errors.phonenum?.message}
            </div>
            <div>

                <input type='submit'></input>
            </div>
        </form>
        
    </div>
  )
}
