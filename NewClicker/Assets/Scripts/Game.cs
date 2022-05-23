using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;
//using Unity.Notifications.Android;

public class Game : MonoBehaviour
{
    public DateTime DateStart; 
    public DateTime StartDateTime;
    public ulong score = 50; // счёт
    public ulong click; // бонус за клик
    public ulong auto; // автоприбыль
    public ulong save; // накопитель
    public ulong AllEnergy; // вся полученная энергия
    public ulong SokrSc; // сокр счёт
    public ulong SokrAu; // сокр счёт
    public int KolvoClick; // количесво нажатий
    public byte k; // кол-во разрядов или классов
    public int m = 255; // формат отображ счёта
    public int isOnSound = 55555; 
    public int CountNewClick;
    public int CountNewAuto;
    public int CountNewSave;
    public ulong[] clickCost = new ulong[20];
    public ulong[] autoCost = new ulong[30];
    public ulong[] saveCost = new ulong[10];
    public int level;
    public ulong[] clickCostStart = new ulong[20];
    public ulong[] autoCostStart = new ulong[30]; 
    public ulong[] saveCostStart = new ulong[10];
    public ulong SecondCount;
    public ulong[] clickBonus = new ulong[20];
    public ulong[] autoBonus = new ulong[30];
    public ulong[] saveBonus = new ulong[10];
    public int Second;
    public int[] clickNum = new int[20];
    public int[] autoNum = new int[30];
    public int[] saveNum = new int[10];
    public Text[] CostClickTxt;
    public Text[] CostAutoTxt;
    public Text[] CostSaveTxt; 
    public Text[] BonClickTxt; 
    public Text[] BonAutoTxt;
    public Text[] BonSaveTxt;
    public Text[] NumClickTxt; 
    public Text[] NumAutoTxt;
    public Text[] NumSaveTxt;
    public Text BonClickInfoTxt; 
    public Text BonAutoInfoTxt;
    public Text BonSaveInfoTxt;
    public Text ScoreText; // вывод счёта на экран
    public Text AutoText; // вывод auto на экран
    public Text InfoText; // вывод на экран информации
    public Text LevelText;
    public Text SaveBonusText;
    public Text NewClickText;
    public Text ClickMessText;
    public Text AutoMessText;
    public Text SaveMessText;
    public Text InputCode;
    public Text InputScore;
    public Text InputClick;
    public Text InputAuto;
    public Text InputSave;
    public GameObject[] BonusButton = new GameObject[20];
    public GameObject[] AutoButton = new GameObject[30];
    public GameObject[] SaveButton = new GameObject[10];
    public Sprite QuanSt = Resources.Load<Sprite>("QuanStr");
    public Sprite Quark = Resources.Load<Sprite>("Quark");
    public Sprite Proton = Resources.Load<Sprite>("Proton");
    public Sprite Nucleus = Resources.Load<Sprite>("Nucleus");
    public Sprite Atom = Resources.Load<Sprite>("Atom");
    public Sprite Mol = Resources.Load<Sprite>("Mol");
    public Sprite Gen = Resources.Load<Sprite>("Gen");
    public Sprite Chrom = Resources.Load<Sprite>("Chrom");
    public Sprite Kletka = Resources.Load<Sprite>("Kletka");
    public Sprite ListD = Resources.Load<Sprite>("ListD");
    public Sprite Tree = Resources.Load<Sprite>("Tree");
    public Sprite Forest = Resources.Load<Sprite>("Forest");
    public Sprite Ostrov = Resources.Load<Sprite>("Ostrov");
    public Sprite Earth = Resources.Load<Sprite>("Earth");
    public Sprite SystPl = Resources.Load<Sprite>("SystPl");
    public Sprite Sozvezdie = Resources.Load<Sprite>("Sozvezdie");
    public Sprite Galaxy = Resources.Load<Sprite>("Galaxy");
    public Sprite GalaxyClass = Resources.Load<Sprite>("GalaxyClass");
    public Sprite SuperGalaxyClass = Resources.Load<Sprite>("SuperGalaxyClass");
    public Sprite Metagal = Resources.Load<Sprite>("Metagal");
    public Sprite Uny = Resources.Load<Sprite>("Uny");
    public Sprite f8 = Resources.Load<Sprite>("f8");
    public Sprite f9 = Resources.Load<Sprite>("f9");
    public Sprite f10 = Resources.Load<Sprite>("f10");
    public Sprite f11 = Resources.Load<Sprite>("f11");
    public Sprite f12 = Resources.Load<Sprite>("f12");
    public Sprite f13 = Resources.Load<Sprite>("f13");
    public Sprite f14 = Resources.Load<Sprite>("f14");
    public Sprite f15 = Resources.Load<Sprite>("f15");
    public Sprite f16 = Resources.Load<Sprite>("f16");
    public Sprite SoundOn = Resources.Load<Sprite>("SoundOn");
    public Sprite SoundOff = Resources.Load<Sprite>("SoundOff");
    public GameObject BonusPan; 
    public GameObject AutoPan;
    public GameObject SavePan;
    public GameObject InfoPan;
    public GameObject SettingsPan;
    public GameObject SaveBonusPan;
    public GameObject NewClickPanel;
    public GameObject SecretPan;
    public GameObject AdminPan;
    public GameObject NewClickImage;
    public GameObject SoundBtn;
    public GameObject MessBox;
    public GameObject Normal;
    public GameObject Numbers;
    public GameObject Short;
    public GameObject Prefix;
    public GameObject BntClick;
    public GameObject BG;
    public GameObject ClickMess;
    public GameObject AutoMess;
    public GameObject SaveMess;
    // public GameObject ClickParent, ClickTextPref;
    // private GameObject[] clickTextPool = new GameObject[15];
    // private bool move;
    // private Vector2 randomVector; /////////////////////////////////////////////////////////////////////////////////
    private bool checkBon = true;
    private bool checkAut = true;
    private bool checkSav = true;
    private bool checkInf = true;
    private bool checkSet = true;

    void Start()
    {
        // восстановление счёта

        KolvoClick = PlayerPrefs.GetInt("KolvoClick", KolvoClick);
        m = PlayerPrefs.GetInt("m", m);
        level = PlayerPrefs.GetInt("level", level);
        isOnSound = PlayerPrefs.GetInt("isOnSound", isOnSound);

        DateStart = DateTime.Parse(PlayerPrefs.GetString("DateStart"));
        StartDateTime = DateTime.Parse(PlayerPrefs.GetString("StartDateTime"));

        score = ulong.Parse(PlayerPrefs.GetString("score"));
        click = ulong.Parse(PlayerPrefs.GetString("click"));
        auto = ulong.Parse(PlayerPrefs.GetString("auto"));
        save = ulong.Parse(PlayerPrefs.GetString("save"));
        AllEnergy = ulong.Parse(PlayerPrefs.GetString("AllEnergy"));

        for(int i = 0; i < 20; i++) // восстановление покупок
        {
            clickNum[i] = PlayerPrefs.GetInt($"clickNum{i}", clickNum[i]);
            clickCost[i] = ulong.Parse(PlayerPrefs.GetString($"clickCost{i}"));
            NumClickTxt[i].text = clickNum[i] + "";
            CostClickTxt[i].text = $"Цена: {clickCost[i].ToString("#,#")} Дж";
            BonClickTxt[i].text = $"+{clickBonus[i].ToString("#,#")} Дж";
        }
        for(int i = 0; i < 30; i++)
        {
            autoNum[i] = PlayerPrefs.GetInt($"autoNum{i}", autoNum[i]);
            autoCost[i] = ulong.Parse(PlayerPrefs.GetString($"autoCost{i}"));
            NumAutoTxt[i].text = autoNum[i] + "";
            CostAutoTxt[i].text = $"Цена: {autoCost[i].ToString("#,#")} Дж";
            BonAutoTxt[i].text = $"+{autoBonus[i].ToString("#,#")} Дж/сек";
        }
        for(int i = 0; i < 10; i++)
        {
            saveNum[i] = PlayerPrefs.GetInt($"saveNum{i}", saveNum[i]);
            saveCost[i] = ulong.Parse(PlayerPrefs.GetString($"saveCost{i}"));
            NumSaveTxt[i].text = saveNum[i] + "";
            CostSaveTxt[i].text = $"Цена: {saveCost[i].ToString("#,#")} Дж";
            BonSaveTxt[i].text = $"до {saveBonus[i].ToString("#,#")} Дж";
        }

        LevelText.text = level.ToString();

        if (level == 0)
        {
            BG.GetComponent<Image>().color = new Color(0,0,0);
            BntClick.SetActive(false);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 1)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = QuanSt;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 2)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Quark;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 3)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Proton;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 4)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Nucleus;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 5)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Atom;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 6)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Mol;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 7)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Gen;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 8)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Chrom;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f8;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 9)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Kletka;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f9;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 10)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = ListD;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f10;
            ScoreText.color = new Color(0,0,0);
            AutoText.color = new Color(0,0,0);
        }
        else if(level == 11)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Tree;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f11;
            ScoreText.color = new Color(0,0,0);
            AutoText.color = new Color(0,0,0);
        }
        else if(level == 12)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Forest;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f12;
            ScoreText.color = new Color(0,0,0);
            AutoText.color = new Color(0,0,0);
        }
        else if(level == 13)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Ostrov;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f13;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 14)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Earth;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f14;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 15)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = SystPl;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f15;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 16)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Sozvezdie;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f16;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 17)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Galaxy;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 18)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = GalaxyClass;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 19)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = SuperGalaxyClass;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 20)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Metagal;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Uny;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }

        if (m == -1111111) // стандартный режим
        {
            Normal.GetComponent<Image>().color = new Color(0,255,0);
            Numbers.GetComponent<Image>().color = new Color(255,255,255);
            Short.GetComponent<Image>().color = new Color(255,255,255);
            Prefix.GetComponent<Image>().color = new Color(255,255,255);
        }
        else if (m == 2222222) // режим степени
        {
            Normal.GetComponent<Image>().color = new Color(255,255,255);
            Numbers.GetComponent<Image>().color = new Color(0,255,0);
            Short.GetComponent<Image>().color = new Color(255,255,255);
            Prefix.GetComponent<Image>().color = new Color(255,255,255);
        }
        else if (m == -3333333) // сокращённый режим
        {
            Normal.GetComponent<Image>().color = new Color(255,255,255);
            Numbers.GetComponent<Image>().color = new Color(255,255,255);
            Short.GetComponent<Image>().color = new Color(0,255,0);
            Prefix.GetComponent<Image>().color = new Color(255,255,255);
        }
        else if (m == 4444444) // режим приставок
        {
            Normal.GetComponent<Image>().color = new Color(255,255,255);
            Numbers.GetComponent<Image>().color = new Color(255,255,255);
            Short.GetComponent<Image>().color = new Color(255,255,255);
            Prefix.GetComponent<Image>().color = new Color(0,255,0);
        }

        Second = (int)(DateTime.Now - DateStart).TotalSeconds; // секунд в интервале int 
        SecondCount = (ulong)Second; // секунд в интервале ulong 

        if ((SecondCount * auto)/100 > 0 && save > 0) // накоплено более 0 Дж
        {
            SaveBonusPan.SetActive(true);

            if ((SecondCount * auto)/100 > save)
            {
                if (Second < 60) // seconds
                    SaveBonusText.text = $"Вас не было\n{Second} с\n\nПолучено\n{save.ToString("#,#")} Дж";   
                else if (Second >= 60 & Second < 3600) // minutes
                    SaveBonusText.text = $"Вас не было\n{Second/60} м, {Second%60} с\n\nПолучено\n{save.ToString("#,#")} Дж";
                else if (Second >= 3600 && Second < 86400) // hours
                    SaveBonusText.text = $"Вас не было\n{Second/3600} ч, {Second/60%60} м, {Second%60} с\n\nПолучено\n{save.ToString("#,#")} Дж";
                else if (Second >= 86400 && Second < 604800) //days
                    SaveBonusText.text = $"Вас не было\n{Second/86400} д, {Second/3600%24} ч, {Second/60%60} м, {Second%60} с\n\nПолучено\n{save.ToString("#,#")} Дж";
                else if (Second >= 604800) // weeks
                    SaveBonusText.text = $"Вас не было\n{Second/604800} н, {Second/86400%7} д, {Second/3600%24} ч, {Second/60%60} м, {Second%60} с\n\nПолучено\n{save.ToString("#,#")} Дж";
                else
                    SaveBonusText.text = $"error";
            }
            else
            {
                if (Second < 60) // seconds
                    SaveBonusText.text = $"Вас не было\n{Second} с\n\nПолучено\n{((SecondCount * auto)/100).ToString("#,#")} Дж";   
                else if (Second >= 60 & Second < 3600) // minutes
                    SaveBonusText.text = $"Вас не было\n{Second/60} м, {Second%60} с\n\nПолучено\n{((SecondCount * auto)/100).ToString("#,#")} Дж";
                else if (Second >= 3600 && Second < 86400) // hours
                    SaveBonusText.text = $"Вас не было\n{Second/3600} ч, {Second/60%60} м, {Second%60} с\n\nПолучено\n{((SecondCount * auto)/100).ToString("#,#")} Дж";
                else if (Second >= 86400 && Second < 604800) //days
                    SaveBonusText.text = $"Вас не было\n{Second/86400} д, {Second/3600%24} ч, {Second/60%60} м, {Second%60} с\n\nПолучено\n{((SecondCount * auto)/100).ToString("#,#")} Дж";
                else if (Second >= 604800) // weeks
                    SaveBonusText.text = $"Вас не было\n{Second/604800} н, {Second/86400%7} д, {Second/3600%24} ч, {Second/60%60} м, {Second%60} с\n\nПолучено\n{((SecondCount * auto)/100).ToString("#,#")} Дж";
                else
                    SaveBonusText.text = $"error";
            }
        }

        if (isOnSound == 55555)
        {
            AudioListener.volume = 1f;
            SoundBtn.GetComponent<Image>().sprite = SoundOn;
            PlayerPrefs.SetInt("isOnSound", isOnSound);
        }
        else
        {
            AudioListener.volume = 0f;
            SoundBtn.GetComponent<Image>().sprite = SoundOff;
            PlayerPrefs.SetInt("isOnSound", isOnSound);
        }
        
        StartCoroutine(BonusPerSec()); // запуск корутины

        if (click == 0)
            BonClickInfoTxt.text = $"Получение энергии:\n{click} Дж/клик";
        else
            BonClickInfoTxt.text = $"Получение энергии:\n{click.ToString("#,#")} Дж/клик";

        if (auto == 0)
            BonAutoInfoTxt.text = $"Автодобыча энергии:\n{auto} Дж/сек";
        else
            BonAutoInfoTxt.text = $"Автодобыча энергии:\n{auto.ToString("#,#")} Дж/сек";

        if (save == 0)
            BonSaveInfoTxt.text = $"Накопление энергии:\nдо {save} Дж";
        else
            BonSaveInfoTxt.text = $"Накопление энергии:\nдо {save.ToString("#,#")} Дж";

        // for (int i = 0; i < clickTextPool.Length; i++)
        //     clickTextPool[i] = Instantiate(ClickTextPref, ClickParent.transform).GetComponent<GameObject>();
        // clickTextPool[0].StartMotion(5);
    }

    // public void StartMotion(ulong ScoreClick)
    // {
    //     //transform.LocalPosition = Vector2.zero;
    //     GetComponent<Text>().text = $"+{ScoreClick} Дж";
    //     randomVector = new Vector2(UnityEngine.Random.Range(-3, 3), UnityEngine.Random.Range(-3, 3));
    //     move = true;
    // }

    void Update()
    {
        // if(!move) return;
        // transform.Translate(randomVector * Time.deltaTime);///////////////////////////////////

        PlayerPrefs.SetString("score", score.ToString());    // сохранение счёта
        PlayerPrefs.SetString("AllEnergy", AllEnergy.ToString());

        if (SaveBonusPan.activeSelf == false)
        {
            DateStart = DateTime.Now;
            PlayerPrefs.SetString("DateStart", DateStart.ToString());
        }

        for(int i = 0; i < 20; i++)
        {
            if (score < clickCost[i])
                BonusButton[i].GetComponent<Image>().color = new Color(255,0,0);
            else
                BonusButton[i].GetComponent<Image>().color = new Color(0,255,0);

            if (clickCost[i] <= score && clickNum[i] == 0)
                CountNewClick++;
        }

        for(int i = 0; i < 30; i++)
        {
            if (score < autoCost[i])
                AutoButton[i].GetComponent<Image>().color = new Color(255,0,0);
            else
                AutoButton[i].GetComponent<Image>().color = new Color(0,255,0);

            if (autoCost[i] <= score && autoNum[i] == 0)
                CountNewAuto++;
        }

        for(int i = 0; i < 10; i++)
        {
            if (score < saveCost[i])
                SaveButton[i].GetComponent<Image>().color = new Color(255,0,0);
            else
                SaveButton[i].GetComponent<Image>().color = new Color(0,255,0);

            if (saveCost[i] <= score && saveNum[i] == 0)
                CountNewSave++;
        }

        if (CountNewClick > 0)
        {
            ClickMess.SetActive(true);
            ClickMessText.text = CountNewClick + "";
        }
        else
            ClickMess.SetActive(false);

        if (CountNewAuto > 0)
        {
            AutoMess.SetActive(true);
            AutoMessText.text = CountNewAuto + "";
        }
        else
            AutoMess.SetActive(false);

        if (CountNewSave > 0)
        {
            SaveMess.SetActive(true);
            SaveMessText.text = CountNewSave + "";
        }
        else
            SaveMess.SetActive(false);

        CountNewClick = 0;
        CountNewAuto = 0;
        CountNewSave = 0;

        if (m == -1111111) // стандартный режим
        {
            NormalMode();
        }

        else if (m == 2222222) // режим степени
        {
            StepMode();
        }

        else if (m == -3333333) // сокращённый режим
        {
            SokrMode();
        }

        else if (m == 4444444) // режим приставок
        {
            PrefixMode();
        }

        InfoText.text = "";

        InfoText.text += $"\nУровень:\n   {level}\n\n";

        if (score == 0)
            InfoText.text += $"Имеющаяся энергия:\n   {score} Дж\n\n";
        else
            InfoText.text += $"Имеющаяся энергия:\n   {score.ToString("#,#")} Дж\n\n";

        if (click == 0)
            InfoText.text += $"Получение энергии:\n   {click} Дж/клик\n\n";
        else
            InfoText.text += $"Получение энергии:\n   {click.ToString("#,#")} Дж/клик\n\n";

        if (auto == 0)
            InfoText.text += $"Автодобыча энергии:\n   {auto} Дж/сек\n\n";
        else
            InfoText.text += $"Автодобыча энергии:\n   {auto.ToString("#,#")} Дж/сек\n\n";

        if (save == 0)
            InfoText.text += $"Накопление энергии:\n   до {save} Дж\n\n";
        else
            InfoText.text += $"Накопление энергии:\n   до {save.ToString("#,#")} Дж\n\n";

        if (AllEnergy == 0)
            InfoText.text += $"Всего энергии получено:\n   {AllEnergy} Дж\n\n";
        else
            InfoText.text += $"Всего энергии получено:\n   {AllEnergy.ToString("#,#")} Дж\n\n";

        if (KolvoClick == 0)
            InfoText.text += $"Всего кликов:\n   {KolvoClick}\n\n";
        else
            InfoText.text += $"Всего кликов:\n   {KolvoClick.ToString("#,#")}\n\n";

        InfoText.text += $"Начало:\n {StartDateTime}\n  {(int)(DateTime.Now - StartDateTime).TotalDays} дн. назад";
    }

    // void OnApplicationQuit()
    // {
    //     ulong s = save/(auto/100);
    //     SendNotification(s);
    // }

    // private void Awake()
    // {
    //     AndroidNotificationChannel channel = new AndroidNotificationChannel()
    //     {
    //         Name = "Events | События",
    //         Description = "Уведомления о событиях игры", 
    //         Id = "events",
    //         Importance = Importance.High //Low, Default, High
    //     };

    //     AndroidNotificationCenter.RegisterNotificationChannel(channel);
    // }

    // public void SendNotification(ulong s)
    // {
    //     AndroidNotification notification = new AndroidNotification()
    //     {
    //         Title = "Накопитель переполнен!",
    //         Text = "Излишки будут утеряны!!!",
    //         FireTime = System.DateTime.Now.AddSeconds(s)
    //     };

    //     AndroidNotificationCenter.SendNotification(notification, "events");
    // }

    public void GetSaveScore() // получить накопленное
    {
        if((SecondCount * auto)/100 > save)
        {
            score += save;
            AllEnergy += save;
        }
        else
        {
            score += (SecondCount * auto)/100;
            AllEnergy += (SecondCount * auto)/100;
        }

        SaveBonusPan.SetActive(false);
    }

    public void PlayAudio(AudioClip clip) // подключение звука
    {
        GetComponent<AudioSource>().PlayOneShot(clip);
    }

    public void OnPlayAudio() // вкл/выкл звука
    {
        if (isOnSound == -55555)
        {
            AudioListener.volume = 1f;
            isOnSound = 55555;
            SoundBtn.GetComponent<Image>().sprite = SoundOn;
            PlayerPrefs.SetInt("isOnSound", isOnSound);
        }
        else
        {
            AudioListener.volume = 0f;
            isOnSound = -55555;
            SoundBtn.GetComponent<Image>().sprite = SoundOff;
            PlayerPrefs.SetInt("isOnSound", isOnSound);
        }
    }

    public void ActiveMessBox() // окно "заново"
    {
        MessBox.SetActive(true);
    }

    public void Restart(bool flag) //заново
    {
        if (flag == true)
        {
            StartDateTime = DateTime.Now;
            PlayerPrefs.SetString("StartDateTime", StartDateTime.ToString());

            score = 50;

            AllEnergy = 0;
        
            click = 0;
            PlayerPrefs.SetString("click", click.ToString());

            auto = 0;
            PlayerPrefs.SetString("auto", auto.ToString());

            save = 0;
            PlayerPrefs.SetString("save", save.ToString());

            KolvoClick = 0;
            PlayerPrefs.SetInt("KolvoClick", KolvoClick);

            level = 0;
            PlayerPrefs.SetInt("level", level);
            LevelText.text = level.ToString();

            BntClick.SetActive(false);
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);

            for(int i = 0; i < 20; i++) // сброс магазина
            {
                clickCost[i] = clickCostStart[i];
                clickNum[i] = 0;
                PlayerPrefs.SetString($"clickCost{i}", clickCost[i].ToString());
                PlayerPrefs.SetInt($"clickNum{i}", clickNum[i]);
                NumClickTxt[i].text = clickNum[i] + "";
                CostClickTxt[i].text = $"Цена: {clickCost[i].ToString("#,#")} Дж";
            }

            for(int i = 0; i < 30; i++)
            {
                autoCost[i] = autoCostStart[i];
                autoNum[i] = 0;
                PlayerPrefs.SetString($"autoCost{i}", autoCost[i].ToString());
                PlayerPrefs.SetInt($"autoNum{i}", autoNum[i]);
                NumAutoTxt[i].text = autoNum[i] + "";
                CostAutoTxt[i].text = $"Цена: {autoCost[i].ToString("#,#")} Дж";
            }

            for(int i = 0; i < 10; i++)
            {
                saveCost[i] = saveCostStart[i];
                saveNum[i] = 0;
                PlayerPrefs.SetString($"saveCost{i}", saveCost[i].ToString());
                PlayerPrefs.SetInt($"saveNum{i}", saveNum[i]);
                NumSaveTxt[i].text = saveNum[i] + "";
                CostSaveTxt[i].text = $"Цена: {saveCost[i].ToString("#,#")} Дж";
            }

            BonClickInfoTxt.text = $"Получение энергии:\n{click} Дж/клик";
            BonAutoInfoTxt.text = $"Автодобыча энергии:\n{auto} Дж/сек";
            BonSaveInfoTxt.text = $"Накопление энергии:\nдо {save} Дж";

            MessBox.SetActive(false);
        }

        else
            MessBox.SetActive(false);
    }

    public void OnNormal() //стандартный режим
    {
        m = -1111111;
        PlayerPrefs.SetInt("m", m);
        Normal.GetComponent<Image>().color = new Color(0,255,0);
        Numbers.GetComponent<Image>().color = new Color(255,255,255);
        Short.GetComponent<Image>().color = new Color(255,255,255);
        Prefix.GetComponent<Image>().color = new Color(255,255,255);
    }

    public void OnNumbers() //режим степени
    {
        m = 2222222;
        PlayerPrefs.SetInt("m", m);
        Normal.GetComponent<Image>().color = new Color(255,255,255);
        Numbers.GetComponent<Image>().color = new Color(0,255,0);
        Short.GetComponent<Image>().color = new Color(255,255,255);
        Prefix.GetComponent<Image>().color = new Color(255,255,255);
    }

    public void OnShort() //сокращённый режим
    {
        m = -3333333;
        PlayerPrefs.SetInt("m", m);
        Normal.GetComponent<Image>().color = new Color(255,255,255);
        Numbers.GetComponent<Image>().color = new Color(255,255,255);
        Short.GetComponent<Image>().color = new Color(0,255,0);
        Prefix.GetComponent<Image>().color = new Color(255,255,255);
    }

    public void OnPrefix() //режим приставок
    {
        m = 4444444;
        PlayerPrefs.SetInt("m", m);
        Normal.GetComponent<Image>().color = new Color(255,255,255);
        Numbers.GetComponent<Image>().color = new Color(255,255,255);
        Short.GetComponent<Image>().color = new Color(255,255,255);
        Prefix.GetComponent<Image>().color = new Color(0,255,0);
    }

    public void BonusBtn(int index) //click
    {
        if (score >= clickCost[index])
        {
            score -= clickCost[index];
            clickCost[index] += clickCostStart[index];
            clickNum[index]++;
            click += clickBonus[index];
            PlayerPrefs.SetString("click", click.ToString());
            if (click == 0)
                BonClickInfoTxt.text = $"Получение энергии:\n   {click} Дж/клик";
            else
                BonClickInfoTxt.text = $"Получение энергии:\n   {click.ToString("#,#")} Дж/клик";
            PlayerPrefs.SetString($"clickCost{index}", clickCost[index].ToString());
            PlayerPrefs.SetInt($"clickNum{index}", clickNum[index]);
            NumClickTxt[index].text = clickNum[index] + "";
            CostClickTxt[index].text = $"Цена: {clickCost[index].ToString("#,#")} Дж";

            if ((index + 1) > level)
            {
                level = index + 1;
                PlayerPrefs.SetInt("level", level);
                LevelText.text = level.ToString();
                BntClick.SetActive(false);
                NewClickPanel.SetActive(true);
                NewClickText.text = $"Достигнут\n{level} уровень";

                SavePan.SetActive(false);
                BonusPan.SetActive(false);
                AutoPan.SetActive(false);
                InfoPan.SetActive(false);
                SettingsPan.SetActive(false);

                checkSav = true;
                checkSet = true;
                checkInf = true;
                checkAut = true;
                checkBon = true;

                if (level == 1)
                    NewClickImage.GetComponent<Image>().sprite = QuanSt;
                else if (level == 2)
                    NewClickImage.GetComponent<Image>().sprite = Quark;
                else if (level == 3)
                    NewClickImage.GetComponent<Image>().sprite = Proton;
                else if (level == 4)
                    NewClickImage.GetComponent<Image>().sprite = Nucleus;
                else if (level == 5)
                    NewClickImage.GetComponent<Image>().sprite = Atom;
                else if (level == 6)
                    NewClickImage.GetComponent<Image>().sprite = Mol;
                else if (level == 7)
                    NewClickImage.GetComponent<Image>().sprite = Gen;
                else if (level == 8)
                    NewClickImage.GetComponent<Image>().sprite = Chrom;
                else if (level == 9)
                    NewClickImage.GetComponent<Image>().sprite = Kletka;
                else if (level == 10)
                    NewClickImage.GetComponent<Image>().sprite = ListD;
                else if (level == 11)
                    NewClickImage.GetComponent<Image>().sprite = Tree;
                else if (level == 12)
                    NewClickImage.GetComponent<Image>().sprite = Forest;
                else if (level == 13)
                    NewClickImage.GetComponent<Image>().sprite = Ostrov;
                else if (level == 14)
                    NewClickImage.GetComponent<Image>().sprite = Earth;
                else if (level == 15)
                    NewClickImage.GetComponent<Image>().sprite = SystPl;
                else if (level == 16)
                    NewClickImage.GetComponent<Image>().sprite = Sozvezdie;
                else if (level == 17)
                    NewClickImage.GetComponent<Image>().sprite = Galaxy;
                else if (level == 18)
                    NewClickImage.GetComponent<Image>().sprite = GalaxyClass;
                else if (level == 19)
                    NewClickImage.GetComponent<Image>().sprite = SuperGalaxyClass;
                else if (level == 20)
                    NewClickImage.GetComponent<Image>().sprite = Metagal;
                else
                    NewClickImage.GetComponent<Image>().sprite = Uny;
            }
        }
    }

    public void GetNewClick()
    {
        NewClickPanel.SetActive(false);

        if (level == 0)
        {
            BG.GetComponent<Image>().color = new Color(0,0,0);
            BntClick.SetActive(false);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 1)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = QuanSt;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 2)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Quark;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 3)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Proton;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 4)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Nucleus;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 5)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Atom;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 6)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Mol;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 7)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Gen;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 8)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Chrom;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f8;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 9)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Kletka;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f9;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 10)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = ListD;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f10;
            ScoreText.color = new Color(0,0,0);
            AutoText.color = new Color(0,0,0);
        }
        else if(level == 11)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Tree;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f11;
            ScoreText.color = new Color(0,0,0);
            AutoText.color = new Color(0,0,0);
        }
        else if(level == 12)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Forest;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f12;
            ScoreText.color = new Color(0,0,0);
            AutoText.color = new Color(0,0,0);
        }
        else if(level == 13)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Ostrov;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f13;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 14)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Earth;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f14;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 15)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = SystPl;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f15;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 16)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Sozvezdie;
            BG.GetComponent<Image>().color = new Color(255,255,255);
            BG.GetComponent<Image>().sprite = f16;
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 17)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Galaxy;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 18)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = GalaxyClass;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 19)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = SuperGalaxyClass;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else if(level == 20)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Metagal;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }
        else
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Uny;
            BG.GetComponent<Image>().color = new Color(0,0,0);
            ScoreText.color = new Color(255,255,255);
            AutoText.color = new Color(255,255,255);
        }

        BntClick.SetActive(true);
    }

    public void OnClickBtn()
    {
        score += click;
        AllEnergy += click;
        KolvoClick++;
        PlayerPrefs.SetInt("KolvoClick", KolvoClick);
    }

    public void Hire(int index) // auto
    {
        if (score >= autoCost[index])
        {
            score -= autoCost[index];
            autoCost[index] += autoCostStart[index];
            autoNum[index]++;
            auto += autoBonus[index];
            PlayerPrefs.SetString("auto", auto.ToString());
            if (auto == 0)
                BonAutoInfoTxt.text = $"Автодобыча энергии:\n{auto} Дж/сек";
            else
                BonAutoInfoTxt.text = $"Автодобыча энергии:\n{auto.ToString("#,#")} Дж/сек";
            PlayerPrefs.SetString($"autoCost{index}", autoCost[index].ToString());
            PlayerPrefs.SetInt($"autoNum{index}", autoNum[index]);
            NumAutoTxt[index].text = autoNum[index] + "";
            CostAutoTxt[index].text = $"Цена: {autoCost[index].ToString("#,#")} Дж";
        }
    }

    IEnumerator BonusPerSec() // запуск иенумератора
    {
        while (true)
        {
            yield return new WaitForSeconds(1);
            score += auto;
            AllEnergy += auto;
        }
    }

    public void SaveScore(int index) //save
    {
        if (score >= saveCost[index])
        {
            score -= saveCost[index];
            saveCost[index] += saveCostStart[index];
            saveNum[index]++;
            save += saveBonus[index];
            PlayerPrefs.SetString("save", save.ToString());
            if (save == 0)
                BonSaveInfoTxt.text = $"Накопление энергии:\nдо {save} Дж";
            else
                BonSaveInfoTxt.text = $"Накопление энергии:\nдо {save.ToString("#,#")} Дж";
            PlayerPrefs.SetString($"saveCost{index}", saveCost[index].ToString());
            PlayerPrefs.SetInt($"saveNum{index}", saveNum[index]);
            NumSaveTxt[index].text = saveNum[index] + "";
            CostSaveTxt[index].text = $"Цена: {saveCost[index].ToString("#,#")} Дж";
        }
    }

    public void NormalMode() // стандартный режим
    {
        if (score == 0)
            ScoreText.text = score + " Дж";
        else
            ScoreText.text = score.ToString("#,#") + " Дж";

        if (auto == 0)
            AutoText.text = auto + " Дж/сек";
        else
            AutoText.text = auto.ToString("#,#") + " Дж/сек";
    }

    public void StepMode() // режим степени
    {
        if (score >= 100000000)
        {
            SokrSc = score;

            while (SokrSc >= 1000)
            {
                SokrSc /= 10;
                k++;
            }
                
            ScoreText.text = SokrSc + $" x 10^{k} Дж";

            k = 0;
        }
        else
        {
            if (score == 0)
                ScoreText.text = score + " Дж";
            else
                ScoreText.text = score.ToString("#,#") + " Дж";
        }

        if (auto >= 100000000)
        {
            SokrAu = auto;

            while (SokrAu >= 1000)
            {
                SokrAu /= 10;
                k++;
            }

            AutoText.text = SokrAu + $" x 10^{k} Дж/сек";

            k = 0;
        }
        else
        {
            if (auto == 0)
                AutoText.text = auto + " Дж/сек";
            else
                AutoText.text = auto.ToString("#,#") + " Дж/сек";
        }
    }

    public void SokrMode() // сокращённый режим
    {
        if (score >= 1000)
        {
            SokrSc = score;

            while (SokrSc >= 1000)
            {
                SokrSc /= 1000;
                k++;
            }

            if (k == 1)
                ScoreText.text = SokrSc.ToString("#,#") + " тыс Дж";
            else if (k == 2)
                ScoreText.text = SokrSc.ToString("#,#") + " млн Дж";
            else if (k == 3)
                ScoreText.text = SokrSc.ToString("#,#") + " млр Дж";
            else if (k == 4)
                ScoreText.text = SokrSc.ToString("#,#") + " трилн Дж";
            else if (k == 5)
                ScoreText.text = SokrSc.ToString("#,#") + " квадрлн Дж";
            else if (k == 6)
                ScoreText.text = SokrSc.ToString("#,#") + " квинтлн Дж";
            k = 0;
        }
        else
        {
            if (score == 0)
                ScoreText.text = score + " Дж";
            else
                ScoreText.text = score.ToString("#,#") + " Дж";
        }

        if (auto >= 1000)
        {
            SokrAu = auto;

            while (SokrAu >= 1000)
            {
                SokrAu /= 1000;
                k++;
            }

            if (k == 1)
                AutoText.text = SokrAu.ToString("#,#") + " тыс Дж/сек";
            else if (k == 2)
                AutoText.text = SokrAu.ToString("#,#") + " млн Дж/сек";
            else if (k == 3)
                AutoText.text = SokrAu.ToString("#,#") + " млр Дж/сек";
            else if (k == 4)
                AutoText.text = SokrAu.ToString("#,#") + " трилн Дж/сек";
            else if (k == 5)
                AutoText.text = SokrAu.ToString("#,#") + " квадрлн Дж/сек";
            else if (k == 6)
                AutoText.text = SokrAu.ToString("#,#") + " квинтлн Дж/сек";
            k = 0;
        }
        else
        {
            if (auto == 0)
                AutoText.text = auto + " Дж/сек";
            else
                AutoText.text = auto.ToString("#,#") + " Дж/сек";
        }
    }

    public void PrefixMode() // режим приставок
    {
        if (score >= 1000)
        {
            SokrSc = score;

            while (SokrSc >= 1000)
            {
                SokrSc /= 1000;
                k++;
            }

            if (k == 1)
                ScoreText.text = SokrSc.ToString("#,#") + " кДж";
            else if (k == 2)
                ScoreText.text = SokrSc.ToString("#,#") + " мДж";
            else if (k == 3)
                ScoreText.text = SokrSc.ToString("#,#") + " гДж";
            else if (k == 4)
                ScoreText.text = SokrSc.ToString("#,#") + " тДж";
            else if (k == 5)
                ScoreText.text = SokrSc.ToString("#,#") + " пДж";
            else if (k == 6)
                ScoreText.text = SokrSc.ToString("#,#") + " эДж";

            k = 0;
        }
        else
        {
            if (score == 0)
                ScoreText.text = score + " Дж";
            else
                ScoreText.text = score.ToString("#,#") + " Дж";
        }

        if (auto >= 1000)
        {
            SokrAu = auto;

            while (SokrAu >= 1000)
            {
                SokrAu /= 1000;
                k++;
            }

            if (k == 1)
                AutoText.text = SokrAu.ToString("#,#") + " кДж/сек";
            else if (k == 2)
                AutoText.text = SokrAu.ToString("#,#") + " мДж/сек";
            else if (k == 3)
                AutoText.text = SokrAu.ToString("#,#") + " гДж/сек";
            else if (k == 4)
                AutoText.text = SokrAu.ToString("#,#") + " тДж/сек";
            else if (k == 5)
                AutoText.text = SokrAu.ToString("#,#") + " пДж/сек";
            else if (k == 6)
                AutoText.text = SokrAu.ToString("#,#") + " эДж/сек";

            k = 0;
        }
        else
        {
            if (auto == 0)
                AutoText.text = auto + " Дж/сек";
            else
                AutoText.text = auto.ToString("#,#") + " Дж/сек";
        }
    }

    public void OnSecretPan()
    {
        SecretPan.SetActive(true);
    }

    public void ExitSecretPan()
    {
        SecretPan.SetActive(false);
    }

    public void OnAdminPan()
    {
        if (InputCode.text == "123")
        {
            AdminPan.SetActive(true);
            SecretPan.SetActive(false);
        }
    }

    public void ExitAdminPan()
    {
        AdminPan.SetActive(false);
    }

    public void EnterBonus()
    {
        try
        {
            score = ulong.Parse(InputScore.text);
        }   catch {   }
        try
        {
            click = ulong.Parse(InputClick.text);
        }   catch {   }
        try
        {
            auto = ulong.Parse(InputAuto.text);
        }   catch {   }
        try
        {
            save = ulong.Parse(InputSave.text);
        }   catch {   }
        
        PlayerPrefs.SetString("click", click.ToString());
        PlayerPrefs.SetString("auto", auto.ToString());
        PlayerPrefs.SetString("save", save.ToString());
    }

    public void OnInfoPan() //панель информации
    {
        if (checkInf == true)
        {
            InfoPan.SetActive(true);
            BonusPan.SetActive(false);
            AutoPan.SetActive(false);
            SavePan.SetActive(false);
            SettingsPan.SetActive(false);

            checkInf = false;
            checkAut = true;
            checkSav = true;
            checkSet = true;
            checkBon = true;
        }
        else
        {
            InfoPan.SetActive(false);
            checkInf = true;
        }
    }

    public void OnSettingsPan() //панель настроек
    {
        if (checkSet == true)
        {
            SettingsPan.SetActive(true);
            InfoPan.SetActive(false);
            BonusPan.SetActive(false);
            AutoPan.SetActive(false);
            SavePan.SetActive(false);

            checkSet = false;
            checkInf = true;
            checkAut = true;
            checkSav = true;
            checkBon = true;
        }
        else
        {
            SettingsPan.SetActive(false);
            checkSet = true;
        }
    }

    public void OnBonPan() //панель Усиление
    {
        if (checkBon == true)
        {
            BonusPan.SetActive(true);
            AutoPan.SetActive(false);
            SavePan.SetActive(false);
            InfoPan.SetActive(false);
            SettingsPan.SetActive(false);

            checkBon = false;
            checkSet = true;
            checkInf = true;
            checkAut = true;
            checkSav = true;
        }
        else
        {
            BonusPan.SetActive(false);
            checkBon = true;
        }
    }

    public void OnAutPan() //панель Автодобыча
    {
        if (checkAut == true)
        {
            AutoPan.SetActive(true);
            BonusPan.SetActive(false);
            SavePan.SetActive(false);
            InfoPan.SetActive(false);
            SettingsPan.SetActive(false);

            checkAut = false;
            checkSet = true;
            checkInf = true;
            checkSav = true;
            checkBon = true;
        }
        else
        {
            AutoPan.SetActive(false);
            checkAut = true;
        }
    }

    public void OnSavPan() //панель Накопитель
    {
        if (checkSav == true)
        {
            SavePan.SetActive(true);
            BonusPan.SetActive(false);
            AutoPan.SetActive(false);
            InfoPan.SetActive(false);
            SettingsPan.SetActive(false);

            checkSav = false;
            checkSet = true;
            checkInf = true;
            checkAut = true;
            checkBon = true;
        }
        else
        {
            SavePan.SetActive(false);
            checkSav = true;
        }
    }
}