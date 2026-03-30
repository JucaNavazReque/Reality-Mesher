using UnityEngine;
using System;
using System.Collections;
public class SessionManager : MonoBehaviour
{
    private static SessionManager _instance;
    public static SessionManager Instance => _instance;

    string session;
    public MainMenuScript mainMenu;
    public CreatePosMarkers createPosMarkers;

    public void Awake()
    {
        _instance = this;

        session = "session_" + DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
        mainMenu.session = session;
        createPosMarkers.session = session;
    }

    // Runs a coroutine on this always-active singleton, allowing disabled GameObjects to
    // start coroutines by delegating through here.
    public void RunCoroutine(IEnumerator coroutine)
    {
        StartCoroutine(coroutine);
    }
}