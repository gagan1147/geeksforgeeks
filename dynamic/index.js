async function apiCall(){
    return new Promise(resolve =>{
        setTimeout(()=>{resolve('b')},50);
    });
};

async function logger(){

    setTimeout(()=>console.log('a'),10);
    console.log(await apiCall());
    console.log('c');
};
logger();