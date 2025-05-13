function findFirstSmallestElem(arr){

    var stack = [];
    var ans = [];
    
    stack.push(-1);

    for(let i = arr.length-1; i>=0;i--){
        let currElem = arr[i];
        while(stack[stack.length -1] >= currElem){
            stack.pop();
        }
        ans.push(stack[stack.length -1]);
        stack.push(currElem)
    }
    ans.reverse();
    console.log(ans)
}

var arr = [4,8,2,1,6,10,5]
findFirstSmallestElem(arr);