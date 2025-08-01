import axios from "axios"
import { useEffect, useState } from "react"

export const useFetchdata =(url)=>{
    const [data,setdata] = useState({})
    const [isLoading,setIsloading] = useState(false)

    const getApiCall = async()=>{
        setIsloading(true)
        const res = await axios.get(url)
        setdata(res.data)
        setIsloading(false)

    };
    useEffect(()=>{
        getApiCall()
    },[])
    return {data,isLoading}
}