import React from 'react'
import { useFetchdata } from '../Hook/ApiHook'
import { Loader } from '../Components/loader'

export const Apidemo11 = () => {
    const {data,isLoading} = useFetchdata("https://dummyjson.com/products")

  return (
    <div style={{textAlign:"center"}}>
        <h1>Apidemo11</h1>
        {
            isLoading && <Loader></Loader>
        }
        {
            data.products?.map((products)=>{
                 return <li>{products.title}</li>
            })
        }
    </div>




  )
}
