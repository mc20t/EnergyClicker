#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// ClickOblect
struct ClickOblect_t7B6E275858340CA0D591616FB451B8F69F591C0A;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// Game
struct Game_tA6A98F81416961C425C0982A763372581DF081F1;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// Notifications
struct Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072;
// Game/<BonusPerSec>d__137
struct U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;

IL2CPP_EXTERN_C RuntimeClass* AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0067B6B6EB479C5C74CAD3B8A47F77EEB542F2A4;
IL2CPP_EXTERN_C String_t* _stringLiteral00B1423978FDF4C198DEE3B61F77EA076A4160E8;
IL2CPP_EXTERN_C String_t* _stringLiteral01637B662C860A4FEA1F5B57B9E4049BCA27A92A;
IL2CPP_EXTERN_C String_t* _stringLiteral0329E5F87CFDF86E96C9A0654F26F463F7A21EFC;
IL2CPP_EXTERN_C String_t* _stringLiteral051C140891120F02BAEAC0C88CC12AF53721F422;
IL2CPP_EXTERN_C String_t* _stringLiteral0D5399508427CE79556CDA71918020C1E8D15B53;
IL2CPP_EXTERN_C String_t* _stringLiteral13A054F24D0178D4183D041F89DB552550CBDBCC;
IL2CPP_EXTERN_C String_t* _stringLiteral15C674133104CE181B75BCEDC520570F6B112888;
IL2CPP_EXTERN_C String_t* _stringLiteral1851192C259F051163EB84CECF68769882CE93E3;
IL2CPP_EXTERN_C String_t* _stringLiteral1A3B3B4AD28EDA99F41A526B3EEE0C23BBDAE2E0;
IL2CPP_EXTERN_C String_t* _stringLiteral1AFC80677B2471F997FA3EA85E0D02B0B3EA17AC;
IL2CPP_EXTERN_C String_t* _stringLiteral1B41B585BE49D415DA38772998D9F53F7269AA6D;
IL2CPP_EXTERN_C String_t* _stringLiteral1C3392C2C64BC9B71E70E9DFCB9BB6F250915D43;
IL2CPP_EXTERN_C String_t* _stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA;
IL2CPP_EXTERN_C String_t* _stringLiteral2012205BC34E1596C145E8F2836654CB4DB435AA;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral20E53EA12D943C14376715D21DAB74E4D73C5751;
IL2CPP_EXTERN_C String_t* _stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D;
IL2CPP_EXTERN_C String_t* _stringLiteral28528D727DD8488EC1BE01DA32AC8F1348FAC96F;
IL2CPP_EXTERN_C String_t* _stringLiteral2A802FCD11737517F2D5352A17B4EDBD653D42BB;
IL2CPP_EXTERN_C String_t* _stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778;
IL2CPP_EXTERN_C String_t* _stringLiteral2B858D99640F141D58C297D80BBBBA08E5C2B860;
IL2CPP_EXTERN_C String_t* _stringLiteral2D1690889541B062DA91A62AC445891141ECD22A;
IL2CPP_EXTERN_C String_t* _stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF;
IL2CPP_EXTERN_C String_t* _stringLiteral3341C782DCE4645E5FC270FBA8F77C70C3F97B27;
IL2CPP_EXTERN_C String_t* _stringLiteral33F8F436438D6A19656C206E2FF7EE632138DF1D;
IL2CPP_EXTERN_C String_t* _stringLiteral380F2188FDF06E62168456E0B5DCE9C7597B3307;
IL2CPP_EXTERN_C String_t* _stringLiteral3C02054BA8BBA4799E11C65AB5E27C1AD4E6061B;
IL2CPP_EXTERN_C String_t* _stringLiteral3C37EAACB1CBB8F4C383140DB5C4AF1B3CC5351A;
IL2CPP_EXTERN_C String_t* _stringLiteral3C782A4DB24AF63DB1C996E75D9AB20B89E0D945;
IL2CPP_EXTERN_C String_t* _stringLiteral3EBC864538B3EE49D48CDF7ECF3D40B215E8BE7F;
IL2CPP_EXTERN_C String_t* _stringLiteral406039EC8806862DC33A11277467F97951546F04;
IL2CPP_EXTERN_C String_t* _stringLiteral411694A7FF63070F5B4B1BF5ECB0AC297EAB9150;
IL2CPP_EXTERN_C String_t* _stringLiteral423748A63D68F482ED0AFF453022C574A5421FEA;
IL2CPP_EXTERN_C String_t* _stringLiteral435314BECB73FD1E0E166D1FB18CF11BC2090EA7;
IL2CPP_EXTERN_C String_t* _stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B;
IL2CPP_EXTERN_C String_t* _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140;
IL2CPP_EXTERN_C String_t* _stringLiteral4548B9EF4D7F6216951F1D3974F1472F9E7395F5;
IL2CPP_EXTERN_C String_t* _stringLiteral47800C885B0F146A396AD9BEACB5E9FC3D63E87A;
IL2CPP_EXTERN_C String_t* _stringLiteral48C8AF5DDB8DF9E190EA5F64BC4796F88868D94F;
IL2CPP_EXTERN_C String_t* _stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8;
IL2CPP_EXTERN_C String_t* _stringLiteral4B0C1740168CD2AE18D736B3412367133FBCA2D5;
IL2CPP_EXTERN_C String_t* _stringLiteral4B368F0F6A6A7298233153B2CDAD8BF8838EFC61;
IL2CPP_EXTERN_C String_t* _stringLiteral4E1BD4F36EFE8F1D380E33A04E58A99C624AB7FE;
IL2CPP_EXTERN_C String_t* _stringLiteral4F15275AB3F8728F9FCB048C4EF599F65EBEE308;
IL2CPP_EXTERN_C String_t* _stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F;
IL2CPP_EXTERN_C String_t* _stringLiteral53A6B9944B2B7F97F97F2DA55EDCEC18AF0580A4;
IL2CPP_EXTERN_C String_t* _stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A;
IL2CPP_EXTERN_C String_t* _stringLiteral5B972D0CEDF8475DE006796137CC5942EC44F0FB;
IL2CPP_EXTERN_C String_t* _stringLiteral5F701CA628F94DABE6A930A0AD7242CB9761405F;
IL2CPP_EXTERN_C String_t* _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960;
IL2CPP_EXTERN_C String_t* _stringLiteral613FE9AEE58FEBC3680422164108AE51C324F98A;
IL2CPP_EXTERN_C String_t* _stringLiteral62035F7A9B7361ECEA901E4EA68CDD8804D2792A;
IL2CPP_EXTERN_C String_t* _stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30;
IL2CPP_EXTERN_C String_t* _stringLiteral686EBC7AAEA22F56C1190DC1E5D1752ACD8FDF62;
IL2CPP_EXTERN_C String_t* _stringLiteral6B1F81D50C33156C352137A0E8AD312869BE4BAC;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3DA65A833BB6F5DD4BF93861D0322462BCEC3E;
IL2CPP_EXTERN_C String_t* _stringLiteral6C1656CCB2FDB97951B3373A82054C6A14B8B8A0;
IL2CPP_EXTERN_C String_t* _stringLiteral72CA01EBB410EDA47087CB9974B26A0E6D83A60B;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD189955E4E0110395C644533E77181BCF57ECB;
IL2CPP_EXTERN_C String_t* _stringLiteral7EA0DDDB897BF6CF8C2DAB067C104BA75EE986FC;
IL2CPP_EXTERN_C String_t* _stringLiteral7EE97573D31038AE852F258E6C7E0301B938DBF6;
IL2CPP_EXTERN_C String_t* _stringLiteral83A838338D671480E05CB307679533E25524C8AA;
IL2CPP_EXTERN_C String_t* _stringLiteral841BAF591C90A868230B27939D5821ACC8574ECA;
IL2CPP_EXTERN_C String_t* _stringLiteral85C2774083B3EC96871A8396AEBA8B5A0CAA9832;
IL2CPP_EXTERN_C String_t* _stringLiteral8ADB0C0FDE6170795E51343DF6EE573C23368E73;
IL2CPP_EXTERN_C String_t* _stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C;
IL2CPP_EXTERN_C String_t* _stringLiteral8F7A11CA93A69398B8DF5B980662D3BD1EA252DA;
IL2CPP_EXTERN_C String_t* _stringLiteral90086E4C4C29E89FC065D14A906518CF6FD30781;
IL2CPP_EXTERN_C String_t* _stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39;
IL2CPP_EXTERN_C String_t* _stringLiteral91F35000449965B1C5FC85F4A5CEF8916C9723B0;
IL2CPP_EXTERN_C String_t* _stringLiteral92A724EB1B2F6C69B890D3B5F5FC04BD603592F2;
IL2CPP_EXTERN_C String_t* _stringLiteral942648654A524F6E984CCA6E5751578BD0E8540E;
IL2CPP_EXTERN_C String_t* _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549;
IL2CPP_EXTERN_C String_t* _stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A;
IL2CPP_EXTERN_C String_t* _stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A;
IL2CPP_EXTERN_C String_t* _stringLiteral99B859F7B6108521BD4A6369B742624C78957F73;
IL2CPP_EXTERN_C String_t* _stringLiteral99EE809A706EB6A02AE32EE72A1373507E413EA3;
IL2CPP_EXTERN_C String_t* _stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9;
IL2CPP_EXTERN_C String_t* _stringLiteral9E254AE5859C316C94993608646B710CD057FB06;
IL2CPP_EXTERN_C String_t* _stringLiteralA021D13D3DA44FED3C88664FC0C7113C291A6F33;
IL2CPP_EXTERN_C String_t* _stringLiteralA1F4427357E012FBE6BA7F78D4C03A7212F3D90B;
IL2CPP_EXTERN_C String_t* _stringLiteralA6888CB975ED67CB1ADCED32B8DDF9FDA802E3D3;
IL2CPP_EXTERN_C String_t* _stringLiteralAB89A97C82F2E0FF82A456F5A70FC75C932AA64B;
IL2CPP_EXTERN_C String_t* _stringLiteralAF10AB1DD4ADD811B50C39A84430856DE23AB4D4;
IL2CPP_EXTERN_C String_t* _stringLiteralB1155366CB1FA02D517CF66C07B6A76DE0DE61BC;
IL2CPP_EXTERN_C String_t* _stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3;
IL2CPP_EXTERN_C String_t* _stringLiteralB21F06A589F494074BB64D7E5C6D51B453A5512A;
IL2CPP_EXTERN_C String_t* _stringLiteralB53AE3A8AAB36BC62F319B4169BA464D5EEE011D;
IL2CPP_EXTERN_C String_t* _stringLiteralBC161E02E08A002D3A5028CD393D64CC02DB37E7;
IL2CPP_EXTERN_C String_t* _stringLiteralBC3DCBC2F3F66AD7F0C66EA21E9743B08CD8A1FA;
IL2CPP_EXTERN_C String_t* _stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9;
IL2CPP_EXTERN_C String_t* _stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302;
IL2CPP_EXTERN_C String_t* _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253;
IL2CPP_EXTERN_C String_t* _stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856;
IL2CPP_EXTERN_C String_t* _stringLiteralC9FFD4148B1D04EE31D4FD78493F8FE959E3DF1A;
IL2CPP_EXTERN_C String_t* _stringLiteralD20A462829C293CB131BE90892A39C87876E7EB6;
IL2CPP_EXTERN_C String_t* _stringLiteralD5BEFA6B97B8AB183CFB592394999030AA91D3E9;
IL2CPP_EXTERN_C String_t* _stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A;
IL2CPP_EXTERN_C String_t* _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDCBBCFC2306ABD50659544F4820545B9C77E2E1B;
IL2CPP_EXTERN_C String_t* _stringLiteralDD037FB3C755B0BA8BD57EDEF208CB4A7D835809;
IL2CPP_EXTERN_C String_t* _stringLiteralDE873725694F455431C96F205C872524296EB64F;
IL2CPP_EXTERN_C String_t* _stringLiteralE09B3659FAC2814324890495F0C68FCA268D5B45;
IL2CPP_EXTERN_C String_t* _stringLiteralE5776261AD4DD555AA7131F2B322AAE5C9E71440;
IL2CPP_EXTERN_C String_t* _stringLiteralE84F2B479265FAD93BE81E77636775B4B5E83831;
IL2CPP_EXTERN_C String_t* _stringLiteralEA17CBDD320B8C8D5C1CBAC70A6B3004D6126FCA;
IL2CPP_EXTERN_C String_t* _stringLiteralEBBE7D99064EADE8A07CCC391FE3830C086746FD;
IL2CPP_EXTERN_C String_t* _stringLiteralED5169E4CC70ACFAD5449D117F0423892FBF0C89;
IL2CPP_EXTERN_C String_t* _stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F;
IL2CPP_EXTERN_C String_t* _stringLiteralF22F0E72DE6DC7385DEC73C10034ED2B7C9899E4;
IL2CPP_EXTERN_C String_t* _stringLiteralF237E3E2137214D2DCD672B17830C7BD484EC300;
IL2CPP_EXTERN_C String_t* _stringLiteralF305569E696DA1A722634AD5D453A2FBE67CC8BC;
IL2CPP_EXTERN_C String_t* _stringLiteralF848F71C9FB69442195E73061E4172224620DA3F;
IL2CPP_EXTERN_C String_t* _stringLiteralF9C56BACDB8123CB1926E2CDE9C15F4F4675716E;
IL2CPP_EXTERN_C String_t* _stringLiteralFA62FBFE4E50CD6BF703F0C9569D92C185108758;
IL2CPP_EXTERN_C String_t* _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2;
IL2CPP_EXTERN_C String_t* _stringLiteralFD55DE16DD4B7D19D5F0191294E6E1F14F61945E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDB0AF4614E32ACDFBC44DCE7EA3A6A251BE120E;
IL2CPP_EXTERN_C String_t* _stringLiteralFDBEFC520382E602082CFD305E30DFA2C17DA709;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m6FE43DE547C5CC60E2F4B58CCD40D79980F7593B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBonusPerSecU3Ed__137_System_Collections_IEnumerator_Reset_m8E56A05FB82AF48B30791C07C740AAA636EC5E5F_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// Game/<BonusPerSec>d__137
struct U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D  : public RuntimeObject
{
	// System.Int32 Game/<BonusPerSec>d__137::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Game/<BonusPerSec>d__137::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// Game Game/<BonusPerSec>d__137::<>4__this
	Game_tA6A98F81416961C425C0982A763372581DF081F1* ___U3CU3E4__this_2;
};

// Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC 
{
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Id>k__BackingField
	String_t* ___U3CIdU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotificationChannel::<Description>k__BackingField
	String_t* ___U3CDescriptionU3Ek__BackingField_2;
	// Unity.Notifications.Android.Importance Unity.Notifications.Android.AndroidNotificationChannel::<Importance>k__BackingField
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanBypassDnd>k__BackingField
	bool ___U3CCanBypassDndU3Ek__BackingField_4;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<CanShowBadge>k__BackingField
	bool ___U3CCanShowBadgeU3Ek__BackingField_5;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableLights>k__BackingField
	bool ___U3CEnableLightsU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotificationChannel::<EnableVibration>k__BackingField
	bool ___U3CEnableVibrationU3Ek__BackingField_7;
	// System.Int64[] Unity.Notifications.Android.AndroidNotificationChannel::<VibrationPattern>k__BackingField
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___U3CVibrationPatternU3Ek__BackingField_8;
	// Unity.Notifications.Android.LockScreenVisibility Unity.Notifications.Android.AndroidNotificationChannel::<LockScreenVisibility>k__BackingField
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_pinvoke
{
	char* ___U3CIdU3Ek__BackingField_0;
	char* ___U3CNameU3Ek__BackingField_1;
	char* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotificationChannel
struct AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC_marshaled_com
{
	Il2CppChar* ___U3CIdU3Ek__BackingField_0;
	Il2CppChar* ___U3CNameU3Ek__BackingField_1;
	Il2CppChar* ___U3CDescriptionU3Ek__BackingField_2;
	int32_t ___U3CImportanceU3Ek__BackingField_3;
	int32_t ___U3CCanBypassDndU3Ek__BackingField_4;
	int32_t ___U3CCanShowBadgeU3Ek__BackingField_5;
	int32_t ___U3CEnableLightsU3Ek__BackingField_6;
	int32_t ___U3CEnableVibrationU3Ek__BackingField_7;
	Il2CppSafeArray/*NONE*/* ___U3CVibrationPatternU3Ek__BackingField_8;
	int32_t ___U3CLockScreenVisibilityU3Ek__BackingField_9;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 
{
	// System.String Unity.Notifications.Android.AndroidNotification::<Title>k__BackingField
	String_t* ___U3CTitleU3Ek__BackingField_0;
	// System.String Unity.Notifications.Android.AndroidNotification::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_1;
	// System.String Unity.Notifications.Android.AndroidNotification::<SmallIcon>k__BackingField
	String_t* ___U3CSmallIconU3Ek__BackingField_2;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::<FireTime>k__BackingField
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	// System.String Unity.Notifications.Android.AndroidNotification::<LargeIcon>k__BackingField
	String_t* ___U3CLargeIconU3Ek__BackingField_4;
	// Unity.Notifications.Android.NotificationStyle Unity.Notifications.Android.AndroidNotification::<Style>k__BackingField
	int32_t ___U3CStyleU3Ek__BackingField_5;
	// System.Int32 Unity.Notifications.Android.AndroidNotification::<Number>k__BackingField
	int32_t ___U3CNumberU3Ek__BackingField_6;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShouldAutoCancel>k__BackingField
	bool ___U3CShouldAutoCancelU3Ek__BackingField_7;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<UsesStopwatch>k__BackingField
	bool ___U3CUsesStopwatchU3Ek__BackingField_8;
	// System.String Unity.Notifications.Android.AndroidNotification::<Group>k__BackingField
	String_t* ___U3CGroupU3Ek__BackingField_9;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<GroupSummary>k__BackingField
	bool ___U3CGroupSummaryU3Ek__BackingField_10;
	// Unity.Notifications.Android.GroupAlertBehaviours Unity.Notifications.Android.AndroidNotification::<GroupAlertBehaviour>k__BackingField
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	// System.String Unity.Notifications.Android.AndroidNotification::<SortKey>k__BackingField
	String_t* ___U3CSortKeyU3Ek__BackingField_12;
	// System.String Unity.Notifications.Android.AndroidNotification::<IntentData>k__BackingField
	String_t* ___U3CIntentDataU3Ek__BackingField_13;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowTimestamp>k__BackingField
	bool ___U3CShowTimestampU3Ek__BackingField_14;
	// System.Boolean Unity.Notifications.Android.AndroidNotification::<ShowCustomTimestamp>k__BackingField
	bool ___U3CShowCustomTimestampU3Ek__BackingField_15;
	// UnityEngine.Color Unity.Notifications.Android.AndroidNotification::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	// System.TimeSpan Unity.Notifications.Android.AndroidNotification::m_RepeatInterval
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	// System.DateTime Unity.Notifications.Android.AndroidNotification::m_CustomTimestamp
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
};
// Native definition for P/Invoke marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_pinvoke
{
	char* ___U3CTitleU3Ek__BackingField_0;
	char* ___U3CTextU3Ek__BackingField_1;
	char* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	char* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	char* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	char* ___U3CSortKeyU3Ek__BackingField_12;
	char* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
};
// Native definition for COM marshalling of Unity.Notifications.Android.AndroidNotification
struct AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18_marshaled_com
{
	Il2CppChar* ___U3CTitleU3Ek__BackingField_0;
	Il2CppChar* ___U3CTextU3Ek__BackingField_1;
	Il2CppChar* ___U3CSmallIconU3Ek__BackingField_2;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___U3CFireTimeU3Ek__BackingField_3;
	Il2CppChar* ___U3CLargeIconU3Ek__BackingField_4;
	int32_t ___U3CStyleU3Ek__BackingField_5;
	int32_t ___U3CNumberU3Ek__BackingField_6;
	int32_t ___U3CShouldAutoCancelU3Ek__BackingField_7;
	int32_t ___U3CUsesStopwatchU3Ek__BackingField_8;
	Il2CppChar* ___U3CGroupU3Ek__BackingField_9;
	int32_t ___U3CGroupSummaryU3Ek__BackingField_10;
	int32_t ___U3CGroupAlertBehaviourU3Ek__BackingField_11;
	Il2CppChar* ___U3CSortKeyU3Ek__BackingField_12;
	Il2CppChar* ___U3CIntentDataU3Ek__BackingField_13;
	int32_t ___U3CShowTimestampU3Ek__BackingField_14;
	int32_t ___U3CShowCustomTimestampU3Ek__BackingField_15;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_16;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___m_RepeatInterval_17;
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___m_CustomTimestamp_18;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.AudioClip
struct AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t3396D9613664F0AFF65FB91018FD0F901CC16F1E* ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_t8D7135A2FB40647CAEC93F5254AD59E18DEB6072* ___m_PCMSetPositionCallback_5;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// ClickOblect
struct ClickOblect_t7B6E275858340CA0D591616FB451B8F69F591C0A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// Game
struct Game_tA6A98F81416961C425C0982A763372581DF081F1  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.DateTime Game::DateStart
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___DateStart_4;
	// System.DateTime Game::StartDateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___StartDateTime_5;
	// System.UInt64 Game::score
	uint64_t ___score_6;
	// System.UInt64 Game::click
	uint64_t ___click_7;
	// System.UInt64 Game::auto
	uint64_t ___auto_8;
	// System.UInt64 Game::save
	uint64_t ___save_9;
	// System.UInt64 Game::AllEnergy
	uint64_t ___AllEnergy_10;
	// System.UInt64 Game::SokrSc
	uint64_t ___SokrSc_11;
	// System.UInt64 Game::SokrAu
	uint64_t ___SokrAu_12;
	// System.Int32 Game::KolvoClick
	int32_t ___KolvoClick_13;
	// System.Byte Game::k
	uint8_t ___k_14;
	// System.Int32 Game::m
	int32_t ___m_15;
	// System.Int32 Game::isOnSound
	int32_t ___isOnSound_16;
	// System.Int32 Game::CountNewClick
	int32_t ___CountNewClick_17;
	// System.Int32 Game::CountNewAuto
	int32_t ___CountNewAuto_18;
	// System.Int32 Game::CountNewSave
	int32_t ___CountNewSave_19;
	// System.UInt64[] Game::clickCost
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___clickCost_20;
	// System.UInt64[] Game::autoCost
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___autoCost_21;
	// System.UInt64[] Game::saveCost
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___saveCost_22;
	// System.Int32 Game::level
	int32_t ___level_23;
	// System.UInt64[] Game::clickCostStart
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___clickCostStart_24;
	// System.UInt64[] Game::autoCostStart
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___autoCostStart_25;
	// System.UInt64[] Game::saveCostStart
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___saveCostStart_26;
	// System.UInt64 Game::SecondCount
	uint64_t ___SecondCount_27;
	// System.UInt64[] Game::clickBonus
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___clickBonus_28;
	// System.UInt64[] Game::autoBonus
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___autoBonus_29;
	// System.UInt64[] Game::saveBonus
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___saveBonus_30;
	// System.Int32 Game::Second
	int32_t ___Second_31;
	// System.Int32[] Game::clickNum
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___clickNum_32;
	// System.Int32[] Game::autoNum
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___autoNum_33;
	// System.Int32[] Game::saveNum
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___saveNum_34;
	// UnityEngine.UI.Text[] Game::CostClickTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___CostClickTxt_35;
	// UnityEngine.UI.Text[] Game::CostAutoTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___CostAutoTxt_36;
	// UnityEngine.UI.Text[] Game::CostSaveTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___CostSaveTxt_37;
	// UnityEngine.UI.Text[] Game::BonClickTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___BonClickTxt_38;
	// UnityEngine.UI.Text[] Game::BonAutoTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___BonAutoTxt_39;
	// UnityEngine.UI.Text[] Game::BonSaveTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___BonSaveTxt_40;
	// UnityEngine.UI.Text[] Game::NumClickTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___NumClickTxt_41;
	// UnityEngine.UI.Text[] Game::NumAutoTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___NumAutoTxt_42;
	// UnityEngine.UI.Text[] Game::NumSaveTxt
	TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* ___NumSaveTxt_43;
	// UnityEngine.UI.Text Game::BonClickInfoTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___BonClickInfoTxt_44;
	// UnityEngine.UI.Text Game::BonAutoInfoTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___BonAutoInfoTxt_45;
	// UnityEngine.UI.Text Game::BonSaveInfoTxt
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___BonSaveInfoTxt_46;
	// UnityEngine.UI.Text Game::ScoreText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ScoreText_47;
	// UnityEngine.UI.Text Game::AutoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___AutoText_48;
	// UnityEngine.UI.Text Game::InfoText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InfoText_49;
	// UnityEngine.UI.Text Game::LevelText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___LevelText_50;
	// UnityEngine.UI.Text Game::SaveBonusText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SaveBonusText_51;
	// UnityEngine.UI.Text Game::NewClickText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___NewClickText_52;
	// UnityEngine.UI.Text Game::ClickMessText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___ClickMessText_53;
	// UnityEngine.UI.Text Game::AutoMessText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___AutoMessText_54;
	// UnityEngine.UI.Text Game::SaveMessText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___SaveMessText_55;
	// UnityEngine.UI.Text Game::InputCode
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InputCode_56;
	// UnityEngine.UI.Text Game::InputScore
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InputScore_57;
	// UnityEngine.UI.Text Game::InputClick
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InputClick_58;
	// UnityEngine.UI.Text Game::InputAuto
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InputAuto_59;
	// UnityEngine.UI.Text Game::InputSave
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___InputSave_60;
	// UnityEngine.GameObject[] Game::BonusButton
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___BonusButton_61;
	// UnityEngine.GameObject[] Game::AutoButton
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___AutoButton_62;
	// UnityEngine.GameObject[] Game::SaveButton
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___SaveButton_63;
	// UnityEngine.Sprite Game::QuanSt
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___QuanSt_64;
	// UnityEngine.Sprite Game::Quark
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Quark_65;
	// UnityEngine.Sprite Game::Proton
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Proton_66;
	// UnityEngine.Sprite Game::Nucleus
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Nucleus_67;
	// UnityEngine.Sprite Game::Atom
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Atom_68;
	// UnityEngine.Sprite Game::Mol
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Mol_69;
	// UnityEngine.Sprite Game::Gen
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Gen_70;
	// UnityEngine.Sprite Game::Chrom
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Chrom_71;
	// UnityEngine.Sprite Game::Kletka
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Kletka_72;
	// UnityEngine.Sprite Game::ListD
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___ListD_73;
	// UnityEngine.Sprite Game::Tree
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Tree_74;
	// UnityEngine.Sprite Game::Forest
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Forest_75;
	// UnityEngine.Sprite Game::Ostrov
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Ostrov_76;
	// UnityEngine.Sprite Game::Earth
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Earth_77;
	// UnityEngine.Sprite Game::SystPl
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SystPl_78;
	// UnityEngine.Sprite Game::Sozvezdie
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Sozvezdie_79;
	// UnityEngine.Sprite Game::Galaxy
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Galaxy_80;
	// UnityEngine.Sprite Game::GalaxyClass
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___GalaxyClass_81;
	// UnityEngine.Sprite Game::SuperGalaxyClass
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SuperGalaxyClass_82;
	// UnityEngine.Sprite Game::Metagal
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Metagal_83;
	// UnityEngine.Sprite Game::Uny
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___Uny_84;
	// UnityEngine.Sprite Game::f8
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f8_85;
	// UnityEngine.Sprite Game::f9
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f9_86;
	// UnityEngine.Sprite Game::f10
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f10_87;
	// UnityEngine.Sprite Game::f11
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f11_88;
	// UnityEngine.Sprite Game::f12
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f12_89;
	// UnityEngine.Sprite Game::f13
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f13_90;
	// UnityEngine.Sprite Game::f14
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f14_91;
	// UnityEngine.Sprite Game::f15
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f15_92;
	// UnityEngine.Sprite Game::f16
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___f16_93;
	// UnityEngine.Sprite Game::SoundOn
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SoundOn_94;
	// UnityEngine.Sprite Game::SoundOff
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___SoundOff_95;
	// UnityEngine.GameObject Game::BonusPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BonusPan_96;
	// UnityEngine.GameObject Game::AutoPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AutoPan_97;
	// UnityEngine.GameObject Game::SavePan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SavePan_98;
	// UnityEngine.GameObject Game::InfoPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___InfoPan_99;
	// UnityEngine.GameObject Game::SettingsPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SettingsPan_100;
	// UnityEngine.GameObject Game::SaveBonusPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SaveBonusPan_101;
	// UnityEngine.GameObject Game::NewClickPanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NewClickPanel_102;
	// UnityEngine.GameObject Game::SecretPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SecretPan_103;
	// UnityEngine.GameObject Game::AdminPan
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AdminPan_104;
	// UnityEngine.GameObject Game::NewClickImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___NewClickImage_105;
	// UnityEngine.GameObject Game::SoundBtn
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SoundBtn_106;
	// UnityEngine.GameObject Game::MessBox
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MessBox_107;
	// UnityEngine.GameObject Game::Normal
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Normal_108;
	// UnityEngine.GameObject Game::Numbers
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Numbers_109;
	// UnityEngine.GameObject Game::Short
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Short_110;
	// UnityEngine.GameObject Game::Prefix
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___Prefix_111;
	// UnityEngine.GameObject Game::BntClick
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BntClick_112;
	// UnityEngine.GameObject Game::BG
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BG_113;
	// UnityEngine.GameObject Game::ClickMess
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ClickMess_114;
	// UnityEngine.GameObject Game::AutoMess
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AutoMess_115;
	// UnityEngine.GameObject Game::SaveMess
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SaveMess_116;
	// UnityEngine.GameObject Game::ClickParent
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ClickParent_117;
	// UnityEngine.GameObject Game::ClickTextPref
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ClickTextPref_118;
	// UnityEngine.GameObject[] Game::clickTextPool
	GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* ___clickTextPool_119;
	// System.Boolean Game::checkBon
	bool ___checkBon_120;
	// System.Boolean Game::checkAut
	bool ___checkAut_121;
	// System.Boolean Game::checkSav
	bool ___checkSav_122;
	// System.Boolean Game::checkInf
	bool ___checkInf_123;
	// System.Boolean Game::checkSet
	bool ___checkSet_124;
};

// Notifications
struct Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Image
struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;
};

struct Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_tE6BB71ABF15905EFA2BE92C38A2716547AEADB19* ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// UnityEngine.UI.Text[]
struct TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353  : public RuntimeArray
{
	ALIGN_FIELD (8) Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* m_Items[1];

	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF  : public RuntimeArray
{
	ALIGN_FIELD (8) GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* m_Items[1];

	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared (RuntimeObject* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared (String_t* ___path0, const RuntimeMethod* method) ;

// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C (String_t* ___key0, int32_t ___defaultValue1, const RuntimeMethod* method) ;
// System.String UnityEngine.PlayerPrefs::GetString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92 (String_t* ___key0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817 (String_t* ___s0, const RuntimeMethod* method) ;
// System.UInt64 System.UInt64::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A (String_t* ___s0, const RuntimeMethod* method) ;
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5 (int32_t* __this, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.UI.Image>()
inline Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE (Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* __this, Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___value0, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30 (String_t* ___format0, RuntimeObject* ___arg01, const RuntimeMethod* method) ;
// System.String System.UInt64::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680 (uint64_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::get_Now()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0 (const RuntimeMethod* method) ;
// System.TimeSpan System.DateTime::op_Subtraction(System.DateTime,System.DateTime)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d10, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___d21, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalSeconds()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806 (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A (String_t* ___format0, RuntimeObject* ___arg01, RuntimeObject* ___arg12, RuntimeObject* ___arg23, const RuntimeMethod* method) ;
// System.String System.String::Format(System.String,System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55 (String_t* ___format0, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioListener::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A (float ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Game::BonusPerSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Game_BonusPerSec_m645C7BD1908A45E4A213D6F7CD2DF844D41264BC (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Transform)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___parent1, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m872899879F710B2E55BC157F35464F03877C8DFA_gshared)(___original0, ___parent1, method);
}
// T UnityEngine.GameObject::GetComponent<UnityEngine.GameObject>()
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObject_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m6FE43DE547C5CC60E2F4B58CCD40D79980F7593B (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.String System.UInt64::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F (uint64_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.PlayerPrefs::SetString(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF (String_t* ___key0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.String System.DateTime::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, const RuntimeMethod* method) ;
// System.Void Game::NormalMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_NormalMode_m02C78FBC74003190BF3F2A9E14DA32310678681F (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.Void Game::StepMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_StepMode_mE86A10082B61F5A23B8C7F45A4CF7AAA04115680 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.Void Game::SokrMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_SokrMode_mC43C861FAA978081B06C5692EA1962410D14A386 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.Void Game::PrefixMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_PrefixMode_m05AA1604778DD81E0D069B32F9802CA2C0DC1879 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.Double System.TimeSpan::get_TotalDays()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108 (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* __this, const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) ;
// System.Void Game/<BonusPerSec>d__137::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBonusPerSecU3Ed__137__ctor_mCF8CEF7C46B7B0CFB96F1B1BCC78A74802041D30 (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.Sprite>(System.String)
inline Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703 (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_m8B40A11CE62A4E445DADC28C81BD73922A4D4B65_gshared)(___path0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Name(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Description(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Id(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationChannel::set_Importance(Unity.Notifications.Android.Importance)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotificationCenter::RegisterNotificationChannel(Unity.Notifications.Android.AndroidNotificationChannel)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidNotificationCenter_RegisterNotificationChannel_mC8D43CD3C737B8C2E953439DED312AE70EE51D44 (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC ___channel0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Title(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_Text(System.String)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.DateTime System.DateTime::AddSeconds(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81 (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* __this, double ___value0, const RuntimeMethod* method) ;
// System.Void Unity.Notifications.Android.AndroidNotification::set_FireTime(System.DateTime)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) ;
// System.Int32 Unity.Notifications.Android.AndroidNotificationCenter::SendNotification(Unity.Notifications.Android.AndroidNotification,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidNotificationCenter_SendNotification_mD7092A8D42FA2D18CB393B73205358930D4B96D4 (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 ___notification0, String_t* ___channelId1, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void ClickOblect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ClickOblect__ctor_m04E3699D1B525E3BC4A8AFA1F71271AD5252794E (ClickOblect_t7B6E275858340CA0D591616FB451B8F69F591C0A* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Start_m81FFBF966FD86236D5383C0295E70170EAE3F1DB (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m6FE43DE547C5CC60E2F4B58CCD40D79980F7593B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A054F24D0178D4183D041F89DB552550CBDBCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1851192C259F051163EB84CECF68769882CE93E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C37EAACB1CBB8F4C383140DB5C4AF1B3CC5351A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral411694A7FF63070F5B4B1BF5ECB0AC297EAB9150);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral48C8AF5DDB8DF9E190EA5F64BC4796F88868D94F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0C1740168CD2AE18D736B3412367133FBCA2D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1BD4F36EFE8F1D380E33A04E58A99C624AB7FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral53A6B9944B2B7F97F97F2DA55EDCEC18AF0580A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C1656CCB2FDB97951B3373A82054C6A14B8B8A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F7A11CA93A69398B8DF5B980662D3BD1EA252DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA021D13D3DA44FED3C88664FC0C7113C291A6F33);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6888CB975ED67CB1ADCED32B8DDF9FDA802E3D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF237E3E2137214D2DCD672B17830C7BD484EC300);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF305569E696DA1A722634AD5D453A2FBE67CC8BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	uint64_t V_4 = 0;
	int32_t V_5 = 0;
	String_t* G_B46_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B46_1 = NULL;
	String_t* G_B45_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B45_1 = NULL;
	String_t* G_B51_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B51_1 = NULL;
	String_t* G_B50_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B50_1 = NULL;
	String_t* G_B56_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B56_1 = NULL;
	String_t* G_B55_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B55_1 = NULL;
	{
		// KolvoClick = PlayerPrefs.GetInt("KolvoClick", KolvoClick);
		int32_t L_0 = __this->___KolvoClick_13;
		int32_t L_1;
		L_1 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA, L_0, NULL);
		__this->___KolvoClick_13 = L_1;
		// m = PlayerPrefs.GetInt("m", m);
		int32_t L_2 = __this->___m_15;
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_2, NULL);
		__this->___m_15 = L_3;
		// level = PlayerPrefs.GetInt("level", level);
		int32_t L_4 = __this->___level_23;
		int32_t L_5;
		L_5 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_4, NULL);
		__this->___level_23 = L_5;
		// isOnSound = PlayerPrefs.GetInt("isOnSound", isOnSound);
		int32_t L_6 = __this->___isOnSound_16;
		int32_t L_7;
		L_7 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39, L_6, NULL);
		__this->___isOnSound_16 = L_7;
		// DateStart = DateTime.Parse(PlayerPrefs.GetString("DateStart"));
		String_t* L_8;
		L_8 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_9;
		L_9 = DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817(L_8, NULL);
		__this->___DateStart_4 = L_9;
		// StartDateTime = DateTime.Parse(PlayerPrefs.GetString("StartDateTime"));
		String_t* L_10;
		L_10 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralA6888CB975ED67CB1ADCED32B8DDF9FDA802E3D3, NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_11;
		L_11 = DateTime_Parse_m1A876FF9EA91B8ECBAC7D5325E2A51E8F437D817(L_10, NULL);
		__this->___StartDateTime_5 = L_11;
		// score = ulong.Parse(PlayerPrefs.GetString("score"));
		String_t* L_12;
		L_12 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, NULL);
		uint64_t L_13;
		L_13 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_12, NULL);
		__this->___score_6 = L_13;
		// click = ulong.Parse(PlayerPrefs.GetString("click"));
		String_t* L_14;
		L_14 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, NULL);
		uint64_t L_15;
		L_15 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_14, NULL);
		__this->___click_7 = L_15;
		// auto = ulong.Parse(PlayerPrefs.GetString("auto"));
		String_t* L_16;
		L_16 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F, NULL);
		uint64_t L_17;
		L_17 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_16, NULL);
		__this->___auto_8 = L_17;
		// save = ulong.Parse(PlayerPrefs.GetString("save"));
		String_t* L_18;
		L_18 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778, NULL);
		uint64_t L_19;
		L_19 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_18, NULL);
		__this->___save_9 = L_19;
		// AllEnergy = ulong.Parse(PlayerPrefs.GetString("AllEnergy"));
		String_t* L_20;
		L_20 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(_stringLiteral13A054F24D0178D4183D041F89DB552550CBDBCC, NULL);
		uint64_t L_21;
		L_21 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_20, NULL);
		__this->___AllEnergy_10 = L_21;
		// LevelText.text = level.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_22 = __this->___LevelText_50;
		int32_t* L_23 = (&__this->___level_23);
		String_t* L_24;
		L_24 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_23, NULL);
		NullCheck(L_22);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_22, L_24);
		// if (level == 0)
		int32_t L_25 = __this->___level_23;
		if (L_25)
		{
			goto IL_017c;
		}
	}
	{
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___BG_113;
		NullCheck(L_26);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_27;
		L_27 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_26, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_28;
		memset((&L_28), 0, sizeof(L_28));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_28), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_27, L_28);
		// BntClick.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___BntClick_112;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_31), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_31);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_33), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		goto IL_0e76;
	}

IL_017c:
	{
		// else if(level == 1)
		int32_t L_34 = __this->___level_23;
		if ((!(((uint32_t)L_34) == ((uint32_t)1))))
		{
			goto IL_0211;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___BntClick_112;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = QuanSt;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___BntClick_112;
		NullCheck(L_36);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37;
		L_37 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_36, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = __this->___QuanSt_64;
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_38, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___BG_113;
		NullCheck(L_39);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40;
		L_40 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_39, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		memset((&L_41), 0, sizeof(L_41));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_41), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_40, L_41);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_43), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		memset((&L_45), 0, sizeof(L_45));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_45), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_44, L_45);
		goto IL_0e76;
	}

IL_0211:
	{
		// else if(level == 2)
		int32_t L_46 = __this->___level_23;
		if ((!(((uint32_t)L_46) == ((uint32_t)2))))
		{
			goto IL_02a6;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___BntClick_112;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Quark;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___BntClick_112;
		NullCheck(L_48);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49;
		L_49 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_48, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_50 = __this->___Quark_65;
		NullCheck(L_49);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_49, L_50, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___BG_113;
		NullCheck(L_51);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_52;
		L_52 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_51, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53;
		memset((&L_53), 0, sizeof(L_53));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_53), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_52, L_53);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		memset((&L_55), 0, sizeof(L_55));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_55), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_54, L_55);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_56 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57;
		memset((&L_57), 0, sizeof(L_57));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_57), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_56, L_57);
		goto IL_0e76;
	}

IL_02a6:
	{
		// else if(level == 3)
		int32_t L_58 = __this->___level_23;
		if ((!(((uint32_t)L_58) == ((uint32_t)3))))
		{
			goto IL_033b;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___BntClick_112;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Proton;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___BntClick_112;
		NullCheck(L_60);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61;
		L_61 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_60, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_62 = __this->___Proton_66;
		NullCheck(L_61);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_61, L_62, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___BG_113;
		NullCheck(L_63);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64;
		L_64 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_63, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65;
		memset((&L_65), 0, sizeof(L_65));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_65), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_64, L_65);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		memset((&L_67), 0, sizeof(L_67));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_67), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_66);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_66, L_67);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69;
		memset((&L_69), 0, sizeof(L_69));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_69), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_68, L_69);
		goto IL_0e76;
	}

IL_033b:
	{
		// else if(level == 4)
		int32_t L_70 = __this->___level_23;
		if ((!(((uint32_t)L_70) == ((uint32_t)4))))
		{
			goto IL_03d0;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___BntClick_112;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Nucleus;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___BntClick_112;
		NullCheck(L_72);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73;
		L_73 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_72, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_74 = __this->___Nucleus_67;
		NullCheck(L_73);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_73, L_74, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___BG_113;
		NullCheck(L_75);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76;
		L_76 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_75, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		memset((&L_77), 0, sizeof(L_77));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_77), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_76);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_76, L_77);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79;
		memset((&L_79), 0, sizeof(L_79));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_79), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_78);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_78, L_79);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_80 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_81;
		memset((&L_81), 0, sizeof(L_81));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_81), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_80);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_80, L_81);
		goto IL_0e76;
	}

IL_03d0:
	{
		// else if(level == 5)
		int32_t L_82 = __this->___level_23;
		if ((!(((uint32_t)L_82) == ((uint32_t)5))))
		{
			goto IL_0465;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___BntClick_112;
		NullCheck(L_83);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_83, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Atom;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___BntClick_112;
		NullCheck(L_84);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85;
		L_85 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_84, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_86 = __this->___Atom_68;
		NullCheck(L_85);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_85, L_86, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___BG_113;
		NullCheck(L_87);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88;
		L_88 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_87, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		memset((&L_89), 0, sizeof(L_89));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_89), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_88);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_88, L_89);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_90 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_91;
		memset((&L_91), 0, sizeof(L_91));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_91), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_90);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_90, L_91);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_92 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_93;
		memset((&L_93), 0, sizeof(L_93));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_93), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_92);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_92, L_93);
		goto IL_0e76;
	}

IL_0465:
	{
		// else if(level == 6)
		int32_t L_94 = __this->___level_23;
		if ((!(((uint32_t)L_94) == ((uint32_t)6))))
		{
			goto IL_04fa;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = __this->___BntClick_112;
		NullCheck(L_95);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Mol;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___BntClick_112;
		NullCheck(L_96);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_97;
		L_97 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_96, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_98 = __this->___Mol_69;
		NullCheck(L_97);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_97, L_98, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->___BG_113;
		NullCheck(L_99);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_100;
		L_100 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_99, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_101;
		memset((&L_101), 0, sizeof(L_101));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_101), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_100);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_100, L_101);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_102 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_103;
		memset((&L_103), 0, sizeof(L_103));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_103), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_102);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_102, L_103);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_104 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_105;
		memset((&L_105), 0, sizeof(L_105));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_105), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_104);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_104, L_105);
		goto IL_0e76;
	}

IL_04fa:
	{
		// else if(level == 7)
		int32_t L_106 = __this->___level_23;
		if ((!(((uint32_t)L_106) == ((uint32_t)7))))
		{
			goto IL_058f;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = __this->___BntClick_112;
		NullCheck(L_107);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_107, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Gen;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = __this->___BntClick_112;
		NullCheck(L_108);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_109;
		L_109 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_108, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_110 = __this->___Gen_70;
		NullCheck(L_109);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_109, L_110, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = __this->___BG_113;
		NullCheck(L_111);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_112;
		L_112 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_111, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_113;
		memset((&L_113), 0, sizeof(L_113));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_113), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_112);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_112, L_113);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_114 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_115;
		memset((&L_115), 0, sizeof(L_115));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_115), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_114);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_114, L_115);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_116 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_117;
		memset((&L_117), 0, sizeof(L_117));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_117), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_116);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_116, L_117);
		goto IL_0e76;
	}

IL_058f:
	{
		// else if(level == 8)
		int32_t L_118 = __this->___level_23;
		if ((!(((uint32_t)L_118) == ((uint32_t)8))))
		{
			goto IL_063a;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = __this->___BntClick_112;
		NullCheck(L_119);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_119, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Chrom;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = __this->___BntClick_112;
		NullCheck(L_120);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_121;
		L_121 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_120, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_122 = __this->___Chrom_71;
		NullCheck(L_121);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_121, L_122, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = __this->___BG_113;
		NullCheck(L_123);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_124;
		L_124 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_123, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_125;
		memset((&L_125), 0, sizeof(L_125));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_125), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_124);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_124, L_125);
		// BG.GetComponent<Image>().sprite = f8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->___BG_113;
		NullCheck(L_126);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_127;
		L_127 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_126, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_128 = __this->___f8_85;
		NullCheck(L_127);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_127, L_128, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_129 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_130;
		memset((&L_130), 0, sizeof(L_130));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_130), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_129);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_129, L_130);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_131 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_132;
		memset((&L_132), 0, sizeof(L_132));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_132), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_131);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_131, L_132);
		goto IL_0e76;
	}

IL_063a:
	{
		// else if(level == 9)
		int32_t L_133 = __this->___level_23;
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_06e6;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = __this->___BntClick_112;
		NullCheck(L_134);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_134, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Kletka;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135 = __this->___BntClick_112;
		NullCheck(L_135);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_136;
		L_136 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_135, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_137 = __this->___Kletka_72;
		NullCheck(L_136);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_136, L_137, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = __this->___BG_113;
		NullCheck(L_138);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_139;
		L_139 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_138, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_140;
		memset((&L_140), 0, sizeof(L_140));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_140), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_139);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_139, L_140);
		// BG.GetComponent<Image>().sprite = f9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___BG_113;
		NullCheck(L_141);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_142;
		L_142 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_141, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_143 = __this->___f9_86;
		NullCheck(L_142);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_142, L_143, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_144 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_145;
		memset((&L_145), 0, sizeof(L_145));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_145), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_144);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_144, L_145);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_146 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_147;
		memset((&L_147), 0, sizeof(L_147));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_147), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_146);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_146, L_147);
		goto IL_0e76;
	}

IL_06e6:
	{
		// else if(level == 10)
		int32_t L_148 = __this->___level_23;
		if ((!(((uint32_t)L_148) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0792;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = __this->___BntClick_112;
		NullCheck(L_149);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_149, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = ListD;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150 = __this->___BntClick_112;
		NullCheck(L_150);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151;
		L_151 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_150, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_152 = __this->___ListD_73;
		NullCheck(L_151);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_151, L_152, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = __this->___BG_113;
		NullCheck(L_153);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_154;
		L_154 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_153, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_155;
		memset((&L_155), 0, sizeof(L_155));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_155), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_154);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_154, L_155);
		// BG.GetComponent<Image>().sprite = f10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = __this->___BG_113;
		NullCheck(L_156);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_157;
		L_157 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_156, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_158 = __this->___f10_87;
		NullCheck(L_157);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_157, L_158, NULL);
		// ScoreText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_159 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_160;
		memset((&L_160), 0, sizeof(L_160));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_160), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_159);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_159, L_160);
		// AutoText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_161 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_162;
		memset((&L_162), 0, sizeof(L_162));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_162), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_161);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_161, L_162);
		goto IL_0e76;
	}

IL_0792:
	{
		// else if(level == 11)
		int32_t L_163 = __this->___level_23;
		if ((!(((uint32_t)L_163) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_083e;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164 = __this->___BntClick_112;
		NullCheck(L_164);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_164, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Tree;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_165 = __this->___BntClick_112;
		NullCheck(L_165);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_166;
		L_166 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_165, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_167 = __this->___Tree_74;
		NullCheck(L_166);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_166, L_167, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_168 = __this->___BG_113;
		NullCheck(L_168);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_169;
		L_169 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_168, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_170;
		memset((&L_170), 0, sizeof(L_170));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_170), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_169);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_169, L_170);
		// BG.GetComponent<Image>().sprite = f11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171 = __this->___BG_113;
		NullCheck(L_171);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_172;
		L_172 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_171, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_173 = __this->___f11_88;
		NullCheck(L_172);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_172, L_173, NULL);
		// ScoreText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_174 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_175;
		memset((&L_175), 0, sizeof(L_175));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_175), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_174);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_174, L_175);
		// AutoText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_176 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_177;
		memset((&L_177), 0, sizeof(L_177));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_177), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_176);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_176, L_177);
		goto IL_0e76;
	}

IL_083e:
	{
		// else if(level == 12)
		int32_t L_178 = __this->___level_23;
		if ((!(((uint32_t)L_178) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_08ea;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_179 = __this->___BntClick_112;
		NullCheck(L_179);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_179, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Forest;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_180 = __this->___BntClick_112;
		NullCheck(L_180);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_181;
		L_181 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_180, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_182 = __this->___Forest_75;
		NullCheck(L_181);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_181, L_182, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_183 = __this->___BG_113;
		NullCheck(L_183);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_184;
		L_184 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_183, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_185;
		memset((&L_185), 0, sizeof(L_185));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_185), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_184);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_184, L_185);
		// BG.GetComponent<Image>().sprite = f12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186 = __this->___BG_113;
		NullCheck(L_186);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_187;
		L_187 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_186, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_188 = __this->___f12_89;
		NullCheck(L_187);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_187, L_188, NULL);
		// ScoreText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_189 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_190;
		memset((&L_190), 0, sizeof(L_190));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_190), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_189);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_189, L_190);
		// AutoText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_191 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_192;
		memset((&L_192), 0, sizeof(L_192));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_192), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_191);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_191, L_192);
		goto IL_0e76;
	}

IL_08ea:
	{
		// else if(level == 13)
		int32_t L_193 = __this->___level_23;
		if ((!(((uint32_t)L_193) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_0996;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_194 = __this->___BntClick_112;
		NullCheck(L_194);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_194, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Ostrov;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195 = __this->___BntClick_112;
		NullCheck(L_195);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_196;
		L_196 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_195, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_197 = __this->___Ostrov_76;
		NullCheck(L_196);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_196, L_197, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_198 = __this->___BG_113;
		NullCheck(L_198);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_199;
		L_199 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_198, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_200;
		memset((&L_200), 0, sizeof(L_200));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_200), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_199);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_199, L_200);
		// BG.GetComponent<Image>().sprite = f13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = __this->___BG_113;
		NullCheck(L_201);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_202;
		L_202 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_201, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_203 = __this->___f13_90;
		NullCheck(L_202);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_202, L_203, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_204 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_205;
		memset((&L_205), 0, sizeof(L_205));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_205), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_204);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_204, L_205);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_206 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_207;
		memset((&L_207), 0, sizeof(L_207));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_207), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_206);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_206, L_207);
		goto IL_0e76;
	}

IL_0996:
	{
		// else if(level == 14)
		int32_t L_208 = __this->___level_23;
		if ((!(((uint32_t)L_208) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0a42;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_209 = __this->___BntClick_112;
		NullCheck(L_209);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_209, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Earth;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_210 = __this->___BntClick_112;
		NullCheck(L_210);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_211;
		L_211 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_210, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_212 = __this->___Earth_77;
		NullCheck(L_211);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_211, L_212, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_213 = __this->___BG_113;
		NullCheck(L_213);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_214;
		L_214 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_213, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_215;
		memset((&L_215), 0, sizeof(L_215));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_215), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_214);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_214, L_215);
		// BG.GetComponent<Image>().sprite = f14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_216 = __this->___BG_113;
		NullCheck(L_216);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_217;
		L_217 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_216, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_218 = __this->___f14_91;
		NullCheck(L_217);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_217, L_218, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_219 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_220;
		memset((&L_220), 0, sizeof(L_220));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_220), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_219);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_219, L_220);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_221 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_222;
		memset((&L_222), 0, sizeof(L_222));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_222), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_221);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_221, L_222);
		goto IL_0e76;
	}

IL_0a42:
	{
		// else if(level == 15)
		int32_t L_223 = __this->___level_23;
		if ((!(((uint32_t)L_223) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0aee;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_224 = __this->___BntClick_112;
		NullCheck(L_224);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_224, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = SystPl;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_225 = __this->___BntClick_112;
		NullCheck(L_225);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_226;
		L_226 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_225, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_227 = __this->___SystPl_78;
		NullCheck(L_226);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_226, L_227, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_228 = __this->___BG_113;
		NullCheck(L_228);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_229;
		L_229 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_228, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_230;
		memset((&L_230), 0, sizeof(L_230));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_230), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_229);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_229, L_230);
		// BG.GetComponent<Image>().sprite = f15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231 = __this->___BG_113;
		NullCheck(L_231);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_232;
		L_232 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_231, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_233 = __this->___f15_92;
		NullCheck(L_232);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_232, L_233, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_234 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_235;
		memset((&L_235), 0, sizeof(L_235));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_235), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_234);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_234, L_235);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_236 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_237;
		memset((&L_237), 0, sizeof(L_237));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_237), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_236);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_236, L_237);
		goto IL_0e76;
	}

IL_0aee:
	{
		// else if(level == 16)
		int32_t L_238 = __this->___level_23;
		if ((!(((uint32_t)L_238) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0b9a;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_239 = __this->___BntClick_112;
		NullCheck(L_239);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_239, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Sozvezdie;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_240 = __this->___BntClick_112;
		NullCheck(L_240);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_241;
		L_241 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_240, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_242 = __this->___Sozvezdie_79;
		NullCheck(L_241);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_241, L_242, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_243 = __this->___BG_113;
		NullCheck(L_243);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_244;
		L_244 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_243, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_245;
		memset((&L_245), 0, sizeof(L_245));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_245), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_244);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_244, L_245);
		// BG.GetComponent<Image>().sprite = f16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246 = __this->___BG_113;
		NullCheck(L_246);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_247;
		L_247 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_246, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_248 = __this->___f16_93;
		NullCheck(L_247);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_247, L_248, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_249 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_250;
		memset((&L_250), 0, sizeof(L_250));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_250), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_249);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_249, L_250);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_251 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_252;
		memset((&L_252), 0, sizeof(L_252));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_252), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_251);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_251, L_252);
		goto IL_0e76;
	}

IL_0b9a:
	{
		// else if(level == 17)
		int32_t L_253 = __this->___level_23;
		if ((!(((uint32_t)L_253) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0c30;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_254 = __this->___BntClick_112;
		NullCheck(L_254);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_254, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Galaxy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_255 = __this->___BntClick_112;
		NullCheck(L_255);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_256;
		L_256 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_255, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_257 = __this->___Galaxy_80;
		NullCheck(L_256);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_256, L_257, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_258 = __this->___BG_113;
		NullCheck(L_258);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_259;
		L_259 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_258, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_260;
		memset((&L_260), 0, sizeof(L_260));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_260), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_259);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_259, L_260);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_261 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_262;
		memset((&L_262), 0, sizeof(L_262));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_262), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_261);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_261, L_262);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_263 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_264;
		memset((&L_264), 0, sizeof(L_264));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_264), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_263);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_263, L_264);
		goto IL_0e76;
	}

IL_0c30:
	{
		// else if(level == 18)
		int32_t L_265 = __this->___level_23;
		if ((!(((uint32_t)L_265) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0cc6;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_266 = __this->___BntClick_112;
		NullCheck(L_266);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_266, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = GalaxyClass;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_267 = __this->___BntClick_112;
		NullCheck(L_267);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_268;
		L_268 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_267, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_269 = __this->___GalaxyClass_81;
		NullCheck(L_268);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_268, L_269, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_270 = __this->___BG_113;
		NullCheck(L_270);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_271;
		L_271 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_270, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_272;
		memset((&L_272), 0, sizeof(L_272));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_272), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_271);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_271, L_272);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_273 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_274;
		memset((&L_274), 0, sizeof(L_274));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_274), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_273);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_273, L_274);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_275 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_276;
		memset((&L_276), 0, sizeof(L_276));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_276), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_275);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_275, L_276);
		goto IL_0e76;
	}

IL_0cc6:
	{
		// else if(level == 19)
		int32_t L_277 = __this->___level_23;
		if ((!(((uint32_t)L_277) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0d5c;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_278 = __this->___BntClick_112;
		NullCheck(L_278);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_278, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = SuperGalaxyClass;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_279 = __this->___BntClick_112;
		NullCheck(L_279);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_280;
		L_280 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_279, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_281 = __this->___SuperGalaxyClass_82;
		NullCheck(L_280);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_280, L_281, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_282 = __this->___BG_113;
		NullCheck(L_282);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_283;
		L_283 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_282, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_284;
		memset((&L_284), 0, sizeof(L_284));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_284), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_283);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_283, L_284);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_285 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_286;
		memset((&L_286), 0, sizeof(L_286));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_286), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_285);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_285, L_286);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_287 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_288;
		memset((&L_288), 0, sizeof(L_288));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_288), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_287);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_287, L_288);
		goto IL_0e76;
	}

IL_0d5c:
	{
		// else if(level == 20)
		int32_t L_289 = __this->___level_23;
		if ((!(((uint32_t)L_289) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0df2;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_290 = __this->___BntClick_112;
		NullCheck(L_290);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_290, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Metagal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_291 = __this->___BntClick_112;
		NullCheck(L_291);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_292;
		L_292 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_291, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_293 = __this->___Metagal_83;
		NullCheck(L_292);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_292, L_293, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_294 = __this->___BG_113;
		NullCheck(L_294);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_295;
		L_295 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_294, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_296;
		memset((&L_296), 0, sizeof(L_296));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_296), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_295);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_295, L_296);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_297 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_298;
		memset((&L_298), 0, sizeof(L_298));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_298), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_297);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_297, L_298);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_299 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_300;
		memset((&L_300), 0, sizeof(L_300));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_300), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_299);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_299, L_300);
		goto IL_0e76;
	}

IL_0df2:
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_301 = __this->___BntClick_112;
		NullCheck(L_301);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_301, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Uny;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_302 = __this->___BntClick_112;
		NullCheck(L_302);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_303;
		L_303 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_302, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_304 = __this->___Uny_84;
		NullCheck(L_303);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_303, L_304, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_305 = __this->___BG_113;
		NullCheck(L_305);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_306;
		L_306 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_305, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_307;
		memset((&L_307), 0, sizeof(L_307));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_307), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_306);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_306, L_307);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_308 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_309;
		memset((&L_309), 0, sizeof(L_309));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_309), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_308);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_308, L_309);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_310 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_311;
		memset((&L_311), 0, sizeof(L_311));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_311), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_310);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_310, L_311);
	}

IL_0e76:
	{
		// for(int i = 0; i < 20; i++) // ?????????????? ???????
		V_0 = 0;
		goto IL_0f53;
	}

IL_0e7d:
	{
		// clickNum[i] = PlayerPrefs.GetInt($"clickNum{i}", clickNum[i]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_312 = __this->___clickNum_32;
		int32_t L_313 = V_0;
		int32_t L_314 = V_0;
		int32_t L_315 = L_314;
		RuntimeObject* L_316 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_315);
		String_t* L_317;
		L_317 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8, L_316, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_318 = __this->___clickNum_32;
		int32_t L_319 = V_0;
		NullCheck(L_318);
		int32_t L_320 = L_319;
		int32_t L_321 = (L_318)->GetAt(static_cast<il2cpp_array_size_t>(L_320));
		int32_t L_322;
		L_322 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_317, L_321, NULL);
		NullCheck(L_312);
		(L_312)->SetAt(static_cast<il2cpp_array_size_t>(L_313), (int32_t)L_322);
		// clickCost[i] = ulong.Parse(PlayerPrefs.GetString($"clickCost{i}"));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_323 = __this->___clickCost_20;
		int32_t L_324 = V_0;
		int32_t L_325 = V_0;
		int32_t L_326 = L_325;
		RuntimeObject* L_327 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_326);
		String_t* L_328;
		L_328 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A, L_327, NULL);
		String_t* L_329;
		L_329 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_328, NULL);
		uint64_t L_330;
		L_330 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_329, NULL);
		NullCheck(L_323);
		(L_323)->SetAt(static_cast<il2cpp_array_size_t>(L_324), (uint64_t)L_330);
		// NumClickTxt[i].text = clickNum[i] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_331 = __this->___NumClickTxt_41;
		int32_t L_332 = V_0;
		NullCheck(L_331);
		int32_t L_333 = L_332;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_334 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_333));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_335 = __this->___clickNum_32;
		int32_t L_336 = V_0;
		NullCheck(L_335);
		String_t* L_337;
		L_337 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_335)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_336))), NULL);
		String_t* L_338 = L_337;
		G_B45_0 = L_338;
		G_B45_1 = L_334;
		if (L_338)
		{
			G_B46_0 = L_338;
			G_B46_1 = L_334;
			goto IL_0ee6;
		}
	}
	{
		G_B46_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B46_1 = G_B45_1;
	}

IL_0ee6:
	{
		NullCheck(G_B46_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B46_1, G_B46_0);
		// CostClickTxt[i].text = $"????: {clickCost[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_339 = __this->___CostClickTxt_35;
		int32_t L_340 = V_0;
		NullCheck(L_339);
		int32_t L_341 = L_340;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_342 = (L_339)->GetAt(static_cast<il2cpp_array_size_t>(L_341));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_343 = __this->___clickCost_20;
		int32_t L_344 = V_0;
		NullCheck(L_343);
		String_t* L_345;
		L_345 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_343)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_344))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_346;
		L_346 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_345, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_342);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_342, L_346);
		// BonClickTxt[i].text = $"+{clickBonus[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_347 = __this->___BonClickTxt_38;
		int32_t L_348 = V_0;
		NullCheck(L_347);
		int32_t L_349 = L_348;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_350 = (L_347)->GetAt(static_cast<il2cpp_array_size_t>(L_349));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_351 = __this->___clickBonus_28;
		int32_t L_352 = V_0;
		NullCheck(L_351);
		String_t* L_353;
		L_353 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_351)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_352))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_354;
		L_354 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_353, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_350);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_350, L_354);
		// for(int i = 0; i < 20; i++) // ?????????????? ???????
		int32_t L_355 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_355, 1));
	}

IL_0f53:
	{
		// for(int i = 0; i < 20; i++) // ?????????????? ???????
		int32_t L_356 = V_0;
		if ((((int32_t)L_356) < ((int32_t)((int32_t)20))))
		{
			goto IL_0e7d;
		}
	}
	{
		// for(int i = 0; i < 30; i++)
		V_1 = 0;
		goto IL_1038;
	}

IL_0f62:
	{
		// autoNum[i] = PlayerPrefs.GetInt($"autoNum{i}", autoNum[i]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_357 = __this->___autoNum_33;
		int32_t L_358 = V_1;
		int32_t L_359 = V_1;
		int32_t L_360 = L_359;
		RuntimeObject* L_361 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_360);
		String_t* L_362;
		L_362 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856, L_361, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_363 = __this->___autoNum_33;
		int32_t L_364 = V_1;
		NullCheck(L_363);
		int32_t L_365 = L_364;
		int32_t L_366 = (L_363)->GetAt(static_cast<il2cpp_array_size_t>(L_365));
		int32_t L_367;
		L_367 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_362, L_366, NULL);
		NullCheck(L_357);
		(L_357)->SetAt(static_cast<il2cpp_array_size_t>(L_358), (int32_t)L_367);
		// autoCost[i] = ulong.Parse(PlayerPrefs.GetString($"autoCost{i}"));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_368 = __this->___autoCost_21;
		int32_t L_369 = V_1;
		int32_t L_370 = V_1;
		int32_t L_371 = L_370;
		RuntimeObject* L_372 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_371);
		String_t* L_373;
		L_373 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A, L_372, NULL);
		String_t* L_374;
		L_374 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_373, NULL);
		uint64_t L_375;
		L_375 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_374, NULL);
		NullCheck(L_368);
		(L_368)->SetAt(static_cast<il2cpp_array_size_t>(L_369), (uint64_t)L_375);
		// NumAutoTxt[i].text = autoNum[i] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_376 = __this->___NumAutoTxt_42;
		int32_t L_377 = V_1;
		NullCheck(L_376);
		int32_t L_378 = L_377;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_379 = (L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_380 = __this->___autoNum_33;
		int32_t L_381 = V_1;
		NullCheck(L_380);
		String_t* L_382;
		L_382 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_380)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_381))), NULL);
		String_t* L_383 = L_382;
		G_B50_0 = L_383;
		G_B50_1 = L_379;
		if (L_383)
		{
			G_B51_0 = L_383;
			G_B51_1 = L_379;
			goto IL_0fcb;
		}
	}
	{
		G_B51_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B51_1 = G_B50_1;
	}

IL_0fcb:
	{
		NullCheck(G_B51_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B51_1, G_B51_0);
		// CostAutoTxt[i].text = $"????: {autoCost[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_384 = __this->___CostAutoTxt_36;
		int32_t L_385 = V_1;
		NullCheck(L_384);
		int32_t L_386 = L_385;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_387 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_386));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_388 = __this->___autoCost_21;
		int32_t L_389 = V_1;
		NullCheck(L_388);
		String_t* L_390;
		L_390 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_388)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_389))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_391;
		L_391 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_390, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_387);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_387, L_391);
		// BonAutoTxt[i].text = $"+{autoBonus[i].ToString("#,#")} ??/???";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_392 = __this->___BonAutoTxt_39;
		int32_t L_393 = V_1;
		NullCheck(L_392);
		int32_t L_394 = L_393;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_395 = (L_392)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_396 = __this->___autoBonus_29;
		int32_t L_397 = V_1;
		NullCheck(L_396);
		String_t* L_398;
		L_398 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_396)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_397))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_399;
		L_399 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_398, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_395);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_395, L_399);
		// for(int i = 0; i < 30; i++)
		int32_t L_400 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_400, 1));
	}

IL_1038:
	{
		// for(int i = 0; i < 30; i++)
		int32_t L_401 = V_1;
		if ((((int32_t)L_401) < ((int32_t)((int32_t)30))))
		{
			goto IL_0f62;
		}
	}
	{
		// for(int i = 0; i < 10; i++)
		V_2 = 0;
		goto IL_111d;
	}

IL_1047:
	{
		// saveNum[i] = PlayerPrefs.GetInt($"saveNum{i}", saveNum[i]);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_402 = __this->___saveNum_34;
		int32_t L_403 = V_2;
		int32_t L_404 = V_2;
		int32_t L_405 = L_404;
		RuntimeObject* L_406 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_405);
		String_t* L_407;
		L_407 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D, L_406, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_408 = __this->___saveNum_34;
		int32_t L_409 = V_2;
		NullCheck(L_408);
		int32_t L_410 = L_409;
		int32_t L_411 = (L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		int32_t L_412;
		L_412 = PlayerPrefs_GetInt_mDCAA431AEC7CBAA6AF58857A8773E5B6B472285C(L_407, L_411, NULL);
		NullCheck(L_402);
		(L_402)->SetAt(static_cast<il2cpp_array_size_t>(L_403), (int32_t)L_412);
		// saveCost[i] = ulong.Parse(PlayerPrefs.GetString($"saveCost{i}"));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_413 = __this->___saveCost_22;
		int32_t L_414 = V_2;
		int32_t L_415 = V_2;
		int32_t L_416 = L_415;
		RuntimeObject* L_417 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_416);
		String_t* L_418;
		L_418 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F, L_417, NULL);
		String_t* L_419;
		L_419 = PlayerPrefs_GetString_mA00D069B851DAD77C64D641539889BFD58A8AA92(L_418, NULL);
		uint64_t L_420;
		L_420 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_419, NULL);
		NullCheck(L_413);
		(L_413)->SetAt(static_cast<il2cpp_array_size_t>(L_414), (uint64_t)L_420);
		// NumSaveTxt[i].text = saveNum[i] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_421 = __this->___NumSaveTxt_43;
		int32_t L_422 = V_2;
		NullCheck(L_421);
		int32_t L_423 = L_422;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_424 = (L_421)->GetAt(static_cast<il2cpp_array_size_t>(L_423));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_425 = __this->___saveNum_34;
		int32_t L_426 = V_2;
		NullCheck(L_425);
		String_t* L_427;
		L_427 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_425)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_426))), NULL);
		String_t* L_428 = L_427;
		G_B55_0 = L_428;
		G_B55_1 = L_424;
		if (L_428)
		{
			G_B56_0 = L_428;
			G_B56_1 = L_424;
			goto IL_10b0;
		}
	}
	{
		G_B56_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B56_1 = G_B55_1;
	}

IL_10b0:
	{
		NullCheck(G_B56_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B56_1, G_B56_0);
		// CostSaveTxt[i].text = $"????: {saveCost[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_429 = __this->___CostSaveTxt_37;
		int32_t L_430 = V_2;
		NullCheck(L_429);
		int32_t L_431 = L_430;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_432 = (L_429)->GetAt(static_cast<il2cpp_array_size_t>(L_431));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_433 = __this->___saveCost_22;
		int32_t L_434 = V_2;
		NullCheck(L_433);
		String_t* L_435;
		L_435 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_433)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_434))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_436;
		L_436 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_435, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_432);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_432, L_436);
		// BonSaveTxt[i].text = $"?? {saveBonus[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_437 = __this->___BonSaveTxt_40;
		int32_t L_438 = V_2;
		NullCheck(L_437);
		int32_t L_439 = L_438;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_440 = (L_437)->GetAt(static_cast<il2cpp_array_size_t>(L_439));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_441 = __this->___saveBonus_30;
		int32_t L_442 = V_2;
		NullCheck(L_441);
		String_t* L_443;
		L_443 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_441)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_442))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_444;
		L_444 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteralF305569E696DA1A722634AD5D453A2FBE67CC8BC, L_443, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_440);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_440, L_444);
		// for(int i = 0; i < 10; i++)
		int32_t L_445 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_445, 1));
	}

IL_111d:
	{
		// for(int i = 0; i < 10; i++)
		int32_t L_446 = V_2;
		if ((((int32_t)L_446) < ((int32_t)((int32_t)10))))
		{
			goto IL_1047;
		}
	}
	{
		// if (m == -1111111) // ??????????? ?????
		int32_t L_447 = __this->___m_15;
		if ((!(((uint32_t)L_447) == ((uint32_t)((int32_t)-1111111)))))
		{
			goto IL_11ca;
		}
	}
	{
		// Normal.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_448 = __this->___Normal_108;
		NullCheck(L_448);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_449;
		L_449 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_448, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_450;
		memset((&L_450), 0, sizeof(L_450));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_450), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_449);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_449, L_450);
		// Numbers.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_451 = __this->___Numbers_109;
		NullCheck(L_451);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_452;
		L_452 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_451, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_453;
		memset((&L_453), 0, sizeof(L_453));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_453), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_452);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_452, L_453);
		// Short.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_454 = __this->___Short_110;
		NullCheck(L_454);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_455;
		L_455 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_454, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_456;
		memset((&L_456), 0, sizeof(L_456));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_456), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_455);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_455, L_456);
		// Prefix.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_457 = __this->___Prefix_111;
		NullCheck(L_457);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_458;
		L_458 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_457, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_459;
		memset((&L_459), 0, sizeof(L_459));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_459), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_458);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_458, L_459);
		goto IL_13b4;
	}

IL_11ca:
	{
		// else if (m == 2222222) // ????? ???????
		int32_t L_460 = __this->___m_15;
		if ((!(((uint32_t)L_460) == ((uint32_t)((int32_t)2222222)))))
		{
			goto IL_126f;
		}
	}
	{
		// Normal.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_461 = __this->___Normal_108;
		NullCheck(L_461);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_462;
		L_462 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_461, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_463;
		memset((&L_463), 0, sizeof(L_463));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_463), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_462);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_462, L_463);
		// Numbers.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_464 = __this->___Numbers_109;
		NullCheck(L_464);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_465;
		L_465 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_464, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_466;
		memset((&L_466), 0, sizeof(L_466));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_466), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_465);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_465, L_466);
		// Short.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_467 = __this->___Short_110;
		NullCheck(L_467);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_468;
		L_468 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_467, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_469;
		memset((&L_469), 0, sizeof(L_469));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_469), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_468);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_468, L_469);
		// Prefix.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_470 = __this->___Prefix_111;
		NullCheck(L_470);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_471;
		L_471 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_470, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_472;
		memset((&L_472), 0, sizeof(L_472));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_472), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_471);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_471, L_472);
		goto IL_13b4;
	}

IL_126f:
	{
		// else if (m == -3333333) // ??????????? ?????
		int32_t L_473 = __this->___m_15;
		if ((!(((uint32_t)L_473) == ((uint32_t)((int32_t)-3333333)))))
		{
			goto IL_1314;
		}
	}
	{
		// Normal.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_474 = __this->___Normal_108;
		NullCheck(L_474);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_475;
		L_475 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_474, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_476;
		memset((&L_476), 0, sizeof(L_476));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_476), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_475);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_475, L_476);
		// Numbers.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_477 = __this->___Numbers_109;
		NullCheck(L_477);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_478;
		L_478 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_477, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_479;
		memset((&L_479), 0, sizeof(L_479));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_479), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_478);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_478, L_479);
		// Short.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_480 = __this->___Short_110;
		NullCheck(L_480);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_481;
		L_481 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_480, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_482;
		memset((&L_482), 0, sizeof(L_482));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_482), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_481);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_481, L_482);
		// Prefix.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_483 = __this->___Prefix_111;
		NullCheck(L_483);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_484;
		L_484 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_483, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_485;
		memset((&L_485), 0, sizeof(L_485));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_485), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_484);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_484, L_485);
		goto IL_13b4;
	}

IL_1314:
	{
		// else if (m == 4444444) // ????? ?????????
		int32_t L_486 = __this->___m_15;
		if ((!(((uint32_t)L_486) == ((uint32_t)((int32_t)4444444)))))
		{
			goto IL_13b4;
		}
	}
	{
		// Normal.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_487 = __this->___Normal_108;
		NullCheck(L_487);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_488;
		L_488 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_487, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_489;
		memset((&L_489), 0, sizeof(L_489));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_489), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_488);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_488, L_489);
		// Numbers.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_490 = __this->___Numbers_109;
		NullCheck(L_490);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_491;
		L_491 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_490, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_492;
		memset((&L_492), 0, sizeof(L_492));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_492), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_491);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_491, L_492);
		// Short.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_493 = __this->___Short_110;
		NullCheck(L_493);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_494;
		L_494 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_493, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_495;
		memset((&L_495), 0, sizeof(L_495));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_495), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_494);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_494, L_495);
		// Prefix.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_496 = __this->___Prefix_111;
		NullCheck(L_496);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_497;
		L_497 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_496, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_498;
		memset((&L_498), 0, sizeof(L_498));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_498), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_497);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_497, L_498);
	}

IL_13b4:
	{
		// Second = (int)(DateTime.Now - DateStart).TotalSeconds; // ?????? ? ????????? int
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_499;
		L_499 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_500 = __this->___DateStart_4;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_501;
		L_501 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_499, L_500, NULL);
		V_3 = L_501;
		double L_502;
		L_502 = TimeSpan_get_TotalSeconds_mED686E7CECE6A76A7DC38518698B9199DB8CDEA8((&V_3), NULL);
		__this->___Second_31 = il2cpp_codegen_cast_double_to_int<int32_t>(L_502);
		// SecondCount = (ulong)Second; // ?????? ? ????????? ulong
		int32_t L_503 = __this->___Second_31;
		__this->___SecondCount_27 = ((int64_t)L_503);
		// if ((SecondCount * auto)/100 > 0 && save > 0) // ????????? ????? 0 ??
		uint64_t L_504 = __this->___SecondCount_27;
		uint64_t L_505 = __this->___auto_8;
		if ((!(((uint64_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_504, (int64_t)L_505))/(uint64_t)(int64_t)((int64_t)((int32_t)100))))) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_1af0;
		}
	}
	{
		uint64_t L_506 = __this->___save_9;
		if ((!(((uint64_t)L_506) > ((uint64_t)((int64_t)0)))))
		{
			goto IL_1af0;
		}
	}
	{
		// SaveBonusPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_507 = __this->___SaveBonusPan_101;
		NullCheck(L_507);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_507, (bool)1, NULL);
		// if ((SecondCount * auto)/100 > save)
		uint64_t L_508 = __this->___SecondCount_27;
		uint64_t L_509 = __this->___auto_8;
		uint64_t L_510 = __this->___save_9;
		if ((!(((uint64_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_508, (int64_t)L_509))/(uint64_t)(int64_t)((int64_t)((int32_t)100))))) > ((uint64_t)L_510))))
		{
			goto IL_16b6;
		}
	}
	{
		// if (Second < 60) // seconds
		int32_t L_511 = __this->___Second_31;
		if ((((int32_t)L_511) >= ((int32_t)((int32_t)60))))
		{
			goto IL_146c;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second} ?\n\n????????\n{save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_512 = __this->___SaveBonusText_51;
		int32_t L_513 = __this->___Second_31;
		int32_t L_514 = L_513;
		RuntimeObject* L_515 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_514);
		uint64_t* L_516 = (&__this->___save_9);
		String_t* L_517;
		L_517 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_516, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_518;
		L_518 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral3C37EAACB1CBB8F4C383140DB5C4AF1B3CC5351A, L_515, L_517, NULL);
		NullCheck(L_512);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_512, L_518);
		goto IL_1985;
	}

IL_146c:
	{
		// else if (Second >= 60 & Second < 3600) // minutes
		int32_t L_519 = __this->___Second_31;
		int32_t L_520 = __this->___Second_31;
		if (!((int32_t)(((((int32_t)((((int32_t)L_519) < ((int32_t)((int32_t)60)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&((((int32_t)L_520) < ((int32_t)((int32_t)3600)))? 1 : 0))))
		{
			goto IL_14cf;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/60} ?, {Second%60} ?\n\n????????\n{save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_521 = __this->___SaveBonusText_51;
		int32_t L_522 = __this->___Second_31;
		int32_t L_523 = ((int32_t)(L_522/((int32_t)60)));
		RuntimeObject* L_524 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_523);
		int32_t L_525 = __this->___Second_31;
		int32_t L_526 = ((int32_t)(L_525%((int32_t)60)));
		RuntimeObject* L_527 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_526);
		uint64_t* L_528 = (&__this->___save_9);
		String_t* L_529;
		L_529 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_528, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_530;
		L_530 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral6C1656CCB2FDB97951B3373A82054C6A14B8B8A0, L_524, L_527, L_529, NULL);
		NullCheck(L_521);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_521, L_530);
		goto IL_1985;
	}

IL_14cf:
	{
		// else if (Second >= 3600 && Second < 86400) // hours
		int32_t L_531 = __this->___Second_31;
		if ((((int32_t)L_531) < ((int32_t)((int32_t)3600))))
		{
			goto IL_1555;
		}
	}
	{
		int32_t L_532 = __this->___Second_31;
		if ((((int32_t)L_532) >= ((int32_t)((int32_t)86400))))
		{
			goto IL_1555;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/3600} ?, {Second/60%60} ?, {Second%60} ?\n\n????????\n{save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_533 = __this->___SaveBonusText_51;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_534 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_535 = L_534;
		int32_t L_536 = __this->___Second_31;
		int32_t L_537 = ((int32_t)(L_536/((int32_t)3600)));
		RuntimeObject* L_538 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_537);
		NullCheck(L_535);
		ArrayElementTypeCheck (L_535, L_538);
		(L_535)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_538);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_539 = L_535;
		int32_t L_540 = __this->___Second_31;
		int32_t L_541 = ((int32_t)(((int32_t)(L_540/((int32_t)60)))%((int32_t)60)));
		RuntimeObject* L_542 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_541);
		NullCheck(L_539);
		ArrayElementTypeCheck (L_539, L_542);
		(L_539)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_542);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_543 = L_539;
		int32_t L_544 = __this->___Second_31;
		int32_t L_545 = ((int32_t)(L_544%((int32_t)60)));
		RuntimeObject* L_546 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_545);
		NullCheck(L_543);
		ArrayElementTypeCheck (L_543, L_546);
		(L_543)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_546);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_547 = L_543;
		uint64_t* L_548 = (&__this->___save_9);
		String_t* L_549;
		L_549 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_548, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		NullCheck(L_547);
		ArrayElementTypeCheck (L_547, L_549);
		(L_547)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_549);
		String_t* L_550;
		L_550 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralA021D13D3DA44FED3C88664FC0C7113C291A6F33, L_547, NULL);
		NullCheck(L_533);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_533, L_550);
		goto IL_1985;
	}

IL_1555:
	{
		// else if (Second >= 86400 && Second < 604800) //days
		int32_t L_551 = __this->___Second_31;
		if ((((int32_t)L_551) < ((int32_t)((int32_t)86400))))
		{
			goto IL_15f8;
		}
	}
	{
		int32_t L_552 = __this->___Second_31;
		if ((((int32_t)L_552) >= ((int32_t)((int32_t)604800))))
		{
			goto IL_15f8;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/86400} ?, {Second/3600%24} ?, {Second/60%60} ?, {Second%60} ?\n\n????????\n{save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_553 = __this->___SaveBonusText_51;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_554 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_555 = L_554;
		int32_t L_556 = __this->___Second_31;
		int32_t L_557 = ((int32_t)(L_556/((int32_t)86400)));
		RuntimeObject* L_558 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_557);
		NullCheck(L_555);
		ArrayElementTypeCheck (L_555, L_558);
		(L_555)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_558);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_559 = L_555;
		int32_t L_560 = __this->___Second_31;
		int32_t L_561 = ((int32_t)(((int32_t)(L_560/((int32_t)3600)))%((int32_t)24)));
		RuntimeObject* L_562 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_561);
		NullCheck(L_559);
		ArrayElementTypeCheck (L_559, L_562);
		(L_559)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_562);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_563 = L_559;
		int32_t L_564 = __this->___Second_31;
		int32_t L_565 = ((int32_t)(((int32_t)(L_564/((int32_t)60)))%((int32_t)60)));
		RuntimeObject* L_566 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_565);
		NullCheck(L_563);
		ArrayElementTypeCheck (L_563, L_566);
		(L_563)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_566);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_567 = L_563;
		int32_t L_568 = __this->___Second_31;
		int32_t L_569 = ((int32_t)(L_568%((int32_t)60)));
		RuntimeObject* L_570 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_569);
		NullCheck(L_567);
		ArrayElementTypeCheck (L_567, L_570);
		(L_567)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_570);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_571 = L_567;
		uint64_t* L_572 = (&__this->___save_9);
		String_t* L_573;
		L_573 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_572, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		NullCheck(L_571);
		ArrayElementTypeCheck (L_571, L_573);
		(L_571)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_573);
		String_t* L_574;
		L_574 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral411694A7FF63070F5B4B1BF5ECB0AC297EAB9150, L_571, NULL);
		NullCheck(L_553);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_553, L_574);
		goto IL_1985;
	}

IL_15f8:
	{
		// else if (Second >= 604800) // weeks
		int32_t L_575 = __this->___Second_31;
		if ((((int32_t)L_575) < ((int32_t)((int32_t)604800))))
		{
			goto IL_16a1;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/604800} ?, {Second/86400%7} ?, {Second/3600%24} ?, {Second/60%60} ?, {Second%60} ?\n\n????????\n{save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_576 = __this->___SaveBonusText_51;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_577 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_578 = L_577;
		int32_t L_579 = __this->___Second_31;
		int32_t L_580 = ((int32_t)(L_579/((int32_t)604800)));
		RuntimeObject* L_581 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_580);
		NullCheck(L_578);
		ArrayElementTypeCheck (L_578, L_581);
		(L_578)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_581);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_582 = L_578;
		int32_t L_583 = __this->___Second_31;
		int32_t L_584 = ((int32_t)(((int32_t)(L_583/((int32_t)86400)))%7));
		RuntimeObject* L_585 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_584);
		NullCheck(L_582);
		ArrayElementTypeCheck (L_582, L_585);
		(L_582)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_585);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_586 = L_582;
		int32_t L_587 = __this->___Second_31;
		int32_t L_588 = ((int32_t)(((int32_t)(L_587/((int32_t)3600)))%((int32_t)24)));
		RuntimeObject* L_589 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_588);
		NullCheck(L_586);
		ArrayElementTypeCheck (L_586, L_589);
		(L_586)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_589);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_590 = L_586;
		int32_t L_591 = __this->___Second_31;
		int32_t L_592 = ((int32_t)(((int32_t)(L_591/((int32_t)60)))%((int32_t)60)));
		RuntimeObject* L_593 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_592);
		NullCheck(L_590);
		ArrayElementTypeCheck (L_590, L_593);
		(L_590)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_593);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_594 = L_590;
		int32_t L_595 = __this->___Second_31;
		int32_t L_596 = ((int32_t)(L_595%((int32_t)60)));
		RuntimeObject* L_597 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_596);
		NullCheck(L_594);
		ArrayElementTypeCheck (L_594, L_597);
		(L_594)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_597);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_598 = L_594;
		uint64_t* L_599 = (&__this->___save_9);
		String_t* L_600;
		L_600 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_599, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		NullCheck(L_598);
		ArrayElementTypeCheck (L_598, L_600);
		(L_598)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_600);
		String_t* L_601;
		L_601 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral53A6B9944B2B7F97F97F2DA55EDCEC18AF0580A4, L_598, NULL);
		NullCheck(L_576);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_576, L_601);
		goto IL_1985;
	}

IL_16a1:
	{
		// SaveBonusText.text = $"error";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_602 = __this->___SaveBonusText_51;
		NullCheck(L_602);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_602, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
		goto IL_1985;
	}

IL_16b6:
	{
		// if (Second < 60) // seconds
		int32_t L_603 = __this->___Second_31;
		if ((((int32_t)L_603) >= ((int32_t)((int32_t)60))))
		{
			goto IL_1704;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second} ?\n\n????????\n{((SecondCount * auto)/100).ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_604 = __this->___SaveBonusText_51;
		int32_t L_605 = __this->___Second_31;
		int32_t L_606 = L_605;
		RuntimeObject* L_607 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_606);
		uint64_t L_608 = __this->___SecondCount_27;
		uint64_t L_609 = __this->___auto_8;
		V_4 = ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_608, (int64_t)L_609))/(uint64_t)(int64_t)((int64_t)((int32_t)100))));
		String_t* L_610;
		L_610 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680((&V_4), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_611;
		L_611 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral3C37EAACB1CBB8F4C383140DB5C4AF1B3CC5351A, L_607, L_610, NULL);
		NullCheck(L_604);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_604, L_611);
		goto IL_1985;
	}

IL_1704:
	{
		// else if (Second >= 60 & Second < 3600) // minutes
		int32_t L_612 = __this->___Second_31;
		int32_t L_613 = __this->___Second_31;
		if (!((int32_t)(((((int32_t)((((int32_t)L_612) < ((int32_t)((int32_t)60)))? 1 : 0)) == ((int32_t)0))? 1 : 0)&((((int32_t)L_613) < ((int32_t)((int32_t)3600)))? 1 : 0))))
		{
			goto IL_1776;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/60} ?, {Second%60} ?\n\n????????\n{((SecondCount * auto)/100).ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_614 = __this->___SaveBonusText_51;
		int32_t L_615 = __this->___Second_31;
		int32_t L_616 = ((int32_t)(L_615/((int32_t)60)));
		RuntimeObject* L_617 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_616);
		int32_t L_618 = __this->___Second_31;
		int32_t L_619 = ((int32_t)(L_618%((int32_t)60)));
		RuntimeObject* L_620 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_619);
		uint64_t L_621 = __this->___SecondCount_27;
		uint64_t L_622 = __this->___auto_8;
		V_4 = ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_621, (int64_t)L_622))/(uint64_t)(int64_t)((int64_t)((int32_t)100))));
		String_t* L_623;
		L_623 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680((&V_4), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_624;
		L_624 = String_Format_m76BF8F3A6AD789E38B708848A2688D400AAC250A(_stringLiteral6C1656CCB2FDB97951B3373A82054C6A14B8B8A0, L_617, L_620, L_623, NULL);
		NullCheck(L_614);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_614, L_624);
		goto IL_1985;
	}

IL_1776:
	{
		// else if (Second >= 3600 && Second < 86400) // hours
		int32_t L_625 = __this->___Second_31;
		if ((((int32_t)L_625) < ((int32_t)((int32_t)3600))))
		{
			goto IL_180e;
		}
	}
	{
		int32_t L_626 = __this->___Second_31;
		if ((((int32_t)L_626) >= ((int32_t)((int32_t)86400))))
		{
			goto IL_180e;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/3600} ?, {Second/60%60} ?, {Second%60} ?\n\n????????\n{((SecondCount * auto)/100).ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_627 = __this->___SaveBonusText_51;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_628 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)4);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_629 = L_628;
		int32_t L_630 = __this->___Second_31;
		int32_t L_631 = ((int32_t)(L_630/((int32_t)3600)));
		RuntimeObject* L_632 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_631);
		NullCheck(L_629);
		ArrayElementTypeCheck (L_629, L_632);
		(L_629)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_632);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_633 = L_629;
		int32_t L_634 = __this->___Second_31;
		int32_t L_635 = ((int32_t)(((int32_t)(L_634/((int32_t)60)))%((int32_t)60)));
		RuntimeObject* L_636 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_635);
		NullCheck(L_633);
		ArrayElementTypeCheck (L_633, L_636);
		(L_633)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_636);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_637 = L_633;
		int32_t L_638 = __this->___Second_31;
		int32_t L_639 = ((int32_t)(L_638%((int32_t)60)));
		RuntimeObject* L_640 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_639);
		NullCheck(L_637);
		ArrayElementTypeCheck (L_637, L_640);
		(L_637)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_640);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_641 = L_637;
		uint64_t L_642 = __this->___SecondCount_27;
		uint64_t L_643 = __this->___auto_8;
		V_4 = ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_642, (int64_t)L_643))/(uint64_t)(int64_t)((int64_t)((int32_t)100))));
		String_t* L_644;
		L_644 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680((&V_4), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		NullCheck(L_641);
		ArrayElementTypeCheck (L_641, L_644);
		(L_641)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_644);
		String_t* L_645;
		L_645 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteralA021D13D3DA44FED3C88664FC0C7113C291A6F33, L_641, NULL);
		NullCheck(L_627);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_627, L_645);
		goto IL_1985;
	}

IL_180e:
	{
		// else if (Second >= 86400 && Second < 604800) //days
		int32_t L_646 = __this->___Second_31;
		if ((((int32_t)L_646) < ((int32_t)((int32_t)86400))))
		{
			goto IL_18c0;
		}
	}
	{
		int32_t L_647 = __this->___Second_31;
		if ((((int32_t)L_647) >= ((int32_t)((int32_t)604800))))
		{
			goto IL_18c0;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/86400} ?, {Second/3600%24} ?, {Second/60%60} ?, {Second%60} ?\n\n????????\n{((SecondCount * auto)/100).ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_648 = __this->___SaveBonusText_51;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_649 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)5);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_650 = L_649;
		int32_t L_651 = __this->___Second_31;
		int32_t L_652 = ((int32_t)(L_651/((int32_t)86400)));
		RuntimeObject* L_653 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_652);
		NullCheck(L_650);
		ArrayElementTypeCheck (L_650, L_653);
		(L_650)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_653);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_654 = L_650;
		int32_t L_655 = __this->___Second_31;
		int32_t L_656 = ((int32_t)(((int32_t)(L_655/((int32_t)3600)))%((int32_t)24)));
		RuntimeObject* L_657 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_656);
		NullCheck(L_654);
		ArrayElementTypeCheck (L_654, L_657);
		(L_654)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_657);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_658 = L_654;
		int32_t L_659 = __this->___Second_31;
		int32_t L_660 = ((int32_t)(((int32_t)(L_659/((int32_t)60)))%((int32_t)60)));
		RuntimeObject* L_661 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_660);
		NullCheck(L_658);
		ArrayElementTypeCheck (L_658, L_661);
		(L_658)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_661);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_662 = L_658;
		int32_t L_663 = __this->___Second_31;
		int32_t L_664 = ((int32_t)(L_663%((int32_t)60)));
		RuntimeObject* L_665 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_664);
		NullCheck(L_662);
		ArrayElementTypeCheck (L_662, L_665);
		(L_662)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_665);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_666 = L_662;
		uint64_t L_667 = __this->___SecondCount_27;
		uint64_t L_668 = __this->___auto_8;
		V_4 = ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_667, (int64_t)L_668))/(uint64_t)(int64_t)((int64_t)((int32_t)100))));
		String_t* L_669;
		L_669 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680((&V_4), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		NullCheck(L_666);
		ArrayElementTypeCheck (L_666, L_669);
		(L_666)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_669);
		String_t* L_670;
		L_670 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral411694A7FF63070F5B4B1BF5ECB0AC297EAB9150, L_666, NULL);
		NullCheck(L_648);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_648, L_670);
		goto IL_1985;
	}

IL_18c0:
	{
		// else if (Second >= 604800) // weeks
		int32_t L_671 = __this->___Second_31;
		if ((((int32_t)L_671) < ((int32_t)((int32_t)604800))))
		{
			goto IL_1975;
		}
	}
	{
		// SaveBonusText.text = $"??? ?? ????\n{Second/604800} ?, {Second/86400%7} ?, {Second/3600%24} ?, {Second/60%60} ?, {Second%60} ?\n\n????????\n{((SecondCount * auto)/100).ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_672 = __this->___SaveBonusText_51;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_673 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918_il2cpp_TypeInfo_var, (uint32_t)6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_674 = L_673;
		int32_t L_675 = __this->___Second_31;
		int32_t L_676 = ((int32_t)(L_675/((int32_t)604800)));
		RuntimeObject* L_677 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_676);
		NullCheck(L_674);
		ArrayElementTypeCheck (L_674, L_677);
		(L_674)->SetAt(static_cast<il2cpp_array_size_t>(0), (RuntimeObject*)L_677);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_678 = L_674;
		int32_t L_679 = __this->___Second_31;
		int32_t L_680 = ((int32_t)(((int32_t)(L_679/((int32_t)86400)))%7));
		RuntimeObject* L_681 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_680);
		NullCheck(L_678);
		ArrayElementTypeCheck (L_678, L_681);
		(L_678)->SetAt(static_cast<il2cpp_array_size_t>(1), (RuntimeObject*)L_681);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_682 = L_678;
		int32_t L_683 = __this->___Second_31;
		int32_t L_684 = ((int32_t)(((int32_t)(L_683/((int32_t)3600)))%((int32_t)24)));
		RuntimeObject* L_685 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_684);
		NullCheck(L_682);
		ArrayElementTypeCheck (L_682, L_685);
		(L_682)->SetAt(static_cast<il2cpp_array_size_t>(2), (RuntimeObject*)L_685);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_686 = L_682;
		int32_t L_687 = __this->___Second_31;
		int32_t L_688 = ((int32_t)(((int32_t)(L_687/((int32_t)60)))%((int32_t)60)));
		RuntimeObject* L_689 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_688);
		NullCheck(L_686);
		ArrayElementTypeCheck (L_686, L_689);
		(L_686)->SetAt(static_cast<il2cpp_array_size_t>(3), (RuntimeObject*)L_689);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_690 = L_686;
		int32_t L_691 = __this->___Second_31;
		int32_t L_692 = ((int32_t)(L_691%((int32_t)60)));
		RuntimeObject* L_693 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_692);
		NullCheck(L_690);
		ArrayElementTypeCheck (L_690, L_693);
		(L_690)->SetAt(static_cast<il2cpp_array_size_t>(4), (RuntimeObject*)L_693);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_694 = L_690;
		uint64_t L_695 = __this->___SecondCount_27;
		uint64_t L_696 = __this->___auto_8;
		V_4 = ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_695, (int64_t)L_696))/(uint64_t)(int64_t)((int64_t)((int32_t)100))));
		String_t* L_697;
		L_697 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680((&V_4), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		NullCheck(L_694);
		ArrayElementTypeCheck (L_694, L_697);
		(L_694)->SetAt(static_cast<il2cpp_array_size_t>(5), (RuntimeObject*)L_697);
		String_t* L_698;
		L_698 = String_Format_m74FC0A1259DFA02F3DF6538FC7F3ACF3E1AF0C55(_stringLiteral53A6B9944B2B7F97F97F2DA55EDCEC18AF0580A4, L_694, NULL);
		NullCheck(L_672);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_672, L_698);
		goto IL_1985;
	}

IL_1975:
	{
		// SaveBonusText.text = $"error";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_699 = __this->___SaveBonusText_51;
		NullCheck(L_699);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_699, _stringLiteralFCA74A9060DDEE6A3ECAE73E6AB96086770BE7E2);
	}

IL_1985:
	{
		// if (click == 0)
		uint64_t L_700 = __this->___click_7;
		if (L_700)
		{
			goto IL_19af;
		}
	}
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n   {click} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_701 = __this->___BonClickInfoTxt_44;
		uint64_t L_702 = __this->___click_7;
		uint64_t L_703 = L_702;
		RuntimeObject* L_704 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_703);
		String_t* L_705;
		L_705 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4B0C1740168CD2AE18D736B3412367133FBCA2D5, L_704, NULL);
		NullCheck(L_701);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_701, L_705);
		goto IL_19d9;
	}

IL_19af:
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n   {click.ToString("#,#")} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_706 = __this->___BonClickInfoTxt_44;
		uint64_t* L_707 = (&__this->___click_7);
		String_t* L_708;
		L_708 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_707, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_709;
		L_709 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30, L_708, _stringLiteral1851192C259F051163EB84CECF68769882CE93E3, NULL);
		NullCheck(L_706);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_706, L_709);
	}

IL_19d9:
	{
		// if (auto == 0)
		uint64_t L_710 = __this->___auto_8;
		if (L_710)
		{
			goto IL_1a03;
		}
	}
	{
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_711 = __this->___BonAutoInfoTxt_45;
		uint64_t L_712 = __this->___auto_8;
		uint64_t L_713 = L_712;
		RuntimeObject* L_714 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_713);
		String_t* L_715;
		L_715 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3, L_714, NULL);
		NullCheck(L_711);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_711, L_715);
		goto IL_1a2d;
	}

IL_1a03:
	{
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto.ToString("#,#")} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_716 = __this->___BonAutoInfoTxt_45;
		uint64_t* L_717 = (&__this->___auto_8);
		String_t* L_718;
		L_718 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_717, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_719;
		L_719 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4E1BD4F36EFE8F1D380E33A04E58A99C624AB7FE, L_718, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_716);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_716, L_719);
	}

IL_1a2d:
	{
		// if (save == 0)
		uint64_t L_720 = __this->___save_9;
		if (L_720)
		{
			goto IL_1a57;
		}
	}
	{
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_721 = __this->___BonSaveInfoTxt_46;
		uint64_t L_722 = __this->___save_9;
		uint64_t L_723 = L_722;
		RuntimeObject* L_724 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_723);
		String_t* L_725;
		L_725 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A, L_724, NULL);
		NullCheck(L_721);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_721, L_725);
		goto IL_1a81;
	}

IL_1a57:
	{
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_726 = __this->___BonSaveInfoTxt_46;
		uint64_t* L_727 = (&__this->___save_9);
		String_t* L_728;
		L_728 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_727, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_729;
		L_729 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8F7A11CA93A69398B8DF5B980662D3BD1EA252DA, L_728, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_726);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_726, L_729);
	}

IL_1a81:
	{
		// if (isOnSound == 55555)
		int32_t L_730 = __this->___isOnSound_16;
		if ((!(((uint32_t)L_730) == ((uint32_t)((int32_t)55555)))))
		{
			goto IL_1ac0;
		}
	}
	{
		// AudioListener.volume = 1f;
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A((1.0f), NULL);
		// SoundBtn.GetComponent<Image>().sprite = SoundOn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_731 = __this->___SoundBtn_106;
		NullCheck(L_731);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_732;
		L_732 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_731, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_733 = __this->___SoundOn_94;
		NullCheck(L_732);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_732, L_733, NULL);
		// PlayerPrefs.SetInt("isOnSound", isOnSound);
		int32_t L_734 = __this->___isOnSound_16;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39, L_734, NULL);
		goto IL_1af0;
	}

IL_1ac0:
	{
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A((0.0f), NULL);
		// SoundBtn.GetComponent<Image>().sprite = SoundOff;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_735 = __this->___SoundBtn_106;
		NullCheck(L_735);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_736;
		L_736 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_735, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_737 = __this->___SoundOff_95;
		NullCheck(L_736);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_736, L_737, NULL);
		// PlayerPrefs.SetInt("isOnSound", isOnSound);
		int32_t L_738 = __this->___isOnSound_16;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39, L_738, NULL);
	}

IL_1af0:
	{
		// StartCoroutine(BonusPerSec()); // ?????? ????????
		RuntimeObject* L_739;
		L_739 = Game_BonusPerSec_m645C7BD1908A45E4A213D6F7CD2DF844D41264BC(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_740;
		L_740 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_739, NULL);
		// for(int i = 0; i < 15; i++)
		V_5 = 0;
		goto IL_1b2c;
	}

IL_1b02:
	{
		// clickTextPool[i] = Instantiate(ClickTextPref, ClickParent.transform).GetComponent<GameObject>();
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_741 = __this->___clickTextPool_119;
		int32_t L_742 = V_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_743 = __this->___ClickTextPref_118;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_744 = __this->___ClickParent_117;
		NullCheck(L_744);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_745;
		L_745 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_744, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_746;
		L_746 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934(L_743, L_745, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m002192C406088F7BA156339AAA9B1BB5D69BE934_RuntimeMethod_var);
		NullCheck(L_746);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_747;
		L_747 = GameObject_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m6FE43DE547C5CC60E2F4B58CCD40D79980F7593B(L_746, GameObject_GetComponent_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m6FE43DE547C5CC60E2F4B58CCD40D79980F7593B_RuntimeMethod_var);
		NullCheck(L_741);
		ArrayElementTypeCheck (L_741, L_747);
		(L_741)->SetAt(static_cast<il2cpp_array_size_t>(L_742), (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*)L_747);
		// for(int i = 0; i < 15; i++)
		int32_t L_748 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_748, 1));
	}

IL_1b2c:
	{
		// for(int i = 0; i < 15; i++)
		int32_t L_749 = V_5;
		if ((((int32_t)L_749) < ((int32_t)((int32_t)15))))
		{
			goto IL_1b02;
		}
	}
	{
		// if (click == 0)
		uint64_t L_750 = __this->___click_7;
		if (L_750)
		{
			goto IL_1b5c;
		}
	}
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n{click} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_751 = __this->___BonClickInfoTxt_44;
		uint64_t L_752 = __this->___click_7;
		uint64_t L_753 = L_752;
		RuntimeObject* L_754 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_753);
		String_t* L_755;
		L_755 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF237E3E2137214D2DCD672B17830C7BD484EC300, L_754, NULL);
		NullCheck(L_751);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_751, L_755);
		goto IL_1b86;
	}

IL_1b5c:
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n{click.ToString("#,#")} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_756 = __this->___BonClickInfoTxt_44;
		uint64_t* L_757 = (&__this->___click_7);
		String_t* L_758;
		L_758 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_757, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_759;
		L_759 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral48C8AF5DDB8DF9E190EA5F64BC4796F88868D94F, L_758, _stringLiteral1851192C259F051163EB84CECF68769882CE93E3, NULL);
		NullCheck(L_756);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_756, L_759);
	}

IL_1b86:
	{
		// if (auto == 0)
		uint64_t L_760 = __this->___auto_8;
		if (L_760)
		{
			goto IL_1bb0;
		}
	}
	{
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_761 = __this->___BonAutoInfoTxt_45;
		uint64_t L_762 = __this->___auto_8;
		uint64_t L_763 = L_762;
		RuntimeObject* L_764 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_763);
		String_t* L_765;
		L_765 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3, L_764, NULL);
		NullCheck(L_761);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_761, L_765);
		goto IL_1bda;
	}

IL_1bb0:
	{
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto.ToString("#,#")} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_766 = __this->___BonAutoInfoTxt_45;
		uint64_t* L_767 = (&__this->___auto_8);
		String_t* L_768;
		L_768 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_767, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_769;
		L_769 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4E1BD4F36EFE8F1D380E33A04E58A99C624AB7FE, L_768, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_766);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_766, L_769);
	}

IL_1bda:
	{
		// if (save == 0)
		uint64_t L_770 = __this->___save_9;
		if (L_770)
		{
			goto IL_1c03;
		}
	}
	{
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_771 = __this->___BonSaveInfoTxt_46;
		uint64_t L_772 = __this->___save_9;
		uint64_t L_773 = L_772;
		RuntimeObject* L_774 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_773);
		String_t* L_775;
		L_775 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A, L_774, NULL);
		NullCheck(L_771);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_771, L_775);
		return;
	}

IL_1c03:
	{
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_776 = __this->___BonSaveInfoTxt_46;
		uint64_t* L_777 = (&__this->___save_9);
		String_t* L_778;
		L_778 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_777, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_779;
		L_779 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8F7A11CA93A69398B8DF5B980662D3BD1EA252DA, L_778, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_776);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_776, L_779);
		// }
		return;
	}
}
// System.Void Game::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Update_mA1557241B926376A448DF2A57135D7BD10A5A51F (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral051C140891120F02BAEAC0C88CC12AF53721F422);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral13A054F24D0178D4183D041F89DB552550CBDBCC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15C674133104CE181B75BCEDC520570F6B112888);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1A3B3B4AD28EDA99F41A526B3EEE0C23BBDAE2E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral33F8F436438D6A19656C206E2FF7EE632138DF1D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C02054BA8BBA4799E11C65AB5E27C1AD4E6061B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3C782A4DB24AF63DB1C996E75D9AB20B89E0D945);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3EBC864538B3EE49D48CDF7ECF3D40B215E8BE7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4548B9EF4D7F6216951F1D3974F1472F9E7395F5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral613FE9AEE58FEBC3680422164108AE51C324F98A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral72CA01EBB410EDA47087CB9974B26A0E6D83A60B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EA0DDDB897BF6CF8C2DAB067C104BA75EE986FC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7EE97573D31038AE852F258E6C7E0301B938DBF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8ADB0C0FDE6170795E51343DF6EE573C23368E73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9E254AE5859C316C94993608646B710CD057FB06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC9FFD4148B1D04EE31D4FD78493F8FE959E3DF1A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEA17CBDD320B8C8D5C1CBAC70A6B3004D6126FCA);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A V_3;
	memset((&V_3), 0, sizeof(V_3));
	String_t* G_B32_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B32_1 = NULL;
	String_t* G_B31_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B31_1 = NULL;
	String_t* G_B37_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B37_1 = NULL;
	String_t* G_B36_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B36_1 = NULL;
	String_t* G_B42_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B42_1 = NULL;
	String_t* G_B41_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B41_1 = NULL;
	{
		// PlayerPrefs.SetString("score", score.ToString());    // ?????????? ?????
		uint64_t* L_0 = (&__this->___score_6);
		String_t* L_1;
		L_1 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_0, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralC0E2DE04AE40B3B0493F0F846F34B279C6D44FE9, L_1, NULL);
		// PlayerPrefs.SetString("AllEnergy", AllEnergy.ToString());
		uint64_t* L_2 = (&__this->___AllEnergy_10);
		String_t* L_3;
		L_3 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_2, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral13A054F24D0178D4183D041F89DB552550CBDBCC, L_3, NULL);
		// if (SaveBonusPan.activeSelf == false)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___SaveBonusPan_101;
		NullCheck(L_4);
		bool L_5;
		L_5 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_4, NULL);
		if (L_5)
		{
			goto IL_0057;
		}
	}
	{
		// DateStart = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_6;
		L_6 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		__this->___DateStart_4 = L_6;
		// PlayerPrefs.SetString("DateStart", DateStart.ToString());
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_7 = (&__this->___DateStart_4);
		String_t* L_8;
		L_8 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_7, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralD62A6E8579B9E226105A0C28889FEEC94AAE3E9A, L_8, NULL);
	}

IL_0057:
	{
		// for(int i = 0; i < 20; i++)
		V_0 = 0;
		goto IL_00e8;
	}

IL_005e:
	{
		// if (score < clickCost[i])
		uint64_t L_9 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___clickCost_20;
		int32_t L_11 = V_0;
		NullCheck(L_10);
		int32_t L_12 = L_11;
		int64_t L_13 = (int64_t)(L_10)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		if ((!(((uint64_t)L_9) < ((uint64_t)L_13))))
		{
			goto IL_0096;
		}
	}
	{
		// BonusButton[i].GetComponent<Image>().color = new Color(255,0,0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = __this->___BonusButton_61;
		int32_t L_15 = V_0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = (L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		NullCheck(L_17);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_18;
		L_18 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_17, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_19), (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		goto IL_00bc;
	}

IL_0096:
	{
		// BonusButton[i].GetComponent<Image>().color = new Color(0,255,0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_20 = __this->___BonusButton_61;
		int32_t L_21 = V_0;
		NullCheck(L_20);
		int32_t L_22 = L_21;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = (L_20)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_23);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_24;
		L_24 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_23, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_25;
		memset((&L_25), 0, sizeof(L_25));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_25), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_24);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_24, L_25);
	}

IL_00bc:
	{
		// if (clickCost[i] <= score && clickNum[i] == 0)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_26 = __this->___clickCost_20;
		int32_t L_27 = V_0;
		NullCheck(L_26);
		int32_t L_28 = L_27;
		int64_t L_29 = (int64_t)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_28));
		uint64_t L_30 = __this->___score_6;
		if ((!(((uint64_t)L_29) <= ((uint64_t)L_30))))
		{
			goto IL_00e4;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_31 = __this->___clickNum_32;
		int32_t L_32 = V_0;
		NullCheck(L_31);
		int32_t L_33 = L_32;
		int32_t L_34 = (L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		if (L_34)
		{
			goto IL_00e4;
		}
	}
	{
		// CountNewClick++;
		int32_t L_35 = __this->___CountNewClick_17;
		__this->___CountNewClick_17 = ((int32_t)il2cpp_codegen_add(L_35, 1));
	}

IL_00e4:
	{
		// for(int i = 0; i < 20; i++)
		int32_t L_36 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_36, 1));
	}

IL_00e8:
	{
		// for(int i = 0; i < 20; i++)
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) < ((int32_t)((int32_t)20))))
		{
			goto IL_005e;
		}
	}
	{
		// for(int i = 0; i < 30; i++)
		V_1 = 0;
		goto IL_0181;
	}

IL_00f7:
	{
		// if (score < autoCost[i])
		uint64_t L_38 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_39 = __this->___autoCost_21;
		int32_t L_40 = V_1;
		NullCheck(L_39);
		int32_t L_41 = L_40;
		int64_t L_42 = (int64_t)(L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_41));
		if ((!(((uint64_t)L_38) < ((uint64_t)L_42))))
		{
			goto IL_012f;
		}
	}
	{
		// AutoButton[i].GetComponent<Image>().color = new Color(255,0,0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_43 = __this->___AutoButton_62;
		int32_t L_44 = V_1;
		NullCheck(L_43);
		int32_t L_45 = L_44;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = (L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_47;
		L_47 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_46, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_48;
		memset((&L_48), 0, sizeof(L_48));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_48), (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_47);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_47, L_48);
		goto IL_0155;
	}

IL_012f:
	{
		// AutoButton[i].GetComponent<Image>().color = new Color(0,255,0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_49 = __this->___AutoButton_62;
		int32_t L_50 = V_1;
		NullCheck(L_49);
		int32_t L_51 = L_50;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_51));
		NullCheck(L_52);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_53;
		L_53 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_52, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_54;
		memset((&L_54), 0, sizeof(L_54));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_54), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_53);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_53, L_54);
	}

IL_0155:
	{
		// if (autoCost[i] <= score && autoNum[i] == 0)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_55 = __this->___autoCost_21;
		int32_t L_56 = V_1;
		NullCheck(L_55);
		int32_t L_57 = L_56;
		int64_t L_58 = (int64_t)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		uint64_t L_59 = __this->___score_6;
		if ((!(((uint64_t)L_58) <= ((uint64_t)L_59))))
		{
			goto IL_017d;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_60 = __this->___autoNum_33;
		int32_t L_61 = V_1;
		NullCheck(L_60);
		int32_t L_62 = L_61;
		int32_t L_63 = (L_60)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		if (L_63)
		{
			goto IL_017d;
		}
	}
	{
		// CountNewAuto++;
		int32_t L_64 = __this->___CountNewAuto_18;
		__this->___CountNewAuto_18 = ((int32_t)il2cpp_codegen_add(L_64, 1));
	}

IL_017d:
	{
		// for(int i = 0; i < 30; i++)
		int32_t L_65 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_65, 1));
	}

IL_0181:
	{
		// for(int i = 0; i < 30; i++)
		int32_t L_66 = V_1;
		if ((((int32_t)L_66) < ((int32_t)((int32_t)30))))
		{
			goto IL_00f7;
		}
	}
	{
		// for(int i = 0; i < 10; i++)
		V_2 = 0;
		goto IL_021a;
	}

IL_0190:
	{
		// if (score < saveCost[i])
		uint64_t L_67 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_68 = __this->___saveCost_22;
		int32_t L_69 = V_2;
		NullCheck(L_68);
		int32_t L_70 = L_69;
		int64_t L_71 = (int64_t)(L_68)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		if ((!(((uint64_t)L_67) < ((uint64_t)L_71))))
		{
			goto IL_01c8;
		}
	}
	{
		// SaveButton[i].GetComponent<Image>().color = new Color(255,0,0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_72 = __this->___SaveButton_63;
		int32_t L_73 = V_2;
		NullCheck(L_72);
		int32_t L_74 = L_73;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = (L_72)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_75);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76;
		L_76 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_75, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		memset((&L_77), 0, sizeof(L_77));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_77), (255.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_76);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_76, L_77);
		goto IL_01ee;
	}

IL_01c8:
	{
		// SaveButton[i].GetComponent<Image>().color = new Color(0,255,0);
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_78 = __this->___SaveButton_63;
		int32_t L_79 = V_2;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		NullCheck(L_81);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_82;
		L_82 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_81, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_83;
		memset((&L_83), 0, sizeof(L_83));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_83), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_82);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_82, L_83);
	}

IL_01ee:
	{
		// if (saveCost[i] <= score && saveNum[i] == 0)
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_84 = __this->___saveCost_22;
		int32_t L_85 = V_2;
		NullCheck(L_84);
		int32_t L_86 = L_85;
		int64_t L_87 = (int64_t)(L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		uint64_t L_88 = __this->___score_6;
		if ((!(((uint64_t)L_87) <= ((uint64_t)L_88))))
		{
			goto IL_0216;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_89 = __this->___saveNum_34;
		int32_t L_90 = V_2;
		NullCheck(L_89);
		int32_t L_91 = L_90;
		int32_t L_92 = (L_89)->GetAt(static_cast<il2cpp_array_size_t>(L_91));
		if (L_92)
		{
			goto IL_0216;
		}
	}
	{
		// CountNewSave++;
		int32_t L_93 = __this->___CountNewSave_19;
		__this->___CountNewSave_19 = ((int32_t)il2cpp_codegen_add(L_93, 1));
	}

IL_0216:
	{
		// for(int i = 0; i < 10; i++)
		int32_t L_94 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_94, 1));
	}

IL_021a:
	{
		// for(int i = 0; i < 10; i++)
		int32_t L_95 = V_2;
		if ((((int32_t)L_95) < ((int32_t)((int32_t)10))))
		{
			goto IL_0190;
		}
	}
	{
		// if (CountNewClick > 0)
		int32_t L_96 = __this->___CountNewClick_17;
		if ((((int32_t)L_96) <= ((int32_t)0)))
		{
			goto IL_0258;
		}
	}
	{
		// ClickMess.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___ClickMess_114;
		NullCheck(L_97);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_97, (bool)1, NULL);
		// ClickMessText.text = CountNewClick + "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_98 = __this->___ClickMessText_53;
		int32_t* L_99 = (&__this->___CountNewClick_17);
		String_t* L_100;
		L_100 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_99, NULL);
		String_t* L_101 = L_100;
		G_B31_0 = L_101;
		G_B31_1 = L_98;
		if (L_101)
		{
			G_B32_0 = L_101;
			G_B32_1 = L_98;
			goto IL_0251;
		}
	}
	{
		G_B32_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B32_1 = G_B31_1;
	}

IL_0251:
	{
		NullCheck(G_B32_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B32_1, G_B32_0);
		goto IL_0264;
	}

IL_0258:
	{
		// ClickMess.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___ClickMess_114;
		NullCheck(L_102);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_102, (bool)0, NULL);
	}

IL_0264:
	{
		// if (CountNewAuto > 0)
		int32_t L_103 = __this->___CountNewAuto_18;
		if ((((int32_t)L_103) <= ((int32_t)0)))
		{
			goto IL_029a;
		}
	}
	{
		// AutoMess.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = __this->___AutoMess_115;
		NullCheck(L_104);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_104, (bool)1, NULL);
		// AutoMessText.text = CountNewAuto + "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_105 = __this->___AutoMessText_54;
		int32_t* L_106 = (&__this->___CountNewAuto_18);
		String_t* L_107;
		L_107 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_106, NULL);
		String_t* L_108 = L_107;
		G_B36_0 = L_108;
		G_B36_1 = L_105;
		if (L_108)
		{
			G_B37_0 = L_108;
			G_B37_1 = L_105;
			goto IL_0293;
		}
	}
	{
		G_B37_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B37_1 = G_B36_1;
	}

IL_0293:
	{
		NullCheck(G_B37_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B37_1, G_B37_0);
		goto IL_02a6;
	}

IL_029a:
	{
		// AutoMess.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = __this->___AutoMess_115;
		NullCheck(L_109);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_109, (bool)0, NULL);
	}

IL_02a6:
	{
		// if (CountNewSave > 0)
		int32_t L_110 = __this->___CountNewSave_19;
		if ((((int32_t)L_110) <= ((int32_t)0)))
		{
			goto IL_02dc;
		}
	}
	{
		// SaveMess.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = __this->___SaveMess_116;
		NullCheck(L_111);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_111, (bool)1, NULL);
		// SaveMessText.text = CountNewSave + "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_112 = __this->___SaveMessText_55;
		int32_t* L_113 = (&__this->___CountNewSave_19);
		String_t* L_114;
		L_114 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_113, NULL);
		String_t* L_115 = L_114;
		G_B41_0 = L_115;
		G_B41_1 = L_112;
		if (L_115)
		{
			G_B42_0 = L_115;
			G_B42_1 = L_112;
			goto IL_02d5;
		}
	}
	{
		G_B42_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B42_1 = G_B41_1;
	}

IL_02d5:
	{
		NullCheck(G_B42_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B42_1, G_B42_0);
		goto IL_02e8;
	}

IL_02dc:
	{
		// SaveMess.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = __this->___SaveMess_116;
		NullCheck(L_116);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_116, (bool)0, NULL);
	}

IL_02e8:
	{
		// CountNewClick = 0;
		__this->___CountNewClick_17 = 0;
		// CountNewAuto = 0;
		__this->___CountNewAuto_18 = 0;
		// CountNewSave = 0;
		__this->___CountNewSave_19 = 0;
		// if (m == -1111111) // ??????????? ?????
		int32_t L_117 = __this->___m_15;
		if ((!(((uint32_t)L_117) == ((uint32_t)((int32_t)-1111111)))))
		{
			goto IL_0312;
		}
	}
	{
		// NormalMode();
		Game_NormalMode_m02C78FBC74003190BF3F2A9E14DA32310678681F(__this, NULL);
		goto IL_034f;
	}

IL_0312:
	{
		// else if (m == 2222222) // ????? ???????
		int32_t L_118 = __this->___m_15;
		if ((!(((uint32_t)L_118) == ((uint32_t)((int32_t)2222222)))))
		{
			goto IL_0327;
		}
	}
	{
		// StepMode();
		Game_StepMode_mE86A10082B61F5A23B8C7F45A4CF7AAA04115680(__this, NULL);
		goto IL_034f;
	}

IL_0327:
	{
		// else if (m == -3333333) // ??????????? ?????
		int32_t L_119 = __this->___m_15;
		if ((!(((uint32_t)L_119) == ((uint32_t)((int32_t)-3333333)))))
		{
			goto IL_033c;
		}
	}
	{
		// SokrMode();
		Game_SokrMode_mC43C861FAA978081B06C5692EA1962410D14A386(__this, NULL);
		goto IL_034f;
	}

IL_033c:
	{
		// else if (m == 4444444) // ????? ?????????
		int32_t L_120 = __this->___m_15;
		if ((!(((uint32_t)L_120) == ((uint32_t)((int32_t)4444444)))))
		{
			goto IL_034f;
		}
	}
	{
		// PrefixMode();
		Game_PrefixMode_m05AA1604778DD81E0D069B32F9802CA2C0DC1879(__this, NULL);
	}

IL_034f:
	{
		// InfoText.text = "";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_121 = __this->___InfoText_49;
		NullCheck(L_121);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_121, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// InfoText.text += $"\n???????:\n   {level}\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_122 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_123 = L_122;
		NullCheck(L_123);
		String_t* L_124;
		L_124 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_123);
		int32_t L_125 = __this->___level_23;
		int32_t L_126 = L_125;
		RuntimeObject* L_127 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_126);
		String_t* L_128;
		L_128 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3C782A4DB24AF63DB1C996E75D9AB20B89E0D945, L_127, NULL);
		String_t* L_129;
		L_129 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_124, L_128, NULL);
		NullCheck(L_123);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_123, L_129);
		// if (score == 0)
		uint64_t L_130 = __this->___score_6;
		if (L_130)
		{
			goto IL_03bf;
		}
	}
	{
		// InfoText.text += $"????????? ???????:\n   {score} ??\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_131 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_132 = L_131;
		NullCheck(L_132);
		String_t* L_133;
		L_133 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_132);
		uint64_t L_134 = __this->___score_6;
		uint64_t L_135 = L_134;
		RuntimeObject* L_136 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_135);
		String_t* L_137;
		L_137 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3EBC864538B3EE49D48CDF7ECF3D40B215E8BE7F, L_136, NULL);
		String_t* L_138;
		L_138 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_133, L_137, NULL);
		NullCheck(L_132);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_132, L_138);
		goto IL_03ef;
	}

IL_03bf:
	{
		// InfoText.text += $"????????? ???????:\n   {score.ToString("#,#")} ??\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_139 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_140 = L_139;
		NullCheck(L_140);
		String_t* L_141;
		L_141 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_140);
		uint64_t* L_142 = (&__this->___score_6);
		String_t* L_143;
		L_143 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_142, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_144;
		L_144 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_141, _stringLiteral613FE9AEE58FEBC3680422164108AE51C324F98A, L_143, _stringLiteral7EE97573D31038AE852F258E6C7E0301B938DBF6, NULL);
		NullCheck(L_140);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_140, L_144);
	}

IL_03ef:
	{
		// if (click == 0)
		uint64_t L_145 = __this->___click_7;
		if (L_145)
		{
			goto IL_0424;
		}
	}
	{
		// InfoText.text += $"????????? ???????:\n   {click} ??/????\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_146 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_147 = L_146;
		NullCheck(L_147);
		String_t* L_148;
		L_148 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_147);
		uint64_t L_149 = __this->___click_7;
		uint64_t L_150 = L_149;
		RuntimeObject* L_151 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_150);
		String_t* L_152;
		L_152 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralEA17CBDD320B8C8D5C1CBAC70A6B3004D6126FCA, L_151, NULL);
		String_t* L_153;
		L_153 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_148, L_152, NULL);
		NullCheck(L_147);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_147, L_153);
		goto IL_0454;
	}

IL_0424:
	{
		// InfoText.text += $"????????? ???????:\n   {click.ToString("#,#")} ??/????\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_154 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_155 = L_154;
		NullCheck(L_155);
		String_t* L_156;
		L_156 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_155);
		uint64_t* L_157 = (&__this->___click_7);
		String_t* L_158;
		L_158 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_157, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_159;
		L_159 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_156, _stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30, L_158, _stringLiteral33F8F436438D6A19656C206E2FF7EE632138DF1D, NULL);
		NullCheck(L_155);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_155, L_159);
	}

IL_0454:
	{
		// if (auto == 0)
		uint64_t L_160 = __this->___auto_8;
		if (L_160)
		{
			goto IL_0489;
		}
	}
	{
		// InfoText.text += $"?????????? ???????:\n   {auto} ??/???\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_161 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_162 = L_161;
		NullCheck(L_162);
		String_t* L_163;
		L_163 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_162);
		uint64_t L_164 = __this->___auto_8;
		uint64_t L_165 = L_164;
		RuntimeObject* L_166 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_165);
		String_t* L_167;
		L_167 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral72CA01EBB410EDA47087CB9974B26A0E6D83A60B, L_166, NULL);
		String_t* L_168;
		L_168 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_163, L_167, NULL);
		NullCheck(L_162);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_162, L_168);
		goto IL_04b9;
	}

IL_0489:
	{
		// InfoText.text += $"?????????? ???????:\n   {auto.ToString("#,#")} ??/???\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_169 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_170 = L_169;
		NullCheck(L_170);
		String_t* L_171;
		L_171 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_170);
		uint64_t* L_172 = (&__this->___auto_8);
		String_t* L_173;
		L_173 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_172, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_174;
		L_174 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_171, _stringLiteral9E254AE5859C316C94993608646B710CD057FB06, L_173, _stringLiteral1A3B3B4AD28EDA99F41A526B3EEE0C23BBDAE2E0, NULL);
		NullCheck(L_170);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_170, L_174);
	}

IL_04b9:
	{
		// if (save == 0)
		uint64_t L_175 = __this->___save_9;
		if (L_175)
		{
			goto IL_04ee;
		}
	}
	{
		// InfoText.text += $"?????????? ???????:\n   ?? {save} ??\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_176 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_177 = L_176;
		NullCheck(L_177);
		String_t* L_178;
		L_178 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_177);
		uint64_t L_179 = __this->___save_9;
		uint64_t L_180 = L_179;
		RuntimeObject* L_181 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_180);
		String_t* L_182;
		L_182 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral3C02054BA8BBA4799E11C65AB5E27C1AD4E6061B, L_181, NULL);
		String_t* L_183;
		L_183 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_178, L_182, NULL);
		NullCheck(L_177);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_177, L_183);
		goto IL_051e;
	}

IL_04ee:
	{
		// InfoText.text += $"?????????? ???????:\n   ?? {save.ToString("#,#")} ??\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_184 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_185 = L_184;
		NullCheck(L_185);
		String_t* L_186;
		L_186 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_185);
		uint64_t* L_187 = (&__this->___save_9);
		String_t* L_188;
		L_188 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_187, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_189;
		L_189 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_186, _stringLiteral15C674133104CE181B75BCEDC520570F6B112888, L_188, _stringLiteral7EE97573D31038AE852F258E6C7E0301B938DBF6, NULL);
		NullCheck(L_185);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_185, L_189);
	}

IL_051e:
	{
		// if (AllEnergy == 0)
		uint64_t L_190 = __this->___AllEnergy_10;
		if (L_190)
		{
			goto IL_0553;
		}
	}
	{
		// InfoText.text += $"????? ??????? ????????:\n   {AllEnergy} ??\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_191 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_192 = L_191;
		NullCheck(L_192);
		String_t* L_193;
		L_193 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_192);
		uint64_t L_194 = __this->___AllEnergy_10;
		uint64_t L_195 = L_194;
		RuntimeObject* L_196 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_195);
		String_t* L_197;
		L_197 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral7EA0DDDB897BF6CF8C2DAB067C104BA75EE986FC, L_196, NULL);
		String_t* L_198;
		L_198 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_193, L_197, NULL);
		NullCheck(L_192);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_192, L_198);
		goto IL_0583;
	}

IL_0553:
	{
		// InfoText.text += $"????? ??????? ????????:\n   {AllEnergy.ToString("#,#")} ??\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_199 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_200 = L_199;
		NullCheck(L_200);
		String_t* L_201;
		L_201 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_200);
		uint64_t* L_202 = (&__this->___AllEnergy_10);
		String_t* L_203;
		L_203 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_202, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_204;
		L_204 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_201, _stringLiteral4548B9EF4D7F6216951F1D3974F1472F9E7395F5, L_203, _stringLiteral7EE97573D31038AE852F258E6C7E0301B938DBF6, NULL);
		NullCheck(L_200);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_200, L_204);
	}

IL_0583:
	{
		// if (KolvoClick == 0)
		int32_t L_205 = __this->___KolvoClick_13;
		if (L_205)
		{
			goto IL_05b8;
		}
	}
	{
		// InfoText.text += $"????? ??????:\n   {KolvoClick}\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_206 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_207 = L_206;
		NullCheck(L_207);
		String_t* L_208;
		L_208 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_207);
		int32_t L_209 = __this->___KolvoClick_13;
		int32_t L_210 = L_209;
		RuntimeObject* L_211 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_210);
		String_t* L_212;
		L_212 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralC9FFD4148B1D04EE31D4FD78493F8FE959E3DF1A, L_211, NULL);
		String_t* L_213;
		L_213 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_208, L_212, NULL);
		NullCheck(L_207);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_207, L_213);
		goto IL_05e8;
	}

IL_05b8:
	{
		// InfoText.text += $"????? ??????:\n   {KolvoClick.ToString("#,#")}\n\n";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_214 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_215 = L_214;
		NullCheck(L_215);
		String_t* L_216;
		L_216 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_215);
		int32_t* L_217 = (&__this->___KolvoClick_13);
		String_t* L_218;
		L_218 = Int32_ToString_m967AECC237535C552A97A80C7875E31B98496CA9(L_217, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_219;
		L_219 = String_Concat_mF8B69BE42B5C5ABCAD3C176FBBE3010E0815D65D(L_216, _stringLiteral8ADB0C0FDE6170795E51343DF6EE573C23368E73, L_218, _stringLiteralC2ABD53443E87B1D4332B55DE89F3F4C04D71253, NULL);
		NullCheck(L_215);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_215, L_219);
	}

IL_05e8:
	{
		// InfoText.text += $"??????:\n {StartDateTime}\n  {(int)(DateTime.Now - StartDateTime).TotalDays} ???? ?????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_220 = __this->___InfoText_49;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_221 = L_220;
		NullCheck(L_221);
		String_t* L_222;
		L_222 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_221);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_223 = __this->___StartDateTime_5;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_224 = L_223;
		RuntimeObject* L_225 = Box(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var, &L_224);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_226;
		L_226 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_227 = __this->___StartDateTime_5;
		TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A L_228;
		L_228 = DateTime_op_Subtraction_m41335EF0E6DCD52B23C64916CB973A0B4A9E0387(L_226, L_227, NULL);
		V_3 = L_228;
		double L_229;
		L_229 = TimeSpan_get_TotalDays_m7B3557D0DD79E39DFC6C08BAC756B1B5DE2D4108((&V_3), NULL);
		int32_t L_230 = il2cpp_codegen_cast_double_to_int<int32_t>(L_229);
		RuntimeObject* L_231 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_230);
		String_t* L_232;
		L_232 = String_Format_m9499958F4B0BB6089C75760AB647AB3CA4D55806(_stringLiteral051C140891120F02BAEAC0C88CC12AF53721F422, L_225, L_231, NULL);
		String_t* L_233;
		L_233 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_222, L_232, NULL);
		NullCheck(L_221);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_221, L_233);
		// }
		return;
	}
}
// System.Void Game::GetSaveScore()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_GetSaveScore_m9CADA777E074A20C7223BC461C5EF25AB70A6A41 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// if((SecondCount * auto)/100 > save)
		uint64_t L_0 = __this->___SecondCount_27;
		uint64_t L_1 = __this->___auto_8;
		uint64_t L_2 = __this->___save_9;
		if ((!(((uint64_t)((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_0, (int64_t)L_1))/(uint64_t)(int64_t)((int64_t)((int32_t)100))))) > ((uint64_t)L_2))))
		{
			goto IL_0041;
		}
	}
	{
		// score += save;
		uint64_t L_3 = __this->___score_6;
		uint64_t L_4 = __this->___save_9;
		__this->___score_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_3, (int64_t)L_4));
		// AllEnergy += save;
		uint64_t L_5 = __this->___AllEnergy_10;
		uint64_t L_6 = __this->___save_9;
		__this->___AllEnergy_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_5, (int64_t)L_6));
		goto IL_007d;
	}

IL_0041:
	{
		// score += (SecondCount * auto)/100;
		uint64_t L_7 = __this->___score_6;
		uint64_t L_8 = __this->___SecondCount_27;
		uint64_t L_9 = __this->___auto_8;
		__this->___score_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_8, (int64_t)L_9))/(uint64_t)(int64_t)((int64_t)((int32_t)100))))));
		// AllEnergy += (SecondCount * auto)/100;
		uint64_t L_10 = __this->___AllEnergy_10;
		uint64_t L_11 = __this->___SecondCount_27;
		uint64_t L_12 = __this->___auto_8;
		__this->___AllEnergy_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_10, ((int64_t)((uint64_t)(int64_t)((int64_t)il2cpp_codegen_multiply((int64_t)L_11, (int64_t)L_12))/(uint64_t)(int64_t)((int64_t)((int32_t)100))))));
	}

IL_007d:
	{
		// SaveBonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___SaveBonusPan_101;
		NullCheck(L_13);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_13, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Game::OnClickBtn()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnClickBtn_m89916DD41E9A471E56C94C4AFEE12F5797C8BD8F (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// score += click;
		uint64_t L_0 = __this->___score_6;
		uint64_t L_1 = __this->___click_7;
		__this->___score_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_0, (int64_t)L_1));
		// AllEnergy += click;
		uint64_t L_2 = __this->___AllEnergy_10;
		uint64_t L_3 = __this->___click_7;
		__this->___AllEnergy_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_2, (int64_t)L_3));
		// KolvoClick++;
		int32_t L_4 = __this->___KolvoClick_13;
		__this->___KolvoClick_13 = ((int32_t)il2cpp_codegen_add(L_4, 1));
		// PlayerPrefs.SetInt("KolvoClick", KolvoClick);
		int32_t L_5 = __this->___KolvoClick_13;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA, L_5, NULL);
		// }
		return;
	}
}
// System.Void Game::ActiveMessBox()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ActiveMessBox_m876E047F04BC0BC61C4C9479C531C4E7BE46172B (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// MessBox.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MessBox_107;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Game::Restart(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Restart_m95C2D42DFD404ACFCEAFD96AE747A76FDC3B9367 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, bool ___flag0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA6888CB975ED67CB1ADCED32B8DDF9FDA802E3D3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF237E3E2137214D2DCD672B17830C7BD484EC300);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	String_t* G_B4_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B4_1 = NULL;
	String_t* G_B3_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B3_1 = NULL;
	String_t* G_B9_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B9_1 = NULL;
	String_t* G_B8_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B8_1 = NULL;
	String_t* G_B14_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B14_1 = NULL;
	String_t* G_B13_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B13_1 = NULL;
	{
		// if (flag == true)
		bool L_0 = ___flag0;
		if (!L_0)
		{
			goto IL_0405;
		}
	}
	{
		// StartDateTime = DateTime.Now;
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		__this->___StartDateTime_5 = L_1;
		// PlayerPrefs.SetString("StartDateTime", StartDateTime.ToString());
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* L_2 = (&__this->___StartDateTime_5);
		String_t* L_3;
		L_3 = DateTime_ToString_m447C83E1F8FFFFF4D20C0F7D5C18DEB160F9833A(L_2, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralA6888CB975ED67CB1ADCED32B8DDF9FDA802E3D3, L_3, NULL);
		// score = 50;
		__this->___score_6 = ((int64_t)((int32_t)50));
		// AllEnergy = 0;
		__this->___AllEnergy_10 = ((int64_t)0);
		// click = 0;
		__this->___click_7 = ((int64_t)0);
		// PlayerPrefs.SetString("click", click.ToString());
		uint64_t* L_4 = (&__this->___click_7);
		String_t* L_5;
		L_5 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_4, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, L_5, NULL);
		// auto = 0;
		__this->___auto_8 = ((int64_t)0);
		// PlayerPrefs.SetString("auto", auto.ToString());
		uint64_t* L_6 = (&__this->___auto_8);
		String_t* L_7;
		L_7 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_6, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F, L_7, NULL);
		// save = 0;
		__this->___save_9 = ((int64_t)0);
		// PlayerPrefs.SetString("save", save.ToString());
		uint64_t* L_8 = (&__this->___save_9);
		String_t* L_9;
		L_9 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_8, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778, L_9, NULL);
		// KolvoClick = 0;
		__this->___KolvoClick_13 = 0;
		// PlayerPrefs.SetInt("KolvoClick", KolvoClick);
		int32_t L_10 = __this->___KolvoClick_13;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral1E13F47A852AAEC33AF6E70E721B10323F9812DA, L_10, NULL);
		// level = 0;
		__this->___level_23 = 0;
		// PlayerPrefs.SetInt("level", level);
		int32_t L_11 = __this->___level_23;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_11, NULL);
		// LevelText.text = level.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___LevelText_50;
		int32_t* L_13 = (&__this->___level_23);
		String_t* L_14;
		L_14 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_13, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
		// BntClick.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___BntClick_112;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)0, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___BG_113;
		NullCheck(L_16);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_17;
		L_17 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_16, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_18;
		memset((&L_18), 0, sizeof(L_18));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_18), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_17, L_18);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_19 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_20;
		memset((&L_20), 0, sizeof(L_20));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_20), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_19);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_19, L_20);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_22;
		memset((&L_22), 0, sizeof(L_22));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_22), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_21, L_22);
		// for(int i = 0; i < 20; i++) // ????? ????????
		V_0 = 0;
		goto IL_0200;
	}

IL_0147:
	{
		// clickCost[i] = clickCostStart[i];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___clickCost_20;
		int32_t L_24 = V_0;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_25 = __this->___clickCostStart_24;
		int32_t L_26 = V_0;
		NullCheck(L_25);
		int32_t L_27 = L_26;
		int64_t L_28 = (int64_t)(L_25)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		NullCheck(L_23);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(L_24), (uint64_t)L_28);
		// clickNum[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_29 = __this->___clickNum_32;
		int32_t L_30 = V_0;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(L_30), (int32_t)0);
		// PlayerPrefs.SetString($"clickCost{i}", clickCost[i].ToString());
		int32_t L_31 = V_0;
		int32_t L_32 = L_31;
		RuntimeObject* L_33 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A, L_33, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_35 = __this->___clickCost_20;
		int32_t L_36 = V_0;
		NullCheck(L_35);
		String_t* L_37;
		L_37 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_36))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_34, L_37, NULL);
		// PlayerPrefs.SetInt($"clickNum{i}", clickNum[i]);
		int32_t L_38 = V_0;
		int32_t L_39 = L_38;
		RuntimeObject* L_40 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_39);
		String_t* L_41;
		L_41 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8, L_40, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_42 = __this->___clickNum_32;
		int32_t L_43 = V_0;
		NullCheck(L_42);
		int32_t L_44 = L_43;
		int32_t L_45 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_44));
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_41, L_45, NULL);
		// NumClickTxt[i].text = clickNum[i] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_46 = __this->___NumClickTxt_41;
		int32_t L_47 = V_0;
		NullCheck(L_46);
		int32_t L_48 = L_47;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_49 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_48));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___clickNum_32;
		int32_t L_51 = V_0;
		NullCheck(L_50);
		String_t* L_52;
		L_52 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_50)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_51))), NULL);
		String_t* L_53 = L_52;
		G_B3_0 = L_53;
		G_B3_1 = L_49;
		if (L_53)
		{
			G_B4_0 = L_53;
			G_B4_1 = L_49;
			goto IL_01c5;
		}
	}
	{
		G_B4_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B4_1 = G_B3_1;
	}

IL_01c5:
	{
		NullCheck(G_B4_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B4_1, G_B4_0);
		// CostClickTxt[i].text = $"????: {clickCost[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_54 = __this->___CostClickTxt_35;
		int32_t L_55 = V_0;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_58 = __this->___clickCost_20;
		int32_t L_59 = V_0;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_61;
		L_61 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_60, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_57);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_57, L_61);
		// for(int i = 0; i < 20; i++) // ????? ????????
		int32_t L_62 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add(L_62, 1));
	}

IL_0200:
	{
		// for(int i = 0; i < 20; i++) // ????? ????????
		int32_t L_63 = V_0;
		if ((((int32_t)L_63) < ((int32_t)((int32_t)20))))
		{
			goto IL_0147;
		}
	}
	{
		// for(int i = 0; i < 30; i++)
		V_1 = 0;
		goto IL_02c8;
	}

IL_020f:
	{
		// autoCost[i] = autoCostStart[i];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_64 = __this->___autoCost_21;
		int32_t L_65 = V_1;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = __this->___autoCostStart_25;
		int32_t L_67 = V_1;
		NullCheck(L_66);
		int32_t L_68 = L_67;
		int64_t L_69 = (int64_t)(L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_68));
		NullCheck(L_64);
		(L_64)->SetAt(static_cast<il2cpp_array_size_t>(L_65), (uint64_t)L_69);
		// autoNum[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_70 = __this->___autoNum_33;
		int32_t L_71 = V_1;
		NullCheck(L_70);
		(L_70)->SetAt(static_cast<il2cpp_array_size_t>(L_71), (int32_t)0);
		// PlayerPrefs.SetString($"autoCost{i}", autoCost[i].ToString());
		int32_t L_72 = V_1;
		int32_t L_73 = L_72;
		RuntimeObject* L_74 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_73);
		String_t* L_75;
		L_75 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A, L_74, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_76 = __this->___autoCost_21;
		int32_t L_77 = V_1;
		NullCheck(L_76);
		String_t* L_78;
		L_78 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(((L_76)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_77))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_75, L_78, NULL);
		// PlayerPrefs.SetInt($"autoNum{i}", autoNum[i]);
		int32_t L_79 = V_1;
		int32_t L_80 = L_79;
		RuntimeObject* L_81 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_80);
		String_t* L_82;
		L_82 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856, L_81, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_83 = __this->___autoNum_33;
		int32_t L_84 = V_1;
		NullCheck(L_83);
		int32_t L_85 = L_84;
		int32_t L_86 = (L_83)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_82, L_86, NULL);
		// NumAutoTxt[i].text = autoNum[i] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_87 = __this->___NumAutoTxt_42;
		int32_t L_88 = V_1;
		NullCheck(L_87);
		int32_t L_89 = L_88;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_90 = (L_87)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_91 = __this->___autoNum_33;
		int32_t L_92 = V_1;
		NullCheck(L_91);
		String_t* L_93;
		L_93 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_91)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_92))), NULL);
		String_t* L_94 = L_93;
		G_B8_0 = L_94;
		G_B8_1 = L_90;
		if (L_94)
		{
			G_B9_0 = L_94;
			G_B9_1 = L_90;
			goto IL_028d;
		}
	}
	{
		G_B9_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B9_1 = G_B8_1;
	}

IL_028d:
	{
		NullCheck(G_B9_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B9_1, G_B9_0);
		// CostAutoTxt[i].text = $"????: {autoCost[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_95 = __this->___CostAutoTxt_36;
		int32_t L_96 = V_1;
		NullCheck(L_95);
		int32_t L_97 = L_96;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_98 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_97));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_99 = __this->___autoCost_21;
		int32_t L_100 = V_1;
		NullCheck(L_99);
		String_t* L_101;
		L_101 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_99)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_100))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_102;
		L_102 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_101, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_98);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_98, L_102);
		// for(int i = 0; i < 30; i++)
		int32_t L_103 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_103, 1));
	}

IL_02c8:
	{
		// for(int i = 0; i < 30; i++)
		int32_t L_104 = V_1;
		if ((((int32_t)L_104) < ((int32_t)((int32_t)30))))
		{
			goto IL_020f;
		}
	}
	{
		// for(int i = 0; i < 10; i++)
		V_2 = 0;
		goto IL_0390;
	}

IL_02d7:
	{
		// saveCost[i] = saveCostStart[i];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_105 = __this->___saveCost_22;
		int32_t L_106 = V_2;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_107 = __this->___saveCostStart_26;
		int32_t L_108 = V_2;
		NullCheck(L_107);
		int32_t L_109 = L_108;
		int64_t L_110 = (int64_t)(L_107)->GetAt(static_cast<il2cpp_array_size_t>(L_109));
		NullCheck(L_105);
		(L_105)->SetAt(static_cast<il2cpp_array_size_t>(L_106), (uint64_t)L_110);
		// saveNum[i] = 0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_111 = __this->___saveNum_34;
		int32_t L_112 = V_2;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (int32_t)0);
		// PlayerPrefs.SetString($"saveCost{i}", saveCost[i].ToString());
		int32_t L_113 = V_2;
		int32_t L_114 = L_113;
		RuntimeObject* L_115 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_114);
		String_t* L_116;
		L_116 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F, L_115, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_117 = __this->___saveCost_22;
		int32_t L_118 = V_2;
		NullCheck(L_117);
		String_t* L_119;
		L_119 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(((L_117)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_118))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_116, L_119, NULL);
		// PlayerPrefs.SetInt($"saveNum{i}", saveNum[i]);
		int32_t L_120 = V_2;
		int32_t L_121 = L_120;
		RuntimeObject* L_122 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_121);
		String_t* L_123;
		L_123 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D, L_122, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_124 = __this->___saveNum_34;
		int32_t L_125 = V_2;
		NullCheck(L_124);
		int32_t L_126 = L_125;
		int32_t L_127 = (L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_123, L_127, NULL);
		// NumSaveTxt[i].text = saveNum[i] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_128 = __this->___NumSaveTxt_43;
		int32_t L_129 = V_2;
		NullCheck(L_128);
		int32_t L_130 = L_129;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_131 = (L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_132 = __this->___saveNum_34;
		int32_t L_133 = V_2;
		NullCheck(L_132);
		String_t* L_134;
		L_134 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_132)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_133))), NULL);
		String_t* L_135 = L_134;
		G_B13_0 = L_135;
		G_B13_1 = L_131;
		if (L_135)
		{
			G_B14_0 = L_135;
			G_B14_1 = L_131;
			goto IL_0355;
		}
	}
	{
		G_B14_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B14_1 = G_B13_1;
	}

IL_0355:
	{
		NullCheck(G_B14_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B14_1, G_B14_0);
		// CostSaveTxt[i].text = $"????: {saveCost[i].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_136 = __this->___CostSaveTxt_37;
		int32_t L_137 = V_2;
		NullCheck(L_136);
		int32_t L_138 = L_137;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_139 = (L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_138));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_140 = __this->___saveCost_22;
		int32_t L_141 = V_2;
		NullCheck(L_140);
		String_t* L_142;
		L_142 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_140)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_141))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_143;
		L_143 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_142, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_139);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_139, L_143);
		// for(int i = 0; i < 10; i++)
		int32_t L_144 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_144, 1));
	}

IL_0390:
	{
		// for(int i = 0; i < 10; i++)
		int32_t L_145 = V_2;
		if ((((int32_t)L_145) < ((int32_t)((int32_t)10))))
		{
			goto IL_02d7;
		}
	}
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n{click} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_146 = __this->___BonClickInfoTxt_44;
		uint64_t L_147 = __this->___click_7;
		uint64_t L_148 = L_147;
		RuntimeObject* L_149 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_148);
		String_t* L_150;
		L_150 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF237E3E2137214D2DCD672B17830C7BD484EC300, L_149, NULL);
		NullCheck(L_146);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_146, L_150);
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_151 = __this->___BonAutoInfoTxt_45;
		uint64_t L_152 = __this->___auto_8;
		uint64_t L_153 = L_152;
		RuntimeObject* L_154 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_153);
		String_t* L_155;
		L_155 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3, L_154, NULL);
		NullCheck(L_151);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_151, L_155);
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_156 = __this->___BonSaveInfoTxt_46;
		uint64_t L_157 = __this->___save_9;
		uint64_t L_158 = L_157;
		RuntimeObject* L_159 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_158);
		String_t* L_160;
		L_160 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A, L_159, NULL);
		NullCheck(L_156);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_156, L_160);
		// MessBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_161 = __this->___MessBox_107;
		NullCheck(L_161);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_161, (bool)0, NULL);
		return;
	}

IL_0405:
	{
		// MessBox.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = __this->___MessBox_107;
		NullCheck(L_162);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_162, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Game::PlayAudio(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_PlayAudio_m0F3A72CFD81432FE1AD86E1CC7B01AE7BE0507B1 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* ___clip0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GetComponent<AudioSource>().PlayOneShot(clip);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0;
		L_0 = Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B(__this, Component_GetComponent_TisAudioSource_t871AC2272F896738252F04EE949AEF5B241D3299_m42DA4DEA19EB60D80CBED7413ADEB27FA033C77B_RuntimeMethod_var);
		AudioClip_t5D272C4EB4F2D3ED49F1C346DEA373CF6D585F20* L_1 = ___clip0;
		NullCheck(L_0);
		AudioSource_PlayOneShot_m098BCAE084AABB128BB19ED805D2D985E7B75112(L_0, L_1, NULL);
		// }
		return;
	}
}
// System.Void Game::OnPlayAudio()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnPlayAudio_mED7ED288EAA0127A7A0CEC1D08A6C80563E7850F (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (isOnSound == -55555)
		int32_t L_0 = __this->___isOnSound_16;
		if ((!(((uint32_t)L_0) == ((uint32_t)((int32_t)-55555)))))
		{
			goto IL_0049;
		}
	}
	{
		// AudioListener.volume = 1f;
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A((1.0f), NULL);
		// isOnSound = 55555;
		__this->___isOnSound_16 = ((int32_t)55555);
		// SoundBtn.GetComponent<Image>().sprite = SoundOn;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SoundBtn_106;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_1, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_3 = __this->___SoundOn_94;
		NullCheck(L_2);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_2, L_3, NULL);
		// PlayerPrefs.SetInt("isOnSound", isOnSound);
		int32_t L_4 = __this->___isOnSound_16;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39, L_4, NULL);
		return;
	}

IL_0049:
	{
		// AudioListener.volume = 0f;
		AudioListener_set_volume_mC13591F71DDD0B3A64E52E475260050E89F64C9A((0.0f), NULL);
		// isOnSound = -55555;
		__this->___isOnSound_16 = ((int32_t)-55555);
		// SoundBtn.GetComponent<Image>().sprite = SoundOff;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SoundBtn_106;
		NullCheck(L_5);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_6;
		L_6 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_5, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_7 = __this->___SoundOff_95;
		NullCheck(L_6);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_6, L_7, NULL);
		// PlayerPrefs.SetInt("isOnSound", isOnSound);
		int32_t L_8 = __this->___isOnSound_16;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral9151CFFC50B38BC9E75F0F015BBA2066B28A6A39, L_8, NULL);
		// }
		return;
	}
}
// System.Void Game::OnNormal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnNormal_m2289CAE6C1DEDB6098128734BF0FC53EEBD6D10C (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m = -1111111;
		__this->___m_15 = ((int32_t)-1111111);
		// PlayerPrefs.SetInt("m", m);
		int32_t L_0 = __this->___m_15;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_0, NULL);
		// Normal.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Normal_108;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_1, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// Numbers.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Numbers_109;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// Short.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Short_110;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_7, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// Prefix.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Prefix_111;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_10, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// }
		return;
	}
}
// System.Void Game::OnNumbers()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnNumbers_m2A62A8FCEC605C8221AF60FF6AE4AC2104763620 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m = 2222222;
		__this->___m_15 = ((int32_t)2222222);
		// PlayerPrefs.SetInt("m", m);
		int32_t L_0 = __this->___m_15;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_0, NULL);
		// Normal.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Normal_108;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_1, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// Numbers.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Numbers_109;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// Short.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Short_110;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_7, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// Prefix.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Prefix_111;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_10, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// }
		return;
	}
}
// System.Void Game::OnShort()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnShort_m3437CC9378F00B973B19FA2F4230FB68B84666A2 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m = -3333333;
		__this->___m_15 = ((int32_t)-3333333);
		// PlayerPrefs.SetInt("m", m);
		int32_t L_0 = __this->___m_15;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_0, NULL);
		// Normal.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Normal_108;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_1, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// Numbers.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Numbers_109;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// Short.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Short_110;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_7, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// Prefix.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Prefix_111;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_10, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// }
		return;
	}
}
// System.Void Game::OnPrefix()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnPrefix_m379A3087E2587AC03F4C90B6A145A822685B63E3 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302);
		s_Il2CppMethodInitialized = true;
	}
	{
		// m = 4444444;
		__this->___m_15 = ((int32_t)4444444);
		// PlayerPrefs.SetInt("m", m);
		int32_t L_0 = __this->___m_15;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteralC1771FD048FA0C5283A6D1085A6C3493F05C1302, L_0, NULL);
		// Normal.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___Normal_108;
		NullCheck(L_1);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_2;
		L_2 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_1, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		memset((&L_3), 0, sizeof(L_3));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_3), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_3);
		// Numbers.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___Numbers_109;
		NullCheck(L_4);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_5;
		L_5 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_4, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_6), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_5, L_6);
		// Short.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7 = __this->___Short_110;
		NullCheck(L_7);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_8;
		L_8 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_7, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		// Prefix.GetComponent<Image>().color = new Color(0,255,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = __this->___Prefix_111;
		NullCheck(L_10);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_11;
		L_11 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_10, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_12;
		memset((&L_12), 0, sizeof(L_12));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_12), (0.0f), (255.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_11, L_12);
		// }
		return;
	}
}
// System.Void Game::GetNewClick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_GetNewClick_m25440EE52B2FABA9DB6F5388FD24DD1614286CEA (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// NewClickPanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___NewClickPanel_102;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if (level == 0)
		int32_t L_1 = __this->___level_23;
		if (L_1)
		{
			goto IL_0087;
		}
	}
	{
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BG_113;
		NullCheck(L_2);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_3;
		L_3 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_2, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_4;
		memset((&L_4), 0, sizeof(L_4));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_4), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_3);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_3, L_4);
		// BntClick.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___BntClick_112;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		memset((&L_7), 0, sizeof(L_7));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_7), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_6, L_7);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_9;
		memset((&L_9), 0, sizeof(L_9));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_9), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_8);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_8, L_9);
		goto IL_0d81;
	}

IL_0087:
	{
		// else if(level == 1)
		int32_t L_10 = __this->___level_23;
		if ((!(((uint32_t)L_10) == ((uint32_t)1))))
		{
			goto IL_011c;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = __this->___BntClick_112;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = QuanSt;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___BntClick_112;
		NullCheck(L_12);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_13;
		L_13 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_12, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_14 = __this->___QuanSt_64;
		NullCheck(L_13);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_13, L_14, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___BG_113;
		NullCheck(L_15);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_16;
		L_16 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_15, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_17;
		memset((&L_17), 0, sizeof(L_17));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_17), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_16, L_17);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_19;
		memset((&L_19), 0, sizeof(L_19));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_19), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_18, L_19);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_21;
		memset((&L_21), 0, sizeof(L_21));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_21), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_20, L_21);
		goto IL_0d81;
	}

IL_011c:
	{
		// else if(level == 2)
		int32_t L_22 = __this->___level_23;
		if ((!(((uint32_t)L_22) == ((uint32_t)2))))
		{
			goto IL_01b1;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___BntClick_112;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Quark;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___BntClick_112;
		NullCheck(L_24);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_25;
		L_25 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_24, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26 = __this->___Quark_65;
		NullCheck(L_25);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_25, L_26, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___BG_113;
		NullCheck(L_27);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_28;
		L_28 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_27, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_29;
		memset((&L_29), 0, sizeof(L_29));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_29), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_28);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_28, L_29);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_31;
		memset((&L_31), 0, sizeof(L_31));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_31), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_30, L_31);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_33;
		memset((&L_33), 0, sizeof(L_33));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_33), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_32);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_32, L_33);
		goto IL_0d81;
	}

IL_01b1:
	{
		// else if(level == 3)
		int32_t L_34 = __this->___level_23;
		if ((!(((uint32_t)L_34) == ((uint32_t)3))))
		{
			goto IL_0246;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___BntClick_112;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Proton;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___BntClick_112;
		NullCheck(L_36);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_37;
		L_37 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_36, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38 = __this->___Proton_66;
		NullCheck(L_37);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_37, L_38, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___BG_113;
		NullCheck(L_39);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_40;
		L_40 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_39, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_41;
		memset((&L_41), 0, sizeof(L_41));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_41), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_40, L_41);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_42 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_43;
		memset((&L_43), 0, sizeof(L_43));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_43), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_42);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_42, L_43);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_45;
		memset((&L_45), 0, sizeof(L_45));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_45), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_44, L_45);
		goto IL_0d81;
	}

IL_0246:
	{
		// else if(level == 4)
		int32_t L_46 = __this->___level_23;
		if ((!(((uint32_t)L_46) == ((uint32_t)4))))
		{
			goto IL_02db;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___BntClick_112;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Nucleus;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___BntClick_112;
		NullCheck(L_48);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_49;
		L_49 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_48, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_50 = __this->___Nucleus_67;
		NullCheck(L_49);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_49, L_50, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___BG_113;
		NullCheck(L_51);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_52;
		L_52 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_51, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_53;
		memset((&L_53), 0, sizeof(L_53));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_53), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_52);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_52, L_53);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_55;
		memset((&L_55), 0, sizeof(L_55));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_55), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_54, L_55);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_56 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_57;
		memset((&L_57), 0, sizeof(L_57));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_57), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_56);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_56, L_57);
		goto IL_0d81;
	}

IL_02db:
	{
		// else if(level == 5)
		int32_t L_58 = __this->___level_23;
		if ((!(((uint32_t)L_58) == ((uint32_t)5))))
		{
			goto IL_0370;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___BntClick_112;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Atom;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___BntClick_112;
		NullCheck(L_60);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_61;
		L_61 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_60, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_62 = __this->___Atom_68;
		NullCheck(L_61);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_61, L_62, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___BG_113;
		NullCheck(L_63);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_64;
		L_64 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_63, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_65;
		memset((&L_65), 0, sizeof(L_65));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_65), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_64);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_64, L_65);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_67;
		memset((&L_67), 0, sizeof(L_67));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_67), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_66);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_66, L_67);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_69;
		memset((&L_69), 0, sizeof(L_69));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_69), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_68);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_68, L_69);
		goto IL_0d81;
	}

IL_0370:
	{
		// else if(level == 6)
		int32_t L_70 = __this->___level_23;
		if ((!(((uint32_t)L_70) == ((uint32_t)6))))
		{
			goto IL_0405;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___BntClick_112;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Mol;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___BntClick_112;
		NullCheck(L_72);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_73;
		L_73 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_72, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_74 = __this->___Mol_69;
		NullCheck(L_73);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_73, L_74, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___BG_113;
		NullCheck(L_75);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_76;
		L_76 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_75, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_77;
		memset((&L_77), 0, sizeof(L_77));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_77), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_76);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_76, L_77);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_78 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_79;
		memset((&L_79), 0, sizeof(L_79));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_79), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_78);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_78, L_79);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_80 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_81;
		memset((&L_81), 0, sizeof(L_81));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_81), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_80);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_80, L_81);
		goto IL_0d81;
	}

IL_0405:
	{
		// else if(level == 7)
		int32_t L_82 = __this->___level_23;
		if ((!(((uint32_t)L_82) == ((uint32_t)7))))
		{
			goto IL_049a;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___BntClick_112;
		NullCheck(L_83);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_83, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Gen;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___BntClick_112;
		NullCheck(L_84);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_85;
		L_85 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_84, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_86 = __this->___Gen_70;
		NullCheck(L_85);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_85, L_86, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___BG_113;
		NullCheck(L_87);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_88;
		L_88 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_87, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_89;
		memset((&L_89), 0, sizeof(L_89));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_89), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_88);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_88, L_89);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_90 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_91;
		memset((&L_91), 0, sizeof(L_91));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_91), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_90);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_90, L_91);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_92 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_93;
		memset((&L_93), 0, sizeof(L_93));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_93), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_92);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_92, L_93);
		goto IL_0d81;
	}

IL_049a:
	{
		// else if(level == 8)
		int32_t L_94 = __this->___level_23;
		if ((!(((uint32_t)L_94) == ((uint32_t)8))))
		{
			goto IL_0545;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = __this->___BntClick_112;
		NullCheck(L_95);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Chrom;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___BntClick_112;
		NullCheck(L_96);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_97;
		L_97 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_96, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_98 = __this->___Chrom_71;
		NullCheck(L_97);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_97, L_98, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->___BG_113;
		NullCheck(L_99);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_100;
		L_100 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_99, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_101;
		memset((&L_101), 0, sizeof(L_101));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_101), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_100);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_100, L_101);
		// BG.GetComponent<Image>().sprite = f8;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___BG_113;
		NullCheck(L_102);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_103;
		L_103 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_102, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_104 = __this->___f8_85;
		NullCheck(L_103);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_103, L_104, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_105 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_106;
		memset((&L_106), 0, sizeof(L_106));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_106), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_105);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_105, L_106);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_107 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_108;
		memset((&L_108), 0, sizeof(L_108));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_108), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_107);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_107, L_108);
		goto IL_0d81;
	}

IL_0545:
	{
		// else if(level == 9)
		int32_t L_109 = __this->___level_23;
		if ((!(((uint32_t)L_109) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_05f1;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = __this->___BntClick_112;
		NullCheck(L_110);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_110, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Kletka;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = __this->___BntClick_112;
		NullCheck(L_111);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_112;
		L_112 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_111, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_113 = __this->___Kletka_72;
		NullCheck(L_112);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_112, L_113, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114 = __this->___BG_113;
		NullCheck(L_114);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_115;
		L_115 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_114, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_116;
		memset((&L_116), 0, sizeof(L_116));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_116), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_115);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_115, L_116);
		// BG.GetComponent<Image>().sprite = f9;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = __this->___BG_113;
		NullCheck(L_117);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_118;
		L_118 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_117, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_119 = __this->___f9_86;
		NullCheck(L_118);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_118, L_119, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_120 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_121;
		memset((&L_121), 0, sizeof(L_121));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_121), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_120);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_120, L_121);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_122 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_123;
		memset((&L_123), 0, sizeof(L_123));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_123), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_122);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_122, L_123);
		goto IL_0d81;
	}

IL_05f1:
	{
		// else if(level == 10)
		int32_t L_124 = __this->___level_23;
		if ((!(((uint32_t)L_124) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_069d;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = __this->___BntClick_112;
		NullCheck(L_125);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_125, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = ListD;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->___BntClick_112;
		NullCheck(L_126);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_127;
		L_127 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_126, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_128 = __this->___ListD_73;
		NullCheck(L_127);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_127, L_128, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = __this->___BG_113;
		NullCheck(L_129);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_130;
		L_130 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_129, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_131;
		memset((&L_131), 0, sizeof(L_131));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_131), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_130);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_130, L_131);
		// BG.GetComponent<Image>().sprite = f10;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = __this->___BG_113;
		NullCheck(L_132);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_133;
		L_133 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_132, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_134 = __this->___f10_87;
		NullCheck(L_133);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_133, L_134, NULL);
		// ScoreText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_135 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_136;
		memset((&L_136), 0, sizeof(L_136));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_136), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_135);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_135, L_136);
		// AutoText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_137 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_138;
		memset((&L_138), 0, sizeof(L_138));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_138), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_137);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_137, L_138);
		goto IL_0d81;
	}

IL_069d:
	{
		// else if(level == 11)
		int32_t L_139 = __this->___level_23;
		if ((!(((uint32_t)L_139) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_0749;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = __this->___BntClick_112;
		NullCheck(L_140);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_140, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Tree;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___BntClick_112;
		NullCheck(L_141);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_142;
		L_142 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_141, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_143 = __this->___Tree_74;
		NullCheck(L_142);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_142, L_143, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144 = __this->___BG_113;
		NullCheck(L_144);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_145;
		L_145 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_144, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_146;
		memset((&L_146), 0, sizeof(L_146));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_146), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_145);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_145, L_146);
		// BG.GetComponent<Image>().sprite = f11;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_147 = __this->___BG_113;
		NullCheck(L_147);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_148;
		L_148 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_147, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_149 = __this->___f11_88;
		NullCheck(L_148);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_148, L_149, NULL);
		// ScoreText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_150 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_151;
		memset((&L_151), 0, sizeof(L_151));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_151), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_150);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_150, L_151);
		// AutoText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_152 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_153;
		memset((&L_153), 0, sizeof(L_153));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_153), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_152);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_152, L_153);
		goto IL_0d81;
	}

IL_0749:
	{
		// else if(level == 12)
		int32_t L_154 = __this->___level_23;
		if ((!(((uint32_t)L_154) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_07f5;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155 = __this->___BntClick_112;
		NullCheck(L_155);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_155, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Forest;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = __this->___BntClick_112;
		NullCheck(L_156);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_157;
		L_157 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_156, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_158 = __this->___Forest_75;
		NullCheck(L_157);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_157, L_158, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = __this->___BG_113;
		NullCheck(L_159);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_160;
		L_160 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_159, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_161;
		memset((&L_161), 0, sizeof(L_161));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_161), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_160);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_160, L_161);
		// BG.GetComponent<Image>().sprite = f12;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = __this->___BG_113;
		NullCheck(L_162);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_163;
		L_163 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_162, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_164 = __this->___f12_89;
		NullCheck(L_163);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_163, L_164, NULL);
		// ScoreText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_165 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_166;
		memset((&L_166), 0, sizeof(L_166));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_166), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_165);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_165, L_166);
		// AutoText.color = new Color(0,0,0);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_167 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_168;
		memset((&L_168), 0, sizeof(L_168));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_168), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_167);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_167, L_168);
		goto IL_0d81;
	}

IL_07f5:
	{
		// else if(level == 13)
		int32_t L_169 = __this->___level_23;
		if ((!(((uint32_t)L_169) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_08a1;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = __this->___BntClick_112;
		NullCheck(L_170);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_170, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Ostrov;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171 = __this->___BntClick_112;
		NullCheck(L_171);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_172;
		L_172 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_171, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_173 = __this->___Ostrov_76;
		NullCheck(L_172);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_172, L_173, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174 = __this->___BG_113;
		NullCheck(L_174);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_175;
		L_175 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_174, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_176;
		memset((&L_176), 0, sizeof(L_176));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_176), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_175);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_175, L_176);
		// BG.GetComponent<Image>().sprite = f13;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_177 = __this->___BG_113;
		NullCheck(L_177);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_178;
		L_178 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_177, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_179 = __this->___f13_90;
		NullCheck(L_178);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_178, L_179, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_180 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_181;
		memset((&L_181), 0, sizeof(L_181));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_181), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_180);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_180, L_181);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_182 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_183;
		memset((&L_183), 0, sizeof(L_183));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_183), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_182);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_182, L_183);
		goto IL_0d81;
	}

IL_08a1:
	{
		// else if(level == 14)
		int32_t L_184 = __this->___level_23;
		if ((!(((uint32_t)L_184) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_094d;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185 = __this->___BntClick_112;
		NullCheck(L_185);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_185, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Earth;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186 = __this->___BntClick_112;
		NullCheck(L_186);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_187;
		L_187 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_186, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_188 = __this->___Earth_77;
		NullCheck(L_187);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_187, L_188, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189 = __this->___BG_113;
		NullCheck(L_189);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_190;
		L_190 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_189, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_191;
		memset((&L_191), 0, sizeof(L_191));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_191), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_190);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_190, L_191);
		// BG.GetComponent<Image>().sprite = f14;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192 = __this->___BG_113;
		NullCheck(L_192);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_193;
		L_193 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_192, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_194 = __this->___f14_91;
		NullCheck(L_193);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_193, L_194, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_195 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_196;
		memset((&L_196), 0, sizeof(L_196));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_196), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_195);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_195, L_196);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_197 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_198;
		memset((&L_198), 0, sizeof(L_198));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_198), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_197);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_197, L_198);
		goto IL_0d81;
	}

IL_094d:
	{
		// else if(level == 15)
		int32_t L_199 = __this->___level_23;
		if ((!(((uint32_t)L_199) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_09f9;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_200 = __this->___BntClick_112;
		NullCheck(L_200);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_200, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = SystPl;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = __this->___BntClick_112;
		NullCheck(L_201);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_202;
		L_202 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_201, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_203 = __this->___SystPl_78;
		NullCheck(L_202);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_202, L_203, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_204 = __this->___BG_113;
		NullCheck(L_204);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_205;
		L_205 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_204, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_206;
		memset((&L_206), 0, sizeof(L_206));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_206), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_205);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_205, L_206);
		// BG.GetComponent<Image>().sprite = f15;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_207 = __this->___BG_113;
		NullCheck(L_207);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_208;
		L_208 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_207, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_209 = __this->___f15_92;
		NullCheck(L_208);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_208, L_209, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_210 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_211;
		memset((&L_211), 0, sizeof(L_211));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_211), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_210);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_210, L_211);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_212 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_213;
		memset((&L_213), 0, sizeof(L_213));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_213), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_212);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_212, L_213);
		goto IL_0d81;
	}

IL_09f9:
	{
		// else if(level == 16)
		int32_t L_214 = __this->___level_23;
		if ((!(((uint32_t)L_214) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0aa5;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_215 = __this->___BntClick_112;
		NullCheck(L_215);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_215, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Sozvezdie;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_216 = __this->___BntClick_112;
		NullCheck(L_216);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_217;
		L_217 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_216, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_218 = __this->___Sozvezdie_79;
		NullCheck(L_217);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_217, L_218, NULL);
		// BG.GetComponent<Image>().color = new Color(255,255,255);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_219 = __this->___BG_113;
		NullCheck(L_219);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_220;
		L_220 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_219, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_221;
		memset((&L_221), 0, sizeof(L_221));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_221), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_220);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_220, L_221);
		// BG.GetComponent<Image>().sprite = f16;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_222 = __this->___BG_113;
		NullCheck(L_222);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_223;
		L_223 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_222, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_224 = __this->___f16_93;
		NullCheck(L_223);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_223, L_224, NULL);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_225 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_226;
		memset((&L_226), 0, sizeof(L_226));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_226), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_225);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_225, L_226);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_227 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_228;
		memset((&L_228), 0, sizeof(L_228));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_228), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_227);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_227, L_228);
		goto IL_0d81;
	}

IL_0aa5:
	{
		// else if(level == 17)
		int32_t L_229 = __this->___level_23;
		if ((!(((uint32_t)L_229) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0b3b;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_230 = __this->___BntClick_112;
		NullCheck(L_230);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_230, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Galaxy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231 = __this->___BntClick_112;
		NullCheck(L_231);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_232;
		L_232 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_231, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_233 = __this->___Galaxy_80;
		NullCheck(L_232);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_232, L_233, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_234 = __this->___BG_113;
		NullCheck(L_234);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_235;
		L_235 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_234, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_236;
		memset((&L_236), 0, sizeof(L_236));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_236), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_235);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_235, L_236);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_237 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_238;
		memset((&L_238), 0, sizeof(L_238));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_238), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_237);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_237, L_238);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_239 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_240;
		memset((&L_240), 0, sizeof(L_240));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_240), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_239);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_239, L_240);
		goto IL_0d81;
	}

IL_0b3b:
	{
		// else if(level == 18)
		int32_t L_241 = __this->___level_23;
		if ((!(((uint32_t)L_241) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0bd1;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_242 = __this->___BntClick_112;
		NullCheck(L_242);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_242, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = GalaxyClass;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_243 = __this->___BntClick_112;
		NullCheck(L_243);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_244;
		L_244 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_243, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_245 = __this->___GalaxyClass_81;
		NullCheck(L_244);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_244, L_245, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246 = __this->___BG_113;
		NullCheck(L_246);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_247;
		L_247 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_246, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_248;
		memset((&L_248), 0, sizeof(L_248));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_248), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_247);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_247, L_248);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_249 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_250;
		memset((&L_250), 0, sizeof(L_250));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_250), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_249);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_249, L_250);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_251 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_252;
		memset((&L_252), 0, sizeof(L_252));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_252), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_251);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_251, L_252);
		goto IL_0d81;
	}

IL_0bd1:
	{
		// else if(level == 19)
		int32_t L_253 = __this->___level_23;
		if ((!(((uint32_t)L_253) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_0c67;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_254 = __this->___BntClick_112;
		NullCheck(L_254);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_254, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = SuperGalaxyClass;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_255 = __this->___BntClick_112;
		NullCheck(L_255);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_256;
		L_256 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_255, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_257 = __this->___SuperGalaxyClass_82;
		NullCheck(L_256);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_256, L_257, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_258 = __this->___BG_113;
		NullCheck(L_258);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_259;
		L_259 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_258, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_260;
		memset((&L_260), 0, sizeof(L_260));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_260), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_259);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_259, L_260);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_261 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_262;
		memset((&L_262), 0, sizeof(L_262));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_262), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_261);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_261, L_262);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_263 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_264;
		memset((&L_264), 0, sizeof(L_264));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_264), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_263);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_263, L_264);
		goto IL_0d81;
	}

IL_0c67:
	{
		// else if(level == 20)
		int32_t L_265 = __this->___level_23;
		if ((!(((uint32_t)L_265) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_0cfd;
		}
	}
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_266 = __this->___BntClick_112;
		NullCheck(L_266);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_266, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Metagal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_267 = __this->___BntClick_112;
		NullCheck(L_267);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_268;
		L_268 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_267, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_269 = __this->___Metagal_83;
		NullCheck(L_268);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_268, L_269, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_270 = __this->___BG_113;
		NullCheck(L_270);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_271;
		L_271 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_270, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_272;
		memset((&L_272), 0, sizeof(L_272));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_272), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_271);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_271, L_272);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_273 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_274;
		memset((&L_274), 0, sizeof(L_274));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_274), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_273);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_273, L_274);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_275 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_276;
		memset((&L_276), 0, sizeof(L_276));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_276), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_275);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_275, L_276);
		goto IL_0d81;
	}

IL_0cfd:
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_277 = __this->___BntClick_112;
		NullCheck(L_277);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_277, (bool)1, NULL);
		// BntClick.GetComponent<Image>().sprite = Uny;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_278 = __this->___BntClick_112;
		NullCheck(L_278);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_279;
		L_279 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_278, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_280 = __this->___Uny_84;
		NullCheck(L_279);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_279, L_280, NULL);
		// BG.GetComponent<Image>().color = new Color(0,0,0);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_281 = __this->___BG_113;
		NullCheck(L_281);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_282;
		L_282 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_281, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_283;
		memset((&L_283), 0, sizeof(L_283));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_283), (0.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_282);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_282, L_283);
		// ScoreText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_284 = __this->___ScoreText_47;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_285;
		memset((&L_285), 0, sizeof(L_285));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_285), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_284);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_284, L_285);
		// AutoText.color = new Color(255,255,255);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_286 = __this->___AutoText_48;
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_287;
		memset((&L_287), 0, sizeof(L_287));
		Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline((&L_287), (255.0f), (255.0f), (255.0f), /*hidden argument*/NULL);
		NullCheck(L_286);
		VirtualActionInvoker1< Color_tD001788D726C3A7F1379BEED0260B9591F440C1F >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_286, L_287);
	}

IL_0d81:
	{
		// BntClick.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_288 = __this->___BntClick_112;
		NullCheck(L_288);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_288, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Game::BonusBtn(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_BonusBtn_m817B6D2A08E8ED5E9E98C83B61764C46680C1A1B (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1851192C259F051163EB84CECF68769882CE93E3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B0C1740168CD2AE18D736B3412367133FBCA2D5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF848F71C9FB69442195E73061E4172224620DA3F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	{
		// if (score >= clickCost[index])
		uint64_t L_0 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___clickCost_20;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint64_t)L_0) >= ((uint64_t)L_4))))
		{
			goto IL_04e1;
		}
	}
	{
		// score -= clickCost[index];
		uint64_t L_5 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___clickCost_20;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___score_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, L_9));
		// clickCost[index] += clickCostStart[index];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___clickCost_20;
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		uint64_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int64_t L_13 = *((int64_t*)L_12);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = __this->___clickCostStart_24;
		int32_t L_15 = ___index0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int64_t*)L_12) = (int64_t)((int64_t)il2cpp_codegen_add(L_13, L_17));
		// clickNum[index]++;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___clickNum_32;
		int32_t L_19 = ___index0;
		NullCheck(L_18);
		int32_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, 1));
		// click += clickBonus[index];
		uint64_t L_22 = __this->___click_7;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___clickBonus_28;
		int32_t L_24 = ___index0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___click_7 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, L_26));
		// PlayerPrefs.SetString("click", click.ToString());
		uint64_t* L_27 = (&__this->___click_7);
		String_t* L_28;
		L_28 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_27, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, L_28, NULL);
		// if (click == 0)
		uint64_t L_29 = __this->___click_7;
		if (L_29)
		{
			goto IL_00a5;
		}
	}
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n   {click} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___BonClickInfoTxt_44;
		uint64_t L_31 = __this->___click_7;
		uint64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4B0C1740168CD2AE18D736B3412367133FBCA2D5, L_33, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
		goto IL_00cf;
	}

IL_00a5:
	{
		// BonClickInfoTxt.text = $"????????? ???????:\n   {click.ToString("#,#")} ??/????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___BonClickInfoTxt_44;
		uint64_t* L_36 = (&__this->___click_7);
		String_t* L_37;
		L_37 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_36, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_38;
		L_38 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral6316B3B83B35875718F03075269B79B3D63D9D30, L_37, _stringLiteral1851192C259F051163EB84CECF68769882CE93E3, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_38);
	}

IL_00cf:
	{
		// PlayerPrefs.SetString($"clickCost{index}", clickCost[index].ToString()); // ?????????? ???????
		int32_t L_39 = ___index0;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9771A1B9CE1C2F0ECA5E5F7CE9D1D2654C3AB55A, L_41, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = __this->___clickCost_20;
		int32_t L_44 = ___index0;
		NullCheck(L_43);
		String_t* L_45;
		L_45 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_42, L_45, NULL);
		// PlayerPrefs.SetInt($"clickNum{index}", clickNum[index]);
		int32_t L_46 = ___index0;
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49;
		L_49 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral4A70ADC15B05BD49E060EDC180BD4AA437C8ECD8, L_48, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___clickNum_32;
		int32_t L_51 = ___index0;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_49, L_53, NULL);
		// NumClickTxt[index].text = clickNum[index] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_54 = __this->___NumClickTxt_41;
		int32_t L_55 = ___index0;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___clickNum_32;
		int32_t L_59 = ___index0;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))), NULL);
		String_t* L_61 = L_60;
		G_B5_0 = L_61;
		G_B5_1 = L_57;
		if (L_61)
		{
			G_B6_0 = L_61;
			G_B6_1 = L_57;
			goto IL_0134;
		}
	}
	{
		G_B6_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B6_1 = G_B5_1;
	}

IL_0134:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
		// CostClickTxt[index].text = $"????: {clickCost[index].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_62 = __this->___CostClickTxt_35;
		int32_t L_63 = ___index0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = __this->___clickCost_20;
		int32_t L_67 = ___index0;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_69;
		L_69 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_68, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_69);
		// if ((index + 1) > level)
		int32_t L_70 = ___index0;
		int32_t L_71 = __this->___level_23;
		if ((((int32_t)((int32_t)il2cpp_codegen_add(L_70, 1))) <= ((int32_t)L_71)))
		{
			goto IL_04e1;
		}
	}
	{
		// level = index + 1;
		int32_t L_72 = ___index0;
		__this->___level_23 = ((int32_t)il2cpp_codegen_add(L_72, 1));
		// PlayerPrefs.SetInt("level", level);
		int32_t L_73 = __this->___level_23;
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(_stringLiteral9B5D93EBDD41E0250436B5C2FA8A1004ADC41CB9, L_73, NULL);
		// LevelText.text = level.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_74 = __this->___LevelText_50;
		int32_t* L_75 = (&__this->___level_23);
		String_t* L_76;
		L_76 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(L_75, NULL);
		NullCheck(L_74);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_74, L_76);
		// BntClick.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___BntClick_112;
		NullCheck(L_77);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_77, (bool)0, NULL);
		// NewClickPanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___NewClickPanel_102;
		NullCheck(L_78);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_78, (bool)1, NULL);
		// NewClickText.text = $"?????????\n{level} ???????";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_79 = __this->___NewClickText_52;
		int32_t L_80 = __this->___level_23;
		int32_t L_81 = L_80;
		RuntimeObject* L_82 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_81);
		String_t* L_83;
		L_83 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralF848F71C9FB69442195E73061E4172224620DA3F, L_82, NULL);
		NullCheck(L_79);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_79, L_83);
		// SavePan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___SavePan_98;
		NullCheck(L_84);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_84, (bool)0, NULL);
		// BonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = __this->___BonusPan_96;
		NullCheck(L_85);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_85, (bool)0, NULL);
		// AutoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = __this->___AutoPan_97;
		NullCheck(L_86);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_86, (bool)0, NULL);
		// InfoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___InfoPan_99;
		NullCheck(L_87);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_87, (bool)0, NULL);
		// SettingsPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = __this->___SettingsPan_100;
		NullCheck(L_88);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_88, (bool)0, NULL);
		// checkSav = true;
		__this->___checkSav_122 = (bool)1;
		// checkSet = true;
		__this->___checkSet_124 = (bool)1;
		// checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// checkBon = true;
		__this->___checkBon_120 = (bool)1;
		// if (level == 1)
		int32_t L_89 = __this->___level_23;
		if ((!(((uint32_t)L_89) == ((uint32_t)1))))
		{
			goto IL_025f;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = QuanSt;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = __this->___NewClickImage_105;
		NullCheck(L_90);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_91;
		L_91 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_90, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_92 = __this->___QuanSt_64;
		NullCheck(L_91);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_91, L_92, NULL);
		return;
	}

IL_025f:
	{
		// else if (level == 2)
		int32_t L_93 = __this->___level_23;
		if ((!(((uint32_t)L_93) == ((uint32_t)2))))
		{
			goto IL_027f;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Quark;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___NewClickImage_105;
		NullCheck(L_94);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_95;
		L_95 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_94, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_96 = __this->___Quark_65;
		NullCheck(L_95);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_95, L_96, NULL);
		return;
	}

IL_027f:
	{
		// else if (level == 3)
		int32_t L_97 = __this->___level_23;
		if ((!(((uint32_t)L_97) == ((uint32_t)3))))
		{
			goto IL_029f;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Proton;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = __this->___NewClickImage_105;
		NullCheck(L_98);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_99;
		L_99 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_98, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_100 = __this->___Proton_66;
		NullCheck(L_99);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_99, L_100, NULL);
		return;
	}

IL_029f:
	{
		// else if (level == 4)
		int32_t L_101 = __this->___level_23;
		if ((!(((uint32_t)L_101) == ((uint32_t)4))))
		{
			goto IL_02bf;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Nucleus;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___NewClickImage_105;
		NullCheck(L_102);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_103;
		L_103 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_102, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_104 = __this->___Nucleus_67;
		NullCheck(L_103);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_103, L_104, NULL);
		return;
	}

IL_02bf:
	{
		// else if (level == 5)
		int32_t L_105 = __this->___level_23;
		if ((!(((uint32_t)L_105) == ((uint32_t)5))))
		{
			goto IL_02df;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Atom;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = __this->___NewClickImage_105;
		NullCheck(L_106);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_107;
		L_107 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_106, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_108 = __this->___Atom_68;
		NullCheck(L_107);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_107, L_108, NULL);
		return;
	}

IL_02df:
	{
		// else if (level == 6)
		int32_t L_109 = __this->___level_23;
		if ((!(((uint32_t)L_109) == ((uint32_t)6))))
		{
			goto IL_02ff;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Mol;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = __this->___NewClickImage_105;
		NullCheck(L_110);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_111;
		L_111 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_110, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_112 = __this->___Mol_69;
		NullCheck(L_111);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_111, L_112, NULL);
		return;
	}

IL_02ff:
	{
		// else if (level == 7)
		int32_t L_113 = __this->___level_23;
		if ((!(((uint32_t)L_113) == ((uint32_t)7))))
		{
			goto IL_031f;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Gen;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114 = __this->___NewClickImage_105;
		NullCheck(L_114);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_115;
		L_115 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_114, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_116 = __this->___Gen_70;
		NullCheck(L_115);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_115, L_116, NULL);
		return;
	}

IL_031f:
	{
		// else if (level == 8)
		int32_t L_117 = __this->___level_23;
		if ((!(((uint32_t)L_117) == ((uint32_t)8))))
		{
			goto IL_033f;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Chrom;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = __this->___NewClickImage_105;
		NullCheck(L_118);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_119;
		L_119 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_118, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_120 = __this->___Chrom_71;
		NullCheck(L_119);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_119, L_120, NULL);
		return;
	}

IL_033f:
	{
		// else if (level == 9)
		int32_t L_121 = __this->___level_23;
		if ((!(((uint32_t)L_121) == ((uint32_t)((int32_t)9)))))
		{
			goto IL_0360;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Kletka;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___NewClickImage_105;
		NullCheck(L_122);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_123;
		L_123 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_122, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_124 = __this->___Kletka_72;
		NullCheck(L_123);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_123, L_124, NULL);
		return;
	}

IL_0360:
	{
		// else if (level == 10)
		int32_t L_125 = __this->___level_23;
		if ((!(((uint32_t)L_125) == ((uint32_t)((int32_t)10)))))
		{
			goto IL_0381;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = ListD;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->___NewClickImage_105;
		NullCheck(L_126);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_127;
		L_127 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_126, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_128 = __this->___ListD_73;
		NullCheck(L_127);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_127, L_128, NULL);
		return;
	}

IL_0381:
	{
		// else if (level == 11)
		int32_t L_129 = __this->___level_23;
		if ((!(((uint32_t)L_129) == ((uint32_t)((int32_t)11)))))
		{
			goto IL_03a2;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Tree;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = __this->___NewClickImage_105;
		NullCheck(L_130);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_131;
		L_131 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_130, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_132 = __this->___Tree_74;
		NullCheck(L_131);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_131, L_132, NULL);
		return;
	}

IL_03a2:
	{
		// else if (level == 12)
		int32_t L_133 = __this->___level_23;
		if ((!(((uint32_t)L_133) == ((uint32_t)((int32_t)12)))))
		{
			goto IL_03c3;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Forest;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = __this->___NewClickImage_105;
		NullCheck(L_134);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_135;
		L_135 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_134, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_136 = __this->___Forest_75;
		NullCheck(L_135);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_135, L_136, NULL);
		return;
	}

IL_03c3:
	{
		// else if (level == 13)
		int32_t L_137 = __this->___level_23;
		if ((!(((uint32_t)L_137) == ((uint32_t)((int32_t)13)))))
		{
			goto IL_03e4;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Ostrov;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = __this->___NewClickImage_105;
		NullCheck(L_138);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_139;
		L_139 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_138, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_140 = __this->___Ostrov_76;
		NullCheck(L_139);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_139, L_140, NULL);
		return;
	}

IL_03e4:
	{
		// else if (level == 14)
		int32_t L_141 = __this->___level_23;
		if ((!(((uint32_t)L_141) == ((uint32_t)((int32_t)14)))))
		{
			goto IL_0405;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Earth;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142 = __this->___NewClickImage_105;
		NullCheck(L_142);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_143;
		L_143 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_142, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_144 = __this->___Earth_77;
		NullCheck(L_143);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_143, L_144, NULL);
		return;
	}

IL_0405:
	{
		// else if (level == 15)
		int32_t L_145 = __this->___level_23;
		if ((!(((uint32_t)L_145) == ((uint32_t)((int32_t)15)))))
		{
			goto IL_0426;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = SystPl;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = __this->___NewClickImage_105;
		NullCheck(L_146);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_147;
		L_147 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_146, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_148 = __this->___SystPl_78;
		NullCheck(L_147);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_147, L_148, NULL);
		return;
	}

IL_0426:
	{
		// else if (level == 16)
		int32_t L_149 = __this->___level_23;
		if ((!(((uint32_t)L_149) == ((uint32_t)((int32_t)16)))))
		{
			goto IL_0447;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Sozvezdie;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150 = __this->___NewClickImage_105;
		NullCheck(L_150);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_151;
		L_151 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_150, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_152 = __this->___Sozvezdie_79;
		NullCheck(L_151);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_151, L_152, NULL);
		return;
	}

IL_0447:
	{
		// else if (level == 17)
		int32_t L_153 = __this->___level_23;
		if ((!(((uint32_t)L_153) == ((uint32_t)((int32_t)17)))))
		{
			goto IL_0468;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Galaxy;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_154 = __this->___NewClickImage_105;
		NullCheck(L_154);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_155;
		L_155 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_154, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_156 = __this->___Galaxy_80;
		NullCheck(L_155);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_155, L_156, NULL);
		return;
	}

IL_0468:
	{
		// else if (level == 18)
		int32_t L_157 = __this->___level_23;
		if ((!(((uint32_t)L_157) == ((uint32_t)((int32_t)18)))))
		{
			goto IL_0489;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = GalaxyClass;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = __this->___NewClickImage_105;
		NullCheck(L_158);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_159;
		L_159 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_158, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_160 = __this->___GalaxyClass_81;
		NullCheck(L_159);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_159, L_160, NULL);
		return;
	}

IL_0489:
	{
		// else if (level == 19)
		int32_t L_161 = __this->___level_23;
		if ((!(((uint32_t)L_161) == ((uint32_t)((int32_t)19)))))
		{
			goto IL_04aa;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = SuperGalaxyClass;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = __this->___NewClickImage_105;
		NullCheck(L_162);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_163;
		L_163 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_162, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_164 = __this->___SuperGalaxyClass_82;
		NullCheck(L_163);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_163, L_164, NULL);
		return;
	}

IL_04aa:
	{
		// else if (level == 20)
		int32_t L_165 = __this->___level_23;
		if ((!(((uint32_t)L_165) == ((uint32_t)((int32_t)20)))))
		{
			goto IL_04cb;
		}
	}
	{
		// NewClickImage.GetComponent<Image>().sprite = Metagal;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_166 = __this->___NewClickImage_105;
		NullCheck(L_166);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_167;
		L_167 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_166, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_168 = __this->___Metagal_83;
		NullCheck(L_167);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_167, L_168, NULL);
		return;
	}

IL_04cb:
	{
		// NewClickImage.GetComponent<Image>().sprite = Uny;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_169 = __this->___NewClickImage_105;
		NullCheck(L_169);
		Image_tBC1D03F63BF71132E9A5E472B8742F172A011E7E* L_170;
		L_170 = GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D(L_169, GameObject_GetComponent_TisImage_tBC1D03F63BF71132E9A5E472B8742F172A011E7E_mA59EA7D5F9133B2593F4AB70B099928BA955EE7D_RuntimeMethod_var);
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_171 = __this->___Uny_84;
		NullCheck(L_170);
		Image_set_sprite_mC0C248340BA27AAEE56855A3FAFA0D8CA12956DE(L_170, L_171, NULL);
	}

IL_04e1:
	{
		// }
		return;
	}
}
// System.Void Game::Hire(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_Hire_m28C02EC27CA994E696084D0A8A53F41143061B4E (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4E1BD4F36EFE8F1D380E33A04E58A99C624AB7FE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	{
		// if (score >= autoCost[index])
		uint64_t L_0 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___autoCost_21;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint64_t)L_0) >= ((uint64_t)L_4))))
		{
			goto IL_016b;
		}
	}
	{
		// score -= autoCost[index];
		uint64_t L_5 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___autoCost_21;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___score_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, L_9));
		// autoCost[index] += autoCostStart[index];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___autoCost_21;
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		uint64_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int64_t L_13 = *((int64_t*)L_12);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = __this->___autoCostStart_25;
		int32_t L_15 = ___index0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int64_t*)L_12) = (int64_t)((int64_t)il2cpp_codegen_add(L_13, L_17));
		// autoNum[index]++;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___autoNum_33;
		int32_t L_19 = ___index0;
		NullCheck(L_18);
		int32_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, 1));
		// auto += autoBonus[index];
		uint64_t L_22 = __this->___auto_8;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___autoBonus_29;
		int32_t L_24 = ___index0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___auto_8 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, L_26));
		// PlayerPrefs.SetString("auto", auto.ToString());
		uint64_t* L_27 = (&__this->___auto_8);
		String_t* L_28;
		L_28 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_27, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F, L_28, NULL);
		// if (auto == 0)
		uint64_t L_29 = __this->___auto_8;
		if (L_29)
		{
			goto IL_00a5;
		}
	}
	{
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___BonAutoInfoTxt_45;
		uint64_t L_31 = __this->___auto_8;
		uint64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralB1DD680703B5A620D0E8DD6C30C3B146F3FDC5F3, L_33, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
		goto IL_00cf;
	}

IL_00a5:
	{
		// BonAutoInfoTxt.text = $"?????????? ???????:\n{auto.ToString("#,#")} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___BonAutoInfoTxt_45;
		uint64_t* L_36 = (&__this->___auto_8);
		String_t* L_37;
		L_37 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_36, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_38;
		L_38 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral4E1BD4F36EFE8F1D380E33A04E58A99C624AB7FE, L_37, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_38);
	}

IL_00cf:
	{
		// PlayerPrefs.SetString($"autoCost{index}", autoCost[index].ToString()); // ?????????? ???????
		int32_t L_39 = ___index0;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5914CC9267070C6A95F35D38213E6C242772D19A, L_41, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = __this->___autoCost_21;
		int32_t L_44 = ___index0;
		NullCheck(L_43);
		String_t* L_45;
		L_45 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_42, L_45, NULL);
		// PlayerPrefs.SetInt($"autoNum{index}", autoNum[index]);
		int32_t L_46 = ___index0;
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49;
		L_49 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralC537AD9C1E6139BABEAA3F714FEF5456CBFE7856, L_48, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___autoNum_33;
		int32_t L_51 = ___index0;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_49, L_53, NULL);
		// NumAutoTxt[index].text = autoNum[index] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_54 = __this->___NumAutoTxt_42;
		int32_t L_55 = ___index0;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___autoNum_33;
		int32_t L_59 = ___index0;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))), NULL);
		String_t* L_61 = L_60;
		G_B5_0 = L_61;
		G_B5_1 = L_57;
		if (L_61)
		{
			G_B6_0 = L_61;
			G_B6_1 = L_57;
			goto IL_0134;
		}
	}
	{
		G_B6_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B6_1 = G_B5_1;
	}

IL_0134:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
		// CostAutoTxt[index].text = $"????: {autoCost[index].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_62 = __this->___CostAutoTxt_36;
		int32_t L_63 = ___index0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = __this->___autoCost_21;
		int32_t L_67 = ___index0;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_69;
		L_69 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_68, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_69);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Void Game::SaveScore(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_SaveScore_mF6777237BCF5EFEBB2807650122A413530CA46AC (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8F7A11CA93A69398B8DF5B980662D3BD1EA252DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* G_B6_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B6_1 = NULL;
	String_t* G_B5_0 = NULL;
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* G_B5_1 = NULL;
	{
		// if (score >= saveCost[index])
		uint64_t L_0 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = __this->___saveCost_22;
		int32_t L_2 = ___index0;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		int64_t L_4 = (int64_t)(L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		if ((!(((uint64_t)L_0) >= ((uint64_t)L_4))))
		{
			goto IL_016b;
		}
	}
	{
		// score -= saveCost[index];
		uint64_t L_5 = __this->___score_6;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = __this->___saveCost_22;
		int32_t L_7 = ___index0;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		int64_t L_9 = (int64_t)(L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		__this->___score_6 = ((int64_t)il2cpp_codegen_subtract((int64_t)L_5, L_9));
		// saveCost[index] += saveCostStart[index];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_10 = __this->___saveCost_22;
		int32_t L_11 = ___index0;
		NullCheck(L_10);
		uint64_t* L_12 = ((L_10)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_11)));
		int64_t L_13 = *((int64_t*)L_12);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_14 = __this->___saveCostStart_26;
		int32_t L_15 = ___index0;
		NullCheck(L_14);
		int32_t L_16 = L_15;
		int64_t L_17 = (int64_t)(L_14)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((int64_t*)L_12) = (int64_t)((int64_t)il2cpp_codegen_add(L_13, L_17));
		// saveNum[index]++;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_18 = __this->___saveNum_34;
		int32_t L_19 = ___index0;
		NullCheck(L_18);
		int32_t* L_20 = ((L_18)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_19)));
		int32_t L_21 = *((int32_t*)L_20);
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_21, 1));
		// save += saveBonus[index];
		uint64_t L_22 = __this->___save_9;
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_23 = __this->___saveBonus_30;
		int32_t L_24 = ___index0;
		NullCheck(L_23);
		int32_t L_25 = L_24;
		int64_t L_26 = (int64_t)(L_23)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->___save_9 = ((int64_t)il2cpp_codegen_add((int64_t)L_22, L_26));
		// PlayerPrefs.SetString("save", save.ToString());
		uint64_t* L_27 = (&__this->___save_9);
		String_t* L_28;
		L_28 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_27, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778, L_28, NULL);
		// if (save == 0)
		uint64_t L_29 = __this->___save_9;
		if (L_29)
		{
			goto IL_00a5;
		}
	}
	{
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_30 = __this->___BonSaveInfoTxt_46;
		uint64_t L_31 = __this->___save_9;
		uint64_t L_32 = L_31;
		RuntimeObject* L_33 = Box(UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var, &L_32);
		String_t* L_34;
		L_34 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral9553A577B5768D0E1DC047115609ADE548F2331A, L_33, NULL);
		NullCheck(L_30);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_30, L_34);
		goto IL_00cf;
	}

IL_00a5:
	{
		// BonSaveInfoTxt.text = $"?????????? ???????:\n?? {save.ToString("#,#")} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_35 = __this->___BonSaveInfoTxt_46;
		uint64_t* L_36 = (&__this->___save_9);
		String_t* L_37;
		L_37 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_36, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_38;
		L_38 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8F7A11CA93A69398B8DF5B980662D3BD1EA252DA, L_37, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_35);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_35, L_38);
	}

IL_00cf:
	{
		// PlayerPrefs.SetString($"saveCost{index}", saveCost[index].ToString()); // ?????????? ???????
		int32_t L_39 = ___index0;
		int32_t L_40 = L_39;
		RuntimeObject* L_41 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_40);
		String_t* L_42;
		L_42 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5164CFCC397EA3E2912A4BBC6F1E93943B7DC63F, L_41, NULL);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_43 = __this->___saveCost_22;
		int32_t L_44 = ___index0;
		NullCheck(L_43);
		String_t* L_45;
		L_45 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(((L_43)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_44))), NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(L_42, L_45, NULL);
		// PlayerPrefs.SetInt($"saveNum{index}", saveNum[index]);
		int32_t L_46 = ___index0;
		int32_t L_47 = L_46;
		RuntimeObject* L_48 = Box(Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var, &L_47);
		String_t* L_49;
		L_49 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral20FEA115946987ED77AF37797435E3C07AF0A12D, L_48, NULL);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_50 = __this->___saveNum_34;
		int32_t L_51 = ___index0;
		NullCheck(L_50);
		int32_t L_52 = L_51;
		int32_t L_53 = (L_50)->GetAt(static_cast<il2cpp_array_size_t>(L_52));
		PlayerPrefs_SetInt_mDC9617BFD56FEC670626A1002D9A5FE963D8D175(L_49, L_53, NULL);
		// NumSaveTxt[index].text = saveNum[index] + "";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_54 = __this->___NumSaveTxt_43;
		int32_t L_55 = ___index0;
		NullCheck(L_54);
		int32_t L_56 = L_55;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_57 = (L_54)->GetAt(static_cast<il2cpp_array_size_t>(L_56));
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_58 = __this->___saveNum_34;
		int32_t L_59 = ___index0;
		NullCheck(L_58);
		String_t* L_60;
		L_60 = Int32_ToString_m030E01C24E294D6762FB0B6F37CB541581F55CA5(((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_59))), NULL);
		String_t* L_61 = L_60;
		G_B5_0 = L_61;
		G_B5_1 = L_57;
		if (L_61)
		{
			G_B6_0 = L_61;
			G_B6_1 = L_57;
			goto IL_0134;
		}
	}
	{
		G_B6_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		G_B6_1 = G_B5_1;
	}

IL_0134:
	{
		NullCheck(G_B6_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, G_B6_1, G_B6_0);
		// CostSaveTxt[index].text = $"????: {saveCost[index].ToString("#,#")} ??";
		TextU5BU5D_t1D476A037C4542F053D17ADAFA2723F311F9A353* L_62 = __this->___CostSaveTxt_37;
		int32_t L_63 = ___index0;
		NullCheck(L_62);
		int32_t L_64 = L_63;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = (L_62)->GetAt(static_cast<il2cpp_array_size_t>(L_64));
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_66 = __this->___saveCost_22;
		int32_t L_67 = ___index0;
		NullCheck(L_66);
		String_t* L_68;
		L_68 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(((L_66)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_67))), _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_69;
		L_69 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(_stringLiteral8CB3B25517F1BE1DDC2E1B8E8B169ED4F99B072C, L_68, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_69);
	}

IL_016b:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Game::BonusPerSec()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Game_BonusPerSec_m645C7BD1908A45E4A213D6F7CD2DF844D41264BC (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* L_0 = (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D*)il2cpp_codegen_object_new(U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBonusPerSecU3Ed__137__ctor_mCF8CEF7C46B7B0CFB96F1B1BCC78A74802041D30(L_0, 0, NULL);
		U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void Game::NormalMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_NormalMode_m02C78FBC74003190BF3F2A9E14DA32310678681F (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score == 0)
		uint64_t L_0 = __this->___score_6;
		if (L_0)
		{
			goto IL_002a;
		}
	}
	{
		// ScoreText.text = score + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___ScoreText_47;
		uint64_t* L_2 = (&__this->___score_6);
		String_t* L_3;
		L_3 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_2, NULL);
		String_t* L_4;
		L_4 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_3, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_4);
		goto IL_004f;
	}

IL_002a:
	{
		// ScoreText.text = score.ToString("#,#") + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___ScoreText_47;
		uint64_t* L_6 = (&__this->___score_6);
		String_t* L_7;
		L_7 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_6, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_8;
		L_8 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_8);
	}

IL_004f:
	{
		// if (auto == 0)
		uint64_t L_9 = __this->___auto_8;
		if (L_9)
		{
			goto IL_0078;
		}
	}
	{
		// AutoText.text = auto + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___AutoText_48;
		uint64_t* L_11 = (&__this->___auto_8);
		String_t* L_12;
		L_12 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_11, NULL);
		String_t* L_13;
		L_13 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_12, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, L_13);
		return;
	}

IL_0078:
	{
		// AutoText.text = auto.ToString("#,#") + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___AutoText_48;
		uint64_t* L_15 = (&__this->___auto_8);
		String_t* L_16;
		L_16 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_15, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_16, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		// }
		return;
	}
}
// System.Void Game::StepMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_StepMode_mE86A10082B61F5A23B8C7F45A4CF7AAA04115680 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B972D0CEDF8475DE006796137CC5942EC44F0FB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDCBBCFC2306ABD50659544F4820545B9C77E2E1B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score >= 100000000)
		uint64_t L_0 = __this->___score_6;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)100000000))))))
		{
			goto IL_0082;
		}
	}
	{
		// SokrSc = score;
		uint64_t L_1 = __this->___score_6;
		__this->___SokrSc_11 = L_1;
		goto IL_003b;
	}

IL_001c:
	{
		// SokrSc /= 10;
		uint64_t L_2 = __this->___SokrSc_11;
		__this->___SokrSc_11 = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)10))));
		// k++;
		uint8_t L_3 = __this->___k_14;
		__this->___k_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)));
	}

IL_003b:
	{
		// while (SokrSc >= 1000)
		uint64_t L_4 = __this->___SokrSc_11;
		if ((!(((uint64_t)L_4) < ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_001c;
		}
	}
	{
		// ScoreText.text = SokrSc + $" x 10^{k} ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_5 = __this->___ScoreText_47;
		uint64_t* L_6 = (&__this->___SokrSc_11);
		String_t* L_7;
		L_7 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_6, NULL);
		uint8_t L_8 = __this->___k_14;
		uint8_t L_9 = L_8;
		RuntimeObject* L_10 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_9);
		String_t* L_11;
		L_11 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteral5B972D0CEDF8475DE006796137CC5942EC44F0FB, L_10, NULL);
		String_t* L_12;
		L_12 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_7, L_11, NULL);
		NullCheck(L_5);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_12);
		// k = 0;
		__this->___k_14 = (uint8_t)0;
		goto IL_00d1;
	}

IL_0082:
	{
		// if (score == 0)
		uint64_t L_13 = __this->___score_6;
		if (L_13)
		{
			goto IL_00ac;
		}
	}
	{
		// ScoreText.text = score + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_14 = __this->___ScoreText_47;
		uint64_t* L_15 = (&__this->___score_6);
		String_t* L_16;
		L_16 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_15, NULL);
		String_t* L_17;
		L_17 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_16, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_14);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_14, L_17);
		goto IL_00d1;
	}

IL_00ac:
	{
		// ScoreText.text = score.ToString("#,#") + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___ScoreText_47;
		uint64_t* L_19 = (&__this->___score_6);
		String_t* L_20;
		L_20 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_19, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_21;
		L_21 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_20, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_21);
	}

IL_00d1:
	{
		// if (auto >= 100000000)
		uint64_t L_22 = __this->___auto_8;
		if ((!(((uint64_t)L_22) >= ((uint64_t)((int64_t)((int32_t)100000000))))))
		{
			goto IL_0152;
		}
	}
	{
		// SokrAu = auto;
		uint64_t L_23 = __this->___auto_8;
		__this->___SokrAu_12 = L_23;
		goto IL_010c;
	}

IL_00ed:
	{
		// SokrAu /= 10;
		uint64_t L_24 = __this->___SokrAu_12;
		__this->___SokrAu_12 = ((int64_t)((uint64_t)(int64_t)L_24/(uint64_t)(int64_t)((int64_t)((int32_t)10))));
		// k++;
		uint8_t L_25 = __this->___k_14;
		__this->___k_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_25, 1)));
	}

IL_010c:
	{
		// while (SokrAu >= 1000)
		uint64_t L_26 = __this->___SokrAu_12;
		if ((!(((uint64_t)L_26) < ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_00ed;
		}
	}
	{
		// AutoText.text = SokrAu + $" x 10^{k} ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_27 = __this->___AutoText_48;
		uint64_t* L_28 = (&__this->___SokrAu_12);
		String_t* L_29;
		L_29 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_28, NULL);
		uint8_t L_30 = __this->___k_14;
		uint8_t L_31 = L_30;
		RuntimeObject* L_32 = Box(Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var, &L_31);
		String_t* L_33;
		L_33 = String_Format_m8C122B26BC5AA10E2550AECA16E57DAE10F07E30(_stringLiteralDCBBCFC2306ABD50659544F4820545B9C77E2E1B, L_32, NULL);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_29, L_33, NULL);
		NullCheck(L_27);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_27, L_34);
		// k = 0;
		__this->___k_14 = (uint8_t)0;
		return;
	}

IL_0152:
	{
		// if (auto == 0)
		uint64_t L_35 = __this->___auto_8;
		if (L_35)
		{
			goto IL_017b;
		}
	}
	{
		// AutoText.text = auto + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___AutoText_48;
		uint64_t* L_37 = (&__this->___auto_8);
		String_t* L_38;
		L_38 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_39);
		return;
	}

IL_017b:
	{
		// AutoText.text = auto.ToString("#,#") + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___AutoText_48;
		uint64_t* L_41 = (&__this->___auto_8);
		String_t* L_42;
		L_42 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_41, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_43;
		L_43 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_42, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_43);
		// }
		return;
	}
}
// System.Void Game::SokrMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_SokrMode_mC43C861FAA978081B06C5692EA1962410D14A386 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0067B6B6EB479C5C74CAD3B8A47F77EEB542F2A4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B858D99640F141D58C297D80BBBBA08E5C2B860);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3341C782DCE4645E5FC270FBA8F77C70C3F97B27);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral423748A63D68F482ED0AFF453022C574A5421FEA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5F701CA628F94DABE6A930A0AD7242CB9761405F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral686EBC7AAEA22F56C1190DC1E5D1752ACD8FDF62);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7AD189955E4E0110395C644533E77181BCF57ECB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C2774083B3EC96871A8396AEBA8B5A0CAA9832);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB53AE3A8AAB36BC62F319B4169BA464D5EEE011D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDD037FB3C755B0BA8BD57EDEF208CB4A7D835809);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF22F0E72DE6DC7385DEC73C10034ED2B7C9899E4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDB0AF4614E32ACDFBC44DCE7EA3A6A251BE120E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score >= 1000)
		uint64_t L_0 = __this->___score_6;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_017f;
		}
	}
	{
		// SokrSc = score;
		uint64_t L_1 = __this->___score_6;
		__this->___SokrSc_11 = L_1;
		goto IL_0041;
	}

IL_001f:
	{
		// SokrSc /= 1000;
		uint64_t L_2 = __this->___SokrSc_11;
		__this->___SokrSc_11 = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)1000))));
		// k++;
		uint8_t L_3 = __this->___k_14;
		__this->___k_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)));
	}

IL_0041:
	{
		// while (SokrSc >= 1000)
		uint64_t L_4 = __this->___SokrSc_11;
		if ((!(((uint64_t)L_4) < ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_001f;
		}
	}
	{
		// if (k == 1)
		uint8_t L_5 = __this->___k_14;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ??? ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___ScoreText_47;
		uint64_t* L_7 = (&__this->___SokrSc_11);
		String_t* L_8;
		L_8 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_7, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteral423748A63D68F482ED0AFF453022C574A5421FEA, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		goto IL_0176;
	}

IL_0082:
	{
		// else if (k == 2)
		uint8_t L_10 = __this->___k_14;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00b5;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ??? ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___ScoreText_47;
		uint64_t* L_12 = (&__this->___SokrSc_11);
		String_t* L_13;
		L_13 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_12, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteral7AD189955E4E0110395C644533E77181BCF57ECB, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		goto IL_0176;
	}

IL_00b5:
	{
		// else if (k == 3)
		uint8_t L_15 = __this->___k_14;
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00e8;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ??? ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___ScoreText_47;
		uint64_t* L_17 = (&__this->___SokrSc_11);
		String_t* L_18;
		L_18 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_17, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_18, _stringLiteralF22F0E72DE6DC7385DEC73C10034ED2B7C9899E4, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		goto IL_0176;
	}

IL_00e8:
	{
		// else if (k == 4)
		uint8_t L_20 = __this->___k_14;
		if ((!(((uint32_t)L_20) == ((uint32_t)4))))
		{
			goto IL_0118;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ????? ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___ScoreText_47;
		uint64_t* L_22 = (&__this->___SokrSc_11);
		String_t* L_23;
		L_23 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_22, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_24;
		L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_23, _stringLiteral3341C782DCE4645E5FC270FBA8F77C70C3F97B27, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_24);
		goto IL_0176;
	}

IL_0118:
	{
		// else if (k == 5)
		uint8_t L_25 = __this->___k_14;
		if ((!(((uint32_t)L_25) == ((uint32_t)5))))
		{
			goto IL_0148;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ??????? ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___ScoreText_47;
		uint64_t* L_27 = (&__this->___SokrSc_11);
		String_t* L_28;
		L_28 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_27, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_28, _stringLiteral5F701CA628F94DABE6A930A0AD7242CB9761405F, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		goto IL_0176;
	}

IL_0148:
	{
		// else if (k == 6)
		uint8_t L_30 = __this->___k_14;
		if ((!(((uint32_t)L_30) == ((uint32_t)6))))
		{
			goto IL_0176;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ??????? ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___ScoreText_47;
		uint64_t* L_32 = (&__this->___SokrSc_11);
		String_t* L_33;
		L_33 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_32, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_33, _stringLiteralB53AE3A8AAB36BC62F319B4169BA464D5EEE011D, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_34);
	}

IL_0176:
	{
		// k = 0;
		__this->___k_14 = (uint8_t)0;
		goto IL_01ce;
	}

IL_017f:
	{
		// if (score == 0)
		uint64_t L_35 = __this->___score_6;
		if (L_35)
		{
			goto IL_01a9;
		}
	}
	{
		// ScoreText.text = score + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___ScoreText_47;
		uint64_t* L_37 = (&__this->___score_6);
		String_t* L_38;
		L_38 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_39);
		goto IL_01ce;
	}

IL_01a9:
	{
		// ScoreText.text = score.ToString("#,#") + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___ScoreText_47;
		uint64_t* L_41 = (&__this->___score_6);
		String_t* L_42;
		L_42 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_41, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_43;
		L_43 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_42, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_43);
	}

IL_01ce:
	{
		// if (auto >= 1000)
		uint64_t L_44 = __this->___auto_8;
		if ((!(((uint64_t)L_44) >= ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_034c;
		}
	}
	{
		// SokrAu = auto;
		uint64_t L_45 = __this->___auto_8;
		__this->___SokrAu_12 = L_45;
		goto IL_020f;
	}

IL_01ed:
	{
		// SokrAu /= 1000;
		uint64_t L_46 = __this->___SokrAu_12;
		__this->___SokrAu_12 = ((int64_t)((uint64_t)(int64_t)L_46/(uint64_t)(int64_t)((int64_t)((int32_t)1000))));
		// k++;
		uint8_t L_47 = __this->___k_14;
		__this->___k_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, 1)));
	}

IL_020f:
	{
		// while (SokrAu >= 1000)
		uint64_t L_48 = __this->___SokrAu_12;
		if ((!(((uint64_t)L_48) < ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_01ed;
		}
	}
	{
		// if (k == 1)
		uint8_t L_49 = __this->___k_14;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0250;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ??? ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = __this->___AutoText_48;
		uint64_t* L_51 = (&__this->___SokrAu_12);
		String_t* L_52;
		L_52 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_51, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_53;
		L_53 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_52, _stringLiteral85C2774083B3EC96871A8396AEBA8B5A0CAA9832, NULL);
		NullCheck(L_50);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_53);
		goto IL_0344;
	}

IL_0250:
	{
		// else if (k == 2)
		uint8_t L_54 = __this->___k_14;
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_0283;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ??? ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = __this->___AutoText_48;
		uint64_t* L_56 = (&__this->___SokrAu_12);
		String_t* L_57;
		L_57 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_56, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_58;
		L_58 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_57, _stringLiteralFDB0AF4614E32ACDFBC44DCE7EA3A6A251BE120E, NULL);
		NullCheck(L_55);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_55, L_58);
		goto IL_0344;
	}

IL_0283:
	{
		// else if (k == 3)
		uint8_t L_59 = __this->___k_14;
		if ((!(((uint32_t)L_59) == ((uint32_t)3))))
		{
			goto IL_02b6;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ??? ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->___AutoText_48;
		uint64_t* L_61 = (&__this->___SokrAu_12);
		String_t* L_62;
		L_62 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_61, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_63;
		L_63 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_62, _stringLiteral686EBC7AAEA22F56C1190DC1E5D1752ACD8FDF62, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_63);
		goto IL_0344;
	}

IL_02b6:
	{
		// else if (k == 4)
		uint8_t L_64 = __this->___k_14;
		if ((!(((uint32_t)L_64) == ((uint32_t)4))))
		{
			goto IL_02e6;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ????? ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = __this->___AutoText_48;
		uint64_t* L_66 = (&__this->___SokrAu_12);
		String_t* L_67;
		L_67 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_66, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_68;
		L_68 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_67, _stringLiteral0067B6B6EB479C5C74CAD3B8A47F77EEB542F2A4, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_68);
		goto IL_0344;
	}

IL_02e6:
	{
		// else if (k == 5)
		uint8_t L_69 = __this->___k_14;
		if ((!(((uint32_t)L_69) == ((uint32_t)5))))
		{
			goto IL_0316;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ??????? ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___AutoText_48;
		uint64_t* L_71 = (&__this->___SokrAu_12);
		String_t* L_72;
		L_72 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_71, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_73;
		L_73 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_72, _stringLiteral2B858D99640F141D58C297D80BBBBA08E5C2B860, NULL);
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_70, L_73);
		goto IL_0344;
	}

IL_0316:
	{
		// else if (k == 6)
		uint8_t L_74 = __this->___k_14;
		if ((!(((uint32_t)L_74) == ((uint32_t)6))))
		{
			goto IL_0344;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ??????? ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = __this->___AutoText_48;
		uint64_t* L_76 = (&__this->___SokrAu_12);
		String_t* L_77;
		L_77 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_76, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_78;
		L_78 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_77, _stringLiteralDD037FB3C755B0BA8BD57EDEF208CB4A7D835809, NULL);
		NullCheck(L_75);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, L_78);
	}

IL_0344:
	{
		// k = 0;
		__this->___k_14 = (uint8_t)0;
		return;
	}

IL_034c:
	{
		// if (auto == 0)
		uint64_t L_79 = __this->___auto_8;
		if (L_79)
		{
			goto IL_0375;
		}
	}
	{
		// AutoText.text = auto + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_80 = __this->___AutoText_48;
		uint64_t* L_81 = (&__this->___auto_8);
		String_t* L_82;
		L_82 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_81, NULL);
		String_t* L_83;
		L_83 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_82, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_80);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_80, L_83);
		return;
	}

IL_0375:
	{
		// AutoText.text = auto.ToString("#,#") + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_84 = __this->___AutoText_48;
		uint64_t* L_85 = (&__this->___auto_8);
		String_t* L_86;
		L_86 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_85, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_87;
		L_87 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_86, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_84);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_87);
		// }
		return;
	}
}
// System.Void Game::PrefixMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_PrefixMode_m05AA1604778DD81E0D069B32F9802CA2C0DC1879 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2D1690889541B062DA91A62AC445891141ECD22A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral435314BECB73FD1E0E166D1FB18CF11BC2090EA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral62035F7A9B7361ECEA901E4EA68CDD8804D2792A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B1F81D50C33156C352137A0E8AD312869BE4BAC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3DA65A833BB6F5DD4BF93861D0322462BCEC3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83A838338D671480E05CB307679533E25524C8AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90086E4C4C29E89FC065D14A906518CF6FD30781);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD20A462829C293CB131BE90892A39C87876E7EB6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5BEFA6B97B8AB183CFB592394999030AA91D3E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF9C56BACDB8123CB1926E2CDE9C15F4F4675716E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFD55DE16DD4B7D19D5F0191294E6E1F14F61945E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDBEFC520382E602082CFD305E30DFA2C17DA709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (score >= 1000)
		uint64_t L_0 = __this->___score_6;
		if ((!(((uint64_t)L_0) >= ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_017f;
		}
	}
	{
		// SokrSc = score;
		uint64_t L_1 = __this->___score_6;
		__this->___SokrSc_11 = L_1;
		goto IL_0041;
	}

IL_001f:
	{
		// SokrSc /= 1000;
		uint64_t L_2 = __this->___SokrSc_11;
		__this->___SokrSc_11 = ((int64_t)((uint64_t)(int64_t)L_2/(uint64_t)(int64_t)((int64_t)((int32_t)1000))));
		// k++;
		uint8_t L_3 = __this->___k_14;
		__this->___k_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_3, 1)));
	}

IL_0041:
	{
		// while (SokrSc >= 1000)
		uint64_t L_4 = __this->___SokrSc_11;
		if ((!(((uint64_t)L_4) < ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_001f;
		}
	}
	{
		// if (k == 1)
		uint8_t L_5 = __this->___k_14;
		if ((!(((uint32_t)L_5) == ((uint32_t)1))))
		{
			goto IL_0082;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___ScoreText_47;
		uint64_t* L_7 = (&__this->___SokrSc_11);
		String_t* L_8;
		L_8 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_7, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_9;
		L_9 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_8, _stringLiteral83A838338D671480E05CB307679533E25524C8AA, NULL);
		NullCheck(L_6);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_6, L_9);
		goto IL_0176;
	}

IL_0082:
	{
		// else if (k == 2)
		uint8_t L_10 = __this->___k_14;
		if ((!(((uint32_t)L_10) == ((uint32_t)2))))
		{
			goto IL_00b5;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___ScoreText_47;
		uint64_t* L_12 = (&__this->___SokrSc_11);
		String_t* L_13;
		L_13 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_12, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_14;
		L_14 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_13, _stringLiteral6B3DA65A833BB6F5DD4BF93861D0322462BCEC3E, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_14);
		goto IL_0176;
	}

IL_00b5:
	{
		// else if (k == 3)
		uint8_t L_15 = __this->___k_14;
		if ((!(((uint32_t)L_15) == ((uint32_t)3))))
		{
			goto IL_00e8;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___ScoreText_47;
		uint64_t* L_17 = (&__this->___SokrSc_11);
		String_t* L_18;
		L_18 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_17, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_19;
		L_19 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_18, _stringLiteral435314BECB73FD1E0E166D1FB18CF11BC2090EA7, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		goto IL_0176;
	}

IL_00e8:
	{
		// else if (k == 4)
		uint8_t L_20 = __this->___k_14;
		if ((!(((uint32_t)L_20) == ((uint32_t)4))))
		{
			goto IL_0118;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___ScoreText_47;
		uint64_t* L_22 = (&__this->___SokrSc_11);
		String_t* L_23;
		L_23 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_22, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_24;
		L_24 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_23, _stringLiteralF9C56BACDB8123CB1926E2CDE9C15F4F4675716E, NULL);
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, L_24);
		goto IL_0176;
	}

IL_0118:
	{
		// else if (k == 5)
		uint8_t L_25 = __this->___k_14;
		if ((!(((uint32_t)L_25) == ((uint32_t)5))))
		{
			goto IL_0148;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___ScoreText_47;
		uint64_t* L_27 = (&__this->___SokrSc_11);
		String_t* L_28;
		L_28 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_27, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_29;
		L_29 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_28, _stringLiteralD20A462829C293CB131BE90892A39C87876E7EB6, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_29);
		goto IL_0176;
	}

IL_0148:
	{
		// else if (k == 6)
		uint8_t L_30 = __this->___k_14;
		if ((!(((uint32_t)L_30) == ((uint32_t)6))))
		{
			goto IL_0176;
		}
	}
	{
		// ScoreText.text = SokrSc.ToString("#,#") + " ???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_31 = __this->___ScoreText_47;
		uint64_t* L_32 = (&__this->___SokrSc_11);
		String_t* L_33;
		L_33 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_32, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_34;
		L_34 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_33, _stringLiteral2D1690889541B062DA91A62AC445891141ECD22A, NULL);
		NullCheck(L_31);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_31, L_34);
	}

IL_0176:
	{
		// k = 0;
		__this->___k_14 = (uint8_t)0;
		goto IL_01ce;
	}

IL_017f:
	{
		// if (score == 0)
		uint64_t L_35 = __this->___score_6;
		if (L_35)
		{
			goto IL_01a9;
		}
	}
	{
		// ScoreText.text = score + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_36 = __this->___ScoreText_47;
		uint64_t* L_37 = (&__this->___score_6);
		String_t* L_38;
		L_38 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_37, NULL);
		String_t* L_39;
		L_39 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_38, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_36);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, L_39);
		goto IL_01ce;
	}

IL_01a9:
	{
		// ScoreText.text = score.ToString("#,#") + " ??";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_40 = __this->___ScoreText_47;
		uint64_t* L_41 = (&__this->___score_6);
		String_t* L_42;
		L_42 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_41, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_43;
		L_43 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_42, _stringLiteral443255AAF5331EA18FFFF5C12F50480C3D275140, NULL);
		NullCheck(L_40);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_40, L_43);
	}

IL_01ce:
	{
		// if (auto >= 1000)
		uint64_t L_44 = __this->___auto_8;
		if ((!(((uint64_t)L_44) >= ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_034c;
		}
	}
	{
		// SokrAu = auto;
		uint64_t L_45 = __this->___auto_8;
		__this->___SokrAu_12 = L_45;
		goto IL_020f;
	}

IL_01ed:
	{
		// SokrAu /= 1000;
		uint64_t L_46 = __this->___SokrAu_12;
		__this->___SokrAu_12 = ((int64_t)((uint64_t)(int64_t)L_46/(uint64_t)(int64_t)((int64_t)((int32_t)1000))));
		// k++;
		uint8_t L_47 = __this->___k_14;
		__this->___k_14 = (uint8_t)((int32_t)(uint8_t)((int32_t)il2cpp_codegen_add((int32_t)L_47, 1)));
	}

IL_020f:
	{
		// while (SokrAu >= 1000)
		uint64_t L_48 = __this->___SokrAu_12;
		if ((!(((uint64_t)L_48) < ((uint64_t)((int64_t)((int32_t)1000))))))
		{
			goto IL_01ed;
		}
	}
	{
		// if (k == 1)
		uint8_t L_49 = __this->___k_14;
		if ((!(((uint32_t)L_49) == ((uint32_t)1))))
		{
			goto IL_0250;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ???/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_50 = __this->___AutoText_48;
		uint64_t* L_51 = (&__this->___SokrAu_12);
		String_t* L_52;
		L_52 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_51, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_53;
		L_53 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_52, _stringLiteralFD55DE16DD4B7D19D5F0191294E6E1F14F61945E, NULL);
		NullCheck(L_50);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_50, L_53);
		goto IL_0344;
	}

IL_0250:
	{
		// else if (k == 2)
		uint8_t L_54 = __this->___k_14;
		if ((!(((uint32_t)L_54) == ((uint32_t)2))))
		{
			goto IL_0283;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ???/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_55 = __this->___AutoText_48;
		uint64_t* L_56 = (&__this->___SokrAu_12);
		String_t* L_57;
		L_57 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_56, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_58;
		L_58 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_57, _stringLiteralD5BEFA6B97B8AB183CFB592394999030AA91D3E9, NULL);
		NullCheck(L_55);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_55, L_58);
		goto IL_0344;
	}

IL_0283:
	{
		// else if (k == 3)
		uint8_t L_59 = __this->___k_14;
		if ((!(((uint32_t)L_59) == ((uint32_t)3))))
		{
			goto IL_02b6;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ???/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_60 = __this->___AutoText_48;
		uint64_t* L_61 = (&__this->___SokrAu_12);
		String_t* L_62;
		L_62 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_61, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_63;
		L_63 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_62, _stringLiteral62035F7A9B7361ECEA901E4EA68CDD8804D2792A, NULL);
		NullCheck(L_60);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_60, L_63);
		goto IL_0344;
	}

IL_02b6:
	{
		// else if (k == 4)
		uint8_t L_64 = __this->___k_14;
		if ((!(((uint32_t)L_64) == ((uint32_t)4))))
		{
			goto IL_02e6;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ???/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = __this->___AutoText_48;
		uint64_t* L_66 = (&__this->___SokrAu_12);
		String_t* L_67;
		L_67 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_66, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_68;
		L_68 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_67, _stringLiteral6B1F81D50C33156C352137A0E8AD312869BE4BAC, NULL);
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, L_68);
		goto IL_0344;
	}

IL_02e6:
	{
		// else if (k == 5)
		uint8_t L_69 = __this->___k_14;
		if ((!(((uint32_t)L_69) == ((uint32_t)5))))
		{
			goto IL_0316;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ???/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___AutoText_48;
		uint64_t* L_71 = (&__this->___SokrAu_12);
		String_t* L_72;
		L_72 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_71, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_73;
		L_73 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_72, _stringLiteralFDBEFC520382E602082CFD305E30DFA2C17DA709, NULL);
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_70, L_73);
		goto IL_0344;
	}

IL_0316:
	{
		// else if (k == 6)
		uint8_t L_74 = __this->___k_14;
		if ((!(((uint32_t)L_74) == ((uint32_t)6))))
		{
			goto IL_0344;
		}
	}
	{
		// AutoText.text = SokrAu.ToString("#,#") + " ???/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = __this->___AutoText_48;
		uint64_t* L_76 = (&__this->___SokrAu_12);
		String_t* L_77;
		L_77 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_76, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_78;
		L_78 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_77, _stringLiteral90086E4C4C29E89FC065D14A906518CF6FD30781, NULL);
		NullCheck(L_75);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, L_78);
	}

IL_0344:
	{
		// k = 0;
		__this->___k_14 = (uint8_t)0;
		return;
	}

IL_034c:
	{
		// if (auto == 0)
		uint64_t L_79 = __this->___auto_8;
		if (L_79)
		{
			goto IL_0375;
		}
	}
	{
		// AutoText.text = auto + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_80 = __this->___AutoText_48;
		uint64_t* L_81 = (&__this->___auto_8);
		String_t* L_82;
		L_82 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_81, NULL);
		String_t* L_83;
		L_83 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_82, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_80);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_80, L_83);
		return;
	}

IL_0375:
	{
		// AutoText.text = auto.ToString("#,#") + " ??/???";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_84 = __this->___AutoText_48;
		uint64_t* L_85 = (&__this->___auto_8);
		String_t* L_86;
		L_86 = UInt64_ToString_m50E767FE093714A58711CD7A3A4FE1A712FBB680(L_85, _stringLiteralD8BDC6B61D65D993FD0560975C6EBB4EC7D87C92, NULL);
		String_t* L_87;
		L_87 = String_Concat_mAF2CE02CC0CB7460753D0A1A91CCF2B1E9804C5D(L_86, _stringLiteral9518D84E58AF6E9669AA443BFEE87BCD7E7B6549, NULL);
		NullCheck(L_84);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_84, L_87);
		// }
		return;
	}
}
// System.Void Game::OnSecretPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnSecretPan_m67879E6B7F29843068EF69552F7E260B6E7A3DC0 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// SecretPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SecretPan_103;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void Game::ExitSecretPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ExitSecretPan_m0F7BF07413C07F8D4EEF1599591C6C6175030696 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// SecretPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SecretPan_103;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Game::OnAdminPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnAdminPan_m35E044E24FFD63AF3437762B183951191E099340 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D5399508427CE79556CDA71918020C1E8D15B53);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (InputCode.text == "123")
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___InputCode_56;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		bool L_2;
		L_2 = String_op_Equality_m0D685A924E5CD78078F248ED1726DA5A9D7D6AC0(L_1, _stringLiteral0D5399508427CE79556CDA71918020C1E8D15B53, NULL);
		if (!L_2)
		{
			goto IL_002f;
		}
	}
	{
		// AdminPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___AdminPan_104;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)1, NULL);
		// SecretPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___SecretPan_103;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
	}

IL_002f:
	{
		// }
		return;
	}
}
// System.Void Game::ExitAdminPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_ExitAdminPan_m407019BD663BFE28778DD9F208F77692C3260138 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// AdminPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AdminPan_104;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void Game::EnterBonus()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_EnterBonus_m4607510280C379E64580321979F9470D4E6CFE29 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	try
	{// begin try (depth: 1)
		// score = ulong.Parse(InputScore.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___InputScore_57;
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		uint64_t L_2;
		L_2 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_1, NULL);
		__this->___score_6 = L_2;
		// }   catch {   }
		goto IL_001b;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0018;
		}
		throw e;
	}

CATCH_0018:
	{// begin catch(System.Object)
		// }   catch {   }
		// }   catch {   }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_001b;
	}// end catch (depth: 1)

IL_001b:
	{
	}
	try
	{// begin try (depth: 1)
		// click = ulong.Parse(InputClick.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___InputClick_58;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_3);
		uint64_t L_5;
		L_5 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_4, NULL);
		__this->___click_7 = L_5;
		// }   catch {   }
		goto IL_0037;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0034;
		}
		throw e;
	}

CATCH_0034:
	{// begin catch(System.Object)
		// }   catch {   }
		// }   catch {   }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0037;
	}// end catch (depth: 1)

IL_0037:
	{
	}
	try
	{// begin try (depth: 1)
		// auto = ulong.Parse(InputAuto.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_6 = __this->___InputAuto_59;
		NullCheck(L_6);
		String_t* L_7;
		L_7 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_6);
		uint64_t L_8;
		L_8 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_7, NULL);
		__this->___auto_8 = L_8;
		// }   catch {   }
		goto IL_0053;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0050;
		}
		throw e;
	}

CATCH_0050:
	{// begin catch(System.Object)
		// }   catch {   }
		// }   catch {   }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_0053;
	}// end catch (depth: 1)

IL_0053:
	{
	}
	try
	{// begin try (depth: 1)
		// save = ulong.Parse(InputSave.text);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_9 = __this->___InputSave_60;
		NullCheck(L_9);
		String_t* L_10;
		L_10 = VirtualFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_9);
		uint64_t L_11;
		L_11 = UInt64_Parse_m1354FD3AF2866D7BF3B3C7257012F243FDB9303A(L_10, NULL);
		__this->___save_9 = L_11;
		// }   catch {   }
		goto IL_006f;
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006c;
		}
		throw e;
	}

CATCH_006c:
	{// begin catch(System.Object)
		// }   catch {   }
		// }   catch {   }
		IL2CPP_POP_ACTIVE_EXCEPTION();
		goto IL_006f;
	}// end catch (depth: 1)

IL_006f:
	{
		// PlayerPrefs.SetString("click", click.ToString());
		uint64_t* L_12 = (&__this->___click_7);
		String_t* L_13;
		L_13 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_12, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral43EFCF5E3018D7F9CB3012489204ED178D31F95B, L_13, NULL);
		// PlayerPrefs.SetString("auto", auto.ToString());
		uint64_t* L_14 = (&__this->___auto_8);
		String_t* L_15;
		L_15 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_14, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteralF152B296BCB34070EE69020F0A59C611E4BBA10F, L_15, NULL);
		// PlayerPrefs.SetString("save", save.ToString());
		uint64_t* L_16 = (&__this->___save_9);
		String_t* L_17;
		L_17 = UInt64_ToString_mD3AAE57EA18A6779F5A17E4F91C900A231EB0A6F(L_16, NULL);
		PlayerPrefs_SetString_mDB0D33B60716ECC669310D27F861F464ACE3A3FF(_stringLiteral2B0C356B8F65C82E29F3552BAB2FD17172148778, L_17, NULL);
		// }
		return;
	}
}
// System.Void Game::OnInfoPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnInfoPan_m7F6C54E62A9F78E6E7FD1C12A3D772480157C056 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// if (checkInf == true)
		bool L_0 = __this->___checkInf_123;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// InfoPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___InfoPan_99;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// BonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BonusPan_96;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// AutoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___AutoPan_97;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// SavePan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___SavePan_98;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// SettingsPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SettingsPan_100;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// checkInf = false;
		__this->___checkInf_123 = (bool)0;
		// checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// checkSav = true;
		__this->___checkSav_122 = (bool)1;
		// checkSet = true;
		__this->___checkSet_124 = (bool)1;
		// checkBon = true;
		__this->___checkBon_120 = (bool)1;
		return;
	}

IL_0068:
	{
		// InfoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___InfoPan_99;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// }
		return;
	}
}
// System.Void Game::OnSettingsPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnSettingsPan_m7E39FD9E55FF5B04FA41EF226C1675771B404D1C (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// if (checkSet == true)
		bool L_0 = __this->___checkSet_124;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// SettingsPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SettingsPan_100;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// InfoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___InfoPan_99;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// BonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___BonusPan_96;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// AutoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___AutoPan_97;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// SavePan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SavePan_98;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// checkSet = false;
		__this->___checkSet_124 = (bool)0;
		// checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// checkSav = true;
		__this->___checkSav_122 = (bool)1;
		// checkBon = true;
		__this->___checkBon_120 = (bool)1;
		return;
	}

IL_0068:
	{
		// SettingsPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___SettingsPan_100;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// checkSet = true;
		__this->___checkSet_124 = (bool)1;
		// }
		return;
	}
}
// System.Void Game::OnBonPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnBonPan_m7B986B78548E854556C9C18BF92AB1ACD1A40D67 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// if (checkBon == true)
		bool L_0 = __this->___checkBon_120;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// BonusPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___BonusPan_96;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// AutoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___AutoPan_97;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// SavePan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___SavePan_98;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// InfoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___InfoPan_99;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// SettingsPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SettingsPan_100;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// checkBon = false;
		__this->___checkBon_120 = (bool)0;
		// checkSet = true;
		__this->___checkSet_124 = (bool)1;
		// checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// checkSav = true;
		__this->___checkSav_122 = (bool)1;
		return;
	}

IL_0068:
	{
		// BonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___BonusPan_96;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// checkBon = true;
		__this->___checkBon_120 = (bool)1;
		// }
		return;
	}
}
// System.Void Game::OnAutPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnAutPan_m5593BA912AE3801575DD8239F3C9987C09DF8321 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// if (checkAut == true)
		bool L_0 = __this->___checkAut_121;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// AutoPan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___AutoPan_97;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// BonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BonusPan_96;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// SavePan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___SavePan_98;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// InfoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___InfoPan_99;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// SettingsPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SettingsPan_100;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// checkAut = false;
		__this->___checkAut_121 = (bool)0;
		// checkSet = true;
		__this->___checkSet_124 = (bool)1;
		// checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// checkSav = true;
		__this->___checkSav_122 = (bool)1;
		// checkBon = true;
		__this->___checkBon_120 = (bool)1;
		return;
	}

IL_0068:
	{
		// AutoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___AutoPan_97;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// }
		return;
	}
}
// System.Void Game::OnSavPan()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game_OnSavPan_m8151B7DC8CC5E803617D5F986A7DEF518477F45B (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	{
		// if (checkSav == true)
		bool L_0 = __this->___checkSav_122;
		if (!L_0)
		{
			goto IL_0068;
		}
	}
	{
		// SavePan.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___SavePan_98;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// BonusPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___BonusPan_96;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// AutoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___AutoPan_97;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// InfoPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___InfoPan_99;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// SettingsPan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___SettingsPan_100;
		NullCheck(L_5);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_5, (bool)0, NULL);
		// checkSav = false;
		__this->___checkSav_122 = (bool)0;
		// checkSet = true;
		__this->___checkSet_124 = (bool)1;
		// checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// checkBon = true;
		__this->___checkBon_120 = (bool)1;
		return;
	}

IL_0068:
	{
		// SavePan.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = __this->___SavePan_98;
		NullCheck(L_6);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_6, (bool)0, NULL);
		// checkSav = true;
		__this->___checkSav_122 = (bool)1;
		// }
		return;
	}
}
// System.Void Game::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Game__ctor_m22BD482E0EC7CE99133FCF5EEF21DBC98A0BE5C3 (Game_tA6A98F81416961C425C0982A763372581DF081F1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00B1423978FDF4C198DEE3B61F77EA076A4160E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01637B662C860A4FEA1F5B57B9E4049BCA27A92A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0329E5F87CFDF86E96C9A0654F26F463F7A21EFC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1AFC80677B2471F997FA3EA85E0D02B0B3EA17AC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B41B585BE49D415DA38772998D9F53F7269AA6D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1C3392C2C64BC9B71E70E9DFCB9BB6F250915D43);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2012205BC34E1596C145E8F2836654CB4DB435AA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E53EA12D943C14376715D21DAB74E4D73C5751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral28528D727DD8488EC1BE01DA32AC8F1348FAC96F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A802FCD11737517F2D5352A17B4EDBD653D42BB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral380F2188FDF06E62168456E0B5DCE9C7597B3307);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral406039EC8806862DC33A11277467F97951546F04);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral47800C885B0F146A396AD9BEACB5E9FC3D63E87A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4B368F0F6A6A7298233153B2CDAD8BF8838EFC61);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4F15275AB3F8728F9FCB048C4EF599F65EBEE308);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral841BAF591C90A868230B27939D5821ACC8574ECA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral91F35000449965B1C5FC85F4A5CEF8916C9723B0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral92A724EB1B2F6C69B890D3B5F5FC04BD603592F2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral942648654A524F6E984CCA6E5751578BD0E8540E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99EE809A706EB6A02AE32EE72A1373507E413EA3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1F4427357E012FBE6BA7F78D4C03A7212F3D90B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAB89A97C82F2E0FF82A456F5A70FC75C932AA64B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1155366CB1FA02D517CF66C07B6A76DE0DE61BC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC161E02E08A002D3A5028CD393D64CC02DB37E7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBC3DCBC2F3F66AD7F0C66EA21E9743B08CD8A1FA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDE873725694F455431C96F205C872524296EB64F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE09B3659FAC2814324890495F0C68FCA268D5B45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84F2B479265FAD93BE81E77636775B4B5E83831);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEBBE7D99064EADE8A07CCC391FE3830C086746FD);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED5169E4CC70ACFAD5449D117F0423892FBF0C89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA62FBFE4E50CD6BF703F0C9569D92C185108758);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public ulong score = 50; // ????
		__this->___score_6 = ((int64_t)((int32_t)50));
		// public int m = 255;
		__this->___m_15 = ((int32_t)255);
		// public int isOnSound = 55555;
		__this->___isOnSound_16 = ((int32_t)55555);
		// public ulong[] clickCost = new ulong[20];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_0 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___clickCost_20 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickCost_20), (void*)L_0);
		// public ulong[] autoCost = new ulong[30];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_1 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->___autoCost_21 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoCost_21), (void*)L_1);
		// public ulong[] saveCost = new ulong[10];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_2 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___saveCost_22 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveCost_22), (void*)L_2);
		// public ulong[] clickCostStart = new ulong[20];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_3 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___clickCostStart_24 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickCostStart_24), (void*)L_3);
		// public ulong[] autoCostStart = new ulong[30];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->___autoCostStart_25 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoCostStart_25), (void*)L_4);
		// public ulong[] saveCostStart = new ulong[10];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___saveCostStart_26 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveCostStart_26), (void*)L_5);
		// public ulong[] clickBonus = new ulong[20];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_6 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___clickBonus_28 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickBonus_28), (void*)L_6);
		// public ulong[] autoBonus = new ulong[30];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_7 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->___autoBonus_29 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoBonus_29), (void*)L_7);
		// public ulong[] saveBonus = new ulong[10];
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_8 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___saveBonus_30 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveBonus_30), (void*)L_8);
		// public int[] clickNum = new int[20];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_9 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___clickNum_32 = L_9;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickNum_32), (void*)L_9);
		// public int[] autoNum = new int[30];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_10 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->___autoNum_33 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___autoNum_33), (void*)L_10);
		// public int[] saveNum = new int[10];
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___saveNum_34 = L_11;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___saveNum_34), (void*)L_11);
		// public GameObject[] BonusButton = new GameObject[20];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_12 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)20));
		__this->___BonusButton_61 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___BonusButton_61), (void*)L_12);
		// public GameObject[] AutoButton = new GameObject[30];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_13 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)30));
		__this->___AutoButton_62 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___AutoButton_62), (void*)L_13);
		// public GameObject[] SaveButton = new GameObject[10];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_14 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)10));
		__this->___SaveButton_63 = L_14;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SaveButton_63), (void*)L_14);
		// public Sprite QuanSt = Resources.Load<Sprite>("QuanStr");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_15;
		L_15 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralA1F4427357E012FBE6BA7F78D4C03A7212F3D90B, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___QuanSt_64 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___QuanSt_64), (void*)L_15);
		// public Sprite Quark = Resources.Load<Sprite>("Quark");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_16;
		L_16 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral00B1423978FDF4C198DEE3B61F77EA076A4160E8, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Quark_65 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Quark_65), (void*)L_16);
		// public Sprite Proton = Resources.Load<Sprite>("Proton");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_17;
		L_17 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralEBBE7D99064EADE8A07CCC391FE3830C086746FD, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Proton_66 = L_17;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Proton_66), (void*)L_17);
		// public Sprite Nucleus = Resources.Load<Sprite>("Nucleus");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_18;
		L_18 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral380F2188FDF06E62168456E0B5DCE9C7597B3307, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Nucleus_67 = L_18;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Nucleus_67), (void*)L_18);
		// public Sprite Atom = Resources.Load<Sprite>("Atom");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_19;
		L_19 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral99EE809A706EB6A02AE32EE72A1373507E413EA3, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Atom_68 = L_19;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Atom_68), (void*)L_19);
		// public Sprite Mol = Resources.Load<Sprite>("Mol");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_20;
		L_20 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral47800C885B0F146A396AD9BEACB5E9FC3D63E87A, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Mol_69 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Mol_69), (void*)L_20);
		// public Sprite Gen = Resources.Load<Sprite>("Gen");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_21;
		L_21 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral0329E5F87CFDF86E96C9A0654F26F463F7A21EFC, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Gen_70 = L_21;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Gen_70), (void*)L_21);
		// public Sprite Chrom = Resources.Load<Sprite>("Chrom");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_22;
		L_22 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral4B368F0F6A6A7298233153B2CDAD8BF8838EFC61, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Chrom_71 = L_22;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Chrom_71), (void*)L_22);
		// public Sprite Kletka = Resources.Load<Sprite>("Kletka");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_23;
		L_23 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral2A802FCD11737517F2D5352A17B4EDBD653D42BB, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Kletka_72 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Kletka_72), (void*)L_23);
		// public Sprite ListD = Resources.Load<Sprite>("ListD");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_24;
		L_24 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralBC3DCBC2F3F66AD7F0C66EA21E9743B08CD8A1FA, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___ListD_73 = L_24;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___ListD_73), (void*)L_24);
		// public Sprite Tree = Resources.Load<Sprite>("Tree");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_25;
		L_25 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral2F94F4742528BDF9EB11E79D6B1AA693BB9912DF, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Tree_74 = L_25;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Tree_74), (void*)L_25);
		// public Sprite Forest = Resources.Load<Sprite>("Forest");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_26;
		L_26 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralBC161E02E08A002D3A5028CD393D64CC02DB37E7, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Forest_75 = L_26;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Forest_75), (void*)L_26);
		// public Sprite Ostrov = Resources.Load<Sprite>("Ostrov");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_27;
		L_27 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral28528D727DD8488EC1BE01DA32AC8F1348FAC96F, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Ostrov_76 = L_27;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Ostrov_76), (void*)L_27);
		// public Sprite Earth = Resources.Load<Sprite>("Earth");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_28;
		L_28 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral1B41B585BE49D415DA38772998D9F53F7269AA6D, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Earth_77 = L_28;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Earth_77), (void*)L_28);
		// public Sprite SystPl = Resources.Load<Sprite>("SystPl");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_29;
		L_29 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralB1155366CB1FA02D517CF66C07B6A76DE0DE61BC, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___SystPl_78 = L_29;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SystPl_78), (void*)L_29);
		// public Sprite Sozvezdie = Resources.Load<Sprite>("Sozvezdie");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_30;
		L_30 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral841BAF591C90A868230B27939D5821ACC8574ECA, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Sozvezdie_79 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Sozvezdie_79), (void*)L_30);
		// public Sprite Galaxy = Resources.Load<Sprite>("Galaxy");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_31;
		L_31 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral91F35000449965B1C5FC85F4A5CEF8916C9723B0, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Galaxy_80 = L_31;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Galaxy_80), (void*)L_31);
		// public Sprite GalaxyClass = Resources.Load<Sprite>("GalaxyClass");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_32;
		L_32 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralDE873725694F455431C96F205C872524296EB64F, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___GalaxyClass_81 = L_32;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___GalaxyClass_81), (void*)L_32);
		// public Sprite SuperGalaxyClass = Resources.Load<Sprite>("SuperGalaxyClass");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_33;
		L_33 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralE09B3659FAC2814324890495F0C68FCA268D5B45, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___SuperGalaxyClass_82 = L_33;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SuperGalaxyClass_82), (void*)L_33);
		// public Sprite Metagal = Resources.Load<Sprite>("Metagal");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_34;
		L_34 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral4F15275AB3F8728F9FCB048C4EF599F65EBEE308, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Metagal_83 = L_34;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Metagal_83), (void*)L_34);
		// public Sprite Uny = Resources.Load<Sprite>("Uny");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_35;
		L_35 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral1C3392C2C64BC9B71E70E9DFCB9BB6F250915D43, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___Uny_84 = L_35;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___Uny_84), (void*)L_35);
		// public Sprite f8 = Resources.Load<Sprite>("f8");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_36;
		L_36 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralED5169E4CC70ACFAD5449D117F0423892FBF0C89, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f8_85 = L_36;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f8_85), (void*)L_36);
		// public Sprite f9 = Resources.Load<Sprite>("f9");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_37;
		L_37 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralE84F2B479265FAD93BE81E77636775B4B5E83831, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f9_86 = L_37;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f9_86), (void*)L_37);
		// public Sprite f10 = Resources.Load<Sprite>("f10");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_38;
		L_38 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral942648654A524F6E984CCA6E5751578BD0E8540E, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f10_87 = L_38;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f10_87), (void*)L_38);
		// public Sprite f11 = Resources.Load<Sprite>("f11");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_39;
		L_39 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral01637B662C860A4FEA1F5B57B9E4049BCA27A92A, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f11_88 = L_39;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f11_88), (void*)L_39);
		// public Sprite f12 = Resources.Load<Sprite>("f12");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_40;
		L_40 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral20E53EA12D943C14376715D21DAB74E4D73C5751, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f12_89 = L_40;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f12_89), (void*)L_40);
		// public Sprite f13 = Resources.Load<Sprite>("f13");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_41;
		L_41 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral92A724EB1B2F6C69B890D3B5F5FC04BD603592F2, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f13_90 = L_41;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f13_90), (void*)L_41);
		// public Sprite f14 = Resources.Load<Sprite>("f14");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_42;
		L_42 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralFA62FBFE4E50CD6BF703F0C9569D92C185108758, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f14_91 = L_42;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f14_91), (void*)L_42);
		// public Sprite f15 = Resources.Load<Sprite>("f15");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_43;
		L_43 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral406039EC8806862DC33A11277467F97951546F04, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f15_92 = L_43;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f15_92), (void*)L_43);
		// public Sprite f16 = Resources.Load<Sprite>("f16");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_44;
		L_44 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral1AFC80677B2471F997FA3EA85E0D02B0B3EA17AC, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___f16_93 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___f16_93), (void*)L_44);
		// public Sprite SoundOn = Resources.Load<Sprite>("SoundOn");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_45;
		L_45 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteralAB89A97C82F2E0FF82A456F5A70FC75C932AA64B, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___SoundOn_94 = L_45;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SoundOn_94), (void*)L_45);
		// public Sprite SoundOff = Resources.Load<Sprite>("SoundOff");
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_46;
		L_46 = Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703(_stringLiteral2012205BC34E1596C145E8F2836654CB4DB435AA, Resources_Load_TisSprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99_m8D8AE46A3EEE9C6B2D218827881E60CA3CFE7703_RuntimeMethod_var);
		__this->___SoundOff_95 = L_46;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___SoundOff_95), (void*)L_46);
		// private GameObject[] clickTextPool = new GameObject[15];
		GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF* L_47 = (GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF*)SZArrayNew(GameObjectU5BU5D_tFF67550DFCE87096D7A3734EA15B75896B2722CF_il2cpp_TypeInfo_var, (uint32_t)((int32_t)15));
		__this->___clickTextPool_119 = L_47;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___clickTextPool_119), (void*)L_47);
		// private bool checkBon = true;
		__this->___checkBon_120 = (bool)1;
		// private bool checkAut = true;
		__this->___checkAut_121 = (bool)1;
		// private bool checkSav = true;
		__this->___checkSav_122 = (bool)1;
		// private bool checkInf = true;
		__this->___checkInf_123 = (bool)1;
		// private bool checkSet = true;
		__this->___checkSet_124 = (bool)1;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Game/<BonusPerSec>d__137::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBonusPerSecU3Ed__137__ctor_mCF8CEF7C46B7B0CFB96F1B1BCC78A74802041D30 (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Game/<BonusPerSec>d__137::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBonusPerSecU3Ed__137_System_IDisposable_Dispose_m9A5E7BBA094EFC0A43D6055B3A3F013F41A700C8 (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Game/<BonusPerSec>d__137::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBonusPerSecU3Ed__137_MoveNext_m798E2ED72F35384BB46B97337612152945A76E09 (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Game_tA6A98F81416961C425C0982A763372581DF081F1* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
	}

IL_001e:
	{
		// yield return new WaitForSeconds(1);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// score += auto;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_5 = V_1;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_6 = V_1;
		NullCheck(L_6);
		uint64_t L_7 = L_6->___score_6;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_8 = V_1;
		NullCheck(L_8);
		uint64_t L_9 = L_8->___auto_8;
		NullCheck(L_5);
		L_5->___score_6 = ((int64_t)il2cpp_codegen_add((int64_t)L_7, (int64_t)L_9));
		// AllEnergy += auto;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_10 = V_1;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_11 = V_1;
		NullCheck(L_11);
		uint64_t L_12 = L_11->___AllEnergy_10;
		Game_tA6A98F81416961C425C0982A763372581DF081F1* L_13 = V_1;
		NullCheck(L_13);
		uint64_t L_14 = L_13->___auto_8;
		NullCheck(L_10);
		L_10->___AllEnergy_10 = ((int64_t)il2cpp_codegen_add((int64_t)L_12, (int64_t)L_14));
		// while (true)
		goto IL_001e;
	}
}
// System.Object Game/<BonusPerSec>d__137::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBonusPerSecU3Ed__137_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFFB3E76AD345F5DEBC0071A40363ABD08C8ADB3E (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Game/<BonusPerSec>d__137::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBonusPerSecU3Ed__137_System_Collections_IEnumerator_Reset_m8E56A05FB82AF48B30791C07C740AAA636EC5E5F (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBonusPerSecU3Ed__137_System_Collections_IEnumerator_Reset_m8E56A05FB82AF48B30791C07C740AAA636EC5E5F_RuntimeMethod_var)));
	}
}
// System.Object Game/<BonusPerSec>d__137::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBonusPerSecU3Ed__137_System_Collections_IEnumerator_get_Current_mD5893E4C2F3B9147133F4FC3C9EA34CF837C3B30 (U3CBonusPerSecU3Ed__137_t47F0ADED37D89FF49DDAE1FDA7FC1424B4EA6E4D* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Notifications::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifications_Awake_mC3817C2FE865BE8229B73FDF5E784010332FB599 (Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FB56C8861544146EF414DAE01766AD43F440960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAF10AB1DD4ADD811B50C39A84430856DE23AB4D4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB21F06A589F494074BB64D7E5C6D51B453A5512A);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// AndroidNotificationChannel channel = new AndroidNotificationChannel()
		// {
		//     Name = "News | ???????",
		//     Description = "??????????? ? ???????? ????",
		//     Id = "news",
		//     Importance = Importance.High //Low, Default, High
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC));
		AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline((&V_0), _stringLiteralB21F06A589F494074BB64D7E5C6D51B453A5512A, NULL);
		AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline((&V_0), _stringLiteralAF10AB1DD4ADD811B50C39A84430856DE23AB4D4, NULL);
		AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline((&V_0), _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960, NULL);
		AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline((&V_0), 4, NULL);
		AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC L_0 = V_0;
		// AndroidNotificationCenter.RegisterNotificationChannel(channel);
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		AndroidNotificationCenter_RegisterNotificationChannel_mC8D43CD3C737B8C2E953439DED312AE70EE51D44(L_0, NULL);
		// }
		return;
	}
}
// System.Void Notifications::SendNotification()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifications_SendNotification_mA7081B7B5E33DB359DE6CA6AA005F09914BCF8E4 (Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5FB56C8861544146EF414DAE01766AD43F440960);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral99B859F7B6108521BD4A6369B742624C78957F73);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE5776261AD4DD555AA7131F2B322AAE5C9E71440);
		s_Il2CppMethodInitialized = true;
	}
	AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 V_0;
	memset((&V_0), 0, sizeof(V_0));
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// AndroidNotification notification = new AndroidNotification()
		// {
		//     Title = "?????????? ??????????!",
		//     Text = "??????? ????? ???????!!!",
		//     FireTime = System.DateTime.Now.AddSeconds(5)
		// };
		il2cpp_codegen_initobj((&V_0), sizeof(AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18));
		AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline((&V_0), _stringLiteralE5776261AD4DD555AA7131F2B322AAE5C9E71440, NULL);
		AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline((&V_0), _stringLiteral99B859F7B6108521BD4A6369B742624C78957F73, NULL);
		il2cpp_codegen_runtime_class_init_inline(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_il2cpp_TypeInfo_var);
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0;
		L_0 = DateTime_get_Now_mC336498972C48439ADCD5C50D35FAE0F2A48B0F0(NULL);
		V_1 = L_0;
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_1;
		L_1 = DateTime_AddSeconds_mC5FE3FB22A1295CA747746ECE48B9D4A4B6B2E81((&V_1), (5.0), NULL);
		AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline((&V_0), L_1, NULL);
		AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18 L_2 = V_0;
		// AndroidNotificationCenter.SendNotification(notification, "news");
		il2cpp_codegen_runtime_class_init_inline(AndroidNotificationCenter_t2CFF9EDE8FB85C6993B260A6A9E6225D384D173A_il2cpp_TypeInfo_var);
		int32_t L_3;
		L_3 = AndroidNotificationCenter_SendNotification_mD7092A8D42FA2D18CB393B73205358930D4B96D4(L_2, _stringLiteral5FB56C8861544146EF414DAE01766AD43F440960, NULL);
		// }
		return;
	}
}
// System.Void Notifications::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Notifications__ctor_m7565860263B8003314D1D28BF9A95541D40626D6 (Notifications_tFC1BC99F91FE9B02BCF9D9AA5109516F4591A126* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Color__ctor_mCD6889CDE39F18704CD6EA8E2EFBFA48BA3E13B0_inline (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F* __this, float ___r0, float ___g1, float ___b2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___r0;
		__this->___r_0 = L_0;
		float L_1 = ___g1;
		__this->___g_1 = L_1;
		float L_2 = ___b2;
		__this->___b_2 = L_2;
		__this->___a_3 = (1.0f);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Name_m7BFE6876244461FD7C31E44737BE531FA1C8D06F_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Name { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CNameU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNameU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Description_m1FEF9E6977640D864A5A47DFA4B88988E90C3D09_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Description { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CDescriptionU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDescriptionU3Ek__BackingField_2), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Id_mF7C5C0A558A8B0936EAEE02E63FA75D3863491E8_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Id { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CIdU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CIdU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotificationChannel_set_Importance_mE15044EC9CF9254A9667DEC1212C42162B34A980_inline (AndroidNotificationChannel_tC6BA531E60083BC47807903A8486C2C2BF51FEEC* __this, int32_t ___value0, const RuntimeMethod* method) 
{
	{
		// public Importance Importance { get; set; }
		int32_t L_0 = ___value0;
		__this->___U3CImportanceU3Ek__BackingField_3 = L_0;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Title_m35F0E43355F04357F2D9331A11704214DAB7A613_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Title { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTitleU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTitleU3Ek__BackingField_0), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_Text_mDED33D1FDAF3BAB04DBFEB2CBD805A2BE91F4AE8_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, String_t* ___value0, const RuntimeMethod* method) 
{
	{
		// public string Text { get; set; }
		String_t* L_0 = ___value0;
		__this->___U3CTextU3Ek__BackingField_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_1), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void AndroidNotification_set_FireTime_mF3EF2E73DDC86E2A3C385005F6678DBDFF6BE340_inline (AndroidNotification_t870D188EFDC943952EB96ECD295B41095EAA7E18* __this, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___value0, const RuntimeMethod* method) 
{
	{
		// public DateTime FireTime { get; set; }
		DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D L_0 = ___value0;
		__this->___U3CFireTimeU3Ek__BackingField_3 = L_0;
		return;
	}
}
