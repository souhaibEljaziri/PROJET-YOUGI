#include "graphique.h"
//#include "loading.h"
//#include "loading_fermer.h"

#include <stdio.h>
#include<stdio.h>
#include <windows.h>
#include<myconio.h>
#include <time.h>
LRESULT CALLBACK MainWndProc(HWND, UINT, WPARAM, LPARAM);
HBITMAP hBitmap;HINSTANCE hInstance;
HWND hwndx,hwnd,bouton1,bouton2,bouton3,bouton4,bouton5,bouton11,bouton22,bouton33,bouton44,bouton55;
HWND hwndt;POINT point;
char ch11[50]="",ch22[50],ch33[50],ch44[50],ch55[50],cr[9];
int x=0,b1=0,z=0,j,m,a,h,jc=0,mc=0,ac=0,hc=0;
int WINAPI WinMain(HINSTANCE hinstance, HINSTANCE hPrevInstance,
                                            LPSTR lpCmdLine, int nCmdShow)
{
    MSG msg;
    WNDCLASS wc;

    wc.style = 0;
    wc.lpfnWndProc = MainWndProc;
    wc.cbClsExtra = 0;
    wc.cbWndExtra = 0;
    wc.hInstance = hinstance;
    wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
    wc.hCursor = LoadCursor(NULL, IDC_ARROW);
    wc.hbrBackground = (HBRUSH)(COLOR_3DFACE + 1);
    wc.lpszMenuName =  NULL;
    wc.lpszClassName = "MaWinClass";

    if(!RegisterClass(&wc)) return FALSE;
   hwndx = CreateWindow("static", "mot de passe", 0,
                                   0, -20, 2000, 1000,
                                                   NULL, NULL, hinstance, NULL);
   hwnd = CreateWindow("MaWinClass", "mot de passe", 0,
                                   0, -20, 2000, 1000,
                                                   NULL, NULL, hinstance, NULL);
    if (!hwnd) return FALSE;

    ShowWindow(hwnd, nCmdShow);
    UpdateWindow(hwnd);
boutonim(hwnd,&bouton1,L"mini\\0000.bmp",450,0,50,72,1);
boutonim(hwnd,&bouton2,L"mini\\0000.bmp",500,0,50,72,2);
boutonim(hwnd,&bouton3,L"mini\\0000.bmp",550,0,50,72,3);
boutonim(hwnd,&bouton4,L"mini\\0000.bmp",600,0,50,72,4);
boutonim(hwnd,&bouton5,L"mini\\0000.bmp",650,0,50,72,5);


int a1=0,a2=0,a3=0,a4=0,a5=0,x=0,i=1;
do
{
a1=(rand()%5281)+4900;
}
while(!((a1>4900) &&(a1<5281)));
printf("%d\n",a1);
do
{
a2=rand()%5281+4900;
}
while(!((a2>4900) &&(a2<5000)));
printf("%d\n",a2);
do
{
a3=rand()%5281+4900;
}
while(!((a3>4900) &&(a3<5281)));
printf("%d\n",a3);

do
{
a4=rand()%5281+4900;
}
while(!((a4>4900) &&(a4<5281)));
printf("%d\n",a4);
do
{
a5=rand()%5281+4900;
}
while(!((a5>4900) &&(a5<5281)));
printf("%d\n",a5);

    for (i=4900;i<5281;i++)
    {
        if(i==a1)
        {
if (a1==4901){boutonim(hwnd,&bouton11,L"mini\\4901_1.bmp",450,650,50,72,11);}
if (a1==4902){boutonim(hwnd,&bouton11,L"mini\\4902_1.bmp",450,650,50,72,11);}
if (a1==4903){boutonim(hwnd,&bouton11,L"mini\\4903_1.bmp",450,650,50,72,11);}
if (a1==4904){boutonim(hwnd,&bouton11,L"mini\\4904_1.bmp",450,650,50,72,11);}
if (a1==4905){boutonim(hwnd,&bouton11,L"mini\\4905_1.bmp",450,650,50,72,11);}
if (a1==4906){boutonim(hwnd,&bouton11,L"mini\\4906_1.bmp",450,650,50,72,11);}
if (a1==4907){boutonim(hwnd,&bouton11,L"mini\\4907_1.bmp",450,650,50,72,11);}
if (a1==4908){boutonim(hwnd,&bouton11,L"mini\\4908_1.bmp",450,650,50,72,11);}
if (a1==4909){boutonim(hwnd,&bouton11,L"mini\\4909_1.bmp",450,650,50,72,11);}
if (a1==4910){boutonim(hwnd,&bouton11,L"mini\\4910_1.bmp",450,650,50,72,11);}
if (a1==4911){boutonim(hwnd,&bouton11,L"mini\\4911_1.bmp",450,650,50,72,11);}
if (a1==4912){boutonim(hwnd,&bouton11,L"mini\\4912_1.bmp",450,650,50,72,11);}
if (a1==4913){boutonim(hwnd,&bouton11,L"mini\\4913_1.bmp",450,650,50,72,11);}
if (a1==4914){boutonim(hwnd,&bouton11,L"mini\\4914_1.bmp",450,650,50,72,11);}
if (a1==4915){boutonim(hwnd,&bouton11,L"mini\\4915_1.bmp",450,650,50,72,11);}
if (a1==4916){boutonim(hwnd,&bouton11,L"mini\\4916_1.bmp",450,650,50,72,11);}
if (a1==4917){boutonim(hwnd,&bouton11,L"mini\\4917_1.bmp",450,650,50,72,11);}
if (a1==4918){boutonim(hwnd,&bouton11,L"mini\\4918_1.bmp",450,650,50,72,11);}
if (a1==4919){boutonim(hwnd,&bouton11,L"mini\\4919_1.bmp",450,650,50,72,11);}
if (a1==4920){boutonim(hwnd,&bouton11,L"mini\\4920_1.bmp",450,650,50,72,11);}
if (a1==4921){boutonim(hwnd,&bouton11,L"mini\\4921_1.bmp",450,650,50,72,11);}
if (a1==4922){boutonim(hwnd,&bouton11,L"mini\\4922_1.bmp",450,650,50,72,11);}
if (a1==4923){boutonim(hwnd,&bouton11,L"mini\\4923_1.bmp",450,650,50,72,11);}
if (a1==4924){boutonim(hwnd,&bouton11,L"mini\\4924_1.bmp",450,650,50,72,11);}
if (a1==4925){boutonim(hwnd,&bouton11,L"mini\\4925_1.bmp",450,650,50,72,11);}
if (a1==4926){boutonim(hwnd,&bouton11,L"mini\\4926_1.bmp",450,650,50,72,11);}
if (a1==4927){boutonim(hwnd,&bouton11,L"mini\\4927_1.bmp",450,650,50,72,11);}
if (a1==4928){boutonim(hwnd,&bouton11,L"mini\\4928_1.bmp",450,650,50,72,11);}
if (a1==4929){boutonim(hwnd,&bouton11,L"mini\\4929_1.bmp",450,650,50,72,11);}
if (a1==4930){boutonim(hwnd,&bouton11,L"mini\\4930_1.bmp",450,650,50,72,11);}
if (a1==4931){boutonim(hwnd,&bouton11,L"mini\\4931_1.bmp",450,650,50,72,11);}
if (a1==4932){boutonim(hwnd,&bouton11,L"mini\\4932_1.bmp",450,650,50,72,11);}
if (a1==4933){boutonim(hwnd,&bouton11,L"mini\\4933_1.bmp",450,650,50,72,11);}
if (a1==4934){boutonim(hwnd,&bouton11,L"mini\\4934_1.bmp",450,650,50,72,11);}
if (a1==4935){boutonim(hwnd,&bouton11,L"mini\\4935_1.bmp",450,650,50,72,11);}
if (a1==4936){boutonim(hwnd,&bouton11,L"mini\\4936_1.bmp",450,650,50,72,11);}
if (a1==4937){boutonim(hwnd,&bouton11,L"mini\\4937_1.bmp",450,650,50,72,11);}
if (a1==4938){boutonim(hwnd,&bouton11,L"mini\\4938_1.bmp",450,650,50,72,11);}
if (a1==4939){boutonim(hwnd,&bouton11,L"mini\\4939_1.bmp",450,650,50,72,11);}
if (a1==4940){boutonim(hwnd,&bouton11,L"mini\\4940_1.bmp",450,650,50,72,11);}
if (a1==4941){boutonim(hwnd,&bouton11,L"mini\\4941_1.bmp",450,650,50,72,11);}
if (a1==4942){boutonim(hwnd,&bouton11,L"mini\\4942_1.bmp",450,650,50,72,11);}
if (a1==4943){boutonim(hwnd,&bouton11,L"mini\\4943_1.bmp",450,650,50,72,11);}
if (a1==4944){boutonim(hwnd,&bouton11,L"mini\\4944_1.bmp",450,650,50,72,11);}
if (a1==4945){boutonim(hwnd,&bouton11,L"mini\\4945_1.bmp",450,650,50,72,11);}
if (a1==4946){boutonim(hwnd,&bouton11,L"mini\\4946_1.bmp",450,650,50,72,11);}
if (a1==4947){boutonim(hwnd,&bouton11,L"mini\\4947_1.bmp",450,650,50,72,11);}
if (a1==4948){boutonim(hwnd,&bouton11,L"mini\\4948_1.bmp",450,650,50,72,11);}
if (a1==4949){boutonim(hwnd,&bouton11,L"mini\\4949_1.bmp",450,650,50,72,11);}
if (a1==4950){boutonim(hwnd,&bouton11,L"mini\\4950_1.bmp",450,650,50,72,11);}
if (a1==4951){boutonim(hwnd,&bouton11,L"mini\\4951_1.bmp",450,650,50,72,11);}
if (a1==4952){boutonim(hwnd,&bouton11,L"mini\\4952_1.bmp",450,650,50,72,11);}
if (a1==4953){boutonim(hwnd,&bouton11,L"mini\\4953_1.bmp",450,650,50,72,11);}
if (a1==4954){boutonim(hwnd,&bouton11,L"mini\\4954_1.bmp",450,650,50,72,11);}
if (a1==4955){boutonim(hwnd,&bouton11,L"mini\\4955_1.bmp",450,650,50,72,11);}
if (a1==4956){boutonim(hwnd,&bouton11,L"mini\\4956_1.bmp",450,650,50,72,11);}
if (a1==4957){boutonim(hwnd,&bouton11,L"mini\\4957_1.bmp",450,650,50,72,11);}
if (a1==4958){boutonim(hwnd,&bouton11,L"mini\\4958_1.bmp",450,650,50,72,11);}
if (a1==4959){boutonim(hwnd,&bouton11,L"mini\\4959_1.bmp",450,650,50,72,11);}
if (a1==4960){boutonim(hwnd,&bouton11,L"mini\\4960_1.bmp",450,650,50,72,11);}
if (a1==4961){boutonim(hwnd,&bouton11,L"mini\\4961_1.bmp",450,650,50,72,11);}
if (a1==4962){boutonim(hwnd,&bouton11,L"mini\\4962_1.bmp",450,650,50,72,11);}
if (a1==4963){boutonim(hwnd,&bouton11,L"mini\\4963_1.bmp",450,650,50,72,11);}
if (a1==4964){boutonim(hwnd,&bouton11,L"mini\\4964_1.bmp",450,650,50,72,11);}
if (a1==4965){boutonim(hwnd,&bouton11,L"mini\\4965_1.bmp",450,650,50,72,11);}
if (a1==4966){boutonim(hwnd,&bouton11,L"mini\\4966_1.bmp",450,650,50,72,11);}
if (a1==4967){boutonim(hwnd,&bouton11,L"mini\\4967_1.bmp",450,650,50,72,11);}
if (a1==4968){boutonim(hwnd,&bouton11,L"mini\\4968_1.bmp",450,650,50,72,11);}
if (a1==4969){boutonim(hwnd,&bouton11,L"mini\\4969_1.bmp",450,650,50,72,11);}
if (a1==4970){boutonim(hwnd,&bouton11,L"mini\\4970_1.bmp",450,650,50,72,11);}
if (a1==4971){boutonim(hwnd,&bouton11,L"mini\\4971_1.bmp",450,650,50,72,11);}
if (a1==4972){boutonim(hwnd,&bouton11,L"mini\\4972_1.bmp",450,650,50,72,11);}
if (a1==4973){boutonim(hwnd,&bouton11,L"mini\\4973_1.bmp",450,650,50,72,11);}
if (a1==4974){boutonim(hwnd,&bouton11,L"mini\\4974_1.bmp",450,650,50,72,11);}
if (a1==4975){boutonim(hwnd,&bouton11,L"mini\\4975_1.bmp",450,650,50,72,11);}
if (a1==4976){boutonim(hwnd,&bouton11,L"mini\\4976_1.bmp",450,650,50,72,11);}
if (a1==4977){boutonim(hwnd,&bouton11,L"mini\\4977_1.bmp",450,650,50,72,11);}
if (a1==4978){boutonim(hwnd,&bouton11,L"mini\\4978_1.bmp",450,650,50,72,11);}
if (a1==4979){boutonim(hwnd,&bouton11,L"mini\\4979_1.bmp",450,650,50,72,11);}
if (a1==4980){boutonim(hwnd,&bouton11,L"mini\\4980_1.bmp",450,650,50,72,11);}
if (a1==4981){boutonim(hwnd,&bouton11,L"mini\\4981_1.bmp",450,650,50,72,11);}
if (a1==4982){boutonim(hwnd,&bouton11,L"mini\\4982_1.bmp",450,650,50,72,11);}
if (a1==4983){boutonim(hwnd,&bouton11,L"mini\\4983_1.bmp",450,650,50,72,11);}
if (a1==4984){boutonim(hwnd,&bouton11,L"mini\\4984_1.bmp",450,650,50,72,11);}
if (a1==4985){boutonim(hwnd,&bouton11,L"mini\\4985_1.bmp",450,650,50,72,11);}
if (a1==4986){boutonim(hwnd,&bouton11,L"mini\\4986_1.bmp",450,650,50,72,11);}
if (a1==4987){boutonim(hwnd,&bouton11,L"mini\\4987_1.bmp",450,650,50,72,11);}
if (a1==4988){boutonim(hwnd,&bouton11,L"mini\\4988_1.bmp",450,650,50,72,11);}
if (a1==4989){boutonim(hwnd,&bouton11,L"mini\\4989_1.bmp",450,650,50,72,11);}
if (a1==4990){boutonim(hwnd,&bouton11,L"mini\\4990_1.bmp",450,650,50,72,11);}
if (a1==4991){boutonim(hwnd,&bouton11,L"mini\\4991_1.bmp",450,650,50,72,11);}
if (a1==4992){boutonim(hwnd,&bouton11,L"mini\\4992_1.bmp",450,650,50,72,11);}
if (a1==4993){boutonim(hwnd,&bouton11,L"mini\\4993_1.bmp",450,650,50,72,11);}
if (a1==4994){boutonim(hwnd,&bouton11,L"mini\\4994_1.bmp",450,650,50,72,11);}
if (a1==4995){boutonim(hwnd,&bouton11,L"mini\\4995_1.bmp",450,650,50,72,11);}
if (a1==4996){boutonim(hwnd,&bouton11,L"mini\\4996_1.bmp",450,650,50,72,11);}
if (a1==4997){boutonim(hwnd,&bouton11,L"mini\\4997_1.bmp",450,650,50,72,11);}
if (a1==4998){boutonim(hwnd,&bouton11,L"mini\\4998_1.bmp",450,650,50,72,11);}
if (a1==4999){boutonim(hwnd,&bouton11,L"mini\\4999_1.bmp",450,650,50,72,11);}
if (a1==5000){boutonim(hwnd,&bouton11,L"mini\\5000_1.bmp",450,650,50,72,11);}


        }
    }
    for (i=4900;i<5281;i++)
    {
        if(i==a2)
        {
         boutonim(hwnd,&bouton22,L"mini\\4222_1.bmp",500,650,50,72,22);
        }
    }
    for (i=4900;i<5281;i++)
    {
        if(i==a3)
        {
         boutonim(hwnd,&bouton33,L"mini\\4333_1.bmp",550,650,50,72,33);
        }
    }
    for (i=4900;i<5281;i++)
    {
        if(i==a4)
        {
         boutonim(hwnd,&bouton44,L"mini\\4444_1.bmp",600,650,50,72,44);
        }
    }
    for (i=4900;i<5281;i++)
    {
        if(i==a5)
        {
         boutonim(hwnd,&bouton55,L"mini\\4555_1.bmp",650,650,50,72,55);
        }
    }


image(L"arr_pl\\arr_pl.bmp",hwnd,0,0);
 /* lire l'heure courante */
   time_t now = time (NULL);
   /* la convertir en heure locale */
   struct tm tm_now = *localtime (&now);
   /* Creer une chaine JJ/MM/AAAA HH:MM:SS */
   char s_now[sizeof "JJ/MM/AAAA HH:MM:SS"];
   strftime (s_now, sizeof s_now, "%d/%m/%Y %H", &tm_now);


   gotoxy(53,8); /* afficher le resultat : */


    strftime (s_now, sizeof s_now, "%d", &tm_now);
    j=atoi(s_now);

  strftime (s_now, sizeof s_now, "%m", &tm_now);
    m=atoi(s_now);
strftime (s_now, sizeof s_now, "%Y", &tm_now);
    a=atoi(s_now);
strftime (s_now, sizeof s_now, "%H", &tm_now);
    h=atoi(s_now);



    while (GetMessage(&msg, NULL, 0, 0))
    {
       TranslateMessage(&msg);
       DispatchMessage(&msg);
    }
    return msg.wParam;
}
LRESULT CALLBACK MainWndProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam)
{
     HMENU hMenu;

    switch (uMsg)
    {

         case WM_COMMAND:
        switch(LOWORD(wParam))
        {
   case 1:{image(L"card\\0000.bmp",hwnd,0,0);if(jc==0 && mc==0 && ac==0 && hc==0){jc=1;}else if(mc==0 && ac==0 && hc==0){mc=1;}else if(ac==0 && hc==0){ac=1;}else  if(hc==0){hc=1;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 2:{image(L"card\\0000.bmp",hwnd,0,0);if(jc==0 && mc==0 && ac==0 && hc==0){jc=2;}else if(mc==0 && ac==0 && hc==0){mc=2;}else if(ac==0 && hc==0){ac=2;}else  if(hc==0){hc=2;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 3:{image(L"card\\0000.bmp",hwnd,0,0);if(jc==0 && mc==0 && ac==0 && hc==0){jc=3;}else if(mc==0 && ac==0 && hc==0){mc=3;}else if(ac==0 && hc==0){ac=3;}else  if(hc==0){hc=3;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 4:{image(L"card\\0000.bmp",hwnd,0,0);if(jc==0 && mc==0 && ac==0 && hc==0){jc=4;}else if(mc==0 && ac==0 && hc==0){mc=4;}else if(ac==0 && hc==0){ac=4;}else  if(hc==0){hc=4;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 5:{image(L"card\\0000.bmp",hwnd,0,0);if(jc==0 && mc==0 && ac==0 && hc==0){jc=5;}else if(mc==0 && ac==0 && hc==0){mc=5;}else if(ac==0 && hc==0){ac=5;}else  if(hc==0){hc=5;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 11:{image(L"card\\4941_1.bmp",hwnd,0,470);if(jc==0 && mc==0 && ac==0 && hc==0){jc=6;}else if(mc==0 && ac==0 && hc==0){mc=6;}else if(ac==0 && hc==0){ac=6;}else  if(hc==0){hc=6;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 22:{image(L"card\\4222_1.bmp",hwnd,0,470);if(jc==0 && mc==0 && ac==0 && hc==0){jc=7;}else if(mc==0 && ac==0 && hc==0){mc=7;}else if(ac==0 && hc==0){ac=7;}else  if(hc==0){hc=7;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 33:{image(L"card\\4333_1.bmp",hwnd,0,470);if(jc==0 && mc==0 && ac==0 && hc==0){jc=8;}else if(mc==0 && ac==0 && hc==0){mc=8;}else if(ac==0 && hc==0){ac=8;}else  if(hc==0){hc=8;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 44:{image(L"card\\4444_1.bmp",hwnd,0,470);if(jc==0 && mc==0 && ac==0 && hc==0){jc=9;}else if(mc==0 && ac==0 && hc==0){mc=9;}else if(ac==0 && hc==0){ac=9;}else  if(hc==0){hc=9;}edit(hwnd,"",1000,1000,0,0,0);break;}
   case 55:{image(L"card\\4555_1.bmp",hwnd,0,470);if(jc==0 && mc==0 && ac==0 && hc==0){jc=9;}else if(mc==0 && ac==0 && hc==0){mc=9;}else if(ac==0 && hc==0){ac=9;}else  if(hc==0){hc=9;}edit(hwnd,"",1000,1000,0,0,0);break;}
         }
         if(jc==(j % 10)&& mc==(m % 10)&& ac==(a % 10) && hc==(h % 10)){system("image_changer.exe");}
        case WM_CREATE:

            return 0;

        case WM_DESTROY:
            PostQuitMessage(0);
            return 0;

        default:
            return DefWindowProc(hwnd, uMsg, wParam, lParam);
    }
}
