import React, { useState } from 'react'
import { useForm } from 'react-hook-form'

export const Allvalidations = () => {
    const{register,handleSubmit,formState:{errors}}= useForm()
    const[data,setdata]= useState({})
  const[isSubmitted , setisSubmitted] = useState()
    const Submithandler = (data)=>{
        console.log(data);
        setisSubmitted(true)
        setdata(data)

    }
    const validationSchema ={
        namevalidator:{
            required:{
                value:true,
                message :"Name is required"
            } 
        },
        agevalidator:{
            required:{
                value:true,
                message:"age is required",
            },
            min:{
                value:18,
                message:"iit should be atleast 18"
            },
            max:{
                value:60,
                message:"iit should be greter than 18"
            }
        },
        emailvalidator:{
            required:{
                value:true,
                message:"email is required",
            },
             minLength:{
                value:5,
                message:"min length should be 5"
            },
            
        },
        phonevalidator:{
            required:{
                value:true,
                message:"number is required",
            },
            pattern:{
               value:/[6-9]{1}[0-9]{9}/,
                message:"invalid phone"
            }
        }

    }


  return (
    <div>
        <h1>allvalidations</h1>
        <form action="" onSubmit={handleSubmit(Submithandler)}>
            <div>
                <label>Name :</label>
                <input type='text' {...register("name",validationSchema.namevalidator)}></input>
                {errors.name?.message}
            </div>
            <div>
                <label>Age :</label>
                <input type='number' {...register("age",validationSchema.agevalidator)}></input>
                {errors.age?.message}
            </div>
             <div>
                <label>Email:</label>
                <input type='text' {...register("email",validationSchema.emailvalidator)}></input>
                {errors.email?.message}
            </div>
             <div>
                <label>PhoneNum:</label>
                <input type='text' {...register("phonenum",validationSchema.phonevalidator)}></input>
                {errors.phonenum?.message}
            </div>

            
            
               <div>
                <input type='submit'></input>
            </div>
            
        </form>
         {
            isSubmitted && <div>
                  <h1>OUTPUT</h1>
                    <h2>Name= {data.name}</h2>
                    <h2>age = {data.age}</h2>
                    <h2>email = {data.email}</h2>
                    <h2>phonenum= {data.phonenum}</h2>




                </div>
        }
    </div>
    
  )
}
