using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System;

public class Game : MonoBehaviour
{
    public ulong score = 50; // счёт
    public ulong click; // бонус за клик
    public ulong auto; // автоприбыль
    public ulong save; // накопитель
    public ulong AllEnergy; // вся полученная энергия
    public ulong SokrSc; // сокр счёт
    public ulong SokrAu; // сокр счёт
    public int KolvoClick; // количесво нажатий
    public byte k;
    public int m = 255;
    public int level;
    private bool checkBon = true;
    private bool checkAut = true;
    private bool checkSav = true;
    private bool checkInf = true;
    private bool checkSet = true;
    public Text ScoreText; // вывод счёта на экран
    public Text AutoText; // вывод auto на экран
    public Text InfoText; // вывод на экран информации
    public Text LevelText;
    public Text SaveBonusText;
    public Text[] CostClickTxt;
    public Text[] CostAutoTxt;
    public Text[] CostSaveTxt; 
    public Text[] NumClickTxt; 
    public Text[] NumAutoTxt;
    public Text[] NumSaveTxt;
    public GameObject BonusPan; 
    public GameObject AutoPan;
    public GameObject SavePan;
    public GameObject InfoPan;
    public GameObject SettingsPan;
    public GameObject SaveBonusPan;
    public GameObject Normal;
    public GameObject Numbers;
    public GameObject Short;
    public GameObject Prefix;
    public GameObject BntClick;
    public GameObject[] BonusButton = new GameObject[20];
    public GameObject[] AutoButton = new GameObject[30];
    public GameObject[] SaveButton = new GameObject[10];
    public Sprite QuanSt = Resources.Load<Sprite>("QuanStr");
    public Sprite Quark = Resources.Load<Sprite>("Quark");
    public Sprite Proton = Resources.Load<Sprite>("Proton");
    public Sprite Nucleus = Resources.Load<Sprite>("Nucleus");
    public Sprite Atom = Resources.Load<Sprite>("Atom");
    public ulong[] clickCost = { 50, 300, 1000, 6000, 15000, 50, 300, 1000, 6000, 15000, 50, 300, 1000, 6000, 15000, 50, 300, 1000, 6000, 15000 };
    public ulong[] autoCost = { 100, 950, 3000, 18000, 55000, 100, 950, 3000, 18000, 55000, 100, 950, 3000, 18000,
                                100, 950, 3000, 18000, 55000, 100, 950, 3000, 18000, 55000,  100, 950, 3000, 18000 };
    public ulong[] saveCost = { 500, 2500, 13000, 28000, 93000, 500, 2500, 13000, 28000, 93000 };
    public ulong[] clickCostStart = { 50, 300, 1000, 6000, 15000, 50, 300, 1000, 6000, 15000, 50, 300, 1000, 6000, 15000, 50, 300, 1000, 6000, 15000 };
    public ulong[] autoCostStart = { 100, 950, 3000, 18000, 55000, 100, 950, 3000, 18000, 55000, 100, 950, 3000, 18000,
                                     100, 950, 3000, 18000, 55000, 100, 950, 3000, 18000, 55000,  100, 950, 3000, 18000 };
    public ulong[] saveCostStart = { 500, 2500, 13000, 28000, 93000, 500, 2500, 13000, 28000, 93000 };
    public ulong[] clickBonus = { 1, 5, 12, 48, 123, 1, 5, 12, 48, 123, 1, 5, 12, 48, 123, 1, 5, 12, 48, 123 };
    public ulong[] autoBonus = { 1, 3, 11, 47, 116, 1, 3, 11, 47, 116, 1, 3, 11, 47, 116, 1, 3, 11, 47, 116, 1, 3, 11, 47, 116, 1, 3, 11, 47, 116, };
    public ulong[] saveBonus = { 100, 200, 800, 3200, 8800, 100, 200, 800, 3200, 8800 };
    public int[] clickNum = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    public int[] autoNum = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, };
    public int[] saveNum = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
    public DateTime DateStart; 
    public ulong SecondCount;
    public int Second;

    void Start()
    {
        // восстановление счёта

        KolvoClick = PlayerPrefs.GetInt("KolvoClick", KolvoClick);
        m = PlayerPrefs.GetInt("m", m);
        level = PlayerPrefs.GetInt("level", level);

        DateStart = DateTime.Parse(PlayerPrefs.GetString("DateStart"));

        score = ulong.Parse(PlayerPrefs.GetString("score"));
        click = ulong.Parse(PlayerPrefs.GetString("click"));
        auto = ulong.Parse(PlayerPrefs.GetString("auto"));
        save = ulong.Parse(PlayerPrefs.GetString("save"));
        AllEnergy = ulong.Parse(PlayerPrefs.GetString("AllEnergy"));

        LevelText.text = level.ToString();

        if (level == 0)
            BntClick.SetActive(false);
        else if(level == 1)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = QuanSt;
        }
        else if(level == 2)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Quark;
        }
        else if(level == 3)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Proton;
        }
        else if(level == 4)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Nucleus;
        }
        else if(level == 5)
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Atom;
        }
        else
        {
            BntClick.SetActive(true);
            BntClick.GetComponent<Image>().sprite = Atom;
        }

        for(int i = 0; i < 20; i++) // восстановление покупок
        {
            clickNum[i] = PlayerPrefs.GetInt($"clickNum{i}", clickNum[i]);
            clickCost[i] = ulong.Parse(PlayerPrefs.GetString($"clickCost{i}"));
            NumClickTxt[i].text = clickNum[i] + "";
            CostClickTxt[i].text = $"Цена: {clickCost[i]} Дж";
        }

        for(int i = 0; i < 30; i++)
        {
            autoNum[i] = PlayerPrefs.GetInt($"autoNum{i}", autoNum[i]);
            autoCost[i] = ulong.Parse(PlayerPrefs.GetString($"autoCost{i}"));
            NumAutoTxt[i].text = autoNum[i] + "";
            CostAutoTxt[i].text = $"Цена: {autoCost[i]} Дж";
        }

        for(int i = 0; i < 10; i++)
        {
            saveNum[i] = PlayerPrefs.GetInt($"saveNum{i}", saveNum[i]);
            saveCost[i] = ulong.Parse(PlayerPrefs.GetString($"saveCost{i}"));
            NumSaveTxt[i].text = saveNum[i] + "";
            CostSaveTxt[i].text = $"Цена: {saveCost[i]} Дж";
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

        if ((SecondCount * auto)/10 > 0) // накоплено более 0 Дж
        {
            SaveBonusPan.SetActive(true);
            if((SecondCount * auto)/10 > save)
            {
                SaveBonusText.text = $"Вас не было\n{SecondCount} секунд \n\n Получено\n{save} Дж";
            }
            else
            {
                SaveBonusText.text = $"Вас не было\n{SecondCount} секунд \n\n Получено\n{(SecondCount * auto)/10} Дж";
            }
        }
        
        StartCoroutine(BonusPerSec()); // запуск корутины
    }

    void Update()
    {
        DateStart = DateTime.Now;

        PlayerPrefs.SetString("DateStart", DateStart.ToString()); // сохранение счёта
        PlayerPrefs.SetString("score", score.ToString());
        PlayerPrefs.SetString("AllEnergy", AllEnergy.ToString());

        for(int i = 0; i < 20; i++)
        {
            if (score < clickCost[i])
                BonusButton[i].GetComponent<Image>().color = new Color(255,0,0);
            else
                BonusButton[i].GetComponent<Image>().color = new Color(0,255,0);
        }

        for(int i = 0; i < 30; i++)
        {
            if (score < autoCost[i])
                AutoButton[i].GetComponent<Image>().color = new Color(255,0,0);
            else
                AutoButton[i].GetComponent<Image>().color = new Color(0,255,0);
        }

        for(int i = 0; i < 10; i++)
        {
            if (score < saveCost[i])
                SaveButton[i].GetComponent<Image>().color = new Color(255,0,0);
            else
                SaveButton[i].GetComponent<Image>().color = new Color(0,255,0);
        }

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

        InfoText.text += $"\n   Уровень:\n   {level}\n\n";

        if (score == 0)
            InfoText.text += $"   Имеющаяся энергия:\n   {score} Дж\n\n";
        else
            InfoText.text += $"   Имеющаяся энергия:\n   {score.ToString("#,#")} Дж\n\n";

        if (click == 0)
            InfoText.text += $"   Получение энергии:\n   {click} Дж/клик\n\n";
        else
            InfoText.text += $"   Получение энергии:\n   {click.ToString("#,#")} Дж/клик\n\n";

        if (auto == 0)
            InfoText.text += $"   Автодобыча энергии:\n   {auto} Дж/сек\n\n";
        else
            InfoText.text += $"   Автодобыча энергии:\n   {auto.ToString("#,#")} Дж/сек\n\n";

        if (save == 0)
            InfoText.text += $"   Накопление энергии:\n   до {save} Дж\n\n";
        else
            InfoText.text += $"   Накопление энергии:\n   до {save.ToString("#,#")} Дж\n\n";

        if (AllEnergy == 0)
            InfoText.text += $"   Всего энергии получено:\n   {AllEnergy} Дж\n\n";
        else
            InfoText.text += $"   Всего энергии получено:\n   {AllEnergy.ToString("#,#")} Дж\n\n";

        if (KolvoClick == 0)
            InfoText.text += $"   Всего кликов:\n   {KolvoClick}";
        else
            InfoText.text += $"   Всего кликов:\n   {KolvoClick.ToString("#,#")}";         
    }

    public void GetSaveScore()
    {
        if((SecondCount * auto)/10 > save)
        {
            score += save;
            AllEnergy += save;
        }
        else
        {
            score += (SecondCount * auto)/10;
            AllEnergy += (SecondCount * auto)/10;
        }

        SaveBonusPan.SetActive(false);
    }

    public void OnClickBtn()
    {
        score += click;
        AllEnergy += click;
        KolvoClick++;
        PlayerPrefs.SetInt("KolvoClick", KolvoClick);
    }

    public void Reset() //заново
    {
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

        for(int i = 0; i < 20; i++) // сброс магазина
        {
            clickCost[i] = clickCostStart[i];
            clickNum[i] = 0;
            PlayerPrefs.SetString($"clickCost{i}", clickCost[i].ToString());
            PlayerPrefs.SetInt($"clickNum{i}", clickNum[i]);
            NumClickTxt[i].text = clickNum[i] + "";
            CostClickTxt[i].text = $"Цена: {clickCost[i]} Дж";
        }

        for(int i = 0; i < 30; i++)
        {
            autoCost[i] = autoCostStart[i];
            autoNum[i] = 0;
            PlayerPrefs.SetString($"autoCost{i}", autoCost[i].ToString());
            PlayerPrefs.SetInt($"autoNum{i}", autoNum[i]);
            NumAutoTxt[i].text = autoNum[i] + "";
            CostAutoTxt[i].text = $"Цена: {autoCost[i]} Дж";
        }

        for(int i = 0; i < 10; i++)
        {
            saveCost[i] = saveCostStart[i];
            saveNum[i] = 0;
            PlayerPrefs.SetString($"saveCost{i}", saveCost[i].ToString());
            PlayerPrefs.SetInt($"saveNum{i}", saveNum[i]);
            NumSaveTxt[i].text = saveNum[i] + "";
            CostSaveTxt[i].text = $"Цена: {saveCost[i]} Дж";
        }
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

            PlayerPrefs.SetString($"clickCost{index}", clickCost[index].ToString()); // сохранение покупок
            PlayerPrefs.SetInt($"clickNum{index}", clickNum[index]);
            NumClickTxt[index].text = clickNum[index] + "";
            CostClickTxt[index].text = $"Цена: {clickCost[index]} Дж";

            if ((index + 1) > level)
            {
                level += index + 1 - level;
                PlayerPrefs.SetInt("level", level);
                LevelText.text = level.ToString();
                
                if (level == 0)
                    BntClick.SetActive(false);
                else if(level == 1)
                {
                    BntClick.SetActive(true);
                    BntClick.GetComponent<Image>().sprite = QuanSt;
                }
                else if(level == 2)
                {
                    BntClick.SetActive(true);
                    BntClick.GetComponent<Image>().sprite = Quark;
                }
                else if(level == 3)
                {
                    BntClick.SetActive(true);
                    BntClick.GetComponent<Image>().sprite = Proton;
                }
                else if(level == 4)
                {
                    BntClick.SetActive(true);
                    BntClick.GetComponent<Image>().sprite = Nucleus;
                }
                else if(level == 5)
                {
                    BntClick.SetActive(true);
                    BntClick.GetComponent<Image>().sprite = Atom;
                }
                else
                {
                    BntClick.SetActive(true);
                    BntClick.GetComponent<Image>().sprite = Atom;
                }
            }
        }
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

            PlayerPrefs.SetString($"autoCost{index}", autoCost[index].ToString()); // сохранение покупок
            PlayerPrefs.SetInt($"autoNum{index}", autoNum[index]);
            NumAutoTxt[index].text = autoNum[index] + "";
            CostAutoTxt[index].text = $"Цена: {autoCost[index]} Дж";
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

            PlayerPrefs.SetString($"saveCost{index}", saveCost[index].ToString()); // сохранение покупок
            PlayerPrefs.SetInt($"saveNum{index}", saveNum[index]);
            NumSaveTxt[index].text = saveNum[index] + "";
            CostSaveTxt[index].text = $"Цена: {saveCost[index]} Дж";
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
        if (score >= 100000000000)
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

        if (auto >= 100000000000)
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