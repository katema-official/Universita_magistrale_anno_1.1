using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ChangeColor : MonoBehaviour
{

    public Material myColor;
    private Material beginColor;

    // Start is called before the first frame update
    void Start()
    {
        beginColor = GetComponent<Material>();
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.F))
        {
            Material actualColor = GetComponent<Renderer>().material;
            //Debug.Log("current material is " + actualColor.name.Replace(" (Instance)", "") + ", myColor name is " + myColor.name);


            if(actualColor.name.Replace(" (Instance)", "") != myColor.name)
            {
                Debug.Log("Change material to myColor");
                actualColor = myColor;
            }
            else
            {
                Debug.Log("Change material to beginColor");
                actualColor = beginColor;
            }
            GetComponent<Renderer>().material = actualColor;

        }
        
    }
}
