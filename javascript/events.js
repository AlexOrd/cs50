function alertName(event)
{
    var triggerObject = event.srcElement;
    alert("You clicked on " + 
          triggerObject.innerHTML);
}