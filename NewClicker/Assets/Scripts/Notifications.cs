using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Unity.Notifications.Android;

public class Notifications : MonoBehaviour
{
    private void Awake()
    {
        AndroidNotificationChannel channel = new AndroidNotificationChannel()
        {
            Name = "News | Новости",
            Description = "Уведомления о новостях игры", 
            Id = "news",
            Importance = Importance.High //Low, Default, High
        };

        AndroidNotificationCenter.RegisterNotificationChannel(channel);
    }

    public void SendNotification()
    {
        AndroidNotification notification = new AndroidNotification()
        {
            Title = "Накопитель переполнен!",
            Text = "Излишки будут утеряны!!!",
            FireTime = System.DateTime.Now.AddSeconds(5)
        };

        AndroidNotificationCenter.SendNotification(notification, "news");
    }
}
