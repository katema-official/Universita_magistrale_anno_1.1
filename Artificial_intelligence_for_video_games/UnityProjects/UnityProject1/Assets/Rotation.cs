using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Rotation : MonoBehaviour
{

    public float rotationalSpeed = 90f;

    // Start is called before the first frame update
    void Start()
    {
       
    }

    //void onCollisionEnter(Collision c)
    //{
    //    Debug.Log("Ciao");
    //    Rigidbody rb = GetComponent<Rigidbody>();

    //    rb.AddForce(transform.up * 300f);
    //}

    // Update is called once per frame
    void Update()
    {
        transform.Rotate(transform.up, rotationalSpeed * Time.deltaTime);
    }
}
