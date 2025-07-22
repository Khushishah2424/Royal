import React, { useState } from 'react'
import { useFieldArray, useForm } from 'react-hook-form'


export const Ticketbook = () => {
    const{register,handleSubmit,control} = useForm({
        defaultValues:{
            bookingdata :[{from :'',to:'',date:'',seat:'1'}]

        }  
    })
    const{fields,append,remove}= useFieldArray({
        control,
        name :"bookingdata"
    })
    const[isSubmitted,setisSubmitted] = useState()
    const submithandler=(data)=>{
      console.log(data);
      setisSubmitted(data.bookingdata) 
    } 
    
  return (
    <div>
        <div className="container mt-5">
      <h3 className="text-center mb-4">City Seat Booking</h3>
      <form className="p-4 shadow rounded bg-light" onSubmit={handleSubmit(submithandler)}>

        {fields.map((field, index) => (
          <div key={field.id}>
            <div className="mb-3">
              <label className="form-label">From:</label>
              <select className="form-select" {...register(`bookingdata.${index}.from`)} required>
                <option value="">Select City</option>
                <option value="Mumbai">Mumbai</option>
                <option value="Delhi">Delhi</option>
                <option value="Bangalore">Bangalore</option>
                <option value="Chennai">Chennai</option>
                <option value="Kolkata">Kolkata</option>
                <option value="Pune">Pune</option>
              </select>
            </div>

            <div className="mb-3">
              <label className="form-label">To:</label>
              <select className="form-select" {...register(`bookingdata.${index}.to`)} required>
                <option value="">Select City</option>
                <option value="Mumbai">Mumbai</option>
                <option value="Delhi">Delhi</option>
                <option value="Bangalore">Bangalore</option>
                <option value="Chennai">Chennai</option>
                <option value="Kolkata">Kolkata</option>
                <option value="Pune">Pune</option>
              </select>
            </div>

            <div className="mb-3">
              <label className="form-label">Date:</label>
              <input type="date" className="form-control" {...register(`bookingdata.${index}.date`)} required />
            </div>

            <div className="mb-3">
              <label className="form-label">Number of Seats:</label>
              <input type="number" className="form-control" {...register(`bookingdata.${index}.seats`)} min="1" max="10" required />
            </div>


            <hr />
          </div>
        ))}
        <button type="button" className="btn btn-secondary mb-3" onClick={() => append({ from: '', to: '', date: '', seats: 1 })}>
          + Add Another Booking
        </button>
        <button type="submit" className="btn btn-primary w-100">Book Now</button>
      </form>
    {isSubmitted && (
        <div className="mt-5">
          <h4>Submitted Booking Details:</h4>
          {isSubmitted.map((booking, idx) => (
            <div key={idx} className="border p-3 my-2 bg-white rounded shadow-sm">
              <p><strong>From:</strong> {booking.from}</p>
              <p><strong>To:</strong> {booking.to}</p>
              <p><strong>Date:</strong> {booking.date}</p>
              <p><strong>Seats:</strong> {booking.seats}</p>
            </div>
          ))}
        </div>
      )}

    </div>
    </div>

  )
}
