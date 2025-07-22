import React, { useState } from 'react'
import { useFieldArray, useForm } from 'react-hook-form'

export const Useformdemo6 = () => {
    const{register,handleSubmit,control}= useForm({
        defaultValues:{
            stdData :[{Name:"",Rollnum:"",Marks:"",Result:""}]
        }
    })
    const {fields,append,remove}= useFieldArray({
        control,
        name:"stdData"
    })
    const submithandler=(data)=>{
      console.log(data);
    } 
  
  return (
    <div style={{textAlign:"center"}}>
        <h1>Useformdemo6</h1>
        <form onSubmit={handleSubmit(submithandler)}>
            {
                fields.map((fields,index)=>{
                    return <div>
                        <div>
                            <label>Name:</label>
                            <input type='text' {...register(`stdData.${index}.Name`)}></input>
                        </div>
                         <div>
                            <label>Rollnum:</label>
                            <input type='text' {...register(`stdData.${index}.Rollnum`)}></input>
                         </div>
                         <div>
                            <label>MArks:</label>
                            <input type='text' {...register(`stdData.${index}.Marks`)}></input>
                         </div>
                         <div>
                             <label>Result</label> <br></br>
                                PAss:<input type='radio' value="PAss" {...register(`complaint.${index}.Result`)}></input>
                             <br></br>
                             Fail :<input type='radio' value="Fails" {...register(`complaint.${index}.Result`)}></input>
                        </div>
                    </div>
                })
            }
            <input type='submit'></input>
        </form>
           <div>
        <button onClick={()=>{append([{Name:"",Rollnum:"",Marks:"",Result:""}])}}>add More??</button>
      </div>

    </div>
  )
}
