using UnityEngine;
using System;
public class SessionManager : MonoBehaviour
{
    string session;
    public MainMenuScript mainMenu;
    public CreatePosMarkers createPosMarkers;
    public void Awake()
    {
        session = "session_" + DateTime.Now.ToString("dd-MM-yyyy_HH-mm-ss");
        mainMenu.session = session;
        createPosMarkers.session = session;
    }
}