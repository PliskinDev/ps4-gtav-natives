/*[created by mizdx] [3:33 am 3/17/2023]*/
#pragma once

#include "invoker.h"
#include "types.h"

static void WAIT(int ms) { invoke<Void>(0x4EDE34FBADD967A6, ms); }
static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0xE81651AD79516E48, scriptName, stackSize); }
static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0xB8BA7F44DF1575E1, scriptName, args, argCount, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0xEB1C67C3A5333A92, scriptHash, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0xC4BB298BD441BE78, scriptHash, args, argCount, stackSize); }
static int TIMERA() { return invoke<int>(0x83666F9FB8FEBD4B); }
static int TIMERB() { return invoke<int>(0xC9D9444186B5A374); }
static void SETTIMERA(int value) { invoke<Void>(0xC1B1E9A034A63A62, value); }
static void SETTIMERB(int value) { invoke<Void>(0x5AE11BC36633DE4E, value); }
static float TIMESTEP() { return invoke<float>(0x0000000050597EE2); }
static float SIN(float value) { return invoke<float>(0x0BADBFA3B172435F, value); }
static float COS(float value) { return invoke<float>(0xD0FFB162F40A139C, value); }
static float SQRT(float value) { return invoke<float>(0x71D93B57D07F9804, value); }
static float POW(float base, float exponent) { return invoke<float>(0xE3621CC40F31FE2E, base, exponent); }
static float LOG10(float value) { return invoke<float>(0xE816E655DE37FE20, value); }
static float VMAG(float x, float y, float z) { return invoke<float>(0x652D2EEEF1D3E62C, x, y, z); }
static float VMAG2(float x, float y, float z) { return invoke<float>(0xA8CEACB4F35AE058, x, y, z); }
static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x2A488C176D52CCA5, x1, y1, z1, x2, y2, z2); }
static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xB7A628320EFF8E47, x1, y1, z1, x2, y2, z2); }
static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0xEDD95A39E5544DE8, value, bitShift); }
static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x97EF1E5BCE9DC075, value, bitShift); }
static int FLOOR(float value) { return invoke<int>(0xF34EE736CF047844, value); }
static int CEIL(float value) { return invoke<int>(0x11E019C8F43ACC8A, value); }
static int ROUND(float value) { return invoke<int>(0xF2DB717A73826179, value); }
static float TO_FLOAT(int value) { return invoke<float>(0xBBDA792448DB5A89, value); }
static void SET_THIS_THREAD_PRIORITY(int priority) { invoke<Void>(0x42B65DEEF2EDF2A1, priority); }
static BOOL APP_DATA_VALID() { return invoke<BOOL>(0xEF61EA953D7D9120); }
static int APP_GET_INT(const char* property) { return invoke<int>(0x817F2264835EDDBC, property); }
static float APP_GET_FLOAT(const char* property) { return invoke<float>(0x24F333D2B21DC3EC, property); }
static const char* APP_GET_STRING(const char* property) { return invoke<const char*>(0x9C05D47937B35A7C, property); }
static void APP_SET_INT(const char* property, int value) { invoke<Void>(0xB0263DDA967C39ED, property, value); }
static void APP_SET_FLOAT(const char* property, float value) { invoke<Void>(0x177034FB2F5D6CA1, property, value); }
static void APP_SET_STRING(const char* property, const char* value) { invoke<Void>(0x792060B1E40FC4C2, property, value); }
static void APP_SET_APP(const char* appName) { invoke<Void>(0x6E3671ABA19358C3, appName); }
static void APP_SET_BLOCK(const char* blockName) { invoke<Void>(0x1E0C7CB82F66748E, blockName); }
static void APP_CLEAR_BLOCK() { invoke<Void>(0xE231BAAA0221F57B); }
static void APP_CLOSE_APP() { invoke<Void>(0x2A160FB19DDAA9B3); }
static void APP_CLOSE_BLOCK() { invoke<Void>(0x43183279AE613B06); }
static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0x71EAA0F7384D1969); }
static BOOL APP_HAS_SYNCED_DATA(const char* appName) { return invoke<BOOL>(0xAEC6A486BE509E01, appName); }
static void APP_SAVE_DATA() { invoke<Void>(0x16AA4E3C2A093DD0); }
static int APP_GET_DELETED_FILE_STATUS() { return invoke<int>(0x898EDBE06F676B56); }
static BOOL APP_DELETE_APP_DATA(const char* appName) { return invoke<BOOL>(0xC88197BB8F2056FE, appName); }
static void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0x1BC60757AC20ACCF, ringtoneName, ped, p2); }
static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0x129DE7ED6456C4CA, ped); }
static void STOP_PED_RINGTONE(Ped ped) { invoke<Void>(0x92187CF73A8D1B96, ped); }
static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xE87F28FD4128D063); }
static BOOL IS_MOBILE_INTERFERENCE_ACTIVE() { return invoke<BOOL>(0x56D84C8BC3CE3EF9); }
static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0x4C2ADBAAF83DA56A); }
static void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0xC401B1960D35A6C4, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { invoke<Void>(0x302B7D91564CDE7F, index, ped, p2); }
static void SET_POSITION_FOR_NULL_CONV_PED(Any p0, float p1, float p2, float p3) { invoke<Void>(0x353876FDDC0D0E0E, p0, p1, p2, p3); }
static void SET_ENTITY_FOR_NULL_CONV_PED(int p0, Entity entity) { invoke<Void>(0x34F5E7395D31DAD7, p0, entity); }
static void SET_MICROPHONE_POSITION(BOOL toggle, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0x6250F3FAA1D0F93E, toggle, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
static void SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(BOOL p0) { invoke<Void>(0x6CBE32FD4ABF9B73, p0); }
static void SET_CONVERSATION_AUDIO_PLACEHOLDER(BOOL p0) { invoke<Void>(0xC5C39679B6570380, p0); }
static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xABC27367E50604B7, p0, p1); }
static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0x4FF8DE2B4C376BE4, p0, p1); }
static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xA406335199BF1001, p0, p1, p2, p3); }
static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x4082E7EF621D1686, p0, p1, p2, p3); }
static void START_PRELOADED_CONVERSATION() { invoke<Void>(0x43D69D4AAC59FA8E); }
static BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return invoke<BOOL>(0x22258A5EB34183DC); }
static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0x1F9EB85925C3ECD7); }
static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xF7C641B5F6AF0A82); }
static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0xE7365CC791D1E4EB); }
static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xF329B991CDE087C7, p0); }
static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xC78B293A5F4EACF9); }
static int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<int>(0x0F15249D24BC5ADA, p0); }
static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0x329FFB0BB004FDEE); }
static void INTERRUPT_CONVERSATION(Ped ped, const char* voiceline, const char* speaker) { invoke<Void>(0x695EDD4AD352F831, ped, voiceline, speaker); }
static void INTERRUPT_CONVERSATION_AND_PAUSE(Ped ped, const char* p1, const char* speaker) { invoke<Void>(0xEEC6E2199CA0A2FC, ped, p1, speaker); }
static int GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(Any* p0) { return invoke<int>(0xC0B57599F426855E, p0); }
static void SET_NO_DUCKING_FOR_CONVERSATION(BOOL p0) { invoke<Void>(0x8B3770418CACFABE, p0); }
static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0x8E1F26D6742EC167, p0); }
static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0x6CC88053C1AF072D); }
static BOOL REQUEST_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xE60D329593E7759D, audioBank, p1, p2); }
static BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0x91476A70AA1CB09A, audioBank, p1, p2); }
static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xD7E1DF759CD0FFF2, audioBank, p1, p2); }
static BOOL HINT_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0x329F5E069BAF8209, audioBank, p1, p2); }
static BOOL HINT_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0x69600B337BEBDC69, audioBank, p1, p2); }
static BOOL HINT_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0x533FC7490FC4937D, audioBank, p1, p2); }
static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xAF648ACD10AB3A0F); }
static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0x37EFCB45A4F13EB5); }
static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0x48FA483FE4F18CFE, audioBank); }
static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0x59E2E0637E7776F3); }
static void UNHINT_AMBIENT_AUDIO_BANK() { invoke<Void>(0x3A2C09DEA2F7A5FB); }
static void UNHINT_SCRIPT_AUDIO_BANK() { invoke<Void>(0xC0BE3854AFD77802); }
static void UNHINT_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0x9F7EBAD31811A31E, audioBank); }
static int GET_SOUND_ID() { return invoke<int>(0xCA369FBC0DE29517); }
static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0x394AFAC073E1F277, soundId); }
static void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0x85E83A170EF61477, soundId, audioName, audioRef, p3, p4, p5); }
static void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { invoke<Void>(0xBF3D28CA44F3BE2D, soundId, audioName, audioRef, p3); }
static void PLAY_DEFERRED_SOUND_FRONTEND(const char* soundName, const char* soundsetName) { invoke<Void>(0xD35776C4668F2E8D, soundName, soundsetName); }
static void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { invoke<Void>(0xBD618A73193F9982, soundId, audioName, entity, audioRef, isNetwork, p5); }
static void PLAY_SOUND_FROM_ENTITY_HASH(int soundId, Hash model, Entity entity, Hash soundSetHash, Any p4, Any p5) { invoke<Void>(0x299B36D8A0393C3E, soundId, model, entity, soundSetHash, p4, p5); }
static void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { invoke<Void>(0xF37CDE164C892195, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); }
static void UPDATE_SOUND_COORD(int soundId, float x, float y, float z) { invoke<Void>(0xBE63C0B214CC5142, soundId, x, y, z); }
static void STOP_SOUND(int soundId) { invoke<Void>(0x8E4825CCACA34B58, soundId); }
static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0xFCF4655788628D0F, soundId); }
static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0x37964484C6C1561D, netId); }
static void SET_VARIABLE_ON_SOUND(int soundId, const char* variable, float p2) { invoke<Void>(0x3F002AA9562BF0BE, soundId, variable, p2); }
static void SET_VARIABLE_ON_STREAM(const char* variable, float p1) { invoke<Void>(0x37605EDCEE5D5944, variable, p1); }
static void OVERRIDE_UNDERWATER_STREAM(const char* p0, BOOL p1) { invoke<Void>(0xC9695FEF4C4A96F8, p0, p1); }
static void SET_VARIABLE_ON_UNDER_WATER_STREAM(const char* variableName, float value) { invoke<Void>(0xFFB39CC82F4E6583, variableName, value); }
static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0x9F0C06CFBACDD6A1, soundId); }
static void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0x04C016145CE6A18B, ped, speechName, speechParam, p3); }
static void PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0x6F0064B122E0462C, ped, speechName, speechParam, p3); }
static void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { invoke<Void>(0x4CAD907F190E6F10, ped, speechName, voiceName, speechParam, p4); }
static void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) { invoke<Void>(0xF4129180F5858D16, speechName, voiceName, x, y, z, speechParam); }
static void OVERRIDE_TREVOR_RAGE(const char* voiceEffect) { invoke<Void>(0xFABB7252CDD75478, voiceEffect); }
static void RESET_TREVOR_RAGE() { invoke<Void>(0xEAC3827244C8E5B5); }
static void SET_PLAYER_ANGRY(Ped ped, BOOL toggle) { invoke<Void>(0x892251E58BAE563B, ped, toggle); }
static void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { invoke<Void>(0xEBA2204AAD092B47, ped, painID, p1, p3); }
static void RELEASE_WEAPON_AUDIO() { invoke<Void>(0xAE5E74D6FA4EF0D8); }
static void ACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xF010888FF9A380E6, mode); }
static void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0x5FFA5801E4084FC5, mode); }
static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { invoke<Void>(0x397CF4F4C8B17365, ped, name); }
static void SET_AMBIENT_VOICE_NAME_HASH(Ped ped, Hash hash) { invoke<Void>(0xE0B01E3F4FF01B04, ped, hash); }
static Hash GET_AMBIENT_VOICE_NAME_HASH(Ped ped) { return invoke<Hash>(0xD93B65D497A805BA, ped); }
static void SET_PED_VOICE_FULL(Ped ped) { invoke<Void>(0x7E30BA14928608A0, ped); }
static void SET_PED_RACE_AND_VOICE_GROUP(Ped ped, int p1, Hash voiceGroup) { invoke<Void>(0xE315F38FDD0139FF, ped, p1, voiceGroup); }
static void SET_PED_VOICE_GROUP(Ped ped, Hash voiceGroupHash) { invoke<Void>(0x996F4A3208DAD314, ped, voiceGroupHash); }
static void SET_PED_VOICE_GROUP_FROM_RACE_TO_PVG(Ped ped, Hash voiceGroupHash) { invoke<Void>(0x4349438F7A83A186, ped, voiceGroupHash); }
static void SET_PED_GENDER(Ped ped, BOOL p1) { invoke<Void>(0xCE8A758C0ADD192B, ped, p1); }
static void STOP_CURRENT_PLAYING_SPEECH(Ped ped) { invoke<Void>(0x16DD8628F525A206, ped); }
static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { invoke<Void>(0xDCD95AE65EFC28CE, ped); }
static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x912159A05BE6B52E, ped); }
static BOOL IS_SCRIPTED_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0xAD0D2187C5FE447D, p0); }
static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0x75E315E7679F4F24, ped); }
static BOOL IS_ANY_POSITIONAL_SPEECH_PLAYING() { return invoke<BOOL>(0x101615BBD5E614BD); }
static BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL p2) { return invoke<BOOL>(0x8A6F4A122DEA1DA7, ped, speechName, p2); }
static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0x6B919BD9340E189A, ped); }
static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0x8A19BA162BA1DE3E, ped, toggle); }
static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, int p1, const char* speechName) { invoke<Void>(0xABFC7C2CD8D89949, pedHandle, p1, speechName); }
static BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return invoke<BOOL>(0xA6A0FE99C58BF725, pedHandle); }
static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0xB66A5C25E8DCC180, animal, mood); }
static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0x92BAF57CC368DFC5); }
static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0xFFC0556FB7074B1F, state); }
static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xE1799BB6E4C1CDFB); }
static const char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<const char*>(0xA9CB3A11303C5801); }
static const char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<const char*>(0x9A7254C20CB82B70, radioStation); }
static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0x3BB0DC333050E9BD); }
static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xC47E3FF56898A28B); }
static BOOL IS_RADIO_FADED_OUT() { return invoke<BOOL>(0x93D3C066DE3C5879); }
static void SET_RADIO_RETUNE_UP() { invoke<Void>(0x7CD8D024151C6CF9); }
static void SET_RADIO_RETUNE_DOWN() { invoke<Void>(0xFB7DD2B09F9CFA1E); }
static void SET_RADIO_TO_STATION_NAME(const char* stationName) { invoke<Void>(0x166878629B365828, stationName); }
static void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { invoke<Void>(0x38911F7BA2D48F10, vehicle, radioStation); }
static void SET_VEH_HAS_NORMAL_RADIO(Vehicle vehicle) { invoke<Void>(0x678D5CE177157549, vehicle); }
static BOOL IS_VEHICLE_RADIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xC052348A3DF7313F, vehicle); }
static void SET_VEH_FORCED_RADIO_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xC023C55477474DBE, vehicle); }
static void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation, Any p2) { invoke<Void>(0x74378390011ACDA4, emitterName, radioStation, p2); }
static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { invoke<Void>(0xC897319696131088, emitterName, toggle); }
static void LINK_STATIC_EMITTER_TO_ENTITY(const char* emitterName, Entity entity) { invoke<Void>(0xACF36914BA191DCB, emitterName, entity); }
static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0x21880A4FCBA19269, radioStation); }
static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0x51E3279E9437131C, active); }
static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0x5A0A1BD816B9AAB5, newsStory); }
static BOOL IS_MISSION_NEWS_STORY_UNLOCKED(int newsStory) { return invoke<BOOL>(0x7D01976EF2600F1C, newsStory); }
static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0x6E5F2B4C6A398419); }
static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0xB830B097D0050A2F, play); }
static void SKIP_RADIO_FORWARD() { invoke<Void>(0xDB57B7ED2C49BEAD); }
static void FREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0x203D79229B3797AE, radioStation); }
static void UNFREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xAA4A71CD7DB4FB3B, radioStation); }
static void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { invoke<Void>(0xF51244E6BCE779C5, toggle); }
static void SET_INITIAL_PLAYER_STATION(const char* radioStation) { invoke<Void>(0x91115A9BE4445AA6, radioStation); }
static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { invoke<Void>(0x938C85923AD6778A, toggle); }
static void SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) { invoke<Void>(0xE42344700E00B10F, radioStation, radioTrack); }
static void SET_RADIO_TRACK_WITH_START_OFFSET(const char* radioStationName, const char* mixName, int p2) { invoke<Void>(0x117ED8E568A3BE94, radioStationName, mixName, p2); }
static void SET_NEXT_RADIO_TRACK(const char* radioName, const char* radioTrack, const char* p2, const char* p3) { invoke<Void>(0x709E956A8CB78CCA, radioName, radioTrack, p2, p3); }
static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x7D167E642755C276, vehicle, toggle); }
static BOOL CAN_VEHICLE_RECEIVE_CB_RADIO(Vehicle vehicle) { return invoke<BOOL>(0x798A910E92BD7584, vehicle); }
static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { invoke<Void>(0x048A57C4A90E9F0D, toggle); }
static BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return invoke<BOOL>(0x2044128E627E0951); }
static BOOL IS_PLAYER_VEH_RADIO_ENABLE() { return invoke<BOOL>(0x28D9C88BBCC658EF); }
static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x4DC72C4B884A6C59, vehicle, toggle); }
static void SET_POSITIONED_PLAYER_VEHICLE_RADIO_EMITTER_ENABLED(Any p0) { invoke<Void>(0x0EECA35FE21D7026, p0); }
static void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { invoke<Void>(0xB1A857E9C5658D10, radioStation, trackListName, p2); }
static void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { invoke<Void>(0x7035CF3AB08A7AF7, radioStation); }
static int GET_NUM_UNLOCKED_RADIO_STATIONS() { return invoke<int>(0x8044961915B48136); }
static int FIND_RADIO_STATION_INDEX(Hash stationNameHash) { return invoke<int>(0xE029F4A956BFCCBE, stationNameHash); }
static void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { invoke<Void>(0x247C4DE693AD9B36, radioStation, toggle); }
static void SET_RADIO_FRONTEND_FADE_TIME(float fadeTime) { invoke<Void>(0xACF6553AB8A4EA53, fadeTime); }
static void UNLOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0x7C236591DA4F980B, radioStation, trackListName); }
static void LOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0x68A74A172B90D43E, radioStation, trackListName); }
static void UPDATE_UNLOCKABLE_DJ_RADIO_TRACKS(BOOL enableMixes) { invoke<Void>(0x66B137F3AE54333B, enableMixes); }
static void LOCK_RADIO_STATION(const char* radioStationName, BOOL toggle) { invoke<Void>(0xCA3C8048CFD52E02, radioStationName, toggle); }
static void SET_RADIO_STATION_AS_FAVOURITE(const char* radioStation, BOOL toggle) { invoke<Void>(0x518DFEC4FCC07749, radioStation, toggle); }
static BOOL IS_RADIO_STATION_FAVOURITED(const char* radioStation) { return invoke<BOOL>(0x36759581D0633B06, radioStation); }
static BOOL GET_NEXT_AUDIBLE_BEAT(float* out1, float* out2, int* out3) { return invoke<BOOL>(0x604E6C2DCB4B137F, out1, out2, out3); }
static void FORCE_MUSIC_TRACK_LIST(const char* radioStation, const char* trackListName, int milliseconds) { invoke<Void>(0x07B35A877A492E93, radioStation, trackListName, milliseconds); }
static int GET_CURRENT_TRACK_PLAY_TIME(const char* radioStationName) { return invoke<int>(0x19CC911A97AF8F27, radioStationName); }
static Hash GET_CURRENT_TRACK_SOUND_NAME(const char* radioStationName) { return invoke<Hash>(0xBFF9D1DD2EA1B515, radioStationName); }
static void SET_VEHICLE_MISSILE_WARNING_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x41F9D74D334CF57B, vehicle, toggle); }
static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { invoke<Void>(0x57FF2FF5DA6DCB15, zoneName, p1, p2); }
static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { invoke<Void>(0xA9B69A9A9C786B86, zoneName, p1); }
static void SET_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xAE9B78A0E33292A8, ambientZone, p1, p2); }
static void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1) { invoke<Void>(0x884A5994C1CC6222, ambientZone, p1); }
static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xCD04ECE71F3A9215, ambientZone, p1, p2); }
static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0x6866AF3D8691EDC0, ambientZone, p1, p2); }
static BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return invoke<BOOL>(0x80EEE4C5880DA82E, ambientZone); }
static void REFRESH_CLOSEST_OCEAN_SHORELINE() { invoke<Void>(0x8D2FEC38ED93537D); }
static void SET_CUTSCENE_AUDIO_OVERRIDE(const char* name) { invoke<Void>(0x91044D2095108F03, name); }
static void SET_VARIABLE_ON_SYNCH_SCENE_AUDIO(const char* variableName, float value) { invoke<Void>(0x477B0461E172D182, variableName, value); }
static int PLAY_POLICE_REPORT(const char* name, float p1) { return invoke<int>(0x7A9F2D6596A1FF08, name, p1); }
static void CANCEL_ALL_POLICE_REPORTS() { invoke<Void>(0x19F3009F6A632270); }
static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0x5D4EC68787718A25, vehicle); }
static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL override, int hornHash) { invoke<Void>(0x7BEAE55022AB21EB, vehicle, override, hornHash); }
static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x1A90E9DC88A85C9D, vehicle); }
static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0x99E0ED93D0644C97, toggle); }
static void SET_RADIO_POSITION_AUDIO_MUTE(BOOL p0) { invoke<Void>(0x058438EA17EA0E85, p0); }
static void SET_VEHICLE_CONVERSATIONS_PERSIST(BOOL p0, BOOL p1) { invoke<Void>(0x443E60546660D332, p0, p1); }
static void SET_VEHICLE_CONVERSATIONS_PERSIST_NEW(BOOL p0, BOOL p1, BOOL p2) { invoke<Void>(0xD61294E5AA976DE5, p0, p1, p2); }
static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0x3D6F33E7EFD6D669); }
static int GET_STREAM_PLAY_TIME() { return invoke<int>(0x99BA44ED7240274A); }
static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0xB3157976738FC0C0, streamName, soundSet); }
static BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return invoke<BOOL>(0xCC32CFCCD0223A2F, streamName, startOffset, soundSet); }
static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0xF60A7646F4B460F7, ped); }
static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0x40B0ADC3A86BF939, vehicle); }
static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0x1A44103FB18BB653, object); }
static void PLAY_STREAM_FRONTEND() { invoke<Void>(0x64B3EF30EAA9FBA3); }
static void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { invoke<Void>(0x8D4B90E299F8C082, x, y, z); }
static void STOP_STREAM() { invoke<Void>(0x22A76EDE2316E9A1); }
static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xFD61BB3B8F1CDB6D, ped, shaking); }
static void BLOCK_ALL_SPEECH_FROM_PED(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0x789F31BC158A5307, ped, p1, p2); }
static void STOP_PED_SPEAKING_SYNCED(Ped ped, BOOL p1) { invoke<Void>(0x8ADC49ACBB4FF0E4, ped, p1); }
static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xEA65800FC08BB2CB, ped, toggle); }
static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xE8B33D130955481B, ped); }
static void BLOCK_SPEECH_CONTEXT_GROUP(const char* p0, int p1) { invoke<Void>(0x4D4012166DD4F5AA, p0, p1); }
static void UNBLOCK_SPEECH_CONTEXT_GROUP(const char* p0) { invoke<Void>(0x9C23276BBB08E098, p0); }
static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8C9AE8FF021E8F23, vehicle, toggle); }
static void SET_SIREN_BYPASS_MP_DRIVER_CHECK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x88B7E0BE68436D8B, vehicle, toggle); }
static void TRIGGER_SIREN_AUDIO(Vehicle vehicle) { invoke<Void>(0xE868283F11B10F97, vehicle); }
static void SET_HORN_PERMANENTLY_ON(Vehicle vehicle) { invoke<Void>(0x8D78BCB9B0FC86A6, vehicle); }
static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x07A608749EC88F3A, vehicle, toggle); }
static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xF8B40A38F93CE540, vehicle, p1); }
static void SET_HORN_PERMANENTLY_ON_TIME(Vehicle vehicle, float time) { invoke<Void>(0x0E054C79B87C8FB2, vehicle, time); }
static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x27E2D66061E7E264, vehicle, toggle); }
static void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle vehicle, const char* audioName) { invoke<Void>(0x4294356B761DCABE, vehicle, audioName); }
static void PRELOAD_VEHICLE_AUDIO_BANK(Hash vehicleModel) { invoke<Void>(0xE84254DC19B3CA6B, vehicleModel); }
static void SET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle, const char* p1, const char* p2) { invoke<Void>(0xD87145DC228F73CB, vehicle, p1, p2); }
static void RESET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle) { invoke<Void>(0xBE72843E382ACF4E, vehicle); }
static void SET_VEHICLE_FORCE_REVERSE_WARNING(Any p0, Any p1) { invoke<Void>(0x495131016E1A03BE, p0, p1); }
static BOOL IS_VEHICLE_AUDIBLY_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xE3DB661464962CF4, vehicle); }
static void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(Vehicle vehicle, float damageFactor) { invoke<Void>(0x0BA0348CAAB53EC0, vehicle, damageFactor); }
static void SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Vehicle vehicle, float intensity) { invoke<Void>(0x45FFAC45E551D308, vehicle, intensity); }
static void ENABLE_VEHICLE_FANBELT_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2F0DDBBB402A1C2F, vehicle, toggle); }
static void ENABLE_VEHICLE_EXHAUST_POPS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xB37F7EC8F0694F4D, vehicle, toggle); }
static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8A85315947DF6C94, vehicle, toggle); }
static void SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x27EC3EC3B245C5CC, vehicle, toggle); }
static void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { invoke<Void>(0x60F1DCFB89B4F353, doorHash, toggle); }
static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0x8093F3812E836BCF, vehicle, doorId); }
static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xDCC6C00DE6C4A799, vehicle, doorId); }
static void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC62EF361B6CB976, vehicle, toggle); }
static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0x7104198E063B41C7); }
static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0xAA3A5AD85A475137, active); }
static void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { invoke<Void>(0xFAE22BD3C12AEFB4, audioName); }
static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xB7A02BE66E44058F); }
static BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return invoke<BOOL>(0x1FC87F78B679BE3D); }
static void BLOCK_DEATH_JINGLE(BOOL toggle) { invoke<Void>(0x022FC2EACDDD3CB2, toggle); }
static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0xCAC4020CCF361AC8, scene); }
static void STOP_AUDIO_SCENE(const char* scene) { invoke<Void>(0xB43467C43086A6A1, scene); }
static void STOP_AUDIO_SCENES() { invoke<Void>(0x3C6BB574B1895B94); }
static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0xBC2EE32DE886BD08, scene); }
static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { invoke<Void>(0x082E0064E4F27AFC, scene, variable, value); }
static void SET_AUDIO_SCRIPT_CLEANUP_TIME(int time) { invoke<Void>(0x0D7BAEA1C3D6BDB6, time); }
static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { invoke<Void>(0x616C2EAE947E6027, entity, groupName, p2); }
static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { invoke<Void>(0x001B008A010F2FE6, entity, p1); }
static BOOL AUDIO_IS_MUSIC_PLAYING() { return invoke<BOOL>(0x4FAAAB99FFA2702C); }
static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<BOOL>(0x7507A74A3D963966); }
static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x16088CC55E7F218A, eventName); }
static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x2C7FEB8222C29D99, eventName); }
static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0x86A2BC11844DEEB3, eventName); }
static BOOL IS_MUSIC_ONESHOT_PLAYING() { return invoke<BOOL>(0xFB9CF6B99A98306F); }
static int GET_MUSIC_PLAYTIME() { return invoke<int>(0x1304366BC7BE185B); }
static void SET_GLOBAL_RADIO_SIGNAL_LEVEL(Any p0) { invoke<Void>(0x5F3ABB7227973CB8, p0); }
static void RECORD_BROKEN_GLASS(float x, float y, float z, float radius) { invoke<Void>(0xCD8CCE6C07790657, x, y, z, radius); }
static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xC22A1D86EFB5A8CA); }
static void SCRIPT_OVERRIDES_WIND_ELEVATION(BOOL p0, Any p1) { invoke<Void>(0x2995BB5B3AA97FE6, p0, p1); }
static void SET_PED_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0x30CC8BA35211A422, p0, p1); }
static void SET_PED_INTERIOR_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0x728E3CDB3B64DE89, p0, p1); }
static void FORCE_PED_PANIC_WALLA() { invoke<Void>(0xABB26A8481225EDC); }
static BOOL PREPARE_ALARM(const char* alarmName) { return invoke<BOOL>(0x0C876A2D0F41B79C, alarmName); }
static void START_ALARM(const char* alarmName, BOOL p2) { invoke<Void>(0x4C6BF3BC14C6F6D6, alarmName, p2); }
static void STOP_ALARM(const char* alarmName, BOOL toggle) { invoke<Void>(0xA6274B757A008184, alarmName, toggle); }
static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0xFAE67C69C14B564A, stop); }
static BOOL IS_ALARM_PLAYING(const char* alarmName) { return invoke<BOOL>(0x65CB233333D99E11, alarmName); }
static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0xCDF8A102C63845CC, vehicle); }
static Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return invoke<Hash>(0x46B7259FABD90750, vehicle); }
static void RESET_PED_AUDIO_FLAGS(Ped ped) { invoke<Void>(0x4E7D42A9AC9E71EB, ped); }
static void SET_PED_FOOTSTEPS_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xD3709D521B87D7B8, ped, toggle); }
static void SET_PED_CLOTH_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0x0AD4EECE226A86F5, ped, toggle); }
static void OVERRIDE_PLAYER_GROUND_MATERIAL(Hash hash, BOOL toggle) { invoke<Void>(0x1E0388A9E6A3BF5B, hash, toggle); }
static void USE_FOOTSTEP_SCRIPT_SWEETENERS(Ped ped, BOOL p1, Hash hash) { invoke<Void>(0x1E8AEBD23A5C1511, ped, p1, hash); }
static void OVERRIDE_MICROPHONE_SETTINGS(Hash hash, BOOL toggle) { invoke<Void>(0x2F0605DFDF7593AB, hash, toggle); }
static void FREEZE_MICROPHONE() { invoke<Void>(0xA7047BB729F81596); }
static void DISTANT_COP_CAR_SIRENS(BOOL value) { invoke<Void>(0xEA602FA4CD3530B8, value); }
static void SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Vehicle vehicle, BOOL p1) { invoke<Void>(0x60D61C2E8F5D9601, vehicle, p1); }
static void ENABLE_STUNT_JUMP_AUDIO() { invoke<Void>(0xA9C10BD85DD34D7E); }
static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { invoke<Void>(0xCFBD89D2F1F18961, flagName, toggle); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioEvent, Any p1) { return invoke<BOOL>(0xA8327B614CA7628F, audioEvent, p1); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int sceneID, const char* audioEvent) { return invoke<BOOL>(0x20279DB6A8C883E5, sceneID, audioEvent); }
static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0x9DE3D932AA2B055C, sceneID); }
static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0x32FA1FA41E0D63D1, sceneID); }
static void INIT_SYNCH_SCENE_AUDIO_WITH_POSITION(const char* audioEvent, float x, float y, float z) { invoke<Void>(0xB94570412D3EB8C2, audioEvent, x, y, z); }
static void INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY(const char* audioEvent, Entity entity) { invoke<Void>(0x4FE00B5CFB97782B, audioEvent, entity); }
static void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { invoke<Void>(0xC5EE3F8EC7822462, mode); }
static void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { invoke<Void>(0xC73D0514D61174D1, p0, p1); }
static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xFAF6BF5476CB00A8, p0); }
static void STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS() { invoke<Void>(0x57BCB62796BFF290); }
static int GET_MUSIC_VOL_SLIDER() { return invoke<int>(0xC7E97C503E2ACEE9); }
static void REQUEST_TENNIS_BANKS(Ped ped) { invoke<Void>(0x08E29D89D4C88997, ped); }
static void UNREQUEST_TENNIS_BANKS() { invoke<Void>(0xD1E84FD28D4A7B38); }
static void SET_SKIP_MINIGUN_SPIN_UP_AUDIO(BOOL p0) { invoke<Void>(0xE9B1F35A218F1FC7, p0); }
static void STOP_CUTSCENE_AUDIO() { invoke<Void>(0x583A32C5EA5495CD); }
static BOOL HAS_LOADED_MP_DATA_SET() { return invoke<BOOL>(0x12E01CD1D5C72213); }
static BOOL HAS_LOADED_SP_DATA_SET() { return invoke<BOOL>(0x369A4B2B92F12461); }
static int GET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle) { return invoke<int>(0xEEDADE9115768A64, vehicle); }
static void SET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle, int value) { invoke<Void>(0x315A149C242011DE, vehicle, value); }
static void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { invoke<Void>(0x897DF886E8694302, name, model, p2, p3); }
static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { invoke<Void>(0x55F4E2629EABB8DD, scriptName, modelHash, p2, activationRange, p4, p5); }
static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0x71C1A46B17126AA4, object); }
static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { invoke<Void>(0xA341ACB237C23A75, scriptName, activationRange, p2); }
static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0x173751E886F8E9AB); }
static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0x4C38AD1938C28F80, brainSet); }
static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xD17268F762AAD469, brainSet); }
static void REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0x97620981EC3F7099); }
static void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0x2DB5A63C4A5800E5); }
static void REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0x8C0CA18CAAE89A2D, scriptName); }
static void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xB3D198039DB6F5C6, scriptName); }
static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { invoke<Void>(0xE37AF9002E782BA0, render, ease, easeTime, p3, p4, p5); }
static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float p1, int p2, Any p3) { invoke<Void>(0xC289B882CEF4CAC9, render, p1, p2, p3); }
static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0x69D23632E4288DBD, camName, p1); }
static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0x2CB6AB601EB7D2D9, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xBB209150C6081BBE, camHash, p1); }
static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0x96A32328480B485C, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static void DESTROY_CAM(Cam cam, BOOL bScriptHostCam) { invoke<Void>(0x85E6A1E36B5E2E4D, cam, bScriptHostCam); }
static void DESTROY_ALL_CAMS(BOOL bScriptHostCam) { invoke<Void>(0x3AA8CFEBC938A945, bScriptHostCam); }
static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0x78411E34CF90EA8C, cam); }
static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0x4CBC5D1BC117616B, cam, active); }
static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xBC886554B5888A64, cam); }
static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0x8DE2438443E6A145, cam); }
static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xFCB6553111578B2F); }
static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0xA452B06E281A9014, cam); }
static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0x9DDBEF363FADFA4C, cam, rotationOrder); }
static float GET_CAM_FOV(Cam cam) { return invoke<float>(0x4A1D1AB55229AAF0, cam); }
static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0x97410F245819ED32, cam); }
static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xEF763079652110C0, cam); }
static float GET_CAM_NEAR_DOF(Cam cam) { return invoke<float>(0x4329E0C9A71DAF53, cam); }
static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0x2221B1FEFEE35449, cam); }
static float GET_CAM_DOF_STRENGTH(Cam cam) { return invoke<float>(0xEDDF0C80A9EEE28A, cam); }
static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { invoke<Void>(0xA3774254665BAA82, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); }
static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0x1761457F86AD0EE2, cam, posX, posY, posZ); }
static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0x5E5CEC33463AD803, cam, rotX, rotY, rotZ, rotationOrder); }
static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0x58BDA5D9262F5D30, cam, fieldOfView); }
static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0x3AAB5D3F3D4028CC, cam, nearClip); }
static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0x8397B3389E13A5E5, cam, farClip); }
static void FORCE_CAM_FAR_CLIP(Cam cam, float p1) { invoke<Void>(0xFA4389643D1609AE, cam, p1); }
static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0x687E31348D8E19AD, cam, strength); }
static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0x1991568378B6C0D0, cam, nearDOF); }
static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0x12DA57732DE5D8BB, cam, farDOF); }
static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0x4396EEBF487EDFB1, cam, dofStrength); }
static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0x75C0D0B8F3E221F1, cam, p1, p2, p3, p4); }
static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0x3089A583C66DAC0E, cam, toggle); }
static void SET_USE_HI_DOF() { invoke<Void>(0xB6387DEFC12580A6); }
static void SET_USE_HI_DOF_ON_SYNCED_SCENE_THIS_UPDATE() { invoke<Void>(0xB6D9A8668A9B769C); }
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0x530423D35DCB5139, camera, p1); }
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(Any p0, float p1) { invoke<Void>(0xA1A2D94E99309CF1, p0, p1); }
static void SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { invoke<Void>(0xC316A4E0AF22543B, camera, p1); }
static void SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(Cam camera, float multiplier) { invoke<Void>(0x880E454F39FC7F42, camera, multiplier); }
static void SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) { invoke<Void>(0xB44FCE2D38FDEDFE, camera, p1); }
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0x365C28B73347797E, camera, p1); }
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { invoke<Void>(0xF94FC0634C750884, camera, p1); }
static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0x03F10D56CCA2C055, cam, entity, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0x19DB71A72065EFB0, cam, ped, boneIndex, x, y, z, heading); }
static void HARD_ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { invoke<Void>(0xF81BE163E469E944, cam, ped, boneIndex, p3, p4, p5, p6, p7, p8, p9); }
static void HARD_ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xRot, float yRot, float zRot, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0x0D5706D462271DC4, cam, entity, xRot, yRot, zRot, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_VEHICLE_BONE(Cam cam, Vehicle vehicle, int boneIndex, BOOL relativeRotation, float rotX, float rotY, float rotZ, float offsetX, float offsetY, float offsetZ, BOOL fixedDirection) { invoke<Void>(0x52013BF2765685F4, cam, vehicle, boneIndex, relativeRotation, rotX, rotY, rotZ, offsetX, offsetY, offsetZ, fixedDirection); }
static void DETACH_CAM(Cam cam) { invoke<Void>(0x9BC35A57CAC5458D, cam); }
static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { invoke<Void>(0xE2B6CB928D598CBD, cam, p1); }
static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0x2ABEBC4952CA3C7F, cam, x, y, z); }
static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xD6B4D02A102485DC, cam, entity, p2, p3, p4, p5); }
static void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xA327B87671869834, cam, ped, boneIndex, x, y, z, p6); }
static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xFC8624DF7EBA74FB, cam); }
static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0xD49F2340555F9E5D, cam, toggle); }
static void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam cam, BOOL toggle) { invoke<Void>(0x29BBAB7031C36984, cam, toggle); }
static void SET_CAM_IS_INSIDE_VEHICLE(Cam cam, BOOL toggle) { invoke<Void>(0x2F0877034716FB33, cam, toggle); }
static void ALLOW_MOTION_BLUR_DECAY(Any p0, BOOL p1) { invoke<Void>(0x958B9F165A08995A, p0, p1); }
static void SET_CAM_DEBUG_NAME(Cam camera, const char* name) { invoke<Void>(0xDAC1F4368A8FB625, camera, name); }
static Cam GET_DEBUG_CAM() { return invoke<Cam>(0x2BBDA4E1DFD52204); }
static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int smoothingStyle, int rotationOrder) { invoke<Void>(0xC606B0B9BA3D6036, camera, x, y, z, xRot, yRot, zRot, length, smoothingStyle, rotationOrder); }
static void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0x327198ED493608E0, cam, cam2, length, p3); }
static void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xF5317F0839442D94, cam, cam2, length, p3); }
static void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(Cam cam, int length, int p2) { invoke<Void>(0x471C8924B79628DE, cam, length, p2); }
static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0x59EFC8EF65356E09, cam, p1); }
static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0x37831F682BE7F41E, cam); }
static float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return invoke<float>(0x5B4403BBB70E3566, cam); }
static void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { invoke<Void>(0x82C9F945AF12EC9F, cam, timeDuration); }
static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { invoke<Void>(0x859FFC7F5DEC29DE, cam, smoothingStyle); }
static int GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return invoke<int>(0x9A48A1707E9DECA8, cam); }
static void SET_CAM_SPLINE_NODE_EASE(Cam cam, int easingFunction, int p2, float p3) { invoke<Void>(0xA054197DA0CA8B1B, cam, easingFunction, p2, p3); }
static void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(Cam cam, int p1, float scale) { invoke<Void>(0x4BEFD5824C6D529A, cam, p1, scale); }
static void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { invoke<Void>(0x59CBB7FD3D159D45, cam, p1, p2, p3); }
static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { invoke<Void>(0x11BE263E767EF5C3, cam, p1, p2, p3); }
static void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(Cam cam, int p1, int flags) { invoke<Void>(0x9DE997C45267314A, cam, p1, flags); }
static BOOL IS_CAM_SPLINE_PAUSED(Cam cam) { return invoke<BOOL>(0x948A3D156F2E0E3A, cam); }
static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0xB56F35D8A770F80F, camTo, camFrom, duration, easeLocation, easeRotation); }
static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0x323C4A67159DAD02, cam); }
static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { invoke<Void>(0x2A09425009DAD0F5, cam, type, amplitude); }
static void ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) { invoke<Void>(0x9EFC1351343A6835, cam, p1, p2, p3, amplitude); }
static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xDD87838D03B64B0A, cam); }
static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0x17F06E9D89A05855, cam, amplitude); }
static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0x584EE85BE0BFA70E, cam, p1); }
static void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { invoke<Void>(0xC62E5824404F8836, p0, p1); }
static void ANIMATED_SHAKE_SCRIPT_GLOBAL(const char* p0, const char* p1, const char* p2, float p3) { invoke<Void>(0xAEA3DA36109D1029, p0, p1, p2, p3); }
static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0x12B42434831D668E); }
static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { invoke<Void>(0xB9AB3B8920F1AA69, p0); }
static void TRIGGER_VEHICLE_PART_BROKEN_CAMERA_SHAKE(Vehicle vehicle, int p1, float p2) { invoke<Void>(0xB3F5D7C1E9A4A589, vehicle, p1, p2); }
static BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0x73D04EA6A13117B7, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); }
static BOOL IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) { return invoke<BOOL>(0x444069759E788ECD, cam, animName, animDictionary); }
static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0xFEA88ACF99028CEA, cam, phase); }
static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0x2D34ECA1A2A76C38, cam); }
static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xF9B66DAE101B699C, p0, p1, animName, animDictionary); }
static void SET_FLY_CAM_HORIZONTAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xB07CF0F23305413E, cam, p1, p2, p3); }
static void SET_FLY_CAM_VERTICAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xD141E0743BFCF358, cam, p1, p2, p3); }
static void SET_FLY_CAM_MAX_HEIGHT(Cam cam, float height) { invoke<Void>(0x4D66F5C6B248BB2A, cam, height); }
static void SET_FLY_CAM_COORD_AND_CONSTRAIN(Cam cam, float x, float y, float z) { invoke<Void>(0xD09DCA9E9F147F36, cam, x, y, z); }
static void SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(Cam cam) { invoke<Void>(0xDB27323F0C5EE8D9, cam); }
static BOOL WAS_FLY_CAM_CONSTRAINED_ON_PREVIOUS_UDPATE(Cam cam) { return invoke<BOOL>(0x0D5CED097A266DCE, cam); }
static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0x15CCE8886267624F); }
static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0x9390801B06EE998F); }
static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0x78ABC1D11B34F324); }
static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xDDED2C93E8FD5B69); }
static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0x10B228D2FDB7AF16, duration); }
static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0x8F72AF14CE5AACE4, duration); }
static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0xD7C0EA10993D3214, p0, p1); }
static BOOL ARE_WIDESCREEN_BORDERS_ACTIVE() { return invoke<BOOL>(0xE7BF6BF496713374); }
static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xCF141FCD0940B0A3); }
static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xD84A545408A3099A, rotationOrder); }
static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0x9FA6E15C7A998E4F); }
static void SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(float p0) { invoke<Void>(0x9B669C0440D2AB57, p0); }
static void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float p0) { invoke<Void>(0xC30B691CAD767629, p0); }
static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0x3FAFDC4C824A6C54); }
static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0x64BB72494B9DF6DC, heading); }
static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0x98F0D28A64EC7D5D); }
static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float angle, float scalingFactor) { invoke<Void>(0xD815D4BD1AE9E85A, angle, scalingFactor); }
static void RESET_GAMEPLAY_CAM_FULL_ATTACH_PARENT_TRANSFORM_TIMER() { invoke<Void>(0xD7C2A6E5CF33E328); }
static void FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(float roll, float pitch, float yaw) { invoke<Void>(0xF42836467278195A, roll, pitch, yaw); }
static void FORCE_BONNET_CAMERA_RELATIVE_HEADING_AND_PITCH(float p0, float p1) { invoke<Void>(0xED7A3604521A9F67, p0, p1); }
static void SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(float yaw) { invoke<Void>(0xE0A23567157E9B5E, yaw); }
static void SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(float pitch) { invoke<Void>(0x7E08E86FBA713FE8, pitch); }
static void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(BOOL p0) { invoke<Void>(0x2AFB778D9C7EA690, p0); }
static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { invoke<Void>(0xD5681045964A2975, shakeName, intensity); }
static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0x7F2356076C3D052D); }
static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xB3CAD109683148E3, amplitude); }
static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0x9AFEC71EEA2F7754, p0); }
static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { invoke<Void>(0x2C81A7FECD78FF20, ped); }
static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0x174DBD3C5DB3557B); }
static BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return invoke<BOOL>(0xE976C85F4B1CF1A2); }
static BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS() { return invoke<BOOL>(0xB2A95909624C195B); }
static void SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(BOOL p0) { invoke<Void>(0xA927617A11A54503, p0); }
static void DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE() { invoke<Void>(0xCCCACE17B42F77EC); }
static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xDD851254D8C7D338); }
static void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity entity) { invoke<Void>(0x159356D054E19158, entity); }
static void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { invoke<Void>(0x148A0A307698B29B, entity); }
static void BYPASS_CAMERA_COLLISION_BUOYANCY_TEST_THIS_UPDATE() { invoke<Void>(0xB785349D98C90E5A); }
static void SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Entity entity) { invoke<Void>(0xFE751F9213345C58, entity); }
static void DISABLE_FIRST_PERSON_CAMERA_WATER_CLIPPING_TEST_THIS_UPDATE() { invoke<Void>(0xFFFF1D7E51F1970B); }
static void SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE() { invoke<Void>(0x29F41DB9F1B4728A); }
static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0x7B780C491DEC834E, x, y, z, radius); }
static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0x0E1259D809F0A778); }
static BOOL SET_FOLLOW_PED_CAM_THIS_UPDATE(const char* camName, int p1) { return invoke<BOOL>(0x3A7305BBF26DBF65, camName, p1); }
static void USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(BOOL p0, BOOL p1) { invoke<Void>(0x68DE54738FFB5584, p0, p1); }
static void SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE() { invoke<Void>(0xEF5DC41D990F8FD2); }
static void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0x19D0C4621093F82B, minimum, maximum); }
static void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xE4C00EFAE138F020, minimum, maximum); }
static void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float p0, float distance) { invoke<Void>(0xE3270F1A682CF48C, p0, distance); }
static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { invoke<Void>(0x349F973598822727, p0, p1); }
static void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { invoke<Void>(0x3968AF3046718EAC); }
static void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { invoke<Void>(0x5FD79E92E62966FB); }
static void BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE() { invoke<Void>(0xE71B1E03F658C30C); }
static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0xE63C16EA2171C883); }
static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0x3B5989D5DB08A155); }
static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xF20AB5C13902BB8A, viewMode); }
static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0x77CDF75A783A0B04); }
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_THIS_UPDATE(BOOL p0) { invoke<Void>(0x82C5BFD25578F440, p0); }
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(BOOL p0, BOOL p1) { invoke<Void>(0x2C57A63E92CDBDF1, p0, p1); }
static BOOL SET_TABLE_GAMES_CAMERA_THIS_UPDATE(Hash hash) { return invoke<BOOL>(0xC1AAF981A4F50898, hash); }
static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xD511F6B5FB8D3854); }
static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0x872D985A4B3A9EEF, zoomLevel); }
static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0x655E58062EC2D269); }
static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0x043CE6FFCF2F6963, viewMode); }
static int GET_CAM_VIEW_MODE_FOR_CONTEXT(int context) { return invoke<int>(0xBCF87EE3DC296C2A, context); }
static void SET_CAM_VIEW_MODE_FOR_CONTEXT(int context, int viewMode) { invoke<Void>(0x07938654FF332D78, context, viewMode); }
static int GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() { return invoke<int>(0xBF03D0685ADC793B); }
static void USE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0x108CB90C10285373); }
static void USE_DEDICATED_STUNT_CAMERA_THIS_UPDATE(const char* camName) { invoke<Void>(0x8AD0D4D95EF3CE16, camName); }
static void FORCE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xF66C0552C82638D5); }
static void SET_FOLLOW_VEHICLE_CAM_SEAT_THIS_UPDATE(int seatIndex) { invoke<Void>(0x0A9B49F91B35D536, seatIndex); }
static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x196704C916969409); }
static BOOL IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE() { return invoke<BOOL>(0xD7582282E517A590); }
static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0x5EA7A06A1491D450); }
static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<Void>(0xDEE33C748704EC49); }
static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke<float>(0x9B92BDBE805E7967); }
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float zoomFactor) { invoke<Void>(0xF37AC65898011B1C, zoomFactor); }
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0x40C52C6E7C5DE51B, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xBB76112874174E25, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0x5842BDBDE92FEEB1, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0x668D3078E78F67B0, p0); }
static void SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0x9696D418BC147507, p0); }
static void SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(BOOL p0) { invoke<Void>(0x5EED3D1AFFDEF57E, p0); }
static void FORCE_TIGHTSPACE_CUSTOM_FRAMING_THIS_UPDATE() { invoke<Void>(0xF009B83B5567CD93); }
static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<Vector3>(0x02AF3EA0F67D2329); }
static Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0x958849BB56EC0F07, rotationOrder); }
static Vector3 GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_ROT(Player player, int rotationOrder) { return invoke<Vector3>(0xBF807E7C66B0BF4B, player, rotationOrder); }
static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0xB99978989A0F4E57); }
static float GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_FOV(Player player) { return invoke<float>(0x6A709291E23386B1, player); }
static float GET_FINAL_RENDERED_CAM_NEAR_CLIP() { return invoke<float>(0x8AB042CB33EAECD2); }
static float GET_FINAL_RENDERED_CAM_FAR_CLIP() { return invoke<float>(0xD787990C7B67C7F0); }
static float GET_FINAL_RENDERED_CAM_NEAR_DOF() { return invoke<float>(0x806E1CB52BAD45A2); }
static float GET_FINAL_RENDERED_CAM_FAR_DOF() { return invoke<float>(0xBAAC16D46CDF2FFE); }
static float GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH() { return invoke<float>(0xB75F36052800046D); }
static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int p6) { invoke<Void>(0x861EAB644E1BBA7A, x, y, z, duration, blendOutDuration, blendInDuration, p6); }
static void SET_GAMEPLAY_PED_HINT(Ped ped, float x1, float y1, float z1, BOOL p4, int duration, int blendOutDuration, int blendInDuration) { invoke<Void>(0x388E6B6F47D9ECC1, ped, x1, y1, z1, p4, duration, blendOutDuration, blendInDuration); }
static void SET_GAMEPLAY_VEHICLE_HINT(Vehicle vehicle, float offsetX, float offsetY, float offsetZ, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xB2BB7DF97FC211F9, vehicle, offsetX, offsetY, offsetZ, p4, time, easeInTime, easeOutTime); }
static void SET_GAMEPLAY_OBJECT_HINT(Object object, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0x95AFFEA5EB27D2B9, object, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime); }
static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime, int p8) { invoke<Void>(0x190BA0A3BB48F7FD, entity, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime, p8); }
static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xE37AC296E66C33AF); }
static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0x3C44EF9027A21847, p0); }
static void STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(BOOL p0) { invoke<Void>(0xB0325D55FDB2DD7C, p0); }
static void STOP_CODE_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0x2515D479F116B7AA, p0); }
static BOOL IS_CODE_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xD4CCFE5409D13C37); }
static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0x4F5BF7798505A667, FOV); }
static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float value) { invoke<Void>(0x39723B4B969CC059, value); }
static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float value) { invoke<Void>(0x6CD2A2994586D388, value); }
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float xOffset) { invoke<Void>(0x4302C09C88CF5356, xOffset); }
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float yOffset) { invoke<Void>(0x640D5D2C8DE912A2, yOffset); }
static void SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(BOOL toggle) { invoke<Void>(0xD5864F7F5BC214FF, toggle); }
static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0x0A0A06C514052E80, p0); }
static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0x968E8340FCAD4826); }
static void SHAKE_CINEMATIC_CAM(const char* shakeType, float amount) { invoke<Void>(0xE31C735DEE2BF705, shakeType, amount); }
static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0x0E9A1CE27A31950D); }
static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0xAD0E20104A60B568, p0); }
static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0xDB37962FDFC63FD7, p0); }
static void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0x48392085C5B52584); }
static void DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE() { invoke<Void>(0x59ABC1F373CE1F5B); }
static void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { invoke<Void>(0x9136D50973A71229); }
static void INVALIDATE_IDLE_CAM() { invoke<Void>(0x513E63C787EE96A7); }
static BOOL IS_CINEMATIC_IDLE_CAM_RENDERING() { return invoke<BOOL>(0x0D96CB44D490C047); }
static BOOL IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING() { return invoke<BOOL>(0x9CA0AFAD60564183); }
static void CREATE_CINEMATIC_SHOT(Hash p0, int time, BOOL p2, Entity entity) { invoke<Void>(0x18FB9B483F8E71AB, p0, time, p2, entity); }
static BOOL IS_CINEMATIC_SHOT_ACTIVE(Hash p0) { return invoke<BOOL>(0xF52DD7BA03015AB4, p0); }
static void STOP_CINEMATIC_SHOT(Hash p0) { invoke<Void>(0x20A207437491322B, p0); }
static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL toggle) { invoke<Void>(0x48032DB198A2A820, toggle); }
static void SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE() { invoke<Void>(0xAA4406787205E928); }
static void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { invoke<Void>(0xEC81A0FB4911A2C2, toggle); }
static BOOL IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING() { return invoke<BOOL>(0x5F0F4F152FB7156C); }
static BOOL DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE() { return invoke<BOOL>(0x1C74A3A76F738D39); }
static BOOL IS_BONNET_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xE30A5640D9F46CF2); }
static BOOL IS_CINEMATIC_CAM_INPUT_ACTIVE() { return invoke<BOOL>(0x6633B158164DCD88); }
static void IGNORE_MENU_PREFERENCE_FOR_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0x54B59CE258DA9A4D); }
static void BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE() { invoke<Void>(0xD20491305F26874C); }
static void STOP_CUTSCENE_CAM_SHAKING(Any p0) { invoke<Void>(0x4358D2A8023C82D3, p0); }
static void SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xF5EF5C15CE92F236, p0); }
static Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Ped>(0x00926C3C4443B915, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE() { invoke<Void>(0x2BDEB13CCCC78384); }
static void SET_CAM_DEATH_FAIL_EFFECT_STATE(int p0) { invoke<Void>(0x735D248F6CA672AE, p0); }
static void SET_FIRST_PERSON_FLASH_EFFECT_TYPE(Any p0) { invoke<Void>(0x39137FB8EE05456C, p0); }
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME(const char* vehicleName) { invoke<Void>(0x3835E455014EE7B6, vehicleName); }
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(Hash vehicleModel) { invoke<Void>(0xFED7E3E3F45F22A4, vehicleModel); }
static BOOL IS_ALLOWED_INDEPENDENT_CAMERA_MODES() { return invoke<BOOL>(0x22B1B0E4CDB95977); }
static void CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE() { invoke<Void>(0xF2BADB0BD95BDD7D); }
static float REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() { return invoke<float>(0x37A742571A01BD01); }
static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xCBE10A13619B9FAA, hour, minute, second); }
static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xB9C1EC5EDDAAA115, toggle); }
static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0x77A5275126602303, hour, minute, second); }
static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0x2C9A2F8762B95F5C, hours, minutes, seconds); }
static int GET_CLOCK_HOURS() { return invoke<int>(0x5295501D0862870D); }
static int GET_CLOCK_MINUTES() { return invoke<int>(0x18E502A71E28968C); }
static int GET_CLOCK_SECONDS() { return invoke<int>(0x4BA5A16068183C5E); }
static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xF13E285EDAB2D255, day, month, year); }
static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xDDA4278694CAA369); }
static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xB12880C92EA6EE15); }
static int GET_CLOCK_MONTH() { return invoke<int>(0x8825A6E0A30BDCB8); }
static int GET_CLOCK_YEAR() { return invoke<int>(0x7598FE4545010A75); }
static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0x91C8345B22D52DEC); }
static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x23CB97F04154A594, year, month, day, hour, minute, second); }
static void GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x177E5760BD4F49BC, year, month, day, hour, minute, second); }
static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0x2B6A03197E4C7EEF, year, month, day, hour, minute, second); }
static void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { invoke<Void>(0x839AD252B0708F35, cutsceneName, flags); }
static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { invoke<Void>(0x046FF102DCE74A94, cutsceneName, playbackFlags, flags); }
static void REMOVE_CUTSCENE() { invoke<Void>(0xDD291722ADDCBD60); }
static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0x0DDDD9D153BCF51F); }
static BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xC4ADACBD3FE3F266, cutsceneName); }
static void SET_SCRIPT_CAN_START_CUTSCENE(int threadId) { invoke<Void>(0xA82578E07F14DD90, threadId); }
static BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return invoke<BOOL>(0xB3FA103AA6383C28); }
static BOOL IS_CUTSCENE_PLAYBACK_FLAG_SET(int flag) { return invoke<BOOL>(0xFE2EB239B608CDF9, flag); }
static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { invoke<Void>(0x7901DE0AC779EB29, cutsceneEntName, p1, p2); }
static void REQUEST_CUT_FILE(const char* cutsceneName) { invoke<Void>(0x25D5067F6C88E193, cutsceneName); }
static BOOL HAS_CUT_FILE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xC0E9475F48788356, cutsceneName); }
static void REMOVE_CUT_FILE(const char* cutsceneName) { invoke<Void>(0x80933F349127EBB9, cutsceneName); }
static int GET_CUT_FILE_CONCAT_COUNT(const char* cutsceneName) { return invoke<int>(0xF4D7464FFDD56FE3, cutsceneName); }
static void START_CUTSCENE(int flags) { invoke<Void>(0xED65412F8B26ED99, flags); }
static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int flags) { invoke<Void>(0x9B3A50426C952520, x, y, z, flags); }
static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xB479965CBAA3EAE1, p0); }
static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xA7E4AA8D29D3DAC1); }
static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<Void>(0x20D6C2B867DA2FCA, x, y, z, p3, p4); }
static void SET_CUTSCENE_ORIGIN_AND_ORIENTATION(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { invoke<Void>(0xB638C6C35B6CA9DF, x1, y1, z1, x2, y2, z2, p6); }
static int GET_CUTSCENE_TIME() { return invoke<int>(0x15EF8F22A719BE5E); }
static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xA4A6A6336888604F); }
static int GET_CUTSCENE_END_TIME() { return invoke<int>(0x0E805BBAA9779838); }
static int GET_CUTSCENE_PLAY_DURATION() { return invoke<int>(0xC418F430F1F93AEE); }
static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xD9E3F021F9D8CEF9); }
static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xC9BA6D804FA4FAAA); }
static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0x0CB7695268A7F50F); }
static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xFD216000DC314A92); }
static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0xF9B18AB51CBCDF5C); }
static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xD461826371A3782B, cutsceneEntName, modelHash); }
static int GET_CUTSCENE_CONCAT_SECTION_PLAYING() { return invoke<int>(0x6BC87CF59151C630); }
static BOOL IS_CUTSCENE_AUTHORIZED(const char* cutsceneName) { return invoke<BOOL>(0xAEF10EAFB97F5540, cutsceneName); }
static int DOES_CUTSCENE_HANDLE_EXIST(int cutsceneHandle) { return invoke<int>(0x9AF94A69465A9B87, cutsceneHandle); }
static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0xF293D66D4452C854, cutscenePed, cutsceneEntName, p2, modelHash, p4); }
static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0x4240B5D04F91480C, cutsceneEntName, modelHash); }
static void SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Hash modelHash) { invoke<Void>(0x256C30FDAB915E2B, modelHash); }
static void SET_CUTSCENE_TRIGGER_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0x09B8E842C8055B05, x1, y1, z1, x2, y2, z2); }
static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0x18C8A35E0901C0E2, cutsceneEntName, modelHash); }
static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xD8FC13DA1BA1DBA2, cutsceneEntName, modelHash); }
static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0x2B60F53D06BC6971, p0); }
static void SET_PAD_CAN_SHAKE_DURING_CUTSCENE(BOOL toggle) { invoke<Void>(0x9C22AADBAF330B36, toggle); }
static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x1837D912F4EDCA95, p0, p1, p2, p3); }
static void SET_CUTSCENE_MULTIHEAD_FADE(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0x7882946B06ED216B, p0, p1, p2, p3); }
static void SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(BOOL p0) { invoke<Void>(0x1231218F0BB0653E, p0); }
static BOOL IS_MULTIHEAD_FADE_UP() { return invoke<BOOL>(0x4A0B7E53EBC937D5); }
static void NETWORK_SET_MOCAP_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xF74640C4B28C71BD, p0); }
static void SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(BOOL p0) { invoke<Void>(0xD0860FF81E162052, p0); }
static BOOL CAN_USE_MOBILE_PHONE_DURING_CUTSCENE() { return invoke<BOOL>(0xAF078BC665CCACB9); }
static void SET_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xEB234554CFDE9162, p0); }
static void SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE() { invoke<Void>(0xFABF472ADCE66A1E); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xFE61105198EA3496, cutsceneEntName, componentId, drawableId, textureId, modelHash); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0x2F19C4305F0B8DA7, cutsceneEntName, ped, modelHash); }
static BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0x24CAD023099769B1, cutsceneEntName, modelHash); }
static void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0x60A0A4CD710160D5, cutsceneEntName, componentId, drawableId, textureId, modelHash); }
static BOOL HAS_CUTSCENE_CUT_THIS_FRAME() { return invoke<BOOL>(0xF1FEB57E542C41F1); }
static void DATAFILE_WATCH_REQUEST_ID(int requestId) { invoke<Void>(0xAF6DC1461CCA36F8, requestId); }
static void DATAFILE_CLEAR_WATCH_LIST() { invoke<Void>(0x6CB3106C584382B9); }
static BOOL DATAFILE_IS_VALID_REQUEST_ID(int index) { return invoke<BOOL>(0xF224222A0E09BF20, index); }
static BOOL DATAFILE_HAS_LOADED_FILE_DATA(int requestId) { return invoke<BOOL>(0xDC01725421245C5C, requestId); }
static BOOL DATAFILE_HAS_VALID_FILE_DATA(int requestId) { return invoke<BOOL>(0x5661708D0BBCF4DC, requestId); }
static BOOL DATAFILE_SELECT_ACTIVE_FILE(int requestId, Any p1) { return invoke<BOOL>(0x8CE598AF9875FE1C, requestId, p1); }
static BOOL DATAFILE_DELETE_REQUESTED_FILE(int requestId) { return invoke<BOOL>(0xD1BF9B570A0EBA3A, requestId); }
static BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p7) { return invoke<BOOL>(0x58977C73F104C1B2, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish, p7); }
static BOOL UGC_CREATE_MISSION(const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p5) { return invoke<BOOL>(0xF3AB7B665999602E, contentName, description, tagsCsv, contentTypeName, publish, p5); }
static BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p7) { return invoke<BOOL>(0xC87EAB233B259C6E, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName, p7); }
static BOOL UGC_UPDATE_MISSION(const char* contentId, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p5) { return invoke<BOOL>(0x605AAC6915C9EFC7, contentId, contentName, description, tagsCsv, contentTypeName, p5); }
static BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName, Any p3) { return invoke<BOOL>(0x18EEF6291DBCAC51, contentId, rating, contentTypeName, p3); }
static BOOL DATAFILE_SELECT_UGC_DATA(int p0, Any p1) { return invoke<BOOL>(0x7C54D010A8B19CEC, p0, p1); }
static BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1, Any p2) { return invoke<BOOL>(0x91052312822C7C59, p0, p1, p2); }
static BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0, Any p1) { return invoke<BOOL>(0x71CC7FE2C69822E1, p0, p1); }
static BOOL DATAFILE_SELECT_CREATOR_STATS(int p0, Any p1) { return invoke<BOOL>(0x5B82DD87BDF8750F, p0, p1); }
static BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename, Any p1) { return invoke<BOOL>(0x571A025B07823518, filename, p1); }
static void DATAFILE_CREATE(int p0) { invoke<Void>(0x87BA8B7277ED162C, p0); }
static void DATAFILE_DELETE(int p0) { invoke<Void>(0x27DEA4A6845A22BC, p0); }
static void DATAFILE_STORE_MISSION_HEADER(int p0) { invoke<Void>(0x16AC7DBD0702DC76, p0); }
static void DATAFILE_FLUSH_MISSION_HEADER() { invoke<Void>(0x7D2CE2417CB2FE19); }
static Any* DATAFILE_GET_FILE_DICT(int p0) { return invoke<Any*>(0x6C99356A4D3C7B09, p0); }
static BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename, Any p1) { return invoke<BOOL>(0xA8F33BC779C28BFB, filename, p1); }
static BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return invoke<BOOL>(0x3CBCE367459737AD, p0); }
static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xB00920C3C99A34C5); }
static BOOL DATAFILE_LOAD_OFFLINE_UGC_FOR_ADDITIONAL_DATA_FILE(Any p0, Any p1) { return invoke<BOOL>(0xCCCB75189BBBA6DE, p0, p1); }
static void DATAFILE_DELETE_FOR_ADDITIONAL_DATA_FILE(Any p0) { invoke<Void>(0xEFE2DF6B67066118, p0); }
static Any* DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(Any p0) { return invoke<Any*>(0xDC393E3CE8A00E9D, p0); }
static void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { invoke<Void>(0xC98890A6BBB9A0D4, objectData, key, value); }
static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { invoke<Void>(0xCBF0312D1370143F, objectData, key, value); }
static void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { invoke<Void>(0xEA11FA8AE2EB4025, objectData, key, value); }
static void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { invoke<Void>(0xA47FC2B828F55E4D, objectData, key, value); }
static void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0xD0DC0D28BA9FD4AD, objectData, key, valueX, valueY, valueZ); }
static Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return invoke<Any*>(0x5E298CFB85D1AEE8, objectData, key); }
static Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xC24FD04ED00751BC, objectData, key); }
static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0x9F0EF572EFEE0A9C, objectData, key); }
static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0x81A9ADA13F72AEDD, objectData, key); }
static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0xA481424344CBC893, objectData, key); }
static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0xC2ED3920E9296F36, objectData, key); }
static Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<Vector3>(0xEF1E4460FF33D01E, objectData, key); }
static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0x6BDE656A2A2932FC, objectData, key); }
static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0x8FBF3E1A58A9D798, objectData, key); }
static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0xA8F96580C10C5F9E, objectData, key); }
static void DATAARRAY_ADD_BOOL(Any* arrayData, BOOL value) { invoke<Void>(0xDE4827405E9BE9A9, arrayData, value); }
static void DATAARRAY_ADD_INT(Any* arrayData, int value) { invoke<Void>(0x4BEA39F9F6950599, arrayData, value); }
static void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0x0F24467993708BCC, arrayData, value); }
static void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { invoke<Void>(0xABC288F63B017656, arrayData, value); }
static void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xB8DA6C44772DBE30, arrayData, valueX, valueY, valueZ); }
static Any* DATAARRAY_ADD_DICT(Any* arrayData) { return invoke<Any*>(0xFA8B98F1023E7B3E, arrayData); }
static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0x2150C2FC641364CC, arrayData, arrayIndex); }
static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0xB64F599E8DBD9678, arrayData, arrayIndex); }
static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xCEBBA737179CE3D0, arrayData, arrayIndex); }
static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0x446BB52C35DB68A0, arrayData, arrayIndex); }
static Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0x83D3CBA972660C58, arrayData, arrayIndex); }
static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0x5B54BD7ACF637593, arrayData, arrayIndex); }
static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0x2A32420E04AE5787, arrayData); }
static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0x939FE19A2CFC3266, arrayData, arrayIndex); }
static BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return invoke<BOOL>(0xD54324BF37C12BEE, entity, propertyName, timestamp); }
static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0xF46ECFD5526E8FF7, entity, propertyName, value); }
static BOOL DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) { return invoke<BOOL>(0x2475DDACFF83CF93, entity, propertyName, value); }
static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0xEE8559BBFC27701B, entity, propertyName, value); }
static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0x3F40AE65F056B43D, entity, propertyName); }
static float DECOR_GET_FLOAT(Entity entity, const char* propertyName) { return invoke<float>(0x3D421DC31587DC44, entity, propertyName); }
static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xE2F6FE9B61232165, entity, propertyName); }
static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0xD130E7CDEE903624, entity, propertyName); }
static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0x97AC7D93ABD65D96, entity, propertyName); }
static void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0x93900D232987104E, propertyName, type); }
static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0x77B62CAA5DF0922A, propertyName, type); }
static void DECOR_REGISTER_LOCK() { invoke<Void>(0x1B3E687F45E0A870); }
static BOOL ARE_ANY_CCS_PENDING() { return invoke<BOOL>(0x822B00714BA99033); }
static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0x087611B922B50F13, dlcHash); }
static BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return invoke<BOOL>(0xAB737F5FE1576754); }
static int GET_EXTRACONTENT_CLOUD_RESULT() { return invoke<int>(0x3FB25645DE01436C); }
static BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return invoke<BOOL>(0xDB6AE360ACDD6885); }
static BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return invoke<BOOL>(0x0859E74838FA7854); }
static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xDCE42B3C644D1A4E); }
static BOOL GET_IS_INITIAL_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0x55002CD5D725C226); }
static BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return invoke<BOOL>(0x80A220AA99C04E50, p0, unused); }
static void ON_ENTER_SP() { invoke<Void>(0xCD2016D0514F1788); }
static void ON_ENTER_MP() { invoke<Void>(0x81F7C34FD4E856D5); }
static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xFC8BFE4B41177C22, entity); }
static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0x7C9905528EE2C3AB, entity, p1); }
static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xF98CC1C0E657B6CB, entity); }
static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0x4DBCC7D5D01D67FA, entity); }
static BOOL DOES_ENTITY_HAVE_SKELETON(Entity entity) { return invoke<BOOL>(0x3D4B0DBFA0E78D88, entity); }
static BOOL DOES_ENTITY_HAVE_ANIM_DIRECTOR(Entity entity) { return invoke<BOOL>(0x14A90D05363A2A09, entity); }
static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0x67C276550F2DBF33, entity, animDict, animName, p3); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x6E470765558FCD9E, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xF76AF9D45D6BDA45, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xFFF4FB66DA549D0F, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0x9B3D4335E0EDB0BE, entity1, entity2, p2); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xAD915B5E38F323E5, entity1, entity2, traceType); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_ADJUST_FOR_COVER(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0x4EAD67A3E57A9458, entity1, entity2, traceType); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0x300A997AE991C0A8, entity1, entity2); }
static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0x14E25ED5E75102C8, entity); }
static Entity _GET_LAST_ENTITY_HIT_BY_ENTITY(Entity entity) { return invoke<Entity>(0xDA02F6FBBDEBF43D, entity); }
static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0x28637BDE402A5913, entity); }
static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0xB6BF12B4CF844B3E, entity); }
static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0x2B2ECB6F6371E59E, entity); }
static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0x82E64DE58A6B84A8, entity, animDict, animName); }
static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0x58C2315AA20FAF06, entity, animDict, animName); }
static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0x6CEF2D1ADD6A5E7F, animDict, animName); }
static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xAD0F9A0F639285AA, entity); }
static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xD1A6A821F5AC81DB, entity, alive); }
static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0x90D0E0397D3F7690, entity); }
static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xE4833C1EFC5928A6, entity); }
static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xD7A7E267DEDA742E, entity); }
static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xCFC0C995455A6204, entity); }
static float GET_ENTITY_HEADING_FROM_EULERS(Entity entity) { return invoke<float>(0xC5A566D912050568, entity); }
static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0x8D91ADE44AC79BC9, entity); }
static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xF8A78594664D23A6, entity); }
static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0xF0259D91B002AE9F, entity, value); }
static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0x12C7364D43F17CF1, entity, X, Y, Z, atTop, inWorldCoords); }
static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0x2399A6E4929050EE, entity); }
static void GET_ENTITY_MATRIX(Entity entity, Vector3* forwardVector, Vector3* rightVector, Vector3* upVector, Vector3* position) { invoke<Void>(0xAAB58D9C726404C0, entity, forwardVector, rightVector, upVector, position); }
static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0x4B423FAA24E8ABF0, entity); }
static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0xAD8278DAEC2CC059, entity, posX, posY, posZ); }
static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x0D1381B6E0F3987D, entity, offsetX, offsetY, offsetZ); }
static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xED4193081E867405, entity); }
static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xB66CD98548798F26, entity, x, y, z, w); }
static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0x5E674CD80769B53A, entity); }
static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0x88124E0D60FB8D11, entity, rotationOrder); }
static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0x47507DD57C93B472, entity); }
static const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<const char*>(0xED22194AB8539910, entity, script); }
static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xDF93B3CFAC96698F, entity); }
static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0x4ED40BE47D8C1896, entity, relative); }
static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0x032CEF99C0D59B73, entity); }
static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0xE5741C6B6539231F, entity); }
static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0x0646D07BB2D516CD, entity); }
static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0xBD545F8729E9F413, entity); }
static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xE93EDE86BBB66532, entity); }
static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0x75DF72FC74EED046, entity, boneIndex); }
static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xBD9259F686649141, entity); }
static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0x87384D2CF86135EB, entity, team); }
static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0x75A2D1BBA9D95D0E, entity); }
static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xA598E8A456B0A2F7, entity); }
static BOOL IS_AN_ENTITY(ScrHandle handle) { return invoke<BOOL>(0x5DA1DE6C940D22C1, handle); }
static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0x0101C509A6E67F99, entity); }
static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0x110821AE6C63DD4F, entity); }
static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0x55B80B6E7AB61270, entity); }
static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xBE79A96C521F4432, entity); }
static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0x65FFA94B82A71741, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); }
static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xFAA48325A90263BE, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xA3736D76B0E93E93, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0x592E6281C16BB0F2, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0x5B9219522937741D, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xB431D60610E7F85F, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0x21478251925DBFD7, from, to); }
static BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return invoke<BOOL>(0x1C2F771CDC87A3A5, entity, p1); }
static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0x3F18810075C77D41, entity); }
static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ, Any p10) { return invoke<BOOL>(0x5105BE70DEF1F5FB, entity, x1, y1, z1, x2, y2, z2, width, debug, includeZ, p10); }
static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xFCEB38AB3EDCF9BE, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); }
static BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return invoke<BOOL>(0xDECEB0709855F876, entity, zone); }
static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0x69799E0840A34AFB, entity); }
static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0x837FF265C016E3B7, entity); }
static void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity entity, BOOL toggle) { invoke<Void>(0xD1426896B0800D21, entity, toggle); }
static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xCB5CAFF0A4A8B74B, entity); }
static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0x13CCB1AD131C1082, entity, animDict, animName, taskFlag); }
static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0x0D7186810BF44109, entity); }
static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0x685171EED42BC4DF, entity, targetEntity); }
static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xE68E61D23A75BC3E, entity, modelHash); }
static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xE99B9AC112F55D16, entity, angle); }
static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xD1F1A906BA9226BE, entity); }
static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xE5E2AE8B19267B8A, entity); }
static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0x870372B586EFB3EE, entity); }
static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xF6C26AE940C14749, entity); }
static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xB74F8EB686030603, entityModelHash, x, y, z, p4); }
static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0x642A49B0C066F723, entity); }
static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0x96CCECDBC57DA984, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); }
static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0xE592D924D5438108, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); }
static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15) { invoke<Void>(0x4D306DD94DD6FDBA, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15); }
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0x8026FC64F8CCD292, entity1, entity2, boneIndex1, boneIndex2, p4, p5); }
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE_Y_FORWARD(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xB30977F20556F296, entity1, entity2, boneIndex1, boneIndex2, p4, p5); }
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xDE55146A7765454D, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); }
static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0x0D84113E3B923524, entity); }
static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0x365DC1E8054AF31A, entity, boneName); }
static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0xE4DC7B3DD712372B, entity); }
static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0x81A7F3CD719DD53B, entity); }
static void DETACH_ENTITY(Entity entity, BOOL dynamic, BOOL collision) { invoke<Void>(0x837D67618BF89034, entity, dynamic, collision); }
static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0x5D7CD709B34C90F0, entity, toggle); }
static void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { invoke<Void>(0x11C125313CB8ADA2, entity, toggle); }
static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0x5ED9595F4AC7D134, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); }
static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0x381D671BCFC294D9, entity, syncedScene, animation, propName, p4, p5, p6, p7); }
static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2, const char* p6, const char* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xB75A7F8E568F3BE6, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9, p10, p11); }
static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2) { return invoke<BOOL>(0xDA2A1BB9D3A890AC, x1, y1, z1, x2, y2, z2); }
static BOOL STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<BOOL>(0x1D949F0AD44C7F05, entity, animation, animGroup, p3); }
static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xC0086E5CBF13BBF7, entity, p1, p2); }
static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0x5D640DD02AFD9F75, entity, actionHash); }
static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xA2A6AE50772C4FDB, animDictionary, animName, p2, p3, p4); }
static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { invoke<Void>(0x6D75623C644D6F83, entity, animDictionary, animName, time); }
static void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { invoke<Void>(0x458AA1A01F53901E, entity, animDictionary, animName, speedMultiplier); }
static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xEE0BCDB1B5E36BCB, entity, p1, p2); }
static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0x76AD45C3946F87DD, entity); }
static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0xF09E30AF1B8FB379, ped); }
static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0x68298CA6191CDFDB, vehicle); }
static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xB3B56385ECA230B4, object); }
static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0x999C62072AF920FD, entity, toggle); }
static BOOL GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return invoke<BOOL>(0xCC7210A943D5E698, entity); }
static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0x5355DCB5D35ADF0F, entity, bCanBeDamaged, relGroup); }
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0x8FEAF7F0538CEF55, entity, toggle); }
static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xE78E66BE6EB7D534, entity, toggle); }
static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0x44C48AC14D3C09ED, entity, toggle, keepPhysics); }
static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0x8473361800D1B85B, entity); }
static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0x52528272B59EBA11, entity, toggle, keepPhysics); }
static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xB2BD5837A8D3CEDA, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
static void SET_ENTITY_COORDS_WITHOUT_PLANTS_RESET(Entity entity, float xPos, float yPos, float zPos, BOOL alive, BOOL deadFlag, BOOL ragdollFlag, BOOL clearArea) { invoke<Void>(0x4FFCA145489D86B7, entity, xPos, yPos, zPos, alive, deadFlag, ragdollFlag, clearArea); }
static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0x62C438C53BB57AFD, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); }
static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0xC7D381E526A969D3, entity, toggle); }
static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0x5C96CEA06531AB03, entity, heading); }
static void SET_ENTITY_HEALTH(Entity entity, int health, int p2) { invoke<Void>(0xD25E9BDC14A0B649, entity, health, p2); }
static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0x935364B4448CD584, entity, toggle); }
static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0x87EDE48547CC8942, entity, p1, p2); }
static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0x4CD0763EB5DCD503, entity, toggle); }
static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { invoke<Void>(0x788F35D395511DFE, entity, toggle, p2); }
static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0x5E22EA3310AF52EA, entity); }
static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xB4E9A7A3A518ECC1, entity, speed); }
static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0x1F7539C841C2A71F, entity, toggle); }
static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0x7AF89DBF250A2C27, entity, p1, p2); }
static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL p7, BOOL waterProof) { invoke<Void>(0xD0F1DB0E50B367AD, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, waterProof); }
static BOOL GET_ENTITY_PROOFS(Entity entity, BOOL* bulletProof, BOOL* fireProof, BOOL* explosionProof, BOOL* collisionProof, BOOL* meleeProof, BOOL* steamProof, BOOL* p7, BOOL* drownProof) { return invoke<BOOL>(0x3A4536D7E89CD377, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, drownProof); }
static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xF425E0B05426E088, entity, x, y, z, w); }
static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0x3A95CBA6857C4C37, entity, toggle); }
static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0xCF39804E8C88080E, entity, pitch, roll, yaw, rotationOrder, p5); }
static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL p2) { invoke<Void>(0x4285E11B28063EE0, entity, toggle, p2); }
static void SET_ENTITY_WATER_REFLECTION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0x119BDA4392B5BAB2, entity, toggle); }
static void SET_ENTITY_MIRROR_REFLECTION_FLAG(Entity entity, BOOL p1) { invoke<Void>(0xDE9AC11F2927457D, entity, p1); }
static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0x1AB7223AC0702871, entity, x, y, z); }
static void SET_ENTITY_ANGULAR_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0x7B6B10D7260C93CF, entity, x, y, z); }
static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xBF861D73D95BF415, entity, toggle); }
static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xF88FC425EC7D675D, entity, value); }
static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0x5748CF36AE9EC4E1, entity); }
static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0xC1DAC4DA85BB166D, entity, alphaLevel, skin); }
static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0x3D2DD3A02C8AA9A8, entity); }
static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0xC14A2FED36D0EBB9, entity); }
static void RESET_PICKUP_ENTITY_GLOW(Entity entity) { invoke<Void>(0x5145F9B426021578, entity); }
static void SET_PICKUP_COLLIDES_WITH_PROJECTILES(Any p0, Any p1) { invoke<Void>(0xD28214FC77C81F2E, p0, p1); }
static void SET_ENTITY_SORT_BIAS(Entity entity, float p1) { invoke<Void>(0xF1E557B19688B30D, entity, p1); }
static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0x05177DCE3DD6F271, entity, toggle); }
static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0x0615DFA55885D5B3, entity, toggle); }
static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0x20FF02ED0F707CBC, entity, state); }
static void SET_ENTITY_IS_IN_VEHICLE(Entity entity) { invoke<Void>(0x1F6D8B404B68A2BC, entity); }
static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0x7C601010148C8DDB, x, y, z, radius, originalModel, newModel, p6); }
static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xD80C3522AC21FDB8, x, y, z, radius, originalModel, newModel, p6); }
static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xE226F16D30AF5945, x, y, z, radius, modelHash, p5); }
static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0x77AE88CF56FF88EA, x, y, z, radius, modelHash, p5); }
static void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xC94AE68759E1B3BD, x, y, z, radius, modelHash, p5); }
static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0x9D23D954FF4403CD, x, y, z, p3, modelHash, p5); }
static void REMOVE_FORCED_OBJECT(float x, float y, float z, float p3, Hash modelHash) { invoke<Void>(0x66D6CECFEEC87130, x, y, z, p3, modelHash); }
static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { invoke<Void>(0x015E1BBD4DB33542, entity1, entity2, thisFrameOnly); }
static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xD7AC50B9FB801C60, entity, toggle); }
static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0x06A3C9A5604F9F4C, entity, toggle); }
static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xE59BDA10CE05FD35, entity, toggle); }
static void SET_WAIT_FOR_COLLISIONS_BEFORE_PROBE(Entity entity, BOOL toggle) { invoke<Void>(0x5A91FB116578FE09, entity, toggle); }
static void SET_ENTITY_NOWEAPONDECALS(Entity entity, BOOL p1) { invoke<Void>(0x33D2D42AC3E42D0B, entity, p1); }
static void SET_ENTITY_USE_MAX_DISTANCE_FOR_WATER_REFLECTION(Entity entity, BOOL p1) { invoke<Void>(0xAC895C06C6322C1E, entity, p1); }
static Vector3 GET_ENTITY_BONE_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0x8ED7A7A44B79007B, entity, boneIndex); }
static Vector3 GET_ENTITY_BONE_POSTION(Entity entity, int boneIndex) { return invoke<Vector3>(0x1D49B6C92B9A5B1C, entity, boneIndex); }
static Vector3 GET_ENTITY_BONE_OBJECT_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0x5834A431DBD4B5E5, entity, boneIndex); }
static Vector3 GET_ENTITY_BONE_OBJECT_POSTION(Entity entity, int boneIndex) { return invoke<Vector3>(0xD7F3495D8307C112, entity, boneIndex); }
static int GET_ENTITY_BONE_COUNT(Entity entity) { return invoke<int>(0x132FBDC52691A1A7, entity); }
static void ENABLE_ENTITY_BULLET_COLLISION(Entity entity) { invoke<Void>(0x9C69236A3D0F1B96, entity); }
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0x6662B1F8A5BFA0F2, entity1, entity2); }
static void SET_ENTITY_CANT_CAUSE_COLLISION_DAMAGED_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0x37419414971A4C4B, entity1, entity2); }
static void SET_ALLOW_MIGRATE_TO_SPECTATOR(Entity entity, Any p1) { invoke<Void>(0xAD93DB374DA8B3C7, entity, p1); }
static Entity GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(Entity entity, Hash modelHash) { return invoke<Entity>(0x21B8871CE9CD1479, entity, modelHash); }
static void SET_PICK_UP_BY_CARGOBOB_DISABLED(Entity entity, BOOL toggle) { invoke<Void>(0x70BAF7723F26069A, entity, toggle); }
static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0x26FA2603829F9CF9, ped, name); }
static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { invoke<Void>(0x0A0952DE8943B17C, name, eventType); }
static void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0x7A4EC4F532D19DFA, name, eventType); }
static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0x6E32AA16336291E4, name, eventType); }
static int ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return invoke<int>(0x18B384412B836744, eventType, x, y, z, duration); }
static int ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return invoke<int>(0x378DEB95883BFE01, eventType, entity, duration); }
static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0xD633AC6AD3D4D297, eventType, x, y, z, radius); }
static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0x6E8A7BB566D1F7AF, event); }
static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xEAFAA716662898B8, p0); }
static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x8113594C36A951EF); }
static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xE33015D5CE800786); }
static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int eventType) { invoke<Void>(0x75043178E34E4D3C, eventType); }
static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0x6DB23D1A50246D3A); }
static int GET_NUM_TATTOO_SHOP_DLC_ITEMS(int character) { return invoke<int>(0x82D6E3FDBD0A80B6, character); }
static BOOL GET_TATTOO_SHOP_DLC_ITEM_DATA(int characterType, int decorationIndex, Any* outComponent) { return invoke<BOOL>(0xC8FF7E3E267EBEF5, characterType, decorationIndex, outComponent); }
static int GET_TATTOO_SHOP_DLC_ITEM_INDEX(Hash overlayHash, Any p1, int character) { return invoke<int>(0xE80EBC1CABE1C8A7, overlayHash, p1, character); }
static void INIT_SHOP_PED_COMPONENT(Any* outComponent) { invoke<Void>(0x15D20F88F06530A5, outComponent); }
static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0x7A491C9A90975007, outProp); }
static int SETUP_SHOP_PED_APPAREL_QUERY(int p0, int p1, int p2, int p3) { return invoke<int>(0xD9B1BDDEA510CD90, p0, p1, p2, p3); }
static int SETUP_SHOP_PED_APPAREL_QUERY_TU(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0x7B6C0A0D604E68FA, character, p1, p2, p3, p4, componentId); }
static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0xD36906FE7BBBDB62, componentId, outComponent); }
static int GET_SHOP_PED_QUERY_COMPONENT_INDEX(Hash componentHash) { return invoke<int>(0x55FF07D3A2FE8317, componentHash); }
static void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { invoke<Void>(0xA5690D702773BED4, componentHash, outComponent); }
static void GET_SHOP_PED_QUERY_PROP(int componentId, Any* outProp) { invoke<Void>(0x2DBB2D25D50A5392, componentId, outProp); }
static int GET_SHOP_PED_QUERY_PROP_INDEX(Hash componentHash) { return invoke<int>(0x289EDE99827978AD, componentHash); }
static void GET_SHOP_PED_PROP(Hash componentHash, Any* outProp) { invoke<Void>(0x09A485A642AEADEF, componentHash, outProp); }
static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0x94B8A32AA940A6B5, entity, componentId, drawableVariant, textureVariant); }
static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0x6B7AEB5F3D578298, entity, componentId, propIndex, propTextureIndex); }
static int GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0x5A3F0A3B7ECCBD32, componentHash); }
static int GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Hash propHash) { return invoke<int>(0xCD6EB4A3CCA20602, propHash); }
static void GET_VARIANT_COMPONENT(Hash componentHash, int variantComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0x0249B53AB91BF9D0, componentHash, variantComponentIndex, nameHash, enumValue, componentType); }
static void GET_VARIANT_PROP(Hash componentHash, int variantPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0x5C6B8DD2E15C6B3C, componentHash, variantPropIndex, nameHash, enumValue, anchorPoint); }
static int GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0x9FB2D71D9CEC8B5A, componentHash); }
static int GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(Hash componentHash) { return invoke<int>(0xCBBA20766F48DC67, componentHash); }
static void GET_FORCED_COMPONENT(Hash componentHash, int forcedComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xCF4D7500E7DA5D8E, componentHash, forcedComponentIndex, nameHash, enumValue, componentType); }
static void GET_FORCED_PROP(Hash componentHash, int forcedPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0x24F0ED4836CD2E4D, componentHash, forcedPropIndex, nameHash, enumValue, anchorPoint); }
static BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return invoke<BOOL>(0x304A39EB177D246B, componentHash, restrictionTagHash, componentId); }
static BOOL DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xCA362C769B0F4F0E, ped, componentId, restrictionTagHash); }
static BOOL DOES_CURRENT_PED_PROP_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0x6C309E623368F96B, ped, componentId, restrictionTagHash); }
static int SETUP_SHOP_PED_OUTFIT_QUERY(int character, BOOL p1) { return invoke<int>(0xF2DDA7CE028AB9CB, character, p1); }
static void GET_SHOP_PED_QUERY_OUTFIT(int outfitIndex, Any* outfit) { invoke<Void>(0x808A8ABE207631DF, outfitIndex, outfit); }
static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0x565B95D20273E8CD, p0, p1); }
static int GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return invoke<int>(0x1D814CA2350EAA9E, p0); }
static BOOL GET_SHOP_PED_OUTFIT_PROP_VARIANT(Hash outfitHash, int variantIndex, Any* outPropVariant) { return invoke<BOOL>(0xCD4F2395AE80D510, outfitHash, variantIndex, outPropVariant); }
static BOOL GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Hash outfitHash, int variantIndex, Any* outComponentVariant) { return invoke<BOOL>(0xABE43EB6EBE5F2F5, outfitHash, variantIndex, outComponentVariant); }
static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0x62B04373BFAD9B85); }
static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xBDEBCB00EBC6F89E, dlcVehicleIndex); }
static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, Any* outData) { return invoke<BOOL>(0x92EAC7DBD5D1D750, dlcVehicleIndex, outData); }
static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0x6A1E7E50A4AF1FBD, dlcVehicleIndex); }
static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0x9A7818E159C72516); }
static int GET_NUM_DLC_WEAPONS_SP() { return invoke<int>(0xAFA659708600A8CD); }
static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xDF94727C5BBB298F, dlcWeaponIndex, outData); }
static BOOL GET_DLC_WEAPON_DATA_SP(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xA40B513DA7201333, dlcWeaponIndex, outData); }
static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0x660FA55F8D417CAB, dlcWeaponIndex); }
static int GET_NUM_DLC_WEAPON_COMPONENTS_SP(int dlcWeaponIndex) { return invoke<int>(0x0A334014DFD4952C, dlcWeaponIndex); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0x737024F2814ABDDD, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA_SP(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0x38A1582CAC3F4E95, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return invoke<BOOL>(0x4BFA043D318BF9AE, itemHash); }
static BOOL IS_DLC_VEHICLE_MOD(Hash hash) { return invoke<BOOL>(0xC638DA98694CE80F, hash); }
static Hash GET_DLC_VEHICLE_MOD_LOCK_HASH(Hash hash) { return invoke<Hash>(0x1F6B09FE73B99828, hash); }
static void EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0x5A8C2218A9C71C65, hash); }
static void REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0x5D75D30DF32ECA8E, hash); }
static FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<FireId>(0xC86536B840EE3AB3, X, Y, Z, maxChildren, isGasFire); }
static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { invoke<Void>(0xCA60A45D232EEDDB, fireHandle); }
static FireId START_ENTITY_FIRE(Entity entity) { return invoke<FireId>(0x604C09F6A880730D, entity); }
static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0xC9B695B7C0126DCC, entity); }
static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0x5B702A5D1F2635BE, entity); }
static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xE8D2BD34CCB74431, x, y, z, radius); }
static void SET_FLAMMABILITY_MULTIPLIER(float p0) { invoke<Void>(0xBF956145ADC1339E, p0); }
static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xD7ABE01242C5B8E3, x, y, z, radius); }
static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xDDF99E38A910C346, outPosition, x, y, z); }
static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { invoke<Void>(0xD2FD15A3D9DEE4CC, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); }
static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x8F03CD462437C002, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0x4F2F5C4D814331B7, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); }
static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x8AC0662A292C36F4, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL IS_EXPLOSION_ACTIVE_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x9C5BA0994231CF92, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0x8764A5B95AE1F967, explosionType, x, y, z, radius); }
static Entity GET_OWNER_OF_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<Entity>(0x4E890D800CBC4BD9, explosionType, x, y, z, radius); }
static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<BOOL>(0x9D27D35452DED6B5, explosionType, x1, y1, z1, x2, y2, z2, width); }
static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xCBE5AFAE59C1BB3A, explosionType, x1, y1, z1, x2, y2, z2, radius); }
static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0x9C091F2E9354854A, enabled); }
static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0x9E36887F0AA9DF6D, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0x7B26600F66208BC6, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); }
static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<Void>(0x94DBB0363601E643, x, y, z, radius, red, green, blue, alpha); }
static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xF16E78BBC716DB17, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<Void>(0x5A0030BCCECA3297, x, y, z, size, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0x8B47D286AAC499D6, text, x, y, z, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xBBB7593C7244A846, text, x, y, z, red, green, blue, alpha); }
static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xC9A38C22BE8013F2, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<Void>(0xCCE5AAE0F04B23CC, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); }
static void DRAW_TEXTURED_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0x7FB3FBAF75E52D57, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); }
static void DRAW_TEXTURED_POLY_WITH_THREE_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float red1, float green1, float blue1, int alpha1, float red2, float green2, float blue2, int alpha2, float red3, float green3, float blue3, int alpha3, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xCAB0D2338E17B2AB, x1, y1, z1, x2, y2, z2, x3, y3, z3, red1, green1, blue1, alpha1, red2, green2, blue2, alpha2, red3, green3, blue3, alpha3, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); }
static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0x66ECCFB3761A11CA, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void SET_BACKFACECULLING(BOOL toggle) { invoke<Void>(0x89150F21586978DF, toggle); }
static void SET_DEPTHWRITING(BOOL toggle) { invoke<Void>(0x3547E68D04DBECAD, toggle); }
static BOOL BEGIN_TAKE_MISSION_CREATOR_PHOTO() { return invoke<BOOL>(0xB8D7546CD4CFAF85); }
static int GET_STATUS_OF_TAKE_MISSION_CREATOR_PHOTO() { return invoke<int>(0x4E411746D4FFB0B1); }
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { invoke<Void>(0x9B1F963686B6F6A3); }
static BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x34BE4D7B1AB22F48, p0, p1, p2, p3); }
static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return invoke<int>(0x86AAD2BE6D9F7463, p0); }
static BOOL BEGIN_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<BOOL>(0x7AF299087F97C750); }
static int GET_STATUS_OF_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<int>(0x530D6F0F54C3DDB7); }
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_PREVIEW() { invoke<Void>(0x0222C94B2B39C467); }
static BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke<BOOL>(0x48B40FC81A85F44B); }
static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xB6C7ECEA9936790D); }
static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { invoke<Void>(0xE379C4B49924485C); }
static void SET_TAKEN_PHOTO_IS_MUGSHOT(BOOL toggle) { invoke<Void>(0x21DA82F574DDCFD2, toggle); }
static void SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Any p0, int p1) { invoke<Void>(0x0F7689113DC97142, p0, p1); }
static void SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(Any p0) { invoke<Void>(0xF4575C44910A9DF9, p0); }
static BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return invoke<BOOL>(0xBA0D235D624BE8BD, unused); }
static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke<int>(0x9FE1211A2B698F5D); }
static BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Any p0) { return invoke<BOOL>(0xF8E79D92A7C6EFE0, p0); }
static int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int p0) { return invoke<int>(0x39CD1674039F82E0, p0); }
static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { invoke<Void>(0x464C2B9EE565B093); }
static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { invoke<Void>(0x4FA503A6757253A7, p0, p1); }
static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0x209F5DE8084C2803); }
static int GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xA0BFBD756D313CF2); }
static int GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0x991C49208F09B7C0); }
static BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(Any p0) { return invoke<BOOL>(0xAE1965746C93F8D5, p0); }
static int GET_STATUS_OF_SORTED_LIST_OPERATION(Any p0) { return invoke<int>(0x62830FDE95255DE5, p0); }
static void CLEAR_STATUS_OF_SORTED_LIST_OPERATION() { invoke<Void>(0x60B12E049FB8FF1C); }
static BOOL DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(Any p0) { return invoke<BOOL>(0xA536EFAB049B26A3, p0); }
static BOOL LOAD_HIGH_QUALITY_PHOTO(Any p0) { return invoke<BOOL>(0xE2935008625A1BE0, p0); }
static int GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(int p0) { return invoke<int>(0x7522B8298919A016, p0); }
static void DRAW_LIGHT_WITH_RANGEEX(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0x0AD7E30D4E0D1254, x, y, z, r, g, b, range, intensity, shadow); }
static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0x748651DF4DA0A890, posX, posY, posZ, colorR, colorG, colorB, range, intensity); }
static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<Void>(0xE2E1B9096BCD8C5C, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); }
static void DRAW_SHADOWED_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<Void>(0x2037C6627E628A1B, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); }
static void FADE_UP_PED_LIGHT(float p0) { invoke<Void>(0xAE634DE5D86EE96A, p0); }
static void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { invoke<Void>(0xFF1E5DCD728C42E2, entity); }
static void SET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE(Any p0) { invoke<Void>(0xEC4B7DC773123827, p0); }
static float GET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE() { return invoke<float>(0xB891D572748D432C); }
static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0x7E763410A91A972B, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
static void DRAW_MARKER_EX(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, Any p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts, BOOL p24, BOOL p25) { invoke<Void>(0x9DC025C4B814AA09, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts, p24, p25); }
static void DRAW_MARKER_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, float alpha) { invoke<Void>(0x426E16FFFB6D7AF1, x, y, z, radius, red, green, blue, alpha); }
static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float diameter, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0xDCC9FF4954D6DCB1, type, posX1, posY1, posZ1, posX2, posY2, posZ2, diameter, red, green, blue, alpha, reserved); }
static void SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(int checkpoint, float scale) { invoke<Void>(0xF7A330D622F9A04F, checkpoint, scale); }
static void SET_CHECKPOINT_INSIDE_CYLINDER_SCALE(int checkpoint, float scale) { invoke<Void>(0xE0B16D14D440A7C9, checkpoint, scale); }
static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0xA7DD2E2BCBD9C8D5, checkpoint, nearHeight, farHeight, radius); }
static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xEDC9B904B870CE80, checkpoint, red, green, blue, alpha); }
static void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xF7408C8F340BA88B, checkpoint, red, green, blue, alpha); }
static void SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0xEA8732A7013AB8DC, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); }
static void SET_CHECKPOINT_FORCE_OLD_ARROW_POINTING(int checkpoint) { invoke<Void>(0xA46D09CA7F9EE44B, checkpoint); }
static void SET_CHECKPOINT_DECAL_ROT_ALIGNED_TO_CAMERA_ROT(int checkpoint) { invoke<Void>(0x6F331FADCE88574B, checkpoint); }
static void SET_CHECKPOINT_FORCE_DIRECTION(int checkpoint) { invoke<Void>(0x0E90B81955102A66, checkpoint); }
static void SET_CHECKPOINT_DIRECTION(int checkpoint, float posX, float posY, float posZ) { invoke<Void>(0xA3ADA3BEDDCBD88B, checkpoint, posX, posY, posZ); }
static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0xC2A5E7DCD1900AA1, checkpoint); }
static void DONT_RENDER_IN_GAME_UI(BOOL p0) { invoke<Void>(0xF5AB6155B7363507, p0); }
static void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { invoke<Void>(0xE1DC9972544E4160, toggle); }
static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { invoke<Void>(0xD0D00ED689D6CA81, textureDict, p1); }
static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0x38D063D8CF6D1967, textureDict); }
static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { invoke<Void>(0x633E3833FB96BCCB, textureDict); }
static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a, BOOL p8) { invoke<Void>(0x81645EE95A114FAE, x, y, width, height, r, g, b, a, p8); }
static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { invoke<Void>(0xA66AC5949E305457, toggle); }
static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { invoke<Void>(0xA4F67CEB594AE064, drawOrder); }
static void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { invoke<Void>(0x9A122D542F2BB60E, horizontalAlign, verticalAlign); }
static void RESET_SCRIPT_GFX_ALIGN() { invoke<Void>(0x90B531766063C5CD); }
static void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { invoke<Void>(0x9C066F8D86A1A438, x, y, w, h); }
static void GET_SCRIPT_GFX_ALIGN_POSITION(float x, float y, float* calculatedX, float* calculatedY) { invoke<Void>(0x2BF75F235283775A, x, y, calculatedX, calculatedY); }
static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0x897B441FF18ECBBB); }
static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11, Any p12) { invoke<Void>(0xFFA2B456A81EA1EB, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11, p12); }
static void DRAW_SPRITE_ARX(const char* textureDict, const char* textureName, float x, float y, float width, float height, float p6, int red, int green, int blue, int alpha, Any p11, Any p12) { invoke<Void>(0xC54B91005A54695F, textureDict, textureName, x, y, width, height, p6, red, green, blue, alpha, p11, p12); }
static void DRAW_SPRITE_NAMED_RENDERTARGET(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, Any p11) { invoke<Void>(0xF13626F74924F72A, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); }
static void DRAW_SPRITE_ARX_WITH_UV(const char* textureDict, const char* textureName, float x, float y, float width, float height, float u1, float v1, float u2, float v2, float heading, int red, int green, int blue, int alpha, Any p15) { invoke<Void>(0xF9AAC4780D507BBC, textureDict, textureName, x, y, width, height, u1, v1, u2, v2, heading, red, green, blue, alpha, p15); }
static int ADD_ENTITY_ICON(Entity entity, const char* icon) { return invoke<int>(0x2EB73EDE5BD6492D, entity, icon); }
static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xE71F327DD7F42EE2, entity, toggle); }
static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { invoke<Void>(0x371531C96D032099, entity, red, green, blue, alpha); }
static void SET_DRAW_ORIGIN(float x, float y, float z, BOOL p3) { invoke<Void>(0xB56F2B356187E2E0, x, y, z, p3); }
static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xCE3DA51E28972A56); }
static int SET_BINK_MOVIE(const char* name) { return invoke<int>(0x7DB4C41144D9961A, name); }
static void PLAY_BINK_MOVIE(int binkMovie) { invoke<Void>(0x202024EB1E643238, binkMovie); }
static void STOP_BINK_MOVIE(int binkMovie) { invoke<Void>(0x3A525484C63925D6, binkMovie); }
static void RELEASE_BINK_MOVIE(int binkMovie) { invoke<Void>(0xA3B3261566EE06A5, binkMovie); }
static void DRAW_BINK_MOVIE(int binkMovie, float p1, float p2, float p3, float p4, float p5, int r, int g, int b, int a) { invoke<Void>(0xAED06A53B3F23CC1, binkMovie, p1, p2, p3, p4, p5, r, g, b, a); }
static void SET_BINK_MOVIE_TIME(int binkMovie, float progress) { invoke<Void>(0xBB1B3BE5A5E8B50C, binkMovie, progress); }
static float GET_BINK_MOVIE_TIME(int binkMovie) { return invoke<float>(0x2362B981748EB883, binkMovie); }
static void SET_BINK_MOVIE_VOLUME(int binkMovie, float value) { invoke<Void>(0xA24E6A436BF61457, binkMovie, value); }
static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0xC850B483ACC98D91, entity); }
static void SET_BINK_MOVIE_AUDIO_FRONTEND(int binkMovie, BOOL p1) { invoke<Void>(0x8892E917CE7A0CB0, binkMovie, p1); }
static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0x1BDD93397AF09D53, toggle); }
static void SET_BINK_SHOULD_SKIP(int binkMovie, BOOL bShouldSkip) { invoke<Void>(0x068BA02ADFAA2B2F, binkMovie, bShouldSkip); }
static int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return invoke<int>(0x60E2ADCDDFECC019, movieMeshSetName); }
static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xE76A989290862FBF, movieMeshSet); }
static int QUERY_MOVIE_MESH_SET_STATE(Any p0) { return invoke<int>(0x097EC9C4BC1C0F2E, p0); }
static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0x5949C3C031610A30, x, y); }
static void GET_ACTUAL_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0x21564F65F997D833, x, y); }
static float GET_ASPECT_RATIO(BOOL b) { return invoke<float>(0x4AE9635532D92447, b); }
static float GET_SCREEN_ASPECT_RATIO() { return invoke<float>(0x0DEE1875A0F6FC5F); }
static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0x485ADB2D2728D748); }
static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xC003EE4BA64FE66C); }
static void ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9() { invoke<Void>(0x82987E4477EBF250); }
static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0x7E732AC97C7488C2, toggle); }
static BOOL GET_REQUESTINGNIGHTVISION() { return invoke<BOOL>(0x9A207D2459EC3958); }
static BOOL GET_USINGNIGHTVISION() { return invoke<BOOL>(0xDC7D2B438B687A13); }
static void SET_EXPOSURETWEAK(BOOL toggle) { invoke<Void>(0xBEE1FB2B37222CF5, toggle); }
static void FORCE_EXPOSURE_READBACK(BOOL toggle) { invoke<Void>(0xCB373F25B2EAB622, toggle); }
static void OVERRIDE_NIGHTVISION_LIGHT_RANGE(float p0) { invoke<Void>(0x23F669E51BF7ABC7, p0); }
static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0xA394F5DE4A5BE6D5, toggle); }
static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xF0E0A26499BF51AD, value); }
static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0x2F8A75C70AF54208, worldX, worldY, worldZ, screenX, screenY); }
static Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<Vector3>(0x32D86930C15E1159, textureDict, textureName); }
static BOOL OVERRIDE_PED_CREW_LOGO_TEXTURE(Ped ped, const char* txd, const char* txn) { return invoke<BOOL>(0xAAE0CF56E250FA77, ped, txd, txn); }
static void SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(float p0) { invoke<Void>(0x8AFA674B4DE9BCAE, p0); }
static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0x6CC07FAD61035099, p0, p1, fadeIn, duration, fadeOut); }
static void DISABLE_OCCLUSION_THIS_FRAME() { invoke<Void>(0x66AA5AE1BFE28CA0); }
static void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { invoke<Void>(0x771FE86D2A331DD7, state); }
static void SET_ARTIFICIAL_VEHICLE_LIGHTS_STATE(BOOL toggle) { invoke<Void>(0x5249247B8F69A39E, toggle); }
static void DISABLE_HDTEX_THIS_FRAME() { invoke<Void>(0xABCF34ADFD86B645); }
static int CREATE_TRACKED_POINT() { return invoke<int>(0x5008F9D1AD061D8C); }
static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0x9C0020A372AF7F16, point, x, y, z, radius); }
static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0x8018AA59F97FA9E3, point); }
static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0x4FD2A45FD634CE58, point); }
static int SET_GRASS_CULL_SPHERE(float p0, float p1, float p2, float p3) { return invoke<int>(0x5F3592B356EE3A4C, p0, p1, p2, p3); }
static void REMOVE_GRASS_CULL_SPHERE(int handle) { invoke<Void>(0xB7F6A8F981EF6068, handle); }
static void PROCGRASS_ENABLE_CULLSPHERE(int handle, float x, float y, float z, float scale) { invoke<Void>(0xACA69FD04F5F38B9, handle, x, y, z, scale); }
static void PROCGRASS_DISABLE_CULLSPHERE(int handle) { invoke<Void>(0x85183ED7096BA9E5, handle); }
static BOOL PROCGRASS_IS_CULLSPHERE_ENABLED(int handle) { return invoke<BOOL>(0x67A272C42918EF9F, handle); }
static void PROCGRASS_ENABLE_AMBSCALESCAN() { invoke<Void>(0xC6FE351F50854849); }
static void PROCGRASS_DISABLE_AMBSCALESCAN() { invoke<Void>(0x8DCD9871820858E5); }
static void DISABLE_PROCOBJ_CREATION() { invoke<Void>(0x7EEDA53E80999F2C); }
static void ENABLE_PROCOBJ_CREATION() { invoke<Void>(0x976136EB2D134543); }
static void GRASSBATCH_ENABLE_FLATTENING_EXT_IN_SPHERE(float x, float y, float z, Any p3, float p4, float p5, float p6, float scale) { invoke<Void>(0x69F7527E6819E2B5, x, y, z, p3, p4, p5, p6, scale); }
static void GRASSBATCH_ENABLE_FLATTENING_IN_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6) { invoke<Void>(0x400EE8EE61051687, x, y, z, radius, p4, p5, p6); }
static void GRASSBATCH_DISABLE_FLATTENING() { invoke<Void>(0x3BB0AB71DA07AD52); }
static void CASCADE_SHADOWS_INIT_SESSION() { invoke<Void>(0x714097CFC7878BD0); }
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0xA4D68014F63795B7, p0, p1, p2, p3, p4, p5, p6, p7); }
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(float p0) { invoke<Void>(0xD1EDF428E9679161, p0); }
static void CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(float p0) { invoke<Void>(0xA38ACCBA88BEF30D, p0); }
static void CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(float p0) { invoke<Void>(0x76C8F25CE400DBC9, p0); }
static void CASCADE_SHADOWS_SET_BOUND_POSITION(Any p0) { invoke<Void>(0x33DE7FF46025FB11, p0); }
static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { invoke<Void>(0x70F19143E4E40117, toggle); }
static void CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(BOOL p0) { invoke<Void>(0x029E1B2A8ED6262B, p0); }
static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { invoke<Void>(0x2327CC3214428B97, type); }
static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { invoke<Void>(0xA4F783C5B84288F2); }
static void CASCADE_SHADOWS_SET_AIRCRAFT_MODE(BOOL p0) { invoke<Void>(0x5222710997DF7E10, p0); }
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(BOOL p0) { invoke<Void>(0x89ACA8B99257E016, p0); }
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(float p0) { invoke<Void>(0x4FC2C77501EDCC1A, p0); }
static void CASCADE_SHADOWS_ENABLE_FREEZER(BOOL p0) { invoke<Void>(0x9EFA902715EB835D, p0); }
static void WATER_REFLECTION_SET_SCRIPT_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0xF0A089C4753B822D, p0); }
static void GOLF_TRAIL_SET_ENABLED(BOOL toggle) { invoke<Void>(0x1100D0FDA8244965, toggle); }
static void GOLF_TRAIL_SET_PATH(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0x79C9D43F3FE4480B, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void GOLF_TRAIL_SET_RADIUS(float p0, float p1, float p2) { invoke<Void>(0xFB8F1D6097145CC6, p0, p1, p2); }
static void GOLF_TRAIL_SET_COLOUR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xF3DB862660144254, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void GOLF_TRAIL_SET_TESSELLATION(int p0, int p1) { invoke<Void>(0x91A1DC814CBBB7AF, p0, p1); }
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT_ENABLE(BOOL p0) { invoke<Void>(0x6171C9E04571F992, p0); }
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<Void>(0x4081B44AA3E3FAD3, type, xPos, yPos, zPos, p4, red, green, blue, alpha); }
static void GOLF_TRAIL_SET_SHADER_PARAMS(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xAB60C5CC1A3FCEB6, p0, p1, p2, p3, p4); }
static void GOLF_TRAIL_SET_FACING(BOOL p0) { invoke<Void>(0xD4C0EC928BB68223, p0); }
static float GOLF_TRAIL_GET_MAX_HEIGHT() { return invoke<float>(0xAE8417FD434CE2AD); }
static Vector3 GOLF_TRAIL_GET_VISUAL_CONTROL_POINT(int p0) { return invoke<Vector3>(0x76AF286385CB7A3A, p0); }
static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0x29D3BA4C46972A1C, toggle); }
static BOOL GET_USINGSEETHROUGH() { return invoke<BOOL>(0x8735D1F8A7023128); }
static void SEETHROUGH_RESET() { invoke<Void>(0x20F3F547E98C23D8); }
static void SEETHROUGH_SET_FADE_STARTDISTANCE(float distance) { invoke<Void>(0xB2F5BE72B0EC2DEE, distance); }
static void SEETHROUGH_SET_FADE_ENDDISTANCE(float distance) { invoke<Void>(0x223BF824658215CB, distance); }
static float SEETHROUGH_GET_MAX_THICKNESS() { return invoke<float>(0xA315036610507841); }
static void SEETHROUGH_SET_MAX_THICKNESS(float thickness) { invoke<Void>(0x1D01A8724381340E, thickness); }
static void SEETHROUGH_SET_NOISE_MIN(float amount) { invoke<Void>(0x8FC9D74BE81B474E, amount); }
static void SEETHROUGH_SET_NOISE_MAX(float amount) { invoke<Void>(0x32A8433C67882382, amount); }
static void SEETHROUGH_SET_HILIGHT_INTENSITY(float intensity) { invoke<Void>(0xEE38FB77BB7A9700, intensity); }
static void SEETHROUGH_SET_HIGHLIGHT_NOISE(float noise) { invoke<Void>(0xD736F4EC169C0407, noise); }
static void SEETHROUGH_SET_HEATSCALE(int index, float heatScale) { invoke<Void>(0xC5F88620264793E1, index, heatScale); }
static void SEETHROUGH_SET_COLOR_NEAR(int red, int green, int blue) { invoke<Void>(0x37ED09D2BF486A04, red, green, blue); }
static void SET_MOTIONBLUR_MAX_VEL_SCALER(float p0) { invoke<Void>(0x23A6A0C736CAD705, p0); }
static float GET_MOTIONBLUR_MAX_VEL_SCALER() { return invoke<float>(0x69AFCC77DCADB9BE); }
static void SET_FORCE_MOTIONBLUR(BOOL toggle) { invoke<Void>(0xB13A0D3DD3B674C6, toggle); }
static void TOGGLE_PLAYER_DAMAGE_OVERLAY(BOOL toggle) { invoke<Void>(0xA48EAC4D241222D3, toggle); }
static void RESET_ADAPTATION(int p0) { invoke<Void>(0xE3349610A15FA0D0, p0); }
static BOOL TRIGGER_SCREENBLUR_FADE_IN(float transitionTime) { return invoke<BOOL>(0xC9C9496CFAAB8396, transitionTime); }
static BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return invoke<BOOL>(0xB63687B4F0E3E236, transitionTime); }
static void DISABLE_SCREENBLUR_FADE() { invoke<Void>(0xD2D97A8EA35312E0); }
static float GET_SCREENBLUR_FADE_CURRENT_TIME() { return invoke<float>(0x6C91BB4DA2CAE9B1); }
static BOOL IS_SCREENBLUR_FADE_RUNNING() { return invoke<BOOL>(0xF2CF182F5FDA78DF); }
static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0xDD98B34A4A3AFA89, toggle); }
static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0x26A0105F181C2828); }
static void RESET_PAUSED_RENDERPHASES() { invoke<Void>(0x063FC71162B675A0); }
static void GRAB_PAUSEMENU_OWNERSHIP() { invoke<Void>(0x414B57BC2AF5A7B1); }
static void SET_HIDOF_OVERRIDE(BOOL p0, BOOL p1, float nearplaneOut, float nearplaneIn, float farplaneOut, float farplaneIn) { invoke<Void>(0xC31DA93280D5F36A, p0, p1, nearplaneOut, nearplaneIn, farplaneOut, farplaneIn); }
static void SET_LOCK_ADAPTIVE_DOF_DISTANCE(BOOL p0) { invoke<Void>(0x4F35B6F682DEE8FA, p0); }
static BOOL PHONEPHOTOEDITOR_TOGGLE(BOOL p0) { return invoke<BOOL>(0x6256A54A328A35E6, p0); }
static BOOL PHONEPHOTOEDITOR_IS_ACTIVE() { return invoke<BOOL>(0xB18CDB475D274A8E); }
static BOOL PHONEPHOTOEDITOR_SET_FRAME_TXD(const char* textureDict, BOOL p1) { return invoke<BOOL>(0xEB4A8AC9A591F10E, textureDict, p1); }
static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xE56FEB6B12B5A32C, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<BOOL>(0x190E4141A4C4A1CA, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x5B5B2AE530F511CC, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x4E547C301F81B801, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xDD19F75405614D3C, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x51CD258B1EC7AB66, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0x73F69F74011DDBCA, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0x857B645DF072448C, r, g, b); }
static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0x7C087208DD019397, alpha); }
static void SET_PARTICLE_FX_NON_LOOPED_SCALE(float scale) { invoke<Void>(0xCB9A6C2693F6BC7D, scale); }
static void SET_PARTICLE_FX_NON_LOOPED_EMITTER_SIZE(float p0, float p1, float scale) { invoke<Void>(0x1B4B0BAF27CD18DB, p0, p1, scale); }
static void SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(BOOL toggle) { invoke<Void>(0x66AEB7CADFF26E0B, toggle); }
static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0x56E8A6AA712B10C2, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x2CC6B29B569945CC, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x62750FD2BDD8BD49, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0x3B8EE54DFE24F06C, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xB5BD5079F58A395F, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, r, g, b, a); }
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0x9BE6297091AF1898, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis, r, g, b, a); }
static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0x182120534CCF9023, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0x5301FEC6BB8F21DF, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0x8177A2A9DC5BD5B0, entity); }
static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xA69DCC67B2B61AD1, X, Y, Z, radius); }
static void FORCE_PARTICLE_FX_IN_VEHICLE_INTERIOR(Any p0, Any p1) { invoke<Void>(0x4E96B177783A9BA6, p0, p1); }
static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0x9CFFB7009B578840, ptfxHandle); }
static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xE1CDA05FEF060763, ptfxHandle, x, y, z, rotX, rotY, rotZ); }
static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { invoke<Void>(0xABAD28B5A427340D, ptfxHandle, propertyName, amount, noNetwork); }
static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0x6154AB43546C6437, ptfxHandle, r, g, b, p4); }
static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0x1C53039135495CAE, ptfxHandle, alpha); }
static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0x8ABEEFFE3E33A4FA, ptfxHandle, scale); }
static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { invoke<Void>(0xC3E3C19E6844ABAB, ptfxHandle, range); }
static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0x2F30818D75D66C5B, p0); }
static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xEE3CD2D847C128FA, vehicle, p1); }
static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0x8AC9895670AC9049, p0); }
static void CLEAR_PARTICLE_FX_SHOOTOUT_BOAT() { invoke<Void>(0x85771CA6A17CC68F); }
static void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { invoke<Void>(0xEF93301BC8E9BF71, p0); }
static void DISABLE_IN_WATER_PTFX(BOOL toggle) { invoke<Void>(0xA9EDD0FB09620618, toggle); }
static void DISABLE_DOWNWASH_PTFX(BOOL toggle) { invoke<Void>(0x8D16FC917312C618, toggle); }
static void SET_PARTICLE_FX_SLIPSTREAM_LODRANGE_SCALE(float scale) { invoke<Void>(0x3E9F81F9260D4C72, scale); }
static void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xC826EB0F21193234, toggle); }
static void ENABLE_ALIEN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xB8F49F9656A5277B, toggle); }
static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { invoke<Void>(0x036C12D7B5744CAF, scale); }
static void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float p0) { invoke<Void>(0xB16EFD3957DD7FAD, p0); }
static void SET_PARTICLE_FX_BULLET_TRACE_NO_ANGLE_REJECT(BOOL p0) { invoke<Void>(0x2B05C87E14049BBF, p0); }
static void SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(float p0) { invoke<Void>(0xB260FC482D6B50B9, p0); }
static void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float p0) { invoke<Void>(0xD07BB7EF3C9F43D8, p0); }
static void SET_PARTICLE_FX_FOOT_OVERRIDE_NAME(const char* p0) { invoke<Void>(0x8E22BC7CC1BBF7E4, p0); }
static void SET_SKIDMARK_RANGE_SCALE(float scale) { invoke<Void>(0x19270EAC91F9CFA8, scale); }
static void SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(Any p0) { invoke<Void>(0x081A40A40A77958E, p0); }
static void REGISTER_POSTFX_BULLET_IMPACT(float weaponWorldPosX, float weaponWorldPosY, float weaponWorldPosZ, float intensity) { invoke<Void>(0xB0B142E5C2067BC4, weaponWorldPosX, weaponWorldPosY, weaponWorldPosZ, intensity); }
static void FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(BOOL p0) { invoke<Void>(0x989F8AD94D00CA21, p0); }
static void USE_PARTICLE_FX_ASSET(const char* name) { invoke<Void>(0xD03F4780B97A39AE, name); }
static void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { invoke<Void>(0xFCD81108C00214FE, oldAsset, newAsset); }
static void RESET_PARTICLE_FX_OVERRIDE(const char* name) { invoke<Void>(0x9C1E2E25111A648E, name); }
static void SET_WEATHER_PTFX_USE_OVERRIDE_SETTINGS(BOOL p0) { invoke<Void>(0xC4551CF3C3F087F3, p0); }
static void SET_WEATHER_PTFX_OVERRIDE_CURR_LEVEL(float p0) { invoke<Void>(0x4E6B849A6CDF70A3, p0); }
static void WASH_DECALS_IN_RANGE(float x, float y, float z, float range, float p4) { invoke<Void>(0xA2EEF7A44465A04D, x, y, z, range, p4); }
static void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { invoke<Void>(0x8FD28E44F7FF2A54, vehicle, p1); }
static void FADE_DECALS_IN_RANGE(float x, float y, float z, float p3, float p4) { invoke<Void>(0x726D5358D13D53BD, x, y, z, p3, p4); }
static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0x5926A824AF54BCC3, x, y, z, range); }
static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0x73715B38A9962E7E, obj); }
static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0x6434E0F1FB054F78, obj, x, y, z); }
static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xFEC8EAE457274AD3, vehicle); }
static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<int>(0x0153AEF89004E87C, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); }
static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0x037E59D590865D5A, x, y, z, groundLvl, width, transparency); }
static int ADD_OIL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0x55A40CDFD8F6BD17, x, y, z, groundLvl, width, transparency); }
static void START_PETROL_TRAIL_DECALS(float p0) { invoke<Void>(0xE01851169F9A48A4, p0); }
static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { invoke<Void>(0x83993C32C04DE125, x, y, z, p3); }
static void END_PETROL_TRAIL_DECALS() { invoke<Void>(0x28F49AC9C6000789); }
static void REMOVE_DECAL(int decal) { invoke<Void>(0x93E1EA1609ABF230, decal); }
static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0x1A22029316A4B46C, decal); }
static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0xC437B7DF8EEE7C1D, decal); }
static void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { invoke<Void>(0xAB03CF772B43A288); }
static void SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME() { invoke<Void>(0x6D268E74310FA45D); }
static void SET_DISABLE_DECAL_RENDERING_THIS_FRAME() { invoke<Void>(0xAF28608F1D388164); }
static BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return invoke<BOOL>(0x5713DE6DB59E98EB, xCoord, yCoord, zCoord, radius); }
static void PATCH_DECAL_DIFFUSE_MAP(int decalType, const char* textureDict, const char* textureName) { invoke<Void>(0x1CB4702EAE3C89AB, decalType, textureDict, textureName); }
static void UNPATCH_DECAL_DIFFUSE_MAP(int decalType) { invoke<Void>(0x1B3B68D4F1783EBF, decalType); }
static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xC1FEB5766814FAB4, p0, p1); }
static BOOL ADD_VEHICLE_CREW_EMBLEM(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0x6A808266C74B0678, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); }
static BOOL ABORT_VEHICLE_CREW_EMBLEM_REQUEST(int* p0) { return invoke<BOOL>(0x932EFF1079425E72, p0); }
static void REMOVE_VEHICLE_CREW_EMBLEM(Vehicle vehicle, int p1) { invoke<Void>(0x5429B2C176877208, vehicle, p1); }
static int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return invoke<int>(0xCF9D3F0358793BA8, vehicle, p1); }
static BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return invoke<BOOL>(0x0BCE48C8677F9824, vehicle, p1); }
static void DISABLE_COMPOSITE_SHOTGUN_DECALS(BOOL toggle) { invoke<Void>(0x30046CB0BDCE65EF, toggle); }
static void DISABLE_SCUFF_DECALS(BOOL toggle) { invoke<Void>(0xBC31667BB0F6F0E5, toggle); }
static void SET_DECAL_BULLET_IMPACT_RANGE_SCALE(float p0) { invoke<Void>(0xEB49514A4F04D59F, p0); }
static void OVERRIDE_INTERIOR_SMOKE_NAME(const char* name) { invoke<Void>(0x81A1F979AAA91E2B, name); }
static void OVERRIDE_INTERIOR_SMOKE_LEVEL(float level) { invoke<Void>(0xB9574E68CF98080B, level); }
static void OVERRIDE_INTERIOR_SMOKE_END() { invoke<Void>(0xA5EC3D4652F6CB02); }
static void REGISTER_NOIR_LENS_EFFECT() { invoke<Void>(0x3BE1F84A537B34E0); }
static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0x8A427A89051C6578, toggle); }
static void RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(BOOL p0) { invoke<Void>(0x4DA9E018E2F3A01C, p0); }
static void REQUEST_EARLY_LIGHT_CHECK() { invoke<Void>(0x9E75427EC4E37CA5); }
static void USE_SNOW_FOOT_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0x1258AD6DBC2FBAE1, toggle); }
static void USE_SNOW_WHEEL_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xD7DE01DAA350496A, toggle); }
static void DISABLE_REGION_VFX(Any p0) { invoke<Void>(0x45059C350D918C38, p0); }
static void PRESET_INTERIOR_AMBIENT_CACHE(const char* timecycleModifierName) { invoke<Void>(0x8CBAC8B951402F69, timecycleModifierName); }
static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { invoke<Void>(0x5C483F4653DC993C, modifierName); }
static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0x886C31F5E888F079, strength); }
static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { invoke<Void>(0xDA3EE68EF78AA786, modifierName, transition); }
static void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float strength) { invoke<Void>(0x20C160A285F3529C, strength); }
static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0x80F87A4A3B930613); }
static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0x8960847E5FD7B48F); }
static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0x765B41E82372AA97); }
static BOOL GET_IS_TIMECYCLE_TRANSITIONING_OUT() { return invoke<BOOL>(0x382F60C368A6D416); }
static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0x74C42E6AE0F9355E); }
static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0x7232CF6DD26DC563); }
static void SET_CURRENT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xFE602AB8B7E9AF7D, modifierName); }
static void SET_PLAYER_TCMODIFIER_TRANSITION(float value) { invoke<Void>(0x58DF2EDF7CB54B60, value); }
static void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xAFB25B9F2232474E, modifierName); }
static void ADD_TCMODIFIER_OVERRIDE(const char* modifierName1, const char* modifierName2) { invoke<Void>(0x20F21369990AB23F, modifierName1, modifierName2); }
static void CLEAR_ALL_TCMODIFIER_OVERRIDES(const char* p0) { invoke<Void>(0x96EB2A3044CE3688, p0); }
static void SET_EXTRA_TCMODIFIER(const char* modifierName) { invoke<Void>(0x23DAA15014BC100F, modifierName); }
static void CLEAR_EXTRA_TCMODIFIER() { invoke<Void>(0x15BEA5263EB7BF2A); }
static int GET_EXTRA_TCMODIFIER() { return invoke<int>(0xA81182F96782A8EE); }
static void ENABLE_MOON_CYCLE_OVERRIDE(float strength) { invoke<Void>(0xF1759D35AF2F023B, strength); }
static void DISABLE_MOON_CYCLE_OVERRIDE() { invoke<Void>(0x36AC7953BF22FE97); }
static int REQUEST_SCALEFORM_MOVIE(const char* scaleformName) { return invoke<int>(0x8DE4F68A9728925E, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_WITH_IGNORE_SUPER_WIDESCREEN(const char* scaleformName) { return invoke<int>(0xEDB29E4B0AB3D876, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return invoke<int>(0x5AF05959A6F22BB4, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(const char* scaleformName) { return invoke<int>(0xED28B9E18E376D5D, scaleformName); }
static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0xA0C7B98BCF1EEF9E, scaleformHandle); }
static BOOL IS_ACTIVE_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xA19744810BB29B74, val); }
static BOOL IS_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xF44F8CDAE3ED0ACB, val); }
static BOOL HAS_SCALEFORM_MOVIE_FILENAME_LOADED(const char* scaleformName) { return invoke<BOOL>(0xE47743FF8F06F8C0, scaleformName); }
static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0xD1417F25E6970920, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0xD314260005F064BF, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0x2EE4366DBD59BB7A, scaleform, toggle); }
static void SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0x32323864D97FCFF0, scaleformHandle, toggle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0x6CDCD138191E7A06, scaleformHandle, toggle); }
static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0x6D16B99FEB0AFFF1, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int p5) { invoke<Void>(0xA91A4C18A2DB01BD, scaleform, red, green, blue, alpha, p5); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xDBCD9A6B9D073786, scaleform1, scaleform2, red, green, blue, alpha); }
static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0x3D1B3BF5963D08DE, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); }
static void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xCC3DB9CC9CA34EE8, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); }
static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { invoke<Void>(0xB750FE3C9F094356, scaleform, method); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0xDBCE37B37A697642, scaleform, methodName, param1, param2, param3, param4, param5); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { invoke<Void>(0x4A536D06AFED1D5B, scaleform, methodName, param1, param2, param3, param4, param5); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { invoke<Void>(0x5EA38B125B8B37E5, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); }
static BOOL BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(int hudComponent, const char* methodName) { return invoke<BOOL>(0x192A6D8B6BBD4F41, hudComponent, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return invoke<BOOL>(0x88F483FBD433696A, scaleform, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return invoke<BOOL>(0xF3F7B05FC4684A7C, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(const char* methodName) { return invoke<BOOL>(0x23F66A35FFBE3FFA, methodName); }
static void END_SCALEFORM_MOVIE_METHOD() { invoke<Void>(0xE6B753D52F4CA222); }
static int END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return invoke<int>(0x6CA3F2B87712B6A4); }
static BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(int methodReturn) { return invoke<BOOL>(0xA6F779AA284EB20E, methodReturn); }
static int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(int methodReturn) { return invoke<int>(0x5DEF122A58D4F685, methodReturn); }
static BOOL GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(int methodReturn) { return invoke<BOOL>(0x59252C070F1B0428, methodReturn); }
static const char* GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(int methodReturn) { return invoke<const char*>(0xB78DC0F63757FBD4, methodReturn); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { invoke<Void>(0x330108B080A2132F, value); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { invoke<Void>(0x74BF156C860580D4, value); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { invoke<Void>(0x557F1E2300EF1A3E, value); }
static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { invoke<Void>(0x882AEFD55B8D51FB, componentType); }
static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0xCFAD3D478C87321A); }
static void END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING() { invoke<Void>(0xF84BAB6A609E97D4); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(const char* string) { invoke<Void>(0xA9A70CB35AC098D9, string); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { invoke<Void>(0x3585BEBEDC67FCC7, string); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { invoke<Void>(0xCE3E870AC37B4253, string); }
static BOOL DOES_LATEST_BRIEF_STRING_EXIST(int p0) { return invoke<BOOL>(0x9004B02246EEC817, p0); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(int value) { invoke<Void>(0x2EF4D786C0BC9419, value); }
static void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0x98930EDD857375BF, hudComponent); }
static BOOL HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(int hudComponent) { return invoke<BOOL>(0x9E7C5A44096EB799, hudComponent); }
static void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xE38DA3B12A4DAB3B, hudComponent); }
static BOOL PASS_KEYBOARD_INPUT_TO_SCALEFORM(int scaleformHandle) { return invoke<BOOL>(0x026879F0D0AF82C3, scaleformHandle); }
static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xECDF98280946398E, channel); }
static int GET_TV_CHANNEL() { return invoke<int>(0x6609A7E82612E0DF); }
static void SET_TV_VOLUME(float volume) { invoke<Void>(0xBAF43CF1A42D5B1A, volume); }
static float GET_TV_VOLUME() { return invoke<float>(0x666CD06EF4DA7E5F); }
static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0x1A926FCDE89B4E6E, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); }
static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { invoke<Void>(0x7C7F282055FB517C, tvChannel, playlistName, restart); }
static void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(int tvChannel, const char* playlistName, int hour) { invoke<Void>(0x836D2C7CBC0248D9, tvChannel, playlistName, hour); }
static void CLEAR_TV_CHANNEL_PLAYLIST(int tvChannel) { invoke<Void>(0xF03C7B57F88A5BD3, tvChannel); }
static BOOL IS_PLAYLIST_ON_CHANNEL(int tvChannel, Any p1) { return invoke<BOOL>(0xF03BF645614F3175, tvChannel, p1); }
static BOOL IS_TVSHOW_CURRENTLY_PLAYING(Hash videoCliphash) { return invoke<BOOL>(0x2200033BCF24787D, videoCliphash); }
static void ENABLE_MOVIE_KEYFRAME_WAIT(BOOL toggle) { invoke<Void>(0x24D021DE46A198D2, toggle); }
static void SET_TV_PLAYER_WATCHING_THIS_FRAME(Any p0) { invoke<Void>(0xAFD4869CC7EDDF08, p0); }
static Hash GET_CURRENT_TV_CLIP_NAMEHASH() { return invoke<Hash>(0xE51354CCCD89945F); }
static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0x85B701372CB0390F, toggle); }
static BOOL UI3DSCENE_IS_AVAILABLE() { return invoke<BOOL>(0xAFF91C9040AC6A43); }
static BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return invoke<BOOL>(0xCB55C62F869F934A, presetName); }
static BOOL UI3DSCENE_ASSIGN_PED_TO_SLOT(const char* presetName, Ped ped, int slot, float posX, float posY, float posZ) { return invoke<BOOL>(0xBB0128A9D53B1935, presetName, ped, slot, posX, posY, posZ); }
static void UI3DSCENE_CLEAR_PATCHED_DATA() { invoke<Void>(0xA33BDA0B7720976B); }
static void UI3DSCENE_MAKE_PUSHED_PRESET_PERSISTENT(BOOL toggle) { invoke<Void>(0xEB1896D38B4F1DB4, toggle); }
static void TERRAINGRID_ACTIVATE(BOOL toggle) { invoke<Void>(0x3DA00A8D58908B2C, toggle); }
static void TERRAINGRID_SET_PARAMS(float x, float y, float z, float forwardX, float forwardY, float forwardZ, float sizeX, float sizeY, float sizeZ, float gridScale, float glowIntensity, float normalHeight, float heightDiff) { invoke<Void>(0xDF3F4CBE546A000D, x, y, z, forwardX, forwardY, forwardZ, sizeX, sizeY, sizeZ, gridScale, glowIntensity, normalHeight, heightDiff); }
static void TERRAINGRID_SET_COLOURS(int lowR, int lowG, int lowB, int lowAlpha, int r, int g, int b, int alpha, int highR, int highG, int highB, int highAlpha) { invoke<Void>(0x8FE53A17E3B48F44, lowR, lowG, lowB, lowAlpha, r, g, b, alpha, highR, highG, highB, highAlpha); }
static void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { invoke<Void>(0xDCAFFD08A08087EB, effectName, duration, looped); }
static void ANIMPOSTFX_STOP(const char* effectName) { invoke<Void>(0x21172E4DF035B893, effectName); }
static float ANIMPOSTFX_GET_CURRENT_TIME(const char* effectName) { return invoke<float>(0xF854E7F9C196DEFE, effectName); }
static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0x47CB3D397940E783, effectName); }
static void ANIMPOSTFX_STOP_ALL() { invoke<Void>(0x7919995BD2B8745C); }
static void ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS(const char* effectName) { invoke<Void>(0x8A9BBDEAE0867331, effectName); }
static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(const char* string) { invoke<Void>(0xB661D6EC3F065818, string); }
static void END_TEXT_COMMAND_BUSYSPINNER_ON(int busySpinnerType) { invoke<Void>(0x654AFEEF256E650F, busySpinnerType); }
static void BUSYSPINNER_OFF() { invoke<Void>(0x65662724C6BC4810); }
static void PRELOAD_BUSYSPINNER() { invoke<Void>(0x8CBD7E751A3A6A85); }
static BOOL BUSYSPINNER_IS_ON() { return invoke<BOOL>(0x73F9AE5F32ABCCA9); }
static BOOL BUSYSPINNER_IS_DISPLAYING() { return invoke<BOOL>(0x92E1F6B57257471D); }
static void DISABLE_PAUSEMENU_SPINNER(BOOL p0) { invoke<Void>(0x5E174DAD9D215609, p0); }
static void SET_MOUSE_CURSOR_THIS_FRAME() { invoke<Void>(0xA6DB7FC56DBDFB82); }
static void SET_MOUSE_CURSOR_STYLE(int spriteId) { invoke<Void>(0x30EBBB1D4EDC8FE4, spriteId); }
static void SET_MOUSE_CURSOR_VISIBLE(BOOL toggle) { invoke<Void>(0x26BBBC01C3E132A7, toggle); }
static BOOL IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS() { return invoke<BOOL>(0x2135EF5011FECD68); }
static BOOL GET_MOUSE_EVENT(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0xEE00DCC111704F16, scaleformHandle, p1, p2, p3); }
static void THEFEED_ONLY_SHOW_TOOLTIPS(BOOL toggle) { invoke<Void>(0xD3D5E152F6D9A5F6, toggle); }
static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(float pos) { invoke<Void>(0x043244A32AD6E17D, pos); }
static void THEFEED_HIDE() { invoke<Void>(0xC5F6E5CC785FEC20); }
static void THEFEED_HIDE_THIS_FRAME() { invoke<Void>(0x0C9B2F8C2BD128C2); }
static void THEFEED_SHOW() { invoke<Void>(0x8875527DD4E42C07); }
static void THEFEED_FLUSH_QUEUE() { invoke<Void>(0xC138265FD0CDEA4E); }
static void THEFEED_REMOVE_ITEM(int notificationId) { invoke<Void>(0xFE3A52C5B7AE3101, notificationId); }
static void THEFEED_FORCE_RENDER_ON() { invoke<Void>(0x787E27CA7632AC90); }
static void THEFEED_FORCE_RENDER_OFF() { invoke<Void>(0x6B4FEC23A5AD2DC0); }
static void THEFEED_PAUSE() { invoke<Void>(0x5C6622EF2CEA902F); }
static void THEFEED_RESUME() { invoke<Void>(0xCCC82B30A1C53626); }
static BOOL THEFEED_IS_PAUSED() { return invoke<BOOL>(0xBB7AD75D26AF0143); }
static void THEFEED_REPORT_LOGO_ON() { invoke<Void>(0x8020F127745ED3F5); }
static void THEFEED_REPORT_LOGO_OFF() { invoke<Void>(0xB11A8AFB3C6DEFEE); }
static int THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() { return invoke<int>(0x8DB6B5124B5217E1); }
static void THEFEED_AUTO_POST_GAMETIPS_ON() { invoke<Void>(0x9EABCC9DA69DEDC2); }
static void THEFEED_AUTO_POST_GAMETIPS_OFF() { invoke<Void>(0x1E528DDB9C065FB7); }
static void THEFEED_SET_BACKGROUND_COLOR_FOR_NEXT_POST(int hudColorIndex) { invoke<Void>(0xE37CD12400926DE5, hudColorIndex); }
static void THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(int red, int green, int blue, int alpha) { invoke<Void>(0xDE4E5CC177B7051F, red, green, blue, alpha); }
static void THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(int count) { invoke<Void>(0xF96D051DEBF38D64, count); }
static void THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(BOOL toggle) { invoke<Void>(0x4ECB46EDAD7EA53D, toggle); }
static void THEFEED_RESET_ALL_PARAMETERS() { invoke<Void>(0x17E18CDB962AC915); }
static void THEFEED_FREEZE_NEXT_POST() { invoke<Void>(0x7C64D5DE5CA79A81); }
static void THEFEED_CLEAR_FROZEN_POST() { invoke<Void>(0x9C5AF6A77EBFAFDC); }
static void THEFEED_SET_SNAP_FEED_ITEM_POSITIONS(BOOL p0) { invoke<Void>(0x2DDB2996437CC59C, p0); }
static void THEFEED_UPDATE_ITEM_TEXTURE(const char* txdString1, const char* txnString1, const char* txdString2, const char* txnString2) { invoke<Void>(0x4CF6314488B07405, txdString1, txnString1, txdString2, txnString2); }
static void BEGIN_TEXT_COMMAND_THEFEED_POST(const char* text) { invoke<Void>(0xCCDB0041859B85A6, text); }
static int END_TEXT_COMMAND_THEFEED_POST_STATS(const char* statTitle, int iconEnum, BOOL stepVal, int barValue, BOOL isImportant, const char* pictureTextureDict, const char* pictureTextureName) { return invoke<int>(0x0AAAE599E05E67D2, statTitle, iconEnum, stepVal, barValue, isImportant, pictureTextureDict, pictureTextureName); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0x5C7E2225D7451992, txdName, textureName, flash, iconType, sender, subject); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xB8ACFA63585700CC, txdName, textureName, flash, iconType, sender, subject); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration) { return invoke<int>(0x6015BF83F19DAE5C, txdName, textureName, flash, iconType, sender, subject, duration); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration, const char* clanTag) { return invoke<int>(0xE4DA8A1904D03AB9, txdName, textureName, flash, iconType, sender, subject, duration, clanTag); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(const char* txdName, const char* textureName, BOOL flash, int iconType1, const char* sender, const char* subject, float duration, const char* clanTag, int iconType2, int p9) { return invoke<int>(0x0D54BCD3F7048BFA, txdName, textureName, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER(BOOL blink, BOOL p1) { return invoke<int>(0x25ABFB435E16C7D9, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(BOOL blink, BOOL p1) { return invoke<int>(0x320F2F5B5607E425, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(BOOL blink, BOOL p1) { return invoke<int>(0x1962888D78D95402, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_AWARD(const char* textureDict, const char* textureName, int rpBonus, int colorOverlay, const char* titleLabel) { return invoke<int>(0xD52B1CDE8B03CE86, textureDict, textureName, rpBonus, colorOverlay, titleLabel); }
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0xB262204BCFF28FCC, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); }
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, const char* playerName, int R, int G, int B) { return invoke<int>(0x4252EAF1B00ED825, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK(const char* gxtLabel1, int p1, const char* gxtLabel2) { return invoke<int>(0x7A7782BC954C994B, gxtLabel1, p1, gxtLabel2); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(const char* gxtLabel1, int p1, const char* gxtLabel2, int p3) { return invoke<int>(0xC98870E86912B9E0, gxtLabel1, p1, gxtLabel2, p3); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<int>(0x54CF97A068ED5618, p0, p1, p2, p3, p4, p5); }
static int END_TEXT_COMMAND_THEFEED_POST_MPTICKER(BOOL blink, BOOL p1) { return invoke<int>(0x438D03085FECB959, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_CREW_RANKUP_WITH_LITERAL_FLAG(const char* p0, const char* p1, const char* p2, BOOL p3, BOOL p4) { return invoke<int>(0xC36615DCBE463B8A, p0, p1, p2, p3, p4); }
static int END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU(const char* txdName1, const char* textureName1, int count1, const char* txdName2, const char* textureName2, int count2, int hudColor1, int hudColor2) { return invoke<int>(0x4B4E142A1E3653A4, txdName1, textureName1, count1, txdName2, textureName2, count2, hudColor1, hudColor2); }
static int END_TEXT_COMMAND_THEFEED_POST_REPLAY(int type, int image, const char* text) { return invoke<int>(0xBB8346AD199D9F61, type, image, text); }
static int END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(int type, const char* button, const char* text) { return invoke<int>(0xAB3EA738521899AA, type, button, text); }
static void BEGIN_TEXT_COMMAND_PRINT(const char* GxtEntry) { invoke<Void>(0x17EA339F685C42D2, GxtEntry); }
static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { invoke<Void>(0x0A3136AD174470CC, duration, drawImmediately); }
static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(const char* text) { invoke<Void>(0x32A590914F10401C, text); }
static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0x96DEE7666C9409E5); }
static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { invoke<Void>(0xEAEB6E7D3FAEBD5B, text); }
static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y, int p2) { invoke<Void>(0x25DD447A6EB3A86F, x, y, p2); }
static void BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(const char* text) { invoke<Void>(0x282D5DA1EE14950F, text); }
static float END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(BOOL p0) { return invoke<float>(0x43026780D77E3DC0, p0); }
static void BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(const char* entry) { invoke<Void>(0x012F78DEB1F1AF9C, entry); }
static int END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(float x, float y) { return invoke<int>(0x83FBFC2ED3CA1611, x, y); }
static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(const char* inputType) { invoke<Void>(0xAC98CA65AD9A3215, inputType); }
static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0x5E01B6B1F460FE3F, p0, loop, beep, shape); }
static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* labelName) { invoke<Void>(0x39DCBE5519BD783A, labelName); }
static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0x7EBCD400E7DE179C, p0); }
static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(const char* textLabel) { invoke<Void>(0xF3D182B81172EAB6, textLabel); }
static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0xFB605529038475D2, blip); }
static void BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(const char* p0) { invoke<Void>(0x2E787BE7A586A8E0, p0); }
static void END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0x77AFF2EAF772F223, p0); }
static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(const char* text) { invoke<Void>(0x7C59282918D59E1B, text); }
static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<Void>(0xD4C961FBE468D19D); }
static void BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(const char* gxtEntry) { invoke<Void>(0xF394C416AB393C2D, gxtEntry); }
static void END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(int p0) { invoke<Void>(0xC5999CADF163C996, p0); }
static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0x511D14ED2DA887E1, value); }
static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0x7DCF91CE9137DE0E, value, decimalPlaces); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(const char* labelName) { invoke<Void>(0xACF853FB3F6EA7D4, labelName); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { invoke<Void>(0xD4006E065B0782FA, gxtEntryHash); }
static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0x273F00982486DCC6, blip); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { invoke<Void>(0x60D332F23943B34F, text); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0xBD34A69071611974, timestamp, flags); }
static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { invoke<Void>(0xB5DF3215F3864B3F, value, commaSeparated); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(const char* p0, int p1) { invoke<Void>(0x6CA7A80BDD78C062, p0, p1); }
static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(const char* website) { invoke<Void>(0x74E878E9E51685BE, website); }
static void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* string) { invoke<Void>(0xB993F5B7A74B2A85, string); }
static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(int hudColor) { invoke<Void>(0x4E5A3D96808F7F84, hudColor); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(const char* text, int position, int length) { return invoke<const char*>(0xA4FC5B871651C9F9, text, position, length); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(const char* text, int position, int length, int maxLength) { return invoke<const char*>(0x96793ADAC5A06FCB, text, position, length, maxLength); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(const char* text, int startPosition, int endPosition) { return invoke<const char*>(0xE82BC2F91FAEEAE8, text, startPosition, endPosition); }
static const char* GET_FILENAME_FOR_AUDIO_CONVERSATION(const char* labelName) { return invoke<const char*>(0xFACCDE46E24AD056, labelName); }
static void CLEAR_PRINTS() { invoke<Void>(0x406CBCEA35499884); }
static void CLEAR_BRIEF() { invoke<Void>(0x3FE29AE9C01FA3C2); }
static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xAD01710361B8BCF5); }
static void CLEAR_THIS_PRINT(const char* p0) { invoke<Void>(0x4E8E15513E171E54, p0); }
static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xFFD79EDD25B8EC72); }
static BOOL DOES_TEXT_BLOCK_EXIST(const char* gxt) { return invoke<BOOL>(0x00F2D73E763510A4, gxt); }
static void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { invoke<Void>(0xF2CB0224D3BE0B42, gxt, slot); }
static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(const char* gxt, int slot) { invoke<Void>(0x4AB15E3851FF326B, gxt, slot); }
static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0xDCB78A15E5F495DC, slot); }
static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0xA790E8E6FD7393AC, p0, p1); }
static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0x134994A89C4A6F71, p0); }
static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* gxt, int slot) { return invoke<BOOL>(0xCC2EFE4B1D0EE422, gxt, slot); }
static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xFBA523E6F8ACE541); }
static BOOL DOES_TEXT_LABEL_EXIST(const char* gxt) { return invoke<BOOL>(0x6BA487C862DB8DDF, gxt); }
static const char* GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(const char* string, int length) { return invoke<const char*>(0x570D616FD7B4715D, string, length); }
static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(const char* gxt) { return invoke<int>(0x7BA6D9664C39BE6D, gxt); }
static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0x09112CCF7824FE38, string); }
static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0x31A0D8A679F7D5A7, string); }
static const char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<const char*>(0x816A63C007D39838, hash); }
static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x5775F8AC61C2CAE1); }
static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xC1FF684795F27005); }
static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0x5994A2F6D4FFFE4D); }
static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0x747786364137DC63, toggle); }
static void DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xDB1A0120CD3E3005); }
static void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME() { invoke<Void>(0x915CC2D1BD15DFDF); }
static void DISPLAY_RADAR(BOOL toggle) { invoke<Void>(0x37B894853929BF1A, toggle); }
static void SET_FAKE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0x41CA829CEAEC6F29, toggle); }
static BOOL GET_FAKE_SPECTATOR_MODE() { return invoke<BOOL>(0x88F53A922D4F476E); }
static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xC5D15A335232A15D); }
static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0xBE259DBA45F2996E); }
static BOOL IS_MINIMAP_RENDERING() { return invoke<BOOL>(0x6DA5456258FF887A); }
static void USE_VEHICLE_TARGETING_RETICULE(Any p0) { invoke<Void>(0xEC214A1AB38E0C2B, p0); }
static void ADD_VALID_VEHICLE_HIT_HASH(Any p0) { invoke<Void>(0x045DEDB275874D85, p0); }
static void CLEAR_VALID_VEHICLE_HIT_HASHES() { invoke<Void>(0xEF8AE79C28640CD2); }
static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xBC64B805EE071A37, blip, enabled); }
static void CLEAR_ALL_BLIP_ROUTES() { invoke<Void>(0xCABB9B176D4BC0C6); }
static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0x032F99DF3B301AFA, blip, colour); }
static void SET_FORCE_SHOW_GPS(BOOL toggle) { invoke<Void>(0x7F13032016798DAB, toggle); }
static void SET_USE_SET_DESTINATION_IN_PAUSE_MAP(BOOL toggle) { invoke<Void>(0x5E0F50AE21F74BC0, toggle); }
static void SET_BLOCK_WANTED_FLASH(BOOL disabled) { invoke<Void>(0xAAD5B1BB340D06A2, disabled); }
static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0x3EC26139639016E5, p0); }
static void FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(int p0) { invoke<Void>(0xC8B1536BA5FC0F03, p0); }
static void SET_RADAR_ZOOM_PRECISE(float zoom) { invoke<Void>(0xC4C6378884E06FBD, zoom); }
static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0x4D2F1CB87CBF249D, zoomLevel); }
static void SET_RADAR_ZOOM_TO_BLIP(Blip blip, float zoom) { invoke<Void>(0x0F16C412C8DE5D52, blip, zoom); }
static void SET_RADAR_ZOOM_TO_DISTANCE(float zoom) { invoke<Void>(0xD09188DB6289E413, zoom); }
static void UPDATE_RADAR_ZOOM_TO_BLIP() { invoke<Void>(0x77C721059FFCEE39); }
static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0xA306E6FD2A6558E6, hudColorIndex, r, g, b, a); }
static void SET_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xDBEFC24929CE2C54, r, g, b, a); }
static void SET_SECOND_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0x7E94C30FC8631308, r, g, b, a); }
static void REPLACE_HUD_COLOUR(int hudColorIndex, int hudColorIndex2) { invoke<Void>(0x1800980A1FBB4257, hudColorIndex, hudColorIndex2); }
static void REPLACE_HUD_COLOUR_WITH_RGBA(int hudColorIndex, int r, int g, int b, int a) { invoke<Void>(0x2BC0725CAF2E0D6B, hudColorIndex, r, g, b, a); }
static void SET_ABILITY_BAR_VISIBILITY(BOOL visible) { invoke<Void>(0x5B23CA453BC57FC2, visible); }
static void SET_ALLOW_ABILITY_BAR(BOOL toggle) { invoke<Void>(0x46787A693F6EFA94, toggle); }
static void FLASH_ABILITY_BAR(int millisecondsToFlash) { invoke<Void>(0x8E8EDF5205B15D28, millisecondsToFlash); }
static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0x8349F3048B5A74C7, p0, p1); }
static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0x3C77232660BA1403, p0); }
static void FORCE_OFF_WANTED_STAR_FLASH(BOOL toggle) { invoke<Void>(0xA87B62BE7F8F4476, toggle); }
static void SET_CUSTOM_MP_HUD_COLOR(int hudColorId) { invoke<Void>(0x34337F322B990169, hudColorId); }
static float GET_RENDERED_CHARACTER_HEIGHT(float size, int font) { return invoke<float>(0x3D634C7F6A6D4CA4, size, font); }
static void SET_TEXT_SCALE(float scale, float size) { invoke<Void>(0xBFE94E91C83D8794, scale, size); }
static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0x5A18938160AE52D0, red, green, blue, alpha); }
static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xEAF65721ACB2FDFB, align); }
static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0x16EC7160BEBE7A6F, toggle); }
static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0x2873B596E322DCDA, justifyType); }
static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xE05EB1EAE7CCDC59, start, end); }
static void SET_TEXT_LEADING(int p0) { invoke<Void>(0xFB193A91887FFAB1, p0); }
static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xEA62FB8CA7210CF3, p0); }
static void SET_TEXT_FONT(int fontType) { invoke<Void>(0x8413CD3BCEEAD8DC, fontType); }
static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0x2B50C29142312934); }
static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xB91BC43E3A58E2C8, distance, r, g, b, a); }
static void SET_TEXT_OUTLINE() { invoke<Void>(0xF18BC069A9C882EC); }
static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xBE923A0FDD781C93, p0, r, g, b, a); }
static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0x61055542D9D877AE, renderId); }
static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xB803C9D209A7C3DC); }
static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0x106F99CDCDEED9A0, name, p1); }
static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0xC13AFEAFC3F7AD96, name); }
static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0xF8211BE23F0D0552, name); }
static void LINK_NAMED_RENDERTARGET(Hash modelHash) { invoke<Void>(0xF1C26EB47E689774, modelHash); }
static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0x08732C0099FA1813, name); }
static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0x4D05B3FECBCB8D97, modelHash); }
static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0x428C32CC68809A35, toggle); }
static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0x3273F980CC5E02CD); }
static BOOL HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME() { return invoke<BOOL>(0x89817276E6872917); }
static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0x4C705AAF75363287); }
static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xA5DAECD045AA8024); }
static void SET_HELP_MESSAGE_STYLE(int style, int hudColor, int alpha, int p3, int p4) { invoke<Void>(0x55DAC9CDA320120B, style, hudColor, alpha, p3, p4); }
static int GET_STANDARD_BLIP_ENUM_ID() { return invoke<int>(0x8CC13B3BF7A9890A); }
static int GET_WAYPOINT_BLIP_ENUM_ID() { return invoke<int>(0x2A3612A4B836469E); }
static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0xC802478C8862BDAD); }
static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xA3F6143A8F610118, blipSprite); }
static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xD56419CB9E15983F, blipSprite); }
static Blip GET_CLOSEST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xB981254932E1095E, blipSprite); }
static Vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<Vector3>(0x7DFE6973AE84B6ED, blip); }
static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0xC4BDFF590B6DE7A5, blip); }
static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0x6AEAF32EC173BB39, blip); }
static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xA143F1936B350BD0, blip); }
static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0xFBDAF3DB03D61421, blip); }
static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xCA048D064CB64920, entity); }
static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0x339BF323C4261E69, posX, posY, posZ, radius); }
static Blip ADD_BLIP_FOR_AREA(float x, float y, float z, float width, float height) { return invoke<Blip>(0xAF737D3DF3BD2AD0, x, y, z, width, height); }
static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0x18E23E031A9B798F, entity); }
static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xA1521B7DF72BC9C8, pickup); }
static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0x34864AB7DA700AA6, x, y, z); }
static void TRIGGER_SONAR_BLIP(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0xEECAD62659A58BDE, posX, posY, posZ, radius, p4); }
static void ALLOW_SONAR_BLIPS(BOOL toggle) { invoke<Void>(0xCB3A062F0CD9B0CD, toggle); }
static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0xDABC73EF230B6665, blip, posX, posY, posZ); }
static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0x3CF9D442F2C902BD, blip); }
static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0x4C905FB262965D5D, blip, spriteId); }
static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0x8FACE824AEC046E8, blip); }
static void SET_COP_BLIP_SPRITE(int p0, float p1) { invoke<Void>(0x6C7DF9AC1E90132A, p0, p1); }
static void SET_COP_BLIP_SPRITE_AS_STANDARD() { invoke<Void>(0xF0E6476CF8FDB1A3); }
static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* gxtEntry) { invoke<Void>(0x594D5D0D7071B0DE, blip, gxtEntry); }
static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0x4C8213F2F1BE87F7, blip, player); }
static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xF42EBD7CD0682A8B, blip, alpha); }
static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xF03FBAFA0284124E, blip); }
static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xDA2127CA9B43A877, blip, opacity, duration); }
static int GET_BLIP_FADE_DIRECTION(Blip blip) { return invoke<int>(0x0857F7FF8AA07F67, blip); }
static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0x0C4EDD88E2185B8F, blip, rotation); }
static void SET_BLIP_ROTATION_WITH_FLOAT(Blip blip, float heading) { invoke<Void>(0xA1BA8AD71EF8F11A, blip, heading); }
static int GET_BLIP_ROTATION(Blip blip) { return invoke<int>(0x350EDDA8A9A3C23D, blip); }
static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0x8D777E1B885E428C, blip, duration); }
static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xB562F84CE9B07D89, blip, p1); }
static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0x61183D6239A9D7B8, blip, color); }
static void SET_BLIP_SECONDARY_COLOUR(Blip blip, int r, int g, int b) { invoke<Void>(0x40B5D81DD20A370B, blip, r, g, b); }
static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xA247F53580E53DCE, blip); }
static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0x2B91B956D741B8CE, blip); }
static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xFA7642FA8EE73EEE, blip); }
static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0xE38FA95DFF747E7C, blip); }
static BOOL DOES_BLIP_HAVE_GPS_ROUTE(Blip blip) { return invoke<BOOL>(0x6308A5C1C94EABC0, blip); }
static void SET_BLIP_HIDDEN_ON_LEGEND(Blip blip, BOOL toggle) { invoke<Void>(0xA1DFF583C8070610, blip, toggle); }
static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0x3C6F00DDEA51A2DA, blip, toggle); }
static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xEDFFFD65B4603707, blip, toggle); }
static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0xBA5BA0D4E8539C9C, blip); }
static Blip GET_NEW_SELECTED_MISSION_CREATOR_BLIP() { return invoke<Blip>(0x02C5E86CEA1BE784); }
static BOOL IS_HOVERING_OVER_MISSION_CREATOR_BLIP() { return invoke<BOOL>(0x4F9B9AA859613995); }
static void SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xD441661EA68E9C70, toggle); }
static void SHOW_CONTACT_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0x4BA996FCD0F9D100, toggle); }
static void RELOAD_MAP_MENU() { invoke<Void>(0x95A329CAEBBB3E76); }
static void SET_BLIP_MARKER_LONG_DISTANCE(Any p0, Any p1) { invoke<Void>(0xD54D26545A07FB31, p0, p1); }
static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0x861AC9C2D48CEA7F, blip, toggle); }
static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xAB1FFF93A0BBFCDB, blip, toggle); }
static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0x4B889DE2DAC956DB, blip); }
static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0x360B279488A775FC, blip, toggle); }
static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0x5D3946F818C6B331, blip, scale); }
static void SET_BLIP_SCALE_2D(Blip blip, float xScale, float yScale) { invoke<Void>(0xF7323733F48D067F, blip, xScale, yScale); }
static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0x1456FD5C0C438B19, blip, priority); }
static void SET_BLIP_DISPLAY(Blip blip, int displayId) { invoke<Void>(0xF55F62DA99DB0C2F, blip, displayId); }
static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0x084D9FE4DB5714CF, blip, index); }
static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0xFE54B8568B2ABD12, blip); }
static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0x6A52036D51C7E18E, blip, toggle); }
static void PULSE_BLIP(Blip blip) { invoke<Void>(0x26D449828A6673C7, blip); }
static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0x5765DD63F0ECC572, blip, number); }
static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0x2E229E178F36A415, blip); }
static void SHOW_HEIGHT_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x89FE619BFBB2024B, blip, toggle); }
static void SHOW_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x80595F890177CB50, blip, toggle); }
static void SHOW_GOLD_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xDE551C7F0C84F5D5, blip, toggle); }
static void SHOW_FOR_SALE_ICON_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x082FBF1124B27D02, blip, toggle); }
static void SHOW_HEADING_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x0C56573D93709254, blip, toggle); }
static void SHOW_OUTLINE_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xAA090F5FC303F771, blip, toggle); }
static void SHOW_FRIEND_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x06058DF029F581C6, blip, toggle); }
static void SHOW_CREW_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0x65195BC76F41B298, blip, toggle); }
static void SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Blip blip, BOOL toggle) { invoke<Void>(0xC4F090C2EC0D0FBF, blip, toggle); }
static void SET_BLIP_SHORT_HEIGHT_THRESHOLD(Any p0, Any p1) { invoke<Void>(0x3E0E9367127283D7, p0, p1); }
static void SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(Blip blip, Any p1) { invoke<Void>(0xFAE0C242A432A1F2, blip, p1); }
static void SET_BLIP_AS_MINIMAL_ON_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xA446583E4503CCD9, blip, toggle); }
static void SET_RADIUS_BLIP_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0x641FCCDF2824DCFD, blip, toggle); }
static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xC450B06E5AAA0985, blip); }
static void SET_WAYPOINT_OFF() { invoke<Void>(0xA4C1E1845880C098); }
static void DELETE_WAYPOINTS_FROM_THIS_PLAYER() { invoke<Void>(0x51A6E4D010C4EA83); }
static void REFRESH_WAYPOINT() { invoke<Void>(0xB43DFE4F244E0F8E); }
static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0x02213DC34A224533); }
static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0xF8D9A55D2F2892CC, x, y); }
static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0xEE0DD5760A017C08, blip, toggle); }
static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle, int hudColorIndex) { invoke<Void>(0xD5888E94B9AE2B51, blip, toggle, hudColorIndex); }
static void REMOVE_COP_BLIP_FROM_PED(Ped ped) { invoke<Void>(0xC0FC6E3E1A8FBF31, ped); }
static void SETUP_FAKE_CONE_DATA(Blip blip, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, int p8) { invoke<Void>(0xFF89A4A6580A0AB1, blip, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_FAKE_CONE_DATA(Blip blip) { invoke<Void>(0xA187381CF52D87A8, blip); }
static void CLEAR_FAKE_CONE_ARRAY() { invoke<Void>(0x118A68C39B251785); }
static BOOL SET_MINIMAP_COMPONENT(int componentId, BOOL toggle, int overrideColor) { return invoke<BOOL>(0xA3EA82ACD0C97C3F, componentId, toggle, overrideColor); }
static void SET_MINIMAP_SONAR_SWEEP(BOOL toggle) { invoke<Void>(0x3D0BD9B4E36B9BAD, toggle); }
static void SHOW_ACCOUNT_PICKER() { invoke<Void>(0x030E65C89EF1E38C); }
static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0x413A91F497E3428F); }
static void SET_PM_WARNINGSCREEN_ACTIVE(BOOL p0) { invoke<Void>(0x69E8B9365B1026DD, p0); }
static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0x6B91FA4E397DAB8D); }
static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int zoom) { invoke<Void>(0xF42A811582CF3AE1, interior, x, y, z, zoom); }
static void SET_INSIDE_VERY_SMALL_INTERIOR(BOOL toggle) { invoke<Void>(0xB9485211BF50817B, toggle); }
static void SET_INSIDE_VERY_LARGE_INTERIOR(BOOL toggle) { invoke<Void>(0x060BB8BC8FFE8213, toggle); }
static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xBB6D152B544953A3); }
static void SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0x83F9B9189E65251B, x, y); }
static void SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(float x, float y, Any p2) { invoke<Void>(0x2474C1A1D3FE2888, x, y, p2); }
static BOOL IS_PAUSEMAP_IN_INTERIOR_MODE() { return invoke<BOOL>(0xD4C023FF0817F386); }
static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME() { invoke<Void>(0x2102B34A7006F6C9); }
static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xE1945100CB123CBF); }
static void SET_USE_ISLAND_MAP(BOOL toggle) { invoke<Void>(0x05E996648244715D, toggle); }
static void DONT_TILT_MINIMAP_THIS_FRAME() { invoke<Void>(0x35380F6C70B9B01F); }
static void DONT_ZOOM_MINIMAP_WHEN_RUNNING_THIS_FRAME() { invoke<Void>(0x19619CF6A5F4EE0A); }
static void DONT_ZOOM_MINIMAP_WHEN_SNIPING_THIS_FRAME() { invoke<Void>(0x6A666C5DD5D6F94E); }
static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xD46356460DA60CB1, p0); }
static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0x82BC6786EE477292, toggle); }
static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xC940FB68F75D37B9, toggle); }
static void USE_FAKE_MP_CASH(BOOL toggle) { invoke<Void>(0x97F5AFA09D818568, toggle); }
static void CHANGE_FAKE_MP_CASH(int cash, int bank) { invoke<Void>(0x29F4FA4B0206645D, cash, bank); }
static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xFC14A38C4235E772, display); }
static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0x62E5C1180798DAB7); }
static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0x43AE50D2A33F6E2A); }
static void ALLOW_DISPLAY_OF_MULTIPLAYER_CASH_TEXT(BOOL allow) { invoke<Void>(0x0DD2294269928A9E, allow); }
static void SET_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0x6DB41C6D84391C64); }
static void REMOVE_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0x0B54862B1B49F2EA); }
static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x06C86CAF67357C8B); }
static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0x674C05E89511D49B); }
static void SET_MULTIPLAYER_HUD_CASH(int p0, BOOL p1) { invoke<Void>(0xAD9A5C40381FE51A, p0, p1); }
static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0x3BE4C55385E815B4); }
static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0x7009D885379C8CDF); }
static BOOL IS_IME_IN_PROGRESS() { return invoke<BOOL>(0xFC57ADE8D9DD22DC); }
static void DISPLAY_HELP_TEXT_THIS_FRAME(const char* message, BOOL p1) { invoke<Void>(0x2B742757DC68DB01, message, p1); }
static void HUD_FORCE_WEAPON_WHEEL(BOOL show) { invoke<Void>(0x92D8C10950A06B6D, show); }
static void HUD_FORCE_SPECIAL_VEHICLE_WEAPON_WHEEL() { invoke<Void>(0x5809BD29D4D1392D); }
static void HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME() { invoke<Void>(0xF25C7C5177203507); }
static Hash HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() { return invoke<Hash>(0xAE146ED24909CAF4); }
static void HUD_SET_WEAPON_WHEEL_TOP_SLOT(Hash weaponHash) { invoke<Void>(0xB0D3DD0BB37136FD, weaponHash); }
static Hash HUD_GET_WEAPON_WHEEL_TOP_SLOT(int weaponTypeIndex) { return invoke<Hash>(0xFCFCA9D377ED6568, weaponTypeIndex); }
static void HUD_SHOWING_CHARACTER_SWITCH_SELECTION(BOOL toggle) { invoke<Void>(0xED8161DA7D783683, toggle); }
static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0xF3603E8FF037B294, p0, p1); }
static void CLEAR_GPS_FLAGS() { invoke<Void>(0xB8A4D35AE2F0B024); }
static void SET_RACE_TRACK_RENDER(BOOL toggle) { invoke<Void>(0xF91F060344D298A3, toggle); }
static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0x3792000AF2959DA0); }
static void START_GPS_CUSTOM_ROUTE(int hudColor, BOOL displayOnFoot, BOOL followPlayer) { invoke<Void>(0xCCF5B38438599377, hudColor, displayOnFoot, followPlayer); }
static void ADD_POINT_TO_GPS_CUSTOM_ROUTE(float x, float y, float z) { invoke<Void>(0x1F3227D731DA86BA, x, y, z); }
static void SET_GPS_CUSTOM_ROUTE_RENDER(BOOL toggle, int radarThickness, int mapThickness) { invoke<Void>(0x6850C7B3D44B92DA, toggle, radarThickness, mapThickness); }
static void CLEAR_GPS_CUSTOM_ROUTE() { invoke<Void>(0x3C42C704473E4986); }
static void START_GPS_MULTI_ROUTE(int hudColor, BOOL routeFromPlayer, BOOL displayOnFoot) { invoke<Void>(0x71D40AB8CFA59157, hudColor, routeFromPlayer, displayOnFoot); }
static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z) { invoke<Void>(0xAD5E8940E3832571, x, y, z); }
static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { invoke<Void>(0x0F20DD0DCEB2959F, toggle); }
static void CLEAR_GPS_MULTI_ROUTE() { invoke<Void>(0xC3C7C9791CD79114); }
static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0x5026A520BB4620A7); }
static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xF138B49165C78B6E, toggle); }
static void SET_PLAYER_ICON_COLOUR(int color) { invoke<Void>(0x4D66E2ACA1273DC7, color); }
static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0x2716F9D3A99349AB); }
static void FLASH_MINIMAP_DISPLAY_WITH_COLOR(int hudColorIndex) { invoke<Void>(0x7F8D9D14BCF34424, hudColorIndex); }
static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0x541F544DCB68FDF2, toggle); }
static void SET_MINIMAP_IN_SPECTATOR_MODE(BOOL toggle, Ped ped) { invoke<Void>(0x4BDB60141FD6E156, toggle, ped); }
static void SET_MISSION_NAME(BOOL p0, const char* name) { invoke<Void>(0xB51A8DA1DD0D2E4E, p0, name); }
static void SET_MISSION_NAME_FOR_UGC_MISSION(BOOL p0, const char* name) { invoke<Void>(0x9A2CEA4E7EBB6D0C, p0, name); }
static void SET_DESCRIPTION_FOR_UGC_MISSION_EIGHT_STRINGS(BOOL p0, const char* p1, const char* p2, const char* p3, const char* p4, const char* p5, const char* p6, const char* p7, const char* p8) { invoke<Void>(0xB8D32DDBA1727607, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0x006887B244C43D52, toggle); }
static void SET_MINIMAP_IN_PROLOGUE(BOOL toggle) { invoke<Void>(0x57C73569CFE559CC, toggle); }
static void SET_MINIMAP_HIDE_FOW(BOOL toggle) { invoke<Void>(0x84DE06FB962FF36D, toggle); }
static float GET_MINIMAP_FOW_DISCOVERY_RATIO() { return invoke<float>(0x6FF69BB93DBFAF25); }
static BOOL GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(float x, float y, float z) { return invoke<BOOL>(0x9A761B33F5EF75C5, x, y, z); }
static void SET_MINIMAP_FOW_DO_NOT_UPDATE(BOOL p0) { invoke<Void>(0x7FCEE9F97020FFFD, p0); }
static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float x, float y, float z) { invoke<Void>(0x6515FC329EEDD53D, x, y, z); }
static void SET_MINIMAP_GOLF_COURSE(int hole) { invoke<Void>(0x6E467B341F61426A, hole); }
static void SET_MINIMAP_GOLF_COURSE_OFF() { invoke<Void>(0x5C2232D1A391966B); }
static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xCD1B743BDEC39145, angle); }
static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xF3E3EA936C653F22); }
static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0x43F4B7E163A31644, x, y); }
static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0x33311EBA9464741D); }
static void SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(float altitude, BOOL p1, Any p2) { invoke<Void>(0x4A12B9AB7A7BA5C0, altitude, p1, p2); }
static void SET_HEALTH_HUD_DISPLAY_VALUES(int health, int capacity, BOOL wasAdded) { invoke<Void>(0x8128CB4AD398D07B, health, capacity, wasAdded); }
static void SET_MAX_HEALTH_HUD_DISPLAY(int maximumValue) { invoke<Void>(0x69EA52C44C3F78D9, maximumValue); }
static void SET_MAX_ARMOUR_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xEA2F24FFC9F29EDD, maximumValue); }
static void SET_BIGMAP_ACTIVE(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xC2F71CC2AB70CFB1, toggleBigMap, showFullMap); }
static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0x7B035E8A1D320F1B, id); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xFF455647AC47F397, id); }
static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xD10838CEA97E4725, id); }
static void SHOW_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x06DF266B26D6C535, id); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(int id) { return invoke<BOOL>(0xDBDF2670A7C650DF, id); }
static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x4EB223432F8FA0A0, id); }
static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0x0EE2019295C31BBA, id); }
static void HIDE_STREET_AND_CAR_NAMES_THIS_FRAME() { invoke<Void>(0x0E9AAB792753A7A5); }
static void RESET_RETICULE_VALUES() { invoke<Void>(0x8EBF255F4F3F68B5); }
static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<Void>(0xDCFF86AAD108A201, id); }
static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<Void>(0x36A472841BBC9D4A, id, x, y); }
static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0x93FAFC10F21C7ACA, id); }
static void CLEAR_REMINDER_MESSAGE() { invoke<Void>(0xF64D9910FB38427C); }
static int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<int>(0xA495FBDECD4BE208, worldX, worldY, worldZ, screenX, screenY); }
static void OPEN_REPORTUGC_MENU() { invoke<Void>(0x3D88441D252699DF); }
static void FORCE_CLOSE_REPORTUGC_MENU() { invoke<Void>(0x335E0BA469D39899); }
static BOOL IS_REPORTUGC_MENU_OPEN() { return invoke<BOOL>(0xF69CA4DDEF6E2A55); }
static BOOL IS_FLOATING_HELP_TEXT_ON_SCREEN(int hudIndex) { return invoke<BOOL>(0x00A2121FCB70A45B, hudIndex); }
static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(int hudIndex, float x, float y) { invoke<Void>(0xA0FE5620B9E43942, hudIndex, x, y); }
static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(int hudIndex, float x, float y, float z) { invoke<Void>(0xF2095B7705BD9724, hudIndex, x, y, z); }
static void SET_FLOATING_HELP_TEXT_TO_ENTITY(int hudIndex, Entity entity, float offsetX, float offsetY) { invoke<Void>(0xC8E9EF71F45A1675, hudIndex, entity, offsetX, offsetY); }
static void SET_FLOATING_HELP_TEXT_STYLE(int hudIndex, int p1, int p2, int p3, int p4, int p5) { invoke<Void>(0x02E651988A21FA54, hudIndex, p1, p2, p3, p4, p5); }
static void CLEAR_FLOATING_HELP(int hudIndex, BOOL p1) { invoke<Void>(0x665A7E873A6664BC, hudIndex, p1); }
static void CREATE_MP_GAMER_TAG_WITH_CREW_COLOR(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag, int r, int g, int b) { invoke<Void>(0xBC529C919C370B10, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag, r, g, b); }
static BOOL IS_MP_GAMER_TAG_MOVIE_ACTIVE() { return invoke<BOOL>(0x0ED8AE340A9B5CF5); }
static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0x2E4ECC451E3A3AD9, ped, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); }
static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0xA18D0B8D61E559A0, gamerTagId); }
static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0x2B627A77B9FC284E, gamerTagId); }
static BOOL IS_MP_GAMER_TAG_FREE(int gamerTagId) { return invoke<BOOL>(0x7EF5C276218594E5, gamerTagId); }
static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, BOOL toggle, Any p3) { invoke<Void>(0x7BD00A82CE7156C1, gamerTagId, component, toggle, p3); }
static void SET_ALL_MP_GAMER_TAGS_VISIBILITY(int gamerTagId, BOOL toggle) { invoke<Void>(0xB38A588ED5C50BBD, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0x4E71BD4E0B8022F5, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0x9AADBEC7664AF43A, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_POINT_HEALTH(int gamerTagId, int value, int maximumValue) { invoke<Void>(0x3BB39BA279D65666, gamerTagId, value, maximumValue); }
static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int component, int hudColorIndex) { invoke<Void>(0xFEF57A04955B7213, gamerTagId, component, hudColorIndex); }
static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int gamerTagId, int hudColorIndex) { invoke<Void>(0x46B70532CC643751, gamerTagId, hudColorIndex); }
static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<Void>(0x4B82F311A9427C3F, gamerTagId, component, alpha); }
static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<Void>(0x9544C7327A08C661, gamerTagId, wantedlvl); }
static void SET_MP_GAMER_TAG_NUM_PACKAGES(int gamerTagId, int p1) { invoke<Void>(0x54BD99D8318FB02A, gamerTagId, p1); }
static void SET_MP_GAMER_TAG_NAME(int gamerTagId, const char* string) { invoke<Void>(0xABDAD35D3277104D, gamerTagId, string); }
static BOOL IS_UPDATING_MP_GAMER_TAG_NAME_AND_CREW_DETAILS(int gamerTagId) { return invoke<BOOL>(0xFF7D32FE4F34D7DD, gamerTagId); }
static void SET_MP_GAMER_TAG_BIG_TEXT(int gamerTagId, const char* string) { invoke<Void>(0xB418E0AF8C61B56D, gamerTagId, string); }
static int GET_CURRENT_WEBPAGE_ID() { return invoke<int>(0x00216940DBDC6A74); }
static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0x118B88D02A49C812); }
static int GET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { return invoke<int>(0x9E7C5ECC7DC530D0, flagIndex); }
static void RESET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { invoke<Void>(0x2DD8C72847DFACDF, flagIndex); }
static BOOL IS_WARNING_MESSAGE_READY_FOR_CONTROL() { return invoke<BOOL>(0xFE2A21CD2B0A3547); }
static void SET_WARNING_MESSAGE(const char* titleMsg, int flags, const char* promptMsg, BOOL p3, int p4, const char* p5, const char* p6, BOOL showBackground, int errorCode) { invoke<Void>(0x7B1776B3B53F8D74, titleMsg, flags, promptMsg, p3, p4, p5, p6, showBackground, errorCode); }
static void SET_WARNING_MESSAGE_WITH_HEADER(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any* showBackground, Any* p7, BOOL p8, Any p9) { invoke<Void>(0xDC38CC1E35B6A5D7, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, showBackground, p7, p8, p9); }
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any additionalIntInfo, const char* additionalTextInfoLine1, const char* additionalTextInfoLine2, BOOL showBackground, int errorCode) { invoke<Void>(0x701919482C74B5AB, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, additionalIntInfo, additionalTextInfoLine1, additionalTextInfoLine2, showBackground, errorCode); }
static void SET_WARNING_MESSAGE_WITH_HEADER_EXTENDED(const char* entryHeader, const char* entryLine1, int flags, const char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL showBg, Any p9, Any p10) { invoke<Void>(0x38B55259C2E078ED, entryHeader, entryLine1, flags, entryLine2, p4, p5, p6, p7, showBg, p9, p10); }
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS_EXTENDED(const char* labelTitle, const char* labelMessage, int p2, int p3, const char* labelMessage2, BOOL p5, int p6, int p7, const char* p8, const char* p9, BOOL background, int errorCode) { invoke<Void>(0x15803FEC3B9A872B, labelTitle, labelMessage, p2, p3, labelMessage2, p5, p6, p7, p8, p9, background, errorCode); }
static Hash GET_WARNING_SCREEN_MESSAGE_HASH() { return invoke<Hash>(0xDA185E42FEAAF76B); }
static BOOL SET_WARNING_MESSAGE_OPTION_ITEMS(int index, const char* name, int cash, int rp, int lvl, int colour) { return invoke<BOOL>(0x0C5A80A9E096D529, index, name, cash, rp, lvl, colour); }
static BOOL SET_WARNING_MESSAGE_OPTION_HIGHLIGHT(Any p0) { return invoke<BOOL>(0x3E13E4D6100E6A83, p0); }
static void REMOVE_WARNING_MESSAGE_OPTION_ITEMS() { invoke<Void>(0x9716F9F525C4A03C); }
static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xB11671B812399BA2); }
static void CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE() { invoke<Void>(0x8606422BE9CB6EFC); }
static void CUSTOM_MINIMAP_SET_ACTIVE(BOOL toggle) { invoke<Void>(0xACFD9F78275919B3, toggle); }
static void CUSTOM_MINIMAP_SET_BLIP_OBJECT(int spriteId) { invoke<Void>(0xBC6E3BF0E1E57442, spriteId); }
static int CUSTOM_MINIMAP_CREATE_BLIP(float x, float y, float z) { return invoke<int>(0xCD644A03314C3DF9, x, y, z); }
static void CUSTOM_MINIMAP_CLEAR_BLIPS() { invoke<Void>(0x4F44B8341D970185); }
static BOOL FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<BOOL>(0xF45E267C70ACE01A); }
static Blip GET_NORTH_BLID_INDEX() { return invoke<Blip>(0x8999FC36EFA332BC); }
static void DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(BOOL toggle) { invoke<Void>(0x0C0BAEDD9DE7567B, toggle); }
static void DRAW_FRONTEND_BACKGROUND_THIS_FRAME() { invoke<Void>(0xD3F7CB7571AD8BEB); }
static void DRAW_HUD_OVER_FADE_THIS_FRAME() { invoke<Void>(0x91A048F886524873); }
static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL togglePause, int component) { invoke<Void>(0xBDBC487A0347C2C1, menuhash, togglePause, component); }
static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0x1E80216570AFBFC3, menuHash, p1); }
static Hash GET_CURRENT_FRONTEND_MENU_VERSION() { return invoke<Hash>(0x470CC97DB37CB63B); }
static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0x915FA95E87D33FF5, toggle); }
static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0x6C978B200DAA54DE); }
static void SUPPRESS_FRONTEND_RENDERING_THIS_FRAME() { invoke<Void>(0xE58D20B611F7836C); }
static void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0x2AF77E50375C922F); }
static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0x7946F7681E9E1D79, active); }
static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0x4D9174D8796EA622); }
static BOOL IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN() { return invoke<BOOL>(0x4CEC1EF3DCEEDD1C); }
static int GET_PAUSE_MENU_STATE() { return invoke<int>(0x05AA183DA1344935); }
static Vector3 GET_PAUSE_MENU_POSITION() { return invoke<Vector3>(0xE7DCCB6BBE933741); }
static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xD3F2DA22950AB7F6); }
static void FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(const char* p0) { invoke<Void>(0xB1A3B2B046340845, p0); }
static void PAUSE_MENUCEPTION_GO_DEEPER(int page) { invoke<Void>(0xB749E51D216834D8, page); }
static void PAUSE_MENUCEPTION_THE_KICK() { invoke<Void>(0x4CB2BC42A53598BA); }
static void PAUSE_TOGGLE_FULLSCREEN_MAP(Any p0) { invoke<Void>(0x437E61CD71AF1EBA, p0); }
static void PAUSE_MENU_ACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0x9BC444D671469DCD, contextHash); }
static void PAUSE_MENU_DEACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xB4CD52D6B8305BD4, contextHash); }
static BOOL PAUSE_MENU_IS_CONTEXT_ACTIVE(Hash contextHash) { return invoke<BOOL>(0xBFF989187F281795, contextHash); }
static BOOL PAUSE_MENU_IS_CONTEXT_MENU_ACTIVE() { return invoke<BOOL>(0xDD222CF39CF79FE4); }
static int PAUSE_MENU_GET_HAIR_COLOUR_INDEX() { return invoke<int>(0xE5E00092E71FB6A1); }
static int PAUSE_MENU_GET_MOUSE_HOVER_INDEX() { return invoke<int>(0xF937D4DCF9CC1CF7); }
static int PAUSE_MENU_GET_MOUSE_HOVER_UNIQUE_ID() { return invoke<int>(0x4E537871D44AC56E); }
static BOOL PAUSE_MENU_GET_MOUSE_CLICK_EVENT(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x7BB49823B96323C4, p0, p1, p2); }
static void PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(int p0) { invoke<Void>(0x3F85C0CA5FE1527D, p0); }
static void PAUSE_MENU_SET_BUSY_SPINNER(BOOL p0, int position, int spinnerIndex) { invoke<Void>(0x8307BFA58BB45ED9, p0, position, spinnerIndex); }
static void PAUSE_MENU_SET_WARN_ON_TAB_CHANGE(BOOL p0) { invoke<Void>(0x2FDCBFEEE3E1CA38, p0); }
static BOOL IS_FRONTEND_READY_FOR_CONTROL() { return invoke<BOOL>(0x1CF551BF1611A6F6); }
static void TAKE_CONTROL_OF_FRONTEND() { invoke<Void>(0x26CE50366B7C2760); }
static void RELEASE_CONTROL_OF_FRONTEND() { invoke<Void>(0x9A6119E875538DA1); }
static BOOL CODE_WANTS_SCRIPT_TO_TAKE_CONTROL() { return invoke<BOOL>(0xB91865281BB9451B); }
static int GET_SCREEN_CODE_WANTS_SCRIPT_TO_CONTROL() { return invoke<int>(0x2EE7F7571D5CF4C1); }
static BOOL IS_NAVIGATING_MENU_CONTENT() { return invoke<BOOL>(0xBFF5E63E718E2059); }
static BOOL HAS_MENU_TRIGGER_EVENT_OCCURRED() { return invoke<BOOL>(0x6462E92135CA5CC1); }
static BOOL HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED() { return invoke<BOOL>(0x0A5BC2689B1DF62B); }
static void SET_SAVEGAME_LIST_UNIQUE_ID(Any p0) { invoke<Void>(0xD86E372FF627C3B2, p0); }
static void GET_MENU_TRIGGER_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xB6249BA74349F6AB, lastItemMenuId, selectedItemUniqueId); }
static void GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xE869B507D3624306, lastItemMenuId, selectedItemMenuId, selectedItemUniqueId); }
static BOOL GET_PM_PLAYER_CREW_COLOR(int* r, int* g, int* b) { return invoke<BOOL>(0x5412721BB04590F1, r, g, b); }
static BOOL GET_MENU_PED_INT_STAT(Any p0, Any* p1) { return invoke<BOOL>(0x074484B0C0972EF8, p0, p1); }
static BOOL GET_CHARACTER_MENU_PED_INT_STAT(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0x97A3FD175F8D720C, p0, p1, p2); }
static BOOL GET_MENU_PED_MASKED_INT_STAT(Hash statHash, int* outValue, int mask, BOOL p3) { return invoke<BOOL>(0x77B8D5FD0CF3258F, statHash, outValue, mask, p3); }
static BOOL GET_CHARACTER_MENU_PED_MASKED_INT_STAT(Hash statHash, Any* outValue, int p2, int mask, BOOL p4) { return invoke<BOOL>(0x2D43CD41AC3330E1, statHash, outValue, p2, mask, p4); }
static BOOL GET_MENU_PED_FLOAT_STAT(Hash statHash, float* outValue) { return invoke<BOOL>(0xE1A5C172B921BBD6, statHash, outValue); }
static BOOL GET_CHARACTER_MENU_PED_FLOAT_STAT(float statHash, float* outValue, BOOL p2) { return invoke<BOOL>(0xA3DF89A2303DA964, statHash, outValue, p2); }
static BOOL GET_MENU_PED_BOOL_STAT(Hash statHash, BOOL* outValue) { return invoke<BOOL>(0xE72DC686E764EE0F, statHash, outValue); }
static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0x86CB46F43269108A); }
static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0x1D16BFDD94C0AE8F, ped, p1); }
static void SET_PAUSE_MENU_PED_LIGHTING(BOOL state) { invoke<Void>(0xA6B472383DA6AE23, state); }
static void SET_PAUSE_MENU_PED_SLEEP_STATE(BOOL state) { invoke<Void>(0xE98A31D3C1927ED6, state); }
static void OPEN_ONLINE_POLICIES_MENU() { invoke<Void>(0xCC1642C4C1CE902A); }
static BOOL ARE_ONLINE_POLICIES_UP_TO_DATE() { return invoke<BOOL>(0xDD3EE6E5E154DB78); }
static BOOL IS_ONLINE_POLICIES_MENU_ACTIVE() { return invoke<BOOL>(0xEBBFE40DB22B29D2); }
static void OPEN_SOCIAL_CLUB_MENU() { invoke<Void>(0x20D7E34C22DC60AC); }
static void CLOSE_SOCIAL_CLUB_MENU() { invoke<Void>(0x694DFE6467A01AAB); }
static void SET_SOCIAL_CLUB_TOUR(const char* name) { invoke<Void>(0xDA24B54CF6C0E8B8, name); }
static BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0x39E7796CCE4DC681); }
static void SET_TEXT_INPUT_BOX_ENABLED(BOOL p0) { invoke<Void>(0x19F42FEE708FB281, p0); }
static void FORCE_CLOSE_TEXT_INPUT_BOX() { invoke<Void>(0x11FFB143F448979C); }
static void SET_ALLOW_COMMA_ON_TEXT_INPUT(Any p0) { invoke<Void>(0x283E9A39F4EE4D14, p0); }
static void OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(Hash gxtEntryHash) { invoke<Void>(0xA9CB5BD48046EF42, gxtEntryHash); }
static BOOL IS_MP_TEXT_CHAT_TYPING() { return invoke<BOOL>(0xF8EFC60132F8109F); }
static void CLOSE_MP_TEXT_CHAT() { invoke<Void>(0x0BD166E025AF0A14); }
static void MP_TEXT_CHAT_IS_TEAM_JOB(Any p0) { invoke<Void>(0x5C381D09C558ACD0, p0); }
static void OVERRIDE_MP_TEXT_CHAT_COLOR(int p0, int hudColor) { invoke<Void>(0x7F29E8664304CDA7, p0, hudColor); }
static void MP_TEXT_CHAT_DISABLE(BOOL toggle) { invoke<Void>(0xF111804437599169, toggle); }
static void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(BOOL toggle) { invoke<Void>(0x622323CECEB8593D, toggle); }
static void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { invoke<Void>(0x2BF2F8E20C19583C, ped, hasCone); }
static void SET_PED_HAS_AI_BLIP_WITH_COLOUR(Ped ped, BOOL hasCone, int color) { invoke<Void>(0xF42995E2FC0559E0, ped, hasCone, color); }
static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0xA23AABF378361F85, ped); }
static void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { invoke<Void>(0x8B185FD7C0308117, ped, gangId); }
static void SET_PED_AI_BLIP_HAS_CONE(Ped ped, BOOL toggle) { invoke<Void>(0x2A253D5DC7CA1CEC, ped, toggle); }
static void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { invoke<Void>(0xB070F32F5FE88A2A, ped, toggle); }
static void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { invoke<Void>(0x9FFBD1A17AAE3E0D, ped, range); }
static void SET_PED_AI_BLIP_SPRITE(Ped ped, int spriteId) { invoke<Void>(0x12022943BDF6F088, ped, spriteId); }
static Blip GET_AI_PED_PED_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xA95E5FB2D27EECF2, ped); }
static Blip GET_AI_PED_VEHICLE_BLIP_INDEX(Ped ped) { return invoke<Blip>(0x294B0261C20A78E0, ped); }
static BOOL HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE() { return invoke<BOOL>(0x97246390EF16DFC3); }
static void SET_DIRECTOR_MODE_LAUNCHED_BY_SCRIPT() { invoke<Void>(0x1DC460B8E8F5A142); }
static void SET_PLAYER_IS_IN_DIRECTOR_MODE(BOOL toggle) { invoke<Void>(0x8BF557F9256B2A6E, toggle); }
static void SET_DIRECTOR_MODE_AVAILABLE(BOOL toggle) { invoke<Void>(0x38236280C567C045, toggle); }
static void HIDE_HUDMARKERS_THIS_FRAME() { invoke<Void>(0x7D2CDF366EDD8ADD); }
static float GET_INTERIOR_HEADING(Interior interior) { return invoke<float>(0xB70C73407E942734, interior); }
static void GET_INTERIOR_LOCATION_AND_NAMEHASH(Interior interior, Vector3* position, Hash* nameHash) { invoke<Void>(0x97A631B5F81A6197, interior, position, nameHash); }
static int GET_INTERIOR_GROUP_ID(Interior interior) { return invoke<int>(0x1F6CFCD52206CDB0, interior); }
static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z) { return invoke<Vector3>(0xB849529ACBFB3D85, interior, x, y, z); }
static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0x4B7DCB210992A9F7); }
static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0xF8A8852F99E201DD, interior); }
static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0x1ACA339FBE1A59EA, entity); }
static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { invoke<Void>(0x10D289FA72A25777, entity, interior, roomHashKey); }
static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xAB74A6FE5E16479E, entity); }
static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xC69E0125145BB58A, entity); }
static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0xF8F35890F43ED2AE, entity); }
static void RETAIN_ENTITY_IN_INTERIOR(Entity entity, Interior interior) { invoke<Void>(0xD29996371F9BD0FD, entity, interior); }
static void CLEAR_INTERIOR_STATE_OF_ENTITY(Entity entity) { invoke<Void>(0xDE69E5D63A1F57E0, entity); }
static void FORCE_ACTIVATING_TRACKING_ON_ENTITY(Any p0, Any p1) { invoke<Void>(0x6E562EEC4008A0C5, p0, p1); }
static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { invoke<Void>(0xA88C91AADCB02A8A, interiorID, roomHashKey); }
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(const char* roomName) { invoke<Void>(0xDC750660004ECB83, roomName); }
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(Hash roomHashKey) { invoke<Void>(0x2EFEB897BDD17B5B, roomHashKey); }
static Hash GET_ROOM_KEY_FOR_GAME_VIEWPORT() { return invoke<Hash>(0xA491B07310DC58BE); }
static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoke<Void>(0xCC3ADBA41991FF4E); }
static Interior GET_INTERIOR_FROM_PRIMARY_VIEW() { return invoke<Interior>(0x92EA98681B1610F2); }
static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0x0E171121A3A25363, x, y, z); }
static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) { invoke<Void>(0x57303BAC3E5DA035, pickup, roomName); }
static void PIN_INTERIOR_IN_MEMORY(Interior interior) { invoke<Void>(0x74C1590CC91B3930, interior); }
static void UNPIN_INTERIOR(Interior interior) { invoke<Void>(0xBBB6D0F765409642, interior); }
static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0xD0B0D1BD29678350, interior); }
static BOOL SET_INTERIOR_IN_USE(Interior interior) { return invoke<BOOL>(0x75E4D52830820775, interior); }
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0x0556019E7EE8EC9A, x, y, z, interiorType); }
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(float x, float y, float z, Hash typeHash) { return invoke<Interior>(0x98915B4A834CE874, x, y, z, typeHash); }
static void ACTIVATE_INTERIOR_GROUPS_USING_CAMERA() { invoke<Void>(0x87B6357C65356CB1); }
static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0x7830326EF9D54DBB, x, y, z); }
static Interior GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<Interior>(0x91398220755C14BF, x, y, z); }
static void ENABLE_STADIUM_PROBES_THIS_FRAME(BOOL toggle) { invoke<Void>(0xBC9CDE5AE8D32EF2, toggle); }
static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0x907994FF361E5295, interior, entitySetName); }
static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0x62BCE536D41AC07D, interior, entitySetName); }
static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0x9491D4E34E4389CD, interior, entitySetName); }
static void SET_INTERIOR_ENTITY_SET_TINT_INDEX(Interior interior, const char* entitySetName, int color) { invoke<Void>(0x0A047107933868D4, interior, entitySetName, color); }
static void REFRESH_INTERIOR(Interior interior) { invoke<Void>(0xEEC112F70F9E6543, interior); }
static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xCBC55350FF75F537, mapObjectHash); }
static void ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0x8B8D24263DAB0736, mapObjectHash); }
static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xD3EBDA853981B983, interior, toggle); }
static BOOL IS_INTERIOR_DISABLED(Interior interior) { return invoke<BOOL>(0xE849FB3A0C73A0D9, interior); }
static void CAP_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xA5C49FC956688050, interior, toggle); }
static BOOL IS_INTERIOR_CAPPED(Interior interior) { return invoke<BOOL>(0x79D5985D0CE1880C, interior); }
static void DISABLE_METRO_SYSTEM(BOOL toggle) { invoke<Void>(0x01C8E9BB989C1EEE, toggle); }
static void SET_IS_EXTERIOR_ONLY(Entity entity, BOOL toggle) { invoke<Void>(0x9AC70C40670AC02D, entity, toggle); }
static ScrHandle CREATE_ITEMSET(BOOL p0) { return invoke<ScrHandle>(0x5F6AD54378A3995E, p0); }
static void DESTROY_ITEMSET(ScrHandle itemset) { invoke<Void>(0x2BDB03D2AA09D565, itemset); }
static BOOL IS_ITEMSET_VALID(ScrHandle itemset) { return invoke<BOOL>(0x3A05653FFCBAFB55, itemset); }
static BOOL ADD_TO_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0x28458D567A56CEFC, item, itemset); }
static void REMOVE_FROM_ITEMSET(ScrHandle item, ScrHandle itemset) { invoke<Void>(0xF7F5C49BCD99E28D, item, itemset); }
static int GET_ITEMSET_SIZE(ScrHandle itemset) { return invoke<int>(0xED06F75C0AB45AAA, itemset); }
static ScrHandle GET_INDEXED_ITEM_IN_ITEMSET(int index, ScrHandle itemset) { return invoke<ScrHandle>(0xC7CE1F723246133A, index, itemset); }
static BOOL IS_IN_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xD0EC006D02DA188E, item, itemset); }
static void CLEAN_ITEMSET(ScrHandle itemset) { invoke<Void>(0x6C123E50989D9F3C, itemset); }
static BOOL LOBBY_AUTO_MULTIPLAYER_MENU() { return invoke<BOOL>(0x8EE7901EEE84F67E); }
static BOOL LOBBY_AUTO_MULTIPLAYER_FREEMODE() { return invoke<BOOL>(0xA7D416B098808337); }
static void LOBBY_SET_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xD0DC425AC19B966E, toggle); }
static BOOL LOBBY_AUTO_MULTIPLAYER_EVENT() { return invoke<BOOL>(0x7B661ACC29FA795E); }
static void LOBBY_SET_AUTO_MULTIPLAYER_EVENT(BOOL toggle) { invoke<Void>(0x7F2A9FAB60E93DB0, toggle); }
static BOOL LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB() { return invoke<BOOL>(0xE90EEDCA654B46A9); }
static void LOBBY_SET_AUTO_MP_RANDOM_JOB(BOOL toggle) { invoke<Void>(0x8191C51F9DD9189D, toggle); }
static void SHUTDOWN_SESSION_CLEARS_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0x994B0E18137346ED, toggle); }
static int LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke<int>(0x148785E497902C88); }
static int GET_CURRENT_LANGUAGE() { return invoke<int>(0x8608526719A575EE); }
static int LOCALIZATION_GET_SYSTEM_DATE_TYPE() { return invoke<int>(0xD676FB5DAC59FB72); }
static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0x6F4C4DF60C52867E); }
static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke<int>(0x546238515F929872, stackSize); }
static void SET_RANDOM_SEED(int seed) { invoke<Void>(0x3B9F35917EDE3ACB, seed); }
static void SET_TIME_SCALE(float timeScale) { invoke<Void>(0xE6AC149D1121535D, timeScale); }
static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0x925970A93719CADE, toggle); }
static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0x3D2EB53CF281A77E); }
static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { invoke<Void>(0x7EA65A7D5C6CBDB5, toggle); }
static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0x9FA91AA1AC724CD0); }
static const char* GET_CONTENT_TO_LOAD() { return invoke<const char*>(0x3DF0567938549C05); }
static void ACTIVITY_FEED_CREATE(const char* p0, const char* p1) { invoke<Void>(0x1C18D23E19C76212, p0, p1); }
static void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0x0E68815680F90E0E, p0); }
static void ACTIVITY_FEED_ADD_LITERAL_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0x7199DFD024AA24F3, p0); }
static void ACTIVITY_FEED_ADD_INT_TO_CAPTION(Any p0) { invoke<Void>(0x1C49F79FA808A72C, p0); }
static void ACTIVITY_FEED_LARGE_IMAGE_URL(const char* p0) { invoke<Void>(0x6304FE01A952A1ED, p0); }
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(const char* p0, const char* p1) { invoke<Void>(0x1ECA72F56ADCE605, p0, p1); }
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(const char* p0) { invoke<Void>(0x1BB362CAE190AD06, p0); }
static void ACTIVITY_FEED_POST() { invoke<Void>(0x3A4500FC2B94720A); }
static void ACTIVITY_FEED_ONLINE_PLAYED_WITH_POST(const char* p0) { invoke<Void>(0x41DBD10907A5CF18, p0); }
static BOOL HAS_RESUMED_FROM_SUSPEND() { return invoke<BOOL>(0x801039B3B8E28F8D); }
static void SET_SCRIPT_HIGH_PRIO(BOOL toggle) { invoke<Void>(0x21EA3DC8C16770EF, toggle); }
static void SET_THIS_IS_A_TRIGGER_SCRIPT(BOOL toggle) { invoke<Void>(0x2918C30E34ED2C88, toggle); }
static void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(const char* p0) { invoke<Void>(0x1F1A910C8AD5C453, p0); }
static BOOL GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xC557C842E425A746, p0, p1, p2, p3); }
static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xED2E53B1A3927830); }
static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0x60B554F782F2E6A6); }
static BOOL IS_PREV_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0x4DC8DC4C28B3BADA, weatherType); }
static BOOL IS_NEXT_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0x79C890C56ADBF83B, weatherType); }
static void SET_WEATHER_TYPE_PERSIST(const char* weatherType) { invoke<Void>(0xFD5A87843250F1B3, weatherType); }
static void SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) { invoke<Void>(0xE38A58649E049502, weatherType); }
static void SET_WEATHER_TYPE_NOW(const char* weatherType) { invoke<Void>(0xF286E683D1E1F101, weatherType); }
static void SET_WEATHER_TYPE_OVERTIME_PERSIST(const char* weatherType, float time) { invoke<Void>(0xE0F4EA3A654155A3, weatherType, time); }
static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0x9E392E2DB654EE0A); }
static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xA21EFB60FCA3D0F6); }
static void CLEAR_WEATHER_TYPE_NOW_PERSIST_NETWORK(int milliseconds) { invoke<Void>(0x4EAA4126FEE56C40, milliseconds); }
static void GET_CURR_WEATHER_STATE(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0x239D73A1DE006629, weatherType1, weatherType2, percentWeather2); }
static void SET_CURR_WEATHER_STATE(Hash weatherType1, Hash weatherType2, float percentWeather2) { invoke<Void>(0x2D213D9B5D0FE42B, weatherType1, weatherType2, percentWeather2); }
static void SET_OVERRIDE_WEATHER(const char* weatherType) { invoke<Void>(0x88791F880F624022, weatherType); }
static void SET_OVERRIDE_WEATHEREX(const char* weatherType, BOOL p1) { invoke<Void>(0x43BE2F49C708E7B4, weatherType, p1); }
static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0x58A3B74F26D2B532); }
static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float amplitude) { invoke<Void>(0x2D6868095BD2DF64, amplitude); }
static void WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xB39B9674B1E9D097, minAmplitude); }
static void WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0x5D2587098D2C9CEF, maxAmplitude); }
static void WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xA3F61E8395582E30, minAmplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xE8B5A1B75D8BF700, amplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0x2CA1243CF0209F78, minAmplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0x1FAABAECFD9A7C83, maxAmplitude); }
static void WATER_OVERRIDE_SET_RIPPLEBUMPINESS(float bumpiness) { invoke<Void>(0x716752DE8ABA2F76, bumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(float minBumpiness) { invoke<Void>(0x3C7E67D89C37CDBA, minBumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(float maxBumpiness) { invoke<Void>(0x18DEB87CBCBB1C35, maxBumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEDISTURB(float disturb) { invoke<Void>(0xAC4F34F6299E2289, disturb); }
static void WATER_OVERRIDE_SET_STRENGTH(float strength) { invoke<Void>(0x92425F5F9A2DC557, strength); }
static void WATER_OVERRIDE_FADE_IN(float p0) { invoke<Void>(0x2E7312742ADECB25, p0); }
static void WATER_OVERRIDE_FADE_OUT(float p0) { invoke<Void>(0xC425B6AC7F4443A0, p0); }
static void SET_WIND(float speed) { invoke<Void>(0x65D8EA648927792B, speed); }
static void SET_WIND_SPEED(float speed) { invoke<Void>(0xF9CA39E1CCB8EA1D, speed); }
static float GET_WIND_SPEED() { return invoke<float>(0xDD9996B22AD9179C); }
static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0x0A9D04B4275939F5, direction); }
static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0xF12BE04302B5836E); }
static void SET_RAIN(float intensity) { invoke<Void>(0x3AC92E39007E1D09, intensity); }
static float GET_RAIN_LEVEL() { return invoke<float>(0x12BE8EA03391694B); }
static void SET_SNOW(float level) { invoke<Void>(0x312CA455A59783FA, level); }
static float GET_SNOW_LEVEL() { return invoke<float>(0xB68ECCFF52582B84); }
static void FORCE_LIGHTNING_FLASH() { invoke<Void>(0xD4BCC7D6BFB4EF0F); }
static void SET_CLOUD_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0x6D47423391C7C131, p0); }
static void PRELOAD_CLOUD_HAT(const char* name) { invoke<Void>(0xC540300DE977409D, name); }
static void LOAD_CLOUD_HAT(const char* name, float transitionTime) { invoke<Void>(0xEE3C332799057645, name, transitionTime); }
static void UNLOAD_CLOUD_HAT(const char* name, float p1) { invoke<Void>(0xE6FCB8178DFE489F, name, p1); }
static void UNLOAD_ALL_CLOUD_HATS() { invoke<Void>(0xB7C3B23648284A54); }
static void SET_CLOUDS_ALPHA(float opacity) { invoke<Void>(0xC05F48B1C4FD8BC9, opacity); }
static float GET_CLOUDS_ALPHA() { return invoke<float>(0xB5B278F6D1EBCD53); }
static int GET_GAME_TIMER() { return invoke<int>(0x1DD05E817C89C737); }
static float GET_FRAME_TIME() { return invoke<float>(0x0B852B0BF94A8DC1); }
static float GET_SYSTEM_TIME_STEP() { return invoke<float>(0xEC235469207D1121); }
static int GET_FRAME_COUNT() { return invoke<int>(0x8034325BF6D6E41F); }
static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xD2AA6F822D3A55D2, startRange, endRange); }
static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xC5935DFB3F39785A, startRange, endRange); }
static int GET_RANDOM_MWC_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0x4AFA59A11CC00538, startRange, endRange); }
static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL ignoreWater, BOOL p5) { return invoke<BOOL>(0xB1EAADCB692D69CE, x, y, z, groundZ, ignoreWater, p5); }
static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, Vector3* normal) { return invoke<BOOL>(0x1C23EBEE3AABD4C7, x, y, z, groundZ, normal); }
static BOOL GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL p4, BOOL p5) { return invoke<BOOL>(0x81AB70B3FE98F1DF, x, y, z, groundZ, p4, p5); }
static float ASIN(float p0) { return invoke<float>(0x1670C66FA901C0D8, p0); }
static float ACOS(float p0) { return invoke<float>(0x42CDD13001C98400, p0); }
static float TAN(float p0) { return invoke<float>(0xD1AA84345B760931, p0); }
static float ATAN(float p0) { return invoke<float>(0x21CDF75488EFB98B, p0); }
static float ATAN2(float p0, float p1) { return invoke<float>(0x4964D7A2BFD2F9A3, p0, p1); }
static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xED977E2AE2CB16EE, x1, y1, z1, x2, y2, z2, useZ); }
static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0x20A3B1C2EC4167BB, x1, y1, x2, y2); }
static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0x97BC40FFA2FFCCD2, dx, dy); }
static float GET_RATIO_OF_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<float>(0xA2DD309FA5FD1435, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); }
static Vector3 GET_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<Vector3>(0xC14F2F615169363F, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); }
static BOOL GET_LINE_PLANE_INTERSECTION(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0x148F60DDDBC323FD, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL GET_POINT_AREA_OVERLAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<BOOL>(0x298E7BBD04F29848, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void SET_BIT(int* address, int offset) { invoke<Void>(0x0B0C9A0F9AAEB7F0, address, offset); }
static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0x8744D2E3FC95740E, address, offset); }
static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0x70E57E9927B6BA58, string); }
static void SLERP_NEAR_QUATERNION(float t, float x, float y, float z, float w, float x1, float y1, float z1, float w1, float* outX, float* outY, float* outZ, float* outW) { invoke<Void>(0x4D16ECAA05186DFE, t, x, y, z, w, x1, y1, z1, w1, outX, outY, outZ, outW); }
static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xEBC91D4C68FF5260, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL IS_AREA_OCCUPIED_SLOW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<BOOL>(0x7405FEB2AD8926AC, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL checkVehicles, BOOL checkPeds, BOOL p7, BOOL p8, Entity ignoreEntity, BOOL p10) { return invoke<BOOL>(0x5A3D7606D599F99A, x, y, z, range, p4, checkVehicles, checkPeds, p7, p8, ignoreEntity, p10); }
static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xD7813C7A74CA9AF9, p0, p1, p2, p3, p4, p5, p6); }
static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0x2094BC4B6731BA68, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); }
static void CLEAR_AREA_LEAVE_VEHICLE_HEALTH(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0x4FEBA5060BFD5111, x, y, z, radius, p4, p5, p6, p7); }
static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, Any p10) { invoke<Void>(0x60040CDD28AA1BC3, x, y, z, radius, p4, p5, p6, p7, p8, p9, p10); }
static void CLEAR_ANGLED_AREA_OF_VEHICLES(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0x6F3435F85C932A08, x1, y1, z1, x2, y2, z2, width, p7, p8, p9, p10, p11, p12, p13); }
static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xBAAB54D57B40765E, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0x55F7AC4B2B875901, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0x8B0110C1F1D9D177, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<Void>(0xEC73DFE5CE55E19C, x, y, z, radius, flags); }
static void CLEAR_SCENARIO_SPAWN_HISTORY() { invoke<Void>(0xE0443EB1DC8A2F79); }
static void SET_SAVE_MENU_ACTIVE(BOOL ignoreVehicle) { invoke<Void>(0x20D668730B14B5F4, ignoreVehicle); }
static int GET_STATUS_OF_MANUAL_SAVE() { return invoke<int>(0xDEBBFB8E738665F4); }
static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0x810E39899814611D, toggle); }
static void SET_CREDITS_FADE_OUT_WITH_SCREEN(BOOL toggle) { invoke<Void>(0x9969A63702BCDEFE, toggle); }
static BOOL HAVE_CREDITS_REACHED_END() { return invoke<BOOL>(0xDCD722759F93678D); }
static BOOL ARE_CREDITS_RUNNING() { return invoke<BOOL>(0x45E146165ACF587E); }
static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) { invoke<Void>(0xD13237BC328B938E, scriptName); }
static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0x51CC1333A10C4E09); }
static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0x69A4491104E14366, x, y, z, p3, p4); }
static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0x281BDB37010064F5, hospitalIndex, toggle); }
static int ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<int>(0xDFA763BBB6D72603, p0, p1, p2, p3, p4); }
static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xD9256F7FF1791115, policeIndex, toggle); }
static void SET_RESTART_COORD_OVERRIDE(float x, float y, float z, float heading) { invoke<Void>(0x0B8F3F7DA0F3F93F, x, y, z, heading); }
static void CLEAR_RESTART_COORD_OVERRIDE() { invoke<Void>(0x51F06E07524AD20D); }
static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { invoke<Void>(0xD43B9D1692F5C06E, toggle); }
static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0x72B1E2693AC30407, toggle); }
static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0x31E8D1058586E006, toggle); }
static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0x332262819D51DF61, toggle); }
static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0x40AC02FA167D4D0A, toggle); }
static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xC83C5315C571C2FE, toggle); }
static int REGISTER_SAVE_HOUSE(float x, float y, float z, float p3, const char* p4, Any p5, Any p6) { return invoke<int>(0x869634E57B4F3343, x, y, z, p3, p4, p5, p6); }
static void SET_SAVE_HOUSE(int savehouseHandle, BOOL p1, BOOL p2) { invoke<Void>(0xC372A80C7719DF28, savehouseHandle, p1, p2); }
static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0x4C6A124A4C49BC22, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL GET_SAVE_HOUSE_DETAILS_AFTER_SUCCESSFUL_LOAD(Vector3* p0, float* p1, BOOL* fadeInAfterLoad, BOOL* p3) { return invoke<BOOL>(0xD1CA4C3A111D9BBF, p0, p1, fadeInAfterLoad, p3); }
static void DO_AUTO_SAVE() { invoke<Void>(0xE3BCCCA3244EDF82); }
static BOOL GET_IS_AUTO_SAVE_OFF() { return invoke<BOOL>(0xB0B88048B5914A7A); }
static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0x46150A5112561134); }
static BOOL HAS_CODE_REQUESTED_AUTOSAVE() { return invoke<BOOL>(0x9F4AE9BED29CAFA0); }
static void CLEAR_CODE_REQUESTED_AUTOSAVE() { invoke<Void>(0xF7F21AEA9B22B838); }
static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0x2133FE32510D05F7, p0, p1); }
static void ADD_REPLAY_STAT_VALUE(Any value) { invoke<Void>(0x9012CD429E55212A, value); }
static void END_REPLAY_STATS() { invoke<Void>(0xCA08FA2F9FE43B29); }
static BOOL HAVE_REPLAY_STATS_BEEN_STORED() { return invoke<BOOL>(0x90168A0DE18A7F1A); }
static int GET_REPLAY_STAT_MISSION_ID() { return invoke<int>(0x81D4D874CB1DFBE4); }
static int GET_REPLAY_STAT_MISSION_TYPE() { return invoke<int>(0x16C990F0AEBBC7A3); }
static int GET_REPLAY_STAT_COUNT() { return invoke<int>(0x536257A79D7C865A); }
static int GET_REPLAY_STAT_AT_INDEX(int index) { return invoke<int>(0x8BDAC9E7F4C1D9E5, index); }
static void CLEAR_REPLAY_STATS() { invoke<Void>(0x4BB54FF089A08B44); }
static BOOL QUEUE_MISSION_REPEAT_LOAD() { return invoke<BOOL>(0x46A69DE38863D8FD); }
static BOOL QUEUE_MISSION_REPEAT_SAVE() { return invoke<BOOL>(0x9F57DA3897B26EAE); }
static BOOL QUEUE_MISSION_REPEAT_SAVE_FOR_BENCHMARK_TEST() { return invoke<BOOL>(0x080152C0ECDC471B); }
static int GET_STATUS_OF_MISSION_REPEAT_SAVE() { return invoke<int>(0x7DE5CD18CC7CF0A6); }
static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0x8B27A086F4268F56); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0xA934E5D7EEE03C7E, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, Any p14) { invoke<Void>(0x2D8982A81816E618, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, Entity targetEntity, BOOL p17, Any p18, Any p19, Any p20) { invoke<Void>(0x5733B7E88AFB2E3B, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, targetEntity, p17, p18, p19, p20); }
static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0xC93BAF616F1C680F, modelHash, minimum, maximum); }
static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0x50FB8785AFA2D59C, fakeWantedLevel); }
static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0x3C273019E2F3471D); }
static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xCC1EDB9BCC914639, toggle); }
static void ALLOW_MISSION_CREATOR_WARP(BOOL toggle) { invoke<Void>(0x8D57FA5F8F95730F, toggle); }
static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0x58B5B800DED763EE, toggle); }
static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0x94A7730DEC6E86C8); }
static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0x204E68849C425DF0); }
static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0x1156728DBCB1F3B2); }
static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0x4721B5E26C8861C8); }
static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0x38640D2193CB547F, profileSetting); }
static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0x1B79E937E91F40C3, string1, string2); }
static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xDCE96FB47C1D0314, str1, str2, matchCase, maxLength); }
static int ABSI(int value) { return invoke<int>(0x510D0699BE9C6D06, value); }
static float ABSF(float value) { return invoke<float>(0x1D5CD3EAAA7422B0, value); }
static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xD83D7629BFD65725, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xE94C7FA27FEB00DD, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL ownedByPlayer) { return invoke<BOOL>(0x7A082DC02E5E00C1, x1, y1, z1, x2, y2, z2, type, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7, BOOL ownedByPlayer) { return invoke<BOOL>(0x9F8FB43463B75A3D, x1, y1, z1, x2, y2, z2, width, p7, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float x, float y, float z, Hash projectileHash, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0x8EC0BB480F11446F, x, y, z, projectileHash, radius, ownedByPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projectileHash, Vector3* projectilePos, BOOL ownedByPlayer) { return invoke<BOOL>(0x8C538F7B2B233B2C, x1, y1, z1, x2, y2, z2, projectileHash, projectilePos, ownedByPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_ANGLED_AREA(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float distanceOfOppositeFace, Hash weaponType, Vector3* positionOut, BOOL bIsPlayer) { return invoke<BOOL>(0x17D830B00DB4A9DC, vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, distanceOfOppositeFace, weaponType, positionOut, bIsPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, BOOL p4) { return invoke<BOOL>(0xED2558D599937EFD, ped, weaponHash, distance, outCoords, p4); }
static BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, Object* outProjectile, BOOL p5) { return invoke<BOOL>(0xF67924A428A734EC, ped, weaponHash, distance, outCoords, outProjectile, p5); }
static BOOL IS_BULLET_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL ownedByPlayer) { return invoke<BOOL>(0xF20EF02FBF173C32, x1, y1, z1, x2, y2, z2, width, ownedByPlayer); }
static BOOL IS_BULLET_IN_AREA(float x, float y, float z, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0x398315D0C90DE6F6, x, y, z, radius, ownedByPlayer); }
static BOOL IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0x5BF86E66F9BF0BE9, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xA646A9FF47E2E515, x, y, z, p3, p4, p5); }
static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xB7C4B23CEF2B3B58, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0x3B880DE16766E9C3); }
static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xFD5A25A8B9488D42); }
static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0x1226C55CA7D2269A); }
static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0x0BA1A956D36B210F); }
static BOOL IS_PC_VERSION() { return invoke<BOOL>(0x761778199FE1211C); }
static BOOL IS_STEAM_VERSION() { return invoke<BOOL>(0x32BC1B96D39D2E38); }
static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0x1EF90593EF09F7FA); }
static BOOL IS_JAPANESE_VERSION() { return invoke<BOOL>(0x74C1828126652223); }
static BOOL IS_XBOX_PLATFORM() { return invoke<BOOL>(0xFF449C9B68734F2B); }
static BOOL IS_SCARLETT_VERSION() { return invoke<BOOL>(0x6823557BDD18031C); }
static BOOL IS_SCE_PLATFORM() { return invoke<BOOL>(0xC5D69BE0998EF509); }
static BOOL IS_PROSPERO_VERSION() { return invoke<BOOL>(0x716271729B9FB8E6); }
static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0xFF692AB7350A74D7, string); }
static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0xD6F9DEE4765092A9, string); }
static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0xA2ADD4A27CA857C2, string, outInteger); }
static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0xA11116C8E2E46ED4, var, rangeStart, rangeEnd, p3); }
static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0x8B5B2BE72A7C0CF6, var, rangeStart, rangeEnd); }
static int ADD_STUNT_JUMP(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float camX, float camY, float camZ, int p15, int p16, int p17) { return invoke<int>(0xC0DBC28967D7BE19, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, camX, camY, camZ, p15, p16, p17); }
static int ADD_STUNT_JUMP_ANGLED(float x1, float y1, float z1, float x2, float y2, float z2, float radius1, float x3, float y3, float z3, float x4, float y4, float z4, float radius2, float camX, float camY, float camZ, int p17, int p18, int p19) { return invoke<int>(0x8CD9B5E60B98207A, x1, y1, z1, x2, y2, z2, radius1, x3, y3, z3, x4, y4, z4, radius2, camX, camY, camZ, p17, p18, p19); }
static void TOGGLE_SHOW_OPTIONAL_STUNT_JUMP_CAMERA(BOOL toggle) { invoke<Void>(0xCE366B3838FC5CC5, toggle); }
static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0xDE4E7D1D52BD4533, p0); }
static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0x28365F67ED751FCB, p0); }
static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xF27998ADBDAB9049, p0); }
static void SET_STUNT_JUMPS_CAN_TRIGGER(BOOL toggle) { invoke<Void>(0x7F0D18D1F5BF6D0F, toggle); }
static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xF6D8C7059C3C2495); }
static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0xB2E86D4871B30979); }
static int GET_NUM_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0x2FED6B8DCEAE8D75); }
static int GET_TOTAL_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0x356BDA6BB9847878); }
static void CANCEL_STUNT_JUMP() { invoke<Void>(0xE751ECBA8573687A); }
static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0x98E393364463951A, toggle); }
static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xAECC5FA98C879D67, toggle); }
static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0x9F83BF77C7204C05, toggle); }
static BOOL HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash, int amount) { return invoke<BOOL>(0x1DBC8A6F227520FD, hash, amount); }
static BOOL HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash) { return invoke<BOOL>(0x4590C086096F07D8, hash); }
static void OVERRIDE_FREEZE_FLAGS(BOOL p0) { invoke<Void>(0x8822ABB8DFD960E5, p0); }
static void SET_INSTANCE_PRIORITY_MODE(int p0) { invoke<Void>(0x2268617D0B5A5B35, p0); }
static void SET_INSTANCE_PRIORITY_HINT(int flag) { invoke<Void>(0xF6ECB54A7941386F, flag); }
static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0x114ABA9988FF784B); }
static void POPULATE_NOW() { invoke<Void>(0x1BBEB35757ED1961); }
static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xC5C8FC4D42BFD749); }
static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0x446CF90BF0024020, level); }
static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xA2CDB686AB549D8A, p0, p1, p2); }
static void STOP_SAVE_DATA() { invoke<Void>(0xB6F769D890A34B99); }
static int GET_SIZE_OF_SAVE_DATA(BOOL p0) { return invoke<int>(0x7E1CF25229CF544D, p0); }
static void REGISTER_INT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xA40FAFA53DFF4362, p0, name); }
static void REGISTER_INT64_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x385F74AF4024D51A, p0, name); }
static void REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x93C679A3AE20C964, p0, name); }
static void REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x3C17D57F8A1F4336, p0, name); }
static void REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x929D7CE0F2CAD21C, p0, name); }
static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x062FF4ED33C1328C, p0, name); }
static void REGISTER_TEXT_LABEL_15_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x70972D3D43C1B5EB, p0, name); }
static void REGISTER_TEXT_LABEL_23_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x29926EE43ABCE454, p0, name); }
static void REGISTER_TEXT_LABEL_31_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0x2CEFD365B46A1DBE, p0, name); }
static void REGISTER_TEXT_LABEL_63_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xC05BEBBC3D252F8C, p0, name); }
static void START_SAVE_STRUCT_WITH_SIZE(Any* p0, int size, const char* structName) { invoke<Void>(0x2714FB94E6EAC372, p0, size, structName); }
static void STOP_SAVE_STRUCT() { invoke<Void>(0x648D295A649ED2C3); }
static void START_SAVE_ARRAY_WITH_SIZE(Any* p0, int size, const char* arrayName) { invoke<Void>(0x54DF17092B1F59BA, p0, size, arrayName); }
static void STOP_SAVE_ARRAY() { invoke<Void>(0x6C29B075C8530441); }
static void COPY_SCRIPT_STRUCT(Any* dst, Any* src, int size) { invoke<Void>(0xDD7F149F8BAF1260, dst, src, size); }
static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0xCC1C92F7E1A3CE9D, dispatchService, toggle); }
static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { invoke<Void>(0xB3BB215FCE55E6A9, dispatchService, toggle); }
static int GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(int dispatchService) { return invoke<int>(0x874C935832B2AE06, dispatchService); }
static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0x70DA4F87B396F9F9, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); }
static BOOL CREATE_INCIDENT_WITH_ENTITY(int dispatchService, Ped ped, int numUnits, float radius, int* outIncidentID, Any p5, Any p6) { return invoke<BOOL>(0xDD121F61016F3CE0, dispatchService, ped, numUnits, radius, outIncidentID, p5, p6); }
static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0x3D09B44C2ACEA592, incidentId); }
static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0x5BA108AB15E668B7, incidentId); }
static void SET_INCIDENT_REQUESTED_UNITS(int incidentId, int dispatchService, int numUnits) { invoke<Void>(0x399A3B6D30C64629, incidentId, dispatchService, numUnits); }
static void SET_IDEAL_SPAWN_DISTANCE_FOR_INCIDENT(int incidentId, float p1) { invoke<Void>(0xBF2292E4C98122D5, incidentId, p1); }
static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float posX, float posY, float posZ, float fwdVecX, float fwdVecY, float fwdVecZ, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0x604F09F8F9DA5404, posX, posY, posZ, fwdVecX, fwdVecY, fwdVecZ, distance, spawnPoint); }
static int ADD_POP_MULTIPLIER_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, float p7, BOOL p8, BOOL p9) { return invoke<int>(0x6991BFCE3D87261B, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static BOOL DOES_POP_MULTIPLIER_AREA_EXIST(int id) { return invoke<BOOL>(0x87EDD05291B7412C, id); }
static void REMOVE_POP_MULTIPLIER_AREA(int id, BOOL p1) { invoke<Void>(0x78640FB2D4298B2D, id, p1); }
static BOOL IS_POP_MULTIPLIER_AREA_NETWORKED(int id) { return invoke<BOOL>(0x3989D4F6D95B3DBD, id); }
static int ADD_POP_MULTIPLIER_SPHERE(float x, float y, float z, float radius, float pedMultiplier, float vehicleMultiplier, BOOL p6, BOOL p7) { return invoke<int>(0xA0FA113A187BAF0D, x, y, z, radius, pedMultiplier, vehicleMultiplier, p6, p7); }
static BOOL DOES_POP_MULTIPLIER_SPHERE_EXIST(int id) { return invoke<BOOL>(0xCA7C80E031F9BFD2, id); }
static void REMOVE_POP_MULTIPLIER_SPHERE(int id, BOOL p1) { invoke<Void>(0x9049EEEF48D81A2F, id, p1); }
static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x311543257CA6E66E, ped, toggle, p2); }
static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xB5B917AAA3DF1A78, ped); }
static void PLAY_TENNIS_SWING_ANIM(Ped ped, const char* animDict, const char* animName, float p3, float p4, BOOL p5) { invoke<Void>(0x66D844353F51465F, ped, animDict, animName, p3, p4, p5); }
static BOOL GET_TENNIS_SWING_ANIM_COMPLETE(Ped ped) { return invoke<BOOL>(0xC9F6150424259965, ped); }
static BOOL GET_TENNIS_SWING_ANIM_CAN_BE_INTERRUPTED(Ped ped) { return invoke<BOOL>(0xD4DBCC67CA333F7D, ped); }
static BOOL GET_TENNIS_SWING_ANIM_SWUNG(Ped ped) { return invoke<BOOL>(0x812812F60647A0F8, ped); }
static void PLAY_TENNIS_DIVE_ANIM(Ped ped, int p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0x9A6987280C48639C, ped, p1, p2, p3, p4, p5); }
static void SET_TENNIS_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* p1, float p2) { invoke<Void>(0xD3FF6AD07BECA69C, ped, p1, p2); }
static void RESET_DISPATCH_SPAWN_LOCATION() { invoke<Void>(0xB111CFC87C576C1C); }
static void SET_DISPATCH_SPAWN_LOCATION(float x, float y, float z) { invoke<Void>(0xDB96C28A65D345EE, x, y, z); }
static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xD7186A4A316964F2); }
static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float distance) { invoke<Void>(0x6625908717AE7808, distance); }
static void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0) { invoke<Void>(0x5FBC5D27DD8DFF61, p0); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0x986164755D8E9A93, p0, p1); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0x28CC6EA9A96AA5D4, p0, p1); }
static int ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xBE01072D0E1EE6DD, x1, y1, z1, x2, y2, z2, width); }
static int ADD_DISPATCH_SPAWN_SPHERE_BLOCKING_AREA(float x1, float y1, float x2, float y2) { return invoke<int>(0xB33FCD685BC4E12D, x1, y1, x2, y2); }
static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<Void>(0x2AF25F1F08FCBEF6, p0); }
static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0x0FE4FED766438E0E); }
static void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN() { invoke<Void>(0x3C6FB3D7478BC495); }
static void SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(int p0, int p1) { invoke<Void>(0x5844B0328AB76BBF, p0, p1); }
static void ADD_TACTICAL_NAV_MESH_POINT(float x, float y, float z) { invoke<Void>(0x74057F606033EB70, x, y, z); }
static void CLEAR_TACTICAL_NAV_MESH_POINTS() { invoke<Void>(0x81B15F40AAE95932); }
static void SET_RIOT_MODE_ENABLED(BOOL toggle) { invoke<Void>(0x44182C1D103A97D2, toggle); }
static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) { invoke<Void>(0x305739C2F5BFA5D9, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); }
static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0xCFF30C6181F9B8BC, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0x66DA7155B68E7638); }
static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0x43FB09E8020180EA); }
static void CANCEL_ONSCREEN_KEYBOARD() { invoke<Void>(0x541EC9E98C2783B3); }
static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int p0) { invoke<Void>(0x8CB5613E14D44228, p0); }
static void ACTION_MANAGER_ENABLE_ACTION(Hash hash, BOOL enable) { invoke<Void>(0x324833E4F1D15D2D, hash, enable); }
static int GET_REAL_WORLD_TIME() { return invoke<int>(0x093F26D866EFF997); }
static void SUPRESS_RANDOM_EVENT_THIS_FRAME(int eventType, BOOL suppress) { invoke<Void>(0x06687A6579389884, eventType, suppress); }
static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0x35A960C1E2064D55, player); }
static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0x6966C09904B48D54, player); }
static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0x7F2AA4BA999DE234, player); }
static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0x353BF8D85390AA39, player); }
static void SET_BEAST_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xEA00B3128DDC34A5, player); }
static void SET_FORCED_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xBD53F503C46AD430, player); }
static BOOL HAS_GAME_INSTALLED_THIS_SESSION() { return invoke<BOOL>(0xF27FC86E347471F1); }
static void SET_TICKER_JOHNMARSTON_IS_DONE() { invoke<Void>(0xB691EC20AD2A1AC2); }
static BOOL ARE_PROFILE_SETTINGS_VALID() { return invoke<BOOL>(0x76CA59C648318506); }
static void PREVENT_ARREST_STATE_THIS_FRAME() { invoke<Void>(0xD4930C902E5CD6B6); }
static void FORCE_GAME_STATE_PLAYING() { invoke<Void>(0xDA91D9D96ED0EB8F); }
static void SCRIPT_RACE_INIT(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xE971F2F7312DC1FB, p0, p1, p2, p3); }
static void SCRIPT_RACE_SHUTDOWN() { invoke<Void>(0x33F8639DDBB019B4); }
static void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Player player, Any p1, Any p2, Any p3) { invoke<Void>(0x52E29231F896396E, player, p1, p2, p3); }
static BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Player player, int* p1, int* p2) { return invoke<BOOL>(0x53A5BC0515A038AB, player, p1, p2); }
static void START_END_USER_BENCHMARK() { invoke<Void>(0x666ACF938032B583); }
static void STOP_END_USER_BENCHMARK() { invoke<Void>(0x11E6F86BB2700BFB); }
static void RESET_END_USER_BENCHMARK() { invoke<Void>(0x35E6F04FC81C5EA2); }
static void SAVE_END_USER_BENCHMARK() { invoke<Void>(0x2070D32BEB6A3825); }
static BOOL UI_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xB0DAD631C6A2A5EB); }
static BOOL LANDING_SCREEN_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0x0F3098F5B044D6CE); }
static BOOL IS_COMMANDLINE_END_USER_BENCHMARK() { return invoke<BOOL>(0x3BFC5030EF1E6147); }
static int GET_BENCHMARK_ITERATIONS() { return invoke<int>(0x588D1FA610887CFD); }
static int GET_BENCHMARK_PASS() { return invoke<int>(0x7007C113A8466ADE); }
static void RESTART_GAME() { invoke<Void>(0xF86F13F66FC06EDF); }
static void QUIT_GAME() { invoke<Void>(0x1AB062C44F06F033); }
static BOOL HAS_ASYNC_INSTALL_FINISHED() { return invoke<BOOL>(0xD7F2FC1281F868FD); }
static void CLEANUP_ASYNC_INSTALL() { invoke<Void>(0x129E6CC3506106AC); }
static BOOL PLM_IS_IN_CONSTRAINED_MODE() { return invoke<BOOL>(0x5318F44DB7A13F50); }
static int PLM_GET_CONSTRAINED_DURATION_MS() { return invoke<int>(0x4DDCC681612459A6); }
static void SET_PLAYER_IS_IN_ANIMAL_FORM(BOOL toggle) { invoke<Void>(0xA818A2A38A2A3D6D, toggle); }
static BOOL GET_IS_PLAYER_IN_ANIMAL_FORM() { return invoke<BOOL>(0x7B42AC66804829CF); }
static void SET_PLAYER_IS_REPEATING_A_MISSION(BOOL toggle) { invoke<Void>(0xA53470336C143CAE, toggle); }
static void DISABLE_SCREEN_DIMMING_THIS_FRAME() { invoke<Void>(0x71673481F07D6434); }
static float GET_CITY_DENSITY() { return invoke<float>(0xAB154BFC15F33733); }
static void USE_ACTIVE_CAMERA_FOR_TIMESLICING_CENTRE() { invoke<Void>(0xC4A706CAFECA1953); }
static void SET_CONTENT_ID_INDEX(Hash contentId, int index) { invoke<Void>(0xF0F077286626CEBB, contentId, index); }
static int GET_CONTENT_ID_INDEX(Hash contentId) { return invoke<int>(0xEAA437DE2A801E8A, contentId); }
static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0x531FF8BCC6FFD9E3, phoneType); }
static void DESTROY_MOBILE_PHONE() { invoke<Void>(0x5F2E2CEDE90F627E); }
static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0xBA290C9390813C9F, scale); }
static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xA0382000AA987093, rotX, rotY, rotZ, p3); }
static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) { invoke<Void>(0x3CA646A848A5F334, rotation, p1); }
static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0x6B7EA0158D00C600, posX, posY, posZ); }
static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0x78C4EBB0251847E2, position); }
static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xFC75D88023832ED9, toggle); }
static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xE2EDC80BDB9A514F); }
static void SET_MOBILE_PHONE_DOF_STATE(BOOL toggle) { invoke<Void>(0x453DA8CFCDA69D26, toggle); }
static void CELL_SET_INPUT(int direction) { invoke<Void>(0xBF3F90E670404C44, direction); }
static void CELL_HORIZONTAL_MODE_TOGGLE(BOOL toggle) { invoke<Void>(0xF3D5C578ED6C7528, toggle); }
static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0xFF7028E54EB0EA84, p0, p1); }
static void CELL_CAM_ACTIVATE_SELFIE_MODE(BOOL toggle) { invoke<Void>(0x9764C9C63439A2D9, toggle); }
static void CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(BOOL toggle) { invoke<Void>(0x20B0BCFBA94C4732, toggle); }
static void CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(float p0) { invoke<Void>(0xD974CD3A050559FE, p0); }
static void CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(float horizontalPan) { invoke<Void>(0xCF33DB366A4071FB, horizontalPan); }
static void CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(float vertPan) { invoke<Void>(0x289AEE012C9C5F5D, vertPan); }
static void CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(float roll) { invoke<Void>(0x263FA094C828FD3E, roll); }
static void CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(float distanceScaling) { invoke<Void>(0x6DE386DA26D363D5, distanceScaling); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(float yaw) { invoke<Void>(0x48BDE4C1BEB65AD4, yaw); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(float roll) { invoke<Void>(0xDEC275C3811D6AD8, roll); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(float pitch) { invoke<Void>(0xFA6A3ED1D3AA4BD4, pitch); }
static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xA637EDD71DA667DB, entity); }
static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0x90D1A8814E85B166, renderId); }
static void NETWORK_INITIALIZE_CASH(int wallet, int bank) { invoke<Void>(0x68E9DB185164504F, wallet, bank); }
static void NETWORK_DELETE_CHARACTER(int characterSlot, BOOL p1, BOOL p2) { invoke<Void>(0x2147F6D06CE70F1B, characterSlot, p1, p2); }
static void NETWORK_MANUAL_DELETE_CHARACTER(int characterSlot) { invoke<Void>(0x017137CFD42927BA, characterSlot); }
static BOOL NETWORK_GET_PLAYER_IS_HIGH_EARNER() { return invoke<BOOL>(0xFEC8CAEC2F9A60B5); }
static void NETWORK_CLEAR_CHARACTER_WALLET(int characterSlot) { invoke<Void>(0x8DAD1FB87B248966, characterSlot); }
static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Any* gamerHandle) { invoke<Void>(0x463EA8B3DD0A6567, amount, gamerHandle); }
static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, Any* gamerHandle) { invoke<Void>(0x648740220EDDB123, value, gamerHandle); }
static BOOL NETWORK_CAN_SHARE_JOB_CASH() { return invoke<BOOL>(0x411B5B7270967776); }
static void NETWORK_REFUND_CASH(int index, const char* context, const char* reason, BOOL p3) { invoke<Void>(0x9CBD6E7B088910A1, index, context, reason, p3); }
static void NETWORK_DEDUCT_CASH(int amount, const char* p1, const char* p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x565823C8D4F7B64D, amount, p1, p2, p3, p4, p5); }
static BOOL NETWORK_MONEY_CAN_BET(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0x098F030F49971616, amount, p1, p2); }
static BOOL NETWORK_CAN_BET(int amount) { return invoke<BOOL>(0xB0490531FD3DC629, amount); }
static BOOL NETWORK_CASINO_CAN_BET(Hash hash) { return invoke<BOOL>(0xA737C76A9908948A, hash); }
static BOOL NETWORK_CASINO_CAN_BET_PVC() { return invoke<BOOL>(0xC585DDBDB453BF48); }
static BOOL NETWORK_CASINO_CAN_BET_AMOUNT(Any p0) { return invoke<BOOL>(0xA27607CE04D875E6, p0); }
static BOOL NETWORK_CASINO_CAN_BUY_CHIPS_PVC() { return invoke<BOOL>(0xDA91B00799F1223C); }
static BOOL NETWORK_CASINO_BUY_CHIPS(int p0, int p1) { return invoke<BOOL>(0x265D164F770DA9AB, p0, p1); }
static BOOL NETWORK_CASINO_SELL_CHIPS(int p0, int p1) { return invoke<BOOL>(0x273A6B01207A9FE5, p0, p1); }
static void NETWORK_DEFER_CASH_TRANSACTIONS_UNTIL_SHOP_SAVE() { invoke<Void>(0xFC6FC18CC3214743); }
static BOOL CAN_PAY_AMOUNT_TO_BOSS(int p0, int p1, int amount, int* p3) { return invoke<BOOL>(0x6B3C9FC090DA905D, p0, p1, amount, p3); }
static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0x1D8AF8B06B2F7D3A, amount); }
static void NETWORK_EARN_FROM_CASHING_OUT(int amount) { invoke<Void>(0xD96CCBEFF9394523, amount); }
static void NETWORK_EARN_FROM_GANGATTACK_PICKUP(int amount) { invoke<Void>(0xEAC14C370D2B9D5C, amount); }
static void NETWORK_EARN_ASSASSINATE_TARGET_KILLED(int amount) { invoke<Void>(0xEEE7837FC8CEDEDF, amount); }
static void NETWORK_EARN_FROM_ROB_ARMORED_CARS(int amount) { invoke<Void>(0xAA3D72C5CCFC8EF3, amount); }
static void NETWORK_EARN_FROM_CRATE_DROP(int amount) { invoke<Void>(0xDB31E3DCD4EC4157, amount); }
static void NETWORK_EARN_FROM_BETTING(int amount, const char* p1) { invoke<Void>(0xEEF9D0725B6BE1E9, amount, p1); }
static void NETWORK_EARN_FROM_JOB(int amount, const char* p1) { invoke<Void>(0x429D9B81D13F3456, amount, p1); }
static void NETWORK_EARN_FROM_JOBX2(int amount, const char* p1) { invoke<Void>(0x1B850AB8481A78C9, amount, p1); }
static void NETWORK_EARN_FROM_PREMIUM_JOB(int amount, const char* p1) { invoke<Void>(0xCFDC32D2EF467A52, amount, p1); }
static void NETWORK_EARN_FROM_BEND_JOB(int amount, const char* heistHash) { invoke<Void>(0x31F0EC70888E1490, amount, heistHash); }
static void NETWORK_EARN_FROM_CHALLENGE_WIN(Any p0, Any* p1, BOOL p2) { invoke<Void>(0x736F26192289EEBB, p0, p1, p2); }
static void NETWORK_EARN_FROM_BOUNTY(int amount, Any* gamerHandle, Any* p2, Any p3) { invoke<Void>(0xFED8EC9FDD58021A, amount, gamerHandle, p2, p3); }
static void NETWORK_EARN_FROM_IMPORT_EXPORT(int amount, Hash modelHash) { invoke<Void>(0x4D10D49AEE7C9AEA, amount, modelHash); }
static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xC972841F26BA2800, amount); }
static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0x817A1EC3448E9FF1, amount, propertyName); }
static void NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) { invoke<Void>(0x830CE9F43780AC92, p0, p1); }
static void NETWORK_EARN_FROM_NOT_BADSPORT(int amount) { invoke<Void>(0x190378368BE7EFF3, amount); }
static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<Void>(0x1445487E16675A4E, amount); }
static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x0C547D1E965980C5, p0, p1, p2, p3, p4, p5, p6, p7); }
static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xD374BF034B7E27F3, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void NETWORK_EARN_FROM_DAILY_OBJECTIVES(int amount, const char* type, int characterSlot) { invoke<Void>(0xE36D9E1EDE0E76B4, amount, type, characterSlot); }
static void NETWORK_EARN_FROM_AMBIENT_JOB(int p0, const char* p1, Any* p2) { invoke<Void>(0x237E99388DCA3CEF, p0, p1, p2); }
static void NETWORK_EARN_FROM_JOB_BONUS(Any p0, Any* p1, Any* p2) { invoke<Void>(0xFD5431F2DAC6AD75, p0, p1, p2); }
static void NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Any p0, Any p1, Any p2) { invoke<Void>(0x30EE7ED666906E6A, p0, p1, p2); }
static void NETWORK_EARN_HEIST_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0x2AF3C8E8D2120D10, p0, p1, p2); }
static void NETWORK_EARN_FIRST_TIME_BONUS(Any p0, Any p1, Any p2) { invoke<Void>(0x4247915DE1F30269, p0, p1, p2); }
static void NETWORK_EARN_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0x22A4F417AF7EDBB3, p0, p1, p2); }
static void NETWORK_EARN_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0x1C3E529B167B0152, p0, p1, p2); }
static void NETWORK_EARN_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB7FF64F7F3C11C73, p0, p1, p2, p3); }
static void NETWORK_EARN_FROM_WAREHOUSE(int amount, int id) { invoke<Void>(0xBA39DBB52E8B4335, amount, id); }
static void NETWORK_EARN_FROM_CONTRABAND(int amount, Any p1) { invoke<Void>(0x183CC5B7D51F8C27, amount, p1); }
static void NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Any p0) { invoke<Void>(0x95508E1DCDC31638, p0); }
static void NETWORK_EARN_FROM_SMUGGLER_WORK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xB7CA0141AAE24858, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_FROM_HANGAR_TRADE(Any p0, Any p1) { invoke<Void>(0x543B2C1410A312F3, p0, p1); }
static void NETWORK_EARN_PURCHASE_CLUB_HOUSE(Any p0, Any p1) { invoke<Void>(0x94F7718638A3525D, p0, p1); }
static void NETWORK_EARN_FROM_BUSINESS_PRODUCT(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xF8E5B0C984357B72, amount, p1, p2, p3); }
static void NETWORK_EARN_FROM_VEHICLE_EXPORT(int amount, Any p1, Any p2) { invoke<Void>(0x8692D3326B328B82, amount, p1, p2); }
static void NETWORK_EARN_SMUGGLER_AGENCY(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xE1037BCF8C2FC81D, amount, p1, p2, p3); }
static void NETWORK_EARN_BOUNTY_HUNTER_REWARD(Any p0) { invoke<Void>(0xB1C4AF1EA46263A1, p0); }
static void NETWORK_EARN_FROM_BUSINESS_BATTLE(Any p0) { invoke<Void>(0x0FB341836D41663F, p0); }
static void NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Any p0, int p1) { invoke<Void>(0xE57ED256E47D44C1, p0, p1); }
static void NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Any p0) { invoke<Void>(0x46A6A8998E3D8C20, p0); }
static void NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Any p0, Any p1, Any p2) { invoke<Void>(0xADDD87AAD0952829, p0, p1, p2); }
static void NETWORK_EARN_FROM_FMBB_BOSS_WORK(Any p0) { invoke<Void>(0x9C94CA5701190287, p0); }
static void NETWORK_EARN_FMBB_WAGE_BONUS(Any p0) { invoke<Void>(0x69071D15F1FDD00C, p0); }
static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x0AF5E4A6C74DC312, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_CAN_SPEND_MONEY2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5, Any p6) { return invoke<BOOL>(0xF299749D63CC7167, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_BUY_ITEM(int amount, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0x231BA68A82FF0316, amount, item, p2, p3, p4, item_name, p6, p7, p8, p9); }
static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2, Any p3, Any p4) { invoke<Void>(0x46B2ECD9DD5C325A, amount, p1, p2, p3, p4); }
static void NETWORK_PAY_EMPLOYEE_WAGE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE2A7BB72F7220C7E, p0, p1, p2); }
static void NETWORK_PAY_MATCH_ENTRY_FEE(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0x1BF8BBFBF0066C79, amount, matchId, p2, p3); }
static void NETWORK_SPENT_BETTING(int amount, int p1, const char* matchId, BOOL p3, BOOL p4) { invoke<Void>(0xEFA7F7BEF6727E05, amount, p1, matchId, p3, p4); }
static void NETWORK_SPENT_WAGER(Any p0, Any p1, int amount) { invoke<Void>(0x6409DA98EAB29EF9, p0, p1, amount); }
static void NETWORK_SPENT_IN_STRIPCLUB(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0x5B01531ADF19BFE7, p0, p1, p2, p3); }
static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0x872D579FE9A001C0, cost, p1, p2); }
static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE712829A13AA007C, cost, p1, p2, p3); }
static void NETWORK_BUY_BACKUP_GANG(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0x71D67D692ED4A77A, p0, p1, p2, p3); }
static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x2E2FE70D24958511, cost, p1, p2, p3); }
static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xEE1CE55E7DF07D50, p0, p1, p2, p3); }
static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0x2E361871F6DBB0BB, amount, victim, p2, p3, p4); }
static void NETWORK_BUY_PROPERTY(int cost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0xA0BB8B5F3BF0B873, cost, propertyName, p2, p3); }
static void NETWORK_BUY_SMOKES(int p0, BOOL p1, BOOL p2) { invoke<Void>(0x3394F4E239C12E5B, p0, p1, p2); }
static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x5281982126ED6EB1, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x0B191D6DA6D08B82, p0, p1, p2, p3); }
static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x510FA24010D2C6E2, p0, p1, p2, p3); }
static void NETWORK_SPENT_CASH_DROP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x93D264A3F6B3EC83, amount, p1, p2); }
static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x028DAC40D73AD61C, p0, p1, p2, p3); }
static void NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x47E7DCF167AAD291, amount, p1, p2, p3); }
static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x3805A7764BBF4986, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xA8C662E16DC4030E, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x390F7605EEFF27DD, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x38B36DE4A0DD8551, p0, p1, p2, p3); }
static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xB18702619A0C0E6E, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x2896F1C9B1221336, p0, p1, p2, p3); }
static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE7F56AD8A71AC4E6, p0, p1, p2); }
static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x770EB7A756AEBF26, p0, p1, p2); }
static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x3DFB797B5A3B9923, p0, p1, p2, p3); }
static void NETWORK_SPENT_BANK_INTEREST(int p0, BOOL p1, BOOL p2) { invoke<Void>(0x91F514ABD264DE39, p0, p1, p2); }
static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x8D54F66F66BE0AA4, p0, p1, p2); }
static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x5ED8FA0BD19D1554, p0, p1, p2); }
static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, Any* gamerHandle, BOOL notBankrupt, BOOL hasTheMoney) { invoke<Void>(0xC093604219A86052, amount, vehicleModel, gamerHandle, notBankrupt, hasTheMoney); }
static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0x3C433641FBE9B092, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x2A073933B945C84D, p0, p1, p2); }
static void NETWORK_SPENT_FROM_ROCKSTAR(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xE3BE7893C3C3EC1D, p0, p1, p2); }
static int NETWORK_SPEND_EARNED_FROM_BANK_AND_WALLETS(int amount) { return invoke<int>(0xD97AF335F8ACDB0F, amount); }
static const char* PROCESS_CASH_GIFT(int* p0, int* p1, const char* p2) { return invoke<const char*>(0x75C19185BEAE4AA9, p0, p1, p2); }
static void NETWORK_SPENT_MOVE_SUBMARINE(Any p0, Any p1, Any p2) { invoke<Void>(0xFCCEE4DF574659D5, p0, p1, p2); }
static void NETWORK_SPENT_PLAYER_HEALTHCARE(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0x034CF401503972D8, p0, p1, p2, p3); }
static void NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x5457AC60E3138BFF, p0, p1, p2, p3); }
static void NETWORK_SPENT_CARGO_SOURCING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x17723C8F38B28C26, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x473E72253CC49698, p0, p1, p2, p3); }
static void NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xBB8D17D4C5954DAD, p0, p1, p2, p3); }
static void NETWORK_BUY_FAIRGROUND_RIDE(int amount, Any p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xD8F9465B2186C59F, amount, p1, p2, p3, p4); }
static BOOL NETWORK_ECONOMY_HAS_FIXED_CRAZY_NUMBERS() { return invoke<BOOL>(0xF0E83DAB719BAF47); }
static void NETWORK_SPENT_JOB_SKIP(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xE6BD97EF8B376DAC, amount, matchId, p2, p3); }
static BOOL NETWORK_SPENT_BOSS_GOON(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xEDD28D3FAFE98806, amount, p1, p2); }
static void NETWORK_SPEND_GOON(int p0, int p1, int amount) { invoke<Void>(0x7E8D3E1CB76D4269, p0, p1, amount); }
static void NETWORK_SPEND_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0x773A6B5BEC33A424, p0, p1, p2); }
static void NETWORK_SPENT_MOVE_YACHT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x5ACC4ABDE69D38D4, amount, p1, p2); }
static void NETWORK_SPENT_RENAME_ORGANIZATION(Any p0, Any p1, Any p2) { invoke<Void>(0x1DC31E2CC59D9BB2, p0, p1, p2); }
static void NETWORK_BUY_CONTRABAND_MISSION(int p0, int p1, Hash p2, BOOL p3, BOOL p4) { invoke<Void>(0xCD042AEDCC67E05D, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_PA_SERVICE_HELI(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4F12D7F9E2049590, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEC25575B0C446336, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_SNACK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4A920AB6D0B69785, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_DANCER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xEC8A7DFF32FD54B9, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_IMPOUND(Any p0, Any p1, Any p2) { invoke<Void>(0x6C12EC99A95B5DAB, p0, p1, p2); }
static void NETWORK_SPENT_PA_HELI_PICKUP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD4C7A8B7798F8D76, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE56907D742FBB98E, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF703ED783A4823FC, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x81817FDF3227FB55, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD387AD5F69E5AED7, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_IMPEXP_WAREHOUSE_PROPERTY(int amount, Any* data, BOOL p2, BOOL p3) { invoke<Void>(0x47CF1A8941FAF477, amount, data, p2, p3); }
static void NETWORK_SPENT_UPGRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC190A01717631220, p0, p1, p2, p3); }
static void NETWORK_SPENT_TRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x997FC0391BB433D7, p0, p1, p2, p3); }
static void NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xAC68FC3E6CBCE6FC, p0, p1, p2, p3); }
static void NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4EF4490FC3B90AD2, p0, p1, p2, p3); }
static void NETWORK_SPENT_JUKEBOX(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4EFA5A2F877A4580, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x487238BD4D444146, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB69E368585E687CB, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7C551A8AD8F364D6, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x96861731FED0B20F, p0, p1, p2, p3); }
static void NETWORK_SPENT_TRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6B149894691C7CC8, p0, p1, p2, p3); }
static void NETWORK_SPENT_MC_ABILITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xD0D235D716CBBF3A, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2AED47655EBD41F9, p0, p1, p2, p3); }
static void NETWORK_SPENT_CHANGE_APPEARANCE(Any p0, Any p1, Any p2) { invoke<Void>(0xE9B35F4B3FA183CC, p0, p1, p2); }
static void NETWORK_SPENT_VEHICLE_EXPORT_MODS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x234A1A7A21B287F0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void NETWORK_SPENT_PURCHASE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6690522491F2B7EF, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x835DCD1C2346F3E5, p0, p1, p2, p3); }
static void NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Any p0, Any p1, Any p2) { invoke<Void>(0x4748E1ADA6271630, p0, p1, p2); }
static void NETWORK_SPENT_PURCHASE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x26FCA81008B87FAF, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x74A9433D624A129B, p0, p1, p2, p3); }
static void NETWORK_SPENT_HANGAR_UTILITY_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xE9BEC9AEEBD10172, amount, p1, p2); }
static void NETWORK_SPENT_HANGAR_STAFF_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x7AB1CE55FB991D7E, amount, p1, p2); }
static void NETWORK_SPENT_BUY_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA813D964741A08C1, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2119E194E1B27356, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x0D31BD6FE1E51499, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPRADE_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x239899C7038B89B2, p0, p1, p2, p3); }
static void NETWORK_EARN_FROM_SELL_BUNKER(int amount, Hash bunkerHash) { invoke<Void>(0x9B8D5650AE5D3E37, amount, bunkerHash); }
static void NETWORK_SPENT_BALLISTIC_EQUIPMENT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x5D9F9E16048EFF63, amount, p1, p2); }
static void NETWORK_EARN_RDR_BONUS(int amount, Any p1) { invoke<Void>(0x090A6F64158BFDC6, amount, p1); }
static void NETWORK_EARN_WAGE_PAYMENT(int amount, Any p1) { invoke<Void>(0x19B6E06EEAE42FD9, amount, p1); }
static void NETWORK_EARN_WAGE_PAYMENT_BONUS(int amount) { invoke<Void>(0xF031AD8A21A8C1A0, amount); }
static void NETWORK_SPENT_BUY_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6AAECCF5BAF1E393, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x514D80B09AEE6358, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x7544F7A9D8A06A08, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC19533F1B83A7895, p0, p1, p2, p3); }
static void NETWORK_SPENT_EMPLOY_ASSASSINS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xD22ED94E238E6212, p0, p1, p2, p3); }
static void NETWORK_SPEND_GANGOPS_CANNON(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x147D45A959CA40D8, p0, p1, p2, p3); }
static void NETWORK_SPEND_GANGOPS_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDE737A0063E49970, p0, p1, p2, p3); }
static void NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x47051CE8E3FBF361, p0, p1, p2, p3); }
static void NETWORK_EARN_SELL_BASE(int amount, Hash baseNameHash) { invoke<Void>(0xFD08D543F04B5AD5, amount, baseNameHash); }
static void NETWORK_EARN_TARGET_REFUND(int amount, int p1) { invoke<Void>(0x1B7FCA28E35CDBB0, amount, p1); }
static void NETWORK_EARN_GANGOPS_WAGES(int amount, int p1) { invoke<Void>(0xC7791AFBC3D6AAD5, amount, p1); }
static void NETWORK_EARN_GANGOPS_WAGES_BONUS(int amount, int p1) { invoke<Void>(0xCFCD749D4E341FD7, amount, p1); }
static void NETWORK_EARN_DAR_CHALLENGE(int amount, Any p1) { invoke<Void>(0x76B1F7266AE121AC, amount, p1); }
static void NETWORK_EARN_DOOMSDAY_FINALE_BONUS(int amount, Hash vehicleHash) { invoke<Void>(0x80D494C63CA32BD2, amount, vehicleHash); }
static void NETWORK_EARN_GANGOPS_AWARD(int amount, const char* p1, Any p2) { invoke<Void>(0xA32B695D90B1EA0E, amount, p1, p2); }
static void NETWORK_EARN_GANGOPS_ELITE(int amount, const char* p1, int actIndex) { invoke<Void>(0x90C7361D0621A3B6, amount, p1, actIndex); }
static void NETWORK_SERVICE_EARN_GANGOPS_RIVAL_DELIVERY(int earnedMoney) { invoke<Void>(0xC1248D942D71375C, earnedMoney); }
static void NETWORK_SPEND_GANGOPS_START_STRAND(int type, int amount, BOOL p2, BOOL p3) { invoke<Void>(0xE01ABEB9E2CF42B9, type, amount, p2, p3); }
static void NETWORK_SPEND_GANGOPS_TRIP_SKIP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x8091E3CC1E619B39, amount, p1, p2); }
static void NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(int amount) { invoke<Void>(0x1320A36B594CBEC2, amount); }
static void NETWORK_EARN_GANGOPS_SETUP(int amount, const char* p1) { invoke<Void>(0xE31A6007C811856C, amount, p1); }
static void NETWORK_EARN_GANGOPS_FINALE(int amount, const char* p1) { invoke<Void>(0x177CA8EC3BEBA1EB, amount, p1); }
static void NETWORK_SPEND_GANGOPS_REPAIR_COST(Any p0, Any p1, Any p2) { invoke<Void>(0x679A4C47D3A0A4B2, p0, p1, p2); }
static void NETWORK_EARN_NIGHTCLUB(Any p0) { invoke<Void>(0x1CB79849195B4445, p0); }
static void NETWORK_EARN_NIGHTCLUB_DANCING(Any p0) { invoke<Void>(0x6720272CB53DBA48, p0); }
static void NETWORK_EARN_BB_EVENT_BONUS(int amount) { invoke<Void>(0x5CD8E37BA3CBA971, amount); }
static void NETWORK_SPENT_PURCHASE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCCC74177BFE27AC9, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA93B2B393E4AAA20, p0, p1, p2, p3); }
static void NETWORK_EARN_HACKER_TRUCK(Any p0, int amount, Any p2, Any p3) { invoke<Void>(0x771C72551EE0BD14, p0, amount, p2, p3); }
static void NETWORK_SPENT_PURCHASE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF7449BB82D5A6055, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4CA2FD73CB528330, p0, p1, p2, p3); }
static void NETWORK_EARN_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x80B2A7374EC83539, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x635D6A4C16C8B427, p0, p1, p2, p3); }
static void NETWORK_SPENT_RDR_HATCHET_BONUS(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x4D7CE2298CFF7D42, amount, p1, p2); }
static void NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(Player player, int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x75BD55E6AB869CAF, player, amount, p1, p2, p3); }
static void NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x8F5EE908F5AE9BC3, amount, p1, p2, p3); }
static void NETWORK_SPEND_BOUNTY_HUNTER_MISSION(int amount, BOOL p1, BOOL p2) { invoke<Void>(0x86156182084D56A1, amount, p1, p2); }
static void NETWORK_SPENT_REHIRE_DJ(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xC72D28E5EF1107CF, amount, p1, p2, p3); }
static void NETWORK_SPENT_ARENA_JOIN_SPECTATOR(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0x6AE6C5324BD6DEBD, amount, p1, p2, p3); }
static void NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(int amount, Any p1) { invoke<Void>(0x2F7D409DB8FCD57F, amount, p1); }
static void NETWORK_EARN_ARENA_CAREER_PROGRESSION(int amount, Any p1) { invoke<Void>(0xC7D8414269660FC0, amount, p1); }
static void NETWORK_SPEND_MAKE_IT_RAIN(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF5BEEB8BA669C558, amount, p1, p2); }
static void NETWORK_SPEND_BUY_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0x0DAFEB0418AF8DAF, amount, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0x56EA8C6ED5821F2B, amount, p1, p2, p3); }
static void NETWORK_SPEND_ARENA_SPECTATOR_BOX(int amount, int type, BOOL p2, BOOL p3) { invoke<Void>(0x5F6D2B7BA40483E7, amount, type, p2, p3); }
static void NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(int amount, Any p1, BOOL p2) { invoke<Void>(0x929557FEA326BBCC, amount, p1, p2); }
static void NETWORK_EARN_SPIN_THE_WHEEL_CASH(int amount) { invoke<Void>(0x6B07E1D996A69ACF, amount); }
static void NETWORK_SPEND_ARENA_PREMIUM(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xC57A6CADCEFE5089, amount, p1, p2); }
static void NETWORK_EARN_ARENA_WAR(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0x9025AEE080F84A1B, amount, p1, p2, p3); }
static void NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(int amount) { invoke<Void>(0xC46CA38367F16578, amount); }
static void NETWORK_EARN_ARENA_WAR_EVENT_CARGO(int amount) { invoke<Void>(0x360C31F0E45DAA5F, amount); }
static void NETWORK_EARN_RC_TIME_TRIAL(int amount) { invoke<Void>(0x110068A07EDA9FBC, amount); }
static void NETWORK_EARN_DAILY_OBJECTIVE_EVENT(int amount) { invoke<Void>(0x4FF0B515E4C83097, amount); }
static void NETWORK_SPEND_CASINO_MEMBERSHIP(int amount, BOOL p1, BOOL p2, int p3) { invoke<Void>(0x3F00B9CADEE8EB3D, amount, p1, p2, p3); }
static void NETWORK_SPEND_BUY_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xD85A55A2B60E86C9, amount, p1, p2, data); }
static void NETWORK_SPEND_UPGRADE_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xC28FC39C693BF50B, amount, p1, p2, data); }
static void NETWORK_SPEND_CASINO_GENERIC(int amount, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE4A2A5E5455654BF, amount, p1, p2, p3, p4); }
static void NETWORK_EARN_CASINO_TIME_TRIAL_WIN(int amount) { invoke<Void>(0x416DEBEC2AF19312, amount); }
static void NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(int amount) { invoke<Void>(0xDE5641418FF92887, amount); }
static void NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(int amount) { invoke<Void>(0x22F6103D7DF1811B, amount); }
static void NETWORK_EARN_SELL_PRIZE_VEHICLE(int amount, Any p1, Any p2) { invoke<Void>(0xD568567F2142F0D6, amount, p1, p2); }
static void NETWORK_EARN_CASINO_MISSION_REWARD(int amount) { invoke<Void>(0xE073EC11C22D5CB5, amount); }
static void NETWORK_EARN_CASINO_STORY_MISSION_REWARD(int amount) { invoke<Void>(0xCC4DAB4ED0FA0069, amount); }
static void NETWORK_EARN_CASINO_MISSION_PARTICIPATION(int amount) { invoke<Void>(0xFF9E4D74FE360E69, amount); }
static void NETWORK_EARN_CASINO_AWARD(int amount, Hash hash) { invoke<Void>(0x6F19DA0555AFD918, amount, hash); }
static void NETWORK_SPEND_BUY_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x23832C1A8C99748C, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x58F5E56CDD996880, p0, p1, p2, p3); }
static void NETWORK_SPEND_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x217CC1BF55D59C44, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void NETWORK_SPEND_ARCADE_MGMT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x65093A8F4C502F7F, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_PLAY_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE05D60BF50DB8652, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4BB8B039E0467D33, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x814E3AEA72604174, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_EARN_UPGRADE_ARCADE(Any p0, Any p1, Any p2) { invoke<Void>(0xAA8EDC61C1A66D69, p0, p1, p2); }
static void NETWORK_EARN_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x397B2F6C8F2E3FB2, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_COLLECTABLES(Any p0, Any p1, Any p2) { invoke<Void>(0x02E90F469A6AC992, p0, p1, p2); }
static void NETWORK_EARN_CHALLENGE(int amount, Any p1, Any p2) { invoke<Void>(0xA5C6A0D18EC0D946, amount, p1, p2); }
static void NETWORK_EARN_CASINO_HEIST_AWARDS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9ACC96FE8469BF29, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_COLLECTABLE_ITEM(int amount, Any p1) { invoke<Void>(0x2B8A3862BDE6737C, amount, p1); }
static void NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(int amount, Any p1) { invoke<Void>(0xD8D4BFD9BC71E9CC, amount, p1); }
static void NETWORK_EARN_YATCH_MISSION(int amount, Any p1) { invoke<Void>(0xA6CF99057D1A4B2F, amount, p1); }
static void NETWORK_EARN_DISPATCH_CALL(int amount, Any p1) { invoke<Void>(0x78B315C577CF6D01, amount, p1); }
static void NETWORK_SPEND_BEACH_PARTY(Any p0) { invoke<Void>(0x1F6D32912DBFCEA7, p0); }
static void NETWORK_SPEND_SUBMARINE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x0C919F00C1EB6628, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SPEND_CASINO_CLUB(int amount1, Any p1, BOOL p2, Any p3, int p4, int p5, int p6, int amount2, Any p8) { invoke<Void>(0x7295CAE6372986E4, amount1, p1, p2, p3, p4, p5, p6, amount2, p8); }
static void NETWORK_SPEND_BUY_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4BEE133765D6015F, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xE285C20435466381, p0, p1, p2, p3); }
static void NETWORK_SPEND_ISLAND_HEIST(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xDCA98A271D0CC516, p0, p1, p2, p3); }
static void NETWORK_EARN_ISLAND_HEIST(int amount1, Any p1, Any p2, Any p3, int amount2, int p5) { invoke<Void>(0xB413CA811F506DCF, amount1, p1, p2, p3, amount2, p5); }
static void NETWORK_EARN_BEACH_PARTY_LOST_FOUND(Any p0, Any p1, Any p2) { invoke<Void>(0x45D4863471811592, p0, p1, p2); }
static void NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Any p0, Any p1) { invoke<Void>(0x5836433A62D1A6C4, p0, p1); }
static void NETWORK_SPEND_CAR_CLUB_MEMBERSHIP(int amount1, Any p1, Any p2, int amount2, Any p4) { invoke<Void>(0x3D20F4EE16939AC2, amount1, p1, p2, amount2, p4); }
static void NETWORK_SPEND_CAR_CLUB_BAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF3C2DA93952477BC, p0, p1, p2, p3); }
static void NETWORK_SPEND_AUTOSHOP_MODIFY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xC514E0BC5A9C1A6A, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_CAR_CLUB_TAKEOVER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x883A1BCBA56D5FBD, p0, p1, p2, p3); }
static void NETWORK_SPEND_BUY_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC6B8A83CB698802E, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3FA880262FF79243, p0, p1, p2, p3); }
static void NETWORK_EARN_AUTOSHOP_BUSINESS(Any p0, Any p1, Any p2) { invoke<Void>(0x84A07CA553A4F9C3, p0, p1, p2); }
static void NETWORK_EARN_AUTOSHOP_INCOME(Any p0, int p1) { invoke<Void>(0xE16238C3C62697D0, p0, p1); }
static void NETWORK_EARN_CARCLUB_MEMBERSHIP(Any p0) { invoke<Void>(0x7A3449D1CF40578C, p0); }
static void NETWORK_EARN_DAILY_VEHICLE(Any p0, Any p1) { invoke<Void>(0xD378B386217DBB5E, p0, p1); }
static void NETWORK_EARN_DAILY_VEHICLE_BONUS(Any p0) { invoke<Void>(0x0C9F128BF7D93196, p0); }
static void NETWORK_EARN_TUNER_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0x16FD73B3F4345670, p0, p1, p2); }
static void NETWORK_EARN_TUNER_ROBBERY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xAF64B7223D9E0FEB, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_UPGRADE_AUTOSHOP(Any p0, Any p1) { invoke<Void>(0x9FF64089E5DAC313, p0, p1); }
static void NETWORK_SPEND_INTERACTION_MENU_ABILITY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC8EAF995510A953C, p0, p1, p2, p3); }
static void NETWORK_SPEND_SET_COMMON_FIELDS(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xD10B64D006F40B14, p0, p1, p2, p3); }
static void NETWORK_SPEND_SET_DISCOUNT(BOOL p0) { invoke<Void>(0xABC3E4AF7CA40513, p0); }
static void NETWORK_SPEND_BUY_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x901A291369C59088, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x5EFF344D2CEF49DE, p0, p1, p2, p3); }
static void NETWORK_SPEND_AGENCY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE521F8F950FE34C3, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_HIDDEN(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x29F36537BAC3D711, p0, p1, p2, p3); }
static void NETWORK_SPEND_SOURCE_BIKE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA19C2545709CF8B5, p0, p1, p2, p3); }
static void NETWORK_SPEND_COMP_SUV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x566ADA7FE6D2FFC4, p0, p1, p2, p3); }
static void NETWORK_SPEND_SUV_FST_TRVL(int p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x59DB49C02815273E, p0, p1, p2, p3); }
static void NETWORK_SPEND_SUPPLY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2F5233FB30DF57D5, p0, p1, p2, p3); }
static void NETWORK_SPEND_BIKE_SHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x682B3A2CFD8CC244, p0, p1, p2, p3); }
static void NETWORK_SPEND_VEHICLE_REQUESTED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x2ED93149B4CC68C1, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_GUNRUNNING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x92473EA3E0FD6C3C, p0, p1, p2, p3); }
static void NETWORK_EARN_AGENCY_SAFE(Any p0) { invoke<Void>(0x3398D3F6736CF301, p0); }
static void NETWORK_EARN_AWARD_CONTRACT(Any p0, Any p1) { invoke<Void>(0x50EE547EE5B116FA, p0, p1); }
static void NETWORK_EARN_AGENCY_CONTRACT(Any p0, Any p1) { invoke<Void>(0xEBDEC0D7E92D20B0, p0, p1); }
static void NETWORK_EARN_AWARD_PHONE(Any p0, Any p1) { invoke<Void>(0x61D4C8F1146AD04D, p0, p1); }
static void NETWORK_EARN_AGENCY_PHONE(Any p0, Any p1, Any p2) { invoke<Void>(0x87065E48A6ACAF50, p0, p1, p2); }
static void NETWORK_EARN_AWARD_FIXER_MISSION(Any p0, Any p1) { invoke<Void>(0x583714F99BC53894, p0, p1); }
static void NETWORK_EARN_FIXER_PREP(Any p0, Any p1) { invoke<Void>(0x4B9D927C4A4FB9DC, p0, p1); }
static void NETWORK_EARN_FIXER_FINALE(Any p0, Any p1) { invoke<Void>(0x9E645A15DE54B5EE, p0, p1); }
static void NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0x07729F2302AF3353, p0, p1); }
static void NETWORK_EARN_AWARD_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xFC7D9950A581B4F3, p0, p1); }
static void NETWORK_EARN_FIXER_RIVAL_DELIVERY(Any p0, Any p1) { invoke<Void>(0xF4E49895EADECEB2, p0, p1); }
static void NETWORK_EARN_UPGRADE_AGENCY(Any p0, Any p1) { invoke<Void>(0x95F1CA5C2CE2942C, p0, p1); }
static void NETWORK_SPEND_APARTMENT_UTILITIES(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xD00BC7FDBE039771, amount, p1, p2, data); }
static void NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCF0625D5D2A8F298, p0, p1, p2, p3); }
static void NETWORK_EARN_SIGHTSEEING_REWARD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x4D488739F6C82163, p0, p1, p2, p3); }
static void NETWORK_EARN_BIKER_SHOP(Any p0, Any p1) { invoke<Void>(0xFFE3EA612616D334, p0, p1); }
static void NETWORK_EARN_BIKER(Any p0) { invoke<Void>(0xDA1798FB73681E87, p0); }
static void NETWORK_YOHAN_SOURCE_GOODS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1D83165BDA8DF7FC, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x8B7BEFF3C8EF4B47, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xB01E58326A51EBA2, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_SUPPLIES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0x8D6321E6F1CBC69C, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xFF1266444C9426B4, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_EQUIPMENT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x6EF8DB87205D57FF, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_ARMOR(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0x3BE0A37C527AC2C8, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_SCOOP(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0x6948702511126852, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_MINES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xCC69EE39119A150C, p0, p1, p2, p3); }
static void _NETWORK_SPEND_RENAME_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x2416BBA9A9F18EAB, p0, p1, p2, p3); }
static void _NETWORK_SPEND_RENAME_ACID_PRODUCT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x14DF63D0BB614642, p0, p1, p2, p3); }
static void _NETWORK_EARN_AWARD_JUGGALO_MISSION(Any p0, Any p1) { invoke<Void>(0xCFA8FE5301B9E6CE, p0, p1); }
static void _NETWORK_EARN_AWARD_ACID_LAB(Any p0, Any p1) { invoke<Void>(0x2656226DE9A2C644, p0, p1); }
static void _NETWORK_EARN_AWARD_DAILY_STASH(Any p0, Any p1) { invoke<Void>(0x0A4457A33AC118B4, p0, p1); }
static void _NETWORK_EARN_AWARD_DEAD_DROP(Any p0, Any p1) { invoke<Void>(0x39D90796902DFED4, p0, p1); }
static void _NETWORK_EARN_AWARD_RANDOM_EVENT(Any p0, Any p1) { invoke<Void>(0x9657D8B784593A5E, p0, p1); }
static void _NETWORK_EARN_AWARD_TAXI(Any p0, Any p1) { invoke<Void>(0xD755F13556CF7C9D, p0, p1); }
static void _NETWORK_EARN_STREET_DEALER(Any p0, Any p1) { invoke<Void>(0xC026E17CC4E7BED5, p0, p1); }
static void _NETWORK_EARN_SELL_ACID(Any p0, Any p1) { invoke<Void>(0xEC9101A02CD98A8B, p0, p1); }
static void _NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0x8D2A2025E94588A1, p0, p1); }
static void _NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0x733EB09C30E2BC1E, p0, p1); }
static void _NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0x5E3EE3B0D24ED146, p0, p1); }
static void _NETWORK_EARN_JUGGALO_STORY_MISSION(Any p0, Any p1) { invoke<Void>(0xF8BBC07B8BA14ECF, p0, p1); }
static void _NETWORK_EARN_JUGGALO_STORY_MISSION_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xD16E87370ADCE88C, p0, p1); }
static void _NETWORK_EARN_FOOLIGAN_JOB(Any p0, Any p1) { invoke<Void>(0x00A1243621982D87, p0, p1); }
static void _NETWORK_EARN_FOOLIGAN_JOB_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xDD0F567A35809C42, p0, p1); }
static void _NETWORK_EARN_TAXI_JOB(Any p0, Any p1) { invoke<Void>(0x04AA32C25ED6D69D, p0, p1); }
static void _NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Any p0, Any p1) { invoke<Void>(0x5B46189D0DA97DE4, p0, p1); }
static void _NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xE8C7135747EA3054, p0, p1); }
static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0x227D0C27EB51D76C); }
static int NETWORK_GET_VC_WALLET_BALANCE(int characterSlot) { return invoke<int>(0x00BDC89742B13CD2, characterSlot); }
static int NETWORK_GET_VC_BALANCE() { return invoke<int>(0x6A9B427B35077684); }
static int NETWORK_GET_EVC_BALANCE() { return invoke<int>(0xF9A874A9AA3CA007); }
static int NETWORK_GET_PVC_BALANCE() { return invoke<int>(0xF3ABFA84F93690E0); }
static const char* NETWORK_GET_STRING_WALLET_BALANCE(int characterSlot) { return invoke<const char*>(0x815E568EDFA0F84F, characterSlot); }
static const char* NETWORK_GET_STRING_BANK_BALANCE() { return invoke<const char*>(0xCC3DCF2C80164BB7); }
static const char* NETWORK_GET_STRING_BANK_WALLET_BALANCE() { return invoke<const char*>(0xFA33924AB598C47C); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0x2CCC9874DC774FD1, amount, characterSlot); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK(int amount) { return invoke<BOOL>(0x33B9AE76A0E4C46D, amount); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK_AND_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0x818CFAC7819E0460, amount, characterSlot); }
static int NETWORK_GET_PVC_TRANSFER_BALANCE() { return invoke<int>(0xB7D5A701FD23B2B4); }
static BOOL NETWORK_GET_CAN_TRANSFER_CASH(int amount) { return invoke<BOOL>(0xDF1F519EA0B54B7D, amount); }
static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x5B9D8077EF640468, p0, p1, p2, p3); }
static int NETWORK_GET_REMAINING_TRANSFER_BALANCE() { return invoke<int>(0xCAA7ED3DA3EAD53C); }
static int WITHDRAW_VC(int amount) { return invoke<int>(0x8C72AE091EB20602, amount); }
static BOOL DEPOSIT_VC(int amount) { return invoke<BOOL>(0xAC3F47C6E026FB48, amount); }
static BOOL HAS_VC_WITHDRAWAL_COMPLETED(Any p0) { return invoke<BOOL>(0x7BAF87C40BEA974C, p0); }
static BOOL WAS_VC_WITHDRAWAL_SUCCESSFUL(Any p0) { return invoke<BOOL>(0x7E903F2F588C9435, p0); }
static BOOL NET_GAMESERVER_USE_SERVER_TRANSACTIONS() { return invoke<BOOL>(0xC18CB5D7A27A2E00); }
static BOOL NET_GAMESERVER_CATALOG_ITEM_IS_VALID(const char* name) { return invoke<BOOL>(0xABE86AEC64720F91, name); }
static BOOL NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(Hash hash) { return invoke<BOOL>(0x206AC354EB77B7FD, hash); }
static int NET_GAMESERVER_GET_PRICE(Hash itemHash, Hash categoryHash, BOOL p2) { return invoke<int>(0xD2ACF01ED6E6D7C6, itemHash, categoryHash, p2); }
static BOOL NET_GAMESERVER_CATALOG_IS_VALID() { return invoke<BOOL>(0xD79BEF4E08ED2183); }
static BOOL NET_GAMESERVER_IS_CATALOG_CURRENT() { return invoke<BOOL>(0xB879CA89F967F26F); }
static Hash NET_GAMESERVER_GET_CATALOG_CLOUD_CRC() { return invoke<Hash>(0xAEC584629042017A); }
static BOOL NET_GAMESERVER_REFRESH_SERVER_CATALOG() { return invoke<BOOL>(0xE9D0D38A52D47D12); }
static BOOL NET_GAMESERVER_RETRIEVE_CATALOG_REFRESH_STATUS(int* state) { return invoke<BOOL>(0x851E914CBFC1A1DF, state); }
static BOOL NET_GAMESERVER_INIT_SESSION() { return invoke<BOOL>(0x8D45EE985CFA01DD); }
static BOOL NET_GAMESERVER_RETRIEVE_INIT_SESSION_STATUS(int* p0) { return invoke<BOOL>(0x3727730B65065BB9, p0); }
static BOOL NET_GAMESERVER_START_SESSION(int charSlot) { return invoke<BOOL>(0x837A06CA50CB0287, charSlot); }
static BOOL NET_GAMESERVER_START_SESSION_PENDING() { return invoke<BOOL>(0x53011E611CBE5D47); }
static BOOL NET_GAMESERVER_RETRIEVE_START_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xA7237EFE46BDEC7B, p0); }
static BOOL NET_GAMESERVER_RETRIEVE_SESSION_ERROR_CODE(int* p0) { return invoke<BOOL>(0x38C09A49FBCCE839, p0); }
static BOOL NET_GAMESERVER_IS_SESSION_VALID(int charSlot) { return invoke<BOOL>(0x134EF45B578F4CCF, charSlot); }
static BOOL NET_GAMESERVER_CLEAR_SESSION(int p0) { return invoke<BOOL>(0x8C09D01F9FCC2827, p0); }
static BOOL NET_GAMESERVER_SESSION_APPLY_RECEIVED_DATA(int charSlot) { return invoke<BOOL>(0x70ABB0748BDFB6BA, charSlot); }
static BOOL NET_GAMESERVER_IS_SESSION_REFRESH_PENDING() { return invoke<BOOL>(0x34F31012FED51A0F); }
static BOOL NET_GAMESERVER_START_SESSION_RESTART(BOOL inventory, BOOL playerbalance) { return invoke<BOOL>(0x31DC11BF434AF20B, inventory, playerbalance); }
static BOOL NET_GAMESERVER_TRANSACTION_IN_PROGRESS() { return invoke<BOOL>(0xEBCF66C686AEBDCA); }
static BOOL NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(int* p0, BOOL* p1) { return invoke<BOOL>(0x8A77EAFEB55D476D, p0, p1); }
static BOOL NET_GAMESERVER_BASKET_START(int* transactionId, Hash categoryHash, Hash actionHash, int flags) { return invoke<BOOL>(0x5156B6B1D1CD58FE, transactionId, categoryHash, actionHash, flags); }
static BOOL NET_GAMESERVER_BASKET_END() { return invoke<BOOL>(0xD8EB47E09DFC393C); }
static BOOL NET_GAMESERVER_BASKET_IS_ACTIVE() { return invoke<BOOL>(0x79EEE2067838CC59); }
static BOOL NET_GAMESERVER_BASKET_ADD_ITEM(Any* itemData, int quantity) { return invoke<BOOL>(0x5E8BF7E974BEA7D7, itemData, quantity); }
static BOOL NET_GAMESERVER_BASKET_IS_FULL() { return invoke<BOOL>(0x8B61FD3426EC705D); }
static BOOL NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Any p0, Any* p1) { return invoke<BOOL>(0x11FD21BA1B765FE2, p0, p1); }
static BOOL NET_GAMESERVER_CHECKOUT_START(int transactionId) { return invoke<BOOL>(0x5F7C6361179DFFC4, transactionId); }
static BOOL NET_GAMESERVER_BEGIN_SERVICE(int* transactionId, Hash categoryHash, Hash itemHash, Hash actionTypeHash, int value, int flags) { return invoke<BOOL>(0x54BC5E0B6A29AE8A, transactionId, categoryHash, itemHash, actionTypeHash, value, flags); }
static BOOL NET_GAMESERVER_END_SERVICE(int transactionId) { return invoke<BOOL>(0x1FDE21A286357401, transactionId); }
static BOOL NET_GAMESERVER_DELETE_CHARACTER(int slot, BOOL transfer, Hash reason) { return invoke<BOOL>(0xD1BAD83E70275AEB, slot, transfer, reason); }
static int NET_GAMESERVER_DELETE_CHARACTER_GET_STATUS() { return invoke<int>(0x93693D93BD53ACB1); }
static BOOL NET_GAMESERVER_DELETE_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0x203607236413B185); }
static BOOL NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(int charSlot, int amount) { return invoke<BOOL>(0x4F3198DEED415E95, charSlot, amount); }
static BOOL NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(int charSlot, int amount) { return invoke<BOOL>(0xCFE92984BF3486D5, charSlot, amount); }
static int NET_GAMESERVER_TRANSFER_BANK_TO_WALLET_GET_STATUS() { return invoke<int>(0x2B3725FC402B94A8); }
static int NET_GAMESERVER_TRANSFER_WALLET_TO_BANK_GET_STATUS() { return invoke<int>(0x606408352C7741AD); }
static BOOL NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0x59E8FA762FB527C5); }
static BOOL NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(int p0) { return invoke<BOOL>(0x1F4C0FAC35E805F4, p0); }
static const char* GET_ONLINE_VERSION() { return invoke<const char*>(0x5DABD035363E4E52); }
static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0x5F9F81C08516558E); }
static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0x261E3728EE56B3AC); }
static BOOL NETWORK_IS_NP_AVAILABLE() { return invoke<BOOL>(0xECBFC40AE72FA489); }
static BOOL NETWORK_IS_NP_PENDING() { return invoke<BOOL>(0x8C9CC81BD246DE31); }
static int NETWORK_GET_NP_UNAVAILABLE_REASON() { return invoke<int>(0x444B1E9E9A9D726B); }
static BOOL NETWORK_IS_CONNETED_TO_NP_PRESENCE() { return invoke<BOOL>(0x8827319E5D2F9C68); }
static BOOL NETWORK_IS_LOGGED_IN_TO_PSN() { return invoke<BOOL>(0xC026D674C8C48368); }
static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0x1595D1B690089487); }
static BOOL NETWORK_IS_REFRESHING_ROS_CREDENTIALS() { return invoke<BOOL>(0x9A98CA859043585F); }
static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0x5676319ACE5BEC37); }
static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xFE087BC8EB584AA2); }
static BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0xEBF44C5F6EF789C0); }
static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0x7242220B378B8CCF); }
static Player NETWORK_GET_HOST_PLAYER_INDEX() { return invoke<Player>(0x53A6D90B4FBC585D); }
static BOOL NETWORK_WAS_GAME_SUSPENDED() { return invoke<BOOL>(0xC8D0FF9225C03E0E); }
static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xD25970CBEE074E07); }
static BOOL NETWORK_HAS_AGE_RESTRICTIONS() { return invoke<BOOL>(0xB0DF27929B02C57E); }
static BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0x97DD063A9C6137F8, p0); }
static BOOL NETWORK_HAVE_COMMUNICATION_PRIVILEGES(int p0, Player player) { return invoke<BOOL>(0x9A9677D7F3615A86, p0, player); }
static BOOL NETWORK_CHECK_ONLINE_PRIVILEGES(Any p0, BOOL p1) { return invoke<BOOL>(0x27AEB178E6BB8021, p0, p1); }
static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0x8FF2665359043205, p0, p1, p2); }
static BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0x521B8DE052C56837, p0, p1, p2); }
static BOOL NETWORK_CHECK_TEXT_COMMUNICATION_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xB856D5DB24672EA4, p0, p1, p2); }
static BOOL NETWORK_IS_USING_ONLINE_PROMOTION() { return invoke<BOOL>(0x46396D1A40BBF581); }
static BOOL NETWORK_SHOULD_SHOW_PROMOTION_ALERT_SCREEN() { return invoke<BOOL>(0xCA8FCC9293149C67); }
static BOOL NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() { return invoke<BOOL>(0xADED703C1F8CC52B); }
static int NETWORK_GET_AGE_GROUP() { return invoke<int>(0xB3592BAAAC94842D); }
static BOOL NETWORK_CHECK_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x6530C8E06980D65E, p0, p1, p2); }
static BOOL NETWORK_IS_PRIVILEGE_CHECK_IN_PROGRESS() { return invoke<BOOL>(0xA5D42B526D34A833); }
static void NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED() { invoke<Void>(0xDF9CDAB22CD2E6EF); }
static BOOL NETWORK_RESOLVE_PRIVILEGE_USER_CONTENT() { return invoke<BOOL>(0x1BF2060736C8594C); }
static BOOL NETWORK_HAVE_PLATFORM_SUBSCRIPTION() { return invoke<BOOL>(0x47C5F1CAA6A07D67); }
static BOOL NETWORK_IS_PLATFORM_SUBSCRIPTION_CHECK_PENDING() { return invoke<BOOL>(0x6C8E92D4F56B150E); }
static void NETWORK_SHOW_ACCOUNT_UPGRADE_UI() { invoke<Void>(0x130048FEFDA3B288); }
static BOOL NETWORK_IS_SHOWING_SYSTEM_UI_OR_RECENTLY_REQUESTED_UPSELL() { return invoke<BOOL>(0x348A57FA9B720374); }
static BOOL NETWORK_NEED_TO_START_NEW_GAME_BUT_BLOCKED() { return invoke<BOOL>(0xEF3203CB3CD405D3); }
static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xF08B45C0CEBE11C2); }
static void NETWORK_BAIL(int p0, int p1, int p2) { invoke<Void>(0xB0926B14C2D3A838, p0, p1, p2); }
static void NETWORK_ON_RETURN_TO_SINGLE_PLAYER() { invoke<Void>(0x2920E3AB45CC75B8); }
static BOOL NETWORK_TRANSITION_START(int p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xC92F64C449585057, p0, p1, p2, p3); }
static BOOL NETWORK_TRANSITION_ADD_STAGE(Hash hash, int p1, int p2, int state, int p4) { return invoke<BOOL>(0x350F7DB8B2765EC2, hash, p1, p2, state, p4); }
static BOOL NETWORK_TRANSITION_FINISH(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x232D3561D0F9CC6E, p0, p1, p2); }
static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0x0C81430427CA20D7, loadingState); }
static BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0xB1839CEE630503F9); }
static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0x5FA9B89685B7F17E); }
static BOOL NETWORK_SESSION_DO_FREEROAM_QUICKMATCH(Any p0, Any p1, Any p2, int maxPlayers) { return invoke<BOOL>(0xD9082A1A08CF156E, p0, p1, p2, maxPlayers); }
static BOOL NETWORK_SESSION_DO_FRIEND_MATCHMAKING(int p0, int p1, int maxPlayers) { return invoke<BOOL>(0x0563974EC0E4F379, p0, p1, maxPlayers); }
static BOOL NETWORK_SESSION_DO_CREW_MATCHMAKING(int crewId, int p1, int p2, int maxPlayers) { return invoke<BOOL>(0x2FFEC9DB9C5EB929, crewId, p1, p2, maxPlayers); }
static BOOL NETWORK_SESSION_DO_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0x3B554BBD6F262ED5, p0, p1, p2, p3, p4); }
static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0x255FDE258192D9FE, p0, maxPlayers, p2); }
static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0xE2C5447EB91CC682, p0, maxPlayers); }
static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0x4F279069441DF335, p0, maxPlayers); }
static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xCA440502CAC1617C); }
static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0x568C5A2B6834D226); }
static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xDC8C0439F5CD3C85); }
static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0x6CCB49E4B35F59D6); }
static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0xD0C8A7FF1FD5A461, p0, p1); }
static BOOL NETWORK_SESSION_LEAVE(Any p0) { return invoke<BOOL>(0x8FFE1F924EF00340, p0); }
static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xE8B604AD9A55DE39, player); }
static BOOL NETWORK_SESSION_GET_KICK_VOTE(Player player) { return invoke<BOOL>(0xB1397F80306800D5, player); }
static BOOL NETWORK_SESSION_RESERVE_SLOTS_TRANSITION(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x66E498254807DB77, p0, p1, p2); }
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_SESSION() { return invoke<BOOL>(0x68CB8278CA2DB28D); }
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_TRANSITION() { return invoke<BOOL>(0x7C2F429F5A70EFE8); }
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP(int matchmakingGroup) { invoke<Void>(0x9A651BCFA544373C, matchmakingGroup); }
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX(int playerType, int playerCount) { invoke<Void>(0x4EDA84E31A9AD294, playerType, playerCount); }
static int NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE(int p0) { return invoke<int>(0x90383DF0E1713198, p0); }
static void NETWORK_SESSION_ADD_ACTIVE_MATCHMAKING_GROUP(int groupId) { invoke<Void>(0x5A59537D7B87C071, groupId); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT(Any p0) { invoke<Void>(0xC2FDE8BF0797A991, p0); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT_TRANSITION(Any p0) { invoke<Void>(0x93055E37701645DF, p0); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_ONLY_CREWS_TRANSITION(BOOL p0) { invoke<Void>(0x3A777FFCB6CEEC68, p0); }
static void NETWORK_SESSION_SET_CREW_LIMIT_MAX_MEMBERS_TRANSITION(Any p0) { invoke<Void>(0x748527CDF8982E12, p0); }
static void NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID(BOOL p0) { invoke<Void>(0x97FAFBDA1C653C51, p0); }
static void NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE(int p0) { invoke<Void>(0xAECA84689B07DB71, p0); }
static void NETWORK_SESSION_SET_NUM_BOSSES(int num) { invoke<Void>(0x76B38120ECD9A6EE, num); }
static void NETWORK_SESSION_SET_SCRIPT_VALIDATE_JOIN() { invoke<Void>(0x19B1BD7BD2BA430B); }
static void NETWORK_SESSION_VALIDATE_JOIN(BOOL p0) { invoke<Void>(0xD327503849EFC7D2, p0); }
static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0x26AC5C43C19083BA, p0, p1); }
static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0x9758CB6BB2E4700F); }
static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* hours, int* minutes, int* seconds) { invoke<Void>(0x7CA15BD368B8D693, hours, minutes, seconds); }
static void NETWORK_SESSION_SET_GAMEMODE(Any p0) { invoke<Void>(0xD51099E517218F8C, p0); }
static int NETWORK_SESSION_GET_HOST_AIM_PREFERENCE() { return invoke<int>(0x672C2841CFBEC1A5); }
static BOOL NETWORK_FIND_GAMERS_IN_CREW(int crewId) { return invoke<BOOL>(0x0C3213134B5223EB, crewId); }
static BOOL NETWORK_FIND_MATCHED_GAMERS(int attribute, float fallbackLimit, float lowerLimit, float upperLimit) { return invoke<BOOL>(0x748C69C64ED4F080, attribute, fallbackLimit, lowerLimit, upperLimit); }
static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0xDD718E172A233DC5); }
static BOOL NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke<BOOL>(0x6612FC080482B408); }
static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0x7B74C2465094BAE7); }
static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0x9A791B1482F74599, p0, p1); }
static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0x40F220671F7EF07D); }
static BOOL NETWORK_QUEUE_GAMER_FOR_STATUS(Any* p0) { return invoke<BOOL>(0xA35EFADA8B877384, p0); }
static BOOL NETWORK_GET_GAMER_STATUS_FROM_QUEUE() { return invoke<BOOL>(0x23F4D421F65F56BD); }
static BOOL NETWORK_IS_GETTING_GAMER_STATUS() { return invoke<BOOL>(0x124398C14F6A1133); }
static BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke<BOOL>(0xC0AA79A8808D5BA2); }
static BOOL NETWORK_GET_GAMER_STATUS_RESULT(Any* p0, Any p1) { return invoke<BOOL>(0x08A4CF1E65E8A0EC, p0, p1); }
static void NETWORK_CLEAR_GET_GAMER_STATUS() { invoke<Void>(0x1718FDF9693BFC2B); }
static void NETWORK_SESSION_JOIN_INVITE() { invoke<Void>(0x065ED066142EEE36); }
static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0xB1354B4526064BB6); }
static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<Void>(0x700F61510EE70767); }
static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0x6F5C1B03EC881534); }
static BOOL NETWORK_HAS_CONFIRMED_INVITE() { return invoke<BOOL>(0x60EDC5810CB82627); }
static BOOL NETWORK_REQUEST_INVITE_CONFIRMED_EVENT() { return invoke<BOOL>(0x4AA344248B02BD35); }
static BOOL NETWORK_SESSION_WAS_INVITED() { return invoke<BOOL>(0x8F676111F5795F1C); }
static void NETWORK_SESSION_GET_INVITER(Any* gamerHandle) { invoke<Void>(0xDAB06DF0C53853BB, gamerHandle); }
static BOOL NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() { return invoke<BOOL>(0xC05DC36AE101C2BB); }
static BOOL NETWORK_SESSION_IS_DISPLAYING_INVITE_CONFIRMATION() { return invoke<BOOL>(0xD03C646667D8D5F1); }
static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0x408B17CF0BA8B155, toggle); }
static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xF303C195C2A60638, toggle); }
static void NETWORK_BLOCK_JOIN_QUEUE_INVITES(BOOL toggle) { invoke<Void>(0x6E8BBCAC6E64214C, toggle); }
static void NETWORK_SET_CAN_RECEIVE_RS_INVITES(BOOL p0) { invoke<Void>(0x7AFB027C1EB91ABE, p0); }
static void NETWORK_STORE_INVITE_THROUGH_RESTART() { invoke<Void>(0x918B9A135FB8B81F); }
static void NETWORK_ALLOW_INVITE_PROCESS_IN_PLAYER_SWITCH(BOOL p0) { invoke<Void>(0x93F98BC782D307FF, p0); }
static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(BOOL toggle) { invoke<Void>(0x10B4F03DA622008C, toggle); }
static BOOL NETWORK_IS_OFFLINE_INVITE_PENDING() { return invoke<BOOL>(0xDB0CDDD9A5B1C7A9); }
static void NETWORK_CLEAR_OFFLINE_INVITE_PENDING() { invoke<Void>(0x984AEF3A625C58C4); }
static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0x827C8918F31EF9CD, p0); }
static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0x566589BD8D826713); }
static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0x76CD105BCAC6EB9F); }
static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0x7B3F26F5D11BF3BE); }
static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xBF52D447C795492B); }
static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0x2312C61FB9082621); }
static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xAB8F1746453732A4); }
static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0x2CA491A425D49E0D); }
static int NETWORK_GET_GAME_MODE() { return invoke<int>(0x83E35AD37CFCE6F6); }
static void NETWORK_SESSION_MARK_VISIBLE(BOOL toggle) { invoke<Void>(0x4C4BDAB6F7441447, toggle); }
static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0x6887ED8BDFBE2715); }
static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) { invoke<Void>(0x82B8FC206B9F77F8, toggle); }
static void NETWORK_SESSION_CHANGE_SLOTS(int slots, BOOL p1) { invoke<Void>(0x6160ECE40167CDEA, slots, p1); }
static int NETWORK_SESSION_GET_PRIVATE_SLOTS() { return invoke<int>(0x7EE8EFCDD1DAF8E8); }
static BOOL NETWORK_SESSION_VOICE_HOST() { return invoke<BOOL>(0xD9C7584E971C091E); }
static BOOL NETWORK_SESSION_VOICE_LEAVE() { return invoke<BOOL>(0x7D8697356CC73FFD); }
static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* gamerHandle) { invoke<Void>(0x02D78E296BAAE4A1, gamerHandle); }
static void NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(BOOL p0, int p1) { invoke<Void>(0x04C07C028D5A3A1A, p0, p1); }
static void NETWORK_SESSION_VOICE_SET_TIMEOUT(int timeout) { invoke<Void>(0xBA4DB04D93B492EF, timeout); }
static BOOL NETWORK_SESSION_IS_IN_VOICE_SESSION() { return invoke<BOOL>(0x5150DDF9D3BDA9E5); }
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE() { return invoke<BOOL>(0x810D839B3DC43B18); }
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_BUSY() { return invoke<BOOL>(0x8BDB5F6FED3994AD); }
static BOOL NETWORK_SEND_TEXT_MESSAGE(const char* message, Any* gamerHandle) { return invoke<BOOL>(0x44FC944CCE2884A5, message, gamerHandle); }
static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0x7815F93AD7950188, toggle); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<BOOL>(0x8B6869C5EC0F62C3); }
static void NETWORK_SET_ACTIVITY_PLAYER_MAX(Any p0) { invoke<Void>(0xE637CC36B406C3BD, p0); }
static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<Void>(0xD813155D5FA37C96, maxSpectators); }
static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0x148F075BF593134E, p0); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xDFA2DE98496613A2, gamerHandle); }
static BOOL NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, Any p4, BOOL p5, BOOL p6, int p7, Any p8, int p9) { return invoke<BOOL>(0xD8DD13235608C9D0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xFC1123FE6C7D5909, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x01C9B0FC57F5144E, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0x8AB21B54A01F6CC2, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<BOOL>(0x646BC1CC9552A232); }
static void NETWORK_CLEAR_GROUP_ACTIVITY() { invoke<Void>(0x6AF1528AD00C76A2); }
static void NETWORK_RETAIN_ACTIVITY_GROUP() { invoke<Void>(0x7FFE6853F63E56BA); }
static BOOL NETWORK_IS_TRANSITION_CLOSED_FRIENDS() { return invoke<BOOL>(0x250E5C2B310DC7C4); }
static BOOL NETWORK_IS_TRANSITION_CLOSED_CREW() { return invoke<BOOL>(0x2D7D4A7EDC2C2543); }
static BOOL NETWORK_IS_TRANSITION_SOLO() { return invoke<BOOL>(0x3EC1F83231603B24); }
static BOOL NETWORK_IS_TRANSITION_PRIVATE() { return invoke<BOOL>(0x1ABB34FE0E4550C3); }
static int NETWORK_GET_NUM_TRANSITION_NON_ASYNC_GAMERS() { return invoke<int>(0x1F97DCD0259BD8BB); }
static void NETWORK_MARK_AS_PREFERRED_ACTIVITY(BOOL p0) { invoke<Void>(0x8C15D9F9A0692305, p0); }
static void NETWORK_MARK_AS_WAITING_ASYNC(BOOL p0) { invoke<Void>(0x5B6118C4A1363B02, p0); }
static void NETWORK_SET_IN_PROGRESS_FINISH_TIME(Any p0) { invoke<Void>(0x4E0E12D39BE69892, p0); }
static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0x5B4AC3576C9F22EA, p0); }
static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0x5AB2FA2EDFF61EB9); }
static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0x6DD03E2B054A8A3F, p0, p1); }
static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* gamerHandle) { invoke<Void>(0xB502672BBF33603F, gamerHandle); }
static BOOL NETWORK_LEAVE_TRANSITION() { return invoke<BOOL>(0x2B0E6E483C2214A4); }
static BOOL NETWORK_LAUNCH_TRANSITION() { return invoke<BOOL>(0x7FF4763F9198B0EE); }
static void NETWORK_SET_DO_NOT_LAUNCH_FROM_JOIN_AS_MIGRATED_HOST(BOOL toggle) { invoke<Void>(0xA1DA526BBDEF1146, toggle); }
static void NETWORK_CANCEL_TRANSITION_MATCHMAKING() { invoke<Void>(0x1FB39C4C10D6F290); }
static void NETWORK_BAIL_TRANSITION(int p0, int p1, int p2) { invoke<Void>(0x891F7D003513A461, p0, p1, p2); }
static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0x58B069A2B3372724, p0, maxPlayers); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0x35628CF57A78C4CD, p0, maxPlayers, p2); }
static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0x26A3263324259353, p0, p1, p2, players, p4); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, int players, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0x9D1FE8B2049C8437, p0, p1, players, p3, p4, p5); }
static BOOL NETWORK_IS_TRANSITION_TO_GAME() { return invoke<BOOL>(0x38D0A140AB80B25C); }
static int NETWORK_GET_TRANSITION_MEMBERS(Any* data, int dataCount) { return invoke<int>(0xE82C4DFDE9FB1B8B, data, dataCount); }
static void NETWORK_APPLY_TRANSITION_PARAMETER(int p0, int p1) { invoke<Void>(0x9B74CCFFA48B4E55, p0, p1); }
static void NETWORK_APPLY_TRANSITION_PARAMETER_STRING(int p0, const char* string, BOOL p2) { invoke<Void>(0x9F634E841D2FDFE7, p0, string, p2); }
static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Any* gamerHandle, const char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xD13EB0279D039C8B, gamerHandle, p1, p2, p3, p4); }
static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0x3E331587D83F6765, p0); }
static BOOL NETWORK_IS_TRANSITION_HOST() { return invoke<BOOL>(0xD0A8F3B0E848A00C); }
static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xC8827E144B173DFB, gamerHandle); }
static BOOL NETWORK_GET_TRANSITION_HOST(Any* gamerHandle) { return invoke<BOOL>(0xE344B3616A2C3592, gamerHandle); }
static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0xFFB255D6878CB691); }
static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0x46AEFA18F83E2E9B); }
static BOOL NETWORK_IS_TRANSITION_BUSY() { return invoke<BOOL>(0xBEBFA329956ABA4C); }
static BOOL NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<BOOL>(0xF34D7A660FA4A707); }
static BOOL NETWORK_IS_TRANSITION_LEAVE_POSTPONED() { return invoke<BOOL>(0x3925DD69CFF095F4); }
static void NETWORK_TRANSITION_SET_IN_PROGRESS(Any p0) { invoke<Void>(0x378AFFC55A6E480C, p0); }
static void NETWORK_TRANSITION_SET_CONTENT_CREATOR(Any p0) { invoke<Void>(0xAB1097B46FD0ECE9, p0); }
static void NETWORK_TRANSITION_SET_ACTIVITY_ISLAND(Any p0) { invoke<Void>(0x4470407B9FB1A6E0, p0); }
static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<Void>(0x1729D05F2DC94AF9); }
static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<Void>(0xFC98CB0BBC0A0A7B); }
static BOOL NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING() { return invoke<BOOL>(0x15968F67A02D1437); }
static void NETWORK_SET_TRANSITION_VISIBILITY_LOCK(BOOL p0, BOOL p1) { invoke<Void>(0x7C7E0FB84F9E6CEE, p0, p1); }
static BOOL NETWORK_IS_TRANSITION_VISIBILITY_LOCKED() { return invoke<BOOL>(0x4AAE1A24667185BB); }
static void NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) { invoke<Void>(0x55EB8BA1CE3E5D52, p0); }
static void NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, BOOL p1) { invoke<Void>(0xE22626CD864678B3, p0, p1); }
static void NETWORK_TRANSITION_BLOCK_JOIN_REQUESTS(BOOL p0) { invoke<Void>(0x16CB1C9CEF606A50, p0); }
static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0x5CB105D3EB58499C, player); }
static BOOL NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) { return invoke<BOOL>(0xF59281E510228E22, p0); }
static BOOL NETWORK_JOIN_TRANSITION(Player player) { return invoke<BOOL>(0x0B8EB69DE72AD71E, player); }
static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xD5C2153418DB9348, p0); }
static BOOL NETWORK_HAS_TRANSITION_INVITE_BEEN_ACKED(Any* p0) { return invoke<BOOL>(0xE9E0BE3414B91F8E, p0); }
static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0x834C960822A4683F); }
static void NETWORK_DISABLE_REALTIME_MULTIPLAYER() { invoke<Void>(0xF4DE15907AAE2E3A); }
static void NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(BOOL toggle) { invoke<Void>(0x690E83E7292EA12C, toggle); }
static BOOL NETWORK_SEND_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xBB7F9D4FB57B4FFA, gamerHandle, p1, dataCount, p3); }
static BOOL NETWORK_SEND_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0x6651FAED711991F0, gamerHandle, p1, dataCount, p3); }
static BOOL NETWORK_SEND_IMPORTANT_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xA8778038A42EA249, gamerHandle, p1, dataCount, p3); }
static int NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(int p0) { return invoke<int>(0x7F36EF28AE77E331, p0); }
static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xA21ED22C344748B0); }
static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xA69636D9FC46B96C, p0); }
static BOOL NETWORK_REMOVE_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0x97F5F6E518D1ADB5, p0); }
static int NETWORK_GET_PRESENCE_INVITE_ID(int p0) { return invoke<int>(0x08BFCB98CBB3ADB9, p0); }
static const char* NETWORK_GET_PRESENCE_INVITE_INVITER(int p0) { return invoke<const char*>(0x4886DE678C2CE4D2, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0x9533853565DED3F7, p0, p1); }
static int NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<int>(0x32FF25F8A134DEC8, p0); }
static const char* NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(int p0) { return invoke<const char*>(0xE533A869F4C34F41, p0); }
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_LENGTH(int p0) { return invoke<int>(0x06B43310DD2DEF12, p0); }
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_CURRENT(int p0) { return invoke<int>(0x0A9FDF40CD06A05D, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(int p0) { return invoke<BOOL>(0xB73605870CAE4123, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(Any p0) { return invoke<BOOL>(0x5CAC0C9085C92014, p0); }
static BOOL NETWORK_HAS_FOLLOW_INVITE() { return invoke<BOOL>(0x6E4D523086634F4B); }
static BOOL NETWORK_ACTION_FOLLOW_INVITE() { return invoke<BOOL>(0x9BC1C803BECC2537); }
static BOOL NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<BOOL>(0x24F6146DA6B0AD4D); }
static void NETWORK_REMOVE_AND_CANCEL_ALL_INVITES() { invoke<Void>(0x81C066ED25825D02); }
static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0x78595F3231E58B25, p0); }
static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<Void>(0x646B265426E8F86D); }
static void NETWORK_REMOVE_AND_CANCEL_ALL_TRANSITION_INVITES() { invoke<Void>(0x75F142E8DF15F74F); }
static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xAE84E9DFB523207B, p0, p1, p2, p3); }
static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0x0E58BC7A6579889B, p0); }
static BOOL NETWORK_HAS_MADE_INVITE_DECISION(Any* gamerHandle) { return invoke<BOOL>(0xF3AA932723A7168A, gamerHandle); }
static int NETWORK_GET_INVITE_REPLY_STATUS(Any p0) { return invoke<int>(0xEAC3CA6CF6C9EB8C, p0); }
static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xAF52AA4A49D4A9B4, p0); }
static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xF49565F8EDB1A5AF, p0); }
static void NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU(Any* p0) { invoke<Void>(0x36BA6B20E222965C, p0); }
static BOOL NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(int p0, Any* gamerHandle) { return invoke<BOOL>(0xA845292976402C0F, p0, gamerHandle); }
static BOOL NETWORK_CHECK_DATA_MANAGER_FOR_HANDLE(Any p0, Any* gamerHandle) { return invoke<BOOL>(0x53A0D6983FA95432, p0, gamerHandle); }
static void NETWORK_SET_INVITE_FAILED_MESSAGE_FOR_INVITE_MENU(Any* p0, Any* p1) { invoke<Void>(0x8EBBDA7981838F74, p0, p1); }
static BOOL FILLOUT_PM_PLAYER_LIST(Any* gamerHandle, Any p1, Any p2) { return invoke<BOOL>(0x403A85E50E14F1BD, gamerHandle, p1, p2); }
static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xD57BC2EBAE7CB358, p0, p1, p2, p3); }
static BOOL REFRESH_PLAYER_LIST_STATS(int p0) { return invoke<BOOL>(0xAD5E28295E97B3FB, p0); }
static BOOL NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(Any* p0) { return invoke<BOOL>(0x9215F2CB541DA81C, p0); }
static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0x6FE3848CD1092574); }
static int NETWORK_GET_PLATFORM_PARTY_MEMBER_COUNT() { return invoke<int>(0x9DC05704C71AF6C5); }
static int NETWORK_GET_PLATFORM_PARTY_MEMBERS(Any* data, int dataSize) { return invoke<int>(0xFFE22E756055DC96, data, dataSize); }
static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0x03D7696E3D331706); }
static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* gamerHandle) { return invoke<BOOL>(0x8510A5D786F703DC, gamerHandle); }
static BOOL NETWORK_CAN_QUEUE_FOR_PREVIOUS_SESSION_JOIN() { return invoke<BOOL>(0xC9C468532694A690); }
static BOOL NETWORK_IS_QUEUING_FOR_SESSION_JOIN() { return invoke<BOOL>(0x4E03BF5175B444A6); }
static void NETWORK_CLEAR_QUEUED_JOIN_REQUEST() { invoke<Void>(0x6CE421AEDCB62B7E); }
static void NETWORK_SEND_QUEUED_JOIN_REQUEST() { invoke<Void>(0x2D1FE8FD7BC2BF03); }
static void NETWORK_REMOVE_ALL_QUEUED_JOIN_REQUESTS() { invoke<Void>(0x180F569AF7F16BB2); }
static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int seed) { invoke<Void>(0xC37AA2604D0B69E8, seed); }
static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0xFBC07BCFFCB8DD9B); }
static int NETWORK_GET_RANDOM_INT_RANGED(int rangeStart, int rangeEnd) { return invoke<int>(0x5A6DA0A2EEDE8B78, rangeStart, rangeEnd); }
static float _NETWORK_GET_RANDOM_FLOAT_RANGED(float rangeStart, float rangeEnd) { return invoke<float>(0xDB1A8B701601A206, rangeStart, rangeEnd); }
static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xB10D024D4A098884); }
static int NETWORK_PLAYER_GET_CHEATER_REASON() { return invoke<int>(0x36D707C40C1DCEB3); }
static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0x3369879DB5987727); }
static BOOL TRIGGER_PLAYER_CRC_HACKER_CHECK(Player player, int p1, Hash scriptHash) { return invoke<BOOL>(0x5D5A26AAC19E7AEF, player, p1, scriptHash); }
static BOOL TRIGGER_TUNING_CRC_HACKER_CHECK(Player player, const char* p1, const char* p2) { return invoke<BOOL>(0x4EADFBB3267BBD21, player, p1, p2); }
static BOOL TRIGGER_FILE_CRC_HACKER_CHECK(Player player, const char* p1) { return invoke<BOOL>(0xB03B07A8637DE711, player, p1); }
static BOOL REMOTE_CHEATER_PLAYER_DETECTED(Player player, int a, int b) { return invoke<BOOL>(0x1CACC0A56175FE7D, player, a, b); }
static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* gamerHandle, int event, int amountReceived) { return invoke<BOOL>(0xC9B8B8CBF4083E0F, gamerHandle, event, amountReceived); }
static void NETWORK_ADD_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0x72073521D4ACB83A, modelHash); }
static void NETWORK_REMOVE_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0x0127914A94E51F42, modelHash); }
static void NETWORK_CLEAR_INVALID_OBJECT_MODELS() { invoke<Void>(0x5D87EA74A2BF9133); }
static void NETWORK_APPLY_PED_SCAR_DATA(Ped ped, int p1) { invoke<Void>(0xF92FD7949E52DEA2, ped, p1); }
static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int maxNumMissionParticipants, BOOL p1, int instanceId) { invoke<Void>(0xDB2434E51017FFCC, maxNumMissionParticipants, p1, instanceId); }
static BOOL NETWORK_TRY_TO_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0x0384E096E4BE6261, p0, p1, p2); }
static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xE8DB952A4BA8F328); }
static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0x95C7A22DBE7AEF4C); }
static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0x7F258099B06D4C7C); }
static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0xDFF16B5B12604EFF); }
static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0x6F4A865F87C7A3AD, vars, numVars, debugName); }
static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0x7B13DC83218D9AF5, vars, numVars, debugName); }
static void NETWORK_REGISTER_HIGH_FREQUENCY_HOST_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0x2867D5E1AD29963D, p0, p1, p2); }
static void NETWORK_REGISTER_HIGH_FREQUENCY_PLAYER_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0x2F0F5E0292A89B1C, p0, p1, p2); }
static void NETWORK_FINISH_BROADCASTING_DATA() { invoke<Void>(0x40442590673371C9); }
static BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke<BOOL>(0x37F4AB46DE999660); }
static Player NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<Player>(0x4470BE79F5771783, player); }
static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0x857CA6FCE5E9C84F, index); }
static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0x1C1C92A1CBAE364B, ped); }
static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0x6AC5EDDD33D79407); }
static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0x89BE185F885B6CD6, player); }
static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0xC259E614564DAB8F); }
static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0x7206AEB20960CCC8, p0); }
static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0x762604C40829DB72, player); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0xCCD470854FB0E643, player); }
static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0x93E08E0F531E2C35); }
static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0x48B835569F078653); }
static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instance_id, int position_hash) { return invoke<Player>(0xF1A4B8228C5E44B7, scriptName, instance_id, position_hash); }
static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0x0A3E878F88F44843); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instance_id, BOOL p2, int position_hash) { return invoke<BOOL>(0x99F8FC8A6D8E20C0, scriptName, instance_id, p2, position_hash); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, BOOL p2, int p3) { return invoke<BOOL>(0x96B8D4513E0350EC, scriptHash, p1, p2, p3); }
static BOOL NETWORK_IS_THREAD_A_NETWORK_SCRIPT(int threadId) { return invoke<BOOL>(0x98A7AD360A44F01D, threadId); }
static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(const char* scriptName, int instance_id, int position_hash) { return invoke<int>(0x996932F6DFE01964, scriptName, instance_id, position_hash); }
static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke<int>(0xF25E5B7C1279A85B); }
static Hash NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT() { return invoke<Hash>(0x4C7F9ACFABADEB9E); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player player, const char* script, int instance_id) { return invoke<BOOL>(0xE39406DC2A852B0E, player, script, instance_id); }
static void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION() { invoke<Void>(0x102543889D51BCB6); }
static void NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT() { invoke<Void>(0x68F69A7905654A16); }
static Player PARTICIPANT_ID() { return invoke<Player>(0x30DE412C1194FCDD); }
static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xAE032CEDCF23C6D5); }
static Player NETWORK_GET_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Player>(0xD109ACB1A444BD9D, player, weaponHash); }
static Player NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<Player>(0x7B8DC32252146679, netId, weaponHash); }
static Player NETWORK_GET_DESTROYER_OF_ENTITY(Entity entity, Hash* weaponHash) { return invoke<Player>(0x89DAB370A022F4CC, entity, weaponHash); }
static BOOL NETWORK_GET_ASSISTED_KILL_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0x3DC0E2D99138397E, player, entity, p2); }
static BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0x07DCBF1C62A9C503, player, entity, p2); }
static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0x630DDB54213C37C8, player, weaponHash); }
static void NETWORK_SET_CURRENT_PUBLIC_CONTENT_ID(const char* missionId) { invoke<Void>(0xF49F5AE96EF1A683, missionId); }
static void NETWORK_SET_CURRENT_CHAT_OPTION(int newChatOption) { invoke<Void>(0x0B933C101279FCB7, newChatOption); }
static void NETWORK_SET_CURRENT_SPAWN_LOCATION_OPTION(Hash mpSettingSpawn) { invoke<Void>(0xDBCD5F83F8E84B5C, mpSettingSpawn); }
static void NETWORK_SET_VEHICLE_DRIVEN_IN_TEST_DRIVE(BOOL toggle) { invoke<Void>(0x028A2896E5EB2CBE, toggle); }
static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL p4, BOOL changetime, BOOL p6, int p7, int p8) { invoke<Void>(0xF24C94A1C99DA4AB, x, y, z, heading, p4, changetime, p6, p7, p8); }
static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xC522FBE9CCC8C20E, time); }
static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0x72096E3388B1352A); }
static void NETWORK_DISABLE_INVINCIBLE_FLASHING(Player player, BOOL toggle) { invoke<Void>(0x65EEAD281B3DD2AD, player, toggle); }
static void NETWORK_PATCH_POST_CUTSCENE_HS4F_TUN_ENT(Ped ped) { invoke<Void>(0xA8A5C2C6069112B4, ped); }
static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(BOOL toggle) { invoke<Void>(0xD187A24F607E4EC1, toggle); }
static BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity entity) { return invoke<BOOL>(0x5DAE095398CD3303, entity); }
static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xEDC5724006650308, entity); }
static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0x2D1D65495AECC04F, netId); }
static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xC8D49539708A80B4, entity); }
static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0xE639563966553FA8, entity); }
static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0xAFD7C87C41AEE7E7, entity); }
static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xE34E2B2CD0086B03, entity); }
static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netId) { return invoke<BOOL>(0x2FC2FDC413532977, netId); }
static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) { return invoke<BOOL>(0x93BF17E19A9F0E9B, netId); }
static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0x460D2A8B2C7DC7D4, netId); }
static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xEADBDBE0422CF7E6, netId); }
static BOOL NETWORK_IS_NETWORK_ID_REMOTELY_CONTROLLED(int netId) { return invoke<BOOL>(0x5766C800B3721367, netId); }
static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xF093E270C0B6B318, entity); }
static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0xA6C7B9A74A74B015, doorID); }
static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0x1B1A446EFA398EB5, entity); }
static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0x0FB4A5FDA5B2A809, pickup); }
static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) { return invoke<BOOL>(0x05C0E11904FA483A, doorHash); }
static BOOL NETWORK_IS_DOOR_NETWORKED(Hash doorHash) { return invoke<BOOL>(0xBC04D336219C5196, doorHash); }
static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0x913A6486719A87D2, vehicle); }
static int PED_TO_NET(Ped ped) { return invoke<int>(0x9F7A52B1537567AC, ped); }
static int OBJ_TO_NET(Object object) { return invoke<int>(0x16FE0AE33E462D17, object); }
static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xE38610F405049F71, netHandle); }
static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xC35A3A4C05A4831B, netHandle); }
static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xAB3646235DE50E93, netHandle); }
static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xF5014688C9788D5F, netHandle); }
static void NETWORK_GET_LOCAL_HANDLE(Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0x677540FE33795D26, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_USER_ID(const char* userId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xF1DAEAF3D760B0ED, userId, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xD41EE13851E1A5D7, memberId, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0x464E131FD68B953F, player, gamerHandle, gamerHandleSize); }
static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0x3351FEF40EC734DB, player); }
static Hash NETWORK_HASH_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Hash>(0xA7D865785DB9408A, gamerHandle); }
static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0x1530EB7A9B636789, friendIndex, gamerHandle, gamerHandleSize); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* gamerHandle) { return invoke<BOOL>(0x8F46B8E54248FD48, gamerHandle); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0x6B6DB41744C41D5E); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xA44A2B8A83947D02); }
static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* gamerHandle) { return invoke<const char*>(0x6E4BB594E2A075CC, gamerHandle); }
static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(Any* p0, Any p1) { return invoke<int>(0x310461CE0659232F, p0, p1); }
static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Any p0, Any p1, Any p2) { return invoke<int>(0xD61DBE5217500D72, p0, p1, p2); }
static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* gamerHandle1, Any* gamerHandle2) { return invoke<BOOL>(0xD43ED7463CB7671C, gamerHandle1, gamerHandle2); }
static BOOL NETWORK_IS_HANDLE_VALID(Any* gamerHandle, int gamerHandleSize) { return invoke<BOOL>(0xA8F635A578C0CE07, gamerHandle, gamerHandleSize); }
static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Player>(0xA34132DD5D4FE383, gamerHandle); }
static const char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<const char*>(0x0CA8AE01D86E1FDC, gamerHandle); }
static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* gamerHandle) { return invoke<BOOL>(0xBE0146369C46314B, gamerHandle); }
static void NETWORK_SHOW_PROFILE_UI(Any* gamerHandle) { invoke<Void>(0xAD9DEC6201018EA3, gamerHandle); }
static const char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<const char*>(0x4B41F70EA5AA79D4, player); }
static const char* NETWORK_PLAYER_GET_USERID(Player player, int* userID) { return invoke<const char*>(0x4DE98A9A01197527, player, userID); }
static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0x6BAFBE8178274578, player); }
static BOOL NETWORK_PLAYER_INDEX_IS_CHEATER(Player player) { return invoke<BOOL>(0x0686D5124777B9BE, player); }
static int NETWORK_ENTITY_GET_OBJECT_ID(Entity entity) { return invoke<int>(0x71698F8AAB574CF7, entity); }
static Entity NETWORK_GET_ENTITY_FROM_OBJECT_ID(Any p0) { return invoke<Entity>(0x85266061BAF25926, p0); }
static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0x39C0534F522598C0, p0); }
static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0x93352D3163414D4A); }
static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xFD8C855412F74D0F); }
static const char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<const char*>(0x5FDC59F83F2D1C9F, friendIndex); }
static const char* NETWORK_GET_FRIEND_DISPLAY_NAME(int friendIndex) { return invoke<const char*>(0x6FB5D26E5812C023, friendIndex); }
static BOOL NETWORK_IS_FRIEND_ONLINE(const char* name) { return invoke<BOOL>(0xB8CDCB967533FCB3, name); }
static BOOL NETWORK_IS_FRIEND_HANDLE_ONLINE(Any* gamerHandle) { return invoke<BOOL>(0x484CF81C32C3D413, gamerHandle); }
static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) { return invoke<BOOL>(0x68809A66A3FB7B8F, friendName); }
static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(const char* friendName) { return invoke<BOOL>(0x116CDE00FC231A4B, friendName); }
static BOOL NETWORK_IS_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0xEDD63461767A518C, gamerHandle); }
static BOOL NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<BOOL>(0x8353648A58677B60, p0); }
static BOOL NETWORK_IS_ADDING_FRIEND() { return invoke<BOOL>(0xD731E73BAE356976); }
static BOOL NETWORK_ADD_FRIEND(Any* gamerHandle, const char* message) { return invoke<BOOL>(0x454174F8A9B8D8A1, gamerHandle, message); }
static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0x5679681143C10F0A, friendIndex); }
static void NETWORK_SET_PLAYER_IS_PASSIVE(BOOL toggle) { invoke<Void>(0x08C2ACB534243279, toggle); }
static BOOL NETWORK_GET_PLAYER_OWNS_WAYPOINT(Player player) { return invoke<BOOL>(0xB039D40188E991D1, player); }
static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xA610A20639713DEA); }
static void NETWORK_IGNORE_REMOTE_WAYPOINTS() { invoke<Void>(0xE30EF2DB0A0576B4); }
static BOOL NETWORK_IS_PLAYER_ON_BLOCKLIST(Any* gamerHandle) { return invoke<BOOL>(0xF3BBE5935A04D276, gamerHandle); }
static BOOL NETWORK_SET_SCRIPT_AUTOMUTED(Any p0) { return invoke<BOOL>(0x89C96510735202D2, p0); }
static BOOL NETWORK_HAS_AUTOMUTE_OVERRIDE() { return invoke<BOOL>(0xB75567FBC57302E6); }
static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0x473AAB3F1DA97144); }
static void NETWORK_SET_LOOK_AT_TALKERS(BOOL p0) { invoke<Void>(0xB85BAB4E28676C4D, p0); }
static BOOL NETWORK_IS_PUSH_TO_TALK_ACTIVE() { return invoke<BOOL>(0x00C58A2B1D95D090); }
static BOOL NETWORK_GAMER_HAS_HEADSET(Any* gamerHandle) { return invoke<BOOL>(0xC5687BF1EB7AC190, gamerHandle); }
static BOOL NETWORK_IS_GAMER_TALKING(Any* gamerHandle) { return invoke<BOOL>(0x6E171E077926FBF7, gamerHandle); }
static BOOL NETWORK_PERMISSIONS_HAS_GAMER_RECORD(Any* gamerHandle) { return invoke<BOOL>(0xC9AFD0C222C7CA74, gamerHandle); }
static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xC9D8BDF3564325CA, gamerHandle); }
static BOOL NETWORK_CAN_TEXT_CHAT_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0x6404C6D45C897433, gamerHandle); }
static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0x73038C255039CB0A, gamerHandle); }
static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xD948F622B2C316C0, gamerHandle); }
static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0x4BD40114338C93C0, gamerHandle); }
static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0x48888A41791BFEF1, gamerHandle); }
static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* gamerHandle) { return invoke<BOOL>(0x8EF8E27D73EB5271, gamerHandle); }
static BOOL NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(Any* gamerHandle) { return invoke<BOOL>(0x585FB8B7945FC92A, gamerHandle); }
static BOOL NETWORK_CAN_PLAY_MULTIPLAYER_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0x5CE1DEFE2CD68587, gamerHandle); }
static BOOL NETWORK_CAN_GAMER_PLAY_MULTIPLAYER_WITH_ME(Any* gamerHandle) { return invoke<BOOL>(0x212E8A037E68E81C, gamerHandle); }
static BOOL NETWORK_CAN_SEND_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0x75AC04DC09B758E5, gamerHandle); }
static BOOL NETWORK_CAN_RECEIVE_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0x2879B51C18AEF948, gamerHandle); }
static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0x51DC6104DE62EE22, player); }
static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xF060DE6D44C11C50, player); }
static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0x9F1D63C7BDCDFBC5, player); }
static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0xDCEC24AE33904F8D, player); }
static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0xF3BBDC6EE4727F8B, player); }
static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0x37B71363FBA86179, player); }
static float NETWORK_GET_PLAYER_LOUDNESS(Player player) { return invoke<float>(0xF2B38A65CE1CD227, player); }
static void NETWORK_SET_TALKER_PROXIMITY(float value) { invoke<Void>(0x1D9E253CF963B125, value); }
static float NETWORK_GET_TALKER_PROXIMITY() { return invoke<float>(0xA928AA924B7E3EE2); }
static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0x4314716E4B544721, toggle); }
static void NETWORK_REMAIN_IN_GAME_CHAT(BOOL p0) { invoke<Void>(0x270D952336FB6142, p0); }
static void NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) { invoke<Void>(0xDF204CDF19B1E09E, p0); }
static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0x26E61E347F8C2FB5, toggle); }
static void NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(Any p0) { invoke<Void>(0x2918CC9062732BC6, p0); }
static BOOL NETWORK_SET_SAME_TEAM_AS_LOCAL_PLAYER(Any p0, Any p1) { return invoke<BOOL>(0xF97151502670C015, p0, p1); }
static void NETWORK_OVERRIDE_TEAM_RESTRICTIONS(int team, BOOL toggle) { invoke<Void>(0x2EBB17A226639CE0, team, toggle); }
static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0x3D203A4099538B41, toggle); }
static void NETWORK_SET_OVERRIDE_TUTORIAL_SESSION_CHAT(BOOL toggle) { invoke<Void>(0x13D997FE205FD704, toggle); }
static void NETWORK_SET_PROXIMITY_AFFECTS_TEAM(BOOL toggle) { invoke<Void>(0x725A501C189FDB29, toggle); }
static void NETWORK_SET_NO_SPECTATOR_CHAT(BOOL toggle) { invoke<Void>(0x651F95F7EDE35255, toggle); }
static void NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(BOOL toggle) { invoke<Void>(0xDB9D60DE4E690B9C, toggle); }
static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0x38C14A8B378CBD7B, player, toggle); }
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0x7453501DC1481684, player, toggle); }
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xF2EE6216DEB74ACC, toggle); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0x7EDC844C6CEBFEB8, player, toggle); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0x8D163415FF0DAFC3, toggle); }
static void NETWORK_SET_VOICE_CHANNEL(int channel) { invoke<Void>(0xD80197DCA1803BB2, channel); }
static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<Void>(0x12761B3B63D726C3); }
static void NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE(float x, float y, float z) { invoke<Void>(0x1DF2F4D8E7C2CD47, x, y, z); }
static void NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE() { invoke<Void>(0x25290320BF2D9807); }
static void NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0x6F146BCF099DE910, player); }
static void NETWORK_DISABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0x139268884A0795C9, player); }
static void NETWORK_GET_MUTE_COUNT_FOR_PLAYER(Player p0, float* p1, float* p2) { invoke<Void>(0x43D614D95E50418D, p0, p1, p2); }
static void NETWORK_SET_SPECTATOR_TO_NON_SPECTATOR_TEXT_CHAT(BOOL toggle) { invoke<Void>(0xA25C1B5218833F4E, toggle); }
static BOOL NETWORK_TEXT_CHAT_IS_TYPING() { return invoke<BOOL>(0xA43CD45F18522E3F); }
static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0x597D3F733B15F96E); }
static BOOL SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE() { return invoke<BOOL>(0xC41B72952BCE3731); }
static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0x6106E62525304863, toggle); }
static void NETWORK_SET_RICH_PRESENCE(int p0, int p1, Any p2, Any p3) { invoke<Void>(0x012C74D626CB4559, p0, p1, p2, p3); }
static void NETWORK_SET_RICH_PRESENCE_STRING(int p0, const char* textLabel) { invoke<Void>(0x5F974E79EAE32BE7, p0, textLabel); }
static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0x6145620349FC9F57); }
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_WARP(Player player, float x, float y, float z, BOOL p4, BOOL p5) { invoke<Void>(0x520FABA37BE687A7, player, x, y, z, p4, p5); }
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Player player, BOOL p1) { invoke<Void>(0xBD9FF88287E84727, player, p1); }
static void REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Entity entity, Ped ped) { invoke<Void>(0xFF71621A8661D34F, entity, ped); }
static void NETWORK_KEEP_ENTITY_COLLISION_DISABLED_AFTER_ANIM_SCENE(Any p0, Any p1) { invoke<Void>(0x69BED8420A766753, p0, p1); }
static BOOL NETWORK_IS_ANY_PLAYER_NEAR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0x0955C6F927712241, p0, p1, p2, p3, p4, p5, p6); }
static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0x7260716F2E4D7661); }
static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* gamerHandle) { return invoke<BOOL>(0xE582BF3EDDBB1A68, gamerHandle); }
static BOOL NETWORK_CLAN_PLAYER_GET_DESC(Any* clanDesc, int bufferSize, Any* gamerHandle) { return invoke<BOOL>(0xC07B1AA6155EC337, clanDesc, bufferSize, gamerHandle); }
static BOOL NETWORK_CLAN_IS_ROCKSTAR_CLAN(Any* clanDesc, int bufferSize) { return invoke<BOOL>(0xF05A19B508A1ECF0, clanDesc, bufferSize); }
static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(Any* clanDesc, int bufferSize, char* formattedTag) { invoke<Void>(0x29B9959EF2236634, clanDesc, bufferSize, formattedTag); }
static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0xAB468D6C5C0FC4AF); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* memberDesc, int p1) { return invoke<BOOL>(0xDF6959109D35BAAB, memberDesc, p1); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* gamerHandle) { return invoke<BOOL>(0x5A748C59E0807FB6, gamerHandle); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0x1B9836D5F27EFE57, p0); }
static BOOL NETWORK_CLAN_ANY_DOWNLOAD_MEMBERSHIP_PENDING() { return invoke<BOOL>(0xD0E82DF28BBDFA90); }
static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) { return invoke<BOOL>(0xBC8E0392E851E2B8, p0); }
static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) { return invoke<int>(0x6CC5D49F92B6055B, p0); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) { return invoke<BOOL>(0x0E4DC83CCE846C81, p0, p1); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP(int* p0, Any* clanMembership, int p2) { return invoke<BOOL>(0xC044D4B0F1BFE812, p0, clanMembership, p2); }
static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0xA360DA3480F0FFB9, clanDesc); }
static BOOL NETWORK_CLAN_CREWINFO_GET_STRING_VALUE(const char* animDict, const char* animName) { return invoke<BOOL>(0xB22FD03174DE49A7, animDict, animName); }
static BOOL NETWORK_CLAN_CREWINFO_GET_CREWRANKTITLE(int p0, const char* p1) { return invoke<BOOL>(0xD0C87974FE71F8C4, p0, p1); }
static BOOL NETWORK_CLAN_HAS_CREWINFO_METADATA_BEEN_RECEIVED() { return invoke<BOOL>(0x0ED0FE8A62C2CBE6); }
static BOOL NETWORK_CLAN_GET_EMBLEM_TXD_NAME(Any* netHandle, char* txdName) { return invoke<BOOL>(0xE460920F3D75C34D, netHandle, txdName); }
static BOOL NETWORK_CLAN_REQUEST_EMBLEM(Any p0) { return invoke<BOOL>(0xC8FEAF9D86CA72E6, p0); }
static BOOL NETWORK_CLAN_IS_EMBLEM_READY(Any p0, Any* p1) { return invoke<BOOL>(0xAE4A8E8C58358A87, p0, p1); }
static void NETWORK_CLAN_RELEASE_EMBLEM(Any p0) { invoke<Void>(0x84B5F8F55152B935, p0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<BOOL>(0x96B33F4FC167DB47); }
static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<Void>(0xFAE42E9AE7B80A4C); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xAC93CF5F25CF17A8, p0, p1); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<BOOL>(0x51BEADCE3428DB6F); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<BOOL>(0xCE1D2FC338EEA6AA); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0x2C34F64CC58753D7, p0, p1); }
static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { invoke<Void>(0x8FC511FC963C67E5, netId, toggle); }
static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0x3C1752E361ED8FC9, netId, toggle); }
static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0x4C48F052678AA7EF, netId, player, toggle); }
static void SET_NETWORK_ID_CAN_BE_REASSIGNED(int netId, BOOL toggle) { invoke<Void>(0xF63E001A5DB10361, netId, toggle); }
static void NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) { invoke<Void>(0xA7B045B3F131EA0F, entity, toggle); }
static void NETWORK_SET_OBJECT_CAN_BLEND_WHEN_FIXED(Object object, BOOL toggle) { invoke<Void>(0x40B679A9143C1CE0, object, toggle); }
static void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0x32C336953C18A3CE, entity, toggle); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xEC34E75BDB02A4C6, netId, p1, p2); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_HACK(int netId, BOOL p1, BOOL p2) { invoke<Void>(0x22CE5B137F505B14, netId, p1, p2); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Any p0, Any p1) { invoke<Void>(0x82EDE1ECB3BF1ADF, p0, p1); }
static void SET_NETWORK_CUTSCENE_ENTITIES(BOOL toggle) { invoke<Void>(0x6ABC02CAFE92B58C, toggle); }
static BOOL ARE_CUTSCENE_ENTITIES_NETWORKED() { return invoke<BOOL>(0x2E0CDDCB2AD38385); }
static void SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(int netId, BOOL state) { invoke<Void>(0xD8347AAB0A3EF3A0, netId, state); }
static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0xB0AB1F334666E337, netId); }
static void SET_REMOTE_PLAYER_VISIBLE_IN_CUTSCENE(Player player, BOOL locallyVisible) { invoke<Void>(0x57F9D4E3B420366E, player, locallyVisible); }
static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0x61780C0351CEFAD1, p0, p1); }
static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0x2E99083F03611030, p0); }
static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0xA6DFB7FC64F53E33, p0); }
static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0x903DAFB544C5CA0D, player, toggle); }
static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0x8DDE9E4E8A102CD9, player, toggle); }
static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0x6E2FA5434737D22F, p0); }
static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { invoke<Void>(0x091AB029AFE429F2, entity, normal, slow); }
static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state, Any p2) { invoke<Void>(0x6EF982A39E8D08FA, entity, state, p2); }
static BOOL NETWORK_IS_PLAYER_FADING(Player player) { return invoke<BOOL>(0xCF580EB76CEC15FD, player); }
static BOOL NETWORK_IS_ENTITY_FADING(Entity entity) { return invoke<BOOL>(0x6BF8FE9F26BBABDE, entity); }
static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xF4102A2D0D824EC3, player); }
static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xE6E7B0D0E904CA62, p0, p1, p2); }
static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0xA612CEAF809E9032, entity); }
static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0x158E535F1DD78CFE, entity); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0x03A6DAAE139DC9E9, netID); }
static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { invoke<Void>(0x7B95E064D91BFE49, netID, toggle); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_PLAYER(Player player) { return invoke<BOOL>(0xE29ED67EC061E70B, player); }
static void ACTIVATE_DAMAGE_TRACKER_ON_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xEB41AFC8A3FF370B, player, toggle); }
static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0x809E97B5B52A6418, p0, p1, p2, p3); }
static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0x267FC71D3F0D131A, p0, p1, p2, p3, p4); }
static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xB7F37A0A1E8A175E, amount); }
static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0x17C7D9B3979F5759, amount); }
static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0x552B3BADB43FF551, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0x99C26F3C23B37F42, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0x7E46D691B4F4B711, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0x593FDB07AF52E85D, amount); }
static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0x78D35ABAF71764AD, amount); }
static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xADCE9BCAFCB83364, amount); }
static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0x2E9F58AD6FE93DFF, amount); }
static BOOL CAN_REGISTER_MISSION_PICKUPS(int amount) { return invoke<BOOL>(0xF95A1422CB355630, amount); }
static BOOL CAN_REGISTER_MISSION_DOORS(Any p0) { return invoke<BOOL>(0x0F7BCDD970AAA9B9, p0); }
static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0x4D64DFA5BE3B2871, ped_amt, vehicle_amt, object_amt, pickup_amt); }
static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0, Any p1) { return invoke<int>(0xD1797191721E17CE, p0, p1); }
static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0, Any p1) { return invoke<int>(0xA0522491D076C1E6, p0, p1); }
static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0, Any p1) { return invoke<int>(0xF46F370442FAD8F9, p0, p1); }
static int GET_NUM_CREATED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xD1C2A76DD73A4387, p0); }
static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0x594FD1B13DCC309E, p0); }
static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0x92D994BC2EF590F9, p0); }
static void GET_RESERVED_MISSION_ENTITIES_IN_AREA(float x, float y, float z, Any p3, Any* out1, Any* out2, Any* out3) { invoke<Void>(0x1B402403FBCD3843, x, y, z, p3, out1, out2, out3); }
static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke<int>(0x2E63B6CC2AFB0B51); }
static int GET_MAX_NUM_NETWORK_PEDS() { return invoke<int>(0x76C7AF1F094891FC); }
static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke<int>(0xD544869339AEE474); }
static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke<int>(0x90F32A57D0D76E38); }
static void NETWORK_SET_OBJECT_SCOPE_DISTANCE(Object object, float range) { invoke<Void>(0x9059372A0C629EB6, object, range); }
static void NETWORK_ALLOW_CLONING_WHILE_IN_TUTORIAL(Any p0, Any p1) { invoke<Void>(0x7280E2724C43179B, p0, p1); }
static void NETWORK_SET_TASK_CUTSCENE_INSCOPE_MULTIPLER(Any p0) { invoke<Void>(0x44EF980B0D19828F, p0); }
static int GET_NETWORK_TIME() { return invoke<int>(0x7E3F74F641EE6B27); }
static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0x0728E77B2BF91D54); }
static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0x8FE5240A69F17DF8); }
static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xAD5B43C219C4CB92, timeA, timeB); }
static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xC9FA0059132D5731, timeA, timeB); }
static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xDBA141080166EAA2, timeA, timeB); }
static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xCFF17EF1F3F6FF43, timeA, timeB); }
static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0x775142054EC39277, timeA, timeB); }
static const char* GET_TIME_AS_STRING(int time) { return invoke<const char*>(0xF55707B152A1A749, time); }
static const char* GET_CLOUD_TIME_AS_STRING() { return invoke<const char*>(0x9D75306730D4D730); }
static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0x39D1D336459711BE); }
static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { invoke<Void>(0xB2D05034AF8E75CF, posixTime, timeStructure); }
static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0xF11FEC6A04FD7226, toggle, playerPed); }
static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) { invoke<Void>(0x522EF6D7B4059F2C, toggle, playerPed, p2); }
static void NETWORK_SET_IN_FREE_CAM_MODE(BOOL toggle) { invoke<Void>(0x0A83667A5D36A4FF, toggle); }
static void NETWORK_SET_ANTAGONISTIC_TO_PLAYER(BOOL toggle, Player player) { invoke<Void>(0x04D8F5CAFCB48E24, toggle, player); }
static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0xAD15761928FCF79C); }
static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0x42B4970D598C8A72, p0, p1); }
static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0x0721B5D4CF3ACD02); }
static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xD65DFBCD23E76428, player); }
static void NETWORK_HIDE_PROJECTILE_IN_CUTSCENE() { invoke<Void>(0xCBF07B57F6F01E05); }
static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time, Any p2, Any p3) { invoke<Void>(0x48E5EEFE68D01C56, netId, time, p2, p3); }
static BOOL IS_NETWORK_VEHICLE_RUNNING_RESPOT_TIMER(int networkID) { return invoke<BOOL>(0x353A36B4FAA1F9D2, networkID); }
static void SET_NETWORK_VEHICLE_AS_GHOST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x67697883F8C7E424, vehicle, toggle); }
static void SET_NETWORK_VEHICLE_MAX_POSITION_DELTA_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x8526C06631BA8A87, vehicle, multiplier); }
static void SET_NETWORK_ENABLE_HIGH_SPEED_EDGE_FALL_DETECTION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8810DE004A94F18B, vehicle, toggle); }
static void SET_LOCAL_PLAYER_AS_GHOST(BOOL toggle, BOOL p1) { invoke<Void>(0x3DDE6E86B8024EEE, toggle, p1); }
static BOOL IS_ENTITY_A_GHOST(Entity entity) { return invoke<BOOL>(0xF073EDDFCBA082E6, entity); }
static void SET_NON_PARTICIPANTS_OF_THIS_SCRIPT_AS_GHOSTS(BOOL p0) { invoke<Void>(0x3EE3EB731E022D41, p0); }
static void SET_REMOTE_PLAYER_AS_GHOST(Player player, BOOL p1) { invoke<Void>(0xBF798C4E54C2B4E1, player, p1); }
static void SET_GHOST_ALPHA(int alpha) { invoke<Void>(0x4F1FE21A5BE23982, alpha); }
static void RESET_GHOST_ALPHA() { invoke<Void>(0x1D6800242F1593FB); }
static void SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(Entity entity, BOOL toggle) { invoke<Void>(0x52C980E21BCCC469, entity, toggle); }
static void SET_INVERT_GHOSTING(BOOL p0) { invoke<Void>(0xC21CAB69B42AB890, p0); }
static BOOL IS_ENTITY_IN_GHOST_COLLISION(Entity entity) { return invoke<BOOL>(0x73DB31FD24210A89, entity); }
static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0x5F27287D37B4D40D, toggle); }
static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int rotationOrder, BOOL useOcclusionPortal, BOOL looped, float p9, float animTime, float p11) { return invoke<int>(0xBC5D9A293974F095, x, y, z, xRot, yRot, zRot, rotationOrder, useOcclusionPortal, looped, p9, animTime, p11); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0x0B94AB707B44E754, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE_WITH_IK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xB81F209A2A150B89, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0xDEE175A01A05A2F7, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); }
static void NETWORK_ADD_MAP_ENTITY_TO_SYNCHRONISED_SCENE(int netScene, Hash modelHash, float x, float y, float z, float p5, const char* p6, float p7, float p8, int flags) { invoke<Void>(0xA78D3770EC931263, netScene, modelHash, x, y, z, p5, p6, p7, p8, flags); }
static void NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(int netScene, const char* animDict, const char* animName) { invoke<Void>(0x9E6111F1B7E0986E, netScene, animDict, animName); }
static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0x5B2134752B0D9E36, netScene, entity, bone); }
static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xE7101255AD6F1952, netScene); }
static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xF2E51EC84D76A2B6, netScene); }
static int NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(int netId) { return invoke<int>(0x643DC062EE904FCA, netId); }
static void NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene) { invoke<Void>(0xB505DDE34E5179B8, netScene); }
static void NETWORK_ALLOW_REMOTE_SYNCED_SCENE_LOCAL_PLAYER_REQUESTS(Any p0) { invoke<Void>(0x5B051FA78EA5C170, p0); }
static BOOL NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(int p0, Any p1) { return invoke<BOOL>(0x644DD5C4A28FAEF3, p0, p1); }
static BOOL NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(Player player, float x, float y, float z, float radius, float p5, float p6, float p7, int flags) { return invoke<BOOL>(0x4249B4032FDD750E, player, x, y, z, radius, p5, p6, p7, flags); }
static BOOL NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(Player player, float x1, float y1, float z1, float x2, float y2, float z2, float width, float p8, float p9, float p10, int flags) { return invoke<BOOL>(0x243CFDECC076762E, player, x1, y1, z1, x2, y2, z2, width, p8, p9, p10, flags); }
static int NETWORK_QUERY_RESPAWN_RESULTS(Any* p0) { return invoke<int>(0xC86D271C3C15DE36, p0); }
static void NETWORK_CANCEL_RESPAWN_SEARCH() { invoke<Void>(0xAE83F6C70E4B78E3); }
static void NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3* coordinates, float* heading) { invoke<Void>(0x308E9BE8B02DA53E, randomInt, coordinates, heading); }
static int NETWORK_GET_RESPAWN_RESULT_FLAGS(int p0) { return invoke<int>(0xD47DD48CBAF4A6B5, p0); }
static void NETWORK_START_SOLO_TUTORIAL_SESSION() { invoke<Void>(0xD2788BE0DF3E0C9B); }
static void NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(int teamId, int instanceId) { invoke<Void>(0x5147DD7078544AD1, teamId, instanceId); }
static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0x5A80107016E75ABC); }
static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0xF859473E4AD09F30); }
static BOOL NETWORK_WAITING_POP_CLEAR_TUTORIAL_SESSION() { return invoke<BOOL>(0xE794EA31F030A1D1); }
static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0x6457A0C458E98FFB); }
static int NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Player player) { return invoke<int>(0x69617275A0B1B72D, player); }
static BOOL NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player player, int index) { return invoke<BOOL>(0xDFAE61B1AEF262C2, player, index); }
static void NETWORK_BLOCK_PROXY_MIGRATION_BETWEEN_TUTORIAL_SESSIONS(Any p0) { invoke<Void>(0xD91B1F4829299334, p0); }
static void NETWORK_CONCEAL_PLAYER(Player player, BOOL toggle, BOOL p2) { invoke<Void>(0xA1D021917F4E3FBD, player, toggle, p2); }
static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0xF40724C1181481F4, player); }
static void NETWORK_CONCEAL_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0x63FC4C73448FCEA2, entity, toggle); }
static BOOL NETWORK_IS_ENTITY_CONCEALED(Entity entity) { return invoke<BOOL>(0xFFE66020A6507F47, entity); }
static void NETWORK_OVERRIDE_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xAFD3BC0F6EBB5474, hours, minutes, seconds); }
static void NETWORK_OVERRIDE_CLOCK_RATE(int ms) { invoke<Void>(0x2B7C09622E980A72, ms); }
static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0x99599AE2C0FDB2A1); }
static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0x75193D36C5FA4721); }
static int NETWORK_ADD_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0x132F0517E3CE528A, x1, y1, z1, x2, y2, z2); }
static int NETWORK_ADD_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0x3E1222B4C1E92A7A, x1, y1, z1, x2, y2, z2, width); }
static int NETWORK_ADD_CLIENT_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE5870024C848E72D, x1, y1, z1, x2, y2, z2); }
static int NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<int>(0x48FE6369FE249FD2, x1, y1, z1, x2, y2, z2, radius); }
static BOOL NETWORK_REMOVE_ENTITY_AREA(int areaHandle) { return invoke<BOOL>(0x0C2A05549FF0EB55, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_DOES_EXIST(int areaHandle) { return invoke<BOOL>(0x8256312AC2E5471D, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(int areaHandle) { return invoke<BOOL>(0x31B34E18DE46CC94, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_IS_OCCUPIED(int areaHandle) { return invoke<BOOL>(0xF8EEEE15D7483100, areaHandle); }
static void NETWORK_USE_HIGH_PRECISION_BLENDING(int netID, BOOL toggle) { invoke<Void>(0x6CBA9D07DDF3A4F4, netID, toggle); }
static void NETWORK_SET_CUSTOM_ARENA_BALL_PARAMS(int netId) { invoke<Void>(0xDB3FE51DA96E8CCA, netId); }
static void NETWORK_ENTITY_USE_HIGH_PRECISION_ROTATION(int netId, BOOL toggle) { invoke<Void>(0xB0D23E19A23DCAAF, netId, toggle); }
static BOOL NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<BOOL>(0x099F525995A2FD5E); }
static BOOL NETWORK_IS_CLOUD_BACKGROUND_SCRIPT_REQUEST_PENDING() { return invoke<BOOL>(0x3B952A9A844B63C6); }
static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0xC192DFBBB8B81D26); }
static BOOL NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return invoke<BOOL>(0x1DD7AFEBE9FED010); }
static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke<int>(0x0188C088397FF5B1); }
static BOOL NETWORK_DOES_TUNABLE_EXIST(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0x1E8E83ADEA1A71BE, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_INT(const char* tunableContext, const char* tunableName, int* value) { return invoke<BOOL>(0xBB4032866B475D96, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(const char* tunableContext, const char* tunableName, float* value) { return invoke<BOOL>(0xC244AC9DF2DBD29F, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0x3DB3B2BA3A150EF2, tunableContext, tunableName); }
static BOOL NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xAFEA31CC8C88FC36, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_MODIFICATION_DETECTION_CLEAR() { return invoke<BOOL>(0x18CACC03B0B46CA9); }
static BOOL NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0x3924757A6ED5FEDB, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_INT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, int* value) { return invoke<BOOL>(0xDF6F5F7DECDD6CA3, contextHash, nameHash, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0xA484A1273D8798FF, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, float* value) { return invoke<BOOL>(0xA517819975B6DC39, contextHash, nameHash, value); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xBFCA4F7F15FD06CC, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, BOOL* value) { return invoke<BOOL>(0xC9DC4A70BE727818, contextHash, nameHash, value); }
static BOOL NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0x0752721B56D5DBA3, tunableContext, tunableName, defaultValue); }
static int NETWORK_GET_CONTENT_MODIFIER_LIST_ID(Hash contentHash) { return invoke<int>(0xA71D65C4998B3DF8, contentHash); }
static int NETWORK_GET_BONE_ID_OF_FATAL_HIT() { return invoke<int>(0xDEBA59FD42C0BAEF); }
static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xEC550B2DD0955D8D); }
static int NETWORK_GET_NUMBER_BODY_TRACKER_HITS() { return invoke<int>(0xBA8E86ED610D8A3C); }
static BOOL NETWORK_HAS_BONE_BEEN_HIT_BY_KILLER(int boneIndex) { return invoke<BOOL>(0x4B8C68B93333048F, boneIndex); }
static BOOL NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(Ped ped, Player player) { return invoke<BOOL>(0x926910F3168C206A, ped, player); }
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(Entity entity, BOOL toggle) { invoke<Void>(0x2D8C146ED8EFF79D, entity, toggle); }
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_WEAPON_HASH(Entity entity, BOOL toggle) { invoke<Void>(0x64390744D38F9167, entity, toggle); }
static void NETWORK_SET_NO_LONGER_NEEDED(Entity entity, BOOL toggle) { invoke<Void>(0x246563FFA6EA9A50, entity, toggle); }
static BOOL NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { return invoke<BOOL>(0xC392361DCE030EF4, vehicle, isAudible, isInvisible, netId); }
static void NETWORK_EXPLODE_HELI(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { invoke<Void>(0xB5BD605FB63CDBE6, vehicle, isAudible, isInvisible, netId); }
static void NETWORK_USE_LOGARITHMIC_BLENDING_THIS_FRAME(Entity entity) { invoke<Void>(0x6934C0E4AC296466, entity); }
static void NETWORK_OVERRIDE_COORDS_AND_HEADING(Entity entity, float x, float y, float z, float heading) { invoke<Void>(0x819DFDEDB0378F60, entity, x, y, z, heading); }
static void NETWORK_ENABLE_EXTRA_VEHICLE_ORIENTATION_BLEND_CHECKS(int netId, BOOL toggle) { invoke<Void>(0xFA3B6F3FE5E66382, netId, toggle); }
static void NETWORK_DISABLE_PROXIMITY_MIGRATION(int netID) { invoke<Void>(0xF35461D41398F92C, netID); }
static void NETWORK_SET_PROPERTY_ID(int id) { invoke<Void>(0x94796772E71D5123, id); }
static void NETWORK_CLEAR_PROPERTY_ID() { invoke<Void>(0x5F1F0F7CE82B92D5); }
static void NETWORK_SET_PLAYER_MENTAL_STATE(int p0) { invoke<Void>(0x8060309EC15DED26, p0); }
static void NETWORK_SET_MINIMUM_RANK_FOR_MISSION(BOOL p0) { invoke<Void>(0x0A2A73F751726916, p0); }
static void NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA() { invoke<Void>(0x98B8C1C5D9674E49); }
static BOOL NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(Player player) { return invoke<BOOL>(0x5B5089244DF8EA05, player); }
static BOOL NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(Ped ped, Player player) { return invoke<BOOL>(0x7241E3AD10840886, ped, player); }
static int GET_NUM_COMMERCE_ITEMS() { return invoke<int>(0x21A5D8255DE6E429); }
static BOOL IS_COMMERCE_DATA_VALID() { return invoke<BOOL>(0xD3B5B2F30382DFA8); }
static void TRIGGER_COMMERCE_DATA_FETCH(Any p0) { invoke<Void>(0xB926A96763FB9843, p0); }
static BOOL IS_COMMERCE_DATA_FETCH_IN_PROGRESS() { return invoke<BOOL>(0x9184B1F53F02EB67); }
static const char* GET_COMMERCE_ITEM_ID(int index) { return invoke<const char*>(0x57C238FEAF0677E0, index); }
static const char* GET_COMMERCE_ITEM_NAME(int index) { return invoke<const char*>(0xDD21D41AD9E54549, index); }
static const char* GET_COMMERCE_PRODUCT_PRICE(int index) { return invoke<const char*>(0x3682CE8F11C793D4, index); }
static int GET_COMMERCE_ITEM_NUM_CATS(int index) { return invoke<int>(0xA25A07F63AC497BB, index); }
static const char* GET_COMMERCE_ITEM_CAT(int index, int index2) { return invoke<const char*>(0x8553FB74D3BF41C8, index, index2); }
static void OPEN_COMMERCE_STORE(const char* p0, const char* p1, int p2) { invoke<Void>(0xD1A4BF0F54E08B34, p0, p1, p2); }
static BOOL IS_COMMERCE_STORE_OPEN() { return invoke<BOOL>(0x2B8BAF9BA2A3D36B); }
static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0x56B77EAF3DD4C954, toggle); }
static BOOL REQUEST_COMMERCE_ITEM_IMAGE(int index) { return invoke<BOOL>(0xBF5A33B684B68C2B, index); }
static void RELEASE_ALL_COMMERCE_ITEM_IMAGES() { invoke<Void>(0x687DE1873713BF49); }
static const char* GET_COMMERCE_ITEM_TEXTURENAME(int index) { return invoke<const char*>(0x4ABEBEE42452BF31, index); }
static BOOL IS_STORE_AVAILABLE_TO_USER() { return invoke<BOOL>(0xD553FC562BDEBE1E); }
static void DELAY_MP_STORE_OPEN() { invoke<Void>(0xE50095A9B205820E); }
static void RESET_STORE_NETWORK_GAME_TRACKING() { invoke<Void>(0x2A878DDB1FE0F636); }
static BOOL IS_USER_OLD_ENOUGH_TO_ACCESS_STORE() { return invoke<BOOL>(0xB83285E02B6331A7); }
static void SET_LAST_VIEWED_SHOP_ITEM(Hash p0, int p1, Hash p2) { invoke<Void>(0x2ECA4EE3F57B8468, p0, p1, p2); }
static int GET_USER_PREMIUM_ACCESS() { return invoke<int>(0xEF05628918C6842D); }
static int GET_USER_STARTER_ACCESS() { return invoke<int>(0xB83FBB552E8DBF61); }
static int CLOUD_DELETE_MEMBER_FILE(const char* p0) { return invoke<int>(0x595BC3CB7A842B33, p0); }
static BOOL CLOUD_HAS_REQUEST_COMPLETED(int requestId) { return invoke<BOOL>(0x0F61191B654874D0, requestId); }
static BOOL CLOUD_DID_REQUEST_SUCCEED(int requestId) { return invoke<BOOL>(0x7BAB29B9355651B7, requestId); }
static void CLOUD_CHECK_AVAILABILITY() { invoke<Void>(0x8D99EE58B1FB08FF); }
static BOOL CLOUD_IS_CHECKING_AVAILABILITY() { return invoke<BOOL>(0x722F601C8C71A90A); }
static BOOL CLOUD_GET_AVAILABILITY_CHECK_RESULT() { return invoke<BOOL>(0x194647F86ACF56D4); }
static int GET_CONTENT_TO_LOAD_TYPE() { return invoke<int>(0xC10C1DEAEBB5849E); }
static BOOL GET_IS_LAUNCH_FROM_LIVE_AREA() { return invoke<BOOL>(0x8071F22E56E8A70F); }
static BOOL GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() { return invoke<BOOL>(0x144FBCDDF1717161); }
static void CLEAR_SERVICE_EVENT_ARGUMENTS() { invoke<Void>(0x72CF8D8C29D8D5BD); }
static BOOL UGC_COPY_CONTENT(Any* p0, Any* p1) { return invoke<BOOL>(0x150E13CB4B04648D, p0, p1); }
static BOOL UGC_IS_CREATING() { return invoke<BOOL>(0xFA49944CF453C338); }
static BOOL UGC_HAS_CREATE_FINISHED() { return invoke<BOOL>(0x840A709B5493C918); }
static BOOL UGC_DID_CREATE_SUCCEED() { return invoke<BOOL>(0x368A167655B5B44A); }
static int UGC_GET_CREATE_RESULT() { return invoke<int>(0xE2BDF7F96F1777EA); }
static const char* UGC_GET_CREATE_CONTENT_ID() { return invoke<const char*>(0x7C1C1B7F72ACD298); }
static void UGC_CLEAR_CREATE_RESULT() { invoke<Void>(0x082134CFF7DD01AA); }
static BOOL UGC_QUERY_MY_CONTENT(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0x3F784BD38F0D94BA, p0, p1, p2, p3, p4, p5); }
static BOOL UGC_QUERY_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any p4, BOOL p5) { return invoke<BOOL>(0x6D52735FB5FD59E8, p0, p1, p2, p3, p4, p5); }
static BOOL UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xA5D1672BB8378B6A, contentId, latestVersion, contentTypeName); }
static BOOL UGC_QUERY_BY_CONTENT_IDS(Any* data, int count, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0x4516244647CDE56D, data, count, latestVersion, contentTypeName); }
static BOOL UGC_QUERY_MOST_RECENTLY_CREATED_CONTENT(int offset, int count, const char* contentTypeName, int p3) { return invoke<BOOL>(0xA598E27B609E1B5E, offset, count, contentTypeName, p3); }
static BOOL UGC_GET_BOOKMARKED_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0x30385B4D972827A5, p0, p1, p2, p3); }
static BOOL UGC_GET_MY_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0x4103A58ABA168EFB, p0, p1, p2, p3); }
static BOOL UGC_GET_FRIEND_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xAE7CAF61C281EAB2, p0, p1, p2, p3); }
static BOOL UGC_GET_CREW_CONTENT(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0x02D3878E122FB9CD, p0, p1, p2, p3, p4); }
static BOOL UGC_GET_GET_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xF9618670CE65580B, p0, p1, p2, p3, p4); }
static BOOL UGC_GET_GET_BY_CONTENT_ID(const char* contentId, const char* contentTypeName) { return invoke<BOOL>(0xA46905C7B738C729, contentId, contentTypeName); }
static BOOL UGC_GET_GET_BY_CONTENT_IDS(Any* data, int dataCount, const char* contentTypeName) { return invoke<BOOL>(0x423AC9BED82065D0, data, dataCount, contentTypeName); }
static BOOL UGC_GET_MOST_RECENTLY_CREATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x3A9A4663D37D7390, p0, p1, p2, p3); }
static BOOL UGC_GET_MOST_RECENTLY_PLAYED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0x0E3101BD119D7E62, p0, p1, p2, p3); }
static BOOL UGC_GET_TOP_RATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xAD20B85AA9EC7F0B, p0, p1, p2, p3); }
static void UGC_CANCEL_QUERY() { invoke<Void>(0xF44BFA38C25D7F65); }
static BOOL UGC_IS_GETTING() { return invoke<BOOL>(0x3076B63C4BC614DC); }
static BOOL UGC_HAS_GET_FINISHED() { return invoke<BOOL>(0xD1377E5E950FBDDA); }
static BOOL UGC_DID_GET_SUCCEED() { return invoke<BOOL>(0xB615B19E3B1CB800); }
static BOOL UGC_WAS_QUERY_FORCE_CANCELLED() { return invoke<BOOL>(0xCFB101E40FBA6A5A); }
static int UGC_GET_QUERY_RESULT() { return invoke<int>(0x1DC804A2468D29A2); }
static int UGC_GET_CONTENT_NUM() { return invoke<int>(0xE5CECFB837D1F1B8); }
static int UGC_GET_CONTENT_TOTAL() { return invoke<int>(0x1EE4CB0B5FD3927E); }
static Hash UGC_GET_CONTENT_HASH() { return invoke<Hash>(0x7BC6776F828F022C); }
static void UGC_CLEAR_QUERY_RESULTS() { invoke<Void>(0x7D7DC90EB1D8C8B4); }
static const char* UGC_GET_CONTENT_USER_ID(int p0) { return invoke<const char*>(0x4A5B5E00528FADB4, p0); }
static BOOL UGC_GET_CONTENT_CREATOR_GAMER_HANDLE(int p0, Any* p1) { return invoke<BOOL>(0x2461B1057D922D96, p0, p1); }
static BOOL UGC_GET_CONTENT_CREATED_BY_LOCAL_PLAYER(Any p0) { return invoke<BOOL>(0xB678B17485F07C58, p0); }
static const char* UGC_GET_CONTENT_USER_NAME(Any p0) { return invoke<const char*>(0xA97D041A0700AC71, p0); }
static BOOL UGC_GET_CONTENT_IS_USING_SC_NICKNAME(Any p0) { return invoke<BOOL>(0xD497BCA3B9495BB9, p0); }
static int UGC_GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0x9FFE2545E71B490E, p0); }
static const char* UGC_GET_CONTENT_ID(int p0) { return invoke<const char*>(0x7768894B5FCDF25F, p0); }
static const char* UGC_GET_ROOT_CONTENT_ID(int p0) { return invoke<const char*>(0x7BA63240A50FC6C7, p0); }
static const char* UGC_GET_CONTENT_NAME(Any p0) { return invoke<const char*>(0xB3C23ED232D01319, p0); }
static int UGC_GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0x8715A76F8294FEE0, p0); }
static const char* UGC_GET_CONTENT_PATH(int p0, int p1) { return invoke<const char*>(0xEA3E22389A733263, p0, p1); }
static void UGC_GET_CONTENT_UPDATED_DATE(Any p0, Any* p1) { invoke<Void>(0x86D971EBB6E0F0AC, p0, p1); }
static int UGC_GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<int>(0xB010444AA0CE4D66, p0, p1); }
static BOOL UGC_GET_CONTENT_HAS_LO_RES_PHOTO(int p0) { return invoke<BOOL>(0xFFEDCFBF2A7D07DE, p0); }
static BOOL UGC_GET_CONTENT_HAS_HI_RES_PHOTO(int p0) { return invoke<BOOL>(0xA049DE72EC734E79, p0); }
static int UGC_GET_CONTENT_LANGUAGE(Any p0) { return invoke<int>(0xA2CE098EA47DF97D, p0); }
static BOOL UGC_GET_CONTENT_IS_PUBLISHED(Any p0) { return invoke<BOOL>(0xDECDB93AECF4571C, p0); }
static BOOL UGC_GET_CONTENT_IS_VERIFIED(Any p0) { return invoke<BOOL>(0xE72957406FBFB362, p0); }
static float UGC_GET_CONTENT_RATING(Any p0, Any p1) { return invoke<float>(0xCF073B4FF8828B7E, p0, p1); }
static int UGC_GET_CONTENT_RATING_COUNT(Any p0, Any p1) { return invoke<int>(0x909B2EE8AF324A1D, p0, p1); }
static int UGC_GET_CONTENT_RATING_POSITIVE_COUNT(Any p0, Any p1) { return invoke<int>(0x7EB4730FA964B592, p0, p1); }
static int UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xAA565F77BB458AFD, p0, p1); }
static BOOL UGC_GET_CONTENT_HAS_PLAYER_RECORD(Any p0) { return invoke<BOOL>(0x821D66CE02BC23F8, p0); }
static BOOL UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(Any p0) { return invoke<BOOL>(0x0DA829364F715C68, p0); }
static int UGC_REQUEST_CONTENT_DATA_FROM_INDEX(int p0, int p1) { return invoke<int>(0x171DF6A0C07FB3DC, p0, p1); }
static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int p2, int p3, int p4) { return invoke<int>(0x7FD2990AF016795E, contentTypeName, contentId, p2, p3, p4); }
static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0x52DCAA722383A060, p0); }
static BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Any p0) { return invoke<BOOL>(0x66CB39FD84C5ED21, p0); }
static BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0x28F3FD2263FCE777, p0); }
static BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0x16C0B173B472AF71, p0); }
static const char* UGC_GET_CACHED_DESCRIPTION(Any p0, Any p1) { return invoke<const char*>(0x1B4FD4A821EC277E, p0, p1); }
static BOOL UGC_RELEASE_CACHED_DESCRIPTION(Any p0) { return invoke<BOOL>(0x2D133345AB736461, p0); }
static void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS() { invoke<Void>(0x67BEDA5A8CD7FF28); }
static BOOL UGC_PUBLISH(const char* contentId, const char* baseContentId, const char* contentTypeName) { return invoke<BOOL>(0x29D58EEB6D24D5FB, contentId, baseContentId, contentTypeName); }
static BOOL UGC_SET_BOOKMARKED(const char* contentId, BOOL bookmarked, const char* contentTypeName) { return invoke<BOOL>(0xE3E138A155ACC0B9, contentId, bookmarked, contentTypeName); }
static BOOL UGC_SET_DELETED(Any* p0, BOOL p1, const char* p2) { return invoke<BOOL>(0x8FA5AF26CEA0CF0C, p0, p1, p2); }
static BOOL UGC_IS_MODIFYING() { return invoke<BOOL>(0x2DD9F4C2D128C690); }
static BOOL UGC_HAS_MODIFY_FINISHED() { return invoke<BOOL>(0xBE4DBB4B94FDD19D); }
static BOOL UGC_DID_MODIFY_SUCCEED() { return invoke<BOOL>(0x7911A5D34DD65F5B); }
static int UGC_GET_MODIFY_RESULT() { return invoke<int>(0xBA339BF67EA1C876); }
static void UGC_CLEAR_MODIFY_RESULT() { invoke<Void>(0xB7CBD1698172CFDD); }
static BOOL UGC_GET_CREATORS_BY_USER_ID(Any* p0, Any* p1) { return invoke<BOOL>(0x2D6CAE334C3034FD, p0, p1); }
static BOOL UGC_HAS_QUERY_CREATORS_FINISHED() { return invoke<BOOL>(0x02D8B5E2968C2B8C); }
static BOOL UGC_DID_QUERY_CREATORS_SUCCEED() { return invoke<BOOL>(0xA447FE863BC5F3D0); }
static int UGC_GET_CREATOR_NUM() { return invoke<int>(0x403513BADB247F14); }
static BOOL UGC_LOAD_OFFLINE_QUERY(Any p0) { return invoke<BOOL>(0x5177CA1D97988B5C, p0); }
static void UGC_CLEAR_OFFLINE_QUERY() { invoke<Void>(0x2864B7211C443DA5); }
static void UGC_SET_QUERY_DATA_FROM_OFFLINE(BOOL p0) { invoke<Void>(0xB79F7D662E0B7885, p0); }
static void UGC_SET_USING_OFFLINE_CONTENT(BOOL p0) { invoke<Void>(0x626E6E90E38C6EF7, p0); }
static BOOL UGC_IS_LANGUAGE_SUPPORTED(Any p0) { return invoke<BOOL>(0xFD898AF12570EEB6, p0); }
static BOOL FACEBOOK_POST_COMPLETED_HEIST(const char* heistName, int cashEarned, int xpEarned) { return invoke<BOOL>(0xA1EF53B581B6B4A9, heistName, cashEarned, xpEarned); }
static BOOL FACEBOOK_POST_CREATE_CHARACTER() { return invoke<BOOL>(0x5506E003A95C6373); }
static BOOL FACEBOOK_POST_COMPLETED_MILESTONE(int milestoneId) { return invoke<BOOL>(0xAE566521443DBC23, milestoneId); }
static BOOL FACEBOOK_HAS_POST_COMPLETED() { return invoke<BOOL>(0x23ECFBF953F64001); }
static BOOL FACEBOOK_DID_POST_SUCCEED() { return invoke<BOOL>(0x220ABB0D55961BE1); }
static BOOL FACEBOOK_CAN_POST_TO_FACEBOOK() { return invoke<BOOL>(0x6D230D68A9AD1134); }
static int TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, const char* filePath, const char* name, BOOL p3) { return invoke<int>(0x1905CE168C7AF873, gamerHandle, filePath, name, p3); }
static int TITLE_TEXTURE_DOWNLOAD_REQUEST(const char* filePath, const char* name, BOOL p2) { return invoke<int>(0x30B65E94C2188C92, filePath, name, p2); }
static int UGC_TEXTURE_DOWNLOAD_REQUEST(const char* p0, int p1, int p2, int p3, const char* p4, BOOL p5) { return invoke<int>(0x03A1BB16285A7B9C, p0, p1, p2, p3, p4, p5); }
static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0x988DAD0F0370C94E, p0); }
static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0x26EA30089CAD115D, p0); }
static const char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<const char*>(0x6DE51300ACD3E3F3, p0); }
static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int p0) { return invoke<int>(0x15C0F0A696091ACB, p0); }
static BOOL NETWORK_CHECK_ROS_LINK_WENTDOWN_NOT_NET() { return invoke<BOOL>(0x3CF1DEF284B9B6C0); }
static BOOL NETWORK_SHOULD_SHOW_STRICT_NAT_WARNING() { return invoke<BOOL>(0x17739C59E555C46D); }
static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0x6B47B305B6557EF9); }
static BOOL NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() { return invoke<BOOL>(0x62B038F95CEA3FE9); }
static BOOL NETWORK_HAVE_ROS_SOCIAL_CLUB_PRIV() { return invoke<BOOL>(0xE67B481B4EC10A14); }
static BOOL NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke<BOOL>(0xF4260C5C733DA1CB); }
static BOOL NETWORK_HAVE_ROS_CREATE_TICKET_PRIV() { return invoke<BOOL>(0xC869C5AD1CA63C58); }
static BOOL NETWORK_HAVE_ROS_MULTIPLAYER_PRIV() { return invoke<BOOL>(0x938C5858FA4618E2); }
static BOOL NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV() { return invoke<BOOL>(0xAE6B753124318E29); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0x428539069343758E, index); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_END_DATE(int privilege, int* banType, Any* timeData) { return invoke<BOOL>(0x20DACABA7023B608, privilege, banType, timeData); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN() { return invoke<BOOL>(0x5BC93955B6EEBC0B); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT() { return invoke<BOOL>(0x753B42F8D561B8E2); }
static int NETWORK_START_COMMUNICATION_PERMISSIONS_CHECK(Any p0) { return invoke<int>(0x9E0B6B766CF810E5, p0); }
static int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(Any* netHandle) { return invoke<int>(0x12AEE383533D0E70, netHandle); }
static void NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE() { invoke<Void>(0xDC5F81D7F618A8A6); }
static void NETWORK_SKIP_RADIO_RESET_NEXT_OPEN() { invoke<Void>(0x7EF7ABCDDEEEB7C0); }
static BOOL NETWORK_SKIP_RADIO_WARNING() { return invoke<BOOL>(0xEFF4479E2B0D2080); }
static void NETWORK_FORCE_LOCAL_PLAYER_SCAR_SYNC() { invoke<Void>(0xBF561BB44F8AFA5C); }
static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(BOOL toggle) { invoke<Void>(0xD8D822FF4C3DCD7D, toggle); }
static void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity entity, BOOL toggle) { invoke<Void>(0x8D2010DF3E481626, entity, toggle); }
static void NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player player) { invoke<Void>(0x230CD2039E115591, player); }
static void NETWORK_SHOW_PSN_UGC_RESTRICTION() { invoke<Void>(0xC7C2484FD7A1279A); }
static BOOL NETWORK_IS_TITLE_UPDATE_REQUIRED() { return invoke<BOOL>(0x6026EB0A2A2F509E); }
static void NETWORK_QUIT_MP_TO_DESKTOP() { invoke<Void>(0x1BA57F70810F53CD); }
static BOOL NETWORK_IS_CONNECTED_VIA_RELAY(Player player) { return invoke<BOOL>(0x6C15571532CF7F95, player); }
static float NETWORK_GET_AVERAGE_LATENCY(Player player) { return invoke<float>(0xD29CB5E83871293B, player); }
static float NETWORK_GET_AVERAGE_PING(Player player) { return invoke<float>(0x20EDD3199D02CB60, player); }
static float NETWORK_GET_AVERAGE_PACKET_LOSS(Player player) { return invoke<float>(0xA26711392EBF5371, player); }
static int NETWORK_GET_NUM_UNACKED_RELIABLES(Player player) { return invoke<int>(0xC424F771EFDD2A58, player); }
static int NETWORK_GET_UNRELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0x7D17572D1EE9D0A9, player); }
static int NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0x2031266910F9D195, player); }
static void NETWORK_REPORT_CODE_TAMPER() { invoke<Void>(0x5CE41A29691C7614); }
static Vector3 NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<Vector3>(0x4D867CF71882EEA6, entity); }
static Vector3 NETWORK_GET_LAST_PLAYER_POS_RECEIVED_OVER_NETWORK(Player player) { return invoke<Vector3>(0x65D66F9646758265, player); }
static Vector3 NETWORK_GET_LAST_VEL_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<Vector3>(0x21D6FED3EFEC33E5, entity); }
static Vector3 NETWORK_GET_PREDICTED_VELOCITY(Entity entity) { return invoke<Vector3>(0xD23AF6BA9E38FE33, entity); }
static void NETWORK_DUMP_NET_IF_CONFIG() { invoke<Void>(0x3A5F05A23D5B4F88); }
static void NETWORK_GET_SIGNALLING_INFO(Any* p0) { invoke<Void>(0xDC05070D5646C09C, p0); }
static void NETWORK_GET_NET_STATISTICS_INFO(Any* p0) { invoke<Void>(0xDF399EF490797927, p0); }
static int NETWORK_GET_PLAYER_ACCOUNT_ID(Player player) { return invoke<int>(0x17E5F27FA417E82E, player); }
static void NETWORK_UGC_NAV(Any p0, Any p1) { invoke<Void>(0x3E1F527308A7BBC1, p0, p1); }
static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0x4E55EAB577C13329, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); }
static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0x43AFC452F25F3A2F, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); }
static void DELETE_OBJECT(Object* object) { invoke<Void>(0x51C8BEA2005931AB, object); }
static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0x8225BA395C3FC89D, object); }
static BOOL PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(Object object) { return invoke<BOOL>(0x711CB952E5BE087E, object); }
static BOOL ROTATE_OBJECT(Object object, float p1, float p2, BOOL p3) { return invoke<BOOL>(0x6ADCD027CA259B43, object, p1, p2, p3); }
static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0x51DACC000DE4DECC, object, toX, toY, toZ, speedX, speedY, speedZ, collision); }
static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0x918FE23DCE5B8322, object, targettable); }
static void SET_OBJECT_FORCE_VEHICLES_TO_AVOID(Object object, BOOL toggle) { invoke<Void>(0x6FDDD37A4022A641, object, toggle); }
static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0x8366ABB82B1ABC59, x, y, z, radius, modelHash, isMission, p6, p7); }
static BOOL HAS_OBJECT_BEEN_BROKEN(Object object, Any p1) { return invoke<BOOL>(0x1C3788A51C49D6AD, object, p1); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0xF6774B3027B150AC, p0, p1, p2, p3, modelHash, p5); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { return invoke<BOOL>(0xF701B83DA32F7F87, x, y, z, radius, modelHash, p5); }
static BOOL GET_HAS_OBJECT_BEEN_COMPLETELY_DESTROYED(Any p0) { return invoke<BOOL>(0x0DD5D60B63FBBFC2, p0); }
static Vector3 GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xF10F2A2453AF1DFB, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
static BOOL GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, Vector3* outPosition, Vector3* outRotation, int rotationOrder) { return invoke<BOOL>(0x8679173785B8D495, x, y, z, radius, modelHash, outPosition, outRotation, rotationOrder); }
static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0x1F3E4227575DF103, type, x, y, z, locked, heading, p6); }
static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0x696D2AC31CB5932A, type, x, y, z, locked, heading); }
static void SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(Hash modelHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { invoke<Void>(0x6421C7C9616E4305, modelHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); }
static void PLAY_OBJECT_AUTO_START_ANIM(Any p0) { invoke<Void>(0x8F07CC6637F60B7F, p0); }
static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL scriptDoor, BOOL isLocal) { invoke<Void>(0xB80B2E08713B8BC6, doorHash, modelHash, x, y, z, p5, scriptDoor, isLocal); }
static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash, Any p1) { invoke<Void>(0x19B3B7AC049E8354, doorHash, p1); }
static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int state, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xEBB2809684978887, doorHash, state, requestDoor, forceUpdate); }
static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0x117BCCA03F7A311A, doorHash); }
static int DOOR_SYSTEM_GET_DOOR_PENDING_STATE(Hash doorHash) { return invoke<int>(0xE2A2194077783E19, doorHash); }
static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorHash, float rate, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xDD0EDCD573B965E2, doorHash, rate, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float distance, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0x57A602C0620BEFF2, doorHash, distance, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0x3A15B21067339E98, doorHash, ajar, requestDoor, forceUpdate); }
static float DOOR_SYSTEM_GET_AUTOMATIC_DISTANCE(Hash doorHash) { return invoke<float>(0xE29951C625F69A92, doorHash); }
static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0x8CA2126DEA4C3796, doorHash); }
static void DOOR_SYSTEM_SET_SPRING_REMOVED(Hash doorHash, BOOL removed, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0x2ED5915E42CF4212, doorHash, removed, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_HOLD_OPEN(Hash doorHash, BOOL toggle) { invoke<Void>(0x0EBFE569715DB18F, doorHash, toggle); }
static void DOOR_SYSTEM_SET_DOOR_OPEN_FOR_RACES(Hash doorHash, BOOL p1) { invoke<Void>(0xB80A7611D19E162B, doorHash, p1); }
static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0x116053132936EA1F, doorHash); }
static BOOL IS_DOOR_CLOSED(Hash doorHash) { return invoke<BOOL>(0x497B2CD637A94E2A, doorHash); }
static void OPEN_ALL_BARRIERS_FOR_RACE(BOOL p0) { invoke<Void>(0xEE7031BA6CBD6DBA, p0); }
static void CLOSE_ALL_BARRIERS_FOR_RACE() { invoke<Void>(0x3E4EE4ACF12D2A90); }
static BOOL DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(Any p0) { return invoke<BOOL>(0xC8E94211877921FE, p0); }
static BOOL DOOR_SYSTEM_FIND_EXISTING_DOOR(float x, float y, float z, Hash modelHash, Hash* outDoorHash) { return invoke<BOOL>(0x05FE36AB1B2950A9, x, y, z, modelHash, outDoorHash); }
static BOOL IS_GARAGE_EMPTY(Hash garageHash, BOOL p1, int p2) { return invoke<BOOL>(0x988923E9EBDA2C20, garageHash, p1, p2); }
static BOOL IS_PLAYER_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Player player, float p2, int p3) { return invoke<BOOL>(0xA9BDD6C662512CA7, garageHash, player, p2, p3); }
static BOOL IS_PLAYER_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Player player, int p2) { return invoke<BOOL>(0x3DF64ECB2401B9C1, garageHash, player, p2); }
static BOOL ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xB7AFC7F5C75DCD56, garageHash, p1, p2, p3, p4); }
static BOOL IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0x2ED8EB2145D177F8, garageHash, p1, p2, p3, p4); }
static BOOL IS_OBJECT_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Entity entity, float p2, int p3) { return invoke<BOOL>(0x659143E4AE5A351B, garageHash, entity, p2, p3); }
static BOOL IS_OBJECT_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Entity entity, int p2) { return invoke<BOOL>(0x805A7BBF801B49D0, garageHash, entity, p2); }
static void CLEAR_GARAGE(Hash garageHash, BOOL isNetwork) { invoke<Void>(0xC2A1BF59954282E5, garageHash, isNetwork); }
static void CLEAR_OBJECTS_INSIDE_GARAGE(Hash garageHash, BOOL vehicles, BOOL peds, BOOL objects, BOOL isNetwork) { invoke<Void>(0xC175C00B24E2628F, garageHash, vehicles, peds, objects, isNetwork); }
static void DISABLE_TIDYING_UP_IN_GARAGE(int id, BOOL toggle) { invoke<Void>(0x1DC06048E0BEE337, id, toggle); }
static void ENABLE_SAVING_IN_GARAGE(Hash garageHash, BOOL toggle) { invoke<Void>(0xBA7A8F956317AC96, garageHash, toggle); }
static void CLOSE_SAFEHOUSE_GARAGES() { invoke<Void>(0x3C0B3EA001613632); }
static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xE10356B235A70E70, x, y, z, radius, hash, p5); }
static BOOL IS_POINT_IN_ANGLED_AREA(float xPos, float yPos, float zPos, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ) { return invoke<BOOL>(0x26715B0ED6702C87, xPos, yPos, zPos, x1, y1, z1, x2, y2, z2, width, debug, includeZ); }
static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object object, BOOL toggle) { invoke<Void>(0x1315213A9C4437FE, object, toggle); }
static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0x2493F314750274C9, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); }
static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0x79BDC52C38AAF639, p0, p1); }
static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0x4B46E3AF872076CE, object, toggle); }
static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0x80F249EA6DFE8476, x, y, z, range, p4); }
static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0x3C38570F42680D56, objectHash, x, y, z, range); }
static void REMOVE_OBJECT_HIGH_DETAIL_MODEL(Object object) { invoke<Void>(0xCF9F92EF5A069BD4, object); }
static void BREAK_OBJECT_FRAGMENT_CHILD(Object p0, Any p1, BOOL p2) { invoke<Void>(0x8C4D4D7E3B6BC910, p0, p1, p2); }
static void DAMAGE_OBJECT_FRAGMENT_CHILD(Any p0, Any p1, Any p2) { invoke<Void>(0x3E27C7B2037D7E8B, p0, p1, p2); }
static void FIX_OBJECT_FRAGMENT(Object object) { invoke<Void>(0x30A5E8BBE5D07DE7, object); }
static void TRACK_OBJECT_VISIBILITY(Object object) { invoke<Void>(0x33D763C13554690A, object); }
static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0xF31BAE02C52ADEFD, object); }
static void SET_OBJECT_IS_SPECIAL_GOLFBALL(Object object, BOOL toggle) { invoke<Void>(0x7D8D470E05A35981, object, toggle); }
static void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(Any p0, BOOL p1) { invoke<Void>(0xC0794F64BB12AAF8, p0, p1); }
static void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(BOOL value) { invoke<Void>(0x137D2653DD6FE9A2, value); }
static void SET_CUTSCENES_WEAPON_FLASHLIGHT_ON_THIS_FRAME(Object object, BOOL toggle) { invoke<Void>(0x7825AE6DE930430C, object, toggle); }
static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0xC8C12645F5A0E13B, x, y, z, radius, name); }
static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { invoke<Void>(0xBF86159B8525B1AE, object, state); }
static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0xEB4069FA281FFD9B, object); }
static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0x502101046E18AD3F, object); }
static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object object) { return invoke<float>(0xEAD3338566510A40, object); }
static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0x8D4CAF9A056EA9E4, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); }
static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0x6FCBED6282FF5DA5, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); }
static void FORCE_PICKUP_ROTATE_FACE_UP() { invoke<Void>(0x82FFC7AC4E85D734); }
static void SET_CUSTOM_PICKUP_WEAPON_HASH(Hash pickupHash, Pickup pickup) { invoke<Void>(0xCFA4C40D5C68471B, pickupHash, pickup); }
static Object CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xD0DDC0D0D8D33E57, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); }
static Object CREATE_NON_NETWORKED_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0x192C5E68A3552FDC, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); }
static void BLOCK_PLAYERS_FOR_AMBIENT_PICKUP(Any p0, Any p1) { invoke<Void>(0x4CA2980073803EFF, p0, p1); }
static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0x29F49A5884D2FD3C, pickupHash, x, y, z, placeOnGround, modelHash); }
static Object CREATE_NON_NETWORKED_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0x77573CD394E8C3B1, pickupHash, x, y, z, placeOnGround, modelHash); }
static void ATTACH_PORTABLE_PICKUP_TO_PED(Object pickupObject, Ped ped) { invoke<Void>(0xCD1BFD3115E1591A, pickupObject, ped); }
static void DETACH_PORTABLE_PICKUP_FROM_PED(Object pickupObject) { invoke<Void>(0x31A69AB30F92CBD0, pickupObject); }
static void FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(Object object) { invoke<Void>(0x7AD61992EAE86A99, object); }
static void HIDE_PORTABLE_PICKUP_WHEN_DETACHED(Object pickupObject, BOOL toggle) { invoke<Void>(0x6F7F646DA603F6DF, pickupObject, toggle); }
static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelHash, int number) { invoke<Void>(0x48DD7FCBAD86D46F, modelHash, number); }
static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(BOOL toggle) { invoke<Void>(0x2053D6988D24922A, toggle); }
static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, float p3, float p4) { return invoke<Vector3>(0x165E2DDD2BD0F07D, x, y, z, p3, p4); }
static void ADD_EXTENDED_PICKUP_PROBE_AREA(float x, float y, float z, float radius) { invoke<Void>(0xB7E1B262DB074229, x, y, z, radius); }
static void CLEAR_EXTENDED_PICKUP_PROBE_AREAS() { invoke<Void>(0x2E42BC795274B8C1); }
static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0x80C8AA1625977488, pickup); }
static void SUPPRESS_PICKUP_SOUND_FOR_PICKUP(Any p0, Any p1) { invoke<Void>(0x70351229319C8FCB, p0, p1); }
static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xF429153602FD9CAF, pickupHash); }
static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0x1D56B24774D5E23C, pickup); }
static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0xDDFB0941A19702BE, pickup); }
static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { invoke<Void>(0x24703703CFA1C70A, x, y, z, value, amount, model); }
static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xB0E14182FAD64944, pickup); }
static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0x313F30E8A7FB3625, pickupObject); }
static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0xA9D6BD2486442887, pickup); }
static BOOL IS_OBJECT_A_PICKUP(Object object) { return invoke<BOOL>(0xDC4C404BF0F7C610, object); }
static BOOL IS_OBJECT_A_PORTABLE_PICKUP(Object object) { return invoke<BOOL>(0x0051FB632E333967, object); }
static BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0x6AA6E814FE2A18C2, pickupHash, x, y, z, radius); }
static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0xE611C8912D834299, pickup, duration); }
static void FORCE_PICKUP_REGENERATE(Any p0) { invoke<Void>(0x59955A005920818D, p0); }
static void SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(Player player, Hash pickupHash, BOOL toggle) { invoke<Void>(0xF3F15DACA12B4829, player, pickupHash, toggle); }
static void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Hash modelHash, BOOL toggle) { invoke<Void>(0xFE931774D31D4525, modelHash, toggle); }
static void ALLOW_ALL_PLAYERS_TO_COLLECT_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0x88D79D666165710F, pickupHash); }
static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0xBF998058B3DD9EEF, object, p1, p2); }
static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object object, BOOL p1, BOOL p2) { invoke<Void>(0x26909BE8B0CCD35B, object, p1, p2); }
static void SET_PICKUP_OBJECT_GLOW_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0x15D82129216A84DC, pickup, toggle); }
static void SET_PICKUP_GLOW_OFFSET(Pickup pickup, float p1) { invoke<Void>(0xED6967E98C0B750B, pickup, p1); }
static void SET_PICKUP_OBJECT_GLOW_OFFSET(Pickup pickup, float p1, BOOL p2) { invoke<Void>(0x1EFD0C969D7EC8A5, pickup, p1, p2); }
static void SET_OBJECT_GLOW_IN_SAME_TEAM(Pickup pickup) { invoke<Void>(0x57619EEF13EEBFBE, pickup); }
static void SET_PICKUP_OBJECT_ARROW_MARKER(Pickup pickup, BOOL toggle) { invoke<Void>(0x5730F7F898FC023D, pickup, toggle); }
static void ALLOW_PICKUP_ARROW_MARKER_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0x965118645D618F6E, pickup, toggle); }
static int GET_DEFAULT_AMMO_FOR_WEAPON_PICKUP(Hash pickupHash) { return invoke<int>(0x0D44CA9207ABD071, pickupHash); }
static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { invoke<Void>(0x234E9925E93F6A5A, multiplier); }
static float GET_PICKUP_GENERATION_RANGE_MULTIPLIER() { return invoke<float>(0x2AD9C2DC3976B552); }
static void SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(BOOL p0) { invoke<Void>(0x8BD66D017AB5A655, p0); }
static void SET_PICKUP_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0x9CA38BB13C29695F, pickup, toggle); }
static void SET_PICKUP_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0x4C053DEF00842DC9, pickup, toggle); }
static void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xCDBF6DCBFC52E781, pickup, toggle); }
static void SET_PICKUP_OBJECT_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0x08EC1AE8FE5E74E2, pickup, toggle); }
static void SET_PICKUP_OBJECT_ALPHA_WHEN_TRANSPARENT(int p0) { invoke<Void>(0x7E1C4CAEFA5571B2, p0); }
static void SET_PORTABLE_PICKUP_PERSIST(Pickup pickup, BOOL toggle) { invoke<Void>(0x5612E9BDDC2940D7, pickup, toggle); }
static void ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xB192A63C891A0E89, pickup, toggle); }
static void FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(Pickup pickup, BOOL toggle) { invoke<Void>(0x95ED454235D93943, pickup, toggle); }
static void ALLOW_PICKUP_BY_NONE_PARTICIPANT(Pickup pickup, BOOL toggle) { invoke<Void>(0x3B4B7B1791F11CB8, pickup, toggle); }
static void SUPPRESS_PICKUP_REWARD_TYPE(int rewardType, BOOL suppress) { invoke<Void>(0xD346DC73B664C2EC, rewardType, suppress); }
static void CLEAR_ALL_PICKUP_REWARD_TYPE_SUPPRESSION() { invoke<Void>(0x49498E53B3E184F7); }
static void CLEAR_PICKUP_REWARD_TYPE_SUPPRESSION(int rewardType) { invoke<Void>(0xB1FED11AF36ECDD3, rewardType); }
static void RENDER_FAKE_PICKUP_GLOW(float x, float y, float z, int colorIndex) { invoke<Void>(0x60415964D3B19DC8, x, y, z, colorIndex); }
static void SET_PICKUP_OBJECT_COLLECTABLE_IN_VEHICLE(Pickup pickup) { invoke<Void>(0xCF4D057C2C049142, pickup); }
static void SET_PICKUP_TRACK_DAMAGE_EVENTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xD0AE52F8786F9DDC, pickup, toggle); }
static void SET_ENTITY_FLAG_SUPPRESS_SHADOW(Entity entity, BOOL toggle) { invoke<Void>(0x1849D5FA4A78390C, entity, toggle); }
static void SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(Object object, BOOL toggle) { invoke<Void>(0xCE01C49286D13953, object, toggle); }
static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0x5A0A30874C8AA5B2, pickupHash); }
static Hash GET_PICKUP_TYPE_FROM_WEAPON_HASH(Hash weaponHash) { return invoke<Hash>(0x9D3736A21578FCE2, weaponHash); }
static BOOL IS_PICKUP_WEAPON_OBJECT_VALID(Object object) { return invoke<BOOL>(0x6B0D585D62AACB6F, object); }
static int GET_OBJECT_TINT_INDEX(Object object) { return invoke<int>(0xC557ED333E7A31E1, object); }
static void SET_OBJECT_TINT_INDEX(Object object, int textureVariation) { invoke<Void>(0xDEFDEE8D4FA47138, object, textureVariation); }
static BOOL SET_TINT_INDEX_CLOSEST_BUILDING_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, int textureVariation) { return invoke<BOOL>(0x44EFE8009F436110, x, y, z, radius, modelHash, textureVariation); }
static void SET_PROP_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xD3CBD77236B58852, p0, p1); }
static BOOL SET_PROP_LIGHT_COLOR(Object object, BOOL p1, int r, int g, int b) { return invoke<BOOL>(0x53AEF1FECF5138CF, object, p1, r, g, b); }
static BOOL IS_PROP_LIGHT_OVERRIDEN(Object object) { return invoke<BOOL>(0xCF84B0AC4DDC5E1C, object); }
static void SET_OBJECT_IS_VISIBLE_IN_MIRRORS(Object object, BOOL toggle) { invoke<Void>(0x5D56BEB3F5597195, object, toggle); }
static void SET_OBJECT_SPEED_BOOST_AMOUNT(Object object, Any p1) { invoke<Void>(0xB853745FD2637D7F, object, p1); }
static void SET_OBJECT_SPEED_BOOST_DURATION(Object object, float duration) { invoke<Void>(0x824F169326B2BC67, object, duration); }
static Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW(Hash pickupHash) { return invoke<Hash>(0xAC96042A1278D845, pickupHash); }
static void SET_FORCE_OBJECT_THIS_FRAME(float x, float y, float z, float p3) { invoke<Void>(0x320BC441CADA2E79, x, y, z, p3); }
static void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Object object) { invoke<Void>(0xC942CD0D37369DC4, object); }
static void SET_DISABLE_COLLISIONS_BETWEEN_CARS_AND_CAR_PARACHUTE(Any p0) { invoke<Void>(0x7A2982A0B5AB7BEB, p0); }
static void SET_PROJECTILES_SHOULD_EXPLODE_ON_CONTACT(Entity entity, Any p1) { invoke<Void>(0x78CDDDB2C832ADEF, entity, p1); }
static void SET_DRIVE_ARTICULATED_JOINT(Object object, BOOL toggle, int p2) { invoke<Void>(0x95D654C0E9FE1D7E, object, toggle, p2); }
static void SET_DRIVE_ARTICULATED_JOINT_WITH_INFLICTOR(Object object, BOOL toggle, int p2, Ped ped) { invoke<Void>(0x3BC4D68025ED9B51, object, toggle, p2, ped); }
static void SET_OBJECT_IS_A_PRESSURE_PLATE(Object object, BOOL toggle) { invoke<Void>(0x806B9D97E4C16543, object, toggle); }
static void SET_WEAPON_IMPACTS_APPLY_GREATER_FORCE(Object object, BOOL p1) { invoke<Void>(0x6F3AF5B029E1AD6C, object, p1); }
static BOOL GET_IS_ARTICULATED_JOINT_AT_MIN_ANGLE(Object object, Any p1) { return invoke<BOOL>(0xD935AEB5CFA7FA1B, object, p1); }
static BOOL GET_IS_ARTICULATED_JOINT_AT_MAX_ANGLE(Any p0, Any p1) { return invoke<BOOL>(0xA06DCC0EBCEFF7EA, p0, p1); }
static void SET_IS_OBJECT_ARTICULATED(Object object, BOOL toggle) { invoke<Void>(0x140444BB8ABDB066, object, toggle); }
static void SET_IS_OBJECT_BALL(Object object, BOOL toggle) { invoke<Void>(0x09D0318A9D395CB5, object, toggle); }
static BOOL IS_CONTROL_ENABLED(int control, int action) { return invoke<BOOL>(0x5CCBA474776568B7, control, action); }
static BOOL IS_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0x6D05C5731A838CB3, control, action); }
static BOOL IS_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0x9924343EC2EAE1E4, control, action); }
static BOOL IS_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0x875A214D5EBCA509, control, action); }
static BOOL IS_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0x2645430E708CBFAC, control, action); }
static int GET_CONTROL_VALUE(int control, int action) { return invoke<int>(0x6C29A57AC29D7033, control, action); }
static float GET_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xB504E1B50AA21FC5, control, action); }
static void SET_USE_ADJUSTED_MOUSE_COORDS(BOOL toggle) { invoke<Void>(0x88C44A9692A5A3A0, toggle); }
static float GET_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0x4AAE7492E7D81A57, control, action); }
static BOOL SET_CONTROL_VALUE_NEXT_FRAME(int control, int action, float value) { return invoke<BOOL>(0x11E5CA6A9B6D7D2A, control, action, value); }
static BOOL IS_DISABLED_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0x4465D55576678706, control, action); }
static BOOL IS_DISABLED_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xAA7C376C3569E05B, control, action); }
static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xDEE3EFEA31A1F555, control, action); }
static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0x61C3701AD6D746B2, control, action); }
static float GET_DISABLED_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xF069618D9974EB9D, control, action); }
static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xC3B77DE416935168, control, action); }
static int GET_CONTROL_HOW_LONG_AGO(int control) { return invoke<int>(0x93D020792180298F, control); }
static BOOL IS_USING_KEYBOARD_AND_MOUSE(int control) { return invoke<BOOL>(0xAE231F549813BBDF, control); }
static BOOL IS_USING_CURSOR(int control) { return invoke<BOOL>(0xD67885288D4A40CB, control); }
static BOOL SET_CURSOR_POSITION(float x, float y) { return invoke<BOOL>(0xA715917D148B834B, x, y); }
static BOOL IS_USING_REMOTE_PLAY(int control) { return invoke<BOOL>(0xF4E95755715FE93D, control); }
static BOOL HAVE_CONTROLS_CHANGED(int control) { return invoke<BOOL>(0x7811C74D5B749F76, control); }
static const char* GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(int control, int action, BOOL allowXOSwap) { return invoke<const char*>(0xE934399D6F2C3AC5, control, action, allowXOSwap); }
static const char* GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(int control, int controlGroup, BOOL allowXOSwap) { return invoke<const char*>(0xF761D79754BC3043, control, controlGroup, allowXOSwap); }
static void SET_CONTROL_LIGHT_EFFECT_COLOR(int control, int red, int green, int blue) { invoke<Void>(0x5806B70875E083E0, control, red, green, blue); }
static void CLEAR_CONTROL_LIGHT_EFFECT(int control) { invoke<Void>(0x9882AC0599785A65, control); }
static void SET_CONTROL_SHAKE(int control, int duration, int frequency) { invoke<Void>(0x97A041099E92C69F, control, duration, frequency); }
static void SET_CONTROL_TRIGGER_SHAKE(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency) { invoke<Void>(0x238500FECB845FFF, control, leftDuration, leftFrequency, rightDuration, rightFrequency); }
static void STOP_CONTROL_SHAKE(int control) { invoke<Void>(0x9683D8208E71E46D, control); }
static void SET_CONTROL_SHAKE_SUPPRESSED_ID(int control, int uniqueId) { invoke<Void>(0xE0CC4855A08C0666, control, uniqueId); }
static void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(int control) { invoke<Void>(0xF27E6847E6EE009E, control); }
static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0x660D0B8C8AE85314); }
static BOOL IS_MOUSE_LOOK_INVERTED() { return invoke<BOOL>(0xDD087A873D2E08F0); }
static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xC613ED89DC21151D); }
static int GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() { return invoke<int>(0x8783C7E86E757352); }
static BOOL GET_IS_USING_ALTERNATE_HANDBRAKE() { return invoke<BOOL>(0x17D4CDD893C6031C); }
static BOOL GET_IS_USING_ALTERNATE_DRIVEBY() { return invoke<BOOL>(0x7BC5EE3C02F4154B); }
static BOOL GET_ALLOW_MOVEMENT_WHILE_ZOOMED() { return invoke<BOOL>(0x22C925E7C63C5628); }
static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0x92F061476F865C31, toggle); }
static void SET_INPUT_EXCLUSIVE(int control, int action) { invoke<Void>(0x4CC1CF98851922CE, control, action); }
static void DISABLE_CONTROL_ACTION(int control, int action, BOOL disableRelatedActions) { invoke<Void>(0x66EFB3D6110055C4, control, action, disableRelatedActions); }
static void ENABLE_CONTROL_ACTION(int control, int action, BOOL enableRelatedActions) { invoke<Void>(0xB211E45F1FE1ED2D, control, action, enableRelatedActions); }
static void DISABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xD4510218399ED105, control); }
static void ENABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xD6D50527C75F8C6C, control); }
static BOOL INIT_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0x005E8B7CFA7D52A6, schemeName); }
static BOOL SWITCH_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0x60923CE1CFC6ABD4, schemeName); }
static void SHUTDOWN_PC_SCRIPTED_CONTROLS() { invoke<Void>(0x4E6A84BCEF2DCCBF); }
static void ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(int control) { invoke<Void>(0xE0EEB603997F273F, control); }
static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL nodeEnabled, BOOL unknown2) { invoke<Void>(0xD1B0AF388B711EBC, x1, y1, z1, x2, y2, z2, nodeEnabled, unknown2); }
static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0x5E08BBBF87BC4886, x1, y1, z1, x2, y2, z2, width, unknown1, unknown2, unknown3); }
static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, Any p7) { invoke<Void>(0x79CA429D8B4B057A, x1, y1, z1, x2, y2, z2, p6, p7); }
static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xC0EEE6A2207F3CB8, x, y, z, onGround, outPosition, flags); }
static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeFlags, float p5, float p6) { return invoke<BOOL>(0x3875519517101875, x, y, z, outPosition, nodeFlags, p5, p6); }
static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, float unknown2) { return invoke<BOOL>(0x8E942EABE97448C2, x, y, z, outPosition, unknown1, unknown2); }
static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, float p7) { return invoke<BOOL>(0x813ADF2A2A03F440, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, int nodeFlags, float unknown1, float unknown2) { return invoke<BOOL>(0x8B777C12D64DF209, x, y, z, nthClosest, outPosition, nodeFlags, unknown1, unknown2); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodeFlags, float p5, float p6) { return invoke<int>(0x97C50CC028477E0D, x, y, z, nth, nodeFlags, p5, p6); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int* outNumLanes, int nodeFlags, float unknown3, float unknown4) { return invoke<BOOL>(0x6009FBA2EAAA60BE, x, y, z, nthClosest, outPosition, outHeading, outNumLanes, nodeFlags, unknown3, unknown4); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p7, float p8) { return invoke<int>(0x990DA6AEDBBBA89A, x, y, z, nthClosest, outPosition, outHeading, nodeFlags, p7, p8); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p10, float p11) { return invoke<BOOL>(0x7F8B389881024657, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodeFlags, p10, p11); }
static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0x99FBD9356770254E, x, y, z, density, flags); }
static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0x2EE1ADDFD32F7C35, vehicleNodeId); }
static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0xAAB540AD076E01F8, nodeId, outPosition); }
static BOOL GET_VEHICLE_NODE_IS_GPS_ALLOWED(int nodeID) { return invoke<BOOL>(0x8D4953B2FFED058B, nodeID); }
static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0xD2507ABB3A05C571, nodeID); }
static BOOL GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<BOOL>(0x748728E3BFD8E371, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL LOAD_ALL_PATH_NODES(BOOL set) { return invoke<BOOL>(0x10564B8977071406, set); }
static void SET_ALLOW_STREAM_PROLOGUE_NODES(BOOL toggle) { invoke<Void>(0x14B872A3D2879E35, toggle); }
static void SET_ALLOW_STREAM_HEIST_ISLAND_NODES(int type) { invoke<Void>(0x6FAD8BFDFFCEDD65, type); }
static BOOL ARE_NODES_LOADED_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xFFEB5F24B372DFF6, x1, y1, x2, y2); }
static BOOL REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0x693ACD1AA0BDB375, x1, y1, x2, y2); }
static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0x33B6B083EA6305A5, p0, p1, p2, p3, p4, p5, p6); }
static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7) { invoke<Void>(0x2AF2D6F164BD6F5A, x1, y1, z1, x2, y2, z2, width, p7); }
static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF9372EC61E6191AF, multiplier); }
static void ADJUST_AMBIENT_PED_SPAWN_DENSITIES_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xBAC712AB83AFA8CC, p0, p1, p2, p3, p4, p5, p6); }
static void SET_PED_PATHS_BACK_TO_ORIGINAL(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xE649818AF72843C4, x1, y1, z1, x2, y2, z2, p6); }
static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0x0771D4899F0EDF3E, x, y, z, radius, p4, p5, p6, outPosition, nodeId); }
static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0x77BCD89051F77C43, x, y, z, streetName, crossingRoad); }
static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, int* direction, float* p5, float* distToNxJunction) { return invoke<int>(0x766E7B4FEF97CFDE, x, y, z, p3, direction, p5, distToNxJunction); }
static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { invoke<Void>(0xAD69CF046AA50E85, toggle); }
static void SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(BOOL toggle) { invoke<Void>(0x7A0DF3CEAF912D48, toggle); }
static void SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z3) { invoke<Void>(0x4F30C4E212ACCAAA, x1, y1, z1, x2, y2, z3); }
static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0x0715F5EED76FCDE9); }
static BOOL GET_POS_ALONG_GPS_TYPE_ROUTE(Vector3* result, BOOL p1, float p2, int p3) { return invoke<BOOL>(0x4AF7AA151DA57A33, result, p1, p2, p3); }
static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0x1A9014F37459E83F); }
static BOOL GET_ROAD_BOUNDARY_USING_HEADING(float x, float y, float z, float heading, Vector3* outPosition) { return invoke<BOOL>(0x5053D36357207FD6, x, y, z, heading, outPosition); }
static BOOL GET_POSITION_BY_SIDE_OF_ROAD(float x, float y, float z, int p3, Vector3* outPosition) { return invoke<BOOL>(0x2DFF53C2897C7990, x, y, z, p3, outPosition); }
static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0x1F32EC7CE9CC63A2, x, y, z, vehicle); }
static int GET_NEXT_GPS_DISABLED_ZONE_INDEX() { return invoke<int>(0x278706F2D0A8F29B); }
static void SET_GPS_DISABLED_ZONE_AT_INDEX(float x1, float y1, float z1, float x2, float y2, float z2, int index) { invoke<Void>(0xAAD42D6F976511F9, x1, y1, z1, x2, y2, z2, index); }
static void CLEAR_GPS_DISABLED_ZONE_AT_INDEX(int index) { invoke<Void>(0x0887AF6FA4371E08, index); }
static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0x8998A86E45C5155C, x, y, radius); }
static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0x81F9331288182129); }
static BOOL IS_NAVMESH_REQUIRED_REGION_IN_USE() { return invoke<BOOL>(0x53F38E2C8579B2AA); }
static void DISABLE_NAVMESH_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle) { invoke<Void>(0xA8C09F16998DFD28, x1, y1, z1, x2, y2, z2, toggle); }
static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xD33AE43EA8DC1C58); }
static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x75A7B7B3DF681621, x1, y1, z1, x2, y2, z2); }
static int GET_NUM_NAVMESHES_EXISTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0x758F97A0C79EEFBF, x1, y1, z1, x2, y2, z2); }
static int ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<int>(0x8CC50AC10D8037C7, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xD9ECC9BB146EA4A4, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0x8E99C7AF6C6639AB, p0); }
static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xF935563454D3B338, p0); }
static float GET_APPROX_HEIGHT_FOR_POINT(float x, float y) { return invoke<float>(0x54D01A0F98391D5B, x, y); }
static float GET_APPROX_HEIGHT_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0x2093CB9E0E9B985F, x1, y1, x2, y2); }
static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke<float>(0xFAF53F2F65D5EE26, x, y); }
static float GET_APPROX_FLOOR_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0x05DB7284C236A9DE, x1, y1, x2, y2); }
static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x1287CC087A5CE000, x1, y1, z1, x2, y2, z2); }
static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xB1DBFEB95C0EFB88, pedType, modelHash, x, y, z, heading, isNetwork, bScriptHostPed); }
static void DELETE_PED(Ped* ped) { invoke<Void>(0x734A9F4537A31459, ped); }
static Ped CLONE_PED(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag) { return invoke<Ped>(0xEA797D2F13BCD0AA, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag); }
static Ped CLONE_PED_ALT(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag, BOOL p4) { return invoke<Ped>(0x7486FF8F1B2245EA, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag, p4); }
static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0x4E719C7F4406EC93, ped, targetPed); }
static void CLONE_PED_TO_TARGET_ALT(Ped ped, Ped targetPed, BOOL p2) { invoke<Void>(0xCA1E369E8B71BF45, ped, targetPed, p2); }
static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xCECDBB848D53DEB2, ped, vehicle, atGetIn); }
static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x0595DAC15F5513F9, ped, modelHash); }
static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0x7F420695E3F776FB, ped, atGetIn); }
static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0x59A8C2AB2084CAF7, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0x4FAFF4BCB7633475, ped); }
static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0xC00DCFE53DCBBABA, ped); }
static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xBFD01C2045360289, ped); }
static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0x89568FA9A6BC0B4A, ped, p1); }
static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xBE65C2DD27AEFD7B, ped); }
static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xF5327658CA9AF463, ped); }
static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xC722DDBD6C3E86D7, ped); }
static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0x501EBB0523078750, ped); }
static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0x8728A378EF2B46B2, vehicle, pedType, modelHash, seat, isNetwork, bScriptHostPed); }
static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xFBF90D96AEB26BCF, ped, heading); }
static void FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped ped) { invoke<Void>(0xF62B077162F79BAA, ped); }
static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0x3644984C9D7B57EF, ped, otherPed, angle); }
static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xFFAC548682B3D56E, ped); }
static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xD9CCFCDF70474932, ped); }
static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0x6051CE9D47B0B904, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0x68C0C5563ECBBAB6, x1, y1, z1, x2, y2, z2, p6, p7); }
static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0x65F146FF416F109F, ped); }
static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xC652B7E19CE29859, ped, accuracy); }
static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xF558A1138519E6F6, ped); }
static void SET_AMBIENT_LAW_PED_ACCURACY_MODIFIER(float multiplier) { invoke<Void>(0xEDC191D9E24A6A2D, multiplier); }
static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0x700C28A639389477, ped, modelHash); }
static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0xB958FAC3AA36D900, ped, weaponHash); }
static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0x77870665080C9E81, ped); }
static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0x2E20E7B6C4BBA61D, ped, amount); }
static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0x10A676E622A468AA, ped, amount); }
static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0x73CAFD2038E812B3, ped, vehicle, seatIndex); }
static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0x9A74653FD0288BAB, ped, toggle); }
static BOOL CAN_CREATE_RANDOM_PED(BOOL p0) { return invoke<BOOL>(0x5E0FF86EB887D780, p0); }
static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0x7F179394883885FA, posX, posY, posZ); }
static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0x3CD322135CF08E09, vehicle, returnHandle); }
static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0x70BB2517035D5D12); }
static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0x60E0AE8EF70F606A); }
static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0x6EC1B5B2C6C31862, ped); }
static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0x1537AF7B62B52EB1, ped, toggle); }
static void SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(BOOL toggle) { invoke<Void>(0x75B4FDDCE5B4C969, toggle); }
static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xB98B1A5B59BC5065, ped); }
static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0x26A004F4BA50E71C, ped); }
static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL includeLastVehicle) { return invoke<Vehicle>(0x6EF03BE64E058E2F, ped, includeLastVehicle); }
static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0x61BB4B7411E1DF82, ped); }
static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xF9A2335AB37CF17E, multiplier); }
static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0x0397A00D015A11D4, p0, p1); }
static void SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME() { invoke<Void>(0x94D0F337C46797FB); }
static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0x2A5514EA88DA4DC4, x, y, z); }
static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0x89C4F1335B4A6633, x1, y1, z1, x2, y2, z2); }
static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0x93586F94C370857F); }
static void INSTANTLY_FILL_PED_POPULATION() { invoke<Void>(0x337117D37E592B05); }
static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0x1BAABBB7277FCD90, ped); }
static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0x92875FEB15AFF7C7, ped); }
static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0x92D9D3367234ABE7, ped); }
static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0x6A89FD77560DE959, ped, vehicle); }
static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0x886FA295C1257AAA, ped, amount); }
static int GET_PED_MONEY(Ped ped) { return invoke<int>(0x6E01C40ECE96D208, ped); }
static void SET_HEALTH_SNACKS_CARRIED_BY_ALL_NEW_PEDS(float p0, Any p1) { invoke<Void>(0x4AD0013B427A98CA, p0, p1); }
static void SET_AMBIENT_PEDS_DROP_MONEY(BOOL p0) { invoke<Void>(0xB715358D51663C7A, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(BOOL p0) { invoke<Void>(0x9288ABAC1FCB4745, p0); }
static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xE915224DCA36212A, ped, toggle); }
static void SET_PED_UPPER_BODY_DAMAGE_ONLY(Ped ped, BOOL toggle) { invoke<Void>(0xEFD4518EFFDFB602, ped, toggle); }
static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xF4244288C3EF3306, ped, vehicle); }
static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0x27E68848F0E5D7D9, ped); }
static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0x5B3431FA66D59A4C, ped); }
static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xFFEFA49356BD7CA2, ped); }
static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0x74CD4FE549433E92, ped); }
static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0x240E88FB0B8CC932, ped, p1, p2); }
static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0xE70AAE8EBF7D65BD, ped); }
static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0x483232F244CDBFC6, ped); }
static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0xFE90F09EC43D7D44, ped); }
static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xC5F2281709805477, ped); }
static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0x1F7A48429F9F64CE, ped); }
static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x34A9A872D3C510BF, ped, toggle); }
static BOOL GET_PED_DIES_IN_WATER(Ped ped) { return invoke<BOOL>(0x9EA69973FD5ABBBD, ped); }
static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xA39E0AA2C6BBD52E, ped, toggle); }
static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xE5E6F6EFCE07789A, ped); }
static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0x3CDDF07147FB8B6F, ped, toggle); }
static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x9C18DF7FC19D843C, ped, toggle); }
static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xB76C3F86B744BBA5, ped, outBone); }
static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0xCBCBAEEB5BBCA58A, ped); }
static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0x36978A351E9CB5D8, value); }
static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xDD84F9C956E69AC8); }
static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0x767EC66D239AED1D, modifier); }
static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0x01B722A2B2026558); }
static void SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(Ped ped, BOOL p1) { invoke<Void>(0x00941975834A0817, ped, p1); }
static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0x3F58BFCF656F0DF1, ped, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0x6A17FC9B41F35458, ped, team, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xF861636AF1D2D3D2, ped, player, toggle); }
static void SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(Ped ped, BOOL toggle) { invoke<Void>(0x7D2CC3BDBE189210, ped, toggle); }
static void SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(Ped ped, BOOL toggle) { invoke<Void>(0x476AD3ABB8EA8A58, ped, toggle); }
static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0x84F50401806477CE, ped); }
static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0x5A816292AD6929DF, ped); }
static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0x333554781C7582D7, ped); }
static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0x9857C978BD3CBEDA, ped); }
static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0x2C807E70DCB4BB36, ped); }
static BOOL IS_PED_LANDING(Any p0) { return invoke<BOOL>(0x285B49B5EF71E8ED, p0); }
static BOOL IS_PED_DOING_A_BEAST_JUMP(Any p0) { return invoke<BOOL>(0xC77607B4F69D0DFD, p0); }
static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0x7CB06BFD42FB0E24, ped); }
static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0x75B105C651D87D0E, ped); }
static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0xCD80FA7E842E5CA9, ped); }
static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xE7895DBF72C7F282, ped); }
static BOOL IS_PED_OPENING_DOOR(Ped ped) { return invoke<BOOL>(0xB16071F8F0F2A561, ped); }
static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0x57E7FD3BD6BB28C0, ped); }
static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0x2621F11E556C9703, ped); }
static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { invoke<Void>(0xD23AAC1FA1C1571E, ped, tintIndex); }
static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) { invoke<Void>(0x651A46CD4EAC23F3, ped, outTintIndex); }
static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { invoke<Void>(0x68D0A76A580AC47D, ped, p1); }
static Object CREATE_PARACHUTE_BAG_OBJECT(Ped ped, BOOL p1, BOOL p2) { return invoke<Object>(0xF3DC3DD7A741C1D5, ped, p1, p2); }
static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0xD0B00571D4BDDC97, ped, toggle); }
static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xDC91B9320E14F119, ped); }
static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0x0F00017BC718D851, ped); }
static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xC45887CFF81A1950, ped, value); }
static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { invoke<Void>(0xCAF62AAD9CA7C260, ped, toggle); }
static void SET_COP_PERCEPTION_OVERRIDES(float seeingRange, float seeingRangePeripheral, float hearingRange, float visualFieldMinAzimuthAngle, float visualFieldMaxAzimuthAngle, float fieldOfGazeMaxAngle, float p6) { invoke<Void>(0xF4B325151D7AC09F, seeingRange, seeingRangePeripheral, hearingRange, visualFieldMinAzimuthAngle, visualFieldMaxAzimuthAngle, fieldOfGazeMaxAngle, p6); }
static void SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped, float p1) { invoke<Void>(0x7D6A73BC9D136D34, ped, p1); }
static void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped) { invoke<Void>(0x75DACB7D11C3CEF4, ped); }
static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0x25DBF9F9C6BDFFEA, ped, value); }
static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0x35365D1E3ADB7109, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0x3C7306C2CE967C57, ped, value); }
static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xC8DEC2468E748263, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xA5D7DCF7BE7B181D, ped, angle); }
static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xD1DDDDB8B108DF01, ped, angle); }
static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xAF30637CFE0F3A89, ped, range); }
static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xA6102F762BBA9BC9, ped, angle); }
static float GET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped) { return invoke<float>(0x70101B2986BB6AB2, ped); }
static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) { invoke<Void>(0xF9358C41CC69C616, ped, p1, action); }
static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xC2BF1F6F84E31EB2, ped); }
static int CREATE_GROUP(int unused) { return invoke<int>(0xAE734C5C560DD787, unused); }
static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xFF7B703047EDEC8F, ped, groupId); }
static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0x03AB73582A77DBD3, ped, groupId); }
static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0x2D8E4004BC147E7E, pedHandle, groupHandle, toggle); }
static void REMOVE_GROUP(int groupId) { invoke<Void>(0x94CC4CA44256FDCB, groupId); }
static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0x5C4B3034CCDA5270, ped); }
static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xD11A63E12F198FDB, ped, groupId); }
static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xC3174723CF144560, ped); }
static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0x316802E03D8923D8, groupHandle, separationRange); }
static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xFED960E0DE07E343, ped, ms); }
static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0x78174817EDF226B3, ped); }
static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0x1B32E388988DD296, ped, target); }
static Entity GET_PED_TARGET_FROM_COMBAT_PED(Ped ped, Any p1) { return invoke<Entity>(0x11330C43B3678209, ped, p1); }
static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xB8CCCA6CFFCE7734, ped, target); }
static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xB29E06D8C7B733E6, ped); }
static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0x49CB27F641DC1328, ped); }
static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0xA6534E6C7AE314D6, ped); }
static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0x11BF418D1AFD7970, ped, p1); }
static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xC1089D3918F03D33, ped); }
static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0x3DEAB4931240C1E3, ped); }
static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xCA038E64C65D1F9D, ped); }
static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0xD6179D448A06A77F, ped, exceptUseWeapon); }
static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xC0BE0D29628A246A, ped); }
static BOOL IS_PED_IN_HIGH_COVER(Ped ped) { return invoke<BOOL>(0xFAD234E6A6D853B1, ped); }
static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0x3F055D2CBA242A5D, ped); }
static BOOL SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<BOOL>(0x97FBC735CAFB56C8, ped, pinned, i); }
static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0x03603B0046EE6ACD, ped); }
static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xF9F8E3060F7CAEDB, ped); }
static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0x836392D80E4F106A, ped); }
static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0x6D7C109F77738F39, ped); }
static int GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0x1F4CEA172C882694, ped); }
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped ped) { return invoke<int>(0x8B5EECBB010D0C63, ped); }
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped ped, float x, float y, float z, float radius) { return invoke<int>(0xF483865E4C02C371, ped, x, y, z, radius); }
static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0x17ABD7A8B101AF83, ped, hash); }
static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0x3CEA1FD137ACE2D9, ped, hash); }
static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xD414C47AFF81382A, relationship, group1, group2); }
static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0x40D1AAC4EFD3C281, relationship, group1, group2); }
static BOOL ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<BOOL>(0x06CD913C241C765E, name, groupHash); }
static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0x2B1BDC32466B40A9, groupHash); }
static BOOL DOES_RELATIONSHIP_GROUP_EXIST(Hash groupHash) { return invoke<BOOL>(0xB2AE1A67479A5AF3, groupHash); }
static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0x1E37AEC038A241A3, ped1, ped2); }
static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0x4001C3C533FE6925, ped); }
static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0x2A661A0285B74A27, ped); }
static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0x048553DADAD2512F, group1, group2); }
static void SET_RELATIONSHIP_GROUP_AFFECTS_WANTED_LEVEL(Hash group, BOOL p1) { invoke<Void>(0x290573EE8D28208D, group, p1); }
static void TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(Ped ped, Any p1, float p2, Hash hash, Any p4, Any p5) { invoke<Void>(0xC0343109FF76497E, ped, p1, p2, hash, p4, p5); }
static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0x89C101B2B73350C7, ped, toggle); }
static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0xDC914F868C070C56, ped, radius, maxFriends); }
static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0x81ECDD5A759C026D, ped, event); }
static BOOL GET_POS_FROM_FIRED_EVENT(Ped ped, int eventType, Any* outData) { return invoke<BOOL>(0x6B7357A27B4D68F1, ped, eventType, outData); }
static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0x675B6F5098262382, ped, patternHash); }
static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0x39256A89E9D7464A, ped, shootRate); }
static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xC3AD0E1324FB3465, ped, combatType, p2); }
static float GET_COMBAT_FLOAT(Ped ped, int p1) { return invoke<float>(0x34DE92FC6933B92B, ped, p1); }
static void GET_GROUP_SIZE(int groupID, Any* p1, int* sizeInMembers) { invoke<Void>(0xE6E9D3B5BEFF0EB3, groupID, p1, sizeInMembers); }
static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xDC469CE2BE7CE722, groupId); }
static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0x26B246D60FABB3E2, ped); }
static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0x133460AD0F183CC9, ped); }
static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0x5F858847305B52A9, ped); }
static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xDC80C872B18711B5, groupId, formationType); }
static void SET_GROUP_FORMATION_SPACING(int groupId, float x, float y, float z) { invoke<Void>(0x47F8464BB13E408D, groupId, x, y, z); }
static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xAD9D10D7F8C6F478, groupHandle); }
static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0xCDA725BC2F170795, ped); }
static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0x31945A289F1359A1, ped); }
static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0x7EF69980DE8B28B0, ped, toggle); }
static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2, Any p3) { invoke<Void>(0x39AB1812D20C2C99, ped, damageAmount, p2, p3); }
static int GET_TIME_PED_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash) { return invoke<int>(0x81B96B8125212E06, ped, weaponHash); }
static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0x4CE80A0172B32F75, ped, toggle); }
static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xBC14FFDBE1C32C51, ped, toggle); }
static int GET_PED_TYPE(Ped ped) { return invoke<int>(0x0DFE7358172FC006, ped); }
static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0x91B8DEBF573007DE, ped, toggle); }
static void SET_PED_HEALTH_PENDING_LAST_DAMAGE_EVENT_OVERRIDE_FLAG(BOOL toggle) { invoke<Void>(0x12100CAEF6D8A8EF, toggle); }
static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0x36A20106D0B42723, ped, value); }
static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0x3C8EDE4003ABACA0, ped); }
static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xABA0B084615631D7, ped, value); }
static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0x0ACCC8916441860A, ped, value); }
static void SET_CORPSE_RAGDOLL_FRICTION(Ped ped, float p1) { invoke<Void>(0xC082B2B13450E715, ped, p1); }
static void SET_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped, Vehicle vehicle, int seatIndex, int flags, Any p4) { invoke<Void>(0xFD763E094E35D34A, ped, vehicle, seatIndex, flags, p4); }
static void CLEAR_ALL_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped) { invoke<Void>(0x3805B001642BC9B1, ped); }
static void SET_PED_CAN_BE_KNOCKED_OFF_BIKE(Any p0, Any p1) { invoke<Void>(0xE57B0AA791ADBC93, p0, p1); }
static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0x68F395D64BC35E68, ped, state); }
static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0x02F51D23580B7A15, ped); }
static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0x0C771CCC16BC7A60, ped); }
static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xCE2DE9BE961A9AF1, ped, posX, posY, posZ); }
static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0x619062CCF4C1D4D5, groupID, memberNumber); }
static Ped GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0x6814C7F2C075A4F3, groupID); }
static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0x44FB298D6382876D, ped, toggle); }
static void SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(Ped ped, BOOL toggle) { invoke<Void>(0x55A8A33A33B949EC, ped, toggle); }
static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0x2CFBD7757B4D922F, ped); }
static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0x9AC89B274C35B3FC, ped); }
static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0x2B083B6FDD0231F9, ped, posX, posY, posZ); }
static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD394176EC453FD41, ped, toggle); }
static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xD682DD0578BF5392, toggle); }
static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xD5E2F27BCC913BE9, toggle); }
static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0x931C6A48678F5793, toggle); }
static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0x714C359ADAF7B58F); }
static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0x4BD214FCF7332FF6, ped, toggle); }
static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xB2EDAEE9E5BA8E24, ped, p1, p2); }
static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0x17CB7D9FBEC4100F, ped); }
static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0x9D6DF8F3584AAC2B, ped); }
static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0x74408742BCE2802F, ped); }
static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0x590E598CA58BADDE, ped, toggle); }
static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xCF10C35FF25A86A7, ped, toggle); }
static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0x61BBBE1B9F8AC7D0, ped, toggle); }
static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x19621C4DDF8636D4, ped, toggle, p2); }
static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xD8746B5875BA4019, ped); }
static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0x085B81BB17715A70, ped, value); }
static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0x379E96D5D36B27DC, ped, toggle); }
static void SET_PED_MOVEMENT_CLIPSET(Ped ped, const char* clipSet, float transitionSpeed) { invoke<Void>(0x4669032A1DFBB449, ped, clipSet, transitionSpeed); }
static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0x4A46A67DB6AC487D, ped, p1); }
static void SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0x696095B298957860, ped, clipSet); }
static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0x529EC998DD2C51F8, ped); }
static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xC806A20F4C5AC6AF, ped, clipSet); }
static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xC935F6A2D1890729, ped); }
static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, const char* clipset) { invoke<Void>(0x1E4D3966543704DD, ped, clipset); }
static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0x728A2C1D61F55E08, ped); }
static void SET_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped, const char* p1) { invoke<Void>(0x6D80A3E2F71A926F, ped, p1); }
static void CLEAR_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0x8ED4FEE426B22F3D, ped); }
static void CLEAR_PED_FALL_UPPER_BODY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xBFCE94361188CEB2, ped); }
static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0x9E02F7BF34671713, ped, context); }
static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0x26E9393912EA6F6A, ped); }
static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) { return invoke<BOOL>(0xA23312A0DE89348E, ped, animDict, anim); }
static void SET_PED_ALTERNATE_WALK_ANIM(Ped ped, const char* animDict, const char* animName, float p3, BOOL p4) { invoke<Void>(0x3AE0EEB34FAAC92B, ped, animDict, animName, p3, p4); }
static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { invoke<Void>(0x8B224316C228BF51, ped, p1); }
static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) { invoke<Void>(0xCC2D0738666FD62D, ped, stance, animDictionary, animationName, p4, p5); }
static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0x384E72D362B96929, ped, stance, p2); }
static void SET_PED_GESTURE_GROUP(Ped ped, const char* animGroupGesture) { invoke<Void>(0xA962F06E648B8941, ped, animGroupGesture); }
static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xBE8776D2466E9EA6, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0x7A6103DCF5EE8CC3, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xC0120BBCC298EA2F, ped, componentId); }
static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0x1A4EFE92822E3123, ped, componentId); }
static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xD6AED6BFCC58AF7F, ped, componentId); }
static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0x8401C77F508D70FD, ped, componentId, drawableId); }
static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0x4D0F04723A52D0E9, ped, propId); }
static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0x1D77F90D87ACD2BA, ped, propId, drawableId); }
static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xDAF263B0E792EAEC, ped, componentId); }
static BOOL GET_MP_OUTFIT_DATA_FROM_METADATA(Any* p0, Any* p1) { return invoke<BOOL>(0x386E4537DAFC3779, p0, p1); }
static int GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0x82ADFEA98A0C26DC, p0); }
static int GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0x6F4B2AB7CFB2F472, p0); }
static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xE91CD2B3CF8A106C, ped, componentId, drawableId, textureId); }
static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xD1C578C204015E1F, ped, componentId, drawableId, textureId, paletteId); }
static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { invoke<Void>(0xC6E8E1D693021E9E, ped, p1); }
static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xB6FA664D27C123AC, ped); }
static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0x77EFA99E6A8FFC43, ped); }
static void SET_PED_BLEND_FROM_PARENTS(Ped ped, Any p1, Any p2, float p3, float p4) { invoke<Void>(0x335B397DCC88FD74, ped, p1, p2, p3, p4); }
static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0x0A5987DCA39E8BE5, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); }
static BOOL GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0x5CB7287FD7611BC7, ped, headBlendData); }
static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xB320F619D5CC2D27, ped, shapeMix, skinMix, thirdMix); }
static void SET_HEAD_BLEND_EYE_COLOR(Ped ped, int index) { invoke<Void>(0x348FF3E632DCB635, ped, index); }
static int GET_HEAD_BLEND_EYE_COLOR(Ped ped) { return invoke<int>(0x795C9AE513FFEF5F, ped); }
static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xE5B6C9B29510B84E, ped, overlayID, index, opacity); }
static int GET_PED_HEAD_OVERLAY(Ped ped, int overlayID) { return invoke<int>(0x8E73BECF421D257E, ped, overlayID); }
static int GET_PED_HEAD_OVERLAY_NUM(int overlayID) { return invoke<int>(0x6D19BF3A83702C49, overlayID); }
static void SET_PED_HEAD_OVERLAY_TINT(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0x94965BB62753D4D6, ped, overlayID, colorType, colorID, secondColorID); }
static void SET_PED_HAIR_TINT(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0x894EE2587C8D8D1E, ped, colorID, highlightColorID); }
static int GET_NUM_PED_HAIR_TINTS() { return invoke<int>(0x37A0D41DCFB52CC8); }
static int GET_NUM_PED_MAKEUP_TINTS() { return invoke<int>(0x0A4209F7407B86F6); }
static void GET_PED_HAIR_TINT_COLOR(int hairColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xB062D1D08D9CC751, hairColorIndex, outR, outG, outB); }
static void GET_PED_MAKEUP_TINT_COLOR(int makeupColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0x091AAB4C71ADE4CD, makeupColorIndex, outR, outG, outB); }
static BOOL IS_PED_HAIR_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xCBC4C0F54C8BFFD1, colorId); }
static int GET_DEFAULT_SECONDARY_TINT_FOR_CREATOR(int colorId) { return invoke<int>(0xBED8C136A36DA2C4, colorId); }
static BOOL IS_PED_LIPSTICK_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xC4DF7897A59B7B8F, colorId); }
static BOOL IS_PED_BLUSH_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0x86F83CBBA37677B2, colorId); }
static BOOL IS_PED_HAIR_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xBB9FAE42E3101CD8, colorID); }
static int GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(int colorID) { return invoke<int>(0x0BC34ECDC4790796, colorID); }
static BOOL IS_PED_LIPSTICK_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0x52611559311E2B64, colorID); }
static BOOL IS_PED_BLUSH_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xE3FAB626C2DBDF88, colorID); }
static BOOL IS_PED_BLUSH_FACEPAINT_TINT_FOR_BARBER(int colorId) { return invoke<BOOL>(0xA3089FB5A559E0D5, colorId); }
static int GET_TINT_INDEX_FOR_LAST_GEN_HAIR_TEXTURE(Hash modelHash, int drawableId, int textureId) { return invoke<int>(0xD839A970B98A1E9C, modelHash, drawableId, textureId); }
static void SET_PED_MICRO_MORPH(Ped ped, int index, float scale) { invoke<Void>(0xAAF9B08B469F707F, ped, index, scale); }
static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0x4CEC77F224BCD884, ped); }
static void FINALIZE_HEAD_BLEND(Ped ped) { invoke<Void>(0xAF8337BF5A296283, ped); }
static void SET_HEAD_BLEND_PALETTE_COLOR(Ped ped, int r, int g, int b, int id) { invoke<Void>(0xA3C0950202881572, ped, r, g, b, id); }
static void DISABLE_HEAD_BLEND_PALETTE_COLOR(Ped ped) { invoke<Void>(0x0C3579BA21459B45, ped); }
static int GET_PED_HEAD_BLEND_FIRST_INDEX(int type) { return invoke<int>(0x6C88944114345A04, type); }
static int GET_PED_HEAD_BLEND_NUM_HEADS(int type) { return invoke<int>(0x69618F2236615539, type); }
static int SET_PED_PRELOAD_VARIATION_DATA(Ped ped, int slot, int drawableId, int textureId) { return invoke<int>(0xBE291C733F237949, ped, slot, drawableId, textureId); }
static BOOL HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xB76612E72B637A6B, ped); }
static void RELEASE_PED_PRELOAD_VARIATION_DATA(Ped ped) { invoke<Void>(0x30325AB568E2F2EF, ped); }
static int SET_PED_PRELOAD_PROP_DATA(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<int>(0xEC129CEFDDA0A303, ped, componentId, drawableId, TextureId); }
static BOOL HAS_PED_PRELOAD_PROP_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0x14491B5694114619, ped); }
static void RELEASE_PED_PRELOAD_PROP_DATA(Ped ped) { invoke<Void>(0xB736C2C734C35F54, ped); }
static int GET_PED_PROP_INDEX(Ped ped, int componentId, Any p2) { return invoke<int>(0xB204F40D393426B6, ped, componentId, p2); }
static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach, Any p5) { invoke<Void>(0x7F08C4791E6D6969, ped, componentId, drawableId, TextureId, attach, p5); }
static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xE19C037272259115, ped, p1, p2, p3, p4); }
static void CLEAR_PED_PROP(Ped ped, int propId, Any p2) { invoke<Void>(0x09397806857F5DFB, ped, propId, p2); }
static void CLEAR_ALL_PED_PROPS(Ped ped, Any p1) { invoke<Void>(0x445E7F949766A0C7, ped, p1); }
static void DROP_AMBIENT_PROP(Ped ped) { invoke<Void>(0x5A5573FECDE27C3C, ped); }
static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0x0DC23FA727759F9F, ped, componentId); }
static void CLEAR_PED_PARACHUTE_PACK_VARIATION(Ped ped) { invoke<Void>(0xCDF42A1B8D2576E8, ped); }
static void SET_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0x07E6931DA4A9ACB6, ped); }
static void CLEAR_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xB0EFB4958498E2D0, ped); }
static BOOL IS_USING_PED_SCUBA_GEAR_VARIATION(Any p0) { return invoke<BOOL>(0x1D5385246A3434D3, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xAAA71DD7E9059338, ped, toggle); }
static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float x, float y, float z) { invoke<Void>(0xEABB1C18FA028606, ped, p1, p2, x, y, z); }
static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xC225BC409BD24794, ped, target); }
static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xA2759157C7F12D3C, ped, radius); }
static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0xFA4D35AD36BDA1FE, x, y, z, xRadius, yRadius, zRadius, pedType); }
static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0x02E029D1D9614563, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); }
static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0x9C9B7988CF45CAF0, value); }
static BOOL GET_CAN_PED_BE_GRABBED_BY_SCRIPT(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0x51150F0B2D9D1CF3, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_DRIVER_RACING_MODIFIER(Ped driver, float modifier) { invoke<Void>(0xF823BACD940DEAF1, driver, modifier); }
static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0x6D618646705A0465, driver, ability); }
static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0x8C863F5EB14919DB, driver, aggressiveness); }
static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xC24FAA5E8D69F7F8, ped); }
static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xB1C2DC5C115FA50D, ped, time1, time2, ragdollType, p4, p5, p6); }
static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float velocity, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0x52B67D4C57E4BF4B, ped, time, p2, ragdollType, x, y, z, velocity, p8, p9, p10, p11, p12, p13); }
static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xF9E1F44FD9B4934B, ped, toggle); }
static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0x8BF5256C439DF778, ped); }
static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0x86521C678E8AA3FF, ped); }
static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0x661428616F87F180, ped); }
static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xBD1B952A9BBB567F, ped); }
static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0x9FF00EA9A61211D2, ped, toggle); }
static BOOL IS_PED_RUNNING_MELEE_TASK(Ped ped) { return invoke<BOOL>(0x942229677774817C, ped); }
static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0x65815C3D3CB39062, ped); }
static BOOL IS_MOBILE_PHONE_TO_PED_EAR(Ped ped) { return invoke<BOOL>(0xD9FC29710C12DA3A, ped); }
static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0x72B18C9612CF3DA0, ped, blockingFlag); }
static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xBCB78CFBB026B0DF, ped, blockingFlag); }
static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xDF2B856299BCDF13, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xBB4D4E549F8E6E8C, ped, x, y, z, radius, p5, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0x98EEF9ADA73BD5B2, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Ped ped, Vehicle target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0x06AA75009161058B, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xE0C92005A30D227B, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0x1738EA03946B4D2A, ped, p1, p2, p3, p4); }
static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0x805B057FA4E28531, ped, toggle); }
static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0x93B95A59CB61088B, ped, p1); }
static BOOL IS_PED_DEFENSIVE_AREA_ACTIVE(Ped ped, BOOL p1) { return invoke<BOOL>(0x4B3F6436660DC25C, ped, p1); }
static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0x392230C626567F51, ped, itemSet); }
static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0x97FD4A8DDB09A043, ped); }
static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xB713CAFC12DED3BE, ped); }
static void RESURRECT_PED(Ped ped) { invoke<Void>(0x6ED737C2A74E181D, ped); }
static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { invoke<Void>(0xEB418CA245FFE897, ped, name); }
static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) { return invoke<Vector3>(0x8C4993D059F4DAEB, ped, worldSpace); }
static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0x9E6CC93E007219AC, ped, toggle); }
static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0x9590C8D34FFFCE10, ped, toggle); }
static void SPECIAL_FUNCTION_DO_NOT_USE(Ped ped, BOOL p1) { invoke<Void>(0x4EBA48817E0C608D, ped, p1); }
static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0x69AE13B08EFD8497, ped); }
static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0x83707FFC4BC486A1, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType) { invoke<Void>(0xFFD554A221AA80F0, ped, boneIndex, xRot, yRot, zRot, woundType); }
static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, int p1, float p2, float p3, const char* p4) { invoke<Void>(0x07D31B8F40A98A75, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, int p1, float p2, float p3, float p4, float p5, int p6, float p7, const char* p8) { invoke<Void>(0xD1D8E1BF0769890C, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void APPLY_PED_DAMAGE_DECAL(Ped ped, int damageZone, float xOffset, float yOffset, float heading, float scale, float alpha, int variation, BOOL fadeIn, const char* decalName) { invoke<Void>(0xC9FB3D0735F8ECD9, ped, damageZone, xOffset, yOffset, heading, scale, alpha, variation, fadeIn, decalName); }
static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { invoke<Void>(0x5909C9E03CEF097D, ped, damagePack, damage, mult); }
static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0x8EA9C5E0178372E1, ped); }
static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0x1926B687CF984FCC, ped, p1); }
static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0x81C558E9A03D2F2B, ped, p1, p2); }
static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) { invoke<Void>(0xC6DFC06670D0589A, ped, p1, p2); }
static int GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<int>(0x1ACEEA8FD72F77BC, ped); }
static void MARK_PED_DECORATIONS_AS_CLONED_FROM_LOCAL_PLAYER(Ped ped, BOOL p1) { invoke<Void>(0x67A5951D0BFF01FA, ped, p1); }
static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0x5EF96FB2D3902DC7, ped); }
static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0x545222B91BFCB344, ped, height); }
static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0x0DFA7D3DCFE10E65, ped); }
static void SET_PED_WETNESS(Ped ped, float wetLevel) { invoke<Void>(0xA60928A188EC78EF, ped, wetLevel); }
static void CLEAR_PED_ENV_DIRT(Ped ped) { invoke<Void>(0xD81F5EA29FD2682E, ped); }
static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0xB44335AF5013DA2A, ped, sweat); }
static void ADD_PED_DECORATION_FROM_HASHES(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0x49A5A17556C31561, ped, collection, overlay); }
static void ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0x166CDAB8FE42C210, ped, collection, overlay); }
static int GET_PED_DECORATION_ZONE_FROM_HASHES(Hash collection, Hash overlay) { return invoke<int>(0x50CA4ACB66148FF0, collection, overlay); }
static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xA781062E77B54775, ped); }
static void CLEAR_PED_DECORATIONS_LEAVE_SCARS(Ped ped) { invoke<Void>(0x98E00E3ED7D61628, ped); }
static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0x3268785AA66D674C, ped); }
static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x83FDC027F0BEA202, ped, boneId, offsetX, offsetY, offsetZ); }
static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0x83DCA877143E0B26, startImmediately, messageId); }
static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xAFFF2379B0BAC81C, ped); }
static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0xA7B0B03284E7503C, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0x830C51B62E7CD5B2); }
static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0xD7B6A43ACC36D868, p0, p1); }
static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<Void>(0x2485C562F3C50736, x, y, z, range, p4); }
static BOOL DOES_SCENARIO_BLOCKING_AREA_EXISTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xCFE9A25C2271CFBF, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PED_USING_SCENARIO(Ped ped, const char* scenario) { return invoke<BOOL>(0x282B0289FBD3C119, ped, scenario); }
static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0x5110BDFA9CB51F2B, ped); }
static BOOL SET_PED_PANIC_EXIT_SCENARIO(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x51468F9DE2FB70E4, p0, p1, p2, p3); }
static void TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped ped, BOOL toggle) { invoke<Void>(0x2A3951555E558728, ped, toggle); }
static BOOL TRIGGER_PED_SCENARIO_PANICEXITTOFLEE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xD4DE27DF3E2EBFF4, p0, p1, p2, p3); }
static BOOL SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xFFB6CB69ACC75D8D, p0, p1, p2, p3); }
static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xAB51C8960A87DF53, ped); }
static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped ped) { invoke<Void>(0x895CE77855F9AFD2, ped); }
static BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped ped, Any p1, Any p2, Any p3) { return invoke<BOOL>(0x36B2377A209962E5, ped, p1, p2, p3); }
static void SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Ped ped, BOOL p1) { invoke<Void>(0x77837D91524AF89C, ped, p1); }
static void SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Any p0, BOOL p1) { invoke<Void>(0x92298AA9DE8C4A55, p0, p1); }
static void SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Any p0, BOOL p1) { invoke<Void>(0xE54C4227DC826E1C, p0, p1); }
static BOOL IS_PED_GESTURING(Any p0) { return invoke<BOOL>(0xB3BE3390D375B97E, p0); }
static void RESET_FACIAL_IDLE_ANIM(Ped ped) { invoke<Void>(0xCE0A933AAD7CE47D, ped); }
static void PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0x7ACB6964CC7261E4, ped, animName, animDict); }
static void SET_FACIAL_CLIPSET(Ped ped, const char* animDict) { invoke<Void>(0xA86012225D130D96, ped, animDict); }
static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0x2C09C6B54CFCFAF1, ped, animName, animDict); }
static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0x490EA3A0CF334F58, ped); }
static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0x47B4C8905694BBE1, ped, toggle); }
static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0x5260CB9F2F8EA05A, ped, toggle, p2); }
static void SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(Ped ped, BOOL p1) { invoke<Void>(0x39259B19C39CA05F, ped, p1); }
static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xC1BC1B8A5AA67C6B, ped, toggle); }
static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xD9757FAB956617BA, ped, toggle); }
static void TRIGGER_IDLE_ANIMATION_ON_PED(Ped ped) { invoke<Void>(0xC4BFA8F80937118D, ped); }
static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0x59481BA67136FCF1, ped, toggle); }
static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0x07B9040E912A4EA1, ped, toggle); }
static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0x2270A1F43A18098E, ped, toggle); }
static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0x0EAF677B65FA8A40, ped, toggle); }
static void SET_PED_CAN_TORSO_REACT_IK(Ped ped, BOOL p1) { invoke<Void>(0xCCA22A4A1FC7433F, ped, p1); }
static void SET_PED_CAN_TORSO_VEHICLE_IK(Ped ped, BOOL p1) { invoke<Void>(0xD6AD3D0B48A10776, ped, p1); }
static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0x26C12212366CBF6E, ped, toggle); }
static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0x9E437CA2E2CAD79D, ped1, ped2); }
static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0x2E0309EF5F2EBDB1, ped, entity); }
static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0x183A28D5B0D656FF, ped, lookAt); }
static void SET_PED_CLOTH_PIN_FRAMES(Any p0, Any p1) { invoke<Void>(0x5B0311DB2CD63603, p0, p1); }
static void SET_PED_CLOTH_PACKAGE_INDEX(Any p0, Any p1) { invoke<Void>(0x71AA6A2F0208FC46, p0, p1); }
static void SET_PED_CLOTH_PRONE(Any p0, BOOL p1) { invoke<Void>(0x8AADE09D284D2B86, p0, p1); }
static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0x0428AFDCAA63B06E, ped, flagId, value); }
static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0x0FB8E752BCC547A9, ped, flagId, doReset); }
static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0x49F8918E2DC5FFBC, ped, flagId, p2); }
static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0x025281901DECB32C, ped, flagId); }
static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0x412B9F2CF0E60079, ped, index); }
static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0x84D421ACEBF9E529, ped, toggle); }
static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0x60C848F2DC20EC23, ped, evadingEntity); }
static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xC7AF90C5FC07B06B, ped, x, y, z, toggle); }
static void SET_PED_MODEL_IS_SUPPRESSED(Hash modelHash, BOOL toggle) { invoke<Void>(0xA1F44380A2D59F2B, modelHash, toggle); }
static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0xE5D8756E0C3EFFB7); }
static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0x11FB2E1F7BAAB75A, ped, toggle); }
static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x338FB3F98A204FD0, ped, toggle); }
static void BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x26F0AA3C95EE2A6B, ped, toggle); }
static void SET_PED_WILL_ONLY_ATTACK_WANTED_PLAYER(Any p0, Any p1) { invoke<Void>(0xA8F01F16717271B9, p0, p1); }
static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0x81E9E7612B0E4BCE, ped, toggle); }
static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0x165FAFDA0B5E4A40, ped, cannotRemove, helmetFlag, textureIndex); }
static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xE4E1DBF4388028C0, ped, instantly); }
static BOOL IS_PED_TAKING_OFF_HELMET(Ped ped) { return invoke<BOOL>(0x1073851035816B77, ped); }
static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0xECF7FE1783A38672, ped, canWearHelmet); }
static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0x2D581D395A36F669, ped, helmetFlag); }
static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex, BOOL p2) { invoke<Void>(0x8112F193D4649FEA, ped, propIndex, p2); }
static void SET_PED_HELMET_VISOR_PROP_INDICES(Ped ped, BOOL p1, int p2, int p3) { invoke<Void>(0xE354CDA241A4A73E, ped, p1, p2, p3); }
static BOOL IS_PED_HELMET_VISOR_UP(Ped ped) { return invoke<BOOL>(0x99D9C76822DA4A29, ped); }
static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0x297DBAD88EF053F9, ped, textureIndex); }
static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0x6DBAC05AFA907A23, ped); }
static void CLEAR_PED_STORED_HAT_PROP(Ped ped) { invoke<Void>(0x8452AC966C087132, ped); }
static int GET_PED_HELMET_STORED_HAT_PROP_INDEX(Ped ped) { return invoke<int>(0xB34A70D5AC13FB8C, ped); }
static int GET_PED_HELMET_STORED_HAT_TEX_INDEX(Ped ped) { return invoke<int>(0xAA6E5BB6733B4BB0, ped); }
static BOOL IS_CURRENT_HEAD_PROP_A_HELMET(Any p0) { return invoke<BOOL>(0xBA172498AF5A8211, p0); }
static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x70FF391C9D345B04, ped, toggle); }
static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x32089D2C6AD6199B, ped, toggle); }
static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0x2D3F2F7AD2E2AB65, ped, toggle); }
static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xD78BC33933604161, ped, toggle); }
static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xFC85193CBD98FD69, ped, mode); }
static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xD4109F723B3DF74F, ped, toggle); }
static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xD724351CCF90F653, ped, toggle); }
static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0x3FF406EF0BE27DA3, ped, toggle); }
static void SET_LADDER_CLIMB_INPUT_STATE(Ped ped, int p1) { invoke<Void>(0x52E59AF01BE23E89, ped, p1); }
static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { invoke<Void>(0x9EDCA2C3E5F3B330, ped); }
static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { invoke<Void>(0x3DE9177F07328831, ped, p1); }
static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xD0764B65C2DFEDCA, ped, combatMovement); }
static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0x3EFB664623EEAD3F, ped); }
static void SET_PED_COMBAT_ABILITY(Ped ped, int abilityLevel) { invoke<Void>(0x139711196A42A037, ped, abilityLevel); }
static void SET_PED_COMBAT_RANGE(Ped ped, int combatRange) { invoke<Void>(0x1090EAA386FB31A8, ped, combatRange); }
static int GET_PED_COMBAT_RANGE(Ped ped) { return invoke<int>(0x883842C6E1BC2105, ped); }
static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeId, BOOL enabled) { invoke<Void>(0xBE8796DB2B90A437, ped, attributeId, enabled); }
static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0x570AAA413775DFFB, ped, responseType); }
static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped) { return invoke<BOOL>(0xB73833BDAAE31047, ped); }
static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0x729CB628AF931FC1, ped); }
static BOOL IS_PED_PERFORMING_A_COUNTER_ATTACK(Ped ped) { return invoke<BOOL>(0xB915B7889D38C06A, ped); }
static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0x145143011E40A843, ped); }
static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0xC148F260F73A1A6B, ped); }
static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0x5BDFCAB88CC62A9B, ped); }
static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xD9F6166CE6292D26, ped); }
static BOOL WAS_PED_KNOCKED_OUT(Ped ped) { return invoke<BOOL>(0x969DAA52492D900B, ped); }
static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { invoke<Void>(0x1CA08719184AFC6F, ped, attributeFlags, enable); }
static void SET_PED_COWER_HASH(Ped ped, const char* p1) { invoke<Void>(0xE591C62C2F46B4D7, ped, p1); }
static void SET_PED_STEERS_AROUND_DEAD_BODIES(Ped ped, BOOL toggle) { invoke<Void>(0xB18666D28D4F44C5, ped, toggle); }
static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0x639E8A4EA31DD813, ped, toggle); }
static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xD6218A048A54AAB5, ped, toggle); }
static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0x98692EF468EC3185, ped, toggle); }
static void SET_PED_IS_AVOIDED_BY_OTHERS(Any p0, BOOL p1) { invoke<Void>(0xC55B2DE435555EC3, p0, p1); }
static void SET_PED_INCREASED_AVOIDANCE_RADIUS(Ped ped) { invoke<Void>(0xB739D4CB4D58B663, ped); }
static void SET_PED_BLOCKS_PATHING_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x67CBB32D0502A940, ped, toggle); }
static void SET_PED_NO_TIME_DELAY_BEFORE_SHOT(Any p0) { invoke<Void>(0x80DCC55011762DB5, p0); }
static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x2DBCF31839B069B4, x, y, z, radius); }
static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xD8ED11B32DF72E0B, ped, p1, p2); }
static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0xA702E444F81F0A83, ped, x, y, z, p4); }
static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0x7A8C6BB4DA2434F1, ped); }
static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0x7AA365BA6A18440B, ped, p1); }
static void REQUEST_PED_RESTRICTED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0x2437F0D5BB0A2298, ped, p1); }
static void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xB861E76BA27B15F1, ped, p1); }
static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0x731EE2A006FD5120, ped); }
static int GET_TRACKED_PED_PIXELCOUNT(Ped ped) { return invoke<int>(0x9AD0C5A6374B4A86, ped); }
static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xDEA601233F857293, ped); }
static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, int eventId) { return invoke<BOOL>(0x613F3705BEA060B4, ped, eventId); }
static BOOL CAN_PED_SEE_HATED_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0x7E54CB377175F94E, ped1, ped2); }
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_TURRET_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xB4C8F59204E526EA, ped, p1); }
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_EXTRA_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xFB91087FE596EC02, ped, p1); }
static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0x72F7E39FB49FC0BA, ped, boneId); }
static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0xA2EFF78CEBC29932, ped, bone); }
static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xDD7B1A7458742205, ped, value); }
static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0x5D023856BF4C9AB2, ped); }
static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xC91E7DFEE6F07739, ped, toggle); }
static void SET_PED_ENVEFF_CPV_ADD(Ped ped, float p1) { invoke<Void>(0xD9101AFF302E59F6, ped, p1); }
static void SET_PED_ENVEFF_COLOR_MODULATOR(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xA681A230BE3E4A24, ped, p1, p2, p3); }
static void SET_PED_EMISSIVE_SCALE(Ped ped, float intensity) { invoke<Void>(0xB0FB407889558D1A, ped, intensity); }
static float GET_PED_EMISSIVE_SCALE(Ped ped) { return invoke<float>(0x6D7810EB34D1A1E3, ped); }
static BOOL IS_PED_SHADER_READY(Ped ped) { return invoke<BOOL>(0xE87274DCAEC35329, ped); }
static void SET_PED_ENABLE_CREW_EMBLEM(Ped ped, BOOL toggle) { invoke<Void>(0xE8CE8BAA294AD605, ped, toggle); }
static void REQUEST_RAGDOLL_BOUNDS_UPDATE(Any p0, Any p1) { invoke<Void>(0xA56B5C6A4349684D, p0, p1); }
static void SET_PED_AO_BLOB_RENDERING(Ped ped, BOOL toggle) { invoke<Void>(0x949A46B6409BF541, ped, toggle); }
static BOOL IS_PED_SHELTERED(Ped ped) { return invoke<BOOL>(0x021754B7D780A311, ped); }
static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0x2EC137C692A52458, x, y, z, roll, pitch, yaw, p6); }
static int CREATE_SYNCHRONIZED_SCENE_AT_MAP_OBJECT(float x, float y, float z, float radius, Hash object) { return invoke<int>(0xEC6D10B2D602CDDF, x, y, z, radius, object); }
static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0x5266F1D2AEF6F73A, sceneId); }
static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0x8E654C1A28DAD371, sceneID, x, y, z, roll, pitch, yaw, p7); }
static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0x7BB893EF8F683419, sceneID, phase); }
static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xBD3B265153D3BA2D, sceneID); }
static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0x16B754A9C2FD8E74, sceneID, rate); }
static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0x81A27DBBC2296EB2, sceneID); }
static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { invoke<Void>(0xBF3497E24DEAD835, sceneID, toggle); }
static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0x7E2BC58952835E3B, sceneID); }
static void SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID, BOOL toggle) { invoke<Void>(0xA7C372501A8A3B23, sceneID, toggle); }
static BOOL IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID) { return invoke<BOOL>(0x5BD19E1149597B09, sceneID); }
static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0x2DCB8CA1FE6895AB, sceneID, entity, boneIndex); }
static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0x83E8210E2B5723F2, sceneID); }
static void TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(int scene) { invoke<Void>(0x007DF2AFED58568A, scene); }
static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0x717804C8C8DA67BF, ped, motionStateHash, p2, p3, p4); }
static BOOL GET_PED_CURRENT_MOVE_BLEND_RATIO(Ped ped, float* speedX, float* speedY) { return invoke<BOOL>(0x5437DF794F3A1FAA, ped, speedX, speedY); }
static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x4190C67D524CD0DC, ped, value); }
static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0x7992D566A90CD49C, ped, value); }
static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xB27B08E34AC92345, ped, value); }
static void SET_PED_MOVE_RATE_IN_WATER_OVERRIDE(Ped ped, float p1) { invoke<Void>(0xFF02104E431CCA25, ped, p1); }
static BOOL PED_HAS_SEXINESS_FLAG_SET(Ped ped, int sexinessFlag) { return invoke<BOOL>(0x840F81C8B23F1122, ped, sexinessFlag); }
static int GET_PED_NEARBY_VEHICLES(Ped ped, Any* sizeAndVehs) { return invoke<int>(0xD65B4E942A960E26, ped, sizeAndVehs); }
static int GET_PED_NEARBY_PEDS(Ped ped, Any* sizeAndPeds, int ignore) { return invoke<int>(0xAA3F0A9E20917995, ped, sizeAndPeds, ignore); }
static BOOL HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Ped ped) { return invoke<BOOL>(0x69CD279BFCFE278E, ped); }
static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0x1072B16512C86D96, ped); }
static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, int p2, const char* action) { invoke<Void>(0x96A0632EBDD87FA3, ped, p1, p2, action); }
static void SET_MOVEMENT_MODE_OVERRIDE(Ped ped, const char* name) { invoke<Void>(0x5C61336874E84777, ped, name); }
static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0x04FC75A7251431C6, ped, value); }
static int REGISTER_PEDHEADSHOT(Ped ped) { return invoke<int>(0x5CF63381522A9972, ped); }
static int REGISTER_PEDHEADSHOT_HIRES(Ped ped) { return invoke<int>(0xA4C84E0CB47D2F16, ped); }
static int REGISTER_PEDHEADSHOT_TRANSPARENT(Ped ped) { return invoke<int>(0xD993C02BC3A99162, ped); }
static void UNREGISTER_PEDHEADSHOT(int id) { invoke<Void>(0x697995B2B26B6CD4, id); }
static BOOL IS_PEDHEADSHOT_VALID(int id) { return invoke<BOOL>(0xCF3FA9D6B87D2277, id); }
static BOOL IS_PEDHEADSHOT_READY(int id) { return invoke<BOOL>(0x445B6F53EA9E6A6F, id); }
static const char* GET_PEDHEADSHOT_TXD_STRING(int id) { return invoke<const char*>(0x008C0EB38E4459EE, id); }
static BOOL REQUEST_PEDHEADSHOT_IMG_UPLOAD(int id) { return invoke<BOOL>(0x63F7CF92622A91BF, id); }
static void RELEASE_PEDHEADSHOT_IMG_UPLOAD(int id) { invoke<Void>(0x60EF2F9A22C75C6D, id); }
static BOOL IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE() { return invoke<BOOL>(0x8F38E50ADC31E1C2); }
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED() { return invoke<BOOL>(0xFE3891B19F28B05F); }
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED() { return invoke<BOOL>(0x39B1D02A82A412D3); }
static void SET_PED_HEATSCALE_OVERRIDE(Ped ped, float heatScale) { invoke<Void>(0x3A99D838C9A7E1A7, ped, heatScale); }
static void DISABLE_PED_HEATSCALE_OVERRIDE(Ped ped) { invoke<Void>(0x0CE75744CB55A9B5, ped); }
static void SPAWNPOINTS_START_SEARCH(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<Void>(0x965EA50BC3B24F5B, p0, p1, p2, p3, p4, interiorFlags, scale, duration); }
static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, int interiorFlags, float scale, int duration) { invoke<Void>(0xC9666089A105E4BD, x1, y1, z1, x2, y2, z2, width, interiorFlags, scale, duration); }
static void SPAWNPOINTS_CANCEL_SEARCH() { invoke<Void>(0xE07943643E972CC4); }
static BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke<BOOL>(0xBC88293FA9783DEB); }
static BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke<BOOL>(0x35705F8A1AB3E367); }
static BOOL SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke<BOOL>(0x54CEFF81D65925A1); }
static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke<int>(0x53367B4589EB191D); }
static void SPAWNPOINTS_GET_SEARCH_RESULT(int randomInt, float* x, float* y, float* z) { invoke<Void>(0x47B485915DC62445, randomInt, x, y, z); }
static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int p0, int* p1) { invoke<Void>(0xD0905E590E711B1A, p0, p1); }
static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0xF9F66C74E3167674, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); }
static void FORCE_INSTANT_LEG_IK_SETUP(Ped ped) { invoke<Void>(0x854D2E21A9863405, ped); }
static void REQUEST_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xEC6AB0F95905E8F0, asset); }
static BOOL HAS_ACTION_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0x2B3F2546A5C7ED4F, asset); }
static void REMOVE_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xDBE717677A78CC44, asset); }
static void REQUEST_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0x56943E0C3826FD0D, asset); }
static BOOL HAS_STEALTH_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xD3FF790CDA1D2927, asset); }
static void REMOVE_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xC2B66CA01C228D6C, asset); }
static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0x93956DF263A4A0DC, ped, multiplier); }
static void SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(Ped ped, BOOL toggle, int p2) { invoke<Void>(0x6E544F5DBF10461B, ped, toggle, p2); }
static void SET_FORCE_FOOTSTEP_UPDATE(Ped ped, BOOL toggle) { invoke<Void>(0x711F9BE10FCB4E6B, ped, toggle); }
static void SET_FORCE_STEP_TYPE(Ped ped, BOOL p1, int type, int p3) { invoke<Void>(0xBA5E2010650D3EE0, ped, p1, type, p3); }
static BOOL IS_ANY_HOSTILE_PED_NEAR_POINT(Ped ped, float x, float y, float z, float radius) { return invoke<BOOL>(0x830B1CF1020074B8, ped, x, y, z, radius); }
static void SET_PED_CAN_PLAY_IN_CAR_IDLES(Ped ped, BOOL toggle) { invoke<Void>(0xDBD50CFC0081C308, ped, toggle); }
static BOOL IS_TARGET_PED_IN_PERCEPTION_AREA(Ped ped, Ped targetPed, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xB808915F3B0D8766, ped, targetPed, p2, p3, p4, p5); }
static void SET_POP_CONTROL_SPHERE_THIS_FRAME(float x, float y, float z, float min, float max) { invoke<Void>(0x1A3EA72E4830538F, x, y, z, min, max); }
static void FORCE_ZERO_MASS_IN_COLLISIONS(Ped ped) { invoke<Void>(0xF1EA3BEE2C40F823, ped); }
static void SET_DISABLE_HIGH_FALL_DEATH(Ped ped, BOOL toggle) { invoke<Void>(0x94FC2CFCFFCE172C, ped, toggle); }
static void SET_PED_PHONE_PALETTE_IDX(Any p0, Any p1) { invoke<Void>(0x7CB81DD9FBD57E82, p0, p1); }
static void SET_PED_STEER_BIAS(Ped ped, float value) { invoke<Void>(0xD4D1973154415E9B, ped, value); }
static BOOL IS_PED_SWITCHING_WEAPON(Ped Ped) { return invoke<BOOL>(0xB8263BF236C755A5, Ped); }
static void SET_PED_TREATED_AS_FRIENDLY(Any p0, Any p1, Any p2) { invoke<Void>(0x3B3AC5F69E21EAB7, p0, p1, p2); }
static void SET_DISABLE_PED_MAP_COLLISION(Ped ped) { invoke<Void>(0x7EF0501CDC9F69F6, ped); }
static void ENABLE_MP_LIGHT(Ped ped, BOOL toggle) { invoke<Void>(0x6164A393993354D7, ped, toggle); }
static BOOL GET_MP_LIGHT_ENABLED(Ped ped) { return invoke<BOOL>(0xAA5FEAAE62F40979, ped); }
static void CLEAR_COVER_POINT_FOR_PED(Ped ped) { invoke<Void>(0xE3AACA4B344A6492, ped); }
static void SET_ALLOW_STUNT_JUMP_CAMERA(Ped ped, BOOL toggle) { invoke<Void>(0xE7D55A9EFD3E9475, ped, toggle); }
static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float windingSpeed, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<int>(0x0689621FADCB043F, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, windingSpeed, p11, p12, rigid, p14, breakWhenShot, unkPtr); }
static void DELETE_ROPE(int* ropeId) { invoke<Void>(0x51EC3CEC568ABB81, ropeId); }
static void DELETE_CHILD_ROPE(int ropeId) { invoke<Void>(0x6FC03AECD995B8CC, ropeId); }
static BOOL DOES_ROPE_EXIST(int* ropeId) { return invoke<BOOL>(0x3E2705A53B1D4A09, ropeId); }
static void ROPE_DRAW_ENABLED(int* ropeId, BOOL p1) { invoke<Void>(0x96205EB96C14F85F, ropeId, p1); }
static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { invoke<Void>(0x673A321A632EAD3B, ropeId, toggle); }
static void LOAD_ROPE_DATA(int ropeId, const char* rope_preset) { invoke<Void>(0x4244303B05A2EF30, ropeId, rope_preset); }
static void PIN_ROPE_VERTEX(int ropeId, int vertex, float x, float y, float z) { invoke<Void>(0x537D4AFC3C6E5A9B, ropeId, vertex, x, y, z); }
static void UNPIN_ROPE_VERTEX(int ropeId, int vertex) { invoke<Void>(0x32E7B8CFE85DB282, ropeId, vertex); }
static int GET_ROPE_VERTEX_COUNT(int ropeId) { return invoke<int>(0x29D9CA677F5D2A36, ropeId); }
static void ATTACH_ENTITIES_TO_ROPE(int ropeId, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0x3640C9BF5BF56ED8, ropeId, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
static void ATTACH_ROPE_TO_ENTITY(int ropeId, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0x73F3DA3B1BFA714B, ropeId, entity, x, y, z, p5); }
static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { invoke<Void>(0x6DE0DFF01BAFA2BC, ropeId, entity); }
static void ROPE_SET_UPDATE_PINVERTS(int ropeId) { invoke<Void>(0x7E27CBB7DF2BAE69, ropeId); }
static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { invoke<Void>(0x0BE3274CCADBCC99, ropeId, p1); }
static void ROPE_SET_SMOOTH_REELIN(int ropeId, BOOL p1) { invoke<Void>(0x39073821D1E47645, ropeId, p1); }
static BOOL IS_ROPE_ATTACHED_AT_BOTH_ENDS(int* ropeId) { return invoke<BOOL>(0xB9DDE5F54A275DFF, ropeId); }
static Vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeId) { return invoke<Vector3>(0xCD3F86829B5968C9, ropeId); }
static Vector3 GET_ROPE_VERTEX_COORD(int ropeId, int vertex) { return invoke<Vector3>(0x7AACE64DEE426629, ropeId, vertex); }
static void START_ROPE_WINDING(int ropeId) { invoke<Void>(0x2CFF537DCB91BDF5, ropeId); }
static void STOP_ROPE_WINDING(int ropeId) { invoke<Void>(0x1A14B471E6F52A55, ropeId); }
static void START_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0x9C8254FD6ED020B7, ropeId); }
static void STOP_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0x780E1FA7EA99BE9A, ropeId); }
static void ROPE_CONVERT_TO_SIMPLE(int ropeId) { invoke<Void>(0x3C3B85A84C954686, ropeId); }
static void ROPE_LOAD_TEXTURES() { invoke<Void>(0x162DAE7141F06640); }
static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xC54A9DA207D0D713); }
static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xEBB9FF9FD0CF4CB2); }
static BOOL DOES_SCRIPT_OWN_ROPE(int ropeId) { return invoke<BOOL>(0x67386FF623605BB2, ropeId); }
static void ROPE_ATTACH_VIRTUAL_BOUND_GEOM(int ropeId, int p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { invoke<Void>(0x67C2FA3B5006F779, ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void ROPE_CHANGE_SCRIPT_OWNER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x7A7B42D5C86E7EDF, p0, p1, p2); }
static void ROPE_SET_REFFRAMEVELOCITY_COLLIDERORDER(int ropeId, int p1) { invoke<Void>(0x0A07F53F5EED824F, ropeId, p1); }
static float ROPE_GET_DISTANCE_BETWEEN_ENDS(int ropeId) { return invoke<float>(0x6D4D0805396CE83B, ropeId); }
static void ROPE_FORCE_LENGTH(int ropeId, float length) { invoke<Void>(0xB5186C080A343976, ropeId, length); }
static void ROPE_RESET_LENGTH(int ropeId, float length) { invoke<Void>(0xECFFA90DECC6D406, ropeId, length); }
static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xCA8F3804D06FF7BF, posX, posY, posZ, vecX, vecY, vecZ, impulse); }
static void SET_DAMPING(Entity entity, int vertex, float value) { invoke<Void>(0x43C223EA02402E66, entity, vertex, value); }
static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0x79B52EC5A9AB6229, entity); }
static void SET_CGOFFSET(Entity entity, float x, float y, float z) { invoke<Void>(0x8462CDB3E1DA954A, entity, x, y, z); }
static Vector3 GET_CGOFFSET(Entity entity) { return invoke<Vector3>(0x30E2D00B68214AB1, entity); }
static void SET_CG_AT_BOUNDCENTER(Entity entity) { invoke<Void>(0xE2B3F860B1A40B7B, entity); }
static void BREAK_ENTITY_GLASS(Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xF7AACF0E52319649, entity, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL GET_IS_ENTITY_A_FRAG(Object object) { return invoke<BOOL>(0x4F1CAAB808618FF8, object); }
static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { invoke<Void>(0xA713C2357FA1526D, object, toggle); }
static void RESET_DISABLE_BREAKING(Object object) { invoke<Void>(0x950E5A2F4659D2BD, object); }
static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0x091DA52005030F41, object, toggle); }
static void SET_USE_KINEMATIC_PHYSICS(Entity entity, BOOL toggle) { invoke<Void>(0x5FB8641E415105C3, entity, toggle); }
static void SET_IN_STUNT_MODE(BOOL p0) { invoke<Void>(0xE9E7D9BE2DE2136A, p0); }
static void SET_IN_ARENA_MODE(BOOL toggle) { invoke<Void>(0xB5CC1BD0A7024484, toggle); }
static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0x56E414973C2A8C0E, player); }
static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0xE8466DBC1A7E794F, player); }
static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0x52E0301351FCDEC5, player, model); }
static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL resetDamage) { invoke<Void>(0x43892D65E9AE6F1B, player, ped, p2, resetDamage); }
static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0x8137826EBA634D9F, player, r, g, b); }
static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0x7D1D107CFA0B3F0F); }
static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0x1864096A95E36EBA, player); }
static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0x1B0F8D3B4EE07EE0, player, team); }
static int GET_NUMBER_OF_PLAYERS_IN_TEAM(int team) { return invoke<int>(0x18476AA515A4460B, team); }
static const char* GET_PLAYER_NAME(Player player) { return invoke<const char*>(0xBD6CA019F46AB947, player); }
static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0xF4141D223F2B1C76, player); }
static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0x8924DF54D314FD78, player); }
static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, Vector3* position, BOOL p2, BOOL p3) { invoke<Void>(0xEFE2B06D5134CD46, player, position, p2, p3); }
static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0x30C1D2072FB75567, wantedLevel); }
static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0xE20A252886E4FE1D, player, wantedLevel, disableNoMission); }
static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xF165EAD0AA08F3B6, player, wantedLevel, p2); }
static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0x42C9A22D6724F283, player, p1); }
static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xA2E55F2C91545EAD, player); }
static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0x72C7CC058228E633, player); }
static BOOL IS_WANTED_AND_HAS_BEEN_SEEN_BY_COPS(Player player) { return invoke<BOOL>(0x9780872414DA43F8, player); }
static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xE383E18054CA323B, player, toggle); }
static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0x3EE1A6D743332852, player, wantedLevel); }
static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0x3C482AC51A8E85DC, player); }
static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xD5FF242D0AFC5855, player); }
static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0x692665178199313C, player); }
static void SET_PLAYER_CONTROL(Player player, BOOL bHasControl, int flags) { invoke<Void>(0x4686BC3BFDBB5348, player, bHasControl, flags); }
static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xE7B45027762DEFE7, player); }
static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xDAE61414743C8D1D, maxWantedLevel); }
static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0x7AD72DFA04253E47, toggle); }
static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xDAA51A56DBEC0391, player, toggle); }
static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0x75EAB09F5E974116, player); }
static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0x3AFFD31224BF9207, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xAC50C24F47D00104, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0x9C931A1395CC1AE9, player); }
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0x8D76C231AB0E62A1, player, toggle); }
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xCD0F6D8C76DD22A7, player); }
static void SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(Player player) { invoke<Void>(0x73CB9EAA55D097EB, player); }
static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0x50402A290336E9AF, player, toggle); }
static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0x425BBE19F25A57AB, multiplier); }
static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0x446468040E515438, player, difficulty); }
static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xF58D3BBA4A469D70, player); }
static int GET_WANTED_LEVEL_TIME_TO_ESCAPE() { return invoke<int>(0xBF02D50FC8112D5B); }
static void SET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player, int wantedLevel, int lossTime) { invoke<Void>(0x64A38E41CEF44EEB, player, wantedLevel, lossTime); }
static void RESET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player) { invoke<Void>(0x252B3E511E67DD84, player); }
static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0x97915D82C999021F, duration); }
static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0x80A39DDADDA2585C, player, crimeType, wantedLvlThresh); }
static void SUPPRESS_CRIME_THIS_FRAME(Player player, int crimeType) { invoke<Void>(0xFE89392FAC7394F2, player, crimeType); }
static void UPDATE_WANTED_POSITION_THIS_FRAME(Player player) { invoke<Void>(0x489BA9F867E58A85, player); }
static void SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(Player player) { invoke<Void>(0x75690DF4B79CDDCC, player); }
static void ALLOW_EVASION_HUD_IF_DISABLING_HIDDEN_EVASION_THIS_FRAME(Player player, Any p1) { invoke<Void>(0x779023E7E53EB834, player, p1); }
static void FORCE_START_HIDDEN_EVASION(Player player) { invoke<Void>(0x6B6014A58DEBCCF3, player); }
static void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player player) { invoke<Void>(0x4BD41CDB13AC8486, player); }
static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { invoke<Void>(0x873D736C20070A10, player); }
static void SET_LAW_RESPONSE_DELAY_OVERRIDE(float p0) { invoke<Void>(0x89BC3C904E08199E, p0); }
static void RESET_LAW_RESPONSE_DELAY_OVERRIDE() { invoke<Void>(0x2FE39C7786330945); }
static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xF7C1BF3F9EB7C65E, player); }
static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xFB1E434B5C3D0CEE, player); }
static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0x41754DC6001F6313, player, entity); }
static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0x5266B2AB5BDC4B54, player, entity); }
static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0x1C751EF63BF4D501, player); }
static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xE5D813FA6F741B01, player, entity); }
static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0x66EE98F15844BE4D, player, entity); }
static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xE7B6A36E4BDF7C4C, player, range); }
static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0x19AD76EC04A73800, player, toggle); }
static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0x9856853A6FCF4F85, player, toggle); }
static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0x3EBA706E071AA76A, player, toggle); }
static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xD6436470CD2C1484); }
static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0x4F035D45FC2856F8, player); }
static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0x0E0E682049E26249, player, toggle); }
static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0x336E2A96F643C9D5, player); }
static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0x92EBF838856DCF63, player, p1); }
static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0x03689A4961280354, player); }
static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0xE43577CB2EC4FFD6, player); }
static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0x941BFBB789EE4863, player); }
static float SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(Player player, float time) { return invoke<float>(0x932BEE6E64F0144E, player, time); }
static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xD59511AF30BE1934, player); }
static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xD69C6BA96938C9C1, player); }
static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0xE916D57851F785AB, player); }
static BOOL GET_ARE_CAMERA_CONTROLS_DISABLED() { return invoke<BOOL>(0x3CC2AA893E5C4911); }
static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0x206A708429803A39, player); }
static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0xB96BD3A32937D44E, player); }
static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0x6652E84A43F51B8B, player, atArresting); }
static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0x3C2C878E6683CE75, player); }
static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xDC8D5832207C2EAD); }
static Player GET_PLAYER_INDEX() { return invoke<Player>(0xB6B621402486C3E4); }
static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0xB23E0F9B63D009A8, value); }
static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xF0C9E5565CB32F4B, value); }
static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0x750EA8475280B86D, player); }
static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0x98FA166AB01A46F7, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xAEAB3904F55BB907, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0x0A2AACDCE82B8394, player); }
static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0x566C977EEAE1C0D1, player); }
static Player PLAYER_ID() { return invoke<Player>(0x259BE71D8A81D4FA); }
static Ped PLAYER_PED_ID() { return invoke<Ped>(0x4A8C381C258A124D); }
static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0x383461852896D73D); }
static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0x96CFB880BAC634CE, cleanupFlags); }
static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xB1495D79F52B9EEE, cleanupFlags); }
static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { invoke<Void>(0x3A9A35C27C7B6D3C, name, cleanupFlags); }
static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xE1440F5C29913E5D, id, cleanupFlags); }
static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0x36E4BBBE16306470); }
static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0x220BB75D2FDC7141, player, vehicle); }
static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xC33666575B6C63DB, player); }
static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievementId) { return invoke<BOOL>(0x584E143398F9661C, achievementId); }
static BOOL SET_ACHIEVEMENT_PROGRESS(int achievementId, int progress) { return invoke<BOOL>(0xE3872E56266EDEDC, achievementId, progress); }
static int GET_ACHIEVEMENT_PROGRESS(int achievementId) { return invoke<int>(0xB3E8CE9ABB5AD331, achievementId); }
static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0x37088D2C63AC4C01, achievementId); }
static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0x99DFE4CAC19D527F); }
static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0x54A2F9B7AD878EB5); }
static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL p0) { invoke<Void>(0xC296E8407A7E3E69, p0); }
static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xEF37E704F02B50F3); }
static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0x2B52F77101390E6F, player, toggle); }
static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xCF59B5FEF38A9930, player); }
static BOOL GET_PLAYER_DEBUG_INVINCIBLE(Player player) { return invoke<BOOL>(0xD390851FAFF577C2, player); }
static void SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(Player player, BOOL toggle) { invoke<Void>(0x6C4F5AA91D39455C, player, toggle); }
static void SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(Player player, BOOL p1) { invoke<Void>(0x66831E1107966731, player, p1); }
static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0x380902AACBEF8EDD, player, p2); }
static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0xAD38642974DA79B6, player, toggle); }
static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xEFF44B1774BDC08F, player, toggle); }
static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0x1DBA5F84560D5943, targetMode); }
static void SET_PLAYER_TARGET_LEVEL(int targetLevel) { invoke<Void>(0x204EF9C415A885DE, targetLevel); }
static BOOL GET_IS_USING_FPS_THIRD_PERSON_COVER() { return invoke<BOOL>(0xC600DDAA3EAEB670); }
static BOOL GET_IS_USING_HOOD_CAMERA() { return invoke<BOOL>(0x5A50E8F361E4CFB1); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xAC7090FFDF63A3A0, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0x1F8DDF94E5D56F59, player); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xD6AD454C9B73DD75, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xEFC75C3D53F60CB1, player); }
static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0x7BFF320D45B40B56, player, multiplier); }
static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0x289497A4BA9049E0, player, multiplier); }
static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xA52E1AE3848A506B, player, multiplier); }
static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0x5B5405C7B1021630); }
static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xA4A53492861BFB22); }
static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xC281E62EC347918C); }
static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xC52E851E33ADFEE7); }
static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0x5F607C9E85F2ECC5, player, toggle); }
static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0x907872AE773E60D2, player, toggle); }
static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0x676D58067087BA0A, player, toggle); }
static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0xEF387B90B8B97EDA, player, toggle); }
static void DISABLE_PLAYER_THROW_GRENADE_WHILE_USING_GUN() { invoke<Void>(0xF37B149B1A382D5B); }
static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0x3EC357F31CEA229D, player, toggle); }
static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0x776D5F57819A1E41, player, value); }
static void SPECIAL_ABILITY_ACTIVATE(Player player, int p1) { invoke<Void>(0x565DC75434CCE76E, player, p1); }
static void SET_SPECIAL_ABILITY_MP(Player player, int p1, Any p2) { invoke<Void>(0x5F5FDED45A3345C9, player, p1, p2); }
static void SPECIAL_ABILITY_DEACTIVATE_MP(Player player, int p1) { invoke<Void>(0x8181C267AB5DE670, player, p1); }
static void SPECIAL_ABILITY_DEACTIVATE(Player player, Any p1) { invoke<Void>(0xF064FD8FB64821D1, player, p1); }
static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player, Any p1) { invoke<Void>(0x6A84D4B060E73EF5, player, p1); }
static void SPECIAL_ABILITY_RESET(Player player, Any p1) { invoke<Void>(0x89609F1D3BE65A34, player, p1); }
static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(Player player, Any p1) { invoke<Void>(0x3ECCF6485789A1D6, player, p1); }
static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xE085C345EE8A8E00, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x31240ACBC2A082EA, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0x674C330ABC93304B, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p1, Any p2) { invoke<Void>(0xEFA2B6B7AB16294E, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2, Any p3) { invoke<Void>(0x7CCB2F844CA7C337, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2, Any p3) { invoke<Void>(0x9AD14335D95C64BA, player, normalizedValue, p2, p3); }
static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0x15263A2A8A135DF3, player, p1, p2); }
static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xB055330FF3BFD8A6, player, p1, p2); }
static void SPECIAL_ABILITY_LOCK(Hash playerModel, Any p1) { invoke<Void>(0xE3D5A2DE522F29C1, playerModel, p1); }
static void SPECIAL_ABILITY_UNLOCK(Hash playerModel, Any p1) { invoke<Void>(0xD33BCB9F50C1E588, playerModel, p1); }
static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0x10140D9546976B7F, playerModel); }
static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player, Any p1) { return invoke<BOOL>(0xFD2D7766E325A3B2, player, p1); }
static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player, Any p1) { return invoke<BOOL>(0x568A5F4040D722C0, player, p1); }
static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle, Any p2) { invoke<Void>(0xE0A0D0E41195BAC0, player, toggle, p2); }
static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player, Any p1) { return invoke<BOOL>(0x3BBF563E688265AF, player, p1); }
static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xF65CE7345EAFDBE2, multiplier); }
static void UPDATE_SPECIAL_ABILITY_FROM_STAT(Player player, Any p1) { invoke<Void>(0x04F239EFD194C236, player, p1); }
static BOOL GET_IS_PLAYER_DRIVING_ON_HIGHWAY(Player player) { return invoke<BOOL>(0x771C914E893FD9EB, player); }
static BOOL GET_IS_PLAYER_DRIVING_WRECKLESS(Player player, int p1) { return invoke<BOOL>(0x4A3BD6441F87BBF1, player, p1); }
static BOOL GET_IS_MOPPING_AREA_FREE_IN_FRONT_OF_PLAYER(Player player, float p1) { return invoke<BOOL>(0x93559B7C58C7660C, player, p1); }
static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL findCollisionLand, BOOL p7) { invoke<Void>(0xCB7327FDCE6757E1, player, x, y, z, heading, p5, findCollisionLand, p7); }
static BOOL UPDATE_PLAYER_TELEPORT(Player player) { return invoke<BOOL>(0x8644ACAF2A301B7E, player); }
static void STOP_PLAYER_TELEPORT() { invoke<Void>(0xEB205B72FDDFDFC6); }
static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0x705A7AB2D4BC0A9B); }
static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0x5F93A870D439E8B4, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0x02DC05627BC628AF, player, regenRate); }
static float GET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player) { return invoke<float>(0x4FF4A601A84AE24A, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player, float limit) { invoke<Void>(0xE968651CFDDDE20B, player, limit); }
static void DISABLE_PLAYER_HEALTH_RECHARGE(Player player) { invoke<Void>(0x090F2F734B18CEBF, player); }
static void SET_PLAYER_FALL_DISTANCE_TO_TRIGGER_RAGDOLL_OVERRIDE(Player player, float p1) { invoke<Void>(0xA9FF721056B7254E, player, p1); }
static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x148193D59AAB6D14, player, modifier); }
static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x43DFCD4B65960E46, player, modifier); }
static void SET_PLAYER_WEAPON_MINIGUN_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x10F23FF10E9AA211, player, modifier); }
static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier, BOOL p2) { invoke<Void>(0xA8762533460B016B, player, modifier, p2); }
static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xECD5F8110C183253, player, modifier); }
static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0x1BB5389ACC6BFCFC, player, modifier); }
static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0x7754DB9F9579CEE4, player, modifier); }
static void SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(Player player, float p1) { invoke<Void>(0x14EBA27C5B556497, player, p1); }
static void SET_PLAYER_EXPLOSIVE_DAMAGE_MODIFIER(Player player, Any p1) { invoke<Void>(0x05DDADC6F9EA8B04, player, p1); }
static void SET_PLAYER_WEAPON_TAKEDOWN_DEFENSE_MODIFIER(Player player, float p1) { invoke<Void>(0xF1617CCA9785B3DA, player, p1); }
static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0x9C63D805CB2ABDB5, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0x6A3837CF4CF46A9D, player, tintIndex); }
static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xA4C157F5AAD56833, player, index); }
static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0x9A6FA1C41236F7D3, player, index); }
static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xC02C4AB8A5C744D7, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0x755C848B9B13C696, player, tintIndex); }
static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0x2DF241BBC3BB2698, player); }
static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0x05B7F4CBFA7B6871, player); }
static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0x92BC68FD9EBF7832, player, enabled); }
static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0xDC198F70124270BE, player, r, g, b); }
static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xA74429530D79E338, player, r, g, b); }
static void SET_PLAYER_PHONE_PALETTE_IDX(Player player, int flags) { invoke<Void>(0x454108124161B7D7, player, flags); }
static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xF75E68D9DCB8C80B, player, multiplier); }
static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0x92F9E3A242F41E98, player, multiplier); }
static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xC1204DBD7B8A643E, player, ped); }
static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0x8EAC8FBDF8A3830E, player, amount, gaitType, speed, p4, p5); }
static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0xDF1A809B241FEE24, player); }
static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xE8B2E2E978035EF0, player, toggle); }
static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(Player player, BOOL toggle) { invoke<Void>(0x5D0510F58106E4FF, player, toggle); }
static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0x048D90B19F701DC3, player, value); }
static BOOL IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(Player player) { return invoke<BOOL>(0x423F801F012D944B, player); }
static void INCREASE_PLAYER_JUMP_SUPPRESSION_RANGE(Player player) { invoke<Void>(0x2B5801E768BECF3C, player); }
static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0x469AD8A2B1EBB937, player, toggle); }
static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, int p1) { invoke<Void>(0xE00868707690F6A7, player, p1); }
static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0x0DAFB2A5B123922B, index); }
static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0x8D51A58AA12E95D0, value); }
static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xB56783BB72003C9A, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xD11FB55020B6F371); }
static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xE6896553A815F074, player); }
static BOOL IS_PLAYER_BATTLE_AWARE(Player player) { return invoke<BOOL>(0x1AF2787435531EA9, player); }
static BOOL GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player player, int p1, BOOL p2) { return invoke<BOOL>(0x992BFEB6732434E5, player, p1, p2); }
static void EXTEND_WORLD_BOUNDARY_FOR_PLAYER(float x, float y, float z) { invoke<Void>(0xFFD4786D6EA9F414, x, y, z); }
static void RESET_WORLD_BOUNDARY_FOR_PLAYER() { invoke<Void>(0xDC14EA9673A80516); }
static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0x94CC17D69C81292D, player); }
static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0x358E7369E46B466E, player); }
static void SET_PLAYER_LEAVE_PED_BEHIND(Player player, BOOL toggle) { invoke<Void>(0xC4A38E060739AAF9, player, toggle); }
static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0x740F6E63EE1C1D43, player, p1, p2, p3, p4); }
static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0xBFB1BDBC26BB9501, player); }
static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xCE1864BA99DCF3C2, player, model); }
static void SET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0x953124DAB474F504, player, model); }
static Hash GET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0x4B04D06A9A9A2186, player); }
static Hash GET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0x000E48394E21867C, player); }
static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xC7DB642109D72AF8, player); }
static void CLEAR_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0x6C8F0A6A6EFD073C, player); }
static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xD8FE716A11BE669A, player, model); }
static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0xBDAA517C3D10DB80, player); }
static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0x706D6DF51D119A27, player); }
static void SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(BOOL p0) { invoke<Void>(0xE3CF1CD0E11083B3, p0); }
static void SET_PLAYER_BLUETOOTH_STATE(Player player, BOOL state) { invoke<Void>(0x7B537987214FC5A3, player, state); }
static BOOL IS_PLAYER_BLUETOOTH_ENABLE(Player player) { return invoke<BOOL>(0x86A327F828FE34D1, player); }
static void DISABLE_CAMERA_VIEW_MODE_CYCLE(Player player) { invoke<Void>(0x98D2FC8206AB54E0, player); }
static int GET_PLAYER_FAKE_WANTED_LEVEL(Player player) { return invoke<int>(0x0F9DAC8C6B952C2B, player); }
static void SET_PLAYER_CAN_DAMAGE_PLAYER(Player player1, Player player2, BOOL toggle) { invoke<Void>(0xA4337AACEADDAA8E, player1, player2, toggle); }
static void SET_APPLY_WAYPOINT_OF_PLAYER(Player player, int hudColor) { invoke<Void>(0xC29BDAAD2623309A, player, hudColor); }
static BOOL IS_PLAYER_VEHICLE_WEAPON_TOGGLED_TO_NON_HOMING(Any p0) { return invoke<BOOL>(0xBB7E639305F91EF7, p0); }
static void SET_PLAYER_VEHICLE_WEAPON_TO_NON_HOMING(Any p0) { invoke<Void>(0x174A79E28AE4782E, p0); }
static void SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(Any p0, Any p1) { invoke<Void>(0x62013EEF72D4454F, p0, p1); }
static void ADD_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0x1DE8C13F47D5A73F, player, entity); }
static void REMOVE_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0x5D602AB9F6E93843, player, entity); }
static void SET_PLAYER_PREVIOUS_VARIATION_DATA(Player player, int p1, int p2, Any p3, Any p4, Any p5) { invoke<Void>(0xFA5313EFD99BB771, player, p1, p2, p3, p4, p5); }
static void REMOVE_SCRIPT_FIRE_POSITION() { invoke<Void>(0xE0CE913C020B2907); }
static void SET_SCRIPT_FIRE_POSITION(float coordX, float coordY, float coordZ) { invoke<Void>(0x1AE8EF20D4D96E11, coordX, coordY, coordZ); }
static void REPLAY_START_EVENT(int p0) { invoke<Void>(0xB9784D6C7219851B, p0); }
static void REPLAY_STOP_EVENT() { invoke<Void>(0x3B327805C3CAF8DC); }
static void REPLAY_CANCEL_EVENT() { invoke<Void>(0xD1CEC1802EBF7D03); }
static void REPLAY_RECORD_BACK_FOR_TIME(float p0, float p1, int p2) { invoke<Void>(0xA62957B100C8DE6D, p0, p1, p2); }
static void REPLAY_CHECK_FOR_EVENT_THIS_FRAME(const char* missionNameLabel, Any p1) { invoke<Void>(0xECF30459397D5190, missionNameLabel, p1); }
static void REPLAY_PREVENT_RECORDING_THIS_FRAME() { invoke<Void>(0xC0964AABD3C0CC7E); }
static void REPLAY_RESET_EVENT_INFO() { invoke<Void>(0x031C8B7F8E00B5A7); }
static void REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME() { invoke<Void>(0x9D0B099EEAD74270); }
static void RECORD_GREATEST_MOMENT(int p0, int p1, int p2) { invoke<Void>(0x5CFA0003D667CD0F, p0, p1, p2); }
static void START_REPLAY_RECORDING(int mode) { invoke<Void>(0x318F6CC45BC7DB75, mode); }
static void STOP_REPLAY_RECORDING() { invoke<Void>(0x98188EDB7446A033); }
static void CANCEL_REPLAY_RECORDING() { invoke<Void>(0x9A7045411AC5794F); }
static BOOL SAVE_REPLAY_RECORDING() { return invoke<BOOL>(0x6CD6A4BE55F8343E); }
static BOOL IS_REPLAY_RECORDING() { return invoke<BOOL>(0xE7585CE3CDD6F47E); }
static BOOL IS_REPLAY_INITIALIZED() { return invoke<BOOL>(0x85CC9F47ACE575F1); }
static BOOL IS_REPLAY_AVAILABLE() { return invoke<BOOL>(0x0E46E59812BDC8B7); }
static BOOL IS_REPLAY_RECORD_SPACE_AVAILABLE(BOOL p0) { return invoke<BOOL>(0x37E75188C827C483, p0); }
static void REGISTER_EFFECT_FOR_REPLAY_EDITOR(const char* p0, BOOL p1) { invoke<Void>(0xF32B2D960EF3FA6E, p0, p1); }
static BOOL REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP() { return invoke<BOOL>(0xD5FD8DD00FB16F99); }
static void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM() { invoke<Void>(0x952F7C7A0CC86DA0); }
static void SET_REPLAY_SYSTEM_PAUSED_FOR_SAVE(BOOL p0) { invoke<Void>(0x41C6C46BCEFF9949, p0); }
static void REPLAY_CONTROL_SHUTDOWN() { invoke<Void>(0xCE9266D07017085A); }
static void ACTIVATE_ROCKSTAR_EDITOR(int p0) { invoke<Void>(0xA21271C08AEE8291, p0); }
static BOOL SAVEMIGRATION_IS_MP_ENABLED() { return invoke<BOOL>(0xFE45CC32BB79DB76); }
static BOOL SAVEMIGRATION_MP_REQUEST_ACCOUNTS() { return invoke<BOOL>(0x0A6CBDB5046B458B); }
static int SAVEMIGRATION_MP_GET_ACCOUNTS_STATUS() { return invoke<int>(0x3E79E8FD627F8207); }
static int SAVEMIGRATION_MP_NUM_ACCOUNTS() { return invoke<int>(0xB1DF64EC54DC6021); }
static BOOL SAVEMIGRATION_MP_GET_ACCOUNT(int p0, Any* p1) { return invoke<BOOL>(0xA283F9C6621A9294, p0, p1); }
static BOOL SAVEMIGRATION_MP_REQUEST_STATUS() { return invoke<BOOL>(0x8615C476E6BA23D8); }
static int SAVEMIGRATION_MP_GET_STATUS() { return invoke<int>(0x340CF8A9750C3D1A); }
static void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0x97A5024CE91641F1, scriptName); }
static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0xFD49725F3FE7EE13, scriptName); }
static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0xA6E4F7A73ABC4A76, scriptName); }
static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0x61AD5054653814F5, scriptName); }
static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0x625263BFD08AE230, scriptHash); }
static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0xD21650BDA0F10841, scriptHash); }
static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0x65F606616F48186B, scriptHash); }
static BOOL DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) { return invoke<BOOL>(0x5ADE92AC7A2490B6, scriptHash); }
static void TERMINATE_THREAD(int threadId) { invoke<Void>(0xC3CF96F73FC43848, threadId); }
static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0xF40767E41852FB72, threadId); }
static const char* GET_NAME_OF_SCRIPT_WITH_THIS_ID(int threadId) { return invoke<const char*>(0xACF74B377C634277, threadId); }
static void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0x29AB4A18A37441C7); }
static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0x29637E6F2B8E5690); }
static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0x8F76B2250AC806FA); }
static void TERMINATE_THIS_THREAD() { invoke<Void>(0xBBC29EBE6E1A48FA); }
static int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash scriptHash) { return invoke<int>(0x486FF5D06E9659F1, scriptHash); }
static const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0x1AF90EB93E0012D6); }
static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0x931D15B1D60C81B0); }
static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0x703C4F7316B7195D, eventGroup); }
static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0x5E3ED023C0E7CC7C, eventGroup, eventIndex); }
static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0x4BC3E5D2FB0A1665, eventGroup, eventIndex); }
static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0xFCEF367B86651ED3, eventGroup, eventIndex, eventData, eventDataSize); }
static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0x2C0E0814582947D3, eventGroup, eventData, eventDataSize, playerBits); }
static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0xCD17096A98584C2B); }
static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0x6FF322107B12B749, toggle); }
static BOOL GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0x828F3FAE99DA791A); }
static void COMMIT_TO_LOADINGSCREEN_SELCTION() { invoke<Void>(0x48AA9CAAAB71C7B8); }
static BOOL BG_IS_EXITFLAG_SET() { return invoke<BOOL>(0x8FCC41E6E43728AA); }
static void BG_SET_EXITFLAG_RESPONSE() { invoke<Void>(0xC68B0868CFA1B72F); }
static void BG_START_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0x52DC717C5008D9DA, contextHash); }
static void BG_END_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0xA4991DF2B554184E, contextHash); }
static void BG_START_CONTEXT(const char* contextName) { invoke<Void>(0x34D5EB1E6F706A50, contextName); }
static void BG_END_CONTEXT(const char* contextName) { invoke<Void>(0x3611A662967FC11C, contextName); }
static BOOL BG_DOES_LAUNCH_PARAM_EXIST(int scriptIndex, const char* p1) { return invoke<BOOL>(0x9F05118582DBA146, scriptIndex, p1); }
static int BG_GET_LAUNCH_PARAM_VALUE(int scriptIndex, const char* p1) { return invoke<int>(0xF8F0D1290FE81BC5, scriptIndex, p1); }
static int BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash p0) { return invoke<int>(0x616D6688F78D1729, p0); }
static void SEND_TU_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0x01F0B819E78A18A1, eventGroup, eventData, eventDataSize, playerBits); }
static void REGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0xFAF127E6FF05E72E, variable); }
static void UNREGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0xA759D3AD1579CBCB, variable); }
static void FORCE_CHECK_SCRIPT_VARIABLES() { invoke<Void>(0x3AABE0CD8115D72E); }
static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x120E577522852984, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x14C30F326F5883DA, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0x33B15CA8B699DF5B, entity, flags1, flags2); }
static int START_SHAPE_TEST_BOX(float x, float y, float z, float dimX, float dimY, float dimZ, float rotX, float rotY, float rotZ, Any p9, int flags, Entity entity, Any p12) { return invoke<int>(0xA86260972774CF88, x, y, z, dimX, dimY, dimZ, rotX, rotY, rotZ, p9, flags, entity, p12); }
static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0x09132751EA3609EE, entity, flags1, flags2); }
static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0x26C582EF5CD8A3A2, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0x666853720ADE415D, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2) { return invoke<int>(0x7705F42EDD7BAD81, pVec1, pVec2, flag, entity, flag2); }
static int GET_SHAPE_TEST_RESULT(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0x0E7DD1EBCA8D2DE3, shapeTestHandle, hit, endCoords, surfaceNormal, entityHit); }
static int GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0xEE92B4A78668B1CE, shapeTestHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); }
static void RELEASE_SCRIPT_GUID_FROM_ENTITY(Entity entityHit) { invoke<Void>(0x85A06221E981406B, entityHit); }
static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0x2CA28CCB7CECACE7); }
static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0x544DCD3126D76335, msgIndex); }
static BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x0FA6FA5156AD5C8D, msgIndex); }
static BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x2FB38A412252BDF6, msgIndex); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) { return invoke<BOOL>(0x58103281724A16DE, p0, context, out); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_BOOL(int p0, const char* p1) { return invoke<BOOL>(0x584EEB682A158C47, p0, p1); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0xC7B4A5CCCF31FA28, p0, context, out); }
static BOOL SC_INBOX_MESSAGE_DO_APPLY(int p0) { return invoke<BOOL>(0x895C996CADF26E19, p0); }
static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0x45A989529B3F2C25, p0); }
static void SC_INBOX_MESSAGE_PUSH_GAMER_T0_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0x693B9B4C2F3B9312, gamerHandle); }
static void SC_INBOX_SEND_UGCSTATUPDATE_TO_RECIP_LIST(Any* data) { invoke<Void>(0x078587F1408317CE, data); }
static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(int p0, Any* p1) { return invoke<BOOL>(0x0D6C8EFC46788359, p0, p1); }
static BOOL SC_INBOX_SEND_BOUNTY_TO_RECIP_LIST(Any* data) { return invoke<BOOL>(0xFAD0C862976B28B2, data); }
static BOOL SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(int index, Any* outData) { return invoke<BOOL>(0x67B3687F7C69B969, index, outData); }
static void SC_EMAIL_RETRIEVE_EMAILS(int offset, int limit) { invoke<Void>(0x9286D4F3BBB483D0, offset, limit); }
static int SC_EMAIL_GET_RETRIEVAL_STATUS() { return invoke<int>(0x80CA040BF6D2FA31); }
static int SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() { return invoke<int>(0x6109CAB6F2F7BB46); }
static BOOL SC_EMAIL_GET_EMAIL_AT_INDEX(int p0, Any* p1) { return invoke<BOOL>(0xEC552A25287441B8, p0, p1); }
static void SC_EMAIL_DELETE_EMAILS(Any* p0, Any p1) { invoke<Void>(0x44DD5E8545C5376F, p0, p1); }
static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0xCF62A74234A425DB, gamerHandle); }
static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0xAEFE34E8C6A5734B); }
static void SC_EMAIL_SEND_EMAIL(const char* p0) { invoke<Void>(0x14F6AFFEDAA326C3, p0); }
static BOOL SC_EMAIL_SET_CURRENT_EMAIL_TAG(Any p0) { return invoke<BOOL>(0xED8D0AF79CFA040D, p0); }
static void SC_CACHE_NEW_ROCKSTAR_MSGS(BOOL toggle) { invoke<Void>(0x865FD8AC99AF6852, toggle); }
static BOOL SC_HAS_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0xDAE47D07294589FC); }
static const char* SC_GET_NEW_ROCKSTAR_MSG() { return invoke<const char*>(0x6E9A5327B5FDB44C); }
static BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0x1A84C6BBF1FCC329, attrHash, value); }
static BOOL SC_PRESENCE_ATTR_SET_FLOAT(Hash attrHash, float value) { return invoke<BOOL>(0x8D862F78BA8A0C4C, attrHash, value); }
static BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0xB20280920F18CE68, attrHash, value); }
static BOOL SC_PRESENCE_SET_ACTIVITY_RATING(Any p0, float p1) { return invoke<BOOL>(0xB88224D7000C5E8B, p0, p1); }
static BOOL SC_GAMERDATA_GET_INT(const char* name, int* value) { return invoke<BOOL>(0x1B6B8B2C731B0C3B, name, value); }
static BOOL SC_GAMERDATA_GET_FLOAT(const char* name, float* value) { return invoke<BOOL>(0x974E385E2B593AD0, name, value); }
static BOOL SC_GAMERDATA_GET_BOOL(const char* name) { return invoke<BOOL>(0x65395D04908A6F78, name); }
static BOOL SC_GAMERDATA_GET_STRING(const char* name, char* value) { return invoke<BOOL>(0xA11E96BAF56824EE, name, value); }
static BOOL SC_GAMERDATA_GET_ACTIVE_XP_BONUS(float* value) { return invoke<BOOL>(0x7497E3ECE98A291B, value); }
static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0x9586B50628529A63, string, token); }
static BOOL SC_PROFANITY_CHECK_STRING_UGC(const char* string, int* token) { return invoke<BOOL>(0xE2E0A9E99F465D83, string, token); }
static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0x3D1C2138A70E7348, token); }
static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0x11A87C58414E6C46, token); }
static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0x7A6F7DFA98599242, token); }
static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0x0AE6BE5940D835FA, token); }
static BOOL SC_LICENSEPLATE_CHECK_STRING(const char* p0, int* p1) { return invoke<BOOL>(0x4FB031EC3F28B77C, p0, p1); }
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_VALID(Any p0) { return invoke<BOOL>(0x095CCC9C5DC3BBF2, p0); }
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_PENDING(Any p0) { return invoke<BOOL>(0xF7A6291F5AE831D1, p0); }
static int SC_LICENSEPLATE_GET_COUNT(int token) { return invoke<int>(0xD635755A3659101C, token); }
static const char* SC_LICENSEPLATE_GET_PLATE(int token, int plateIndex) { return invoke<const char*>(0x649D7167E25976C9, token, plateIndex); }
static const char* SC_LICENSEPLATE_GET_PLATE_DATA(int token, int plateIndex) { return invoke<const char*>(0xA71470E61CE061AE, token, plateIndex); }
static BOOL SC_LICENSEPLATE_SET_PLATE_DATA(const char* oldPlateText, const char* newPlateText, Any* plateData) { return invoke<BOOL>(0x3892A85343809530, oldPlateText, newPlateText, plateData); }
static BOOL SC_LICENSEPLATE_ADD(const char* plateText, Any* plateData, int* token) { return invoke<BOOL>(0x54B88AF600DB0C95, plateText, plateData, token); }
static BOOL SC_LICENSEPLATE_GET_ADD_IS_PENDING(int token) { return invoke<BOOL>(0xF504C9571E86CF76, token); }
static int SC_LICENSEPLATE_GET_ADD_STATUS(int token) { return invoke<int>(0x2A1E3EE300513E84, token); }
static BOOL SC_LICENSEPLATE_ISVALID(const char* plateText, int* token) { return invoke<BOOL>(0x271FD9228830C5F4, plateText, token); }
static BOOL SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(int token) { return invoke<BOOL>(0x078BF797A07B0C7C, token); }
static int SC_LICENSEPLATE_GET_ISVALID_STATUS(int token) { return invoke<int>(0x9B55331B5F9C67C8, token); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke<BOOL>(0x23AB41CD7BD481B9); }
static int SC_COMMUNITY_EVENT_GET_EVENT_ID() { return invoke<int>(0xB84E5B0DD408418E); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(const char* p0, int* p1) { return invoke<BOOL>(0xDBAD1B5E0100936B, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(const char* p0, float* p1) { return invoke<BOOL>(0x8D59CDA8F573220D, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(const char* p0, char* p1) { return invoke<BOOL>(0xC337674BFF27442B, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(char* p0) { return invoke<BOOL>(0xD0333868D1D47D97, p0); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(const char* p0) { return invoke<BOOL>(0x80AD0C08672402C2, p0); }
static int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* p0) { return invoke<int>(0xC9892FE6CC695923, p0); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(const char* p0, int* p1, const char* p2) { return invoke<BOOL>(0xFF6EC8172B647C9E, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(const char* p0, float* p1, const char* p2) { return invoke<BOOL>(0x69A1136FA3794E40, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(const char* p0, char* p1, const char* p2) { return invoke<BOOL>(0x0D777171FC10DBDA, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(char* p0, const char* p1) { return invoke<BOOL>(0xD078F914C227CF7B, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(int p0) { return invoke<BOOL>(0x0DA41896C7810BBB, p0); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(int p0, const char* p1, int* p2) { return invoke<BOOL>(0x72930FB68F9B4179, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(int p0, const char* p1, float* p2) { return invoke<BOOL>(0x80C6F609D860930C, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(int p0, const char* p1, char* p2) { return invoke<BOOL>(0x59632E3312C5FFDF, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(int p0, char* p1) { return invoke<BOOL>(0xF5EB76164CE420A5, p0, p1); }
static BOOL SC_TRANSITION_NEWS_SHOW(Any p0) { return invoke<BOOL>(0x414AC8390B655576, p0); }
static BOOL SC_TRANSITION_NEWS_SHOW_TIMED(Any p0, Any p1) { return invoke<BOOL>(0xB5F751D7204D8B1A, p0, p1); }
static BOOL SC_TRANSITION_NEWS_SHOW_NEXT_ITEM() { return invoke<BOOL>(0x529DE110B096B460); }
static BOOL SC_TRANSITION_NEWS_HAS_EXTRA_DATA_TU() { return invoke<BOOL>(0x16A1E7B3E8F85EB9); }
static BOOL SC_TRANSITION_NEWS_GET_EXTRA_DATA_INT_TU(const char* p0, int* p1) { return invoke<BOOL>(0xACB8B29F6BEB8B58, p0, p1); }
static void SC_TRANSITION_NEWS_END() { invoke<Void>(0x318195DFBDDB6FFA); }
static BOOL SC_PAUSE_NEWS_INIT_STARTER_PACK(Any p0) { return invoke<BOOL>(0xDF0800F98C6064FB, p0); }
static BOOL SC_PAUSE_NEWS_GET_PENDING_STORY(Any p0) { return invoke<BOOL>(0xAB564B6E85995DBB, p0); }
static void SC_PAUSE_NEWS_SHUTDOWN() { invoke<Void>(0x88600576EDB50BD2); }
static const char* SC_ACCOUNT_INFO_GET_NICKNAME() { return invoke<const char*>(0xE5546772B54C0EEE); }
static BOOL SC_ACHIEVEMENT_INFO_STATUS(int* p0) { return invoke<BOOL>(0x616C54D34FFE092C, p0); }
static BOOL SC_HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xF841B04B93D27BA9, achievementId); }
static BOOL STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<BOOL>(0xF253153116210E81, statSlot); }
static BOOL STAT_LOAD(int statSlot) { return invoke<BOOL>(0x2D1E9C333C5B2D4B, statSlot); }
static BOOL STAT_SAVE(int p0, BOOL p1, int p2, BOOL p3) { return invoke<BOOL>(0x3AADA29651BD7786, p0, p1, p2, p3); }
static void STAT_SET_OPEN_SAVETYPE_IN_JOB(int p0) { invoke<Void>(0x2A3AA41B5A7E92FA, p0); }
static BOOL STAT_LOAD_PENDING(int statSlot) { return invoke<BOOL>(0x944042019AAAD145, statSlot); }
static BOOL STAT_SAVE_PENDING() { return invoke<BOOL>(0xA0BF4C723F7D0831); }
static BOOL STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<BOOL>(0xFF94E450D8F794CD); }
static BOOL STAT_DELETE_SLOT(int p0) { return invoke<BOOL>(0xD808EAD42CF65DA5, p0); }
static BOOL STAT_SLOT_IS_LOADED(int statSlot) { return invoke<BOOL>(0x7A207DD1AEF9D26E, statSlot); }
static BOOL STAT_CLOUD_SLOT_LOAD_FAILED(int p0) { return invoke<BOOL>(0x219ED949271099BA, p0); }
static int STAT_CLOUD_SLOT_LOAD_FAILED_CODE(Any p0) { return invoke<int>(0x2F2F3B8D58302682, p0); }
static void STAT_SET_BLOCK_SAVES(BOOL toggle) { invoke<Void>(0xC88945F4DD99D7E0, toggle); }
static BOOL STAT_GET_BLOCK_SAVES() { return invoke<BOOL>(0x5927F0EB6A8C0001); }
static BOOL STAT_CLOUD_SLOT_SAVE_FAILED(Any p0) { return invoke<BOOL>(0x64F5ED1652910707, p0); }
static void STAT_CLEAR_PENDING_SAVES(Any p0) { invoke<Void>(0x2CB53B9DB9AB03C1, p0); }
static BOOL STAT_LOAD_DIRTY_READ_DETECTED() { return invoke<BOOL>(0x31AE99BF71F99FDF); }
static void STAT_CLEAR_DIRTY_READ_DETECTED() { invoke<Void>(0xF05E12C1DE78B9F2); }
static BOOL STAT_GET_LOAD_SAFE_TO_PROGRESS_TO_MP_FROM_SP() { return invoke<BOOL>(0xDD07F250CCC73F1A); }
static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0x1164A75E490C27B6, statName, value, save); }
static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0x4F8678C02360C3D2, statName, value, save); }
static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0xF1D0B0CE940F620D, statName, value, save); }
static BOOL STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xFE0BEB152470B0B8, statName, value, save); }
static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0x8FDC19B6566720CA, statName, value, numFields, save); }
static BOOL STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0x1A43F9BE4B6AAB67, statName, value, save); }
static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0x2936060DABE3BC7C, statName, x, y, z, save); }
static BOOL STAT_SET_MASKED_INT(Hash statName, int p1, int p2, int p3, BOOL save) { return invoke<BOOL>(0xCC11C02D491BBBBB, statName, p1, p2, p3, save); }
static BOOL STAT_SET_USER_ID(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0xD13EF24D43A8E864, statName, value, save); }
static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0x465DA23A52B88B07, statName, p1); }
static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0xDF7F16323520B858, statHash, outValue, p2); }
static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0x2F0966A034F5ADC6, statHash, outValue, p2); }
static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0xF249567F2E83E093, statHash, outValue, p2); }
static BOOL STAT_GET_DATE(Hash statHash, Any* outValue, int numFields, Any p3) { return invoke<BOOL>(0x22F25CEE5BAA4944, statHash, outValue, numFields, p3); }
static const char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<const char*>(0xCEA81DACD6DA3ADB, statHash, p1); }
static BOOL STAT_GET_POS(Hash statName, float* outX, float* outY, float* outZ, Any p4) { return invoke<BOOL>(0xB738B2E1369125F6, statName, outX, outY, outZ, p4); }
static BOOL STAT_GET_MASKED_INT(Hash statHash, int* outValue, int p2, int p3, Any p4) { return invoke<BOOL>(0x1F1450A1F4852E10, statHash, outValue, p2, p3, p4); }
static const char* STAT_GET_USER_ID(Hash statHash) { return invoke<const char*>(0xD8DECC82BA81E8D9, statHash); }
static const char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<const char*>(0x586035D0F620ADEE, statName); }
static BOOL STAT_SET_LICENSE_PLATE(Hash statName, const char* str) { return invoke<BOOL>(0x9E1D4641E6A5C2F0, statName, str); }
static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0x3CAC0DB32E69B1B8, statName, value); }
static BOOL STAT_COMMUNITY_START_SYNCH() { return invoke<BOOL>(0x4B995F8441EAC13B); }
static BOOL STAT_COMMUNITY_SYNCH_IS_PENDING() { return invoke<BOOL>(0xB8581B151258A47D); }
static BOOL STAT_COMMUNITY_GET_HISTORY(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0x3BD9AF4ED006CA00, statName, p1, outValue); }
static void STAT_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xC4FBBBC915C04DF9, p0); }
static void STAT_LOCAL_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0xB9BE1957DDE28FC8, p0); }
static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0x4F256B9F00ACB695, statName); }
static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0xDF21396D0886D8F7, statName); }
static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0xE44C8536D6F264FC, statName); }
static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0x77A7B5685F038D01, statName); }
static void STAT_SET_PROFILE_SETTING_VALUE(int profileSetting, int value) { invoke<Void>(0x7743BAF85DF35E38, profileSetting, value); }
static void STATS_COMPLETED_CHARACTER_CREATION(Any p0) { invoke<Void>(0xCD2B99375CA577C6, p0); }
static int PACKED_STAT_GET_INT_STAT_INDEX(int p0) { return invoke<int>(0xC24FF3ECDBA75CAC, p0); }
static Hash GET_PACKED_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0xC80B42F8AEC90782, index, spStat, charStat, character); }
static Hash GET_PACKED_TU_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0x443206C9783C69F1, index, spStat, charStat, character); }
static Hash GET_PACKED_NG_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character, const char* section) { return invoke<Hash>(0x6B604293CA9BF4E0, index, spStat, charStat, character, section); }
static BOOL GET_PACKED_STAT_BOOL_CODE(int index, int characterSlot) { return invoke<BOOL>(0xA6D3C21763E25496, index, characterSlot); }
static int GET_PACKED_STAT_INT_CODE(int index, int characterSlot) { return invoke<int>(0x03CFFD51CE515454, index, characterSlot); }
static void SET_PACKED_STAT_BOOL_CODE(int index, BOOL value, int characterSlot) { invoke<Void>(0xA595AA1819B05EA0, index, value, characterSlot); }
static void SET_PACKED_STAT_INT_CODE(int index, int value, int characterSlot) { invoke<Void>(0x0F575D68F532124C, index, value, characterSlot); }
static void PLAYSTATS_BACKGROUND_SCRIPT_ACTION(const char* action, int value) { invoke<Void>(0xF62AFE29E168F6E0, action, value); }
static void PLAYSTATS_NPC_INVITE(const char* p0) { invoke<Void>(0x7BF080B6E9DA59BA, p0); }
static void PLAYSTATS_AWARD_XP(int amount, Hash type, Hash category) { invoke<Void>(0xF509A0F327DF0ADD, amount, type, category); }
static void PLAYSTATS_RANK_UP(int rank) { invoke<Void>(0xC9F6D856F39266AF, rank); }
static void PLAYSTATS_STARTED_SESSION_IN_OFFLINEMODE() { invoke<Void>(0xA8F0E4FAD3A68800); }
static void PLAYSTATS_ACTIVITY_DONE(int p0, int activityId) { invoke<Void>(0x53F0C32557EF5D43, p0, activityId); }
static void PLAYSTATS_LEAVE_JOB_CHAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x7B6C12F588333BA9, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_STARTED(const char* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0x048963DA591ECAAF, p0, p1, p2, p3); }
static void PLAYSTATS_MISSION_OVER(const char* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x1A6EB10909EB6840, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MISSION_CHECKPOINT(const char* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x375B1B37EF136A49, p0, p1, p2, p3); }
static void PLAYSTATS_RANDOM_MISSION_DONE(const char* name, Any p1, Any p2, Any p3) { invoke<Void>(0x3AF124228E3EAF07, name, p1, p2, p3); }
static void PLAYSTATS_ROS_BET(int amount, int act, Player player, float cm) { invoke<Void>(0x1C55C6E8F7E0027C, amount, act, player, cm); }
static void PLAYSTATS_RACE_CHECKPOINT(Vehicle p0, Any p1, int p2, int p3, Any p4) { invoke<Void>(0x8316C9B9D1E7C6F9, p0, p1, p2, p3, p4); }
static BOOL PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(int* playerAccountId, int* posixTime) { return invoke<BOOL>(0x0189E96FAC892B16, playerAccountId, posixTime); }
static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2) { invoke<Void>(0x6DA5DF2F00E56237, p0, p1, p2); }
static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xE72DE3350869DA0C, p0, p1, p2, p3, p4); }
static void PLAYSTATS_CRATE_DROP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x781030C356161426, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYSTATS_CRATE_CREATED(float p0, float p1, float p2) { invoke<Void>(0x840F7B4124045541, p0, p1, p2); }
static void PLAYSTATS_HOLD_UP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF1A3507F1CCB5AB2, p0, p1, p2, p3); }
static void PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x3A6A8B40F4CEF984, p0, p1, p2, p3); }
static void PLAYSTATS_RACE_TO_POINT_MISSION_DONE(int p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC93D3E846508BAF3, p0, p1, p2, p3); }
static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(Any p0) { invoke<Void>(0x4E84B27CF8AA616F, p0); }
static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0x60C742268AC666E4, scaleformHash, p1); }
static void PLAYSTATS_FRIEND_ACTIVITY(int p0, BOOL p1) { invoke<Void>(0x52BD224DF16926E9, p0, p1); }
static void PLAYSTATS_ODDJOB_DONE(int totalTimeMs, int p1, BOOL p2) { invoke<Void>(0x60642EDE690B1018, totalTimeMs, p1, p2); }
static void PLAYSTATS_PROP_CHANGE(Ped p0, int p1, int p2, int p3) { invoke<Void>(0xC55C44E111865A0F, p0, p1, p2, p3); }
static void PLAYSTATS_CLOTH_CHANGE(Ped p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x940BFADAD95A939F, p0, p1, p2, p3, p4); }
static void PLAYSTATS_WEAPON_MODE_CHANGE(Hash weaponHash, Hash componentHashTo, Hash componentHashFrom) { invoke<Void>(0xA634868C7A532A58, weaponHash, componentHashTo, componentHashFrom); }
static void PLAYSTATS_CHEAT_APPLIED(const char* cheat) { invoke<Void>(0xDB98FB9902F6B17C, cheat); }
static void PLAYSTATS_JOB_ACTIVITY_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x7701647A03967883, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_BEND(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x791C60FDE763B02C, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_LTS_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0xA65F85EADA8FCE58, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_LTS_ROUND_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x8B363F1214B75578, p0, p1, p2, p3); }
static void PLAYSTATS_QUICKFIX_TOOL(int element, const char* item) { invoke<Void>(0x93270A4C77D1DCB1, element, item); }
static void PLAYSTATS_IDLE_KICK(int msStoodIdle) { invoke<Void>(0xA3DDD8C7699A4B48, msStoodIdle); }
static void PLAYSTATS_SET_JOIN_TYPE(int joinType) { invoke<Void>(0x011E6F76C331CFCE, joinType); }
static void PLAYSTATS_HEIST_SAVE_CHEAT(Hash hash, int p1) { invoke<Void>(0x1D287C5DA2285371, hash, p1); }
static void PLAYSTATS_APPEND_DIRECTOR_METRIC(Any* p0) { invoke<Void>(0x38D116A5A4F69C5B, p0); }
static void PLAYSTATS_AWARD_BAD_SPORT(int id) { invoke<Void>(0xF03BD9D28197A400, id); }
static void PLAYSTATS_PEGASUS_AS_PERSONAL_AIRCRAFT(Hash modelHash) { invoke<Void>(0xC08C0C34ECB97688, modelHash); }
static void _PLAYSTATS_SHOPMENU_NAV(Any p0, Any p1, Any p2) { invoke<Void>(0xB56CE5A91FCC8552, p0, p1, p2); }
static void PLAYSTATS_FM_EVENT_CHALLENGES(Any p0) { invoke<Void>(0x2D37C46EADE98E63, p0); }
static void PLAYSTATS_FM_EVENT_VEHICLETARGET(Any p0) { invoke<Void>(0x32E12CCFF254D37A, p0); }
static void PLAYSTATS_FM_EVENT_URBANWARFARE(Any p0) { invoke<Void>(0x2825919430010B91, p0); }
static void PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(Any p0) { invoke<Void>(0x173E12E4AAA563A1, p0); }
static void PLAYSTATS_FM_EVENT_ATOB(Any p0) { invoke<Void>(0xD2041B451EDC1C66, p0); }
static void PLAYSTATS_FM_EVENT_PENNEDIN(Any p0) { invoke<Void>(0xC98FBB17B1EC9BA1, p0); }
static void PLAYSTATS_FM_EVENT_PASSTHEPARCEL(Any p0) { invoke<Void>(0x4C70DC8FBB218E4E, p0); }
static void PLAYSTATS_FM_EVENT_HOTPROPERTY(Any p0) { invoke<Void>(0xEBB6A19519CEBE34, p0); }
static void PLAYSTATS_FM_EVENT_DEADDROP(Any p0) { invoke<Void>(0x41A58057D21172EA, p0); }
static void PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(Any p0) { invoke<Void>(0x0E8BC7181CB760A3, p0); }
static void PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(Any p0) { invoke<Void>(0x842F188EE807AF8B, p0); }
static void PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(Any p0) { invoke<Void>(0xEC859204FA292EDF, p0); }
static void PLAYSTATS_FM_EVENT_HUNTBEAST(Any p0) { invoke<Void>(0x05FBB9E5C4B211A4, p0); }
static void PLAYSTATS_PIMENU_HIDE_OPTIONS(Any* data) { invoke<Void>(0x608D1A3E3DEAEBAF, data); }
static int LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, Any p1) { return invoke<int>(0x6D2024112D9A9660, p0, p1); }
static int LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0x54F72D02D777FBCB, p0, p1, p2); }
static int LEADERBOARDS_GET_COLUMN_TYPE(int p0, Any p1, Any p2) { return invoke<int>(0x3C041FAC0ACE6A45, p0, p1, p2); }
static int LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0xB3740C450B9A06AE); }
static int LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<int>(0x92E48B0F5D4E76F2, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x2F700943A3341959, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_ANY_PENDING() { return invoke<BOOL>(0x5824DB463E853B3E); }
static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x7BBF11C251338D41, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x918B101666F9CB83, p0, p1, p2, p3, p4, p5); }
static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0xFAFBA6521BA828B9, p0, p1); }
static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0xA9CDB1E3F0A49883, p0, p1, p2, p3, p4, p5, p6); }
static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0xCB7FE0F272C209AB, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0x15A7798AEEFAC562, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x9A9BC0C3D955A625, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0x40ED52FB5B42D9FB, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_RANK_PREDICTION(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xAB3A622E50A5CCE2, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_PLAFORM(Any* p0, const char* gamerHandleCsv, const char* platformName) { return invoke<BOOL>(0x86A2F61D43CBFF3E, p0, gamerHandleCsv, platformName); }
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_START(Any* p0) { return invoke<BOOL>(0xF685596DB2F81084, p0); }
static void LEADERBOARDS2_READ_GET_ROW_DATA_END() { invoke<Void>(0x612EE6D9325A3B16); }
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_INFO(Any p0, Any* p1) { return invoke<BOOL>(0xA8236CAFF38CEF7C, p0, p1); }
static int LEADERBOARDS2_READ_GET_ROW_DATA_INT(Any p0, Any p1) { return invoke<int>(0x575A7688415EEE2A, p0, p1); }
static float LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(Any p0, Any p1) { return invoke<float>(0xFF7C26AC7D71757C, p0, p1); }
static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0x41B592D7008A639E, p0); }
static void LEADERBOARDS_WRITE_ADD_COLUMN(Any p0, Any p1, float p2) { invoke<Void>(0x3573EC2255786C32, p0, p1, p2); }
static void LEADERBOARDS_WRITE_ADD_COLUMN_LONG(Any p0, Any p1, Any p2) { invoke<Void>(0x4D9375FB05743625, p0, p1, p2); }
static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0x6353C1BD2A5E7EA9, p0); }
static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0xB83DA0A55841C11A); }
static void LEADERBOARDS_CLEAR_CACHE_DATA_ID(Any p0) { invoke<Void>(0xEB551BF55D9D9721, p0); }
static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0xC0967BD19C389A28, p0); }
static int LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<int>(0x992FDA8495111E7E, p0); }
static int LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Any p0) { return invoke<int>(0xEDF2663D6A2097BD, p0); }
static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x4B9EEFBC1906C36A, p0, p1, p2); }
static void PRESENCE_EVENT_UPDATESTAT_INT(Hash statHash, int value, int p2) { invoke<Void>(0x8DD7F37773EBD5B9, statHash, value, p2); }
static void PRESENCE_EVENT_UPDATESTAT_FLOAT(Hash statHash, float value, int p2) { invoke<Void>(0xE9694EE166E27C86, statHash, value, p2); }
static void PRESENCE_EVENT_UPDATESTAT_INT_WITH_STRING(Hash statHash, int value, int p2, const char* string) { invoke<Void>(0x0E6887182A0B2C89, statHash, value, p2, string); }
static BOOL GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES() { return invoke<BOOL>(0xCA63545216190A04); }
static void SET_HAS_POSTED_ALL_VEHICLES_DRIVEN() { invoke<Void>(0x8E4CE3E418A4A18A); }
static void SET_PROFILE_SETTING_PROLOGUE_COMPLETE() { invoke<Void>(0xDA9DD27943055A8D); }
static void SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE() { invoke<Void>(0x3B2E94EC82DA9C40); }
static void SET_PROFILE_SETTING_CREATOR_RACES_DONE(int value) { invoke<Void>(0xEFE7FA2B8F97F8BF, value); }
static void SET_PROFILE_SETTING_CREATOR_DM_DONE(int value) { invoke<Void>(0x524ADF7DCA7AB2FD, value); }
static void SET_PROFILE_SETTING_CREATOR_CTF_DONE(int value) { invoke<Void>(0x6424B1392993B4E8, value); }
static void SET_JOB_ACTIVITY_ID_STARTED(Any p0, int characterSlot) { invoke<Void>(0x91F6DFBE57E45538, p0, characterSlot); }
static void SET_FREEMODE_PROLOGUE_DONE(Any p0, int characterSlot) { invoke<Void>(0x1A169A00A9C3A74E, p0, characterSlot); }
static void SET_FREEMODE_STRAND_PROGRESSION_STATUS(int profileSetting, int settingValue) { invoke<Void>(0x6CDC48346A1C4FCF, profileSetting, settingValue); }
static void STAT_NETWORK_INCREMENT_ON_SUICIDE(Any p0, float p1) { invoke<Void>(0x4BE1DC2DE96B1199, p0, p1); }
static void STAT_SET_CHEAT_IS_ACTIVE() { invoke<Void>(0xB2C27348224E729C); }
static BOOL LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(Any* p0, Any* p1) { return invoke<BOOL>(0xFFC169CFE58B4AE2, p0, p1); }
static void FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE() { invoke<Void>(0xFFD62C221C935ADB); }
static void STAT_MIGRATE_CLEAR_FOR_RESTART() { invoke<Void>(0xA1C98227D7D82333); }
static BOOL STAT_MIGRATE_SAVEGAME_START(const char* platformName) { return invoke<BOOL>(0x38BED19EB5C34B41, platformName); }
static int STAT_MIGRATE_SAVEGAME_GET_STATUS() { return invoke<int>(0x8F9CF4C6161EB431); }
static BOOL STAT_MIGRATE_CHECK_ALREADY_DONE() { return invoke<BOOL>(0xB4BB3DD3A6D3F304); }
static BOOL STAT_MIGRATE_CHECK_START() { return invoke<BOOL>(0xA7CF0480510EE046); }
static int STAT_MIGRATE_CHECK_GET_IS_PLATFORM_AVAILABLE(int p0) { return invoke<int>(0xE76F74E4C982A0D4, p0); }
static int STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(int p0, Any* p1) { return invoke<int>(0x0FE2E7ACE70D240E, p0, p1); }
static int STAT_GET_SAVE_MIGRATION_STATUS(Any* data) { return invoke<int>(0xF55F8AA504635B5C, data); }
static BOOL STAT_SAVE_MIGRATION_CANCEL_PENDING_OPERATION() { return invoke<BOOL>(0x439313DFB58CA8B9); }
static int STAT_GET_CANCEL_SAVE_MIGRATION_STATUS() { return invoke<int>(0x8D48140414CDD574); }
static BOOL STAT_SAVE_MIGRATION_CONSUME_CONTENT(Hash contentId, const char* srcPlatform, const char* srcGamerHandle) { return invoke<BOOL>(0x07D12DEAC5A3B4E6, contentId, srcPlatform, srcGamerHandle); }
static int STAT_GET_SAVE_MIGRATION_CONSUME_CONTENT_STATUS(int* p0) { return invoke<int>(0x040F27244ED9B5A6, p0); }
static void STAT_ENABLE_STATS_TRACKING() { invoke<Void>(0x1E132C341165F83E); }
static void STAT_DISABLE_STATS_TRACKING() { invoke<Void>(0x7D809DF9CCA503F0); }
static BOOL STAT_IS_STATS_TRACKING_ENABLED() { return invoke<BOOL>(0x672D6F3E8E916DB5); }
static BOOL STAT_START_RECORD_STAT(int statType, int valueType) { return invoke<BOOL>(0xD007674D8A581D71, statType, valueType); }
static BOOL STAT_STOP_RECORD_STAT() { return invoke<BOOL>(0x77DAA17F34FDE49D); }
static BOOL STAT_GET_RECORDED_VALUE(float* value) { return invoke<BOOL>(0x6975D53533891910, value); }
static BOOL STAT_IS_RECORDING_STAT() { return invoke<BOOL>(0xC3051E9423297E5C); }
static int STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE() { return invoke<int>(0xDA0C268B09050750); }
static float STAT_GET_CURRENT_REAR_WHEEL_DISTANCE() { return invoke<float>(0x91F40F276617074F); }
static float STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE() { return invoke<float>(0xFF41A17ED9059E7D); }
static float STAT_GET_CURRENT_JUMP_DISTANCE() { return invoke<float>(0x143EE419E5A537E6); }
static float STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE() { return invoke<float>(0x24B36D1854339214); }
static float STAT_GET_CURRENT_SPEED() { return invoke<float>(0xC5EF85C408571EAF); }
static float STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE() { return invoke<float>(0xEAE605592B9C789F); }
static float STAT_GET_CURRENT_SKYDIVING_DISTANCE() { return invoke<float>(0xA318B59A6358E821); }
static float STAT_GET_CHALLENGE_FLYING_DIST() { return invoke<float>(0x3D70C45F9F077E0A); }
static BOOL STAT_GET_FLYING_ALTITUDE(float* outValue) { return invoke<BOOL>(0x2B2ABCEBD9B1F36F, outValue); }
static BOOL STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN() { return invoke<BOOL>(0xF03AFB81ECD7494E); }
static float STAT_GET_VEHICLE_BAIL_DISTANCE() { return invoke<float>(0x282230B7F0E52D56); }
static BOOL STAT_ROLLBACK_SAVE_MIGRATION() { return invoke<BOOL>(0xD5F980C0F4DE6597); }
static void SET_HAS_SPECIALEDITION_CONTENT(int value) { invoke<Void>(0xED11291F7127888E, value); }
static void SET_SAVE_MIGRATION_TRANSACTION_ID_WARNING(int transactionId) { invoke<Void>(0x100D89BF365E1356, transactionId); }
static void GET_BOSS_GOON_UUID(int characterSlot, Any p1, Any p2) { invoke<Void>(0xB91B042AE29D1DC0, characterSlot, p1, p2); }
static void PLAYSTATS_BW_BOSSONBOSSDEATHMATCH(Any p0) { invoke<Void>(0x80D4C93EC30B0786, p0); }
static void PLAYSTATS_BW_YATCHATTACK(Any p0) { invoke<Void>(0x9CEB2AC24E291FE5, p0); }
static void PLAYSTATS_BW_HUNT_THE_BOSS(Any p0) { invoke<Void>(0x70FD47FAC8200A49, p0); }
static void PLAYSTATS_BW_SIGHTSEER(Any p0) { invoke<Void>(0x6FA1E0B637DED988, p0); }
static void PLAYSTATS_BW_ASSAULT(Any p0) { invoke<Void>(0x9ADE63CF2AA5FA61, p0); }
static void PLAYSTATS_BW_BELLY_OF_THE_BEAST(Any p0) { invoke<Void>(0x14C70C346E2865FB, p0); }
static void PLAYSTATS_BW_HEAD_HUNTER(Any p0) { invoke<Void>(0xC1538E7E522A1807, p0); }
static void PLAYSTATS_BW_FRAGILE_GOODS(Any p0) { invoke<Void>(0xEA483A47960FF65E, p0); }
static void PLAYSTATS_BW_AIR_FREIGHT(Any p0) { invoke<Void>(0xF3621FB07D69B631, p0); }
static void PLAYSTATS_BC_CAR_JACKING(Any p0) { invoke<Void>(0xAC598BA78ED25971, p0); }
static void PLAYSTATS_BC_SMASH_AND_GRAB(Any p0) { invoke<Void>(0xE71905B28E3F819A, p0); }
static void PLAYSTATS_BC_PROTECTION_RACKET(Any p0) { invoke<Void>(0xA2FA391998A5CA4F, p0); }
static void PLAYSTATS_BC_MOST_WANTED(Any p0) { invoke<Void>(0x3FCF9BCA6FB938F2, p0); }
static void PLAYSTATS_BC_FINDERS_KEEPERS(Any p0) { invoke<Void>(0x719970758F252DBF, p0); }
static void PLAYSTATS_BC_POINT_TO_POINT(Any p0) { invoke<Void>(0x508F3011A3378766, p0); }
static void PLAYSTATS_BC_CASHING(Any p0) { invoke<Void>(0x350AD43F9C3F2454, p0); }
static void PLAYSTATS_BC_SALVAGE(Any p0) { invoke<Void>(0x760C934FF448A9F0, p0); }
static void PLAYSTATS_SPENT_PI_CUSTOM_LOADOUT(int amount) { invoke<Void>(0x90D02DA0EBE3D2A2, amount); }
static void PLAYSTATS_BUY_CONTRABAND_MISSION(Any* data) { invoke<Void>(0x630EFF47222F5E1D, data); }
static void PLAYSTATS_SELL_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xEB54AA925E801335, data); }
static void PLAYSTATS_DEFEND_CONTRABAND_MISSION(Any* data) { invoke<Void>(0x72940F2C0631BBEB, data); }
static void PLAYSTATS_RECOVER_CONTRABAND_MISSION(Any* data) { invoke<Void>(0xC769CAC3FD631439, data); }
static void PLAYSTATS_HIT_CONTRABAND_DESTROY_LIMIT(Any p0) { invoke<Void>(0xAE494703C93629A7, p0); }
static void START_BEING_BOSS(Any p0) { invoke<Void>(0xE6523AD46828A3F6, p0); }
static void START_BEING_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0x221F00BDB6FE967E, p0, p1, p2); }
static void END_BEING_BOSS(Any p0, Any p1) { invoke<Void>(0xD9ADAE64ED7472C8, p0, p1); }
static void END_BEING_GOON(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x548C5E01E1FF757E, p0, p1, p2, p3, p4); }
static void HIRED_LIMO(Any p0, Any p1) { invoke<Void>(0x67269D2788D6D1B2, p0, p1); }
static void ORDER_BOSS_VEHICLE(Any p0, Any p1, Hash vehicleHash) { invoke<Void>(0x0F285480DF661C3D, p0, p1, vehicleHash); }
static void CHANGE_UNIFORM(Any p0, Any p1, Any p2) { invoke<Void>(0xEDE8FBBC2E485227, p0, p1, p2); }
static void CHANGE_GOON_LOOKING_FOR_WORK(Any p0) { invoke<Void>(0x941DD7AC53C9EC22, p0); }
static void SEND_METRIC_GHOSTING_TO_PLAYER(Any p0) { invoke<Void>(0x1B045571F6FA298C, p0); }
static void SEND_METRIC_VIP_POACH(Any p0, Any p1, Any p2) { invoke<Void>(0x329713E68B100498, p0, p1, p2); }
static void SEND_METRIC_PUNISH_BODYGUARD(Any p0) { invoke<Void>(0x88D5C9BF47388E35, p0); }
static void PLAYSTATS_START_TRACKING_STUNTS() { invoke<Void>(0x4C7D89621410F77E); }
static void PLAYSTATS_STOP_TRACKING_STUNTS() { invoke<Void>(0x50BF6070C8D9F49F); }
static void PLAYSTATS_MISSION_ENDED(Any p0) { invoke<Void>(0x1CF82FBB85DD6ABB, p0); }
static void PLAYSTATS_IMPEXP_MISSION_ENDED(Any p0) { invoke<Void>(0xA186CBB04F0BBCFE, p0); }
static void PLAYSTATS_CHANGE_MC_ROLE(Any p0, Any p1, Any p2, Any p3, int role, int p5, Any p6) { invoke<Void>(0xCA4490F4B172921A, p0, p1, p2, p3, role, p5, p6); }
static void PLAYSTATS_CHANGE_MC_OUTFIT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x4A3EF58902440342, p0, p1, p2, p3, p4); }
static void PLAYSTATS_SWITCH_MC_EMBLEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x659F4E947AD2B02A, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MC_REQUEST_BIKE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x50F77CF468D67786, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MC_KILLED_RIVAL_MC_MEMBER(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9FA5724BA444B78F, p0, p1, p2, p3, p4); }
static void PLAYSTATS_ABANDONED_MC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x386D5FB82562D9A7, p0, p1, p2, p3, p4); }
static void PLAYSTATS_EARNED_MC_POINTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x038FC0304403CC66, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MC_FORMATION_ENDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xAAEAC50F94519B77, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_MC_CLUBHOUSE_ACTIVITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x9C9F041189C7B5E6, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYSTATS_RIVAL_BEHAVIOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x0FAB208D4EE01DCE, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void PLAYSTATS_COPY_RANK_INTO_NEW_SLOT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x51223729D9AEA4FF, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_DUPE_DETECTED(Any* data) { invoke<Void>(0x1A863223E987A73F, data); }
static void PLAYSTATS_BAN_ALERT(int p0) { invoke<Void>(0x89CB07C992FD7482, p0); }
static void PLAYSTATS_GUNRUNNING_MISSION_ENDED(Any* data) { invoke<Void>(0xCF78529B9B88C73E, data); }
static void PLAYSTATS_GUNRUNNING_RND(Any p0) { invoke<Void>(0xDBDCE53A650E5E77, p0); }
static void PLAYSTATS_BUSINESS_BATTLE_ENDED(Any p0) { invoke<Void>(0x9F37D3068C21188B, p0); }
static void PLAYSTATS_WAREHOUSE_MISSION_ENDED(Any p0) { invoke<Void>(0x3CC95BC25EF390A3, p0); }
static void PLAYSTATS_NIGHTCLUB_MISSION_ENDED(Any p0) { invoke<Void>(0xA96F57BEEBDCD7FD, p0); }
static void PLAYSTATS_DJ_USAGE(Any p0, Any p1) { invoke<Void>(0x7FCBCE6EE93B0340, p0, p1); }
static void PLAYSTATS_MINIGAME_USAGE(Any p0, Any p1, Any p2) { invoke<Void>(0xF8C98B298DDC5D32, p0, p1, p2); }
static void PLAYSTATS_STONE_HATCHET_ENDED(Any* data) { invoke<Void>(0xF0B9CB44987DE499, data); }
static void PLAYSTATS_SMUGGLER_MISSION_ENDED(Any* data) { invoke<Void>(0x1325E9C90489B378, data); }
static void PLAYSTATS_FM_HEIST_PREP_ENDED(Any* data) { invoke<Void>(0x99328D758CDC23F7, data); }
static void PLAYSTATS_INSTANCED_HEIST_ENDED(Any* data, Any p1, Any p2, Any p3) { invoke<Void>(0x371A8C274440C46A, data, p1, p2, p3); }
static void PLAYSTATS_DAR_CHECKPOINT(Any* data) { invoke<Void>(0xB47B9148D14503E5, data); }
static void PLAYSTATS_ENTER_SESSION_PACK(Any* data) { invoke<Void>(0x684BD5689373BE09, data); }
static void PLAYSTATS_DRONE_USAGE(int p0, int p1, int p2) { invoke<Void>(0x4836A505A59A567B, p0, p1, p2); }
static void PLAYSTATS_SPIN_WHEEL(int p0, int p1, int p2, int p3) { invoke<Void>(0xEFB96B0F8AFC55E7, p0, p1, p2, p3); }
static void PLAYSTATS_ARENA_WARS_SPECTATOR(int p0, int p1, int p2, int p3, int p4) { invoke<Void>(0x2630B46C64BCAAE2, p0, p1, p2, p3, p4); }
static void PLAYSTATS_ARENA_WARS_ENDED(Any* data) { invoke<Void>(0xF215BF4F28EC3017, data); }
static void PLAYSTATS_SWITCH_PASSIVE_MODE(BOOL p0, int p1, int p2, int p3) { invoke<Void>(0xD3ABBB1A96756065, p0, p1, p2, p3); }
static void PLAYSTATS_COLLECTIBLE_PICKED_UP(int p0, Hash objectHash, Any p2, Any p3, int moneyAmount, int rpAmount, int chipsAmount, Any p7, int p8, Any p9, Any p10) { invoke<Void>(0xF68338683C568951, p0, objectHash, p2, p3, moneyAmount, rpAmount, chipsAmount, p7, p8, p9, p10); }
static void PLAYSTATS_CASINO_STORY_MISSION_ENDED(Any p0, Any p1) { invoke<Void>(0x46A8E0CD89EA583B, p0, p1); }
static void PLAYSTATS_CASINO_CHIP(Any p0) { invoke<Void>(0x3537BA3FCD2A039A, p0); }
static void PLAYSTATS_CASINO_ROULETTE(Any p0) { invoke<Void>(0xED43EEB7E19CF2E3, p0); }
static void PLAYSTATS_CASINO_BLACKJACK(Any p0) { invoke<Void>(0xD2C8AF03369DD71B, p0); }
static void PLAYSTATS_CASINO_THREE_CARD_POKER(Any p0) { invoke<Void>(0x5B04C6D6A21F6BDE, p0); }
static void PLAYSTATS_CASINO_SLOT_MACHINE(Any p0) { invoke<Void>(0x4625293E9A8A8039, p0); }
static void PLAYSTATS_CASINO_INSIDE_TRACK(Any p0) { invoke<Void>(0x4BD15CBD0A9222DD, p0); }
static void PLAYSTATS_CASINO_LUCKY_SEVEN(Any p0) { invoke<Void>(0xCDD1396DEA43BDA8, p0); }
static void PLAYSTATS_CASINO_ROULETTE_LIGHT(Any p0) { invoke<Void>(0x7B03AA631D3DC516, p0); }
static void PLAYSTATS_CASINO_BLACKJACK_LIGHT(Any p0) { invoke<Void>(0xD905BB02623EB466, p0); }
static void PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(Any p0) { invoke<Void>(0x9908830BDC036C61, p0); }
static void PLAYSTATS_CASINO_SLOT_MACHINE_LIGHT(Any p0) { invoke<Void>(0x6D9B2D5FF44B7412, p0); }
static void PLAYSTATS_CASINO_INSIDE_TRACK_LIGHT(Any p0) { invoke<Void>(0x7B2248C7C15BE57A, p0); }
static void PLAYSTATS_ARCADE_GAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x7F9682CABF083921, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_ARCADE_LOVE_MATCH(Any p0, Any p1) { invoke<Void>(0x82BF0C9FB824099C, p0, p1); }
static void PLAYSTATS_FREEMODE_CASINO_MISSION_ENDED(Any* data) { invoke<Void>(0x4D301F952E820ABF, data); }
static void PLAYSTATS_HEIST3_DRONE(Any p0) { invoke<Void>(0xF13CC26EA89AA7F8, p0); }
static void PLAYSTATS_HEIST3_HACK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x675E746FC2A4FB77, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_NPC_PHONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x7114D68882DD5DFB, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void PLAYSTATS_ARCADE_CABINET(Any p0) { invoke<Void>(0x2970B68950960A6C, p0); }
static void PLAYSTATS_HEIST3_FINALE(Any p0) { invoke<Void>(0xB48B26002E1AA60A, p0); }
static void PLAYSTATS_HEIST3_PREP(Any p0) { invoke<Void>(0x40072633F87B9108, p0); }
static void PLAYSTATS_MASTER_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA95EC1B907F29ED9, p0, p1, p2, p3); }
static void PLAYSTATS_QUIT_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x41D32B3516729590, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_VOTE(Any p0) { invoke<Void>(0x81A3B28FEE8BC3E2, p0); }
static void PLAYSTATS_NJVS_VOTE(Any p0) { invoke<Void>(0x339EF7B9AE008FA8, p0); }
static void PLAYSTATS_KILL_YOURSELF() { invoke<Void>(0x9CE7919ACC98C899); }
static void PLAYSTATS_FM_MISSION_END(Any p0, Any p1, Any p2) { invoke<Void>(0xA40024641239312A, p0, p1, p2); }
static void PLAYSTATS_HEIST4_PREP(Any p0) { invoke<Void>(0xB0BAD388315F2608, p0); }
static void PLAYSTATS_HEIST4_FINALE(Any p0) { invoke<Void>(0xBA1BC83D99F914EB, p0); }
static void PLAYSTATS_HEIST4_HACK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xCAA6345ABFF6EA75, p0, p1, p2, p3, p4); }
static void PLAYSTATS_SUB_WEAP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xC155FF33EAAF8C90, p0, p1, p2, p3); }
static void PLAYSTATS_FAST_TRVL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x0EA2F05FA7C5B9D4, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void PLAYSTATS_HUB_ENTRY(Any p0) { invoke<Void>(0xD7F11E9496A00370, p0); }
static void PLAYSTATS_DJ_MISSION_ENDED(Any p0) { invoke<Void>(0x7C1CE15F51FA4860, p0); }
static void PLAYSTATS_ROBBERY_PREP(Any p0) { invoke<Void>(0xBD30FDBCFA1FA6FE, p0); }
static void PLAYSTATS_ROBBERY_FINALE(Any p0) { invoke<Void>(0xD3DAE430946FA2C0, p0); }
static void PLAYSTATS_EXTRA_EVENT(Any p0) { invoke<Void>(0xF629F308639591F4, p0); }
static void PLAYSTATS_CARCLUB_POINTS(Any p0) { invoke<Void>(0x1F6CBC74AC659452, p0); }
static void PLAYSTATS_CARCLUB_CHALLENGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xCC5FFCD1D8510D21, p0, p1, p2, p3); }
static void PLAYSTATS_CARCLUB_PRIZE(int p0, Hash vehicleModel) { invoke<Void>(0x492808CC0E1DB266, p0, vehicleModel); }
static void PLAYSTATS_AWARD_NAV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xA6B31A9A2BC308B5, p0, p1, p2, p3); }
static void PLAYSTATS_INST_MISSION_END(Any p0) { invoke<Void>(0xC11595E99C048D43, p0); }
static void PLAYSTATS_HUB_EXIT(Any p0) { invoke<Void>(0x02F3C05A368B66B3, p0); }
static void PLAYSTATS_INVENTORY(Any p0) { invoke<Void>(0x68F94159C38F25F8, p0); }
static void _PLAYSTATS_ACID_MISSION_END(Any p0) { invoke<Void>(0x11FD0D892567AF52, p0); }
static void _PLAYSTATS_ACID_RND(Any p0) { invoke<Void>(0xCE650C981E786BEB, p0); }
static void _PLAYSTATS_IDLE(Any p0, Any p1, Any p2) { invoke<Void>(0x410BD6C72A6CE17A, p0, p1, p2); }
static void _PLAYSTATS_PLAYER_STYLE(Any p0) { invoke<Void>(0x09E495BCF3E7FA74, p0); }
static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0x12C01FC00B0CBB6B); }
static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0x6C39BDF5EA5D38FC, x, y, z); }
static BOOL NETWORK_UPDATE_LOAD_SCENE() { return invoke<BOOL>(0xD87B2B089732DAFC); }
static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0x9C71253F91C37F27); }
static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0xE3D86F90541BD5EF, interiorID, toggle); }
static void REQUEST_MODEL(Hash model) { invoke<Void>(0xEC9DAA34BBB4658C, model); }
static void REQUEST_MENU_PED_MODEL(Hash model) { invoke<Void>(0x99EE60555ADD76D0, model); }
static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x6252BC0DD8A320DB, model); }
static void REQUEST_MODELS_IN_ROOM(Interior interior, const char* roomName) { invoke<Void>(0x65694862DDC9E5D0, interior, roomName); }
static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0x55098D9E9AD58806, model); }
static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0xE7D342E0F16AAA8F, model); }
static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0x441B9C85D0FFA9ED, model); }
static BOOL IS_MODEL_A_PED(Hash model) { return invoke<BOOL>(0xBA4223DE7F0708BA, model); }
static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0xAD1840C2E6AF7D5E, model); }
static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xEA2D52183C7EA9CF, x, y, z); }
static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0x91AA33D82EA60124, model); }
static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0xB1625FCB7B6A7982, model); }
static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0xCAB6FA8C9D44F90A, x, y, z); }
static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0xBBE75ED2B58BB1F7, animDict); }
static void REQUEST_ANIM_DICT(const char* animDict) { invoke<Void>(0x80813AC549A1E8AE, animDict); }
static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0xE100DD4F82A51BDE, animDict); }
static void REMOVE_ANIM_DICT(const char* animDict) { invoke<Void>(0x268BE77F77533D03, animDict); }
static void REQUEST_ANIM_SET(const char* animSet) { invoke<Void>(0xA336AFF285251641, animSet); }
static BOOL HAS_ANIM_SET_LOADED(const char* animSet) { return invoke<BOOL>(0x60C643DC13B0C72B, animSet); }
static void REMOVE_ANIM_SET(const char* animSet) { invoke<Void>(0x13F0C01028B5EE7C, animSet); }
static void REQUEST_CLIP_SET(const char* clipSet) { invoke<Void>(0x73DEEAB0747FB17C, clipSet); }
static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0x8175BC6D49412468, clipSet); }
static void REMOVE_CLIP_SET(const char* clipSet) { invoke<Void>(0x9B64A44D0B8D7CF6, clipSet); }
static void REQUEST_IPL(const char* iplName) { invoke<Void>(0xECFC57F5F11BCD83, iplName); }
static void REMOVE_IPL(const char* iplName) { invoke<Void>(0x5373E9377066509E, iplName); }
static BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0x5AEB336317DC4151, iplName); }
static void SET_STREAMING(BOOL toggle) { invoke<Void>(0x461E44FC144D65C1, toggle); }
static void LOAD_GLOBAL_WATER_FILE(int waterType) { invoke<Void>(0x548BCB9EBC09A967, waterType); }
static int GET_GLOBAL_WATER_FILE() { return invoke<int>(0x5A9ACBB54EEA813F); }
static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0xD82473EFEF7FC622, toggle); }
static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0x9E635675ADA39E95, toggle); }
static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0xD81FEE0302584F60, toggle); }
static void SET_DITCH_POLICE_MODELS(BOOL toggle) { invoke<Void>(0x3A03D0433769C629, toggle); }
static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0x684D65D3F0BFF960); }
static void REQUEST_PTFX_ASSET() { invoke<Void>(0x8003D3C0115A1035); }
static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0x6F13318788EDDAD8); }
static void REMOVE_PTFX_ASSET() { invoke<Void>(0xAE427DA16687F323); }
static void REQUEST_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0xEBEE7DC21AB44EC9, fxName); }
static BOOL HAS_NAMED_PTFX_ASSET_LOADED(const char* fxName) { return invoke<BOOL>(0x939D49C9FAA8139A, fxName); }
static void REMOVE_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0x90D778E278B533C0, fxName); }
static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0x283C0970282AA5F3, p0); }
static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0xAD9B1C8FED6B4D96, p0); }
static void CLEAR_FOCUS() { invoke<Void>(0xE3F88173F42C071B); }
static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0x2D8D239B3F1D13F9, x, y, z, offsetX, offsetY, offsetZ); }
static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0xD410E6FC0A0C97D2, entity); }
static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x4C052E5245B17920, entity); }
static void SET_RESTORE_FOCUS_ENTITY(Entity p0) { invoke<Void>(0x9E3DFB4BEB42BEDF, p0); }
static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0x8BAB92052AD69AC5, name, toggle); }
static void SET_ALL_MAPDATA_CULLED(Any p0) { invoke<Void>(0x8F8802BEE0727FD5, p0); }
static int STREAMVOL_CREATE_SPHERE(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<int>(0xE9D3D741E2195673, x, y, z, rad, p4, p5); }
static int STREAMVOL_CREATE_FRUSTUM(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<int>(0x4F6F8824BE43F1F7, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static int STREAMVOL_CREATE_LINE(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<int>(0xDA771B84868AEA60, p0, p1, p2, p3, p4, p5, p6); }
static void STREAMVOL_DELETE(Any unused) { invoke<Void>(0x6C730FCE8A68AF6F, unused); }
static BOOL STREAMVOL_HAS_LOADED(Any unused) { return invoke<BOOL>(0xE945B67B28139DA2, unused); }
static BOOL STREAMVOL_IS_VALID(Any unused) { return invoke<BOOL>(0x5561E31B168FA823, unused); }
static BOOL IS_STREAMVOL_ACTIVE() { return invoke<BOOL>(0x8240737C161141A9); }
static BOOL NEW_LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke<BOOL>(0xAC48F8E2BF2BEBF7, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); }
static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0x4A3280817398D754, x, y, z, radius, p4); }
static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0x6981C3213B841071); }
static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0x787F8EE1F6FBDC6D); }
static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x9E2D35FA908F57B4); }
static BOOL IS_SAFE_TO_START_PLAYER_SWITCH() { return invoke<BOOL>(0xB032847A7F7F0BFE); }
static void START_PLAYER_SWITCH(Ped from, Ped to, int flags, int switchType) { invoke<Void>(0x8DD44A3F0D8EBD63, from, to, flags, switchType); }
static void STOP_PLAYER_SWITCH() { invoke<Void>(0xF4DB2666A609235A); }
static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0x3555462DB47B7AB1); }
static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0x1403FEB4554982F8); }
static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xE4B27F02458924A3, x1, y1, z1, x2, y2, z2); }
static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x6D231A0D52134FC1); }
static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x1F32174C38BEB883); }
static void SET_PLAYER_SHORT_SWITCH_STYLE(int p0) { invoke<Void>(0xEDACB682D42B6786, p0); }
static int GET_PLAYER_SWITCH_JUMP_CUT_INDEX() { return invoke<int>(0x2291B8E26538A740); }
static void SET_PLAYER_SWITCH_OUTRO(float cameraCoordX, float cameraCoordY, float cameraCoordZ, float camRotationX, float camRotationY, float camRotationZ, float camFov, float camFarClip, int rotationOrder) { invoke<Void>(0x6A668C52322FABB2, cameraCoordX, cameraCoordY, cameraCoordZ, camRotationX, camRotationY, camRotationZ, camFov, camFarClip, rotationOrder); }
static void SET_PLAYER_SWITCH_ESTABLISHING_SHOT(const char* name) { invoke<Void>(0xC1DDC33C72C3B5A9, name); }
static void ALLOW_PLAYER_SWITCH_PAN() { invoke<Void>(0x546ACDD38D665C85); }
static void ALLOW_PLAYER_SWITCH_OUTRO() { invoke<Void>(0x50821CA6BB13D3E4); }
static void ALLOW_PLAYER_SWITCH_ASCENT() { invoke<Void>(0xBB3CF86DAAC9BAEB); }
static void ALLOW_PLAYER_SWITCH_DESCENT() { invoke<Void>(0x43FFAC3C360D589D); }
static BOOL IS_SWITCH_READY_FOR_DESCENT() { return invoke<BOOL>(0xB286852BCC387913); }
static void ENABLE_SWITCH_PAUSE_BEFORE_DESCENT() { invoke<Void>(0x042CE839FFCC10E9); }
static void DISABLE_SWITCH_OUTRO_FX() { invoke<Void>(0xE48295FCA7404802); }
static void SWITCH_TO_MULTI_FIRSTPART(Ped ped, int flags, int switchType) { invoke<Void>(0x6DECE5EA21E009F8, ped, flags, switchType); }
static void SWITCH_TO_MULTI_SECONDPART(Ped ped) { invoke<Void>(0xB4EDA6C252467FB1, ped); }
static BOOL IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED() { return invoke<BOOL>(0x846BCB82A586E3AA); }
static int GET_PLAYER_SWITCH_INTERP_OUT_DURATION() { return invoke<int>(0x3F331BE6EB7BAC07); }
static int GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() { return invoke<int>(0xED93D3690FF8AF5F); }
static BOOL IS_SWITCH_SKIPPING_DESCENT() { return invoke<BOOL>(0xE386B6872B2E38EF); }
static void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME() { invoke<Void>(0x3E09769A87E0D881); }
static float GET_LODSCALE() { return invoke<float>(0xD173C7695174C519); }
static void OVERRIDE_LODSCALE_THIS_FRAME(float scaling) { invoke<Void>(0xF8A2800C0B863DB1, scaling); }
static void REMAP_LODSCALE_RANGE_THIS_FRAME(float p0, float p1, float p2, float p3) { invoke<Void>(0x9091BFD6A05E20ED, p0, p1, p2, p3); }
static void SUPPRESS_HD_MAP_STREAMING_THIS_FRAME() { invoke<Void>(0xCA2E379E3CAB622F); }
static void SET_RENDER_HD_ONLY(BOOL toggle) { invoke<Void>(0x030379A8083CE8F9, toggle); }
static void FORCE_ALLOW_TIME_BASED_FADING_THIS_FRAME() { invoke<Void>(0xC31FD6E2FE1930B9); }
static void IPL_GROUP_SWAP_START(const char* iplName1, const char* iplName2) { invoke<Void>(0x9D8913BC7BA1265D, iplName1, iplName2); }
static void IPL_GROUP_SWAP_CANCEL() { invoke<Void>(0xF9B380FD07A8B67E); }
static BOOL IPL_GROUP_SWAP_IS_READY() { return invoke<BOOL>(0xE2B94989E87636A6); }
static void IPL_GROUP_SWAP_FINISH() { invoke<Void>(0x32BBBA949DBE76E8); }
static BOOL IPL_GROUP_SWAP_IS_ACTIVE() { return invoke<BOOL>(0x808A7B80951975C3); }
static void PREFETCH_SRL(const char* srl) { invoke<Void>(0xADF8AA2F22A19163, srl); }
static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0xEBCB9138B2CABF20); }
static void BEGIN_SRL() { invoke<Void>(0x89EAF23AE72CD8A8); }
static void END_SRL() { invoke<Void>(0xE9DE8F39ED85311E); }
static void SET_SRL_TIME(float p0) { invoke<Void>(0x4B1F30FB3C9A4B7F, p0); }
static void SET_SRL_POST_CUTSCENE_CAMERA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xEB6D4B648B4DD588, p0, p1, p2, p3, p4, p5); }
static void SET_SRL_READAHEAD_TIMES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x216049890A2D1EC6, p0, p1, p2, p3); }
static void SET_SRL_LONG_JUMP_MODE(BOOL p0) { invoke<Void>(0x6BD0E2C3AF4FF666, p0); }
static void SET_SRL_FORCE_PRESTREAM(Any p0) { invoke<Void>(0x78081733656ABA54, p0); }
static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0x34ABC7A6F0629903, x, y, z, radius); }
static void CLEAR_HD_AREA() { invoke<Void>(0x6C086599D0704F9E); }
static void INIT_CREATOR_BUDGET() { invoke<Void>(0x9FF2DDC6AA093A2E); }
static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0xA0511280CE71369E); }
static BOOL ADD_MODEL_TO_CREATOR_BUDGET(Hash modelHash) { return invoke<BOOL>(0xFF795413579DFDC5, modelHash); }
static void REMOVE_MODEL_FROM_CREATOR_BUDGET(Hash modelHash) { invoke<Void>(0x030B10A00315BA0C, modelHash); }
static float GET_USED_CREATOR_BUDGET() { return invoke<float>(0x77B41E941C2D2D17); }
static void SET_ISLAND_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0x105F8712C3E145BF, name, toggle); }
static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0x5524CAF18378DF39, ped, ms); }
static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0x0FD8B5F4BB15CD71, ped, time); }
static void TASK_JUMP(Ped ped, BOOL usePlayerLaunchForce, BOOL doSuperJump, BOOL useFullSuperJumpForce) { invoke<Void>(0xC3EBEA7530D64F53, ped, usePlayerLaunchForce, doSuperJump, useFullSuperJumpForce); }
static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0xAFC7A89C990C4339, ped, duration); }
static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int timeToFacePed, int flags) { invoke<Void>(0x0B1A40D00F279307, ped, duration, facingPed, timeToFacePed, flags); }
static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0xAD548E64669C4255, ped, duration); }
static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int seat, float speed) { invoke<Void>(0xFECF11FFA163942B, ped, vehicle, timeOut, seat, speed); }
static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, const char* overrideEntryClipsetName) { invoke<Void>(0xEBA229B2E0BB05E0, ped, vehicle, timeout, seat, speed, flag, overrideEntryClipsetName); }
static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0x23EB5FC236231892, ped, vehicle, flags); }
static void TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0x693BCB64E0E60254, ped, boat); }
static void TASK_SKY_DIVE(Ped ped, BOOL instant) { invoke<Void>(0xF9185EBA84883764, ped, instant); }
static void TASK_PARACHUTE(Ped ped, BOOL giveParachuteItem, BOOL instant) { invoke<Void>(0x2A82E9CBC48CF2F8, ped, giveParachuteItem, instant); }
static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0xD62DC69EB22834CE, ped, x, y, z); }
static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0x83834BBDF7CA6EC7, ped, x, y, z); }
static void SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) { invoke<Void>(0xA81F12900F3749B3, ped, thrust); }
static void TASK_RAPPEL_FROM_HELI(Ped ped, float minHeightAboveGround) { invoke<Void>(0xC52B4FFE6114ED5E, ped, minHeightAboveGround); }
static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDistance) { invoke<Void>(0xCF6CC9EA0D2EFE23, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, straightLineDistance); }
static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0x6C33493626F3C0D1, ped, vehicle, x, y, z, speed, driveMode, stopRange); }
static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0x7C8E9DE09D4AD3FF, ped, vehicle, speed, drivingStyle); }
static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0x329B82704ED2A3E3, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); }
static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0x63C8DCBEC1CF8225, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); }
static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, float moveBlendRatio, int time) { invoke<Void>(0x3713EFBC9B9F5150, ped, entity, x, y, z, moveBlendRatio, time); }
static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0x2280392018BC0DD3, ped, heading, timeout); }
static void TASK_FLUSH_ROUTE() { invoke<Void>(0x076FB64D39D380B3); }
static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0x8B59380D9D15EBCD, x, y, z); }
static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int mode) { invoke<Void>(0xCEF5F1212D833FEF, ped, speed, mode); }
static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float moveBlendRatio, float slowDownDistance, int flags) { invoke<Void>(0xAB3658A740EED98E, entity, target, duration, distance, moveBlendRatio, slowDownDistance, flags); }
static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL preferPavements, BOOL quitIfOutOfRange) { invoke<Void>(0xFD251F92B546F389, ped, x, y, z, distance, time, preferPavements, quitIfOutOfRange); }
static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float safeDistance, int fleeTime, BOOL preferPavements, BOOL updateToNearestHatedPed) { invoke<Void>(0xD844F5E50DAB6FF7, ped, fleeTarget, safeDistance, fleeTime, preferPavements, updateToNearestHatedPed); }
static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0x3EE6720350A31CAB, ped, fleeTarget); }
static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) { invoke<Void>(0xDBFFE049CC0EA5E0, ped, eventHandle); }
static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<Void>(0xE092C8C5A5EA5F57, ped, x, y, z, radius, minimalLength, timeBetweenWalks); }
static void TASK_WANDER_STANDARD(Ped ped, float heading, int flags) { invoke<Void>(0x761F56E633460973, ped, heading, flags); }
static void TASK_WANDER_SPECIFIC(Ped ped, const char* conditionalAnimGroupStr, const char* conditionalAnimStr, float heading) { invoke<Void>(0xFDBB3471DA96A6F4, ped, conditionalAnimGroupStr, conditionalAnimStr, heading); }
static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0x2D864CC37DDFA963, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); }
static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash stealthKillActionResultHash, float desiredMoveBlendRatio, int stealthFlags) { invoke<Void>(0x29EE4DD912B2F524, killer, target, stealthKillActionResultHash, desiredMoveBlendRatio, stealthFlags); }
static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0x0A15E9E221AF6CC4, ped, x, y, z, heading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float targetHeading) { invoke<Void>(0xA966E518B752B92A, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, targetHeading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float slideToCoordHeading, float maxSlopeNavigable, float clampMaxSearchDistance, float targetHeading) { invoke<Void>(0x505D1BE21E9DF7E0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, slideToCoordHeading, maxSlopeNavigable, clampMaxSearchDistance, targetHeading); }
static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0x176A19E4589CC2C6, ped, Toggle); }
static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0xDAB3EED1D80C2712, ped, Toggle); }
static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0x828D385CED572E95, ped, Toggle); }
static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x1DEB47A41CF1C17E, ped, modifier); }
static void SET_PED_PATH_MAY_ENTER_WATER(Ped ped, BOOL mayEnterWater) { invoke<Void>(0x753DE44F9049D173, ped, mayEnterWater); }
static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { invoke<Void>(0xF24ADF73381B85C1, ped, avoidWater); }
static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0x5514EB508DD5A132, ped, avoidFire); }
static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0x78081A114400EA30, height); }
static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distanceRemaining, BOOL* isPathReady) { return invoke<int>(0x32ABB6392C917150, ped, distanceRemaining, isPathReady); }
static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0x604F9A1C471B5137, ped); }
static BOOL IS_CONTROLLED_VEHICLE_UNABLE_TO_GET_TO_ROAD(Ped ped) { return invoke<BOOL>(0x19B15B2D6C049166, ped); }
static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets) { invoke<Void>(0x30FAA55EAF29F9BE, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float warpTimerMS) { invoke<Void>(0xE4250AD3565B478E, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, warpTimerMS); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float cruiseSpeed, float targetArriveDist) { invoke<Void>(0x8B561CAF821BBFCE, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, cruiseSpeed, targetArriveDist); }
static void TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float blendInSpeed, float blendOutSpeed, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0x10425721983AE158, ped, animDictionary, animationName, blendInSpeed, blendOutSpeed, duration, flag, playbackRate, lockX, lockY, lockZ); }
static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float animEnterSpeed, float animExitSpeed, int duration, Any flag, float animTime, int rotOrder, int ikFlags) { invoke<Void>(0x9F5225AA1E102B7A, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, animEnterSpeed, animExitSpeed, duration, flag, animTime, rotOrder, ikFlags); }
static void STOP_ANIM_TASK(Entity entity, const char* animDictionary, const char* animationName, float blendDelta) { invoke<Void>(0x08D8528BA8E43641, entity, animDictionary, animationName, blendDelta); }
static void TASK_SCRIPTED_ANIMATION(Ped ped, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0x70BCE9B2354D8E3D, ped, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); }
static void PLAY_ENTITY_SCRIPTED_ANIM(Entity entity, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0x24E88846ADF60E68, entity, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); }
static void STOP_ANIM_PLAYBACK(Entity entity, int priority, BOOL secondary) { invoke<Void>(0xE1C7B23ECC5080B5, entity, priority, secondary); }
static void SET_ANIM_WEIGHT(Entity entity, float weight, int priority, int index, BOOL secondary) { invoke<Void>(0xD395C44C3F7C3BB4, entity, weight, priority, index, secondary); }
static void SET_ANIM_PHASE(Entity entity, float phase, int priority, BOOL secondary) { invoke<Void>(0x8EF3D1BEA34BCB15, entity, phase, priority, secondary); }
static void SET_ANIM_RATE(Entity entity, float rate, int priority, BOOL secondary) { invoke<Void>(0x5D15315EA989E69A, entity, rate, priority, secondary); }
static void SET_ANIM_LOOPED(Entity entity, BOOL looped, int priority, BOOL secondary) { invoke<Void>(0x5EFA80915529F5C1, entity, looped, priority, secondary); }
static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float blendInDuration, float blendOutDuration, BOOL isLooping, BOOL holdLastFrame) { invoke<Void>(0xF6ED7D9DE21CF122, ped, animDict, animation, boneMaskType, blendInDuration, blendOutDuration, isLooping, holdLastFrame); }
static void TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped, float blendOutOverride) { invoke<Void>(0x0A284376577BBECE, ped, blendOutOverride); }
static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0x5BBE12D14B71C12A, ped); }
static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) { return invoke<float>(0x51495BC78F70B066, ped); }
static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) { return invoke<float>(0x7B426C13A6E40397, ped); }
static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animationSet, const char* animationName) { invoke<Void>(0x3D98759970C5FCC9, vehicle, animationSet, animationName); }
static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, int duration, int flags, int priority) { invoke<Void>(0xE237FA90A8AFEE59, entity, x, y, z, duration, flags, priority); }
static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int flags, int priority) { invoke<Void>(0xE67051907958B5EB, ped, lookAt, duration, flags, priority); }
static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0x84B06A81C98DA4B8, ped); }
static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xB5396F1FB088FE38, taskSequenceId); }
static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { invoke<Void>(0x93C0674FC00824D0, taskSequenceId); }
static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { invoke<Void>(0x4BD42B0527065BB6, ped, taskSequenceId); }
static void TASK_PERFORM_SEQUENCE_LOCALLY(Ped ped, int taskSequenceId) { invoke<Void>(0x9C4B07B40A05D45D, ped, taskSequenceId); }
static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0xD0557B139A542F12, taskSequenceId); }
static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { invoke<Void>(0xC58DD79B4CA8487F, taskSequenceId, repeat); }
static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x89EC60A4485FD199, ped); }
static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0x12623527E5B8AB7C, ped, taskIndex); }
static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash) { return invoke<int>(0x9B5C1660CCDF7189, ped, taskHash); }
static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0x927395DFE42BE071, vehicle); }
static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int delayTime, int flags) { invoke<Void>(0x092B9247AF00F5CF, ped, delayTime, flags); }
static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL disableBlockingClip, BOOL instantBlendToAim) { invoke<Void>(0x67F37AE193B6C0E0, ped, scriptTask, disableBlockingClip, instantBlendToAim); }
static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Ped ped, Ped target, float x, float y, float z, int gunTaskType, BOOL disableBlockingClip, BOOL forceAim) { invoke<Void>(0x948C59076639BD77, ped, target, x, y, z, gunTaskType, disableBlockingClip, forceAim); }
static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped ped, Ped target, float x, float y, float z, BOOL disableBlockingClip) { invoke<Void>(0x287D43AF8CDBA667, ped, target, x, y, z, disableBlockingClip); }
static const char* GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int gunTaskType) { return invoke<const char*>(0x71929CB75E82CF02, gunTaskType); }
static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL instantBlendToAim) { invoke<Void>(0x646DE293036A3499, ped, entity, duration, instantBlendToAim); }
static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0x0E95B96CFEFE7B61, ped, entity, duration); }
static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL instantBlendToAim, BOOL playAnimIntro) { invoke<Void>(0xC86A930D894F8CE2, ped, x, y, z, time, instantBlendToAim, playAnimIntro); }
static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0x6C4E9ADFB1521AAC, ped, x, y, z, duration, firingPattern); }
static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle, BOOL useAlternateShuffle) { invoke<Void>(0x7A55A25242FBE562, ped, vehicle, useAlternateShuffle); }
static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0x974022927CB47E68, ped); }
static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0xBEB96F1A510EE9AA, ped); }
static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0xD5094C4B174E9016, vehicle); }
static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Entity entity, int time, float seekRadius, float seekAngleDeg, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0xF3812FC874B9C273, ped, entity, time, seekRadius, seekAngleDeg, moveBlendRatio, gotoEntityOffsetFlags); }
static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float targetRadius, float offsetX, float offsetY, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0x35CBF41D628A3871, ped, entity, duration, targetRadius, offsetX, offsetY, moveBlendRatio, gotoEntityOffsetFlags); }
static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0xCD76801E1106CABE, ped, x, y, z, duration); }
static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0xFCCE667AD0E974AD, driver, vehicle, action, time); }
static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0xB3DA477F44309390, driver, vehicle, vehicleTarget, missionType, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int missionType, float maxSpeed, int drivingStyle, float minDistance, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0x13DE13EA38996410, ped, vehicle, pedTarget, missionType, maxSpeed, drivingStyle, minDistance, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int mission, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0x30CCF17FEE4BDA53, ped, vehicle, x, y, z, mission, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int minHeightAboveTerrain, float noRoadsDistance) { invoke<Void>(0x6AA87C4ADF4A6BFF, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, minHeightAboveTerrain, noRoadsDistance); }
static void TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, float speed, int drivingStyle, int minDistance) { invoke<Void>(0x1114FB0D0DF739D0, driver, vehicle, targetEntity, speed, drivingStyle, minDistance); }
static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0xBCDC8EFDC767C85B, driver, targetEnt); }
static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int drivingFlags, float radius, int altitude, int heliFlags) { invoke<Void>(0xE4B10D5B4C7A3BEB, pilot, vehicle, entityToFollow, targetSpeed, drivingFlags, radius, altitude, heliFlags); }
static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0x5D374B426098D36A, ped, flag, set); }
static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0x7F9BCC1F05831CC1, ped, distance); }
static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0xBAA88971DB28023A, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x6793968E12D821E5, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0x6F09ACD24CD7E2D1, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); }
static void CLEAR_DEFAULT_PRIMARY_TASK(Ped ped) { invoke<Void>(0xDF671228EB81F6F6, ped); }
static void CLEAR_PRIMARY_VEHICLE_TASK(Vehicle vehicle) { invoke<Void>(0xBCF5323C85E59066, vehicle); }
static void CLEAR_VEHICLE_CRASH_TASK(Vehicle vehicle) { invoke<Void>(0xE61DA9B9D8DB2035, vehicle); }
static void TASK_PLANE_GOTO_PRECISE_VTOL(Ped ped, Vehicle vehicle, float x, float y, float z, int flightHeight, int minHeightAboveTerrain, BOOL useDesiredOrientation, float desiredOrientation, BOOL autopilot) { invoke<Void>(0xF9B70B973193533C, ped, vehicle, x, y, z, flightHeight, minHeightAboveTerrain, useDesiredOrientation, desiredOrientation, autopilot); }
static void TASK_SUBMARINE_GOTO_AND_STOP(Ped ped, Vehicle submarine, float x, float y, float z, BOOL autopilot) { invoke<Void>(0x790442D9A27FBFC1, ped, submarine, x, y, z, autopilot); }
static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float radius, float targetHeading, int maxHeight, int minHeight, float slowDownDistance, int behaviorFlags) { invoke<Void>(0xDAC27BA46D21818F, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, radius, targetHeading, maxHeight, minHeight, slowDownDistance, behaviorFlags); }
static void TASK_HELI_ESCORT_HELI(Ped pilot, Vehicle heli1, Vehicle heli2, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0xDEA77F41BAFD4054, pilot, heli1, heli2, offsetX, offsetY, offsetZ); }
static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float targetReached, float targetHeading, float maxZ, float minZ, BOOL precise) { invoke<Void>(0x8737E7B1F3150A9F, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, targetReached, targetHeading, maxZ, minZ, precise); }
static void TASK_PLANE_TAXI(Ped pilot, Vehicle aircraft, float x, float y, float z, float cruiseSpeed, float targetReached) { invoke<Void>(0xD3EF88657552E38E, pilot, aircraft, x, y, z, cruiseSpeed, targetReached); }
static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle vehicle, Vehicle targetVehicle, Ped targetPed, float x, float y, float z, int mission, float maxSpeed, int drivingStyle, float targetReached, Any boatFlags) { invoke<Void>(0xDD216642D7E1AD6B, pedDriver, vehicle, targetVehicle, targetPed, x, y, z, mission, maxSpeed, drivingStyle, targetReached, boatFlags); }
static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL pushUnderneathDrivingTaskIfDriving, Hash firingPattern) { invoke<Void>(0xD83588CA24829967, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, pushUnderneathDrivingTaskIfDriving, firingPattern); }
static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0xF38F1E299109383A, shootingPed, targetPed, targetVehicle, x, y, z); }
static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0x827783BAD5CBE95D, ped); }
static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x10BAD2FED582B598, ped); }
static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0x54E6D48F5FEEC68E, ped); }
static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z, int taskMode, BOOL ignoreTargetVehDeadCheck) { invoke<Void>(0x26CC8B808F859C87, shootingPed, targetPed, targetVehicle, x, y, z, taskMode, ignoreTargetVehDeadCheck); }
static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x5652C0D8FC728983, ped); }
static void TASK_USE_MOBILE_PHONE(Ped ped, BOOL usePhone, int desiredPhoneMode) { invoke<Void>(0x0974B2530CABDF56, ped, usePhone, desiredPhoneMode); }
static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0xE69B8FE2F4FD0178, ped, duration); }
static void TASK_CHAT_TO_PED(Ped ped, Ped target, int flags, float goToLocationX, float goToLocationY, float goToLocationZ, float headingDegs, float idleTime) { invoke<Void>(0x4663BE37E4E93BC6, ped, target, flags, goToLocationX, goToLocationY, goToLocationZ, headingDegs, idleTime); }
static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0x6CB88242CC3DA778, ped, vehicle, seat); }
static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0xE84EF4129A44CCA3, entity, target, duration, firingPattern); }
static void TASK_CLIMB(Ped ped, BOOL usePlayerLaunchForce) { invoke<Void>(0x345C12E1D643634F, ped, usePlayerLaunchForce); }
static void TASK_CLIMB_LADDER(Ped ped, BOOL fast) { invoke<Void>(0x52210330D36ACD48, ped, fast); }
static void TASK_RAPPEL_DOWN_WALL_USING_CLIPSET_OVERRIDE(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, float minZ, int ropeHandle, const char* clipSet, Any p10) { invoke<Void>(0x82F4A39274853E9D, ped, x1, y1, z1, x2, y2, z2, minZ, ropeHandle, clipSet, p10); }
static int GET_TASK_RAPPEL_DOWN_WALL_STATE(Ped ped) { return invoke<int>(0x29643B8A675F8422, ped); }
static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0x19626F992DC71FB9, ped); }
static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, int taskIndex, int progress1, int progress2) { invoke<Void>(0xDB27D5D6C78A71BD, ped, taskIndex, progress1, progress2); }
static void SET_NEXT_DESIRED_MOVE_STATE(float nextMoveState) { invoke<Void>(0x3CB52882A241CEA1, nextMoveState); }
static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float newMoveBlendRatio) { invoke<Void>(0xA6897CC743103C98, ped, newMoveBlendRatio); }
static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0x864E9BBAA7BFA064, ped); }
static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0xA1EF3D61667DA3F4, ped, target, distanceToStopAt, StartAimingDist); }
static void TASK_SET_DECISION_MAKER(Ped ped, Hash decisionMakerId) { invoke<Void>(0x4A01AD13AAA82768, ped, decisionMakerId); }
static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius) { invoke<Void>(0xD5A6D66C06D8ADB4, ped, x, y, z, radius); }
static void TASK_CLEAR_DEFENSIVE_AREA(Ped ped) { invoke<Void>(0x16C7AB5DAFB71459, ped); }
static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float speed) { invoke<Void>(0x807D24321098A1C7, ped, x, y, z, heading, speed); }
static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float speed, float headingChangeRate) { invoke<Void>(0xDC90C3410FA6A9F1, ped, x, y, z, heading, speed, headingChangeRate); }
static ScrHandle ADD_COVER_POINT(float x, float y, float z, float direction, int usage, int height, int arc, BOOL isPriority) { return invoke<ScrHandle>(0xBE006B266746B58A, x, y, z, direction, usage, height, arc, isPriority); }
static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0x2115305B42B198D2, coverpoint); }
static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0xB4AC30A54094D002, x, y, z); }
static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0x8E8BD1A76D6D9230, coverpoint); }
static void ADD_SCRIPTED_COVER_AREA(float x, float y, float z, float radius) { invoke<Void>(0x4CF9046448DA511B, x, y, z, radius); }
static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int combatFlags, int threatResponseFlags) { invoke<Void>(0x62A5310368A20EFA, ped, targetPed, combatFlags, threatResponseFlags); }
static void TASK_COMBAT_PED_TIMED(Ped ped, Ped target, int time, int flags) { invoke<Void>(0xC22FB64C71A7CD89, ped, target, time, flags); }
static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0xE31B7CB52E42E2B6, ped, x, y, z, duration, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0x3D948B91131AF671, ped, target, duration, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, ScrHandle coverpoint, float x, float y, float z, int time, BOOL allowPeekingAndFiring) { invoke<Void>(0xEC4B308C708928CD, ped, coverpoint, x, y, z, time, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int timeout, BOOL shortRoute) { invoke<Void>(0xF8936AB29F37B33B, ped, x1, y1, z1, x2, y2, z2, timeout, shortRoute); }
static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, int time, BOOL allowPeekingAndFiring, float blendInDuration, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier, BOOL doEntry) { invoke<Void>(0x994B4C04761C0AA0, ped, x, y, z, time, allowPeekingAndFiring, blendInDuration, forceInitialFacingDirection, forceFaceLeft, identifier, doEntry); }
static void TASK_WARP_PED_DIRECTLY_INTO_COVER(Ped ped, int time, BOOL allowPeekingAndFiring, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier) { invoke<Void>(0x0049FC50A5D65452, ped, time, allowPeekingAndFiring, forceInitialFacingDirection, forceFaceLeft, identifier); }
static void TASK_EXIT_COVER(Ped ped, int exitType, float x, float y, float z) { invoke<Void>(0x03BD287EC78FB55F, ped, exitType, x, y, z); }
static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float blendInDuration, float timeInMelee, float strafePhaseSync, int aiCombatFlags) { invoke<Void>(0x849ABF0CBD8EE0D6, ped, meleeTarget, blendInDuration, timeInMelee, strafePhaseSync, aiCombatFlags); }
static void TASK_TOGGLE_DUCK(Ped ped, int toggleType) { invoke<Void>(0x613C57A8216F81FC, ped, toggleType); }
static void TASK_GUARD_CURRENT_POSITION(Ped ped, float maxPatrolProximity, float defensiveAreaRadius, BOOL setDefensiveArea) { invoke<Void>(0xAEFEF83576CF9532, ped, maxPatrolProximity, defensiveAreaRadius, setDefensiveArea); }
static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float heading, float maxPatrolProximity, int timer) { invoke<Void>(0x2CFEEE8E3E154877, ped, x, y, z, heading, maxPatrolProximity, timer); }
static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped ped, float defendPositionX, float defendPositionY, float defendPositionZ, float heading, float maxPatrolProximity, int time, float x, float y, float z, float defensiveAreaRadius) { invoke<Void>(0x9B1FD51B92E0C07E, ped, defendPositionX, defendPositionY, defendPositionZ, heading, maxPatrolProximity, time, x, y, z, defensiveAreaRadius); }
static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) { invoke<Void>(0xDEA4D02E8F52CE87, ped, x, y, z, heading, scenarioName); }
static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0x553B31859911EC59, driver, cruiseSpeed); }
static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped ped, float speed) { invoke<Void>(0x24B82F8CB7F8A3E5, ped, speed); }
static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0x413BDD7A1192FC87, ped, drivingStyle); }
static void ADD_COVER_BLOCKING_AREA(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0xCA32E959324DBA6C, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); }
static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0xB1EEA6106C0A95F5); }
static void REMOVE_COVER_BLOCKING_AREAS_AT_POSITION(float x, float y, float z) { invoke<Void>(0x71CFAA5488AD3649, x, y, z); }
static void REMOVE_SPECIFIC_COVER_BLOCKING_AREAS(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0x1323CB5E215AACEC, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); }
static void TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0x21B9EFA4B4AA3A5B, ped, scenarioName, unkDelay, playEnterAnim); }
static void TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { invoke<Void>(0x634E47EF112F3802, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { invoke<Void>(0xFC8E18D52935E5EB, ped, x, y, z, distance, duration); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0xCDA51E8BE6E5790A, ped, x, y, z, radius, timeToLeave); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped ped, float x, float y, float z, float maxRange, int timeToLeave) { invoke<Void>(0xB50A89E4C8C2A37C, ped, x, y, z, maxRange, timeToLeave); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0x449C7EE823FE407B, ped, x, y, z, radius, timeToLeave); }
static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL mustBeFree) { return invoke<BOOL>(0x81E5E9AE1379B068, x, y, z, radius, mustBeFree); }
static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float x, float y, float z, const char* scenarioName, float radius, BOOL mustBeFree) { return invoke<BOOL>(0x813D79A654EE13DA, x, y, z, scenarioName, radius, mustBeFree); }
static BOOL IS_SCENARIO_OCCUPIED(float x, float y, float z, float maxRange, BOOL onlyUsersActuallyAtScenario) { return invoke<BOOL>(0x9C8348AB222FEBA3, x, y, z, maxRange, onlyUsersActuallyAtScenario); }
static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0x1FF4AE189014B73E, ped); }
static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) { invoke<Void>(0x3BD18E9EF59645CF, ped, animDict, animName); }
static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0xA2FEC91FCC08673E, scenarioGroup); }
static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0x03F4074C23C3682E, scenarioGroup); }
static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL enabled) { invoke<Void>(0x7DA9B8DF3A97D040, scenarioGroup, enabled); }
static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0xDFBE573FB949C828); }
static void SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) { invoke<Void>(0xDD0315A8F8B31039, scenarioGroup); }
static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0x3966463F3674C7D5); }
static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0x6964489BB575FE9D, scenarioType); }
static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { invoke<Void>(0x470041F66BF345BA, scenarioType, toggle); }
static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0xED8A3DF1DC96764E); }
static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0x55057693AB7FCFF9, ped); }
static BOOL IS_PED_PLAYING_BASE_CLIP_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0x79D8334A10A1DB2E, ped); }
static void SET_PED_CAN_PLAY_AMBIENT_IDLES(Ped ped, BOOL blockIdleClips, BOOL removeIdleClipIfPlaying) { invoke<Void>(0x2A89ED7D4265A941, ped, blockIdleClips, removeIdleClipIfPlaying); }
static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, int combatFlags) { invoke<Void>(0x6D81908BD7709ABC, ped, x, y, z, radius, combatFlags); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int combatFlags) { invoke<Void>(0xF6CC23160DD0AAED, ped, radius, combatFlags); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int time, int combatFlags) { invoke<Void>(0x1D006DA9CB2B79B2, ped, radius, time, combatFlags); }
static void TASK_THROW_PROJECTILE(Ped ped, float x, float y, float z, int ignoreCollisionEntityIndex, BOOL createInvincibleProjectile) { invoke<Void>(0x1BFCFCC8F6D798A6, ped, x, y, z, ignoreCollisionEntityIndex, createInvincibleProjectile); }
static void TASK_SWAP_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0x71A3A3C67C692798, ped, drawWeapon); }
static void TASK_RELOAD_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0x550B03C7904C63CD, ped, drawWeapon); }
static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x0B3FC0E7676E79BF, ped); }
static void TASK_WRITHE(Ped ped, Ped target, int minFireLoops, int startState, BOOL forceShootOnGround, int shootFromGroundTimer) { invoke<Void>(0xB8943DE03F115DCF, ped, target, minFireLoops, startState, forceShootOnGround, shootFromGroundTimer); }
static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0xCE6BB45648900227, ped); }
static void OPEN_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0xFA0AB32CDCA06D33, patrolRoute); }
static void CLOSE_PATROL_ROUTE() { invoke<Void>(0xD769493B5A72D117); }
static void ADD_PATROL_ROUTE_NODE(int nodeId, const char* nodeType, float posX, float posY, float posZ, float headingX, float headingY, float headingZ, int duration) { invoke<Void>(0x595076DE836264C0, nodeId, nodeType, posX, posY, posZ, headingX, headingY, headingZ, duration); }
static void ADD_PATROL_ROUTE_LINK(int nodeId1, int nodeId2) { invoke<Void>(0x62DDD8B4533C8E19, nodeId1, nodeId2); }
static void CREATE_PATROL_ROUTE() { invoke<Void>(0xF41DCE3B39E05E82); }
static void DELETE_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0x2225C9F62E93B943, patrolRoute); }
static BOOL GET_PATROL_TASK_INFO(Ped ped, int* timeLeftAtNode, int* nodeId) { return invoke<BOOL>(0x4CC29C988AA182D9, ped, timeLeftAtNode, nodeId); }
static void TASK_PATROL(Ped ped, const char* patrolRouteName, int alertState, BOOL canChatToPeds, BOOL useHeadLookAt) { invoke<Void>(0x0253650DCBDD84B3, ped, patrolRouteName, alertState, canChatToPeds, useHeadLookAt); }
static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0x115CA3B4F950226D, ped); }
static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xAB57201DCBB14A07, ped, x, y, z); }
static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped target) { invoke<Void>(0xF63C3F5B1BFD9CE4, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float fireTolerance) { invoke<Void>(0x0ADB09C3437C4CCD, ped, target, fireTolerance); }
static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0xE021F54CBB4F4FD1, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float fireTolerance) { invoke<Void>(0x777E107FA017C2BE, ped, x, y, z, fireTolerance); }
static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0xE61AF8D27706A774, ped, x, y, z); }
static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0x3114F582B6F4FD2C, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0xB8551FB832F73124, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped ped, float x, float y, float z, Entity aimAtID, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern, int time) { invoke<Void>(0xA68F93198FAC44EC, ped, x, y, z, aimAtID, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern, time); }
static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL useNavMesh, int navFlags, int taskFlags, Hash firingPattern) { invoke<Void>(0x81C4993E5E1CEB9B, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, useNavMesh, navFlags, taskFlags, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Ped ped, Entity entity, float aimX, float aimY, float aimZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0x2868A36BD27FD939, ped, entity, aimX, aimY, aimZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0x2433FB137DF847D2, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); }
static void SET_HIGH_FALL_TASK(Ped ped, int minTime, int maxTime, int entryType) { invoke<Void>(0x8A43FAF3B2368B62, ped, minTime, maxTime, entryType); }
static void REQUEST_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0xD04A772C411165F2, name); }
static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) { return invoke<BOOL>(0xA08EEC7306CF6198, name); }
static void REMOVE_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0x8943BF9E0F15EDA0, name); }
static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) { return invoke<BOOL>(0xD352CFACACA313A1, name, points); }
static BOOL WAYPOINT_RECORDING_GET_COORD(const char* name, int point, Vector3* coord) { return invoke<BOOL>(0x653B8254D6830E88, name, point, coord); }
static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* name, int point) { return invoke<float>(0x2A0C849D5991C7F4, name, point); }
static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0xC283DA397F6D065D, name, x, y, z, point); }
static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped ped, const char* name, int p2, int p3, int p4) { invoke<Void>(0x7FD62C74ABB26599, ped, name, p2, p3, p4); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped ped) { return invoke<BOOL>(0xBD08B11F7404F5CD, ped); }
static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0x9558BBC6B5B65853, ped); }
static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0xD4AB5C0D7A1B6058, p0); }
static BOOL SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float x, float y, float z) { return invoke<BOOL>(0x1549A6163A4CED2D, ped, x, y, z); }
static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* name, int point) { return invoke<float>(0x2157DED369B9B03F, name, point); }
static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0xD6C64BE35FD4ED11, p0); }
static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x27EC70BAD907B76B, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0xFFD8D929BFEA2C66, p0, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0x3A4A0A988D382998, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0xF2BE617CD4ED96CD, p0); }
static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* name, BOOL p1, float p2, float p3) { invoke<Void>(0x94302E8F619FAF3E, name, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped ped, Ped target, BOOL p2) { invoke<Void>(0x5316592ADD122C13, ped, target, p2); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4) { invoke<Void>(0xA9260F368C3AE393, ped, x, y, z, p4); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped ped, Ped ped2, BOOL p2, BOOL p3) { invoke<Void>(0x379242666BA2ED8B, ped, ped2, p2, p3); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4, Hash firingPattern) { invoke<Void>(0x8CE357AE01230A0B, ped, x, y, z, p4, firingPattern); }
static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped ped) { invoke<Void>(0x1B24CB0A1764E540, ped); }
static void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { invoke<Void>(0xF73325FB8144737E, route); }
static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { invoke<Void>(0xA332714024BC3F0C, route); }
static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0x6C9A2A441E73E5E6, route); }
static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { invoke<Void>(0xD60BA488D361DF8C, route, props); }
static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0x118744F545022B3E, dist); }
static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { invoke<Void>(0x43E9B2BD3668B432, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x8DC9348C726B1575, vehicle); }
static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0xD25BEA95F6673491, vehicle); }
static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0x78BCB869DD6BFD3C, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { invoke<Void>(0x1A33666733F63EE2, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle vehicle) { invoke<Void>(0x5FC3A3680DA3531A, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle vehicle) { invoke<Void>(0x6956712D887FB12E, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x2A62B5809D44FA48, vehicle, speed); }
static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x96F4A599D1C6F95A, ped, toggle); }
static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL forceRestart) { invoke<Void>(0x218240D21FF14E21, ped, state, forceRestart); }
static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xBED82BCB158AC570, ped, task, multiplier, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Ped ped, const char* network, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0xE8F1DEE1AE8DBF3E, ped, network, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0x9874D5FB1E8B02CB, ped, network, initialParameters, blendDuration, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* dictionary, int flags) { invoke<Void>(0xF73EE77793731309, ped, network, initialParameters, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, dictionary, flags); }
static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0xB2E8986FED6B1539, ped); }
static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0x998B35A7F4D0F0C7, ped); }
static BOOL REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { return invoke<BOOL>(0x442A7753A4EB7411, ped, name); }
static BOOL SET_EXPECTED_CLONE_NEXT_TASK_MOVE_NETWORK_STATE(Ped ped, const char* state) { return invoke<BOOL>(0xA6C2BBE598A91988, ped, state); }
static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0x9DC8697AB3A155E7, ped); }
static void SET_TASK_MOVE_NETWORK_ANIM_SET(Ped ped, Hash clipSet, Hash variableClipSet) { invoke<Void>(0x92DF696E2104166F, ped, clipSet, variableClipSet); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xDB1DAB5E0E775E2D, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_LOCAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0xE523F21FAB5438DA, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(Ped ped, const char* signalName, float value) { invoke<Void>(0x515111A614F76DC4, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { invoke<Void>(0xBF87221921DE71CA, ped, signalName, value); }
static float GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName) { return invoke<float>(0x6E19562EC08A07C6, ped, signalName); }
static BOOL GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName) { return invoke<BOOL>(0x12C0D6CD0D2EBB6F, ped, signalName); }
static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0xB6CFA448D6BF4690, ped, eventName); }
static BOOL SET_TASK_MOVE_NETWORK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(Ped ped, BOOL enable) { return invoke<BOOL>(0x4A27E73B31F943DC, ped, enable); }
static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0xF35435F8DC034A5C, ped); }
static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0xF6F7567DC74C45CE, ped); }
static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0xC1C69295C2020379, ped); }
static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0x77FC7BDED929C9BD, ped); }
static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x6CDEFB59235A1FD9, ped); }
static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0x0A11073DD28E2CD9, ped); }
static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0x24433628C02BED5F, ped); }
static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x6F21822F60DC0945, ped); }
static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0x3D686813DBBECE04, ped); }
static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float blendIn, float blendOut, int flags, int ragdollBlockingFlags, float moverBlendDelta, int ikFlags) { invoke<Void>(0x3DA436E63AB0F541, ped, scene, animDictionary, animationName, blendIn, blendOut, flags, ragdollBlockingFlags, moverBlendDelta, ikFlags); }
static void TASK_AGITATED_ACTION_CONFRONT_RESPONSE(Ped ped, Ped ped2) { invoke<Void>(0x883E603A316F6D3B, ped, ped2); }
static void TASK_SWEEP_AIM_ENTITY(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, Entity targetEntity, float turnRate, float blendInDuration) { invoke<Void>(0x15F4AEC8F54F37B9, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, targetEntity, turnRate, blendInDuration); }
static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x2F1AD04B7C8A76C3, ped, entity); }
static void TASK_SWEEP_AIM_POSITION(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, float x, float y, float z, float turnRate, float blendInDuration) { invoke<Void>(0xE7D618671D65A1FF, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, x, y, z, turnRate, blendInDuration); }
static void UPDATE_TASK_SWEEP_AIM_POSITION(Ped ped, float x, float y, float z) { invoke<Void>(0xBDCCE8FE97AA3A1C, ped, x, y, z); }
static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0xBF348C17AF180F42, ped, target); }
static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0x0441E4524AA1CF9C, ped); }
static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x7FB6C108C1694163, ped); }
static void UNCUFF_PED(Ped ped) { invoke<Void>(0x5C47299F055D05B5, ped); }
static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0x736821465DA66F80, ped); }
static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7) { return invoke<Vehicle>(0x5779387E956077A6, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, p7); }
static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0x8C1F7D7A31B2A38E, vehicle); }
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle vehicle, BOOL toggle, BOOL p2) { invoke<Void>(0xECB40F3CD8E09468, vehicle, toggle, p2); }
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Vehicle vehicle, BOOL canBeLockedOn, BOOL p2) { invoke<Void>(0xF5706A3E4A060916, vehicle, canBeLockedOn, p2); }
static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0x730536B32F041BA6, veh, toggle); }
static int GET_VEHICLE_HOMING_LOCKON_STATE(Vehicle vehicle) { return invoke<int>(0x3E3B4978082BB93C, vehicle); }
static int GET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0) { return invoke<int>(0x52C90C5E23EB961A, p0); }
static void SET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0, Any p1) { invoke<Void>(0xD501B0D4146A6A30, p0, p1); }
static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0x2E6A27037F1DC473, vehicle, model); }
static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0x9173EE00A72DCA49, vehicleGenerator); }
static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0x7E711C5CE9160738, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0x0D1F59EC6D37A7EE, vehicleGenerator); }
static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, BOOL enabled) { invoke<Void>(0x36B6F306570BAA3F, vehicleGenerator, enabled); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle, BOOL p7) { invoke<Void>(0xA63572E348CC4CFB, x1, y1, z1, x2, y2, z2, toggle, p7); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0x5A65DF56B098A5F1); }
static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0xEFAF1ADDE0F583C3, active); }
static void SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(float x, float y, float z, float radius) { invoke<Void>(0x5519F1C3752E3A90, x, y, z, radius); }
static void CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST() { invoke<Void>(0x6317659BFF055A5F); }
static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, float p1) { return invoke<BOOL>(0x1DE99C193C7EC64B, vehicle, p1); }
static BOOL SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0xD735FEDB86CA06C6, p0, p1, p2, p3); }
static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x413E19AD37DE3A4C, vehicle); }
static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x306C263AAEC4A988, vehicle); }
static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0xD27458C016741B0C, vehicle); }
static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x1CE980E99A2A6FB6, vehicle); }
static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle, BOOL includeDriver, BOOL includeDeadOccupants) { return invoke<int>(0xDE3B10768F6103AD, vehicle, includeDriver, includeDeadOccupants); }
static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x2EEC0612337D20CE, vehicle); }
static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0xDC1AA2FE20EEB2E9, modelHash); }
static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x22007BC82AF0074B, vehicle, seatIndex); }
static BOOL IS_TURRET_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x333A2A6253C809D2, vehicle, seatIndex); }
static BOOL DOES_VEHICLE_ALLOW_RAPPEL(Vehicle vehicle) { return invoke<BOOL>(0xEE6C44D4C8883EC4, vehicle); }
static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xA0265306DFF63938, multiplier); }
static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x23D563236A543309, multiplier); }
static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x40C1C94D5A5157C5, multiplier); }
static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { invoke<Void>(0x3F4A190062FF9E09, toggle); }
static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(float value) { invoke<Void>(0x5D50773C51925144, value); }
static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0x00AB2F24F67F293F, toggle); }
static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0xECDFDC2E8AC2D613, value); }
static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0x0B74F181ADFC39BF, vehicle, doorLockStatus); }
static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle vehicle, int doorId, int doorLockStatus) { invoke<Void>(0x1F4C790D1AC5AFF9, vehicle, doorId, doorLockStatus); }
static void SET_VEHICLE_HAS_MUTED_SIRENS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xBC5009F300C00558, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0x60C8432F4C0BDD68, vehicle, player, toggle); }
static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0x75B56675BF83B3BC, vehicle, player); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x7A673862D5A46F24, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0B1BCFB3741AF8B2, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0xBF60B9A0E651D89B, vehicle, team, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_TEAMS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA7AD7AB3035B02EA, vehicle, toggle); }
static void SET_VEHICLE_DONT_TERMINATE_TASK_WHEN_ACHIEVED(Vehicle vehicle) { invoke<Void>(0x827FC1D24FC3CD95, vehicle); }
static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0xAE89444B15234CCE, vehicle, isAudible, isInvisible); }
static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0xE251D2995353C61E, vehicle, killDriver, explodeOnImpact); }
static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0x9EBBAB4F81D0BDAC, vehicle, ped, toggle); }
static void ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(Vehicle vehicle) { invoke<Void>(0xD213EC7C7B81BCEE, vehicle); }
static void CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0x9E4B8D8CF051F6DC); }
static BOOL HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { return invoke<BOOL>(0xA648CE821FEF3C51); }
static void DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0x235C228FDD040462); }
static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0x0B29D0B41AC20799, vehicle, state); }
static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xB5A36B0C5D6C2884, vehicle); }
static BOOL IS_VEHICLE_IN_GARAGE_AREA(const char* garageName, Vehicle vehicle) { return invoke<BOOL>(0xFE448E8C2209CA31, garageName, vehicle); }
static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0xD133EF7430EDCD09, vehicle, colorPrimary, colorSecondary); }
static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2F12C305B28C6C59, vehicle, toggle); }
static void SET_VEHICLE_IS_RACING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDA87162A83051958, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x84F5FD9CD27457EE, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0xD9B9D4D1CCED7CA6, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x963D9A7202C06F65, vehicle); }
static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0xA9D64A14804D119B, vehicle); }
static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x593A3115B8AE759B, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x04434FA56DED5500, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x588D8FDC61F7CFAD, vehicle); }
static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x2C0B2BB7913E8DBA, vehicle); }
static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { invoke<Void>(0x4DC7FAAC148F9B2F, vehicle, fade); }
static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0xD1DBD3830272ECAA, vehicle); }
static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x8F0EA4C49C452445, vehicle, state); }
static void SET_GOON_BOSS_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2041F0CA908ABAC2, vehicle, toggle); }
static void SET_OPEN_REAR_DOORS_ON_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x367040C40E6A5A3A, vehicle, toggle); }
static void FORCE_SUBMARINE_SURFACE_MODE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCE1294F698971209, vehicle, toggle); }
static void FORCE_SUBMARINE_NEURTAL_BUOYANCY(Any p0, Any p1) { invoke<Void>(0xBADC5521D958DD40, p0, p1); }
static void SET_SUBMARINE_CRUSH_DEPTHS(Vehicle vehicle, BOOL p1, float depth1, float depth2, float depth3) { invoke<Void>(0xA324C32992621FA4, vehicle, p1, depth1, depth2, depth3); }
static BOOL GET_SUBMARINE_IS_UNDER_DESIGN_DEPTH(Vehicle submarine) { return invoke<BOOL>(0x6DBA6A508811E851, submarine); }
static int GET_SUBMARINE_NUMBER_OF_AIR_LEAKS(Vehicle submarine) { return invoke<int>(0x2D7690E0BF110B40, submarine); }
static void SET_BOAT_IGNORE_LAND_PROBES(Any p0, Any p1) { invoke<Void>(0x435687668B2C6D06, p0, p1); }
static void _0x85FC953F6C6CBDE1(Vehicle vehicle, BOOL p1) { invoke<Void>(0x7B92F87655ED3C29, vehicle, p1); }
static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3E29597A27D861B2, vehicle, toggle); }
static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0x138421810ACE4B5D, vehicle); }
static BOOL CAN_ANCHOR_BOAT_HERE_IGNORE_PLAYERS(Vehicle vehicle) { return invoke<BOOL>(0x1E9361E60B23497B, vehicle); }
static void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3CA987D2B3498078, vehicle, toggle); }
static void SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB79D107D2E0D7E43, vehicle, p1); }
static void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle vehicle, float value) { invoke<Void>(0xBA1F8721D3730F2B, vehicle, value); }
static BOOL IS_BOAT_ANCHORED(Vehicle vehicle) { return invoke<BOOL>(0x02B45F7B39143EEA, vehicle); }
static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF1FCF5569978D854, vehicle, toggle); }
static void SET_BOAT_WRECKED(Vehicle vehicle) { invoke<Void>(0xBA929B36B8BB08EB, vehicle); }
static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x4539850624F18A9E, vehicle, toggle); }
static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0xE101D58DA98B6070, vehicle); }
static BOOL IS_VEHICLE_SIREN_AUDIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xE21E573B1795892D, vehicle); }
static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD05AF216D970F274, vehicle, toggle); }
static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { invoke<Void>(0xB7BDF91BE073DCFB, vehicle); }
static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0xFF4B16F297D9CB3E, vehicle, colorPrimary, colorSecondary); }
static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex, BOOL isTaskRunning) { return invoke<BOOL>(0xC39AE5D390581AD5, vehicle, seatIndex, isTaskRunning); }
static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex, BOOL p2) { return invoke<Ped>(0xFD5C5BBD1FE92BB7, vehicle, seatIndex, p2); }
static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x6B854773972E76E4, vehicle, seatIndex); }
static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0x9FFEA38DBCE391EC, vehicle, lightsOn, highbeamsOn); }
static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0x548F6F43A7CB6F45, vehicle, wheelID, completely); }
static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x93C337B66C95C99B, vehicle, speed); }
static void SET_VEHICLE_FORWARD_SPEED_XY(Vehicle vehicle, float speed) { invoke<Void>(0xFF4296DC08BAEC71, vehicle, speed); }
static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL p3) { invoke<Void>(0xE5EE5C9DDF05D925, vehicle, distance, duration, p3); }
static void SET_VEHICLE_STEER_FOR_BUILDINGS(Vehicle vehicle, Any p1) { invoke<Void>(0xE02B4E5EE15725CC, vehicle, p1); }
static void SET_VEHICLE_CAUSES_SWERVING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x52A6C42AB95EADB7, vehicle, toggle); }
static void SET_IGNORE_PLANES_SMALL_PITCH_CHANGE(Any p0, Any p1) { invoke<Void>(0x1A1E025C1EDC00AB, p0, p1); }
static void STOP_BRINGING_VEHICLE_TO_HALT(Vehicle vehicle) { invoke<Void>(0xF5B09CD26D48D446, vehicle); }
static BOOL IS_VEHICLE_BEING_BROUGHT_TO_HALT(Vehicle vehicle) { return invoke<BOOL>(0x0AB6C098FE20C23A, vehicle); }
static void LOWER_FORKLIFT_FORKS(Vehicle forklift) { invoke<Void>(0x306E268B106D3D0D, forklift); }
static void SET_FORKLIFT_FORK_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0x0D0DE7C657057F36, vehicle, height); }
static BOOL IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x1DB196628F3A0BD8, vehicle, entity); }
static BOOL IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle) { return invoke<BOOL>(0x43F2D662C7522C93, vehicle); }
static Vehicle FIND_HANDLER_VEHICLE_CONTAINER_IS_ATTACHED_TO(Entity entity) { return invoke<Vehicle>(0x4218094D251842BD, entity); }
static BOOL IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x6A5E9E4AC5B61452, vehicle, entity); }
static void ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(Vehicle vehicle, Entity entity) { invoke<Void>(0xBD3D97A93EBB67B3, vehicle, entity); }
static void DETACH_CONTAINER_FROM_HANDLER_FRAME(Vehicle vehicle) { invoke<Void>(0x7AA69E5CE0F1C51A, vehicle); }
static void SET_VEHICLE_DISABLE_HEIGHT_MAP_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xC43B78AD4315F7FA, vehicle, p1); }
static void SET_BOAT_DISABLE_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1E11F329546909B8, vehicle, p1); }
static BOOL IS_HELI_LANDING_AREA_BLOCKED(Vehicle vehicle) { return invoke<BOOL>(0xB1A8644CC087A079, vehicle); }
static void SET_SHORT_SLOWDOWN_FOR_LANDING(Vehicle vehicle) { invoke<Void>(0x91CEBBEA3A7FB79A, vehicle); }
static void SET_HELI_TURBULENCE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0x9647565D7FAB305A, vehicle, p1); }
static void SET_CAR_BOOT_OPEN(Vehicle vehicle) { invoke<Void>(0x8E18C9CFBC30C9FF, vehicle); }
static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0xE488FDAA43A181AE, vehicle, index, onRim, p3); }
static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0xC3680B85B2D7086A, vehicle, closeInstantly); }
static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x439C904840715871, vehicle, toggle); }
static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0xE6BE8A525BA6BD44, vehicle); }
static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x72241E9BCAEB0F8B, vehicle, enabled); }
static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly) { invoke<Void>(0xBFE60A5CC0C835D8, vehicle, doorId, loose, openInstantly); }
static void SET_VEHICLE_DOOR_AUTO_LOCK(Vehicle vehicle, int doorId, BOOL toggle) { invoke<Void>(0xBC123B7E0667E87D, vehicle, doorId, toggle); }
static void SET_FLEEING_VEHICLES_USE_SWITCHED_OFF_NODES(Any p0) { invoke<Void>(0xEB13A0B02F8676C8, p0); }
static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x8E470D78FC866126, vehicle, windowIndex); }
static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0xD3694FA8930DED3C, vehicle); }
static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x260EEEEBF5F35F72, vehicle, windowIndex); }
static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x9303D5873A8A413A, vehicle, windowIndex); }
static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x62DFD44586348C12, vehicle, windowIndex); }
static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x3BFC7329EC766FED, vehicle, windowIndex); }
static void POP_OUT_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0x4CF78EBCA2CD7E9E, vehicle); }
static void POP_OFF_VEHICLE_ROOF_WITH_IMPULSE(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x362D577C98803D6D, vehicle, x, y, z); }
static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0xBA3C1A9AA7FD9616, vehicle, state); }
static void SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xAAF00640D5573DA0, vehicle, toggle); }
static void SET_VEHICLE_HEADLIGHT_SHADOWS(Vehicle vehicle, int p1) { invoke<Void>(0xAA2BF5C4E3F250C0, vehicle, p1); }
static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0xD45558BDBDE86734, vehicle, state); }
static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0x495F6DB2481DBAEE, vehicle); }
static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0xF1298707777A950B, vehicle); }
static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEC6A9F16D3F15978, vehicle, toggle); }
static void SET_VEHICLE_FORCE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA5498338B4203373, vehicle, toggle); }
static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x3B69BFF3173EC703, vehicle, multiplier); }
static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0xF89624E52FCBE454, vehicle, trailer, radius); }
static void ATTACH_VEHICLE_ON_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float offsetX, float offsetY, float offsetZ, float coordsX, float coordsY, float coordsZ, float rotationX, float rotationY, float rotationZ, float disableCollisions) { invoke<Void>(0x9E132DB7E05C6EAB, vehicle, trailer, offsetX, offsetY, offsetZ, coordsX, coordsY, coordsZ, rotationX, rotationY, rotationZ, disableCollisions); }
static void STABILISE_ENTITY_ATTACHED_TO_HELI(Vehicle vehicle, Entity entity, float p2) { invoke<Void>(0x8FB959083319E145, vehicle, entity, p2); }
static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0x157D966854AABDA6, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0xA6D8AF5A058A75F0, vehicle); }
static void SET_TRAILER_INVERSE_MASS_SCALE(Vehicle vehicle, float p1) { invoke<Void>(0x82A7EF211E6B06C9, vehicle, p1); }
static void SET_TRAILER_LEGS_RAISED(Vehicle vehicle) { invoke<Void>(0x632030977D1CE430, vehicle); }
static void SET_TRAILER_LEGS_LOWERED(Vehicle vehicle) { invoke<Void>(0xBAF583E9A667F5FB, vehicle); }
static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0xF516E954BCB89C18, vehicle, tyreIndex); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { invoke<Void>(0x3FEAE59CDE6D3946, vehicle, plateText); }
static const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0xCA7159F2C5FF745A, vehicle); }
static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0x20DE4C1439E0FC92); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0x05D3F682DDA06C20, vehicle, plateIndex); }
static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0x4F06416A18248EA0, vehicle); }
static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0xAE03F542B985A69E, toggle); }
static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction, Any p5, Any p6) { return invoke<Vehicle>(0x767956351E028F74, variation, x, y, z, direction, p5, p6); }
static void SWITCH_TRAIN_TRACK(int trackId, BOOL state) { invoke<Void>(0x43C8A7F0D458B663, trackId, state); }
static void SET_TRAIN_TRACK_SPAWN_FREQUENCY(int trackIndex, int frequency) { invoke<Void>(0xB24E78BD1D1F9F3F, trackIndex, frequency); }
static void ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(Any p0) { invoke<Void>(0x1A6B031C358F6071, p0); }
static void DELETE_ALL_TRAINS() { invoke<Void>(0x47931C69C0D75B43); }
static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0x492EE2B9C9BD33C6, train, speed); }
static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0xCD56231706809D19, train, speed); }
static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0xBB7BF0D30DB04384, toggle); }
static void SET_RANDOM_BOATS_MP(BOOL toggle) { invoke<Void>(0xDB7CCABFFA928C83, toggle); }
static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0x474491073FE815A8, toggle); }
static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0x67AC1AE8A2697D67, vehicle); }
static int GET_VEHICLE_RECORDING_ID(int recording, const char* script) { return invoke<int>(0x95610E68DFCFC225, recording, script); }
static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0xD772E6694B8472A6, recording, script); }
static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0x266D9DB5FCE4003B, recording, script); }
static void REMOVE_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0x7821F942CAEEBEE1, recording, script); }
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0x763EEC52E292B5A0, id, time); }
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0x2A03585144C38A2A, recording, time, script); }
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0x32D675332B7BEAC5, id, time); }
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0x083DB438E821B084, recording, time, script); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int id) { return invoke<float>(0x1F921E74406AE806, id); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int recording, const char* script) { return invoke<float>(0xE2E30D829A6B8F9E, recording, script); }
static float GET_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x942B90900E176BD7, vehicle); }
static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x157F3D5A4AAB2C50, vehicle); }
static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { invoke<Void>(0x88556DA0593A0748, vehicle, recording, script, p3); }
static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, int recording, const char* script, int flags, int time, int drivingStyle) { invoke<Void>(0x9CCFFF877AB82ACA, vehicle, recording, script, flags, time, drivingStyle); }
static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x44A13535A15C20E0, vehicle, p1); }
static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x1D2DAF2A41FFC4A0, vehicle); }
static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x36D3AD4491CD32BA, vehicle); }
static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x937DE6A451B47D92, vehicle); }
static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x050D073F91C5243C, vehicle); }
static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0xD99C77F6466B9C48, vehicle); }
static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(Vehicle vehicle) { return invoke<int>(0x0008A5B9B95FED93, vehicle); }
static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x948DDF2EBE37571B, vehicle); }
static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x206AB1458FD9522F, vehicle, speed); }
static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Vehicle vehicle, int recording, const char* script, float speed, int drivingStyle) { invoke<Void>(0x3EF00C934572535B, vehicle, recording, script, speed, drivingStyle); }
static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { invoke<Void>(0x8BCD7C11D27FB9A1, vehicle, time); }
static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int drivingStyle) { invoke<Void>(0x0642B7FD807FF696, vehicle, drivingStyle); }
static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Vehicle vehicle, int time, int drivingStyle, BOOL p3) { invoke<Void>(0xD9CBCF1C9EAC9D15, vehicle, time, drivingStyle, p3); }
static void SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0x3245F0B28999D460, vehicle, x, y, z, p4); }
static void SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x6E859E04BDE20D6E, vehicle, x, y, z); }
static void SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x55498986DC9E53BB, vehicle, x, y, z); }
static void SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(Vehicle vehicle, BOOL p1) { invoke<Void>(0x5D18C448B64290DB, vehicle, p1); }
static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1D937F8481AB64F0, vehicle, p1); }
static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0x177C21F54C9A6E9E, p0, p1, p2, p3, p4, p5, p6); }
static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0xCCA6D8A84EE8C88A, model, suppressed); }
static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x66D94742BB3D032F, x, y, z, radius, modelHash, flags); }
static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0xCE29C0EA93335BD3, p0, p1, p2, p3, p4, p5, p6); }
static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x1C4D3AE530899DF2, p0, p1, p2, p3, p4, p5, p6); }
static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0xF0CA45A211FFDCD9, x, y, z, radius, modelHash, flags); }
static Vehicle GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Vehicle>(0xB5C59FDCC14C2F22, train, trailerNumber); }
static BOOL IS_MISSION_TRAIN(Vehicle train) { return invoke<BOOL>(0xF2A5706EAF041CB1, train); }
static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x903908AA21114D72, train); }
static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0xC4929897EF5CADC2, train, p1); }
static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0x0FCE057EE79E33FA, train, x, y, z); }
static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0xEA4F815FDC353FEF, model); }
static BOOL IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0xA71279EFEE0ACEB2, model); }
static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0x00C6FDED3EB75117, model); }
static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0xBA16CD57E37AC32A, model); }
static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0xD3CE8D1E6564B011, model); }
static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0xAE447CBB33B40CA3, model); }
static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0x78B050AFBA6D1517, model); }
static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0x3801E353091A2E42, model); }
static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0x9910CD0D8626AA28, model); }
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(Hash model) { return invoke<BOOL>(0xD9BDDEAC04BC910C, model); }
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(Hash model) { return invoke<BOOL>(0x0C43345D94C3E22E, model); }
static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0xA9F7300B498DDED7, vehicle); }
static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0xA83EE494110BC566, vehicle, speed); }
static void FORCE_SUB_THROTTLE_FOR_TIME(Vehicle vehicle, float p1, float p2) { invoke<Void>(0x241E64B7BFB90488, vehicle, p1, p2); }
static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xCF9C21E54DB720B8, vehicle, state); }
static void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle vehicle, BOOL p1) { invoke<Void>(0x89E19F9D79DDCA80, vehicle, p1); }
static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0x6BFFBDE3C98A828E, vehicle, state); }
static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x680C862D9FC0F4BC, vehicle, toggle); }
static void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB2CA6639924FA111, vehicle, p1); }
static void SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(Any p0, Any p1) { invoke<Void>(0xEFEFBD4EA86918AE, p0, p1); }
static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0xF04E476AE02C4646, vehicle); }
static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0x9452FE4900245259, vehicle, dirtLevel); }
static BOOL GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(Vehicle vehicle) { return invoke<BOOL>(0xB69AE16F62A14003, vehicle); }
static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0x6B0915C0DDD2954F, vehicle, doorId); }
static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL disableAutoStart) { invoke<Void>(0xC229299217554C78, vehicle, value, instantly, disableAutoStart); }
static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xBE144113897EE678, vehicle, toggle); }
static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0248EA593ACD1C87, vehicle, toggle); }
static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorId, int speed, float angle) { invoke<Void>(0x3E13A302AA0F06BF, vehicle, doorId, speed, angle); }
static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xC1FE4FCB32785633, vehicle, doorId, p2, p3, p4); }
static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int doorId) { return invoke<float>(0x7BFB76C576628F3D, vehicle, doorId); }
static Ped GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doord) { return invoke<Ped>(0x11AEF334072BBF99, vehicle, doord); }
static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorId, BOOL closeInstantly) { invoke<Void>(0x6515021478088FBC, vehicle, doorId, closeInstantly); }
static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId, BOOL deleteDoor) { invoke<Void>(0x89E9F387C190061F, vehicle, doorId, deleteDoor); }
static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD2F21CFC29C914AE, vehicle, toggle); }
static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x9DB4F102351D5D9E, vehicle); }
static void SET_VEHICLE_REMOVE_AGGRESSIVE_CARJACK_MISSION(Any p0) { invoke<Void>(0x4EB5C166706C0781, p0); }
static void SET_VEHICLE_AVOID_PLAYER_VEHICLE_RIOT_VAN_MISSION(Any p0) { invoke<Void>(0x49A1FC25BB73AC77, p0); }
static void SET_CARJACK_MISSION_REMOVAL_PARAMETERS(Any p0, Any p1) { invoke<Void>(0x424A62A3138EF2F6, p0, p1); }
static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x9E20DC08879FF3FC, vehicle); }
static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0x6645B56AACA6C57C, vehicle); }
static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { invoke<Void>(0x20DD46D27530FAC7, vehicle, colorCombination); }
static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x0507EE8EDD1D75E9, vehicle); }
static void SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle, int colorIndex) { invoke<Void>(0x89D1FDCA3735A1E0, vehicle, colorIndex); }
static int GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle) { return invoke<int>(0xD6BA8C57BDF9DEB9, vehicle); }
static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF04751F8E604D487, vehicle, toggle); }
static void SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x40891A689350468D, vehicle, toggle); }
static void SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Vehicle vehicle, BOOL p1) { invoke<Void>(0xA29F097488D811A6, vehicle, p1); }
static void SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Vehicle vehicle, BOOL p1) { invoke<Void>(0xE296500BDAD8807A, vehicle, p1); }
static void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle vehicle, BOOL p1) { invoke<Void>(0x9D756F14B232B644, vehicle, p1); }
static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* successIndicator) { invoke<Void>(0xA50C5A6FC93D3B49, p0, modelHash, successIndicator); }
static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x38A100E16C95161B, vehicle); }
static int GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(Vehicle vehicle, int doorId) { return invoke<int>(0x405766A9221AFD99, vehicle, doorId); }
static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0xAD830DCD82C63F31, veh, doorID); }
static void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle vehicle, int doorId, BOOL isBreakable) { invoke<Void>(0xBDE75E2FCBF91A6C, vehicle, doorId, isBreakable); }
static BOOL IS_VEHICLE_BUMPER_BOUNCING(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0x8545B773982EAE2B, vehicle, frontBumper); }
static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0x2495CCF0BF303C19, vehicle, frontBumper); }
static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0x00CC36CA06DD06AD, x1, x2, y1, y2, z1, z2); }
static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xD2A0543EC400E1A5, vehicle); }
static int GET_VEHICLE_MODEL_VALUE(Hash vehicleModel) { return invoke<int>(0x6C6E46A097D62A34, vehicleModel); }
static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0x58428BC502F48C75, vehicle); }
static Hash GET_IN_VEHICLE_CLIPSET_HASH_FOR_SEAT(Vehicle vehicle, int p1) { return invoke<Hash>(0xD9DD012396E375D8, vehicle, p1); }
static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0xF66F8D9F1877E201, train, toggle); }
static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0xBB361D7264AC4FD8, vehicle, pearlescentColor, wheelColor); }
static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0x741D9B0685E67684, vehicle, pearlescentColor, wheelColor); }
static void SET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int color) { invoke<Void>(0xC0C8E6AAA00F1A58, vehicle, color); }
static void GET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int* color) { invoke<Void>(0xE10BD9712D7B0CBF, vehicle, color); }
static void SET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int color) { invoke<Void>(0x77B012A683295B6E, vehicle, color); }
static void GET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int* color) { invoke<Void>(0x4C5611B5008205EB, vehicle, color); }
static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0x7C450B28DDDE0513); }
static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0xF698038C13845696, vehicle); }
static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0x1D1124C855316790, vehicle); }
static void SET_VEHICLE_CAN_ENGINE_MISSFIRE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x76A218B79DCF8962, vehicle, toggle); }
static void SET_VEHICLE_CAN_LEAK_OIL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x03DACC5F7E5335AC, vehicle, toggle); }
static void SET_VEHICLE_CAN_LEAK_PETROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x515A606E0E38355D, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA6175150F92EE83B, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8DB4917AFAD347BC, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x64134834C866AE60, vehicle, toggle); }
static void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3F413690B5A371F4, vehicle, toggle); }
static void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCA609B4171C43CE1, vehicle, toggle); }
static void SET_DISABLE_PRETEND_OCCUPANTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA80E7D11DB73C8BA, vehicle, toggle); }
static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xC4BCE90F7242F354, x1, y1, z1, x2, y2, z2, p6); }
static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0xDEABDA7736297FEB, vehicle, value); }
static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x5318DF85BEB6B95F, vehicle, extraId); }
static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0xD772F6AA66750D2B, vehicle, extraId, disable); }
static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x579FA5568DE0C2A0, vehicle, extraId); }
static BOOL IS_EXTRA_BROKEN_OFF(Vehicle vehicle, int extraId) { return invoke<BOOL>(0xFCFC8401A76A332D, vehicle, extraId); }
static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0xAB2F41AC28DDBAAE, vehicle, p1); }
static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0x232B023FE4D977E2, vehicle, instantlyLower); }
static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0xD6B15DF382A594C7, vehicle, instantlyRaise); }
static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0x54DA32C15F7A6ABA, vehicle); }
static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x7943BD10E2A03FAC, vehicle, p1); }
static BOOL TRANSFORM_TO_SUBMARINE(Vehicle vehicle, BOOL noAnimation) { return invoke<BOOL>(0x1F75BC85F714AC5A, vehicle, noAnimation); }
static void TRANSFORM_TO_CAR(Vehicle vehicle, BOOL noAnimation) { invoke<Void>(0x2915C7D9A225A148, vehicle, noAnimation); }
static BOOL IS_VEHICLE_IN_SUBMARINE_MODE(Vehicle vehicle) { return invoke<BOOL>(0x17556069075B5519, vehicle); }
static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0xC182FBFDE4682BA3, vehicle); }
static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL focusOnModel) { invoke<Void>(0x2BDD547718FF1F1A, vehicle, xOffset, yOffset, zOffset, damage, radius, focusOnModel); }
static void SET_VEHICLE_OCCUPANTS_TAKE_EXPLOSIVE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x00F38E42DE1E8071, vehicle, toggle); }
static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x4C7724D572378B05, vehicle); }
static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x2AEBE39F6BF7D6BC, vehicle, health); }
static void SET_PLANE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x31D57F4EF7BE9F0B, vehicle, health); }
static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x31B58D7972181BFA, vehicle); }
static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xDF9DC0584881B7AF, vehicle, health); }
static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int ms) { return invoke<BOOL>(0xA24B9FF9863A909D, vehicle, p1, ms); }
static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0x3CA4868519920C8D, vehicle, nullAttributes); }
static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0xD9F5E1FEFD1329E4, vehicle, isOnFireCheck); }
static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0x983B8E72C35B01F2, vehicle, owned); }
static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2165BE2A3E719A31, vehicle, toggle); }
static void SET_VEHICLE_BLIP_THROTTLE_RANDOMLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x4058D9ECF3B8E2FC, vehicle, p1); }
static void SET_POLICE_FOCUS_WILL_TRACK_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x869AEF17062BE178, vehicle, toggle); }
static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0xAA8884A4BB5B0167, vehicle, duration, mode, forever); }
static void SET_VEHICLE_IN_CAR_MOD_SHOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x20DA3970E29472BE, vehicle, toggle); }
static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5FE0938FDE9B0958, vehicle, toggle); }
static const char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0x93E7527CFECC7CD8, modelHash); }
static const char* GET_MAKE_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0xF7AF4F159FF99F97, modelHash); }
static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x05A904F31991BA49, vehicle, offsetX, offsetY, offsetZ); }
static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0xA1C03303EC67320B, vehicle, livery); }
static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0xA089B04A208DBD0B, vehicle); }
static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0xBA3ECE95D3094B0F, vehicle); }
static void SET_VEHICLE_LIVERY2(Vehicle vehicle, int livery) { invoke<Void>(0x5081B6C697A334D4, vehicle, livery); }
static int GET_VEHICLE_LIVERY2(Vehicle vehicle) { return invoke<int>(0xE423A13CB489E307, vehicle); }
static int GET_VEHICLE_LIVERY2_COUNT(Vehicle vehicle) { return invoke<int>(0xCB19A1CF94809167, vehicle); }
static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x01D37530E5C420F5, vehicle, windowIndex); }
static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0xFC954C8C860FAB80, vehicle); }
static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0x09C0E5FA1EBC1D84, vehicle); }
static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD0BABF27A11D215A, vehicle, toggle); }
static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0x151B89DBEF140C19, vehicle, p1, p2, p3); }
static float GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x22E252733390A9A9, vehicle); }
static float GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x1F46B2A1DBF8BD25, vehicle); }
static float GET_HELI_TAIL_BOOM_HEALTH(Vehicle vehicle) { return invoke<float>(0x4177E9034F7CFE38, vehicle); }
static void SET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x05EE5180C78E4990, vehicle, health); }
static void SET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0xE0002557891C8D8C, vehicle, health); }
static BOOL SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(Vehicle vehicle, BOOL toggle) { return invoke<BOOL>(0xF8190C7705154D4D, vehicle, toggle); }
static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, const char* name) { invoke<Void>(0xD1ED03B26BD64F6C, vehicle, name); }
static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xB57A96BF24464D21, vehicle, toggle); }
static void SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA964B154E331B3E9, vehicle, toggle); }
static void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xB7A736A17908838D, vehicle, toggle); }
static void SET_VEHICLE_DISABLE_TOWING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3B1F6012B676860B, vehicle, toggle); }
static BOOL GET_VEHICLE_HAS_LANDING_GEAR(Vehicle vehicle) { return invoke<BOOL>(0x8EC15ED9ECD1E9D0, vehicle); }
static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0xC2A036647DD761E4, vehicle, state); }
static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0x68F7F7C5DF6717F8, vehicle); }
static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x913602ADD2D86A7A, x, y, z, radius); }
static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x53152C1272227778, vehicle); }
static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x25F4808C787100D3, vehicle); }
static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0xB3F63B683EB1995A, vehicle); }
static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0x7991957B46F22F47, vehicleHash, vehicleAsset); }
static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x16CFE70936BA84C7, vehicleAsset); }
static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0xCE41CD0179F8640B, vehicleAsset); }
static void SET_VEHICLE_TOW_TRUCK_ARM_POSITION(Vehicle vehicle, float position) { invoke<Void>(0xF20C964ED62BD3A7, vehicle, position); }
static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0xA86C8A254D6B6F40, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); }
static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0xD4BC322888F79B7E, towTruck, vehicle); }
static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0x1750AA417BEDD270, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x4A64AADF9B40D2AF, towTruck, vehicle); }
static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0x314C37CF34534BCB, towTruck); }
static Entity SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Entity>(0xDD38B2935A3EAC56, vehicle, p1, p2); }
static void SET_VEHICLE_BULLDOZER_ARM_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0x741EDDC25DCDC64D, vehicle, position, p2); }
static void SET_VEHICLE_TANK_TURRET_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0x8C3B2540B29146AA, vehicle, position, p2); }
static void SET_VEHICLE_TURRET_TARGET(Vehicle vehicle, BOOL p1, float x, float y, float z, BOOL p5) { invoke<Void>(0xAD263B112A654D47, vehicle, p1, x, y, z, p5); }
static void SET_VEHICLE_TANK_STATIONARY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x9636B030D6DE5C35, vehicle, p1); }
static void SET_VEHICLE_TURRET_SPEED_THIS_FRAME(Vehicle vehicle, float speed) { invoke<Void>(0x17AB03DCC210B35D, vehicle, speed); }
static void DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0x9A81B26B3D3B37C7, vehicle); }
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle vehicle, float angleRatio) { invoke<Void>(0x2808DFFEC5749CCF, vehicle, angleRatio); }
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(Vehicle vehicle, float angle) { invoke<Void>(0x33D71CD5D987771E, vehicle, angle); }
static float GET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle plane) { return invoke<float>(0xCEE6D67EEF78C2D7, plane); }
static void SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF9FC9D29B8DD92DF, vehicle, toggle); }
static BOOL GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0x8D6ED2284F9E6186, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); }
static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDD76094F9005AA09, vehicle, toggle); }
static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x379AF4B11FE63CAF, vehicle); }
static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF8EC8E90E8D24CA7, vehicle, toggle); }
static void SET_VEHICLE_REDUCE_GRIP_LEVEL(Vehicle vehicle, int val) { invoke<Void>(0xFCF78891ECB409E9, vehicle, val); }
static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0x78004905636369DF, vehicle, turnSignal, toggle); }
static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE456FB21FF21AE99, vehicle, toggle); }
static void SET_VEHICLE_TAIL_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x76FD0E61CB6D5162, vehicle, toggle); }
static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xB2FD24D644A68449, vehicle, toggle); }
static void SET_VEHICLE_BRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9F571FBA7F9412D5, vehicle, toggle); }
static void INSTANTLY_FILL_VEHICLE_POPULATION() { invoke<Void>(0x6874AA782954505E); }
static BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke<BOOL>(0xEA02634993F717CE); }
static void NETWORK_ENABLE_EMPTY_CROWDING_VEHICLES_REMOVAL(BOOL toggle) { invoke<Void>(0x71052C5B6562E5BD, toggle); }
static void NETWORK_CAP_EMPTY_CROWDING_VEHICLES_REMOVAL(int p0) { invoke<Void>(0xA4109B4CEC071346, p0); }
static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0x20974C28142EB370, vehicle, trailer); }
static Vehicle _GET_VEHICLE_TRAILER_PARENT_VEHICLE(Vehicle trailer) { return invoke<Vehicle>(0x5FC7CC4DB8966A85, trailer); }
static void SET_VEHICLE_USES_LARGE_REAR_RAMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF651C20D31115698, vehicle, toggle); }
static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8A86075A9E1BF05A, vehicle, toggle); }
static void SET_CONVERTIBLE_ROOF_LATCH_STATE(Vehicle vehicle, BOOL state) { invoke<Void>(0xC48C7879875CFB60, vehicle, state); }
static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0x66C1D6E6DBF7AC9B, vehicle); }
static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0xCDAF96205BABA4DC, vehicle); }
static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0x122F64C5BECB5454, vehicle); }
static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0x7FAB20829167D06E, vehicle); }
static float GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Hash modelHash) { return invoke<float>(0xCF85F9C6CDF5D68E, modelHash); }
static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0xB617B59F8F888D2A, modelHash); }
static float GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(Hash modelHash) { return invoke<float>(0xB245818227933E3A, modelHash); }
static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0x859EED8E8B695F08, modelHash); }
static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0x1C6BE134527C543C, modelHash); }
static float GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(Hash modelHash) { return invoke<float>(0xD92F8845433585F0, modelHash); }
static float GET_FLYING_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0x4978F96428784EA4, modelHash); }
static float GET_BOAT_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0x25C4079E4C1D71E8, modelHash); }
static float GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(int vehicleClass) { return invoke<float>(0xF5997120A0F53CD2, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0x2525977066141996, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0x3EFC9FBA218CD076, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0x47F48D6E64EE2C11, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0x16C1ECD6E377277D, vehicleClass); }
static int ADD_ROAD_NODE_SPEED_ZONE(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0x44589DAC2564FF02, x, y, z, radius, speed, p5); }
static BOOL REMOVE_ROAD_NODE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0x1B3217FCFCCC3FCF, speedzone); }
static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0xE2F63CAB8DDA4016, vehicle); }
static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0x248319A8E9EA4DA3, vehicle); }
static BOOL GET_ARE_BOMB_BAY_DOORS_OPEN(Vehicle aircraft) { return invoke<BOOL>(0x94F61A08FC26ECDF, aircraft); }
static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0xC536067E456DED6C, vehicle); }
static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0x130DC0384195C42E, heli, toggle, canBeUsedByAI); }
static BOOL DOES_VEHICLE_HAVE_SEARCHLIGHT(Vehicle vehicle) { return invoke<BOOL>(0x8B8BD77BD5CC1D17, vehicle); }
static BOOL IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter) { return invoke<BOOL>(0x848DE0A81098ECCB, ped, vehicle, seatIndex, side, onEnter); }
static Vector3 GET_ENTRY_POINT_POSITION(Vehicle vehicle, int doorId) { return invoke<Vector3>(0x7902AD09BBD23276, vehicle, doorId); }
static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x2955FC7A22330E7F, vehicle, seatIndex); }
static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0x90E3EAFF8AAA1A42, vehicle); }
static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0xB5AD06DDA85E2E8F, vehicle, modKit); }
static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0xA9DFDFED12311CA7, vehicle); }
static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0xB79F51ED32ADD424, vehicle); }
static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0x6A375D21624F9187, vehicle); }
static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0xE33678A9AE50A01B, vehicle, WheelType); }
static int GET_NUM_MOD_COLORS(int paintType, BOOL p1) { return invoke<int>(0x2A2B5BAE280E2FFA, paintType, p1); }
static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int pearlescentColor) { invoke<Void>(0xA5277ECCD081FCC1, vehicle, paintType, color, pearlescentColor); }
static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0x941B1F179D6AE19A, vehicle, paintType, color); }
static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* pearlescentColor) { invoke<Void>(0xB8090FC59766A88C, vehicle, paintType, color, pearlescentColor); }
static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0x07AE5F5D5A7D0936, vehicle, paintType, color); }
static const char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<const char*>(0x74CB4C4C883007E5, vehicle, p1); }
static const char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<const char*>(0x598200EB0DCC8A9D, vehicle); }
static BOOL HAVE_VEHICLE_MODS_STREAMED_IN(Vehicle vehicle) { return invoke<BOOL>(0xA7A8B7E924089F0A, vehicle); }
static BOOL IS_VEHICLE_MOD_GEN9_EXCLUSIVE(Vehicle vehicle, int modType, int modIndex) { return invoke<BOOL>(0xAF82FE1B3E949337, vehicle, modType, modIndex); }
static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0x8450270DC5896D39, vehicle, modType, modIndex, customTires); }
static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0x94C9CD3D66808551, vehicle, modType); }
static int GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<int>(0xEFDD8C5443F6C9E4, vehicle, modType); }
static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0x5B59C12A02157D00, vehicle, modType); }
static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0xC87E4FAD00AEDD4B, vehicle, modType); }
static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0xF5501FF9869DAC7C, vehicle, modType, toggle); }
static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x1D5A665629D417A7, vehicle, modType); }
static const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<const char*>(0x1340575A0EEE0622, vehicle, modType, modValue); }
static const char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<const char*>(0x04A81F937A270775, vehicle, modType); }
static const char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<const char*>(0x48C57B247498FD02, vehicle, liveryIndex); }
static int GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<int>(0x648F2586F927249D, vehicle, modType, modIndex); }
static Hash GET_VEHICLE_MOD_IDENTIFIER_HASH(Vehicle vehicle, int modType, int modIndex) { return invoke<Hash>(0xC90C649EB3EB4B1B, vehicle, modType, modIndex); }
static void PRELOAD_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex) { invoke<Void>(0x714EDA9C467D9D0A, vehicle, modType, modIndex); }
static BOOL HAS_PRELOAD_MODS_FINISHED(Vehicle vehicle) { return invoke<BOOL>(0x3AACF4E05C1E40E0, vehicle); }
static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { invoke<Void>(0xFB54FC989415871E, vehicle); }
static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x5DA0536AEAD1FF31, vehicle, r, g, b); }
static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x9D35AABAEE206518, vehicle, r, g, b); }
static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0xFE620ED8E0A3C209, vehicle, tint); }
static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0xDA63CE76F9AAB439, vehicle); }
static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0xAC574D1AAC70DD29); }
static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x8D3F11438EEDD7D2, vehicle, r, g, b); }
static int GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(Vehicle vehicle) { return invoke<int>(0xEEBEB450F9417D7F, vehicle); }
static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0xC713B16D0F5FBF9D, vehicle); }
static void OVERRIDE_PLANE_DAMAGE_THREHSOLD(Vehicle vehicle, float health) { invoke<Void>(0x9DBF1E37DC1A1F46, vehicle, health); }
static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xB4A09397270CB974, vehicle); }
static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x08046513BC06BFBC, vehicle); }
static BOOL GET_BOTH_VEHICLE_HEADLIGHTS_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xADBCF06C9348EEF5, vehicle); }
static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { invoke<Void>(0xAC89BB42FE09CC80, vehicle, value); }
static void SET_VEHICLE_MAX_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x8E9B5F00B41A9F8C, vehicle, speed); }
static void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x336AED9579B3D098, vehicle, toggle); }
static void SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Vehicle vehicle, BOOL p1) { invoke<Void>(0x30415B9FFAC70D2C, vehicle, p1); }
static void SET_PEDS_CAN_FALL_OFF_THIS_VEHICLE_FROM_LARGE_FALL_DAMAGE(Vehicle vehicle, BOOL toggle, float p2) { invoke<Void>(0x61D3E6830FEE218E, vehicle, toggle, p2); }
static int ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0x6C3C28979C693FF6, p0, p1, p2, p3, p4, p5, p6); }
static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(int p0) { invoke<Void>(0x2C2F55254DC331B0, p0); }
static BOOL IS_ANY_PED_RAPPELLING_FROM_HELI(Vehicle vehicle) { return invoke<BOOL>(0x7B94DA9EDB63B904, vehicle); }
static void SET_VEHICLE_CHEAT_POWER_INCREASE(Vehicle vehicle, float value) { invoke<Void>(0xF1C985BBEC6B6321, vehicle, value); }
static void SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Any p0, BOOL p1) { invoke<Void>(0xAA588DD56719AE3A, p0, p1); }
static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0xDC05A8A020E60C86, vehicle, state); }
static void SWING_BOAT_BOOM_TO_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0x53E0C0174C1459B3, vehicle, ratio); }
static void SWING_BOAT_BOOM_FREELY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x501C6124BE36E301, vehicle, toggle); }
static void ALLOW_BOAT_BOOM_TO_ANIMATE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x76D20C5FEC8EC7F1, vehicle, toggle); }
static float GET_BOAT_BOOM_POSITION_RATIO(Vehicle vehicle) { return invoke<float>(0x57C35460B8069979, vehicle); }
static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0xEB808E35861B8782, vehicle, p1, p2); }
static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0x182BD9AD1675B5DE, vehicle); }
static void SET_VEHICLE_USE_ALTERNATE_HANDLING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x6E97FD533F10FC5C, vehicle, toggle); }
static void SET_BIKE_ON_STAND(Vehicle vehicle, float x, float y) { invoke<Void>(0xD3B9FE5F9C40C8B5, vehicle, x, y); }
static void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x9BC299A7D57D7CAA, vehicle, p1); }
static void LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle) { invoke<Void>(0x5A78FA8C86A9587A, vehicle); }
static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { invoke<Void>(0xC9BBB26582F3058A, vehicle); }
static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0x1D25F777D0165BF3); }
static void CLEAR_LAST_DRIVEN_VEHICLE() { invoke<Void>(0x5314C41B6FA61336); }
static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE8EF17ECD68C900D, vehicle, toggle); }
static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { invoke<Void>(0x1B8AC60684718568, plane, height); }
static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xB344489A3C5FFBBB, vehicle, multiplier); }
static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xC13B5C4CC421EA79, vehicle, toggle); }
static int GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(Vehicle vehicle) { return invoke<int>(0x4FD9D8C197FF8A52, vehicle); }
static int GET_VEHICLE_NUM_OF_BROKEN_LOOSEN_PARTS(Vehicle vehicle) { return invoke<int>(0xD5AA1C942B6D68DD, vehicle); }
static void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Any p0, BOOL p1) { invoke<Void>(0xA7C024F5E73C2EE0, p0, p1); }
static void SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x6A59D337CB7DD7E0, vehicle, toggle); }
static void COPY_VEHICLE_DAMAGES(Vehicle sourceVehicle, Vehicle targetVehicle) { invoke<Void>(0xF9639F1B33AF0EF8, sourceVehicle, targetVehicle); }
static void DISABLE_VEHICLE_EXPLOSION_BREAK_OFF_PARTS() { invoke<Void>(0x5CB3E2A3FC6B7543); }
static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(float distance) { invoke<Void>(0x1BE70491AADA5F80, distance); }
static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0xD2A388162B1121E3, driver, entity, xTarget, yTarget, zTarget); }
static BOOL GET_VEHICLE_LOCK_ON_TARGET(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0xE5EF4685EE5EF675, vehicle, entity); }
static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2814BEDF5E0AF4C0, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(Vehicle vehicle, float p1) { invoke<Void>(0x5D97A268AAF6B6AB, vehicle, p1); }
static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0xA42AC01E0317ED99, vehicle); }
static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0x8FBF79AC214E3747, vehicle); }
static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0x4F7C7E268667C7B3, vehicle); }
static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x666DF5A2D9B9C2DF, vehicle, toggle); }
static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL toggle) { invoke<Void>(0x312DFD78768FEAA0, toggle); }
static void SET_VEHICLE_SLIPSTREAMING_SHOULD_TIME_OUT(BOOL toggle) { invoke<Void>(0xF5DE2508EEBD1684, toggle); }
static float GET_VEHICLE_CURRENT_TIME_IN_SLIP_STREAM(Vehicle vehicle) { return invoke<float>(0x8A278879AFDDD37B, vehicle); }
static BOOL IS_VEHICLE_PRODUCING_SLIP_STREAM(Vehicle vehicle) { return invoke<BOOL>(0x69347FDCD85BCA24, vehicle); }
static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x905AE697A8F8A694, vehicle, toggle); }
static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2FCE3F2F4D0CB50, vehicle, toggle); }
static BOOL IS_VEHICLE_SPRAYABLE(Vehicle vehicle) { return invoke<BOOL>(0xE61689C28FFE2DAF, vehicle); }
static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF9DF73BCBDB93008, vehicle, toggle); }
static void DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle, int p1, int p2) { invoke<Void>(0xFB9F77A8FFB0897E, vehicle, p1, p2); }
static void ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle) { invoke<Void>(0x43AF47D2A857D51A, vehicle); }
static BOOL IS_PLANE_LANDING_GEAR_INTACT(Vehicle plane) { return invoke<BOOL>(0x61F41693A4648B46, plane); }
static BOOL ARE_PLANE_PROPELLERS_INTACT(Vehicle plane) { return invoke<BOOL>(0x7C1AFBB397B1066E, plane); }
static BOOL SET_PLANE_PROPELLER_HEALTH(Vehicle plane, float health) { return invoke<BOOL>(0x6C0C380EEAAFA7E3, plane, health); }
static void SET_VEHICLE_CAN_DEFORM_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1E00EF437AE43BB8, vehicle, toggle); }
static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0xFDA2576D37032738, vehicle); }
static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0xD37CA6D6F8993BB9, vehicle, isStolen); }
static void SET_PLANE_TURBULENCE_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x540E1993D47EAF4B, vehicle, multiplier); }
static BOOL ARE_WINGS_OF_PLANE_INTACT(Vehicle plane) { return invoke<BOOL>(0x287065449969E42F, plane); }
static void ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(Vehicle vehicle) { invoke<Void>(0xCD01772CECE254A3, vehicle); }
static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x84448CC61691D994, vehicle, cargobob); }
static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0x9A2C1A81F938D584, vehicle); }
static BOOL DETACH_ENTITY_FROM_CARGOBOB(Vehicle cargobob, Entity entity) { return invoke<BOOL>(0x9CF923758A7DEF91, cargobob, entity); }
static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0x4160C3716329E630, cargobob, vehicleAttached); }
static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0x79FCDCFB75A2E31B, cargobob); }
static Entity GET_ENTITY_ATTACHED_TO_CARGOBOB(Any p0) { return invoke<Entity>(0xA60E0FC9E433408C, p0); }
static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0x47B74B49AC74FAF4, vehicle, cargobob, p2, x, y, z); }
static void ATTACH_ENTITY_TO_CARGOBOB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x129361AA74CBB732, p0, p1, p2, p3, p4, p5); }
static void SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(Vehicle cargobob, BOOL toggle) { invoke<Void>(0xA205F1BC1E1E70CF, cargobob, toggle); }
static void SET_CARGOBOB_EXCLUDE_FROM_PICKUP_ENTITY(Any p0, Any p1) { invoke<Void>(0x9E3907AACB2EE9A3, p0, p1); }
static BOOL CAN_CARGOBOB_PICK_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xC7654AAAA57E8D28, p0, p1); }
static Vector3 GET_ATTACHED_PICK_UP_HOOK_POSITION(Vehicle cargobob) { return invoke<Vector3>(0xA22032FB8CF69F27, cargobob); }
static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0x93EBA5A2C85D82E7, cargobob); }
static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob, int state) { invoke<Void>(0xD0E90E9B5A87913E, cargobob, state); }
static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob) { invoke<Void>(0x22697BCF9D7EB9FF, cargobob); }
static void SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Vehicle cargobob, float length1, float length2, BOOL p3) { invoke<Void>(0x17B5AACACF266B6A, cargobob, length1, length2, p3); }
static void SET_PICKUP_ROPE_LENGTH_WITHOUT_CREATING_ROPE_FOR_CARGOBOB(Any p0, Any p1, Any p2) { invoke<Void>(0x907862D7EED879DE, p0, p1, p2); }
static void SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0x88A79760AFFC278F, p0, p1); }
static void SET_CARGOBOB_PICKUP_ROPE_TYPE(Any p0, Any p1) { invoke<Void>(0xAA54E339BD273E82, p0, p1); }
static BOOL DOES_CARGOBOB_HAVE_PICKUP_MAGNET(Vehicle cargobob) { return invoke<BOOL>(0x55250754D66E3652, cargobob); }
static void SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(Vehicle cargobob, BOOL isActive) { invoke<Void>(0x279E935A91EF72DA, cargobob, isActive); }
static void SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(Vehicle cargobob, float strength) { invoke<Void>(0x8E7F0FC0E58A6331, cargobob, strength); }
static void SET_CARGOBOB_PICKUP_MAGNET_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0x24FDC1440EEAE053, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0xAF22CCA1763E6B1F, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0xEBF4A581695418A5, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0x99B282132C4AB6DA, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH(Vehicle vehicle, float p1) { invoke<Void>(0x529A57C2E61B1345, vehicle, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_SET_TARGETED_MODE(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x9E33FC86B0212DAB, vehicle, cargobob); }
static void SET_CARGOBOB_PICKUP_MAGNET_SET_AMBIENT_MODE(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x57F9AA96B2E7702A, vehicle, p1, p2); }
static void SET_CARGOBOB_PICKUP_MAGNET_ENSURE_PICKUP_ENTITY_UPRIGHT(Vehicle vehicle, BOOL p1) { invoke<Void>(0x220D7AA717CC835C, vehicle, p1); }
static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0x3665875382B5AB69, vehicle); }
static void SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Vehicle vehicle, BOOL p1) { invoke<Void>(0xB0EBCEBA08F63848, vehicle, p1); }
static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0x267A7225DAF1CD41, disabled, weaponHash, vehicle, owner); }
static BOOL IS_VEHICLE_WEAPON_DISABLED(Hash weaponHash, Vehicle vehicle, Ped owner) { return invoke<BOOL>(0x27058ECA3C640709, weaponHash, vehicle, owner); }
static void SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x43176180326D6988, vehicle, toggle); }
static void SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8AFDFB10F32CB1A8, vehicle, toggle); }
static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0x5506AFBD6056C05F, vehicle); }
static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0xE074F21A4084FD1F, modelHash); }
static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0xE3A0299C9DEE59C8, vehicle); }
static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xD0794C48F637F16C, vehicle, toggle); }
static void SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0x97FB44DEA703EB10, vehicle, p1); }
static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9E62B9416FD53EBA, vehicle, toggle); }
static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xC0DB690A927487AE, vehicle, toggle); }
static void SET_VEHICLE_IMPATIENCE_TIMER(Vehicle vehicle, Any p1) { invoke<Void>(0x740CB8455C25DD1C, vehicle, p1); }
static void SET_VEHICLE_HANDLING_OVERRIDE(Vehicle vehicle, Hash hash) { invoke<Void>(0x753758951C769A4A, vehicle, hash); }
static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Vehicle vehicle, int range) { invoke<Void>(0x8C1172B230F4EB1A, vehicle, range); }
static void SET_VEHICLE_STEERING_BIAS_SCALAR(Any p0, float p1) { invoke<Void>(0xDC3F37138B82ACCA, p0, p1); }
static void SET_HELI_CONTROL_LAGGING_RATE_SCALAR(Vehicle helicopter, float multiplier) { invoke<Void>(0x348B16EB27AA1C60, helicopter, multiplier); }
static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0xF5E7FBE3D9D9BC24, vehicle, friction); }
static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x7300EAE2F99BE3B7, vehicle, toggle); }
static BOOL ARE_PLANE_CONTROL_PANELS_INTACT(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0xE5ECA5B21BBFA1E5, vehicle, p1); }
static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0x5F7FDF6769E8DD84, vehicle, height); }
static void SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xDDBBC2472DA87217, vehicle, toggle); }
static void CLEAR_VEHICLE_ROUTE_HISTORY(Vehicle vehicle) { invoke<Void>(0xD2B08CD9D81655CE, vehicle); }
static Vehicle DOES_VEHICLE_EXIST_WITH_DECORATOR(const char* decorator) { return invoke<Vehicle>(0x824A2D0AB16C9E1A, decorator); }
static void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x863A048DC4DBB2FE, vehicle, toggle); }
static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped, int index) { invoke<Void>(0x630992D07A32281B, vehicle, ped, index); }
static BOOL IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(Ped ped, Vehicle vehicle, int* outIndex) { return invoke<BOOL>(0x4877F2B0D2101BDE, ped, vehicle, outIndex); }
static void DISABLE_INDIVIDUAL_PLANE_PROPELLER(Vehicle vehicle, int propeller) { invoke<Void>(0x36746293A73925EB, vehicle, propeller); }
static void SET_VEHICLE_FORCE_AFTERBURNER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA43283449133E803, vehicle, toggle); }
static void SET_DONT_PROCESS_VEHICLE_GLASS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xE0ACB5BC9D603F02, vehicle, toggle); }
static void SET_DISABLE_WANTED_CONES_RESPONSE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xAEC7FB421829031C, vehicle, toggle); }
static void SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xB6D03E3DBCAF727F, vehicle, toggle); }
static void SET_ARRIVE_DISTANCE_OVERRIDE_FOR_VEHICLE_PERSUIT_ATTACK(Vehicle vehicle, float p1) { invoke<Void>(0x8D12590141B620B3, vehicle, p1); }
static void SET_VEHICLE_READY_FOR_CLEANUP(Any p0) { invoke<Void>(0xDB3813D934CC6718, p0); }
static void SET_DISTANT_CARS_ENABLED(BOOL toggle) { invoke<Void>(0x40124D3C22E7C332, toggle); }
static void SET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0xEAB8A43F6621850F, vehicle, r, g, b); }
static void SET_VEHICLE_NEON_INDEX_COLOUR(Vehicle vehicle, int index) { invoke<Void>(0x44612E772F9312E9, vehicle, index); }
static void GET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x64FEACF0AD019F1F, vehicle, r, g, b); }
static void SET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0xE62930EC6FAABCA5, vehicle, index, toggle); }
static BOOL GET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0xF1B79038130E3C08, vehicle, index); }
static void SET_AMBIENT_VEHICLE_NEON_ENABLED(BOOL p0) { invoke<Void>(0xCD06D7490DF9B6BA, p0); }
static void SUPPRESS_NEONS_ON_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xBDCFCDA63931E498, vehicle, toggle); }
static void SET_DISABLE_SUPERDUMMY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1AA970FDD6C143E2, vehicle, p1); }
static void REQUEST_VEHICLE_DIAL(Vehicle vehicle) { invoke<Void>(0x4C8F181F63537DD2, vehicle); }
static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x3B5692CB240DBC2F, vehicle); }
static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0x3E7E7AD923FD91A7, vehicle, value); }
static void GET_VEHICLE_SIZE(Vehicle vehicle, Vector3* out1, Vector3* out2) { invoke<Void>(0xB07407B3B153C760, vehicle, out1, out2); }
static float GET_FAKE_SUSPENSION_LOWERING_AMOUNT(Vehicle vehicle) { return invoke<float>(0xF7553BA24C0AB0B2, vehicle); }
static void SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(float multiplier) { invoke<Void>(0x3511D41891789DA6, multiplier); }
static int GET_NUMBER_OF_VEHICLE_DOORS(Vehicle vehicle) { return invoke<int>(0x860632F4716956DF, vehicle); }
static void SET_HYDRAULICS_CONTROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2B773DB19587707D, vehicle, toggle); }
static void SET_CAN_ADJUST_GROUND_CLEARANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x30825986EF0F9E48, vehicle, p1); }
static float GET_VEHICLE_HEALTH_PERCENTAGE(Vehicle vehicle, float maxEngineHealth, float maxPetrolTankHealth, float maxBodyHealth, float maxMainRotorHealth, float maxTailRotorHealth, float maxUnkHealth) { return invoke<float>(0xA9EDF0DFAF70EAD4, vehicle, maxEngineHealth, maxPetrolTankHealth, maxBodyHealth, maxMainRotorHealth, maxTailRotorHealth, maxUnkHealth); }
static BOOL GET_VEHICLE_IS_MERCENARY(Vehicle vehicle) { return invoke<BOOL>(0x97CDBE6B72277F6A, vehicle); }
static void SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(Vehicle vehicle, BOOL p1) { invoke<Void>(0xA7F7529CFB6F1EA7, vehicle, p1); }
static void SET_VEHICLE_KERS_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF629ED9089543196, vehicle, toggle); }
static BOOL GET_VEHICLE_HAS_KERS(Vehicle vehicle) { return invoke<BOOL>(0xF548473734CBB33B, vehicle); }
static void SET_PLANE_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3DCEE0B40D1FEC94, vehicle, toggle); }
static void SET_HELI_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xCA2403168E81B9CB, vehicle, toggle); }
static void SET_DISABLE_BMX_EXTRA_TRICK_FORCES(Any p0) { invoke<Void>(0xB65B0A6A52A484B5, p0); }
static void SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId, float value) { invoke<Void>(0x0987D0FA30D602B0, vehicle, wheelId, value); }
static float GET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId) { return invoke<float>(0xB9E9F6A235CE5516, vehicle, wheelId); }
static void SET_CAN_USE_HYDRAULICS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x6B64B565F7C0BE14, vehicle, toggle); }
static void SET_HYDRAULIC_VEHICLE_STATE(Vehicle vehicle, int state) { invoke<Void>(0xA15CBF61198EE519, vehicle, state); }
static void SET_HYDRAULIC_WHEEL_STATE(Vehicle vehicle, int wheelId, int state, float value, Any p4) { invoke<Void>(0x640BC0200CE90880, vehicle, wheelId, state, value, p4); }
static BOOL HAS_VEHICLE_PETROLTANK_SET_ON_FIRE_BY_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0xB8E85A4A8536807D, p0, p1); }
static void CLEAR_VEHICLE_PETROLTANK_FIRE_CULPRIT(Vehicle vehicle) { invoke<Void>(0x60D610F2649E805B, vehicle); }
static void SET_VEHICLE_BOBBLEHEAD_VELOCITY(float x, float y, float p2) { invoke<Void>(0x5F6C263433E7851E, x, y, p2); }
static BOOL GET_VEHICLE_IS_DUMMY(Any p0) { return invoke<BOOL>(0x38779AA6147A1831, p0); }
static BOOL SET_VEHICLE_DAMAGE_SCALE(Vehicle vehicle, float p1) { return invoke<BOOL>(0x271D0AA5ADF266EA, vehicle, p1); }
static BOOL SET_VEHICLE_WEAPON_DAMAGE_SCALE(Vehicle vehicle, float multiplier) { return invoke<BOOL>(0x7442AD74A851EC7B, vehicle, multiplier); }
static BOOL SET_DISABLE_DAMAGE_WITH_PICKED_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x793D2505EE281DDD, p0, p1); }
static void SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0xAF324DD73DD8C045, p0, p1); }
static void SET_BIKE_EASY_TO_LAND(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x77950FC099D3FB4D, vehicle, toggle); }
static void SET_INVERT_VEHICLE_CONTROLS(Vehicle vehicle, BOOL state) { invoke<Void>(0x784F0E1BBD6301B6, vehicle, state); }
static void SET_SPEED_BOOST_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0x42B109962C4D43EC, disabled); }
static void SET_SLOW_DOWN_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0x0A158DF97B623950, disabled); }
static void SET_FORMATION_LEADER(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0x5E0F6A0ED51BB6A8, vehicle, x, y, z, p4); }
static void RESET_FORMATION_LEADER() { invoke<Void>(0xDFF07C5495BDA6ED); }
static BOOL GET_IS_BOAT_CAPSIZED(Vehicle vehicle) { return invoke<BOOL>(0x656463C707D8CCC9, vehicle); }
static void SET_ALLOW_RAMMING_SOOP_OR_RAMP(Any p0, Any p1) { invoke<Void>(0xF977D20CFFFD341F, p0, p1); }
static void SET_SCRIPT_RAMP_IMPULSE_SCALE(Vehicle vehicle, float impulseScale) { invoke<Void>(0xABCBEEA1CC0701DC, vehicle, impulseScale); }
static BOOL GET_IS_DOOR_VALID(Vehicle vehicle, int doorId) { return invoke<BOOL>(0xB3E28598CA656061, vehicle, doorId); }
static void SET_SCRIPT_ROCKET_BOOST_RECHARGE_TIME(Vehicle vehicle, float seconds) { invoke<Void>(0x3088D7B1F0BD8975, vehicle, seconds); }
static BOOL GET_HAS_ROCKET_BOOST(Vehicle vehicle) { return invoke<BOOL>(0xA03728CC57F6DD36, vehicle); }
static BOOL IS_ROCKET_BOOST_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x772683F12F46CE82, vehicle); }
static void SET_ROCKET_BOOST_ACTIVE(Vehicle vehicle, BOOL active) { invoke<Void>(0x5B29AF88D03CEB7A, vehicle, active); }
static BOOL GET_HAS_RETRACTABLE_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0xBFDFDBE09E616B61, vehicle); }
static BOOL GET_IS_WHEELS_RETRACTED(Vehicle vehicle) { return invoke<BOOL>(0x7F90FF957E7FF50A, vehicle); }
static void SET_WHEELS_EXTENDED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0xAB4E52390141B4E7, vehicle); }
static void SET_WHEELS_RETRACTED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0xC61B49A4C6C60411, vehicle); }
static BOOL GET_CAR_HAS_JUMP(Vehicle vehicle) { return invoke<BOOL>(0x9D019545E8C959C6, vehicle); }
static void SET_USE_HIGHER_CAR_JUMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x5191631D395FDE9C, vehicle, toggle); }
static void SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xA133EF296C37D6E6, vehicle, toggle); }
static void SET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex, int capacity) { invoke<Void>(0x5951A2AB1DF37E03, vehicle, weaponIndex, capacity); }
static int GET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex) { return invoke<int>(0x73C3D75DAC71F876, vehicle, weaponIndex); }
static BOOL GET_VEHICLE_HAS_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0x1A1A32EC5122B4F0, vehicle); }
static BOOL GET_VEHICLE_CAN_DEPLOY_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0x5B82466A71C4A9CD, vehicle); }
static void VEHICLE_START_PARACHUTING(Vehicle vehicle, BOOL active) { invoke<Void>(0xDCD94B3260CB762C, vehicle, active); }
static BOOL IS_VEHICLE_PARACHUTE_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0x385CCC1DF7554BE9, vehicle); }
static void VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x9F0B86B670233A83, vehicle, toggle); }
static void VEHICLE_SET_ENABLE_RAMP_CAR_SIDE_IMPULSE(Any p0, Any p1) { invoke<Void>(0x9CAB1193A04940AC, p0, p1); }
static void VEHICLE_SET_ENABLE_NORMALISE_RAMP_CAR_VERTICAL_VELOCTIY(Any p0, Any p1) { invoke<Void>(0xDCCC8272AEA5EA2C, p0, p1); }
static void VEHICLE_SET_JET_WASH_FORCE_ENABLED(Any p0) { invoke<Void>(0x528A16ECF4B7B5A6, p0); }
static void SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1A144C0743BF5890, vehicle, toggle); }
static void SET_VEHICLE_USE_BOOST_BUTTON_FOR_WHEEL_RETRACT(BOOL toggle) { invoke<Void>(0xBC4F3DBA48761D9A, toggle); }
static void VEHICLE_SET_PARACHUTE_MODEL_OVERRIDE(Vehicle vehicle, Hash modelHash) { invoke<Void>(0x85F0DD9B2A310950, vehicle, modelHash); }
static void VEHICLE_SET_PARACHUTE_MODEL_TINT_INDEX(Vehicle vehicle, int textureVariation) { invoke<Void>(0xB51B6AC3785890FE, vehicle, textureVariation); }
static int VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0x63CDE093822E42C4, p0, p1); }
static int VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(Any p0, Any p1) { return invoke<int>(0xB2EEF26FE11993BB, p0, p1); }
static int VEHICLE_SET_OVERRIDE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0x8AF1D691BC007513, p0, p1); }
static int GET_ALL_VEHICLES(Any* vehsStruct) { return invoke<int>(0x0D308D56EF4A935A, vehsStruct); }
static void SET_CARGOBOB_EXTA_PICKUP_RANGE(Any p0, Any p1) { invoke<Void>(0x72BECCF4B829522E, p0, p1); }
static void SET_OVERRIDE_VEHICLE_DOOR_TORQUE(Any p0, Any p1, Any p2) { invoke<Void>(0x66E3AAFACE2D1EB8, p0, p1, p2); }
static void SET_WHEELIE_ENABLED(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x1312DDD8385AEE4E, vehicle, enabled); }
static void SET_DISABLE_HELI_EXPLODE_FROM_BODY_DAMAGE(Any p0, Any p1) { invoke<Void>(0xEDBC8405B3895CC9, p0, p1); }
static void SET_DISABLE_EXPLODE_FROM_BODY_DAMAGE_ON_COLLISION(Vehicle vehicle, float value) { invoke<Void>(0x26E13D440E7F6064, vehicle, value); }
static void SET_TRAILER_ATTACHMENT_ENABLED(Any p0, Any p1) { invoke<Void>(0x2FA2494B47FDD009, p0, p1); }
static void SET_ROCKET_BOOST_FILL(Vehicle vehicle, float percentage) { invoke<Void>(0xFEB2DDED3509562E, vehicle, percentage); }
static void SET_GLIDER_ACTIVE(Vehicle vehicle, BOOL state) { invoke<Void>(0x544996C0081ABDEB, vehicle, state); }
static void SET_SHOULD_RESET_TURRET_IN_SCRIPTED_CAMERAS(Vehicle vehicle, BOOL shouldReset) { invoke<Void>(0x78CEEE41F49F421F, vehicle, shouldReset); }
static void SET_VEHICLE_DISABLE_COLLISION_UPON_CREATION(Vehicle vehicle, BOOL disable) { invoke<Void>(0xAF60E6A2936F982A, vehicle, disable); }
static void SET_GROUND_EFFECT_REDUCES_DRAG(BOOL toggle) { invoke<Void>(0x430A7631A84C9BE7, toggle); }
static void SET_DISABLE_MAP_COLLISION(Vehicle vehicle) { invoke<Void>(0x75627043C6AA90AD, vehicle); }
static void SET_DISABLE_PED_STAND_ON_TOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8235F1BEAD557629, vehicle, toggle); }
static void SET_VEHICLE_DAMAGE_SCALES(Vehicle vehicle, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x9640E30A7F395E4B, vehicle, p1, p2, p3, p4); }
static void SET_PLANE_SECTION_DAMAGE_SCALE(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0x0BBB9A7A8FFE931B, vehicle, p1, p2); }
static void SET_HELI_CAN_PICKUP_ENTITY_THAT_HAS_PICK_UP_DISABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x94A68DA412C4007D, vehicle, toggle); }
static void SET_VEHICLE_BOMB_AMMO(Vehicle vehicle, int bombCount) { invoke<Void>(0x8955FB58835651A2, vehicle, bombCount); }
static int GET_VEHICLE_BOMB_AMMO(Vehicle vehicle) { return invoke<int>(0x87CB58CAE436D6A5, vehicle); }
static void SET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle, int counterMeasureCount) { invoke<Void>(0xEC0CBF0E037FEEB0, vehicle, counterMeasureCount); }
static int GET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle) { return invoke<int>(0x61B116A4C9C5B984, vehicle); }
static void SET_HELI_COMBAT_OFFSET(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x57EE251558A8A187, vehicle, x, y, z); }
static BOOL GET_CAN_VEHICLE_BE_PLACED_HERE(Vehicle vehicle, float x, float y, float z, float rotX, float rotY, float rotZ, int p7, Any p8) { return invoke<BOOL>(0x685A7D56318EFE6D, vehicle, x, y, z, rotX, rotY, rotZ, p7, p8); }
static void SET_DISABLE_AUTOMATIC_CRASH_TASK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x3423BC61BC6BD401, vehicle, toggle); }
static void SET_SPECIAL_FLIGHT_MODE_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0xE70F79BDFCB8B4BC, vehicle, ratio); }
static void SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(Vehicle vehicle, float targetRatio) { invoke<Void>(0x7F3C8FDDAE1D6311, vehicle, targetRatio); }
static void SET_SPECIAL_FLIGHT_MODE_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x16EB4EEDAA5416C4, vehicle, toggle); }
static void SET_DISABLE_HOVER_MODE_FLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x2C97F1F248685957, vehicle, toggle); }
static BOOL GET_OUTRIGGERS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xCC986802D9AE877E, vehicle); }
static Vector3 FIND_SPAWN_COORDINATES_FOR_HELI(Ped ped) { return invoke<Vector3>(0x67896C7A4066E42E, ped); }
static void SET_DEPLOY_FOLDING_WINGS(Vehicle vehicle, BOOL deploy, BOOL p2) { invoke<Void>(0x89D51606F3FCA194, vehicle, deploy, p2); }
static BOOL ARE_FOLDING_WINGS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0xA347DA69520FE64A, vehicle); }
static void SET_DIP_STRAIGHT_DOWN_WHEN_CRASHING_PLANE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0D1E561A4621971E, vehicle, toggle); }
static void SET_TURRET_HIDDEN(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x6405F9D3DF61E127, vehicle, index, toggle); }
static void SET_HOVER_MODE_WING_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0x3D82B1EAD5216876, vehicle, ratio); }
static void SET_DISABLE_TURRET_MOVEMENT(Vehicle vehicle, int turretId) { invoke<Void>(0xF2B6BC6177886AEF, vehicle, turretId); }
static void SET_FORCE_FIX_LINK_MATRICES(Vehicle vehicle) { invoke<Void>(0xD7AF89E96BDD636E, vehicle); }
static void SET_TRANSFORM_RATE_FOR_ANIMATION(Vehicle vehicle, float transformRate) { invoke<Void>(0xC2AA11D47F8C5153, vehicle, transformRate); }
static void SET_TRANSFORM_TO_SUBMARINE_USES_ALTERNATE_INPUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xF2C91BA157882B97, vehicle, toggle); }
static void SET_VEHICLE_COMBAT_MODE(BOOL toggle) { invoke<Void>(0xBE2B7EEE635434FF, toggle); }
static void SET_VEHICLE_DETONATION_MODE(BOOL toggle) { invoke<Void>(0xC9544020DFE34A9C, toggle); }
static void SET_VEHICLE_SHUNT_ON_STICK(BOOL toggle) { invoke<Void>(0x0BE32015EBE87354, toggle); }
static BOOL GET_IS_VEHICLE_SHUNTING(Vehicle vehicle) { return invoke<BOOL>(0xF26071F4CBA82B4D, vehicle); }
static BOOL GET_HAS_VEHICLE_BEEN_HIT_BY_SHUNT(Vehicle vehicle) { return invoke<BOOL>(0x57C7BFB65495FB1A, vehicle); }
static Vehicle GET_LAST_SHUNT_VEHICLE(Vehicle vehicle) { return invoke<Vehicle>(0xC4DBC6C793A97252, vehicle); }
static void SET_DISABLE_VEHICLE_EXPLOSIONS_DAMAGE(BOOL toggle) { invoke<Void>(0xB3AB0B43CABD4F3E, toggle); }
static void SET_OVERRIDE_NITROUS_LEVEL(Vehicle vehicle, BOOL toggle, float level, float power, float rechargeTime, BOOL disableSound) { invoke<Void>(0x8D6D4EB2FFE77CB3, vehicle, toggle, level, power, rechargeTime, disableSound); }
static void SET_INCREASE_WHEEL_CRUSH_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEB7247ECF9313934, vehicle, toggle); }
static void SET_DISABLE_WEAPON_BLADE_FORCES(BOOL toggle) { invoke<Void>(0x4F80CD41C0C6F1E3, toggle); }
static void SET_USE_DOUBLE_CLICK_FOR_CAR_JUMP(BOOL toggle) { invoke<Void>(0x7619E49E996C8A15, toggle); }
static BOOL GET_DOES_VEHICLE_HAVE_TOMBSTONE(Vehicle vehicle) { return invoke<BOOL>(0x583536248E014455, vehicle); }
static void HIDE_TOMBSTONE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x8EA0917E9BF68ABF, vehicle, toggle); }
static BOOL GET_IS_VEHICLE_DISABLED_BY_EMP(Vehicle vehicle) { return invoke<BOOL>(0x81A129E894BD7138, vehicle); }
static void SET_DISABLE_RETRACTING_WEAPON_BLADES(BOOL toggle) { invoke<Void>(0x946CF11741899D4C, toggle); }
static float GET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex) { return invoke<float>(0x2F800AD09C30EAFF, vehicle, wheelIndex); }
static void SET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex, float health) { invoke<Void>(0x8110C3A5371AD12D, vehicle, wheelIndex, health); }
static float GET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex) { return invoke<float>(0xA62C98856A88DC66, vehicle, wheelIndex); }
static void SET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0x10F7F8057FDFEF58, vehicle, wheelIndex, multiplier); }
static void SET_TYRE_WEAR_RATE_SCALE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0x7FFAD424E930B802, vehicle, wheelIndex, multiplier); }
static void SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0x5442E3C4F8176CE7, vehicle, wheelIndex, multiplier); }
static void SET_AIRCRAFT_IGNORE_HIGHTMAP_OPTIMISATION(Vehicle vehicle, int p1) { invoke<Void>(0xDA9A20F41B1D3C1B, vehicle, p1); }
static void SET_REDUCED_SUSPENSION_FORCE(Vehicle vehicle, BOOL enable) { invoke<Void>(0xCE2ADF354D3F97AE, vehicle, enable); }
static void SET_DRIFT_TYRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x519F76A38952BBD0, vehicle, toggle); }
static BOOL GET_DRIFT_TYRES_SET(Vehicle vehicle) { return invoke<BOOL>(0x4497678941C27E46, vehicle); }
static void NETWORK_USE_HIGH_PRECISION_TRAIN_BLENDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x0B5FFFF9010AEF80, vehicle, toggle); }
static void SET_CHECK_FOR_ENOUGH_ROOM_FOR_PED(Vehicle vehicle, BOOL p1) { invoke<Void>(0x6A9E89C17033E79E, vehicle, p1); }
static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0xF85C2BE613AD7903, x, y, z, height); }
static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0x7CF3DDFB660E9328, x, y, z, height); }
static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return invoke<BOOL>(0x1EF8801C2AC1FE34, x1, y1, z1, x2, y2, z2, result); }
static int TEST_PROBE_AGAINST_ALL_WATER(float x1, float y1, float z1, float x2, float y2, float z2, int flags, float* waterHeight) { return invoke<int>(0xDB947915FA4FB5D5, x1, y1, z1, x2, y2, z2, flags, waterHeight); }
static int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, int flags, float* waterHeight) { return invoke<int>(0x53875E6971DE2FBF, x, y, z, flags, waterHeight); }
static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0xE75901370C558054, x, y, radius, height); }
static int ADD_EXTRA_CALMING_QUAD(float xLow, float yLow, float xHigh, float yHigh, float height) { return invoke<int>(0x768916F2C61804A4, xLow, yLow, xHigh, yHigh, height); }
static void REMOVE_EXTRA_CALMING_QUAD(int calmingQuad) { invoke<Void>(0x6880878FB8B44799, calmingQuad); }
static void SET_DEEP_OCEAN_SCALER(float intensity) { invoke<Void>(0x1F28B185E40612B5, intensity); }
static float GET_DEEP_OCEAN_SCALER() { return invoke<float>(0x13AC55E5C01A1052); }
static void SET_CALMED_WAVE_HEIGHT_SCALER(float height) { invoke<Void>(0xBF7C28CF040C67BC, height); }
static void RESET_DEEP_OCEAN_SCALER() { invoke<Void>(0x1FE002F8F0E4E900); }
static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0xAB078CF87FA0D018, toggle); }
static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0xB39F6B1C186F538E, componentHash); }
static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0xA0A2925EDC6DDA6D, weaponHash); }
static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0xF06CB8927A8EE0DE, weaponHash); }
static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0x6CC7A2E68E8A565A, weaponHash); }
static int GET_WEAPON_COMPONENT_VARIANT_EXTRA_COUNT(Hash componentHash) { return invoke<int>(0x879FF7169943DE79, componentHash); }
static Hash GET_WEAPON_COMPONENT_VARIANT_EXTRA_MODEL(Hash componentHash, int extraComponentIndex) { return invoke<Hash>(0xB7B32238BFF7DD76, componentHash, extraComponentIndex); }
static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL bForceInHand) { invoke<Void>(0x3C0F448853B71C92, ped, weaponHash, bForceInHand); }
static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x23B29877D0BE9547, ped, weaponHash, p2); }
static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return invoke<Entity>(0x484426882F80CACE, ped, p1); }
static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0xF3D409E30929BD33, ped, p1); }
static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0xE26BDA5FFA4CA294, ped, weaponHash); }
static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x51B462E1DEB9F762, ped, weaponHash); }
static void SET_PED_CYCLE_VEHICLE_WEAPONS_ONLY(Ped ped) { invoke<Void>(0xAD33AEE7683375F4, ped); }
static BOOL IS_PED_ARMED(Ped ped, int typeFlags) { return invoke<BOOL>(0x11552FA9DCB8E126, ped, typeFlags); }
static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0x2A9ED010C087BF2B, weaponHash); }
static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0x66B90BA528CFEBCE, ped, weaponHash, p2); }
static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x45F34E0DDD65A401, ped); }
static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0xBCEDAE6CA2B2046E, ped, weaponSlot); }
static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0x1149D67DB429787A, ped, weaponhash); }
static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x0574074EDCCCBD5E, ped, weaponHash, ammo); }
static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo, BOOL p3) { invoke<Void>(0x45FC566246B3511B, ped, weaponHash, ammo, p3); }
static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0xA83DA0A0DF32920C, ped, toggle, weaponHash); }
static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x53A38286A3AC16C1, ped, toggle); }
static void SET_PED_STUN_GUN_FINITE_AMMO(Any p0, Any p1) { invoke<Void>(0x9EFAE0A25C020F4B, p0, p1); }
static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL bForceInHand) { invoke<Void>(0xB41DEC3AAC1AA107, ped, weaponHash, ammoCount, isHidden, bForceInHand); }
static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand) { invoke<Void>(0x4BD3F83B0D7E1417, ped, weaponHash, ammoCount, bForceInHand); }
static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { invoke<Void>(0x1834D30866818A23, ped, p1); }
static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0x4F07124B9C56ED6F, ped, weaponHash); }
static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0x4A46DAA87A4C235E, ped, toggle); }
static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x4D5D5614C2DF76F4, ped, visible, deselectWeapon, p3, p4); }
static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x8CF553A05B97089A, ped, toggle); }
static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x690AB6F5DB2A3A54, ped, weaponHash, weaponType); }
static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0xD8AE5A845CE0131A, ped); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x1AC621DBDFE4ECA0, entity, weaponHash, weaponType); }
static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0x7468550652312059, entity); }
static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0x08AABCACF8F4828E, ped); }
static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0x6D796FB2594CA190, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); }
static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0xF2C30F76A5BF797F, ped, weaponHash, p2); }
static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x0227CB6AD5598268, ped, weaponHash, ammo); }
static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0x73992DAFD09D607B, ped, weaponHash, ammo); }
static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0xACBE463290141D49, ped, weaponHash, ammo); }
static BOOL GET_MAX_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int* ammo) { return invoke<BOOL>(0xC38311CAC7220555, ped, ammoTypeHash, ammo); }
static void ADD_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0x5D80B7A4B4BA4D49, ped, ammoTypeHash, ammo); }
static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0x8DF178F67D660DC7, ped, ammoTypeHash, ammo); }
static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash) { return invoke<int>(0xFC4FF8B60E6C8641, ped, ammoTypeHash); }
static void SET_PED_AMMO_TO_DROP(Ped ped, int p1) { invoke<Void>(0x5BD5570DF8DB6C39, ped, p1); }
static void SET_PICKUP_AMMO_AMOUNT_SCALER(float p0) { invoke<Void>(0x5FD6A23EC3A0882D, p0); }
static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0xA239630C4686BC6E, ped, weaponHash); }
static Hash GET_PED_ORIGINAL_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0x1820CC8352D1B6EE, ped, weaponHash); }
static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return invoke<BOOL>(0x4800F32F989BED65, ped, coords); }
static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0xD483C8E87621AF64, ped, gadgetHash, p2); }
static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0x08DAD6B08438A17C, ped, gadgetHash); }
static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0xB0D77D90171EC35F, ped); }
static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0xAF3A361C94FBBFC6, ped, weaponHash, p2); }
static void REMOVE_ALL_PROJECTILES_OF_TYPE(Hash weaponHash, BOOL explode) { invoke<Void>(0x650290A3A38E907E, weaponHash, explode); }
static float GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0xD6F4FF37FC8730A1, ped); }
static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x33D6B8520C268EC8, ped); }
static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0x43F53DDC37E17FE9, driver, vehicle, weaponHash, p3); }
static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x6D5FA72F8C43D132, ped, weaponHash, componentHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x80E6FC2ACEAF8AA3, ped, weaponHash, componentHash); }
static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x5EDED4B3E1A48E68, ped, weaponHash, componentHash); }
static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x85718B993F8FC553, ped, weaponHash, componentHash); }
static BOOL REFILL_AMMO_INSTANTLY(Ped ped) { return invoke<BOOL>(0x3CB575F4FC5A6DCB, ped); }
static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0xEB5B16C858201429, ped); }
static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0xA10F939489C3BE61, weaponHash, p1, p2); }
static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x92A65766A892EFC6, weaponHash); }
static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0xCF56BDC3BD787B97, weaponHash); }
static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale, Any p7, Any p8, Any p9) { return invoke<Object>(0x8A3572575D91006C, weaponHash, ammoCount, x, y, z, showWorldModel, scale, p7, p8, p9); }
static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash componentHash) { invoke<Void>(0x93A0B91D4456D7E9, weaponObject, componentHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object object, Hash componentHash) { invoke<Void>(0xFA13077979C3DCB9, object, componentHash); }
static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash componentHash) { return invoke<BOOL>(0x7B5835DBE90FBDED, weapon, componentHash); }
static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0x4693060C5049F4E3, weaponObject, ped); }
static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x0C985A2C6C77023D, weaponHash, componentHash); }
static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0xEA7D61B52729ED38, ped, p1); }
static void GIVE_LOADOUT_TO_PED(Ped ped, Hash loadoutHash) { invoke<Void>(0x9C1B023459284932, ped, loadoutHash); }
static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int tintIndex) { invoke<Void>(0xC37D2709B04BD397, ped, weaponHash, tintIndex); }
static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x6C81F95CADD1E6D0, ped, weaponHash); }
static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { invoke<Void>(0xFA3F484500EC0E85, weapon, tintIndex); }
static int GET_WEAPON_OBJECT_TINT_INDEX(Object weapon) { return invoke<int>(0x395F718BB649E570, weapon); }
static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0xB302C203285E8234, weaponHash); }
static void SET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash, int colorIndex) { invoke<Void>(0x834F4286803834DE, ped, weaponHash, camoComponentHash, colorIndex); }
static int GET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash) { return invoke<int>(0xB6209D82C643428C, ped, weaponHash, camoComponentHash); }
static void SET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash, int colorIndex) { invoke<Void>(0xE0826380A9741A77, weaponObject, camoComponentHash, colorIndex); }
static int GET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash) { return invoke<int>(0x7EC58BF54CD9DC57, weaponObject, camoComponentHash); }
static int GET_PED_WEAPON_CAMO_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0xB92D606AB30C334C, ped, weaponHash); }
static void SET_WEAPON_OBJECT_CAMO_INDEX(Object weaponObject, int p1) { invoke<Void>(0x2B73BEAD61E67B73, weaponObject, p1); }
static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0x78640AA034DC7BAF, weaponHash, outData); }
static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, Any* outData) { return invoke<BOOL>(0xF4CFBABEEF287C00, componentHash, outData); }
static float GET_WEAPON_DAMAGE(Hash weaponHash, Hash componentHash) { return invoke<float>(0xFE2B29CE6AE93F62, weaponHash, componentHash); }
static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0xF4E66F9577F22476, weaponHash); }
static float GET_WEAPON_TIME_BETWEEN_SHOTS(Hash weaponHash) { return invoke<float>(0x4CC44EFF756524DC, weaponHash); }
static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0x0DB5B122A29E007B, ped, xBias, yBias); }
static Object SET_PED_SHOOT_ORDNANCE_WEAPON(Ped ped, float p1) { return invoke<Object>(0x095BB431592C5642, ped, p1); }
static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0x8E453F6C5ABDD9DC, weaponObject); }
static void SET_WEAPON_DAMAGE_MODIFIER(Hash weaponHash, float damageMultiplier) { invoke<Void>(0xD78F39BF33D61469, weaponHash, damageMultiplier); }
static void SET_WEAPON_AOE_MODIFIER(Hash weaponHash, float multiplier) { invoke<Void>(0xBB74EE81E0CA2E98, weaponHash, multiplier); }
static void SET_WEAPON_EFFECT_DURATION_MODIFIER(Hash p0, float p1) { invoke<Void>(0xD0E4082BC9A5DC1E, p0, p1); }
static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x3C2402675D8FFADA, ped); }
static BOOL IS_FLASH_LIGHT_ON(Ped ped) { return invoke<BOOL>(0x9E333ABC0077FDAB, ped); }
static BOOL SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<BOOL>(0xDB47943DB2DB40C5, distance); }
static void SET_FLASH_LIGHT_ACTIVE_HISTORY(Ped ped, BOOL toggle) { invoke<Void>(0x46DEC96BAC39908C, ped, toggle); }
static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0x06119A351A3080C2, ped, animStyle); }
static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x12974BA350E32306, weaponHash); }
static void SET_EQIPPED_WEAPON_START_SPINNING_AT_FULL_SPEED(Ped ped) { invoke<Void>(0x2ED26DA87CD65433, ped); }
static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0xBE2AF59B33F9F92A, weaponHash); }
static int CREATE_AIR_DEFENCE_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6, Hash weaponHash) { return invoke<int>(0x51817FD0EC0A289C, x, y, z, radius, p4, p5, p6, weaponHash); }
static int CREATE_AIR_DEFENCE_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float radius, Hash weaponHash) { return invoke<int>(0x0C0C6031DB5E2A28, p0, p1, p2, p3, p4, p5, p6, p7, p8, radius, weaponHash); }
static BOOL REMOVE_AIR_DEFENCE_SPHERE(int zoneId) { return invoke<BOOL>(0x54A9A0E1D30B92A5, zoneId); }
static void REMOVE_ALL_AIR_DEFENCE_SPHERES() { invoke<Void>(0x537B8CC8EB57DFB7); }
static void SET_PLAYER_TARGETTABLE_FOR_AIR_DEFENCE_SPHERE(Player player, int zoneId, BOOL enable) { invoke<Void>(0xE3C69C184ADC05C0, player, zoneId, enable); }
static BOOL IS_AIR_DEFENCE_SPHERE_IN_AREA(float x, float y, float z, float radius, int* outZoneId) { return invoke<BOOL>(0x3EAF5419C2410C27, x, y, z, radius, outZoneId); }
static void FIRE_AIR_DEFENCE_SPHERE_WEAPON_AT_POSITION(int zoneId, float x, float y, float z) { invoke<Void>(0x71C760BC3D9BEDAC, zoneId, x, y, z); }
static BOOL DOES_AIR_DEFENCE_SPHERE_EXIST(int zoneId) { return invoke<BOOL>(0x8AED94D23435607C, zoneId); }
static void SET_CAN_PED_SELECT_INVENTORY_WEAPON(Ped ped, Hash weaponHash, BOOL toggle) { invoke<Void>(0xC3A0D70539BCA8F9, ped, weaponHash, toggle); }
static void SET_CAN_PED_SELECT_ALL_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0xB21FD0EEB76F0296, ped, toggle); }
static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0x3348018F21E261AF, x, y, z); }
static int GET_ZONE_FROM_NAME_ID(const char* zoneName) { return invoke<int>(0x17FDAC0BF5A2C728, zoneName); }
static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0xC6B8DAA3EC313D8F, zoneId); }
static const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0xDAEDE051F3F4FD45, x, y, z); }
static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0xD923766A456DE601, zoneId, toggle); }
static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x148523145C045769, zoneId); }
static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0x17687E14C390C475, scheduleId, vehicleHash); }
static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0x2E538CBB8683618E, scheduleId); }
static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x1E2447C0261A7995, x, y, z); }