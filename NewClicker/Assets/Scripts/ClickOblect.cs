using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class ClickOblect : MonoBehaviour
{
    private bool move;
    private Vector2 randomVector;

    private void Update()
    {
        if(!move) return;
        transform.Translate(randomVector * Time.deltaTime);
    }

    public void StartMotion(ulong ScoreClick)
    {
        GetComponent<Text>().text = $"+{ScoreClick} Дж";
        randomVector = new Vector2(Random.Range(-3, 3), Random.Range(-3, 3));
        move = true;
    }
}
