import React from 'react'
import { useFieldArray, useForm } from 'react-hook-form'

export const Useformdemo5 = () => {
  const{register,handleSubmit,control}= useForm({
    defaultValues:{
      complaint:[{Title:"",frequency:"",type:[]}]
    }
  })
  const{fields,append,remove}=useFieldArray({
      control,
      name:"complaint"
  })
  const submithandler=(data)=>{
      console.log(data);
  } 

  
  return (
    <div style={{textAlign:"center"}}>
      <h1>Useformdemo5</h1>
      <form action="" onSubmit={handleSubmit(submithandler)}>
          {
            fields.map((filed,index)=>{
              return <div>
                 <div>
                      <label>TITLE</label>
                      <input type='text' {...register(`complaint.${index}.title`)}></input>
                            
                 </div>

                <div>
                      <label>FREQUENCY</label> <br></br>
                      DAILY :<input type='radio' value="daily" {...register(`complaint.${index}.frequency`)}></input>
                      <br></br>
                      some time :<input type='radio' value="sometime" {...register(`complaint.${index}.frequency`)}></input>
                </div>
                  <div>
                      <label>type</label> <br></br>
                      NOT PICKINUP CALL<input type='checkbox' value="call not pickup" {...register(`complaint.${index}.type`)}></input>
                      <br></br>
                      SLOW REPLAY<input type='checkbox' value="slow replay" {...register(`complaint.${index}.type`)}></input>
                      <br></br>
                      SHOWING ATTITUDE<input type='checkbox' value="showing attitude" {...register(`complaint.${index}.type`)}></input>
                      <br></br>
                      HIDE LAST SEEN<input type='checkbox' value="hide last seen" {...register(`complaint.${index}.type`)}></input>
                      <br></br>
                      OTHER CANT SAY<input type='checkbox' value="other" {...register(`complaint.${index}.type`)}></input>
                      <br></br>  
                      </div>
                  </div>
            })
          }
          <div>
        <input type="submit" />
      </div>
      </form>
      <div>
        <button onClick={()=>{append([{Title:"",frequency:"",type:[]}])}}>add More??</button>
      </div>
      
    </div>
    
  )
}
