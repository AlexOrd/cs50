var nums = [1, 2, 3, 4, 5];

// demonstrates an anonymous function
function changeArray(event)
{
    var triggerObject = event.srcElement;
    alert("You clicked on " + 
          triggerObject.innerHTML);
    
    // display nums before the map has been applied
    disp(nums,'Before: ');
    
    // map the array and assign it back to nums
    nums = nums.map(function(num) {
        return num * 2;
        
    });
    
    // display nums after the map has been applied
    disp(nums,'After: ');
    console.log(window);
    
    
    
    function disp(nums, when) 
    {
        console.log(when);
    logstring = '';
    for (var element of nums)
    {
        logstring += element + '  ';
    }
    console.log(logstring + '\n');
    }
}