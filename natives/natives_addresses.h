/*[created by mizdx] [3:33 am 3/17/2023]*/
#pragma once

#include "invoker.h"
#include "types.h"

static void WAIT(int ms) { invoke<Void>(0x230D3F0, ms); }
static int START_NEW_SCRIPT(const char* scriptName, int stackSize) { return invoke<int>(0x230D720, scriptName, stackSize); }
static int START_NEW_SCRIPT_WITH_ARGS(const char* scriptName, Any* args, int argCount, int stackSize) { return invoke<int>(0x230D8F0, scriptName, args, argCount, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH(Hash scriptHash, int stackSize) { return invoke<int>(0x230D930, scriptHash, stackSize); }
static int START_NEW_SCRIPT_WITH_NAME_HASH_AND_ARGS(Hash scriptHash, Any* args, int argCount, int stackSize) { return invoke<int>(0x230D9A0, scriptHash, args, argCount, stackSize); }
static int TIMERA() { return invoke<int>(0x230EB10); }
static int TIMERB() { return invoke<int>(0x230EB30); }
static void SETTIMERA(int value) { invoke<Void>(0x230EB50, value); }
static void SETTIMERB(int value) { invoke<Void>(0x230EB80, value); }
static float TIMESTEP() { return invoke<float>(0x230EBB0); }
static float SIN(float value) { return invoke<float>(0x230EBD0, value); }
static float COS(float value) { return invoke<float>(0x230EC00, value); }
static float SQRT(float value) { return invoke<float>(0x230EC40, value); }
static float POW(float base, float exponent) { return invoke<float>(0x230EC60, base, exponent); }
static float LOG10(float value) { return invoke<float>(0x230EC90, value); }
static float VMAG(float x, float y, float z) { return invoke<float>(0x230ECC0, x, y, z); }
static float VMAG2(float x, float y, float z) { return invoke<float>(0x230ED00, x, y, z); }
static float VDIST(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x230ED30, x1, y1, z1, x2, y2, z2); }
static float VDIST2(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0x230ED80, x1, y1, z1, x2, y2, z2); }
static int SHIFT_LEFT(int value, int bitShift) { return invoke<int>(0x230EDC0, value, bitShift); }
static int SHIFT_RIGHT(int value, int bitShift) { return invoke<int>(0x230EDE0, value, bitShift); }
static int FLOOR(float value) { return invoke<int>(0x230EE00, value); }
static int CEIL(float value) { return invoke<int>(0x230EE20, value); }
static int ROUND(float value) { return invoke<int>(0x230EE40, value); }
static float TO_FLOAT(int value) { return invoke<float>(0x230EE60, value); }
static void SET_THIS_THREAD_PRIORITY(int priority) { invoke<Void>(0x230EE70, priority); }
static BOOL APP_DATA_VALID() { return invoke<BOOL>(0xED0800); }
static int APP_GET_INT(const char* property) { return invoke<int>(0xED0820, property); }
static float APP_GET_FLOAT(const char* property) { return invoke<float>(0xED08E0, property); }
static const char* APP_GET_STRING(const char* property) { return invoke<const char*>(0xED09B0, property); }
static void APP_SET_INT(const char* property, int value) { invoke<Void>(0xED0A80, property, value); }
static void APP_SET_FLOAT(const char* property, float value) { invoke<Void>(0xED0A90, property, value); }
static void APP_SET_STRING(const char* property, const char* value) { invoke<Void>(0xED0AB0, property, value); }
static void APP_SET_APP(const char* appName) { invoke<Void>(0xED0AC0, appName); }
static void APP_SET_BLOCK(const char* blockName) { invoke<Void>(0xED0BA0, blockName); }
static void APP_CLEAR_BLOCK() { invoke<Void>(0xED0BF0); }
static void APP_CLOSE_APP() { invoke<Void>(0xED0C50); }
static void APP_CLOSE_BLOCK() { invoke<Void>(0xED0C90); }
static BOOL APP_HAS_LINKED_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xED0CF0); }
static BOOL APP_HAS_SYNCED_DATA(const char* appName) { return invoke<BOOL>(0xED0D10, appName); }
static void APP_SAVE_DATA() { invoke<Void>(0xED0D50); }
static int APP_GET_DELETED_FILE_STATUS() { return invoke<int>(0xED0D70); }
static BOOL APP_DELETE_APP_DATA(const char* appName) { return invoke<BOOL>(0xED0D90, appName); }
static void PLAY_PED_RINGTONE(const char* ringtoneName, Ped ped, BOOL p2) { invoke<Void>(0xED86A0, ringtoneName, ped, p2); }
static BOOL IS_PED_RINGTONE_PLAYING(Ped ped) { return invoke<BOOL>(0xED86C0, ped); }
static void STOP_PED_RINGTONE(Ped ped) { invoke<Void>(0xED8730, ped); }
static BOOL IS_MOBILE_PHONE_CALL_ONGOING() { return invoke<BOOL>(0xED8780); }
static BOOL IS_MOBILE_INTERFERENCE_ACTIVE() { return invoke<BOOL>(0xED87C0); }
static void CREATE_NEW_SCRIPTED_CONVERSATION() { invoke<Void>(0xED87E0); }
static void ADD_LINE_TO_CONVERSATION(int index, const char* p1, const char* p2, int p3, int p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, int p9, BOOL p10, BOOL p11, BOOL p12) { invoke<Void>(0xED8800, index, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void ADD_PED_TO_CONVERSATION(int index, Ped ped, const char* p2) { invoke<Void>(0xED88F0, index, ped, p2); }
static void SET_POSITION_FOR_NULL_CONV_PED(Any p0, float p1, float p2, float p3) { invoke<Void>(0xED8970, p0, p1, p2, p3); }
static void SET_ENTITY_FOR_NULL_CONV_PED(int p0, Entity entity) { invoke<Void>(0xED89E0, p0, entity); }
static void SET_MICROPHONE_POSITION(BOOL toggle, float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3) { invoke<Void>(0xED8A40, toggle, x1, y1, z1, x2, y2, z2, x3, y3, z3); }
static void SET_CONVERSATION_AUDIO_CONTROLLED_BY_ANIM(BOOL p0) { invoke<Void>(0xED8B30, p0); }
static void SET_CONVERSATION_AUDIO_PLACEHOLDER(BOOL p0) { invoke<Void>(0xED8B50, p0); }
static void START_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xED8B70, p0, p1); }
static void PRELOAD_SCRIPT_PHONE_CONVERSATION(BOOL p0, BOOL p1) { invoke<Void>(0xED8BC0, p0, p1); }
static void START_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xED8C10, p0, p1, p2, p3); }
static void PRELOAD_SCRIPT_CONVERSATION(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xED8C70, p0, p1, p2, p3); }
static void START_PRELOADED_CONVERSATION() { invoke<Void>(0xED8CD0); }
static BOOL GET_IS_PRELOADED_CONVERSATION_READY() { return invoke<BOOL>(0xED8CF0); }
static BOOL IS_SCRIPTED_CONVERSATION_ONGOING() { return invoke<BOOL>(0xED8D20); }
static BOOL IS_SCRIPTED_CONVERSATION_LOADED() { return invoke<BOOL>(0xED8D60); }
static int GET_CURRENT_SCRIPTED_CONVERSATION_LINE() { return invoke<int>(0xED8D90); }
static void PAUSE_SCRIPTED_CONVERSATION(BOOL p0) { invoke<Void>(0xED8DC0, p0); }
static void RESTART_SCRIPTED_CONVERSATION() { invoke<Void>(0xED8DF0); }
static int STOP_SCRIPTED_CONVERSATION(BOOL p0) { return invoke<int>(0xED8E10, p0); }
static void SKIP_TO_NEXT_SCRIPTED_CONVERSATION_LINE() { invoke<Void>(0xED8E40); }
static void INTERRUPT_CONVERSATION(Ped ped, const char* voiceline, const char* speaker) { invoke<Void>(0xED8E50, ped, voiceline, speaker); }
static void INTERRUPT_CONVERSATION_AND_PAUSE(Ped ped, const char* p1, const char* speaker) { invoke<Void>(0xED8ED0, ped, p1, speaker); }
static int GET_VARIATION_CHOSEN_FOR_SCRIPTED_LINE(Any* p0) { return invoke<int>(0xED8F50, p0); }
static void SET_NO_DUCKING_FOR_CONVERSATION(BOOL p0) { invoke<Void>(0xED8FB0, p0); }
static void REGISTER_SCRIPT_WITH_AUDIO(int p0) { invoke<Void>(0xED8FD0, p0); }
static void UNREGISTER_SCRIPT_WITH_AUDIO() { invoke<Void>(0xED8FE0); }
static BOOL REQUEST_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xED8FF0, audioBank, p1, p2); }
static BOOL REQUEST_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xED9030, audioBank, p1, p2); }
static BOOL REQUEST_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xED9070, audioBank, p1, p2); }
static BOOL HINT_MISSION_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xED90B0, audioBank, p1, p2); }
static BOOL HINT_AMBIENT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xED90D0, audioBank, p1, p2); }
static BOOL HINT_SCRIPT_AUDIO_BANK(const char* audioBank, BOOL p1, Any p2) { return invoke<BOOL>(0xED90F0, audioBank, p1, p2); }
static void RELEASE_MISSION_AUDIO_BANK() { invoke<Void>(0xED9110); }
static void RELEASE_AMBIENT_AUDIO_BANK() { invoke<Void>(0xED9120); }
static void RELEASE_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xED9130, audioBank); }
static void RELEASE_SCRIPT_AUDIO_BANK() { invoke<Void>(0xED9150); }
static void UNHINT_AMBIENT_AUDIO_BANK() { invoke<Void>(0xED9160); }
static void UNHINT_SCRIPT_AUDIO_BANK() { invoke<Void>(0xED9170); }
static void UNHINT_NAMED_SCRIPT_AUDIO_BANK(const char* audioBank) { invoke<Void>(0xED9180, audioBank); }
static int GET_SOUND_ID() { return invoke<int>(0xED91A0); }
static void RELEASE_SOUND_ID(int soundId) { invoke<Void>(0xED91D0, soundId); }
static void PLAY_SOUND(int soundId, const char* audioName, const char* audioRef, BOOL p3, Any p4, BOOL p5) { invoke<Void>(0xED91F0, soundId, audioName, audioRef, p3, p4, p5); }
static void PLAY_SOUND_FRONTEND(int soundId, const char* audioName, const char* audioRef, BOOL p3) { invoke<Void>(0xED9240, soundId, audioName, audioRef, p3); }
static void PLAY_DEFERRED_SOUND_FRONTEND(const char* soundName, const char* soundsetName) { invoke<Void>(0xED9270, soundName, soundsetName); }
static void PLAY_SOUND_FROM_ENTITY(int soundId, const char* audioName, Entity entity, const char* audioRef, BOOL isNetwork, Any p5) { invoke<Void>(0xED92D0, soundId, audioName, entity, audioRef, isNetwork, p5); }
static void PLAY_SOUND_FROM_ENTITY_HASH(int soundId, Hash model, Entity entity, Hash soundSetHash, Any p4, Any p5) { invoke<Void>(0xED9360, soundId, model, entity, soundSetHash, p4, p5); }
static void PLAY_SOUND_FROM_COORD(int soundId, const char* audioName, float x, float y, float z, const char* audioRef, BOOL isNetwork, int range, BOOL p8) { invoke<Void>(0xED93F0, soundId, audioName, x, y, z, audioRef, isNetwork, range, p8); }
static void UPDATE_SOUND_COORD(int soundId, float x, float y, float z) { invoke<Void>(0xED9480, soundId, x, y, z); }
static void STOP_SOUND(int soundId) { invoke<Void>(0xED94F0, soundId); }
static int GET_NETWORK_ID_FROM_SOUND_ID(int soundId) { return invoke<int>(0xED9510, soundId); }
static int GET_SOUND_ID_FROM_NETWORK_ID(int netId) { return invoke<int>(0xED9540, netId); }
static void SET_VARIABLE_ON_SOUND(int soundId, const char* variable, float p2) { invoke<Void>(0xED9570, soundId, variable, p2); }
static void SET_VARIABLE_ON_STREAM(const char* variable, float p1) { invoke<Void>(0xED9590, variable, p1); }
static void OVERRIDE_UNDERWATER_STREAM(const char* p0, BOOL p1) { invoke<Void>(0xED95B0, p0, p1); }
static void SET_VARIABLE_ON_UNDER_WATER_STREAM(const char* variableName, float value) { invoke<Void>(0xED95D0, variableName, value); }
static BOOL HAS_SOUND_FINISHED(int soundId) { return invoke<BOOL>(0xED95F0, soundId); }
static void PLAY_PED_AMBIENT_SPEECH_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xED9620, ped, speechName, speechParam, p3); }
static void PLAY_PED_AMBIENT_SPEECH_AND_CLONE_NATIVE(Ped ped, const char* speechName, const char* speechParam, Any p3) { invoke<Void>(0xED9640, ped, speechName, speechParam, p3); }
static void PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(Ped ped, const char* speechName, const char* voiceName, const char* speechParam, BOOL p4) { invoke<Void>(0xED9660, ped, speechName, voiceName, speechParam, p4); }
static void PLAY_AMBIENT_SPEECH_FROM_POSITION_NATIVE(const char* speechName, const char* voiceName, float x, float y, float z, const char* speechParam) { invoke<Void>(0xED9690, speechName, voiceName, x, y, z, speechParam); }
static void OVERRIDE_TREVOR_RAGE(const char* voiceEffect) { invoke<Void>(0xED9720, voiceEffect); }
static void RESET_TREVOR_RAGE() { invoke<Void>(0xED9740); }
static void SET_PLAYER_ANGRY(Ped ped, BOOL toggle) { invoke<Void>(0xED9750, ped, toggle); }
static void PLAY_PAIN(Ped ped, int painID, int p1, Any p3) { invoke<Void>(0xED97B0, ped, painID, p1, p3); }
static void RELEASE_WEAPON_AUDIO() { invoke<Void>(0xED97D0); }
static void ACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xED97E0, mode); }
static void DEACTIVATE_AUDIO_SLOWMO_MODE(const char* mode) { invoke<Void>(0xED9820, mode); }
static void SET_AMBIENT_VOICE_NAME(Ped ped, const char* name) { invoke<Void>(0xED9860, ped, name); }
static void SET_AMBIENT_VOICE_NAME_HASH(Ped ped, Hash hash) { invoke<Void>(0xED98D0, ped, hash); }
static Hash GET_AMBIENT_VOICE_NAME_HASH(Ped ped) { return invoke<Hash>(0xED9930, ped); }
static void SET_PED_VOICE_FULL(Ped ped) { invoke<Void>(0xED9990, ped); }
static void SET_PED_RACE_AND_VOICE_GROUP(Ped ped, int p1, Hash voiceGroup) { invoke<Void>(0xED99F0, ped, p1, voiceGroup); }
static void SET_PED_VOICE_GROUP(Ped ped, Hash voiceGroupHash) { invoke<Void>(0xED9A60, ped, voiceGroupHash); }
static void SET_PED_VOICE_GROUP_FROM_RACE_TO_PVG(Ped ped, Hash voiceGroupHash) { invoke<Void>(0xED9AC0, ped, voiceGroupHash); }
static void SET_PED_GENDER(Ped ped, BOOL p1) { invoke<Void>(0xED9B50, ped, p1); }
static void STOP_CURRENT_PLAYING_SPEECH(Ped ped) { invoke<Void>(0xED9BB0, ped); }
static void STOP_CURRENT_PLAYING_AMBIENT_SPEECH(Ped ped) { invoke<Void>(0xED9C00, ped); }
static BOOL IS_AMBIENT_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xED9C50, ped); }
static BOOL IS_SCRIPTED_SPEECH_PLAYING(Ped p0) { return invoke<BOOL>(0xED9CC0, p0); }
static BOOL IS_ANY_SPEECH_PLAYING(Ped ped) { return invoke<BOOL>(0xED9D30, ped); }
static BOOL IS_ANY_POSITIONAL_SPEECH_PLAYING() { return invoke<BOOL>(0xED9DC0); }
static BOOL DOES_CONTEXT_EXIST_FOR_THIS_PED(Ped ped, const char* speechName, BOOL p2) { return invoke<BOOL>(0xED9E20, ped, speechName, p2); }
static BOOL IS_PED_IN_CURRENT_CONVERSATION(Ped ped) { return invoke<BOOL>(0xED9F00, ped); }
static void SET_PED_IS_DRUNK(Ped ped, BOOL toggle) { invoke<Void>(0xED9F70, ped, toggle); }
static void PLAY_ANIMAL_VOCALIZATION(Ped pedHandle, int p1, const char* speechName) { invoke<Void>(0xED9FD0, pedHandle, p1, speechName); }
static BOOL IS_ANIMAL_VOCALIZATION_PLAYING(Ped pedHandle) { return invoke<BOOL>(0xEDA0A0, pedHandle); }
static void SET_ANIMAL_MOOD(Ped animal, int mood) { invoke<Void>(0xEDA110, animal, mood); }
static BOOL IS_MOBILE_PHONE_RADIO_ACTIVE() { return invoke<BOOL>(0xEDA170); }
static void SET_MOBILE_PHONE_RADIO_STATE(BOOL state) { invoke<Void>(0xEDA180, state); }
static int GET_PLAYER_RADIO_STATION_INDEX() { return invoke<int>(0xEDA1A0); }
static const char* GET_PLAYER_RADIO_STATION_NAME() { return invoke<const char*>(0xEDA1E0); }
static const char* GET_RADIO_STATION_NAME(int radioStation) { return invoke<const char*>(0xEDA210, radioStation); }
static int GET_PLAYER_RADIO_STATION_GENRE() { return invoke<int>(0xEDA250); }
static BOOL IS_RADIO_RETUNING() { return invoke<BOOL>(0xEDA280); }
static BOOL IS_RADIO_FADED_OUT() { return invoke<BOOL>(0xEDA2B0); }
static void SET_RADIO_RETUNE_UP() { invoke<Void>(0xEDA2E0); }
static void SET_RADIO_RETUNE_DOWN() { invoke<Void>(0xEDA300); }
static void SET_RADIO_TO_STATION_NAME(const char* stationName) { invoke<Void>(0xEDA320, stationName); }
static void SET_VEH_RADIO_STATION(Vehicle vehicle, const char* radioStation) { invoke<Void>(0xEDA340, vehicle, radioStation); }
static void SET_VEH_HAS_NORMAL_RADIO(Vehicle vehicle) { invoke<Void>(0xEDA3E0, vehicle); }
static BOOL IS_VEHICLE_RADIO_ON(Vehicle vehicle) { return invoke<BOOL>(0xEDA430, vehicle); }
static void SET_VEH_FORCED_RADIO_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0xEDA4A0, vehicle); }
static void SET_EMITTER_RADIO_STATION(const char* emitterName, const char* radioStation, Any p2) { invoke<Void>(0xEDA4F0, emitterName, radioStation, p2); }
static void SET_STATIC_EMITTER_ENABLED(const char* emitterName, BOOL toggle) { invoke<Void>(0xEDA520, emitterName, toggle); }
static void LINK_STATIC_EMITTER_TO_ENTITY(const char* emitterName, Entity entity) { invoke<Void>(0xEDA550, emitterName, entity); }
static void SET_RADIO_TO_STATION_INDEX(int radioStation) { invoke<Void>(0xEDA5B0, radioStation); }
static void SET_FRONTEND_RADIO_ACTIVE(BOOL active) { invoke<Void>(0xEDA5D0, active); }
static void UNLOCK_MISSION_NEWS_STORY(int newsStory) { invoke<Void>(0xEDA620, newsStory); }
static BOOL IS_MISSION_NEWS_STORY_UNLOCKED(int newsStory) { return invoke<BOOL>(0xEDA630, newsStory); }
static int GET_AUDIBLE_MUSIC_TRACK_TEXT_ID() { return invoke<int>(0xEDA650); }
static void PLAY_END_CREDITS_MUSIC(BOOL play) { invoke<Void>(0xEDA680, play); }
static void SKIP_RADIO_FORWARD() { invoke<Void>(0xEDA6B0); }
static void FREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xEDA6C0, radioStation); }
static void UNFREEZE_RADIO_STATION(const char* radioStation) { invoke<Void>(0xEDA700, radioStation); }
static void SET_RADIO_AUTO_UNFREEZE(BOOL toggle) { invoke<Void>(0xEDA720, toggle); }
static void SET_INITIAL_PLAYER_STATION(const char* radioStation) { invoke<Void>(0xEDA740, radioStation); }
static void SET_USER_RADIO_CONTROL_ENABLED(BOOL toggle) { invoke<Void>(0xEDA770, toggle); }
static void SET_RADIO_TRACK(const char* radioStation, const char* radioTrack) { invoke<Void>(0xEDA7C0, radioStation, radioTrack); }
static void SET_RADIO_TRACK_WITH_START_OFFSET(const char* radioStationName, const char* mixName, int p2) { invoke<Void>(0xEDA800, radioStationName, mixName, p2); }
static void SET_NEXT_RADIO_TRACK(const char* radioName, const char* radioTrack, const char* p2, const char* p3) { invoke<Void>(0xEDA840, radioName, radioTrack, p2, p3); }
static void SET_VEHICLE_RADIO_LOUD(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDA8B0, vehicle, toggle); }
static BOOL CAN_VEHICLE_RECEIVE_CB_RADIO(Vehicle vehicle) { return invoke<BOOL>(0xEDA900, vehicle); }
static void SET_MOBILE_RADIO_ENABLED_DURING_GAMEPLAY(BOOL toggle) { invoke<Void>(0xEDA980, toggle); }
static BOOL DOES_PLAYER_VEH_HAVE_RADIO() { return invoke<BOOL>(0xEDA9D0); }
static BOOL IS_PLAYER_VEH_RADIO_ENABLE() { return invoke<BOOL>(0xEDAA10); }
static void SET_VEHICLE_RADIO_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDAA50, vehicle, toggle); }
static void SET_POSITIONED_PLAYER_VEHICLE_RADIO_EMITTER_ENABLED(Any p0) { invoke<Void>(0xEDAAC0, p0); }
static void SET_CUSTOM_RADIO_TRACK_LIST(const char* radioStation, const char* trackListName, BOOL p2) { invoke<Void>(0xEDAAE0, radioStation, trackListName, p2); }
static void CLEAR_CUSTOM_RADIO_TRACK_LIST(const char* radioStation) { invoke<Void>(0xEDAB60, radioStation); }
static int GET_NUM_UNLOCKED_RADIO_STATIONS() { return invoke<int>(0xEDAB80); }
static int FIND_RADIO_STATION_INDEX(Hash stationNameHash) { return invoke<int>(0xEDAB90, stationNameHash); }
static void SET_RADIO_STATION_MUSIC_ONLY(const char* radioStation, BOOL toggle) { invoke<Void>(0xEDABD0, radioStation, toggle); }
static void SET_RADIO_FRONTEND_FADE_TIME(float fadeTime) { invoke<Void>(0xEDAC00, fadeTime); }
static void UNLOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xEDAC20, radioStation, trackListName); }
static void LOCK_RADIO_STATION_TRACK_LIST(const char* radioStation, const char* trackListName) { invoke<Void>(0xEDAC60, radioStation, trackListName); }
static void UPDATE_UNLOCKABLE_DJ_RADIO_TRACKS(BOOL enableMixes) { invoke<Void>(0xEDACD0, enableMixes); }
static void LOCK_RADIO_STATION(const char* radioStationName, BOOL toggle) { invoke<Void>(0xEDACE0, radioStationName, toggle); }
static void SET_RADIO_STATION_AS_FAVOURITE(const char* radioStation, BOOL toggle) { invoke<Void>(0xEDAD30, radioStation, toggle); }
static BOOL IS_RADIO_STATION_FAVOURITED(const char* radioStation) { return invoke<BOOL>(0xEDAD70, radioStation); }
static BOOL GET_NEXT_AUDIBLE_BEAT(float* out1, float* out2, int* out3) { return invoke<BOOL>(0xEDADB0, out1, out2, out3); }
static void FORCE_MUSIC_TRACK_LIST(const char* radioStation, const char* trackListName, int milliseconds) { invoke<Void>(0xEDADF0, radioStation, trackListName, milliseconds); }
static int GET_CURRENT_TRACK_PLAY_TIME(const char* radioStationName) { return invoke<int>(0xEDAE50, radioStationName); }
static Hash GET_CURRENT_TRACK_SOUND_NAME(const char* radioStationName) { return invoke<Hash>(0xEDAE90, radioStationName); }
static void SET_VEHICLE_MISSILE_WARNING_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDAED0, vehicle, toggle); }
static void SET_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1, BOOL p2) { invoke<Void>(0xEDAF40, zoneName, p1, p2); }
static void CLEAR_AMBIENT_ZONE_STATE(const char* zoneName, BOOL p1) { invoke<Void>(0xEDAF80, zoneName, p1); }
static void SET_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xEDAFC0, ambientZone, p1, p2); }
static void CLEAR_AMBIENT_ZONE_LIST_STATE(const char* ambientZone, BOOL p1) { invoke<Void>(0xEDB050, ambientZone, p1); }
static void SET_AMBIENT_ZONE_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xEDB0D0, ambientZone, p1, p2); }
static void SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT(const char* ambientZone, BOOL p1, BOOL p2) { invoke<Void>(0xEDB110, ambientZone, p1, p2); }
static BOOL IS_AMBIENT_ZONE_ENABLED(const char* ambientZone) { return invoke<BOOL>(0xEDB1A0, ambientZone); }
static void REFRESH_CLOSEST_OCEAN_SHORELINE() { invoke<Void>(0xEDB210); }
static void SET_CUTSCENE_AUDIO_OVERRIDE(const char* name) { invoke<Void>(0xEDB220, name); }
static void SET_VARIABLE_ON_SYNCH_SCENE_AUDIO(const char* variableName, float value) { invoke<Void>(0xEDB250, variableName, value); }
static int PLAY_POLICE_REPORT(const char* name, float p1) { return invoke<int>(0xEDB290, name, p1); }
static void CANCEL_ALL_POLICE_REPORTS() { invoke<Void>(0xEDB2C0); }
static void BLIP_SIREN(Vehicle vehicle) { invoke<Void>(0xEDB2D0, vehicle); }
static void OVERRIDE_VEH_HORN(Vehicle vehicle, BOOL override, int hornHash) { invoke<Void>(0xEDB320, vehicle, override, hornHash); }
static BOOL IS_HORN_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0xEDB3C0, vehicle); }
static void SET_AGGRESSIVE_HORNS(BOOL toggle) { invoke<Void>(0xEDB420, toggle); }
static void SET_RADIO_POSITION_AUDIO_MUTE(BOOL p0) { invoke<Void>(0xEDB440, p0); }
static void SET_VEHICLE_CONVERSATIONS_PERSIST(BOOL p0, BOOL p1) { invoke<Void>(0xEDB450, p0, p1); }
static void SET_VEHICLE_CONVERSATIONS_PERSIST_NEW(BOOL p0, BOOL p1, BOOL p2) { invoke<Void>(0xEDB480, p0, p1, p2); }
static BOOL IS_STREAM_PLAYING() { return invoke<BOOL>(0xEDB4B0); }
static int GET_STREAM_PLAY_TIME() { return invoke<int>(0xEDB4E0); }
static BOOL LOAD_STREAM(const char* streamName, const char* soundSet) { return invoke<BOOL>(0xEDB510, streamName, soundSet); }
static BOOL LOAD_STREAM_WITH_START_OFFSET(const char* streamName, int startOffset, const char* soundSet) { return invoke<BOOL>(0xEDB550, streamName, startOffset, soundSet); }
static void PLAY_STREAM_FROM_PED(Ped ped) { invoke<Void>(0xEDB590, ped); }
static void PLAY_STREAM_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xEDB5E0, vehicle); }
static void PLAY_STREAM_FROM_OBJECT(Object object) { invoke<Void>(0xEDB630, object); }
static void PLAY_STREAM_FRONTEND() { invoke<Void>(0xEDB680); }
static void PLAY_STREAM_FROM_POSITION(float x, float y, float z) { invoke<Void>(0xEDB690, x, y, z); }
static void STOP_STREAM() { invoke<Void>(0xEDB6F0); }
static void STOP_PED_SPEAKING(Ped ped, BOOL shaking) { invoke<Void>(0xEDB700, ped, shaking); }
static void BLOCK_ALL_SPEECH_FROM_PED(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xEDB760, ped, p1, p2); }
static void STOP_PED_SPEAKING_SYNCED(Ped ped, BOOL p1) { invoke<Void>(0xEDB7D0, ped, p1); }
static void DISABLE_PED_PAIN_AUDIO(Ped ped, BOOL toggle) { invoke<Void>(0xEDB830, ped, toggle); }
static BOOL IS_AMBIENT_SPEECH_DISABLED(Ped ped) { return invoke<BOOL>(0xEDB890, ped); }
static void BLOCK_SPEECH_CONTEXT_GROUP(const char* p0, int p1) { invoke<Void>(0xEDB910, p0, p1); }
static void UNBLOCK_SPEECH_CONTEXT_GROUP(const char* p0) { invoke<Void>(0xEDB950, p0); }
static void SET_SIREN_WITH_NO_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDB960, vehicle, toggle); }
static void SET_SIREN_BYPASS_MP_DRIVER_CHECK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDB9D0, vehicle, toggle); }
static void TRIGGER_SIREN_AUDIO(Vehicle vehicle) { invoke<Void>(0xEDBA40, vehicle); }
static void SET_HORN_PERMANENTLY_ON(Vehicle vehicle) { invoke<Void>(0xEDBAB0, vehicle); }
static void SET_HORN_ENABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDBB10, vehicle, toggle); }
static void SET_AUDIO_VEHICLE_PRIORITY(Vehicle vehicle, Any p1) { invoke<Void>(0xEDBBA0, vehicle, p1); }
static void SET_HORN_PERMANENTLY_ON_TIME(Vehicle vehicle, float time) { invoke<Void>(0xEDBC00, vehicle, time); }
static void USE_SIREN_AS_HORN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDBC80, vehicle, toggle); }
static void FORCE_USE_AUDIO_GAME_OBJECT(Vehicle vehicle, const char* audioName) { invoke<Void>(0xEDBD10, vehicle, audioName); }
static void PRELOAD_VEHICLE_AUDIO_BANK(Hash vehicleModel) { invoke<Void>(0xEDBD70, vehicleModel); }
static void SET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle, const char* p1, const char* p2) { invoke<Void>(0xEDBD90, vehicle, p1, p2); }
static void RESET_VEHICLE_STARTUP_REV_SOUND(Vehicle vehicle) { invoke<Void>(0xEDBDB0, vehicle); }
static void SET_VEHICLE_FORCE_REVERSE_WARNING(Any p0, Any p1) { invoke<Void>(0xEDBE10, p0, p1); }
static BOOL IS_VEHICLE_AUDIBLY_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0xEDBE80, vehicle); }
static void SET_VEHICLE_AUDIO_ENGINE_DAMAGE_FACTOR(Vehicle vehicle, float damageFactor) { invoke<Void>(0xEDBF00, vehicle, damageFactor); }
static void SET_VEHICLE_AUDIO_BODY_DAMAGE_FACTOR(Vehicle vehicle, float intensity) { invoke<Void>(0xEDBF60, vehicle, intensity); }
static void ENABLE_VEHICLE_FANBELT_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDBFC0, vehicle, toggle); }
static void ENABLE_VEHICLE_EXHAUST_POPS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDC040, vehicle, toggle); }
static void SET_VEHICLE_BOOST_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDC0D0, vehicle, toggle); }
static void SET_PLAYER_VEHICLE_ALARM_AUDIO_ACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDC160, vehicle, toggle); }
static void SET_SCRIPT_UPDATE_DOOR_AUDIO(Hash doorHash, BOOL toggle) { invoke<Void>(0xEDC1D0, doorHash, toggle); }
static void PLAY_VEHICLE_DOOR_OPEN_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xEDC220, vehicle, doorId); }
static void PLAY_VEHICLE_DOOR_CLOSE_SOUND(Vehicle vehicle, int doorId) { invoke<Void>(0xEDC2B0, vehicle, doorId); }
static void ENABLE_STALL_WARNING_SOUNDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xEDC340, vehicle, toggle); }
static BOOL IS_GAME_IN_CONTROL_OF_MUSIC() { return invoke<BOOL>(0xEDC3B0); }
static void SET_GPS_ACTIVE(BOOL active) { invoke<Void>(0xEDC3E0, active); }
static void PLAY_MISSION_COMPLETE_AUDIO(const char* audioName) { invoke<Void>(0xEDC400, audioName); }
static BOOL IS_MISSION_COMPLETE_PLAYING() { return invoke<BOOL>(0xEDC420); }
static BOOL IS_MISSION_COMPLETE_READY_FOR_UI() { return invoke<BOOL>(0xEDC450); }
static void BLOCK_DEATH_JINGLE(BOOL toggle) { invoke<Void>(0xEDC470, toggle); }
static BOOL START_AUDIO_SCENE(const char* scene) { return invoke<BOOL>(0xEDC490, scene); }
static void STOP_AUDIO_SCENE(const char* scene) { invoke<Void>(0xEDC4D0, scene); }
static void STOP_AUDIO_SCENES() { invoke<Void>(0xEDC500); }
static BOOL IS_AUDIO_SCENE_ACTIVE(const char* scene) { return invoke<BOOL>(0xEDC510, scene); }
static void SET_AUDIO_SCENE_VARIABLE(const char* scene, const char* variable, float value) { invoke<Void>(0xEDC550, scene, variable, value); }
static void SET_AUDIO_SCRIPT_CLEANUP_TIME(int time) { invoke<Void>(0xEDC570, time); }
static void ADD_ENTITY_TO_AUDIO_MIX_GROUP(Entity entity, const char* groupName, float p2) { invoke<Void>(0xEDC590, entity, groupName, p2); }
static void REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(Entity entity, float p1) { invoke<Void>(0xEDC620, entity, p1); }
static BOOL AUDIO_IS_MUSIC_PLAYING() { return invoke<BOOL>(0xEDC6A0); }
static BOOL AUDIO_IS_SCRIPTED_MUSIC_PLAYING() { return invoke<BOOL>(0xEDC6D0); }
static BOOL PREPARE_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xEDC700, eventName); }
static BOOL CANCEL_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xEDC770, eventName); }
static BOOL TRIGGER_MUSIC_EVENT(const char* eventName) { return invoke<BOOL>(0xEDC7B0, eventName); }
static BOOL IS_MUSIC_ONESHOT_PLAYING() { return invoke<BOOL>(0xEDC7F0); }
static int GET_MUSIC_PLAYTIME() { return invoke<int>(0xEDC810); }
static void SET_GLOBAL_RADIO_SIGNAL_LEVEL(Any p0) { invoke<Void>(0xEDC830, p0); }
static void RECORD_BROKEN_GLASS(float x, float y, float z, float radius) { invoke<Void>(0xEDC850, x, y, z, radius); }
static void CLEAR_ALL_BROKEN_GLASS() { invoke<Void>(0xEDC8B0); }
static void SCRIPT_OVERRIDES_WIND_ELEVATION(BOOL p0, Any p1) { invoke<Void>(0xEDC8D0, p0, p1); }
static void SET_PED_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xEDC930, p0, p1); }
static void SET_PED_INTERIOR_WALLA_DENSITY(float p0, float p1) { invoke<Void>(0xEDC950, p0, p1); }
static void FORCE_PED_PANIC_WALLA() { invoke<Void>(0xEDC970); }
static BOOL PREPARE_ALARM(const char* alarmName) { return invoke<BOOL>(0xEDC980, alarmName); }
static void START_ALARM(const char* alarmName, BOOL p2) { invoke<Void>(0xEDC9B0, alarmName, p2); }
static void STOP_ALARM(const char* alarmName, BOOL toggle) { invoke<Void>(0xEDC9D0, alarmName, toggle); }
static void STOP_ALL_ALARMS(BOOL stop) { invoke<Void>(0xEDC9F0, stop); }
static BOOL IS_ALARM_PLAYING(const char* alarmName) { return invoke<BOOL>(0xEDCA10, alarmName); }
static Hash GET_VEHICLE_DEFAULT_HORN(Vehicle vehicle) { return invoke<Hash>(0xEDCA70, vehicle); }
static Hash GET_VEHICLE_DEFAULT_HORN_IGNORE_MODS(Vehicle vehicle) { return invoke<Hash>(0xEDCAE0, vehicle); }
static void RESET_PED_AUDIO_FLAGS(Ped ped) { invoke<Void>(0xEDCB50, ped); }
static void SET_PED_FOOTSTEPS_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xEDCBA0, ped, toggle); }
static void SET_PED_CLOTH_EVENTS_ENABLED(Ped ped, BOOL toggle) { invoke<Void>(0xEDCBF0, ped, toggle); }
static void OVERRIDE_PLAYER_GROUND_MATERIAL(Hash hash, BOOL toggle) { invoke<Void>(0xEDCC40, hash, toggle); }
static void USE_FOOTSTEP_SCRIPT_SWEETENERS(Ped ped, BOOL p1, Hash hash) { invoke<Void>(0xEDCCB0, ped, p1, hash); }
static void OVERRIDE_MICROPHONE_SETTINGS(Hash hash, BOOL toggle) { invoke<Void>(0xEDCD40, hash, toggle); }
static void FREEZE_MICROPHONE() { invoke<Void>(0xEDCDB0); }
static void DISTANT_COP_CAR_SIRENS(BOOL value) { invoke<Void>(0xEDCDF0, value); }
static void SET_SIREN_CAN_BE_CONTROLLED_BY_AUDIO(Vehicle vehicle, BOOL p1) { invoke<Void>(0xEDCE90, vehicle, p1); }
static void ENABLE_STUNT_JUMP_AUDIO() { invoke<Void>(0xEDCF60); }
static void SET_AUDIO_FLAG(const char* flagName, BOOL toggle) { invoke<Void>(0xEDCFE0, flagName, toggle); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT(const char* audioEvent, Any p1) { return invoke<BOOL>(0xEDD040, audioEvent, p1); }
static BOOL PREPARE_SYNCHRONIZED_AUDIO_EVENT_FOR_SCENE(int sceneID, const char* audioEvent) { return invoke<BOOL>(0xEDD070, sceneID, audioEvent); }
static BOOL PLAY_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xEDD0C0, sceneID); }
static BOOL STOP_SYNCHRONIZED_AUDIO_EVENT(int sceneID) { return invoke<BOOL>(0xEDD100, sceneID); }
static void INIT_SYNCH_SCENE_AUDIO_WITH_POSITION(const char* audioEvent, float x, float y, float z) { invoke<Void>(0xEDD140, audioEvent, x, y, z); }
static void INIT_SYNCH_SCENE_AUDIO_WITH_ENTITY(const char* audioEvent, Entity entity) { invoke<Void>(0xEDD1B0, audioEvent, entity); }
static void SET_AUDIO_SPECIAL_EFFECT_MODE(int mode) { invoke<Void>(0xEDD230, mode); }
static void SET_PORTAL_SETTINGS_OVERRIDE(const char* p0, const char* p1) { invoke<Void>(0xEDD2B0, p0, p1); }
static void REMOVE_PORTAL_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xEDD2C0, p0); }
static void STOP_SMOKE_GRENADE_EXPLOSION_SOUNDS() { invoke<Void>(0xEDD2D0); }
static int GET_MUSIC_VOL_SLIDER() { return invoke<int>(0xEDD2E0); }
static void REQUEST_TENNIS_BANKS(Ped ped) { invoke<Void>(0xEDD310, ped); }
static void UNREQUEST_TENNIS_BANKS() { invoke<Void>(0xEDD360); }
static void SET_SKIP_MINIGUN_SPIN_UP_AUDIO(BOOL p0) { invoke<Void>(0xEDD370, p0); }
static void STOP_CUTSCENE_AUDIO() { invoke<Void>(0xEDD390); }
static BOOL HAS_LOADED_MP_DATA_SET() { return invoke<BOOL>(0xEDD3A0); }
static BOOL HAS_LOADED_SP_DATA_SET() { return invoke<BOOL>(0xEDD3C0); }
static int GET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle) { return invoke<int>(0xEDD3E0, vehicle); }
static void SET_VEHICLE_HORN_SOUND_INDEX(Vehicle vehicle, int value) { invoke<Void>(0xEDD440, vehicle, value); }
static void ADD_SCRIPT_TO_RANDOM_PED(const char* name, Hash model, float p2, float p3) { invoke<Void>(0xEDDBA0, name, model, p2, p3); }
static void REGISTER_OBJECT_SCRIPT_BRAIN(const char* scriptName, Hash modelHash, int p2, float activationRange, int p4, int p5) { invoke<Void>(0xEDDC80, scriptName, modelHash, p2, activationRange, p4, p5); }
static BOOL IS_OBJECT_WITHIN_BRAIN_ACTIVATION_RANGE(Object object) { return invoke<BOOL>(0xEDDD50, object); }
static void REGISTER_WORLD_POINT_SCRIPT_BRAIN(const char* scriptName, float activationRange, int p2) { invoke<Void>(0xEDDE00, scriptName, activationRange, p2); }
static BOOL IS_WORLD_POINT_WITHIN_BRAIN_ACTIVATION_RANGE() { return invoke<BOOL>(0xEDDEB0); }
static void ENABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xEDDED0, brainSet); }
static void DISABLE_SCRIPT_BRAIN_SET(int brainSet) { invoke<Void>(0xEDDEF0, brainSet); }
static void REACTIVATE_ALL_WORLD_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xEDDF10); }
static void REACTIVATE_ALL_OBJECT_BRAINS_THAT_ARE_WAITING_TILL_OUT_OF_RANGE() { invoke<Void>(0xEDDF20); }
static void REACTIVATE_NAMED_WORLD_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xEDDF30, scriptName); }
static void REACTIVATE_NAMED_OBJECT_BRAINS_WAITING_TILL_OUT_OF_RANGE(const char* scriptName) { invoke<Void>(0xEDDF40, scriptName); }
static void RENDER_SCRIPT_CAMS(BOOL render, BOOL ease, int easeTime, BOOL p3, BOOL p4, Any p5) { invoke<Void>(0xEE6060, render, ease, easeTime, p3, p4, p5); }
static void STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(BOOL render, float p1, int p2, Any p3) { invoke<Void>(0xEE6110, render, p1, p2, p3); }
static Cam CREATE_CAM(const char* camName, BOOL p1) { return invoke<Cam>(0xEE6190, camName, p1); }
static Cam CREATE_CAM_WITH_PARAMS(const char* camName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, int p9) { return invoke<Cam>(0xEE6210, camName, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static Cam CREATE_CAMERA(Hash camHash, BOOL p1) { return invoke<Cam>(0xEE6370, camHash, p1); }
static Cam CREATE_CAMERA_WITH_PARAMS(Hash camHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fov, BOOL p8, Any p9) { return invoke<Cam>(0xEE63F0, camHash, posX, posY, posZ, rotX, rotY, rotZ, fov, p8, p9); }
static void DESTROY_CAM(Cam cam, BOOL bScriptHostCam) { invoke<Void>(0xEE6550, cam, bScriptHostCam); }
static void DESTROY_ALL_CAMS(BOOL bScriptHostCam) { invoke<Void>(0xEE65B0, bScriptHostCam); }
static BOOL DOES_CAM_EXIST(Cam cam) { return invoke<BOOL>(0xEE65F0, cam); }
static void SET_CAM_ACTIVE(Cam cam, BOOL active) { invoke<Void>(0xEE6630, cam, active); }
static BOOL IS_CAM_ACTIVE(Cam cam) { return invoke<BOOL>(0xEE66A0, cam); }
static BOOL IS_CAM_RENDERING(Cam cam) { return invoke<BOOL>(0xEE66F0, cam); }
static Cam GET_RENDERING_CAM() { return invoke<Cam>(0xEE6760); }
static Vector3 GET_CAM_COORD(Cam cam) { return invoke<Vector3>(0xEE67B0, cam); }
static Vector3 GET_CAM_ROT(Cam cam, int rotationOrder) { return invoke<Vector3>(0xEE6850, cam, rotationOrder); }
static float GET_CAM_FOV(Cam cam) { return invoke<float>(0xEE6930, cam); }
static float GET_CAM_NEAR_CLIP(Cam cam) { return invoke<float>(0xEE6990, cam); }
static float GET_CAM_FAR_CLIP(Cam cam) { return invoke<float>(0xEE69F0, cam); }
static float GET_CAM_NEAR_DOF(Cam cam) { return invoke<float>(0xEE6A50, cam); }
static float GET_CAM_FAR_DOF(Cam cam) { return invoke<float>(0xEE6AB0, cam); }
static float GET_CAM_DOF_STRENGTH(Cam cam) { return invoke<float>(0xEE6B10, cam); }
static void SET_CAM_PARAMS(Cam cam, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float fieldOfView, Any p8, int p9, int p10, int p11) { invoke<Void>(0xEE6B70, cam, posX, posY, posZ, rotX, rotY, rotZ, fieldOfView, p8, p9, p10, p11); }
static void SET_CAM_COORD(Cam cam, float posX, float posY, float posZ) { invoke<Void>(0xEE6BB0, cam, posX, posY, posZ); }
static void SET_CAM_ROT(Cam cam, float rotX, float rotY, float rotZ, int rotationOrder) { invoke<Void>(0xEE6C50, cam, rotX, rotY, rotZ, rotationOrder); }
static void SET_CAM_FOV(Cam cam, float fieldOfView) { invoke<Void>(0xEE6C70, cam, fieldOfView); }
static void SET_CAM_NEAR_CLIP(Cam cam, float nearClip) { invoke<Void>(0xEE6D20, cam, nearClip); }
static void SET_CAM_FAR_CLIP(Cam cam, float farClip) { invoke<Void>(0xEE6D90, cam, farClip); }
static void FORCE_CAM_FAR_CLIP(Cam cam, float p1) { invoke<Void>(0xEE6E10, cam, p1); }
static void SET_CAM_MOTION_BLUR_STRENGTH(Cam cam, float strength) { invoke<Void>(0xEE6EB0, cam, strength); }
static void SET_CAM_NEAR_DOF(Cam cam, float nearDOF) { invoke<Void>(0xEE6F30, cam, nearDOF); }
static void SET_CAM_FAR_DOF(Cam cam, float farDOF) { invoke<Void>(0xEE6FA0, cam, farDOF); }
static void SET_CAM_DOF_STRENGTH(Cam cam, float dofStrength) { invoke<Void>(0xEE7010, cam, dofStrength); }
static void SET_CAM_DOF_PLANES(Cam cam, float p1, float p2, float p3, float p4) { invoke<Void>(0xEE7090, cam, p1, p2, p3, p4); }
static void SET_CAM_USE_SHALLOW_DOF_MODE(Cam cam, BOOL toggle) { invoke<Void>(0xEE7140, cam, toggle); }
static void SET_USE_HI_DOF() { invoke<Void>(0xEE71B0); }
static void SET_USE_HI_DOF_ON_SYNCED_SCENE_THIS_UPDATE() { invoke<Void>(0xEE71D0); }
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xEE71F0, camera, p1); }
static void SET_CAM_DOF_OVERRIDDEN_FOCUS_DISTANCE_BLEND_LEVEL(Any p0, float p1) { invoke<Void>(0xEE72B0, p0, p1); }
static void SET_CAM_DOF_FNUMBER_OF_LENS(Cam camera, float p1) { invoke<Void>(0xEE7370, camera, p1); }
static void SET_CAM_DOF_FOCAL_LENGTH_MULTIPLIER(Cam camera, float multiplier) { invoke<Void>(0xEE7430, camera, multiplier); }
static void SET_CAM_DOF_FOCUS_DISTANCE_BIAS(Cam camera, float p1) { invoke<Void>(0xEE74F0, camera, p1); }
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE(Cam camera, float p1) { invoke<Void>(0xEE75B0, camera, p1); }
static void SET_CAM_DOF_MAX_NEAR_IN_FOCUS_DISTANCE_BLEND_LEVEL(Cam camera, float p1) { invoke<Void>(0xEE7660, camera, p1); }
static void ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xEE7710, cam, entity, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL heading) { invoke<Void>(0xEE7730, cam, ped, boneIndex, x, y, z, heading); }
static void HARD_ATTACH_CAM_TO_PED_BONE(Cam cam, Ped ped, int boneIndex, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9) { invoke<Void>(0xEE7750, cam, ped, boneIndex, p3, p4, p5, p6, p7, p8, p9); }
static void HARD_ATTACH_CAM_TO_ENTITY(Cam cam, Entity entity, float xRot, float yRot, float zRot, float xOffset, float yOffset, float zOffset, BOOL isRelative) { invoke<Void>(0xEE7780, cam, entity, xRot, yRot, zRot, xOffset, yOffset, zOffset, isRelative); }
static void ATTACH_CAM_TO_VEHICLE_BONE(Cam cam, Vehicle vehicle, int boneIndex, BOOL relativeRotation, float rotX, float rotY, float rotZ, float offsetX, float offsetY, float offsetZ, BOOL fixedDirection) { invoke<Void>(0xEE77B0, cam, vehicle, boneIndex, relativeRotation, rotX, rotY, rotZ, offsetX, offsetY, offsetZ, fixedDirection); }
static void DETACH_CAM(Cam cam) { invoke<Void>(0xEE7800, cam); }
static void SET_CAM_INHERIT_ROLL_VEHICLE(Cam cam, BOOL p1) { invoke<Void>(0xEE7870, cam, p1); }
static void POINT_CAM_AT_COORD(Cam cam, float x, float y, float z) { invoke<Void>(0xEE7880, cam, x, y, z); }
static void POINT_CAM_AT_ENTITY(Cam cam, Entity entity, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xEE7930, cam, entity, p2, p3, p4, p5); }
static void POINT_CAM_AT_PED_BONE(Cam cam, Ped ped, int boneIndex, float x, float y, float z, BOOL p6) { invoke<Void>(0xEE7950, cam, ped, boneIndex, x, y, z, p6); }
static void STOP_CAM_POINTING(Cam cam) { invoke<Void>(0xEE7970, cam); }
static void SET_CAM_AFFECTS_AIMING(Cam cam, BOOL toggle) { invoke<Void>(0xEE79E0, cam, toggle); }
static void SET_CAM_CONTROLS_MINI_MAP_HEADING(Cam cam, BOOL toggle) { invoke<Void>(0xEE7A60, cam, toggle); }
static void SET_CAM_IS_INSIDE_VEHICLE(Cam cam, BOOL toggle) { invoke<Void>(0xEE7B00, cam, toggle); }
static void ALLOW_MOTION_BLUR_DECAY(Any p0, BOOL p1) { invoke<Void>(0xEE7B80, p0, p1); }
static void SET_CAM_DEBUG_NAME(Cam camera, const char* name) { invoke<Void>(0xEE7C00, camera, name); }
static Cam GET_DEBUG_CAM() { return invoke<Cam>(0xEE7C10); }
static void ADD_CAM_SPLINE_NODE(Cam camera, float x, float y, float z, float xRot, float yRot, float zRot, int length, int smoothingStyle, int rotationOrder) { invoke<Void>(0xEE7C30, camera, x, y, z, xRot, yRot, zRot, length, smoothingStyle, rotationOrder); }
static void ADD_CAM_SPLINE_NODE_USING_CAMERA_FRAME(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xEE7C50, cam, cam2, length, p3); }
static void ADD_CAM_SPLINE_NODE_USING_CAMERA(Cam cam, Cam cam2, int length, int p3) { invoke<Void>(0xEE7C70, cam, cam2, length, p3); }
static void ADD_CAM_SPLINE_NODE_USING_GAMEPLAY_FRAME(Cam cam, int length, int p2) { invoke<Void>(0xEE7C90, cam, length, p2); }
static void SET_CAM_SPLINE_PHASE(Cam cam, float p1) { invoke<Void>(0xEE7D20, cam, p1); }
static float GET_CAM_SPLINE_PHASE(Cam cam) { return invoke<float>(0xEE7DB0, cam); }
static float GET_CAM_SPLINE_NODE_PHASE(Cam cam) { return invoke<float>(0xEE7E40, cam); }
static void SET_CAM_SPLINE_DURATION(Cam cam, int timeDuration) { invoke<Void>(0xEE7ED0, cam, timeDuration); }
static void SET_CAM_SPLINE_SMOOTHING_STYLE(Cam cam, int smoothingStyle) { invoke<Void>(0xEE7F40, cam, smoothingStyle); }
static int GET_CAM_SPLINE_NODE_INDEX(Cam cam) { return invoke<int>(0xEE7FB0, cam); }
static void SET_CAM_SPLINE_NODE_EASE(Cam cam, int easingFunction, int p2, float p3) { invoke<Void>(0xEE8030, cam, easingFunction, p2, p3); }
static void SET_CAM_SPLINE_NODE_VELOCITY_SCALE(Cam cam, int p1, float scale) { invoke<Void>(0xEE80E0, cam, p1, scale); }
static void OVERRIDE_CAM_SPLINE_VELOCITY(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xEE81A0, cam, p1, p2, p3); }
static void OVERRIDE_CAM_SPLINE_MOTION_BLUR(Cam cam, int p1, float p2, float p3) { invoke<Void>(0xEE8260, cam, p1, p2, p3); }
static void SET_CAM_SPLINE_NODE_EXTRA_FLAGS(Cam cam, int p1, int flags) { invoke<Void>(0xEE8320, cam, p1, flags); }
static BOOL IS_CAM_SPLINE_PAUSED(Cam cam) { return invoke<BOOL>(0xEE8340, cam); }
static void SET_CAM_ACTIVE_WITH_INTERP(Cam camTo, Cam camFrom, int duration, int easeLocation, int easeRotation) { invoke<Void>(0xEE83C0, camTo, camFrom, duration, easeLocation, easeRotation); }
static BOOL IS_CAM_INTERPOLATING(Cam cam) { return invoke<BOOL>(0xEE83E0, cam); }
static void SHAKE_CAM(Cam cam, const char* type, float amplitude) { invoke<Void>(0xEE8470, cam, type, amplitude); }
static void ANIMATED_SHAKE_CAM(Cam cam, const char* p1, const char* p2, const char* p3, float amplitude) { invoke<Void>(0xEE8500, cam, p1, p2, p3, amplitude); }
static BOOL IS_CAM_SHAKING(Cam cam) { return invoke<BOOL>(0xEE85A0, cam); }
static void SET_CAM_SHAKE_AMPLITUDE(Cam cam, float amplitude) { invoke<Void>(0xEE8610, cam, amplitude); }
static void STOP_CAM_SHAKING(Cam cam, BOOL p1) { invoke<Void>(0xEE8680, cam, p1); }
static void SHAKE_SCRIPT_GLOBAL(const char* p0, float p1) { invoke<Void>(0xEE86F0, p0, p1); }
static void ANIMATED_SHAKE_SCRIPT_GLOBAL(const char* p0, const char* p1, const char* p2, float p3) { invoke<Void>(0xEE8730, p0, p1, p2, p3); }
static BOOL IS_SCRIPT_GLOBAL_SHAKING() { return invoke<BOOL>(0xEE8780); }
static void STOP_SCRIPT_GLOBAL_SHAKING(BOOL p0) { invoke<Void>(0xEE87B0, p0); }
static void TRIGGER_VEHICLE_PART_BROKEN_CAMERA_SHAKE(Vehicle vehicle, int p1, float p2) { invoke<Void>(0xEE87E0, vehicle, p1, p2); }
static BOOL PLAY_CAM_ANIM(Cam cam, const char* animName, const char* animDictionary, float x, float y, float z, float xRot, float yRot, float zRot, BOOL p9, int p10) { return invoke<BOOL>(0xEE8870, cam, animName, animDictionary, x, y, z, xRot, yRot, zRot, p9, p10); }
static BOOL IS_CAM_PLAYING_ANIM(Cam cam, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xEE88B0, cam, animName, animDictionary); }
static void SET_CAM_ANIM_CURRENT_PHASE(Cam cam, float phase) { invoke<Void>(0xEE8960, cam, phase); }
static float GET_CAM_ANIM_CURRENT_PHASE(Cam cam) { return invoke<float>(0xEE89D0, cam); }
static BOOL PLAY_SYNCHRONIZED_CAM_ANIM(Any p0, Any p1, const char* animName, const char* animDictionary) { return invoke<BOOL>(0xEE8A20, p0, p1, animName, animDictionary); }
static void SET_FLY_CAM_HORIZONTAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xEE8A50, cam, p1, p2, p3); }
static void SET_FLY_CAM_VERTICAL_RESPONSE(Cam cam, float p1, float p2, float p3) { invoke<Void>(0xEE8B00, cam, p1, p2, p3); }
static void SET_FLY_CAM_MAX_HEIGHT(Cam cam, float height) { invoke<Void>(0xEE8BB0, cam, height); }
static void SET_FLY_CAM_COORD_AND_CONSTRAIN(Cam cam, float x, float y, float z) { invoke<Void>(0xEE8C30, cam, x, y, z); }
static void SET_FLY_CAM_VERTICAL_CONTROLS_THIS_UPDATE(Cam cam) { invoke<Void>(0xEE8CD0, cam); }
static BOOL WAS_FLY_CAM_CONSTRAINED_ON_PREVIOUS_UDPATE(Cam cam) { return invoke<BOOL>(0xEE8D40, cam); }
static BOOL IS_SCREEN_FADED_OUT() { return invoke<BOOL>(0xEE8DC0); }
static BOOL IS_SCREEN_FADED_IN() { return invoke<BOOL>(0xEE8DE0); }
static BOOL IS_SCREEN_FADING_OUT() { return invoke<BOOL>(0xEE8E00); }
static BOOL IS_SCREEN_FADING_IN() { return invoke<BOOL>(0xEE8E20); }
static void DO_SCREEN_FADE_IN(int duration) { invoke<Void>(0xEE8E40, duration); }
static void DO_SCREEN_FADE_OUT(int duration) { invoke<Void>(0xEE8E50, duration); }
static void SET_WIDESCREEN_BORDERS(BOOL p0, int p1) { invoke<Void>(0xEE8E60, p0, p1); }
static BOOL ARE_WIDESCREEN_BORDERS_ACTIVE() { return invoke<BOOL>(0xEE8E80); }
static Vector3 GET_GAMEPLAY_CAM_COORD() { return invoke<Vector3>(0xEE8EA0); }
static Vector3 GET_GAMEPLAY_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xEE8EE0, rotationOrder); }
static float GET_GAMEPLAY_CAM_FOV() { return invoke<float>(0xEE8F80); }
static void SET_GAMEPLAY_CAM_MOTION_BLUR_SCALING_THIS_UPDATE(float p0) { invoke<Void>(0xEE8FB0, p0); }
static void SET_GAMEPLAY_CAM_MAX_MOTION_BLUR_STRENGTH_THIS_UPDATE(float p0) { invoke<Void>(0xEE8FF0, p0); }
static float GET_GAMEPLAY_CAM_RELATIVE_HEADING() { return invoke<float>(0xEE9040); }
static void SET_GAMEPLAY_CAM_RELATIVE_HEADING(float heading) { invoke<Void>(0xEE9070, heading); }
static float GET_GAMEPLAY_CAM_RELATIVE_PITCH() { return invoke<float>(0xEE9080); }
static void SET_GAMEPLAY_CAM_RELATIVE_PITCH(float angle, float scalingFactor) { invoke<Void>(0xEE90B0, angle, scalingFactor); }
static void RESET_GAMEPLAY_CAM_FULL_ATTACH_PARENT_TRANSFORM_TIMER() { invoke<Void>(0xEE9120); }
static void FORCE_CAMERA_RELATIVE_HEADING_AND_PITCH(float roll, float pitch, float yaw) { invoke<Void>(0xEE9150, roll, pitch, yaw); }
static void FORCE_BONNET_CAMERA_RELATIVE_HEADING_AND_PITCH(float p0, float p1) { invoke<Void>(0xEE9170, p0, p1); }
static void SET_FIRST_PERSON_SHOOTER_CAMERA_HEADING(float yaw) { invoke<Void>(0xEE9290, yaw); }
static void SET_FIRST_PERSON_SHOOTER_CAMERA_PITCH(float pitch) { invoke<Void>(0xEE92D0, pitch); }
static void SET_SCRIPTED_CAMERA_IS_FIRST_PERSON_THIS_FRAME(BOOL p0) { invoke<Void>(0xEE9330, p0); }
static void SHAKE_GAMEPLAY_CAM(const char* shakeName, float intensity) { invoke<Void>(0xEE9350, shakeName, intensity); }
static BOOL IS_GAMEPLAY_CAM_SHAKING() { return invoke<BOOL>(0xEE9390); }
static void SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(float amplitude) { invoke<Void>(0xEE93C0, amplitude); }
static void STOP_GAMEPLAY_CAM_SHAKING(BOOL p0) { invoke<Void>(0xEE93F0, p0); }
static void SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(Ped ped) { invoke<Void>(0xEE9420, ped); }
static BOOL IS_GAMEPLAY_CAM_RENDERING() { return invoke<BOOL>(0xEE9490); }
static BOOL IS_INTERPOLATING_FROM_SCRIPT_CAMS() { return invoke<BOOL>(0xEE94C0); }
static BOOL IS_INTERPOLATING_TO_SCRIPT_CAMS() { return invoke<BOOL>(0xEE9500); }
static void SET_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_STATE(BOOL p0) { invoke<Void>(0xEE9540, p0); }
static void DISABLE_GAMEPLAY_CAM_ALTITUDE_FOV_SCALING_THIS_UPDATE() { invoke<Void>(0xEE9570); }
static BOOL IS_GAMEPLAY_CAM_LOOKING_BEHIND() { return invoke<BOOL>(0xEE9590); }
static void SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(Entity entity) { invoke<Void>(0xEE95C0, entity); }
static void DISABLE_CAM_COLLISION_FOR_OBJECT(Entity entity) { invoke<Void>(0xEE9630, entity); }
static void BYPASS_CAMERA_COLLISION_BUOYANCY_TEST_THIS_UPDATE() { invoke<Void>(0xEE9690); }
static void SET_GAMEPLAY_CAM_ENTITY_TO_LIMIT_FOCUS_OVER_BOUNDING_SPHERE_THIS_UPDATE(Entity entity) { invoke<Void>(0xEE96C0, entity); }
static void DISABLE_FIRST_PERSON_CAMERA_WATER_CLIPPING_TEST_THIS_UPDATE() { invoke<Void>(0xEE9730); }
static void SET_FOLLOW_CAM_IGNORE_ATTACH_PARENT_MOVEMENT_THIS_UPDATE() { invoke<Void>(0xEE9750); }
static BOOL IS_SPHERE_VISIBLE(float x, float y, float z, float radius) { return invoke<BOOL>(0xEE9770, x, y, z, radius); }
static BOOL IS_FOLLOW_PED_CAM_ACTIVE() { return invoke<BOOL>(0xEE97E0); }
static BOOL SET_FOLLOW_PED_CAM_THIS_UPDATE(const char* camName, int p1) { return invoke<BOOL>(0xEE9810, camName, p1); }
static void USE_SCRIPT_CAM_FOR_AMBIENT_POPULATION_ORIGIN_THIS_FRAME(BOOL p0, BOOL p1) { invoke<Void>(0xEE98A0, p0, p1); }
static void SET_FOLLOW_PED_CAM_LADDER_ALIGN_THIS_UPDATE() { invoke<Void>(0xEE98F0); }
static void SET_THIRD_PERSON_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xEE9920, minimum, maximum); }
static void SET_THIRD_PERSON_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float minimum, float maximum) { invoke<Void>(0xEE99C0, minimum, maximum); }
static void SET_THIRD_PERSON_CAM_ORBIT_DISTANCE_LIMITS_THIS_UPDATE(float p0, float distance) { invoke<Void>(0xEE9A60, p0, distance); }
static void SET_IN_VEHICLE_CAM_STATE_THIS_UPDATE(Vehicle p0, int p1) { invoke<Void>(0xEE9A90, p0, p1); }
static void DISABLE_ON_FOOT_FIRST_PERSON_VIEW_THIS_UPDATE() { invoke<Void>(0xEE9B00); }
static void DISABLE_FIRST_PERSON_FLASH_EFFECT_THIS_UPDATE() { invoke<Void>(0xEE9B20); }
static void BLOCK_FIRST_PERSON_ORIENTATION_RESET_THIS_UPDATE() { invoke<Void>(0xEE9B30); }
static int GET_FOLLOW_PED_CAM_ZOOM_LEVEL() { return invoke<int>(0xEE9B60); }
static int GET_FOLLOW_PED_CAM_VIEW_MODE() { return invoke<int>(0xEE9B80); }
static void SET_FOLLOW_PED_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xEE9BA0, viewMode); }
static BOOL IS_FOLLOW_VEHICLE_CAM_ACTIVE() { return invoke<BOOL>(0xEE9BB0); }
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_THIS_UPDATE(BOOL p0) { invoke<Void>(0xEE9BE0, p0); }
static void SET_FOLLOW_VEHICLE_CAM_HIGH_ANGLE_MODE_EVERY_UPDATE(BOOL p0, BOOL p1) { invoke<Void>(0xEE9C10, p0, p1); }
static BOOL SET_TABLE_GAMES_CAMERA_THIS_UPDATE(Hash hash) { return invoke<BOOL>(0xEE9C40, hash); }
static int GET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL() { return invoke<int>(0xEE9CC0); }
static void SET_FOLLOW_VEHICLE_CAM_ZOOM_LEVEL(int zoomLevel) { invoke<Void>(0xEE9CE0, zoomLevel); }
static int GET_FOLLOW_VEHICLE_CAM_VIEW_MODE() { return invoke<int>(0xEE9CF0); }
static void SET_FOLLOW_VEHICLE_CAM_VIEW_MODE(int viewMode) { invoke<Void>(0xEE9D10, viewMode); }
static int GET_CAM_VIEW_MODE_FOR_CONTEXT(int context) { return invoke<int>(0xEE9D20, context); }
static void SET_CAM_VIEW_MODE_FOR_CONTEXT(int context, int viewMode) { invoke<Void>(0xEE9D40, context, viewMode); }
static int GET_CAM_ACTIVE_VIEW_MODE_CONTEXT() { return invoke<int>(0xEE9D50); }
static void USE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xEE9D80); }
static void USE_DEDICATED_STUNT_CAMERA_THIS_UPDATE(const char* camName) { invoke<Void>(0xEE9DA0, camName); }
static void FORCE_VEHICLE_CAM_STUNT_SETTINGS_THIS_UPDATE() { invoke<Void>(0xEE9DD0); }
static void SET_FOLLOW_VEHICLE_CAM_SEAT_THIS_UPDATE(int seatIndex) { invoke<Void>(0xEE9DF0, seatIndex); }
static BOOL IS_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xEE9E10); }
static BOOL IS_AIM_CAM_ACTIVE_IN_ACCURATE_MODE() { return invoke<BOOL>(0xEE9E70); }
static BOOL IS_FIRST_PERSON_AIM_CAM_ACTIVE() { return invoke<BOOL>(0xEE9EB0); }
static void DISABLE_AIM_CAM_THIS_UPDATE() { invoke<Void>(0xEE9EE0); }
static float GET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR() { return invoke<float>(0xEE9F20); }
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR(float zoomFactor) { invoke<Void>(0xEE9F40, zoomFactor); }
static void SET_FIRST_PERSON_AIM_CAM_ZOOM_FACTOR_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xEE9F60, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xEE9F80, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(float p0, float p1) { invoke<Void>(0xEEA0F0, p0, p1); }
static void SET_FIRST_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xEEA190, p0); }
static void SET_THIRD_PERSON_AIM_CAM_NEAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xEEA1D0, p0); }
static void SET_ALLOW_CUSTOM_VEHICLE_DRIVE_BY_CAM_THIS_UPDATE(BOOL p0) { invoke<Void>(0xEEA210, p0); }
static void FORCE_TIGHTSPACE_CUSTOM_FRAMING_THIS_UPDATE() { invoke<Void>(0xEEA240); }
static Vector3 GET_FINAL_RENDERED_CAM_COORD() { return invoke<Vector3>(0xEEA260); }
static Vector3 GET_FINAL_RENDERED_CAM_ROT(int rotationOrder) { return invoke<Vector3>(0xEEA2A0, rotationOrder); }
static Vector3 GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_ROT(Player player, int rotationOrder) { return invoke<Vector3>(0xEEA330, player, rotationOrder); }
static float GET_FINAL_RENDERED_CAM_FOV() { return invoke<float>(0xEEA430); }
static float GET_FINAL_RENDERED_REMOTE_PLAYER_CAM_FOV(Player player) { return invoke<float>(0xEEA450, player); }
static float GET_FINAL_RENDERED_CAM_NEAR_CLIP() { return invoke<float>(0xEEA4A0); }
static float GET_FINAL_RENDERED_CAM_FAR_CLIP() { return invoke<float>(0xEEA4C0); }
static float GET_FINAL_RENDERED_CAM_NEAR_DOF() { return invoke<float>(0xEEA4E0); }
static float GET_FINAL_RENDERED_CAM_FAR_DOF() { return invoke<float>(0xEEA500); }
static float GET_FINAL_RENDERED_CAM_MOTION_BLUR_STRENGTH() { return invoke<float>(0xEEA520); }
static void SET_GAMEPLAY_COORD_HINT(float x, float y, float z, int duration, int blendOutDuration, int blendInDuration, int p6) { invoke<Void>(0xEEA540, x, y, z, duration, blendOutDuration, blendInDuration, p6); }
static void SET_GAMEPLAY_PED_HINT(Ped ped, float x1, float y1, float z1, BOOL p4, int duration, int blendOutDuration, int blendInDuration) { invoke<Void>(0xEEA5D0, ped, x1, y1, z1, p4, duration, blendOutDuration, blendInDuration); }
static void SET_GAMEPLAY_VEHICLE_HINT(Vehicle vehicle, float offsetX, float offsetY, float offsetZ, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xEEA6A0, vehicle, offsetX, offsetY, offsetZ, p4, time, easeInTime, easeOutTime); }
static void SET_GAMEPLAY_OBJECT_HINT(Object object, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime) { invoke<Void>(0xEEA770, object, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime); }
static void SET_GAMEPLAY_ENTITY_HINT(Entity entity, float xOffset, float yOffset, float zOffset, BOOL p4, int time, int easeInTime, int easeOutTime, int p8) { invoke<Void>(0xEEA840, entity, xOffset, yOffset, zOffset, p4, time, easeInTime, easeOutTime, p8); }
static BOOL IS_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xEEA910); }
static void STOP_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xEEA950, p0); }
static void STOP_GAMEPLAY_HINT_BEING_CANCELLED_THIS_UPDATE(BOOL p0) { invoke<Void>(0xEEA990, p0); }
static void STOP_CODE_GAMEPLAY_HINT(BOOL p0) { invoke<Void>(0xEEA9A0, p0); }
static BOOL IS_CODE_GAMEPLAY_HINT_ACTIVE() { return invoke<BOOL>(0xEEA9E0); }
static void SET_GAMEPLAY_HINT_FOV(float FOV) { invoke<Void>(0xEEAA10, FOV); }
static void SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(float value) { invoke<Void>(0xEEAA60, value); }
static void SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(float value) { invoke<Void>(0xEEAAA0, value); }
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_SIDE_OFFSET(float xOffset) { invoke<Void>(0xEEAAE0, xOffset); }
static void SET_GAMEPLAY_HINT_CAMERA_RELATIVE_VERTICAL_OFFSET(float yOffset) { invoke<Void>(0xEEAB20, yOffset); }
static void SET_GAMEPLAY_HINT_CAMERA_BLEND_TO_FOLLOW_PED_MEDIUM_VIEW_MODE(BOOL toggle) { invoke<Void>(0xEEAB60, toggle); }
static void SET_CINEMATIC_BUTTON_ACTIVE(BOOL p0) { invoke<Void>(0xEEAB90, p0); }
static BOOL IS_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xEEABF0); }
static void SHAKE_CINEMATIC_CAM(const char* shakeType, float amount) { invoke<Void>(0xEEAC20, shakeType, amount); }
static BOOL IS_CINEMATIC_CAM_SHAKING() { return invoke<BOOL>(0xEEAC60); }
static void SET_CINEMATIC_CAM_SHAKE_AMPLITUDE(float p0) { invoke<Void>(0xEEAC90, p0); }
static void STOP_CINEMATIC_CAM_SHAKING(BOOL p0) { invoke<Void>(0xEEACC0, p0); }
static void DISABLE_CINEMATIC_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xEEACF0); }
static void DISABLE_CINEMATIC_VEHICLE_IDLE_MODE_THIS_UPDATE() { invoke<Void>(0xEEAD10); }
static void INVALIDATE_CINEMATIC_VEHICLE_IDLE_MODE() { invoke<Void>(0xEEAD30); }
static void INVALIDATE_IDLE_CAM() { invoke<Void>(0xEEAD50); }
static BOOL IS_CINEMATIC_IDLE_CAM_RENDERING() { return invoke<BOOL>(0xEEAD70); }
static BOOL IS_CINEMATIC_FIRST_PERSON_VEHICLE_INTERIOR_CAM_RENDERING() { return invoke<BOOL>(0xEEADA0); }
static void CREATE_CINEMATIC_SHOT(Hash p0, int time, BOOL p2, Entity entity) { invoke<Void>(0xEEADD0, p0, time, p2, entity); }
static BOOL IS_CINEMATIC_SHOT_ACTIVE(Hash p0) { return invoke<BOOL>(0xEEADF0, p0); }
static void STOP_CINEMATIC_SHOT(Hash p0) { invoke<Void>(0xEEAE60, p0); }
static void FORCE_CINEMATIC_RENDERING_THIS_UPDATE(BOOL toggle) { invoke<Void>(0xEEAEC0, toggle); }
static void SET_CINEMATIC_NEWS_CHANNEL_ACTIVE_THIS_UPDATE() { invoke<Void>(0xEEAF20); }
static void SET_CINEMATIC_MODE_ACTIVE(BOOL toggle) { invoke<Void>(0xEEAF40, toggle); }
static BOOL IS_IN_VEHICLE_MOBILE_PHONE_CAMERA_RENDERING() { return invoke<BOOL>(0xEEAFA0); }
static BOOL DISABLE_CINEMATIC_SLOW_MO_THIS_UPDATE() { return invoke<BOOL>(0xEEAFC0); }
static BOOL IS_BONNET_CINEMATIC_CAM_RENDERING() { return invoke<BOOL>(0xEEAFE0); }
static BOOL IS_CINEMATIC_CAM_INPUT_ACTIVE() { return invoke<BOOL>(0xEEB010); }
static void IGNORE_MENU_PREFERENCE_FOR_BONNET_CAMERA_THIS_UPDATE() { invoke<Void>(0xEEB060); }
static void BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE() { invoke<Void>(0xEEB080); }
static void STOP_CUTSCENE_CAM_SHAKING(Any p0) { invoke<Void>(0xEEB0A0, p0); }
static void SET_CUTSCENE_CAM_FAR_CLIP_THIS_UPDATE(float p0) { invoke<Void>(0xEEB0D0, p0); }
static Ped GET_FOCUS_PED_ON_SCREEN(float p0, int p1, float p2, float p3, float p4, float p5, float p6, int p7, int p8) { return invoke<Ped>(0xEEB110, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void DISABLE_NEAR_CLIP_SCAN_THIS_UPDATE() { invoke<Void>(0xEEB170); }
static void SET_CAM_DEATH_FAIL_EFFECT_STATE(int p0) { invoke<Void>(0xEEB180, p0); }
static void SET_FIRST_PERSON_FLASH_EFFECT_TYPE(Any p0) { invoke<Void>(0xEEB190, p0); }
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_NAME(const char* vehicleName) { invoke<Void>(0xEEB1C0, vehicleName); }
static void SET_FIRST_PERSON_FLASH_EFFECT_VEHICLE_MODEL_HASH(Hash vehicleModel) { invoke<Void>(0xEEB1F0, vehicleModel); }
static BOOL IS_ALLOWED_INDEPENDENT_CAMERA_MODES() { return invoke<BOOL>(0xEEB220); }
static void CAMERA_PREVENT_COLLISION_SETTINGS_FOR_TRIPLEHEAD_IN_INTERIORS_THIS_UPDATE() { invoke<Void>(0xEEB240); }
static float REPLAY_GET_MAX_DISTANCE_ALLOWED_FROM_PLAYER() { return invoke<float>(0xEEB260); }
static void SET_CLOCK_TIME(int hour, int minute, int second) { invoke<Void>(0xEEB710, hour, minute, second); }
static void PAUSE_CLOCK(BOOL toggle) { invoke<Void>(0xEEB740, toggle); }
static void ADVANCE_CLOCK_TIME_TO(int hour, int minute, int second) { invoke<Void>(0xEEB760, hour, minute, second); }
static void ADD_TO_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xEEB780, hours, minutes, seconds); }
static int GET_CLOCK_HOURS() { return invoke<int>(0xEEB7A0); }
static int GET_CLOCK_MINUTES() { return invoke<int>(0xEEB7B0); }
static int GET_CLOCK_SECONDS() { return invoke<int>(0xEEB7C0); }
static void SET_CLOCK_DATE(int day, int month, int year) { invoke<Void>(0xEEB7D0, day, month, year); }
static int GET_CLOCK_DAY_OF_WEEK() { return invoke<int>(0xEEB7F0); }
static int GET_CLOCK_DAY_OF_MONTH() { return invoke<int>(0xEEB800); }
static int GET_CLOCK_MONTH() { return invoke<int>(0xEEB810); }
static int GET_CLOCK_YEAR() { return invoke<int>(0xEEB820); }
static int GET_MILLISECONDS_PER_GAME_MINUTE() { return invoke<int>(0xEEB830); }
static void GET_POSIX_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xEEB840, year, month, day, hour, minute, second); }
static void GET_UTC_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xEEB860, year, month, day, hour, minute, second); }
static void GET_LOCAL_TIME(int* year, int* month, int* day, int* hour, int* minute, int* second) { invoke<Void>(0xEEB880, year, month, day, hour, minute, second); }
static void REQUEST_CUTSCENE(const char* cutsceneName, int flags) { invoke<Void>(0xEEDD20, cutsceneName, flags); }
static void REQUEST_CUTSCENE_WITH_PLAYBACK_LIST(const char* cutsceneName, int playbackFlags, int flags) { invoke<Void>(0xEEDD80, cutsceneName, playbackFlags, flags); }
static void REMOVE_CUTSCENE() { invoke<Void>(0xEEDE00); }
static BOOL HAS_CUTSCENE_LOADED() { return invoke<BOOL>(0xEEDE30); }
static BOOL HAS_THIS_CUTSCENE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xEEDE60, cutsceneName); }
static void SET_SCRIPT_CAN_START_CUTSCENE(int threadId) { invoke<Void>(0xEEDEB0, threadId); }
static BOOL CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY() { return invoke<BOOL>(0xEEDED0); }
static BOOL IS_CUTSCENE_PLAYBACK_FLAG_SET(int flag) { return invoke<BOOL>(0xEEDF10, flag); }
static void SET_CUTSCENE_ENTITY_STREAMING_FLAGS(const char* cutsceneEntName, int p1, int p2) { invoke<Void>(0xEEDF50, cutsceneEntName, p1, p2); }
static void REQUEST_CUT_FILE(const char* cutsceneName) { invoke<Void>(0xEEDF70, cutsceneName); }
static BOOL HAS_CUT_FILE_LOADED(const char* cutsceneName) { return invoke<BOOL>(0xEEE020, cutsceneName); }
static void REMOVE_CUT_FILE(const char* cutsceneName) { invoke<Void>(0xEEE050, cutsceneName); }
static int GET_CUT_FILE_CONCAT_COUNT(const char* cutsceneName) { return invoke<int>(0xEEE060, cutsceneName); }
static void START_CUTSCENE(int flags) { invoke<Void>(0xEEE090, flags); }
static void START_CUTSCENE_AT_COORDS(float x, float y, float z, int flags) { invoke<Void>(0xEEE0C0, x, y, z, flags); }
static void STOP_CUTSCENE(BOOL p0) { invoke<Void>(0xEEE0D0, p0); }
static void STOP_CUTSCENE_IMMEDIATELY() { invoke<Void>(0xEEE110); }
static void SET_CUTSCENE_ORIGIN(float x, float y, float z, float p3, int p4) { invoke<Void>(0xEEE140, x, y, z, p3, p4); }
static void SET_CUTSCENE_ORIGIN_AND_ORIENTATION(float x1, float y1, float z1, float x2, float y2, float z2, int p6) { invoke<Void>(0xEEE160, x1, y1, z1, x2, y2, z2, p6); }
static int GET_CUTSCENE_TIME() { return invoke<int>(0xEEE170); }
static int GET_CUTSCENE_TOTAL_DURATION() { return invoke<int>(0xEEE1A0); }
static int GET_CUTSCENE_END_TIME() { return invoke<int>(0xEEE1F0); }
static int GET_CUTSCENE_PLAY_DURATION() { return invoke<int>(0xEEE220); }
static BOOL WAS_CUTSCENE_SKIPPED() { return invoke<BOOL>(0xEEE250); }
static BOOL HAS_CUTSCENE_FINISHED() { return invoke<BOOL>(0xEEE280); }
static BOOL IS_CUTSCENE_ACTIVE() { return invoke<BOOL>(0xEEE2B0); }
static BOOL IS_CUTSCENE_PLAYING() { return invoke<BOOL>(0xEEE2E0); }
static int GET_CUTSCENE_SECTION_PLAYING() { return invoke<int>(0xEEE310); }
static Entity GET_ENTITY_INDEX_OF_CUTSCENE_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xEEE330, cutsceneEntName, modelHash); }
static int GET_CUTSCENE_CONCAT_SECTION_PLAYING() { return invoke<int>(0xEEE3E0); }
static BOOL IS_CUTSCENE_AUTHORIZED(const char* cutsceneName) { return invoke<BOOL>(0xEEE410, cutsceneName); }
static int DOES_CUTSCENE_HANDLE_EXIST(int cutsceneHandle) { return invoke<int>(0xEEE420, cutsceneHandle); }
static void REGISTER_ENTITY_FOR_CUTSCENE(Ped cutscenePed, const char* cutsceneEntName, int p2, Hash modelHash, int p4) { invoke<Void>(0xEEE4C0, cutscenePed, cutsceneEntName, p2, modelHash, p4); }
static Entity GET_ENTITY_INDEX_OF_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<Entity>(0xEEE4E0, cutsceneEntName, modelHash); }
static void SET_VEHICLE_MODEL_PLAYER_WILL_EXIT_SCENE(Hash modelHash) { invoke<Void>(0xEEE510, modelHash); }
static void SET_CUTSCENE_TRIGGER_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xEEE530, x1, y1, z1, x2, y2, z2); }
static BOOL CAN_SET_ENTER_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xEEE5D0, cutsceneEntName, modelHash); }
static BOOL CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xEEE650, cutsceneEntName, modelHash); }
static BOOL CAN_SET_EXIT_STATE_FOR_CAMERA(BOOL p0) { return invoke<BOOL>(0xEEE6D0, p0); }
static void SET_PAD_CAN_SHAKE_DURING_CUTSCENE(BOOL toggle) { invoke<Void>(0xEEE710, toggle); }
static void SET_CUTSCENE_FADE_VALUES(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xEEE750, p0, p1, p2, p3); }
static void SET_CUTSCENE_MULTIHEAD_FADE(BOOL p0, BOOL p1, BOOL p2, BOOL p3) { invoke<Void>(0xEEE800, p0, p1, p2, p3); }
static void SET_CUTSCENE_MULTIHEAD_FADE_MANUAL(BOOL p0) { invoke<Void>(0xEEE810, p0); }
static BOOL IS_MULTIHEAD_FADE_UP() { return invoke<BOOL>(0xEEE820); }
static void NETWORK_SET_MOCAP_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xEEE830, p0); }
static void SET_CAR_GENERATORS_CAN_UPDATE_DURING_CUTSCENE(BOOL p0) { invoke<Void>(0xEEE870, p0); }
static BOOL CAN_USE_MOBILE_PHONE_DURING_CUTSCENE() { return invoke<BOOL>(0xEEE8B0); }
static void SET_CUTSCENE_CAN_BE_SKIPPED(BOOL p0) { invoke<Void>(0xEEE900, p0); }
static void SET_CAN_DISPLAY_MINIMAP_DURING_CUTSCENE_THIS_UPDATE() { invoke<Void>(0xEEE940); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xEEE970, cutsceneEntName, componentId, drawableId, textureId, modelHash); }
static void SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED(const char* cutsceneEntName, Ped ped, Hash modelHash) { invoke<Void>(0xEEE990, cutsceneEntName, ped, modelHash); }
static BOOL DOES_CUTSCENE_ENTITY_EXIST(const char* cutsceneEntName, Hash modelHash) { return invoke<BOOL>(0xEEE9B0, cutsceneEntName, modelHash); }
static void SET_CUTSCENE_PED_PROP_VARIATION(const char* cutsceneEntName, int componentId, int drawableId, int textureId, Hash modelHash) { invoke<Void>(0xEEEA50, cutsceneEntName, componentId, drawableId, textureId, modelHash); }
static BOOL HAS_CUTSCENE_CUT_THIS_FRAME() { return invoke<BOOL>(0xEEEB10); }
static void DATAFILE_WATCH_REQUEST_ID(int requestId) { invoke<Void>(0xEF2930, requestId); }
static void DATAFILE_CLEAR_WATCH_LIST() { invoke<Void>(0xEF2940); }
static BOOL DATAFILE_IS_VALID_REQUEST_ID(int index) { return invoke<BOOL>(0xEF2980, index); }
static BOOL DATAFILE_HAS_LOADED_FILE_DATA(int requestId) { return invoke<BOOL>(0xEF29C0, requestId); }
static BOOL DATAFILE_HAS_VALID_FILE_DATA(int requestId) { return invoke<BOOL>(0xEF2A10, requestId); }
static BOOL DATAFILE_SELECT_ACTIVE_FILE(int requestId, Any p1) { return invoke<BOOL>(0xEF2A90, requestId, p1); }
static BOOL DATAFILE_DELETE_REQUESTED_FILE(int requestId) { return invoke<BOOL>(0xEF2AC0, requestId); }
static BOOL UGC_CREATE_CONTENT(Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p7) { return invoke<BOOL>(0xEF2AF0, data, dataCount, contentName, description, tagsCsv, contentTypeName, publish, p7); }
static BOOL UGC_CREATE_MISSION(const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, BOOL publish, Any p5) { return invoke<BOOL>(0xEF2B50, contentName, description, tagsCsv, contentTypeName, publish, p5); }
static BOOL UGC_UPDATE_CONTENT(const char* contentId, Any* data, int dataCount, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p7) { return invoke<BOOL>(0xEF2B90, contentId, data, dataCount, contentName, description, tagsCsv, contentTypeName, p7); }
static BOOL UGC_UPDATE_MISSION(const char* contentId, const char* contentName, const char* description, const char* tagsCsv, const char* contentTypeName, Any p5) { return invoke<BOOL>(0xEF2BE0, contentId, contentName, description, tagsCsv, contentTypeName, p5); }
static BOOL UGC_SET_PLAYER_DATA(const char* contentId, float rating, const char* contentTypeName, Any p3) { return invoke<BOOL>(0xEF2C20, contentId, rating, contentTypeName, p3); }
static BOOL DATAFILE_SELECT_UGC_DATA(int p0, Any p1) { return invoke<BOOL>(0xEF2C50, p0, p1); }
static BOOL DATAFILE_SELECT_UGC_STATS(int p0, BOOL p1, Any p2) { return invoke<BOOL>(0xEF2C80, p0, p1, p2); }
static BOOL DATAFILE_SELECT_UGC_PLAYER_DATA(int p0, Any p1) { return invoke<BOOL>(0xEF2CB0, p0, p1); }
static BOOL DATAFILE_SELECT_CREATOR_STATS(int p0, Any p1) { return invoke<BOOL>(0xEF2CE0, p0, p1); }
static BOOL DATAFILE_LOAD_OFFLINE_UGC(const char* filename, Any p1) { return invoke<BOOL>(0xEF2D10, filename, p1); }
static void DATAFILE_CREATE(int p0) { invoke<Void>(0xEF2D40, p0); }
static void DATAFILE_DELETE(int p0) { invoke<Void>(0xEF2D50, p0); }
static void DATAFILE_STORE_MISSION_HEADER(int p0) { invoke<Void>(0xEF2E50, p0); }
static void DATAFILE_FLUSH_MISSION_HEADER() { invoke<Void>(0xEF2E60); }
static Any* DATAFILE_GET_FILE_DICT(int p0) { return invoke<Any*>(0xEF2F30, p0); }
static BOOL DATAFILE_START_SAVE_TO_CLOUD(const char* filename, Any p1) { return invoke<BOOL>(0xEF2F60, filename, p1); }
static BOOL DATAFILE_UPDATE_SAVE_TO_CLOUD(BOOL* p0) { return invoke<BOOL>(0xEF2FF0, p0); }
static BOOL DATAFILE_IS_SAVE_PENDING() { return invoke<BOOL>(0xEF3040); }
static BOOL DATAFILE_LOAD_OFFLINE_UGC_FOR_ADDITIONAL_DATA_FILE(Any p0, Any p1) { return invoke<BOOL>(0xEF3060, p0, p1); }
static void DATAFILE_DELETE_FOR_ADDITIONAL_DATA_FILE(Any p0) { invoke<Void>(0xEF3090, p0); }
static Any* DATAFILE_GET_FILE_DICT_FOR_ADDITIONAL_DATA_FILE(Any p0) { return invoke<Any*>(0xEF3190, p0); }
static void DATADICT_SET_BOOL(Any* objectData, const char* key, BOOL value) { invoke<Void>(0xEF31C0, objectData, key, value); }
static void DATADICT_SET_INT(Any* objectData, const char* key, int value) { invoke<Void>(0xEF31E0, objectData, key, value); }
static void DATADICT_SET_FLOAT(Any* objectData, const char* key, float value) { invoke<Void>(0xEF3200, objectData, key, value); }
static void DATADICT_SET_STRING(Any* objectData, const char* key, const char* value) { invoke<Void>(0xEF3220, objectData, key, value); }
static void DATADICT_SET_VECTOR(Any* objectData, const char* key, float valueX, float valueY, float valueZ) { invoke<Void>(0xEF3240, objectData, key, valueX, valueY, valueZ); }
static Any* DATADICT_CREATE_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xEF3270, objectData, key); }
static Any* DATADICT_CREATE_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xEF32A0, objectData, key); }
static BOOL DATADICT_GET_BOOL(Any* objectData, const char* key) { return invoke<BOOL>(0xEF32D0, objectData, key); }
static int DATADICT_GET_INT(Any* objectData, const char* key) { return invoke<int>(0xEF3380, objectData, key); }
static float DATADICT_GET_FLOAT(Any* objectData, const char* key) { return invoke<float>(0xEF3420, objectData, key); }
static const char* DATADICT_GET_STRING(Any* objectData, const char* key) { return invoke<const char*>(0xEF34E0, objectData, key); }
static Vector3 DATADICT_GET_VECTOR(Any* objectData, const char* key) { return invoke<Vector3>(0xEF3590, objectData, key); }
static Any* DATADICT_GET_DICT(Any* objectData, const char* key) { return invoke<Any*>(0xEF3660, objectData, key); }
static Any* DATADICT_GET_ARRAY(Any* objectData, const char* key) { return invoke<Any*>(0xEF3700, objectData, key); }
static int DATADICT_GET_TYPE(Any* objectData, const char* key) { return invoke<int>(0xEF37A0, objectData, key); }
static void DATAARRAY_ADD_BOOL(Any* arrayData, BOOL value) { invoke<Void>(0xEF3840, arrayData, value); }
static void DATAARRAY_ADD_INT(Any* arrayData, int value) { invoke<Void>(0xEF3860, arrayData, value); }
static void DATAARRAY_ADD_FLOAT(Any* arrayData, float value) { invoke<Void>(0xEF3880, arrayData, value); }
static void DATAARRAY_ADD_STRING(Any* arrayData, const char* value) { invoke<Void>(0xEF38A0, arrayData, value); }
static void DATAARRAY_ADD_VECTOR(Any* arrayData, float valueX, float valueY, float valueZ) { invoke<Void>(0xEF38C0, arrayData, valueX, valueY, valueZ); }
static Any* DATAARRAY_ADD_DICT(Any* arrayData) { return invoke<Any*>(0xEF38F0, arrayData); }
static BOOL DATAARRAY_GET_BOOL(Any* arrayData, int arrayIndex) { return invoke<BOOL>(0xEF3920, arrayData, arrayIndex); }
static int DATAARRAY_GET_INT(Any* arrayData, int arrayIndex) { return invoke<int>(0xEF3990, arrayData, arrayIndex); }
static float DATAARRAY_GET_FLOAT(Any* arrayData, int arrayIndex) { return invoke<float>(0xEF39F0, arrayData, arrayIndex); }
static const char* DATAARRAY_GET_STRING(Any* arrayData, int arrayIndex) { return invoke<const char*>(0xEF3A60, arrayData, arrayIndex); }
static Vector3 DATAARRAY_GET_VECTOR(Any* arrayData, int arrayIndex) { return invoke<Vector3>(0xEF3AD0, arrayData, arrayIndex); }
static Any* DATAARRAY_GET_DICT(Any* arrayData, int arrayIndex) { return invoke<Any*>(0xEF3B50, arrayData, arrayIndex); }
static int DATAARRAY_GET_COUNT(Any* arrayData) { return invoke<int>(0xEF3BB0, arrayData); }
static int DATAARRAY_GET_TYPE(Any* arrayData, int arrayIndex) { return invoke<int>(0xEF3BD0, arrayData, arrayIndex); }
static BOOL DECOR_SET_TIME(Entity entity, const char* propertyName, int timestamp) { return invoke<BOOL>(0xEF4C40, entity, propertyName, timestamp); }
static BOOL DECOR_SET_BOOL(Entity entity, const char* propertyName, BOOL value) { return invoke<BOOL>(0xEF4C70, entity, propertyName, value); }
static BOOL DECOR_SET_FLOAT(Entity entity, const char* propertyName, float value) { return invoke<BOOL>(0xEF4D50, entity, propertyName, value); }
static BOOL DECOR_SET_INT(Entity entity, const char* propertyName, int value) { return invoke<BOOL>(0xEF4E30, entity, propertyName, value); }
static BOOL DECOR_GET_BOOL(Entity entity, const char* propertyName) { return invoke<BOOL>(0xEF4F00, entity, propertyName); }
static float DECOR_GET_FLOAT(Entity entity, const char* propertyName) { return invoke<float>(0xEF4FC0, entity, propertyName); }
static int DECOR_GET_INT(Entity entity, const char* propertyName) { return invoke<int>(0xEF5090, entity, propertyName); }
static BOOL DECOR_EXIST_ON(Entity entity, const char* propertyName) { return invoke<BOOL>(0xEF5150, entity, propertyName); }
static BOOL DECOR_REMOVE(Entity entity, const char* propertyName) { return invoke<BOOL>(0xEF51D0, entity, propertyName); }
static void DECOR_REGISTER(const char* propertyName, int type) { invoke<Void>(0xEF5250, propertyName, type); }
static BOOL DECOR_IS_REGISTERED_AS_TYPE(const char* propertyName, int type) { return invoke<BOOL>(0xEF52D0, propertyName, type); }
static void DECOR_REGISTER_LOCK() { invoke<Void>(0xEF5340); }
static BOOL ARE_ANY_CCS_PENDING() { return invoke<BOOL>(0xF26A00); }
static BOOL IS_DLC_PRESENT(Hash dlcHash) { return invoke<BOOL>(0xF26A30, dlcHash); }
static BOOL DLC_CHECK_CLOUD_DATA_CORRECT() { return invoke<BOOL>(0xF26A60); }
static int GET_EXTRACONTENT_CLOUD_RESULT() { return invoke<int>(0xF26A70); }
static BOOL DLC_CHECK_COMPAT_PACK_CONFIGURATION() { return invoke<BOOL>(0xF26A80); }
static BOOL GET_EVER_HAD_BAD_PACK_ORDER() { return invoke<BOOL>(0xF26A90); }
static BOOL GET_IS_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xF26AB0); }
static BOOL GET_IS_INITIAL_LOADING_SCREEN_ACTIVE() { return invoke<BOOL>(0xF26AD0); }
static BOOL HAS_CLOUD_REQUESTS_FINISHED(BOOL* p0, int unused) { return invoke<BOOL>(0xF26AE0, p0, unused); }
static void ON_ENTER_SP() { invoke<Void>(0xF26B00); }
static void ON_ENTER_MP() { invoke<Void>(0xF26B60); }
static BOOL DOES_ENTITY_EXIST(Entity entity) { return invoke<BOOL>(0xF06690, entity); }
static BOOL DOES_ENTITY_BELONG_TO_THIS_SCRIPT(Entity entity, BOOL p1) { return invoke<BOOL>(0xF066F0, entity, p1); }
static BOOL DOES_ENTITY_HAVE_DRAWABLE(Entity entity) { return invoke<BOOL>(0xF06770, entity); }
static BOOL DOES_ENTITY_HAVE_PHYSICS(Entity entity) { return invoke<BOOL>(0xF067D0, entity); }
static BOOL DOES_ENTITY_HAVE_SKELETON(Entity entity) { return invoke<BOOL>(0xF06830, entity); }
static BOOL DOES_ENTITY_HAVE_ANIM_DIRECTOR(Entity entity) { return invoke<BOOL>(0xF068C0, entity); }
static BOOL HAS_ENTITY_ANIM_FINISHED(Entity entity, const char* animDict, const char* animName, int p3) { return invoke<BOOL>(0xF06920, entity, animDict, animName, p3); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xF06950, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_PED(Entity entity) { return invoke<BOOL>(0xF069B0, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xF06A10, entity); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2, BOOL p2) { return invoke<BOOL>(0xF06A70, entity1, entity2, p2); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xF06AA0, entity1, entity2, traceType); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_ADJUST_FOR_COVER(Entity entity1, Entity entity2, int traceType) { return invoke<BOOL>(0xF06AD0, entity1, entity2, traceType); }
static BOOL HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Entity entity1, Entity entity2) { return invoke<BOOL>(0xF06B00, entity1, entity2); }
static BOOL HAS_ENTITY_COLLIDED_WITH_ANYTHING(Entity entity) { return invoke<BOOL>(0xF06B30, entity); }
static Entity _GET_LAST_ENTITY_HIT_BY_ENTITY(Entity entity) { return invoke<Entity>(0xF06BB0, entity); }
static Hash GET_LAST_MATERIAL_HIT_BY_ENTITY(Entity entity) { return invoke<Hash>(0xF06C40, entity); }
static Vector3 GET_COLLISION_NORMAL_OF_LAST_HIT_FOR_ENTITY(Entity entity) { return invoke<Vector3>(0xF06D20, entity); }
static void FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Entity entity) { invoke<Void>(0xF06E20, entity); }
static float GET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xF06E90, entity, animDict, animName); }
static float GET_ENTITY_ANIM_TOTAL_TIME(Entity entity, const char* animDict, const char* animName) { return invoke<float>(0xF06EC0, entity, animDict, animName); }
static float GET_ANIM_DURATION(const char* animDict, const char* animName) { return invoke<float>(0xF06EF0, animDict, animName); }
static Entity GET_ENTITY_ATTACHED_TO(Entity entity) { return invoke<Entity>(0xF06F30, entity); }
static Vector3 GET_ENTITY_COORDS(Entity entity, BOOL alive) { return invoke<Vector3>(0xF06FC0, entity, alive); }
static Vector3 GET_ENTITY_FORWARD_VECTOR(Entity entity) { return invoke<Vector3>(0xF07070, entity); }
static float GET_ENTITY_FORWARD_X(Entity entity) { return invoke<float>(0xF07110, entity); }
static float GET_ENTITY_FORWARD_Y(Entity entity) { return invoke<float>(0xF07180, entity); }
static float GET_ENTITY_HEADING(Entity entity) { return invoke<float>(0xF071F0, entity); }
static float GET_ENTITY_HEADING_FROM_EULERS(Entity entity) { return invoke<float>(0xF072A0, entity); }
static int GET_ENTITY_HEALTH(Entity entity) { return invoke<int>(0xF07410, entity); }
static int GET_ENTITY_MAX_HEALTH(Entity entity) { return invoke<int>(0xF07460, entity); }
static void SET_ENTITY_MAX_HEALTH(Entity entity, int value) { invoke<Void>(0xF074B0, entity, value); }
static float GET_ENTITY_HEIGHT(Entity entity, float X, float Y, float Z, BOOL atTop, BOOL inWorldCoords) { return invoke<float>(0xF07520, entity, X, Y, Z, atTop, inWorldCoords); }
static float GET_ENTITY_HEIGHT_ABOVE_GROUND(Entity entity) { return invoke<float>(0xF07560, entity); }
static void GET_ENTITY_MATRIX(Entity entity, Vector3* forwardVector, Vector3* rightVector, Vector3* upVector, Vector3* position) { invoke<Void>(0xF075E0, entity, forwardVector, rightVector, upVector, position); }
static Hash GET_ENTITY_MODEL(Entity entity) { return invoke<Hash>(0xF07730, entity); }
static Vector3 GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(Entity entity, float posX, float posY, float posZ) { return invoke<Vector3>(0xF07750, entity, posX, posY, posZ); }
static Vector3 GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Entity entity, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xF07870, entity, offsetX, offsetY, offsetZ); }
static float GET_ENTITY_PITCH(Entity entity) { return invoke<float>(0xF07930, entity); }
static void GET_ENTITY_QUATERNION(Entity entity, float* x, float* y, float* z, float* w) { invoke<Void>(0xF07960, entity, x, y, z, w); }
static float GET_ENTITY_ROLL(Entity entity) { return invoke<float>(0xF07AA0, entity); }
static Vector3 GET_ENTITY_ROTATION(Entity entity, int rotationOrder) { return invoke<Vector3>(0xF07AD0, entity, rotationOrder); }
static Vector3 GET_ENTITY_ROTATION_VELOCITY(Entity entity) { return invoke<Vector3>(0xF07C40, entity); }
static const char* GET_ENTITY_SCRIPT(Entity entity, ScrHandle* script) { return invoke<const char*>(0xF07D20, entity, script); }
static float GET_ENTITY_SPEED(Entity entity) { return invoke<float>(0xF07D80, entity); }
static Vector3 GET_ENTITY_SPEED_VECTOR(Entity entity, BOOL relative) { return invoke<Vector3>(0xF07E30, entity, relative); }
static float GET_ENTITY_UPRIGHT_VALUE(Entity entity) { return invoke<float>(0xF07F70, entity); }
static Vector3 GET_ENTITY_VELOCITY(Entity entity) { return invoke<Vector3>(0xF07FC0, entity); }
static Object GET_OBJECT_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Object>(0xF08090, entity); }
static Ped GET_PED_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Ped>(0xF080A0, entity); }
static Vehicle GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(Entity entity) { return invoke<Vehicle>(0xF080B0, entity); }
static Vector3 GET_WORLD_POSITION_OF_ENTITY_BONE(Entity entity, int boneIndex) { return invoke<Vector3>(0xF080C0, entity, boneIndex); }
static Player GET_NEAREST_PLAYER_TO_ENTITY(Entity entity) { return invoke<Player>(0xF08130, entity); }
static Player GET_NEAREST_PLAYER_TO_ENTITY_ON_TEAM(Entity entity, int team) { return invoke<Player>(0xF08170, entity, team); }
static int GET_ENTITY_TYPE(Entity entity) { return invoke<int>(0xF081B0, entity); }
static int GET_ENTITY_POPULATION_TYPE(Entity entity) { return invoke<int>(0xF08220, entity); }
static BOOL IS_AN_ENTITY(ScrHandle handle) { return invoke<BOOL>(0xF08290, handle); }
static BOOL IS_ENTITY_A_PED(Entity entity) { return invoke<BOOL>(0xF082D0, entity); }
static BOOL IS_ENTITY_A_MISSION_ENTITY(Entity entity) { return invoke<BOOL>(0xF08330, entity); }
static BOOL IS_ENTITY_A_VEHICLE(Entity entity) { return invoke<BOOL>(0xF08390, entity); }
static BOOL IS_ENTITY_AN_OBJECT(Entity entity) { return invoke<BOOL>(0xF083F0, entity); }
static BOOL IS_ENTITY_AT_COORD(Entity entity, float xPos, float yPos, float zPos, float xSize, float ySize, float zSize, BOOL p7, BOOL p8, int p9) { return invoke<BOOL>(0xF08450, entity, xPos, yPos, zPos, xSize, ySize, zSize, p7, p8, p9); }
static BOOL IS_ENTITY_AT_ENTITY(Entity entity1, Entity entity2, float xSize, float ySize, float zSize, BOOL p5, BOOL p6, int p7) { return invoke<BOOL>(0xF084A0, entity1, entity2, xSize, ySize, zSize, p5, p6, p7); }
static BOOL IS_ENTITY_ATTACHED(Entity entity) { return invoke<BOOL>(0xF084F0, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_OBJECT(Entity entity) { return invoke<BOOL>(0xF08580, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_PED(Entity entity) { return invoke<BOOL>(0xF08610, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ANY_VEHICLE(Entity entity) { return invoke<BOOL>(0xF086A0, entity); }
static BOOL IS_ENTITY_ATTACHED_TO_ENTITY(Entity from, Entity to) { return invoke<BOOL>(0xF08730, from, to); }
static BOOL IS_ENTITY_DEAD(Entity entity, BOOL p1) { return invoke<BOOL>(0xF08760, entity, p1); }
static BOOL IS_ENTITY_IN_AIR(Entity entity) { return invoke<BOOL>(0xF08820, entity); }
static BOOL IS_ENTITY_IN_ANGLED_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ, Any p10) { return invoke<BOOL>(0xF08850, entity, x1, y1, z1, x2, y2, z2, width, debug, includeZ, p10); }
static BOOL IS_ENTITY_IN_AREA(Entity entity, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8, Any p9) { return invoke<BOOL>(0xF088A0, entity, x1, y1, z1, x2, y2, z2, p7, p8, p9); }
static BOOL IS_ENTITY_IN_ZONE(Entity entity, const char* zone) { return invoke<BOOL>(0xF088F0, entity, zone); }
static BOOL IS_ENTITY_IN_WATER(Entity entity) { return invoke<BOOL>(0xF089E0, entity); }
static float GET_ENTITY_SUBMERGED_LEVEL(Entity entity) { return invoke<float>(0xF08A10, entity); }
static void SET_ENTITY_REQUIRES_MORE_EXPENSIVE_RIVER_CHECK(Entity entity, BOOL toggle) { invoke<Void>(0xF08A80, entity, toggle); }
static BOOL IS_ENTITY_ON_SCREEN(Entity entity) { return invoke<BOOL>(0xF08AE0, entity); }
static BOOL IS_ENTITY_PLAYING_ANIM(Entity entity, const char* animDict, const char* animName, int taskFlag) { return invoke<BOOL>(0xF08B80, entity, animDict, animName, taskFlag); }
static BOOL IS_ENTITY_STATIC(Entity entity) { return invoke<BOOL>(0xF08BB0, entity); }
static BOOL IS_ENTITY_TOUCHING_ENTITY(Entity entity, Entity targetEntity) { return invoke<BOOL>(0xF08C10, entity, targetEntity); }
static BOOL IS_ENTITY_TOUCHING_MODEL(Entity entity, Hash modelHash) { return invoke<BOOL>(0xF08C40, entity, modelHash); }
static BOOL IS_ENTITY_UPRIGHT(Entity entity, float angle) { return invoke<BOOL>(0xF08C70, entity, angle); }
static BOOL IS_ENTITY_UPSIDEDOWN(Entity entity) { return invoke<BOOL>(0xF08D00, entity); }
static BOOL IS_ENTITY_VISIBLE(Entity entity) { return invoke<BOOL>(0xF08D60, entity); }
static BOOL IS_ENTITY_VISIBLE_TO_SCRIPT(Entity entity) { return invoke<BOOL>(0xF08DC0, entity); }
static BOOL IS_ENTITY_OCCLUDED(Entity entity) { return invoke<BOOL>(0xF08E40, entity); }
static BOOL WOULD_ENTITY_BE_OCCLUDED(Hash entityModelHash, float x, float y, float z, BOOL p4) { return invoke<BOOL>(0xF08E70, entityModelHash, x, y, z, p4); }
static BOOL IS_ENTITY_WAITING_FOR_WORLD_COLLISION(Entity entity) { return invoke<BOOL>(0xF08EB0, entity); }
static void APPLY_FORCE_TO_ENTITY_CENTER_OF_MASS(Entity entity, int forceType, float x, float y, float z, BOOL p5, BOOL isDirectionRel, BOOL isForceRel, BOOL p8) { invoke<Void>(0xF08F10, entity, forceType, x, y, z, p5, isDirectionRel, isForceRel, p8); }
static void APPLY_FORCE_TO_ENTITY(Entity entity, int forceFlags, float x, float y, float z, float offX, float offY, float offZ, int boneIndex, BOOL isDirectionRel, BOOL ignoreUpVec, BOOL isForceRel, BOOL p12, BOOL p13) { invoke<Void>(0xF08FB0, entity, forceFlags, x, y, z, offX, offY, offZ, boneIndex, isDirectionRel, ignoreUpVec, isForceRel, p12, p13); }
static void ATTACH_ENTITY_TO_ENTITY(Entity entity1, Entity entity2, int boneIndex, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, BOOL p9, BOOL useSoftPinning, BOOL collision, BOOL isPed, int vertexIndex, BOOL fixedRot, Any p15) { invoke<Void>(0xF09030, entity1, entity2, boneIndex, xPos, yPos, zPos, xRot, yRot, zRot, p9, useSoftPinning, collision, isPed, vertexIndex, fixedRot, p15); }
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xF091D0, entity1, entity2, boneIndex1, boneIndex2, p4, p5); }
static void ATTACH_ENTITY_BONE_TO_ENTITY_BONE_Y_FORWARD(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, BOOL p4, BOOL p5) { invoke<Void>(0xF09200, entity1, entity2, boneIndex1, boneIndex2, p4, p5); }
static void ATTACH_ENTITY_TO_ENTITY_PHYSICALLY(Entity entity1, Entity entity2, int boneIndex1, int boneIndex2, float xPos1, float yPos1, float zPos1, float xPos2, float yPos2, float zPos2, float xRot, float yRot, float zRot, float breakForce, BOOL fixedRot, BOOL p15, BOOL collision, BOOL p17, int p18) { invoke<Void>(0xF09230, entity1, entity2, boneIndex1, boneIndex2, xPos1, yPos1, zPos1, xPos2, yPos2, zPos2, xRot, yRot, zRot, breakForce, fixedRot, p15, collision, p17, p18); }
static void PROCESS_ENTITY_ATTACHMENTS(Entity entity) { invoke<Void>(0xF092E0, entity); }
static int GET_ENTITY_BONE_INDEX_BY_NAME(Entity entity, const char* boneName) { return invoke<int>(0xF092F0, entity, boneName); }
static void CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Entity entity) { invoke<Void>(0xF093C0, entity); }
static void DELETE_ENTITY(Entity* entity) { invoke<Void>(0xF09420, entity); }
static void DETACH_ENTITY(Entity entity, BOOL dynamic, BOOL collision) { invoke<Void>(0xF09430, entity, dynamic, collision); }
static void FREEZE_ENTITY_POSITION(Entity entity, BOOL toggle) { invoke<Void>(0xF09450, entity, toggle); }
static void SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(Entity entity, BOOL toggle) { invoke<Void>(0xF09470, entity, toggle); }
static BOOL PLAY_ENTITY_ANIM(Entity entity, const char* animName, const char* animDict, float p3, BOOL loop, BOOL stayInAnim, BOOL p6, float delta, Any bitset) { return invoke<BOOL>(0xF09560, entity, animName, animDict, p3, loop, stayInAnim, p6, delta, bitset); }
static BOOL PLAY_SYNCHRONIZED_ENTITY_ANIM(Entity entity, int syncedScene, const char* animation, const char* propName, float p4, float p5, Any p6, float p7) { return invoke<BOOL>(0xF095D0, entity, syncedScene, animation, propName, p4, p5, p6, p7); }
static BOOL PLAY_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2, const char* p6, const char* p7, float p8, float p9, Any p10, float p11) { return invoke<BOOL>(0xF09620, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9, p10, p11); }
static BOOL STOP_SYNCHRONIZED_MAP_ENTITY_ANIM(float x1, float y1, float z1, float x2, Any y2, float z2) { return invoke<BOOL>(0xF09710, x1, y1, z1, x2, y2, z2); }
static BOOL STOP_ENTITY_ANIM(Entity entity, const char* animation, const char* animGroup, float p3) { return invoke<BOOL>(0xF097B0, entity, animation, animGroup, p3); }
static BOOL STOP_SYNCHRONIZED_ENTITY_ANIM(Entity entity, float p1, BOOL p2) { return invoke<BOOL>(0xF097D0, entity, p1, p2); }
static BOOL HAS_ANIM_EVENT_FIRED(Entity entity, Hash actionHash) { return invoke<BOOL>(0xF09810, entity, actionHash); }
static BOOL FIND_ANIM_EVENT_PHASE(const char* animDictionary, const char* animName, const char* p2, Any* p3, Any* p4) { return invoke<BOOL>(0xF09840, animDictionary, animName, p2, p3, p4); }
static void SET_ENTITY_ANIM_CURRENT_TIME(Entity entity, const char* animDictionary, const char* animName, float time) { invoke<Void>(0xF09880, entity, animDictionary, animName, time); }
static void SET_ENTITY_ANIM_SPEED(Entity entity, const char* animDictionary, const char* animName, float speedMultiplier) { invoke<Void>(0xF098A0, entity, animDictionary, animName, speedMultiplier); }
static void SET_ENTITY_AS_MISSION_ENTITY(Entity entity, BOOL p1, BOOL p2) { invoke<Void>(0xF098C0, entity, p1, p2); }
static void SET_ENTITY_AS_NO_LONGER_NEEDED(Entity* entity) { invoke<Void>(0xF098E0, entity); }
static void SET_PED_AS_NO_LONGER_NEEDED(Ped* ped) { invoke<Void>(0xF09940, ped); }
static void SET_VEHICLE_AS_NO_LONGER_NEEDED(Vehicle* vehicle) { invoke<Void>(0xF099A0, vehicle); }
static void SET_OBJECT_AS_NO_LONGER_NEEDED(Object* object) { invoke<Void>(0xF09A00, object); }
static void SET_ENTITY_CAN_BE_DAMAGED(Entity entity, BOOL toggle) { invoke<Void>(0xF09A60, entity, toggle); }
static BOOL GET_ENTITY_CAN_BE_DAMAGED(Entity entity) { return invoke<BOOL>(0xF09AF0, entity); }
static void SET_ENTITY_CAN_BE_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL bCanBeDamaged, int relGroup) { invoke<Void>(0xF09B50, entity, bCanBeDamaged, relGroup); }
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xF09C20, entity, toggle); }
static void SET_ENTITY_CAN_BE_TARGETED_WITHOUT_LOS(Entity entity, BOOL toggle) { invoke<Void>(0xF09CA0, entity, toggle); }
static void SET_ENTITY_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xF09DA0, entity, toggle, keepPhysics); }
static BOOL GET_ENTITY_COLLISION_DISABLED(Entity entity) { return invoke<BOOL>(0xF09DD0, entity); }
static void SET_ENTITY_COMPLETELY_DISABLE_COLLISION(Entity entity, BOOL toggle, BOOL keepPhysics) { invoke<Void>(0xF09E30, entity, toggle, keepPhysics); }
static void SET_ENTITY_COORDS(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL clearArea) { invoke<Void>(0xF09E60, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis, clearArea); }
static void SET_ENTITY_COORDS_WITHOUT_PLANTS_RESET(Entity entity, float xPos, float yPos, float zPos, BOOL alive, BOOL deadFlag, BOOL ragdollFlag, BOOL clearArea) { invoke<Void>(0xF09EB0, entity, xPos, yPos, zPos, alive, deadFlag, ragdollFlag, clearArea); }
static void SET_ENTITY_COORDS_NO_OFFSET(Entity entity, float xPos, float yPos, float zPos, BOOL xAxis, BOOL yAxis, BOOL zAxis) { invoke<Void>(0xF09F00, entity, xPos, yPos, zPos, xAxis, yAxis, zAxis); }
static void SET_ENTITY_DYNAMIC(Entity entity, BOOL toggle) { invoke<Void>(0xF09F30, entity, toggle); }
static void SET_ENTITY_HEADING(Entity entity, float heading) { invoke<Void>(0xF09FB0, entity, heading); }
static void SET_ENTITY_HEALTH(Entity entity, int health, int p2) { invoke<Void>(0xF09FC0, entity, health, p2); }
static void SET_ENTITY_INVINCIBLE(Entity entity, BOOL toggle) { invoke<Void>(0xF09FE0, entity, toggle); }
static void SET_ENTITY_IS_TARGET_PRIORITY(Entity entity, BOOL p1, float p2) { invoke<Void>(0xF0A0B0, entity, p1, p2); }
static void SET_ENTITY_LIGHTS(Entity entity, BOOL toggle) { invoke<Void>(0xF0A1D0, entity, toggle); }
static void SET_ENTITY_LOAD_COLLISION_FLAG(Entity entity, BOOL toggle, Any p2) { invoke<Void>(0xF0A240, entity, toggle, p2); }
static BOOL HAS_COLLISION_LOADED_AROUND_ENTITY(Entity entity) { return invoke<BOOL>(0xF0A290, entity); }
static void SET_ENTITY_MAX_SPEED(Entity entity, float speed) { invoke<Void>(0xF0A300, entity, speed); }
static void SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Entity entity, BOOL toggle) { invoke<Void>(0xF0A370, entity, toggle); }
static void SET_ENTITY_ONLY_DAMAGED_BY_RELATIONSHIP_GROUP(Entity entity, BOOL p1, Any p2) { invoke<Void>(0xF0A3F0, entity, p1, p2); }
static void SET_ENTITY_PROOFS(Entity entity, BOOL bulletProof, BOOL fireProof, BOOL explosionProof, BOOL collisionProof, BOOL meleeProof, BOOL steamProof, BOOL p7, BOOL waterProof) { invoke<Void>(0xF0A4C0, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, waterProof); }
static BOOL GET_ENTITY_PROOFS(Entity entity, BOOL* bulletProof, BOOL* fireProof, BOOL* explosionProof, BOOL* collisionProof, BOOL* meleeProof, BOOL* steamProof, BOOL* p7, BOOL* drownProof) { return invoke<BOOL>(0xF0A600, entity, bulletProof, fireProof, explosionProof, collisionProof, meleeProof, steamProof, p7, drownProof); }
static void SET_ENTITY_QUATERNION(Entity entity, float x, float y, float z, float w) { invoke<Void>(0xF0A730, entity, x, y, z, w); }
static void SET_ENTITY_RECORDS_COLLISIONS(Entity entity, BOOL toggle) { invoke<Void>(0xF0A900, entity, toggle); }
static void SET_ENTITY_ROTATION(Entity entity, float pitch, float roll, float yaw, int rotationOrder, BOOL p5) { invoke<Void>(0xF0A950, entity, pitch, roll, yaw, rotationOrder, p5); }
static void SET_ENTITY_VISIBLE(Entity entity, BOOL toggle, BOOL p2) { invoke<Void>(0xF0A970, entity, toggle, p2); }
static void SET_ENTITY_WATER_REFLECTION_FLAG(Entity entity, BOOL toggle) { invoke<Void>(0xF0A990, entity, toggle); }
static void SET_ENTITY_MIRROR_REFLECTION_FLAG(Entity entity, BOOL p1) { invoke<Void>(0xF0AA00, entity, p1); }
static void SET_ENTITY_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xF0AA70, entity, x, y, z); }
static void SET_ENTITY_ANGULAR_VELOCITY(Entity entity, float x, float y, float z) { invoke<Void>(0xF0AB00, entity, x, y, z); }
static void SET_ENTITY_HAS_GRAVITY(Entity entity, BOOL toggle) { invoke<Void>(0xF0AB90, entity, toggle); }
static void SET_ENTITY_LOD_DIST(Entity entity, int value) { invoke<Void>(0xF0ABF0, entity, value); }
static int GET_ENTITY_LOD_DIST(Entity entity) { return invoke<int>(0xF0AC40, entity); }
static void SET_ENTITY_ALPHA(Entity entity, int alphaLevel, BOOL skin) { invoke<Void>(0xF0ACA0, entity, alphaLevel, skin); }
static int GET_ENTITY_ALPHA(Entity entity) { return invoke<int>(0xF0AD00, entity); }
static void RESET_ENTITY_ALPHA(Entity entity) { invoke<Void>(0xF0AD60, entity); }
static void RESET_PICKUP_ENTITY_GLOW(Entity entity) { invoke<Void>(0xF0AD70, entity); }
static void SET_PICKUP_COLLIDES_WITH_PROJECTILES(Any p0, Any p1) { invoke<Void>(0xF0ADB0, p0, p1); }
static void SET_ENTITY_SORT_BIAS(Entity entity, float p1) { invoke<Void>(0xF0AE10, entity, p1); }
static void SET_ENTITY_ALWAYS_PRERENDER(Entity entity, BOOL toggle) { invoke<Void>(0xF0AE70, entity, toggle); }
static void SET_ENTITY_RENDER_SCORCHED(Entity entity, BOOL toggle) { invoke<Void>(0xF0AED0, entity, toggle); }
static void SET_ENTITY_TRAFFICLIGHT_OVERRIDE(Entity entity, int state) { invoke<Void>(0xF0AF50, entity, state); }
static void SET_ENTITY_IS_IN_VEHICLE(Entity entity) { invoke<Void>(0xF0AFB0, entity); }
static void CREATE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xF0B010, x, y, z, radius, originalModel, newModel, p6); }
static void REMOVE_MODEL_SWAP(float x, float y, float z, float radius, Hash originalModel, Hash newModel, BOOL p6) { invoke<Void>(0xF0B0F0, x, y, z, radius, originalModel, newModel, p6); }
static void CREATE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xF0B180, x, y, z, radius, modelHash, p5); }
static void CREATE_MODEL_HIDE_EXCLUDING_SCRIPT_OBJECTS(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xF0B250, x, y, z, radius, modelHash, p5); }
static void REMOVE_MODEL_HIDE(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { invoke<Void>(0xF0B320, x, y, z, radius, modelHash, p5); }
static void CREATE_FORCED_OBJECT(float x, float y, float z, Any p3, Hash modelHash, BOOL p5) { invoke<Void>(0xF0B3B0, x, y, z, p3, modelHash, p5); }
static void REMOVE_FORCED_OBJECT(float x, float y, float z, float p3, Hash modelHash) { invoke<Void>(0xF0B480, x, y, z, p3, modelHash); }
static void SET_ENTITY_NO_COLLISION_ENTITY(Entity entity1, Entity entity2, BOOL thisFrameOnly) { invoke<Void>(0xF0B500, entity1, entity2, thisFrameOnly); }
static void SET_ENTITY_MOTION_BLUR(Entity entity, BOOL toggle) { invoke<Void>(0xF0B520, entity, toggle); }
static void SET_CAN_AUTO_VAULT_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xF0B580, entity, toggle); }
static void SET_CAN_CLIMB_ON_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xF0B600, entity, toggle); }
static void SET_WAIT_FOR_COLLISIONS_BEFORE_PROBE(Entity entity, BOOL toggle) { invoke<Void>(0xF0B680, entity, toggle); }
static void SET_ENTITY_NOWEAPONDECALS(Entity entity, BOOL p1) { invoke<Void>(0xF0B6E0, entity, p1); }
static void SET_ENTITY_USE_MAX_DISTANCE_FOR_WATER_REFLECTION(Entity entity, BOOL p1) { invoke<Void>(0xF0B750, entity, p1); }
static Vector3 GET_ENTITY_BONE_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0xF0B7B0, entity, boneIndex); }
static Vector3 GET_ENTITY_BONE_POSTION(Entity entity, int boneIndex) { return invoke<Vector3>(0xF0B820, entity, boneIndex); }
static Vector3 GET_ENTITY_BONE_OBJECT_ROTATION(Entity entity, int boneIndex) { return invoke<Vector3>(0xF0B890, entity, boneIndex); }
static Vector3 GET_ENTITY_BONE_OBJECT_POSTION(Entity entity, int boneIndex) { return invoke<Vector3>(0xF0B900, entity, boneIndex); }
static int GET_ENTITY_BONE_COUNT(Entity entity) { return invoke<int>(0xF0B9F0, entity); }
static void ENABLE_ENTITY_BULLET_COLLISION(Entity entity) { invoke<Void>(0xF0BAA0, entity); }
static void SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xF0BB00, entity1, entity2); }
static void SET_ENTITY_CANT_CAUSE_COLLISION_DAMAGED_ENTITY(Entity entity1, Entity entity2) { invoke<Void>(0xF0BB80, entity1, entity2); }
static void SET_ALLOW_MIGRATE_TO_SPECTATOR(Entity entity, Any p1) { invoke<Void>(0xF0BC00, entity, p1); }
static Entity GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(Entity entity, Hash modelHash) { return invoke<Entity>(0xF0BC70, entity, modelHash); }
static void SET_PICK_UP_BY_CARGOBOB_DISABLED(Entity entity, BOOL toggle) { invoke<Void>(0xF0BCA0, entity, toggle); }
static void SET_DECISION_MAKER(Ped ped, Hash name) { invoke<Void>(0xF0D4D0, ped, name); }
static void CLEAR_DECISION_MAKER_EVENT_RESPONSE(Hash name, int eventType) { invoke<Void>(0xF0D530, name, eventType); }
static void BLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xF0D570, name, eventType); }
static void UNBLOCK_DECISION_MAKER_EVENT(Hash name, int eventType) { invoke<Void>(0xF0D5A0, name, eventType); }
static int ADD_SHOCKING_EVENT_AT_POSITION(int eventType, float x, float y, float z, float duration) { return invoke<int>(0xF0D5E0, eventType, x, y, z, duration); }
static int ADD_SHOCKING_EVENT_FOR_ENTITY(int eventType, Entity entity, float duration) { return invoke<int>(0xF0D670, eventType, entity, duration); }
static BOOL IS_SHOCKING_EVENT_IN_SPHERE(int eventType, float x, float y, float z, float radius) { return invoke<BOOL>(0xF0D720, eventType, x, y, z, radius); }
static BOOL REMOVE_SHOCKING_EVENT(ScrHandle event) { return invoke<BOOL>(0xF0D750, event); }
static void REMOVE_ALL_SHOCKING_EVENTS(BOOL p0) { invoke<Void>(0xF0D780, p0); }
static void REMOVE_SHOCKING_EVENT_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xF0D7A0); }
static void SUPPRESS_SHOCKING_EVENTS_NEXT_FRAME() { invoke<Void>(0xF0D7B0); }
static void SUPPRESS_SHOCKING_EVENT_TYPE_NEXT_FRAME(int eventType) { invoke<Void>(0xF0D7C0, eventType); }
static void SUPPRESS_AGITATION_EVENTS_NEXT_FRAME() { invoke<Void>(0xF0D7E0); }
static int GET_NUM_TATTOO_SHOP_DLC_ITEMS(int character) { return invoke<int>(0xEF6D60, character); }
static BOOL GET_TATTOO_SHOP_DLC_ITEM_DATA(int characterType, int decorationIndex, Any* outComponent) { return invoke<BOOL>(0xEF6D90, characterType, decorationIndex, outComponent); }
static int GET_TATTOO_SHOP_DLC_ITEM_INDEX(Hash overlayHash, Any p1, int character) { return invoke<int>(0xEF6E40, overlayHash, p1, character); }
static void INIT_SHOP_PED_COMPONENT(Any* outComponent) { invoke<Void>(0xEF6E80, outComponent); }
static void INIT_SHOP_PED_PROP(Any* outProp) { invoke<Void>(0xEF6EC0, outProp); }
static int SETUP_SHOP_PED_APPAREL_QUERY(int p0, int p1, int p2, int p3) { return invoke<int>(0xEF6F00, p0, p1, p2, p3); }
static int SETUP_SHOP_PED_APPAREL_QUERY_TU(int character, int p1, int p2, BOOL p3, int p4, int componentId) { return invoke<int>(0xEF6F80, character, p1, p2, p3, p4, componentId); }
static void GET_SHOP_PED_QUERY_COMPONENT(int componentId, Any* outComponent) { invoke<Void>(0xEF6FF0, componentId, outComponent); }
static int GET_SHOP_PED_QUERY_COMPONENT_INDEX(Hash componentHash) { return invoke<int>(0xEF7000, componentHash); }
static void GET_SHOP_PED_COMPONENT(Hash componentHash, Any* outComponent) { invoke<Void>(0xEF7030, componentHash, outComponent); }
static void GET_SHOP_PED_QUERY_PROP(int componentId, Any* outProp) { invoke<Void>(0xEF7040, componentId, outProp); }
static int GET_SHOP_PED_QUERY_PROP_INDEX(Hash componentHash) { return invoke<int>(0xEF7050, componentHash); }
static void GET_SHOP_PED_PROP(Hash componentHash, Any* outProp) { invoke<Void>(0xEF7080, componentHash, outProp); }
static Hash GET_HASH_NAME_FOR_COMPONENT(Entity entity, int componentId, int drawableVariant, int textureVariant) { return invoke<Hash>(0xEF7090, entity, componentId, drawableVariant, textureVariant); }
static Hash GET_HASH_NAME_FOR_PROP(Entity entity, int componentId, int propIndex, int propTextureIndex) { return invoke<Hash>(0xEF70D0, entity, componentId, propIndex, propTextureIndex); }
static int GET_SHOP_PED_APPAREL_VARIANT_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xEF7110, componentHash); }
static int GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(Hash propHash) { return invoke<int>(0xEF7140, propHash); }
static void GET_VARIANT_COMPONENT(Hash componentHash, int variantComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xEF7170, componentHash, variantComponentIndex, nameHash, enumValue, componentType); }
static void GET_VARIANT_PROP(Hash componentHash, int variantPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0xEF71A0, componentHash, variantPropIndex, nameHash, enumValue, anchorPoint); }
static int GET_SHOP_PED_APPAREL_FORCED_COMPONENT_COUNT(Hash componentHash) { return invoke<int>(0xEF71D0, componentHash); }
static int GET_SHOP_PED_APPAREL_FORCED_PROP_COUNT(Hash componentHash) { return invoke<int>(0xEF7200, componentHash); }
static void GET_FORCED_COMPONENT(Hash componentHash, int forcedComponentIndex, Hash* nameHash, int* enumValue, int* componentType) { invoke<Void>(0xEF7230, componentHash, forcedComponentIndex, nameHash, enumValue, componentType); }
static void GET_FORCED_PROP(Hash componentHash, int forcedPropIndex, Hash* nameHash, int* enumValue, int* anchorPoint) { invoke<Void>(0xEF7260, componentHash, forcedPropIndex, nameHash, enumValue, anchorPoint); }
static BOOL DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Hash componentHash, Hash restrictionTagHash, int componentId) { return invoke<BOOL>(0xEF7290, componentHash, restrictionTagHash, componentId); }
static BOOL DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xEF72C0, ped, componentId, restrictionTagHash); }
static BOOL DOES_CURRENT_PED_PROP_HAVE_RESTRICTION_TAG(Ped ped, int componentId, Hash restrictionTagHash) { return invoke<BOOL>(0xEF7370, ped, componentId, restrictionTagHash); }
static int SETUP_SHOP_PED_OUTFIT_QUERY(int character, BOOL p1) { return invoke<int>(0xEF7420, character, p1); }
static void GET_SHOP_PED_QUERY_OUTFIT(int outfitIndex, Any* outfit) { invoke<Void>(0xEF7460, outfitIndex, outfit); }
static void GET_SHOP_PED_OUTFIT(Any p0, Any* p1) { invoke<Void>(0xEF7470, p0, p1); }
static int GET_SHOP_PED_OUTFIT_LOCATE(Any p0) { return invoke<int>(0xEF7480, p0); }
static BOOL GET_SHOP_PED_OUTFIT_PROP_VARIANT(Hash outfitHash, int variantIndex, Any* outPropVariant) { return invoke<BOOL>(0xEF74C0, outfitHash, variantIndex, outPropVariant); }
static BOOL GET_SHOP_PED_OUTFIT_COMPONENT_VARIANT(Hash outfitHash, int variantIndex, Any* outComponentVariant) { return invoke<BOOL>(0xEF7540, outfitHash, variantIndex, outComponentVariant); }
static int GET_NUM_DLC_VEHICLES() { return invoke<int>(0xEF75C0); }
static Hash GET_DLC_VEHICLE_MODEL(int dlcVehicleIndex) { return invoke<Hash>(0xEF75E0, dlcVehicleIndex); }
static BOOL GET_DLC_VEHICLE_DATA(int dlcVehicleIndex, Any* outData) { return invoke<BOOL>(0xEF7610, dlcVehicleIndex, outData); }
static int GET_DLC_VEHICLE_FLAGS(int dlcVehicleIndex) { return invoke<int>(0xEF7660, dlcVehicleIndex); }
static int GET_NUM_DLC_WEAPONS() { return invoke<int>(0xEF76A0); }
static int GET_NUM_DLC_WEAPONS_SP() { return invoke<int>(0xEF76C0); }
static BOOL GET_DLC_WEAPON_DATA(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xEF76F0, dlcWeaponIndex, outData); }
static BOOL GET_DLC_WEAPON_DATA_SP(int dlcWeaponIndex, Any* outData) { return invoke<BOOL>(0xEF7720, dlcWeaponIndex, outData); }
static int GET_NUM_DLC_WEAPON_COMPONENTS(int dlcWeaponIndex) { return invoke<int>(0xEF7770, dlcWeaponIndex); }
static int GET_NUM_DLC_WEAPON_COMPONENTS_SP(int dlcWeaponIndex) { return invoke<int>(0xEF77A0, dlcWeaponIndex); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xEF77D0, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static BOOL GET_DLC_WEAPON_COMPONENT_DATA_SP(int dlcWeaponIndex, int dlcWeapCompIndex, Any* ComponentDataPtr) { return invoke<BOOL>(0xEF7800, dlcWeaponIndex, dlcWeapCompIndex, ComponentDataPtr); }
static BOOL IS_CONTENT_ITEM_LOCKED(Hash itemHash) { return invoke<BOOL>(0xEF7860, itemHash); }
static BOOL IS_DLC_VEHICLE_MOD(Hash hash) { return invoke<BOOL>(0xEF7890, hash); }
static Hash GET_DLC_VEHICLE_MOD_LOCK_HASH(Hash hash) { return invoke<Hash>(0xEF78F0, hash); }
static void EXECUTE_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0xEF7950, hash); }
static void REVERT_CONTENT_CHANGESET_GROUP_FOR_ALL(Hash hash) { invoke<Void>(0xEF7970, hash); }
static FireId START_SCRIPT_FIRE(float X, float Y, float Z, int maxChildren, BOOL isGasFire) { return invoke<FireId>(0xF0ED80, X, Y, Z, maxChildren, isGasFire); }
static void REMOVE_SCRIPT_FIRE(FireId fireHandle) { invoke<Void>(0xF0EE50, fireHandle); }
static FireId START_ENTITY_FIRE(Entity entity) { return invoke<FireId>(0xF0EE90, entity); }
static void STOP_ENTITY_FIRE(Entity entity) { invoke<Void>(0xF0EF10, entity); }
static BOOL IS_ENTITY_ON_FIRE(Entity entity) { return invoke<BOOL>(0xF0EF80, entity); }
static int GET_NUMBER_OF_FIRES_IN_RANGE(float x, float y, float z, float radius) { return invoke<int>(0xF0EFF0, x, y, z, radius); }
static void SET_FLAMMABILITY_MULTIPLIER(float p0) { invoke<Void>(0xF0F030, p0); }
static void STOP_FIRE_IN_RANGE(float x, float y, float z, float radius) { invoke<Void>(0xF0F070, x, y, z, radius); }
static BOOL GET_CLOSEST_FIRE_POS(Vector3* outPosition, float x, float y, float z) { return invoke<BOOL>(0xF0F0A0, outPosition, x, y, z); }
static void ADD_EXPLOSION(float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake, BOOL noDamage) { invoke<Void>(0xF0F170, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake, noDamage); }
static void ADD_OWNED_EXPLOSION(Ped ped, float x, float y, float z, int explosionType, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xF0F1B0, ped, x, y, z, explosionType, damageScale, isAudible, isInvisible, cameraShake); }
static void ADD_EXPLOSION_WITH_USER_VFX(float x, float y, float z, int explosionType, Hash explosionFx, float damageScale, BOOL isAudible, BOOL isInvisible, float cameraShake) { invoke<Void>(0xF0F1F0, x, y, z, explosionType, explosionFx, damageScale, isAudible, isInvisible, cameraShake); }
static BOOL IS_EXPLOSION_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xF0F220, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL IS_EXPLOSION_ACTIVE_IN_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xF0F2F0, explosionType, x1, y1, z1, x2, y2, z2); }
static BOOL IS_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<BOOL>(0xF0F3C0, explosionType, x, y, z, radius); }
static Entity GET_OWNER_OF_EXPLOSION_IN_SPHERE(int explosionType, float x, float y, float z, float radius) { return invoke<Entity>(0xF0F440, explosionType, x, y, z, radius); }
static BOOL IS_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<BOOL>(0xF0F4D0, explosionType, x1, y1, z1, x2, y2, z2, width); }
static Entity GET_OWNER_OF_EXPLOSION_IN_ANGLED_AREA(int explosionType, float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<Entity>(0xF0F560, explosionType, x1, y1, z1, x2, y2, z2, radius); }
static void SET_DEBUG_LINES_AND_SPHERES_DRAWING_ACTIVE(BOOL enabled) { invoke<Void>(0xF1FAE0, enabled); }
static void DRAW_DEBUG_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xF1FAF0, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void DRAW_DEBUG_LINE_WITH_TWO_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, int r1, int g1, int b1, int r2, int g2, int b2, int alpha1, int alpha2) { invoke<Void>(0xF1FB00, x1, y1, z1, x2, y2, z2, r1, g1, b1, r2, g2, b2, alpha1, alpha2); }
static void DRAW_DEBUG_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FB10, x, y, z, radius, red, green, blue, alpha); }
static void DRAW_DEBUG_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int r, int g, int b, int alpha) { invoke<Void>(0xF1FB20, x1, y1, z1, x2, y2, z2, r, g, b, alpha); }
static void DRAW_DEBUG_CROSS(float x, float y, float z, float size, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FB30, x, y, z, size, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FB40, text, x, y, z, red, green, blue, alpha); }
static void DRAW_DEBUG_TEXT_2D(const char* text, float x, float y, float z, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FB50, text, x, y, z, red, green, blue, alpha); }
static void DRAW_LINE(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FB60, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void DRAW_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FC30, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha); }
static void DRAW_TEXTURED_POLY(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, int red, int green, int blue, int alpha, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xF1FD10, x1, y1, z1, x2, y2, z2, x3, y3, z3, red, green, blue, alpha, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); }
static void DRAW_TEXTURED_POLY_WITH_THREE_COLOURS(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float red1, float green1, float blue1, int alpha1, float red2, float green2, float blue2, int alpha2, float red3, float green3, float blue3, int alpha3, const char* textureDict, const char* textureName, float u1, float v1, float w1, float u2, float v2, float w2, float u3, float v3, float w3) { invoke<Void>(0xF1FD80, x1, y1, z1, x2, y2, z2, x3, y3, z3, red1, green1, blue1, alpha1, red2, green2, blue2, alpha2, red3, green3, blue3, alpha3, textureDict, textureName, u1, v1, w1, u2, v2, w2, u3, v3, w3); }
static void DRAW_BOX(float x1, float y1, float z1, float x2, float y2, float z2, int red, int green, int blue, int alpha) { invoke<Void>(0xF1FE10, x1, y1, z1, x2, y2, z2, red, green, blue, alpha); }
static void SET_BACKFACECULLING(BOOL toggle) { invoke<Void>(0xF1FEE0, toggle); }
static void SET_DEPTHWRITING(BOOL toggle) { invoke<Void>(0xF1FF00, toggle); }
static BOOL BEGIN_TAKE_MISSION_CREATOR_PHOTO() { return invoke<BOOL>(0xF1FF20); }
static int GET_STATUS_OF_TAKE_MISSION_CREATOR_PHOTO() { return invoke<int>(0xF1FF40); }
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO() { invoke<Void>(0xF1FF60); }
static BOOL LOAD_MISSION_CREATOR_PHOTO(Any* p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF1FF70, p0, p1, p2, p3); }
static int GET_STATUS_OF_LOAD_MISSION_CREATOR_PHOTO(Any* p0) { return invoke<int>(0xF1FFD0, p0); }
static BOOL BEGIN_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<BOOL>(0xF20000); }
static int GET_STATUS_OF_CREATE_MISSION_CREATOR_PHOTO_PREVIEW() { return invoke<int>(0xF20030); }
static void FREE_MEMORY_FOR_MISSION_CREATOR_PHOTO_PREVIEW() { invoke<Void>(0xF20060); }
static BOOL BEGIN_TAKE_HIGH_QUALITY_PHOTO() { return invoke<BOOL>(0xF20070); }
static int GET_STATUS_OF_TAKE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xF20090); }
static void FREE_MEMORY_FOR_HIGH_QUALITY_PHOTO() { invoke<Void>(0xF200B0); }
static void SET_TAKEN_PHOTO_IS_MUGSHOT(BOOL toggle) { invoke<Void>(0xF200C0, toggle); }
static void SET_ARENA_THEME_AND_VARIATION_FOR_TAKEN_PHOTO(Any p0, int p1) { invoke<Void>(0xF200E0, p0, p1); }
static void SET_ON_ISLAND_X_FOR_TAKEN_PHOTO(Any p0) { invoke<Void>(0xF200F0, p0); }
static BOOL SAVE_HIGH_QUALITY_PHOTO(int unused) { return invoke<BOOL>(0xF20110, unused); }
static int GET_STATUS_OF_SAVE_HIGH_QUALITY_PHOTO() { return invoke<int>(0xF20130); }
static BOOL BEGIN_CREATE_LOW_QUALITY_COPY_OF_PHOTO(Any p0) { return invoke<BOOL>(0xF20150, p0); }
static int GET_STATUS_OF_CREATE_LOW_QUALITY_COPY_OF_PHOTO(int p0) { return invoke<int>(0xF20180, p0); }
static void FREE_MEMORY_FOR_LOW_QUALITY_PHOTO() { invoke<Void>(0xF201A0); }
static void DRAW_LOW_QUALITY_PHOTO_TO_PHONE(BOOL p0, BOOL p1) { invoke<Void>(0xF201B0, p0, p1); }
static int GET_MAXIMUM_NUMBER_OF_PHOTOS() { return invoke<int>(0xF201D0); }
static int GET_MAXIMUM_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xF201E0); }
static int GET_CURRENT_NUMBER_OF_CLOUD_PHOTOS() { return invoke<int>(0xF201F0); }
static BOOL QUEUE_OPERATION_TO_CREATE_SORTED_LIST_OF_PHOTOS(Any p0) { return invoke<BOOL>(0xF20210, p0); }
static int GET_STATUS_OF_SORTED_LIST_OPERATION(Any p0) { return invoke<int>(0xF20240, p0); }
static void CLEAR_STATUS_OF_SORTED_LIST_OPERATION() { invoke<Void>(0xF20270); }
static BOOL DOES_THIS_PHOTO_SLOT_CONTAIN_A_VALID_PHOTO(Any p0) { return invoke<BOOL>(0xF20280, p0); }
static BOOL LOAD_HIGH_QUALITY_PHOTO(Any p0) { return invoke<BOOL>(0xF20290, p0); }
static int GET_LOAD_HIGH_QUALITY_PHOTO_STATUS(int p0) { return invoke<int>(0xF202A0, p0); }
static void DRAW_LIGHT_WITH_RANGEEX(float x, float y, float z, int r, int g, int b, float range, float intensity, float shadow) { invoke<Void>(0xF202B0, x, y, z, r, g, b, range, intensity, shadow); }
static void DRAW_LIGHT_WITH_RANGE(float posX, float posY, float posZ, int colorR, int colorG, int colorB, float range, float intensity) { invoke<Void>(0xF202E0, posX, posY, posZ, colorR, colorG, colorB, range, intensity); }
static void DRAW_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float hardness, float radius, float falloff) { invoke<Void>(0xF20310, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, hardness, radius, falloff); }
static void DRAW_SHADOWED_SPOT_LIGHT(float posX, float posY, float posZ, float dirX, float dirY, float dirZ, int colorR, int colorG, int colorB, float distance, float brightness, float roundness, float radius, float falloff, int shadowId) { invoke<Void>(0xF20340, posX, posY, posZ, dirX, dirY, dirZ, colorR, colorG, colorB, distance, brightness, roundness, radius, falloff, shadowId); }
static void FADE_UP_PED_LIGHT(float p0) { invoke<Void>(0xF20380, p0); }
static void UPDATE_LIGHTS_ON_ENTITY(Entity entity) { invoke<Void>(0xF20390, entity); }
static void SET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE(Any p0) { invoke<Void>(0xF203E0, p0); }
static float GET_LIGHT_OVERRIDE_MAX_INTENSITY_SCALE() { return invoke<float>(0xF203F0); }
static void DRAW_MARKER(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, int p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts) { invoke<Void>(0xF20410, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts); }
static void DRAW_MARKER_EX(int type, float posX, float posY, float posZ, float dirX, float dirY, float dirZ, float rotX, float rotY, float rotZ, float scaleX, float scaleY, float scaleZ, int red, int green, int blue, int alpha, BOOL bobUpAndDown, BOOL faceCamera, Any p19, BOOL rotate, const char* textureDict, const char* textureName, BOOL drawOnEnts, BOOL p24, BOOL p25) { invoke<Void>(0xF204F0, type, posX, posY, posZ, dirX, dirY, dirZ, rotX, rotY, rotZ, scaleX, scaleY, scaleZ, red, green, blue, alpha, bobUpAndDown, faceCamera, p19, rotate, textureDict, textureName, drawOnEnts, p24, p25); }
static void DRAW_MARKER_SPHERE(float x, float y, float z, float radius, int red, int green, int blue, float alpha) { invoke<Void>(0xF205F0, x, y, z, radius, red, green, blue, alpha); }
static int CREATE_CHECKPOINT(int type, float posX1, float posY1, float posZ1, float posX2, float posY2, float posZ2, float diameter, int red, int green, int blue, int alpha, int reserved) { return invoke<int>(0xF20690, type, posX1, posY1, posZ1, posX2, posY2, posZ2, diameter, red, green, blue, alpha, reserved); }
static void SET_CHECKPOINT_INSIDE_CYLINDER_HEIGHT_SCALE(int checkpoint, float scale) { invoke<Void>(0xF20770, checkpoint, scale); }
static void SET_CHECKPOINT_INSIDE_CYLINDER_SCALE(int checkpoint, float scale) { invoke<Void>(0xF207C0, checkpoint, scale); }
static void SET_CHECKPOINT_CYLINDER_HEIGHT(int checkpoint, float nearHeight, float farHeight, float radius) { invoke<Void>(0xF20810, checkpoint, nearHeight, farHeight, radius); }
static void SET_CHECKPOINT_RGBA(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xF20880, checkpoint, red, green, blue, alpha); }
static void SET_CHECKPOINT_RGBA2(int checkpoint, int red, int green, int blue, int alpha) { invoke<Void>(0xF20900, checkpoint, red, green, blue, alpha); }
static void SET_CHECKPOINT_CLIPPLANE_WITH_POS_NORM(int checkpoint, float posX, float posY, float posZ, float unkX, float unkY, float unkZ) { invoke<Void>(0xF20980, checkpoint, posX, posY, posZ, unkX, unkY, unkZ); }
static void SET_CHECKPOINT_FORCE_OLD_ARROW_POINTING(int checkpoint) { invoke<Void>(0xF20A00, checkpoint); }
static void SET_CHECKPOINT_DECAL_ROT_ALIGNED_TO_CAMERA_ROT(int checkpoint) { invoke<Void>(0xF20A40, checkpoint); }
static void SET_CHECKPOINT_FORCE_DIRECTION(int checkpoint) { invoke<Void>(0xF20A80, checkpoint); }
static void SET_CHECKPOINT_DIRECTION(int checkpoint, float posX, float posY, float posZ) { invoke<Void>(0xF20AC0, checkpoint, posX, posY, posZ); }
static void DELETE_CHECKPOINT(int checkpoint) { invoke<Void>(0xF20B20, checkpoint); }
static void DONT_RENDER_IN_GAME_UI(BOOL p0) { invoke<Void>(0xF20B60, p0); }
static void FORCE_RENDER_IN_GAME_UI(BOOL toggle) { invoke<Void>(0xF20B80, toggle); }
static void REQUEST_STREAMED_TEXTURE_DICT(const char* textureDict, BOOL p1) { invoke<Void>(0xF20BA0, textureDict, p1); }
static BOOL HAS_STREAMED_TEXTURE_DICT_LOADED(const char* textureDict) { return invoke<BOOL>(0xF20C30, textureDict); }
static void SET_STREAMED_TEXTURE_DICT_AS_NO_LONGER_NEEDED(const char* textureDict) { invoke<Void>(0xF20C90, textureDict); }
static void DRAW_RECT(float x, float y, float width, float height, int r, int g, int b, int a, BOOL p8) { invoke<Void>(0xF20CF0, x, y, width, height, r, g, b, a, p8); }
static void SET_SCRIPT_GFX_DRAW_BEHIND_PAUSEMENU(BOOL toggle) { invoke<Void>(0xF20D30, toggle); }
static void SET_SCRIPT_GFX_DRAW_ORDER(int drawOrder) { invoke<Void>(0xF20D50, drawOrder); }
static void SET_SCRIPT_GFX_ALIGN(int horizontalAlign, int verticalAlign) { invoke<Void>(0xF20DE0, horizontalAlign, verticalAlign); }
static void RESET_SCRIPT_GFX_ALIGN() { invoke<Void>(0xF20E00); }
static void SET_SCRIPT_GFX_ALIGN_PARAMS(float x, float y, float w, float h) { invoke<Void>(0xF20E20, x, y, w, h); }
static void GET_SCRIPT_GFX_ALIGN_POSITION(float x, float y, float* calculatedX, float* calculatedY) { invoke<Void>(0xF20E60, x, y, calculatedX, calculatedY); }
static float GET_SAFE_ZONE_SIZE() { return invoke<float>(0xF20EE0); }
static void DRAW_SPRITE(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, BOOL p11, Any p12) { invoke<Void>(0xF20F00, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11, p12); }
static void DRAW_SPRITE_ARX(const char* textureDict, const char* textureName, float x, float y, float width, float height, float p6, int red, int green, int blue, int alpha, Any p11, Any p12) { invoke<Void>(0xF21060, textureDict, textureName, x, y, width, height, p6, red, green, blue, alpha, p11, p12); }
static void DRAW_SPRITE_NAMED_RENDERTARGET(const char* textureDict, const char* textureName, float screenX, float screenY, float width, float height, float heading, int red, int green, int blue, int alpha, Any p11) { invoke<Void>(0xF211C0, textureDict, textureName, screenX, screenY, width, height, heading, red, green, blue, alpha, p11); }
static void DRAW_SPRITE_ARX_WITH_UV(const char* textureDict, const char* textureName, float x, float y, float width, float height, float u1, float v1, float u2, float v2, float heading, int red, int green, int blue, int alpha, Any p15) { invoke<Void>(0xF21220, textureDict, textureName, x, y, width, height, u1, v1, u2, v2, heading, red, green, blue, alpha, p15); }
static int ADD_ENTITY_ICON(Entity entity, const char* icon) { return invoke<int>(0xF213A0, entity, icon); }
static void SET_ENTITY_ICON_VISIBILITY(Entity entity, BOOL toggle) { invoke<Void>(0xF21430, entity, toggle); }
static void SET_ENTITY_ICON_COLOR(Entity entity, int red, int green, int blue, int alpha) { invoke<Void>(0xF21490, entity, red, green, blue, alpha); }
static void SET_DRAW_ORIGIN(float x, float y, float z, BOOL p3) { invoke<Void>(0xF21530, x, y, z, p3); }
static void CLEAR_DRAW_ORIGIN() { invoke<Void>(0xF215F0); }
static int SET_BINK_MOVIE(const char* name) { return invoke<int>(0xF21600, name); }
static void PLAY_BINK_MOVIE(int binkMovie) { invoke<Void>(0xF21690, binkMovie); }
static void STOP_BINK_MOVIE(int binkMovie) { invoke<Void>(0xF216D0, binkMovie); }
static void RELEASE_BINK_MOVIE(int binkMovie) { invoke<Void>(0xF21710, binkMovie); }
static void DRAW_BINK_MOVIE(int binkMovie, float p1, float p2, float p3, float p4, float p5, int r, int g, int b, int a) { invoke<Void>(0xF21760, binkMovie, p1, p2, p3, p4, p5, r, g, b, a); }
static void SET_BINK_MOVIE_TIME(int binkMovie, float progress) { invoke<Void>(0xF21890, binkMovie, progress); }
static float GET_BINK_MOVIE_TIME(int binkMovie) { return invoke<float>(0xF218F0, binkMovie); }
static void SET_BINK_MOVIE_VOLUME(int binkMovie, float value) { invoke<Void>(0xF21950, binkMovie, value); }
static void ATTACH_TV_AUDIO_TO_ENTITY(Entity entity) { invoke<Void>(0xF21990, entity); }
static void SET_BINK_MOVIE_AUDIO_FRONTEND(int binkMovie, BOOL p1) { invoke<Void>(0xF21A00, binkMovie, p1); }
static void SET_TV_AUDIO_FRONTEND(BOOL toggle) { invoke<Void>(0xF21A40, toggle); }
static void SET_BINK_SHOULD_SKIP(int binkMovie, BOOL bShouldSkip) { invoke<Void>(0xF21A60, binkMovie, bShouldSkip); }
static int LOAD_MOVIE_MESH_SET(const char* movieMeshSetName) { return invoke<int>(0xF21AB0, movieMeshSetName); }
static void RELEASE_MOVIE_MESH_SET(int movieMeshSet) { invoke<Void>(0xF21B20, movieMeshSet); }
static int QUERY_MOVIE_MESH_SET_STATE(Any p0) { return invoke<int>(0xF21B60, p0); }
static void GET_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xF21BA0, x, y); }
static void GET_ACTUAL_SCREEN_RESOLUTION(int* x, int* y) { invoke<Void>(0xF21BC0, x, y); }
static float GET_ASPECT_RATIO(BOOL b) { return invoke<float>(0xF21BF0, b); }
static float GET_SCREEN_ASPECT_RATIO() { return invoke<float>(0xF21C20); }
static BOOL GET_IS_WIDESCREEN() { return invoke<BOOL>(0xF21C50); }
static BOOL GET_IS_HIDEF() { return invoke<BOOL>(0xF21C70); }
static void ADJUST_NEXT_POS_SIZE_AS_NORMALIZED_16_9() { invoke<Void>(0xF21C90); }
static void SET_NIGHTVISION(BOOL toggle) { invoke<Void>(0xF21CA0, toggle); }
static BOOL GET_REQUESTINGNIGHTVISION() { return invoke<BOOL>(0xF21CC0); }
static BOOL GET_USINGNIGHTVISION() { return invoke<BOOL>(0xF21CD0); }
static void SET_EXPOSURETWEAK(BOOL toggle) { invoke<Void>(0xF21D20, toggle); }
static void FORCE_EXPOSURE_READBACK(BOOL toggle) { invoke<Void>(0xF21D40, toggle); }
static void OVERRIDE_NIGHTVISION_LIGHT_RANGE(float p0) { invoke<Void>(0xF21D60, p0); }
static void SET_NOISEOVERIDE(BOOL toggle) { invoke<Void>(0xF21D70, toggle); }
static void SET_NOISINESSOVERIDE(float value) { invoke<Void>(0xF21D90, value); }
static BOOL GET_SCREEN_COORD_FROM_WORLD_COORD(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<BOOL>(0xF21DB0, worldX, worldY, worldZ, screenX, screenY); }
static Vector3 GET_TEXTURE_RESOLUTION(const char* textureDict, const char* textureName) { return invoke<Vector3>(0xF21E20, textureDict, textureName); }
static BOOL OVERRIDE_PED_CREW_LOGO_TEXTURE(Ped ped, const char* txd, const char* txn) { return invoke<BOOL>(0xF21E90, ped, txd, txn); }
static void SET_DISTANCE_BLUR_STRENGTH_OVERRIDE(float p0) { invoke<Void>(0xF21EC0, p0); }
static void SET_FLASH(float p0, float p1, float fadeIn, float duration, float fadeOut) { invoke<Void>(0xF21EE0, p0, p1, fadeIn, duration, fadeOut); }
static void DISABLE_OCCLUSION_THIS_FRAME() { invoke<Void>(0xF21F10); }
static void SET_ARTIFICIAL_LIGHTS_STATE(BOOL state) { invoke<Void>(0xF21F50, state); }
static void SET_ARTIFICIAL_VEHICLE_LIGHTS_STATE(BOOL toggle) { invoke<Void>(0xF21F70, toggle); }
static void DISABLE_HDTEX_THIS_FRAME() { invoke<Void>(0xF21F90); }
static int CREATE_TRACKED_POINT() { return invoke<int>(0xF21FA0); }
static void SET_TRACKED_POINT_INFO(int point, float x, float y, float z, float radius) { invoke<Void>(0xF21FC0, point, x, y, z, radius); }
static BOOL IS_TRACKED_POINT_VISIBLE(int point) { return invoke<BOOL>(0xF22070, point); }
static void DESTROY_TRACKED_POINT(int point) { invoke<Void>(0xF220A0, point); }
static int SET_GRASS_CULL_SPHERE(float p0, float p1, float p2, float p3) { return invoke<int>(0xF220B0, p0, p1, p2, p3); }
static void REMOVE_GRASS_CULL_SPHERE(int handle) { invoke<Void>(0xF220C0, handle); }
static void PROCGRASS_ENABLE_CULLSPHERE(int handle, float x, float y, float z, float scale) { invoke<Void>(0xF220D0, handle, x, y, z, scale); }
static void PROCGRASS_DISABLE_CULLSPHERE(int handle) { invoke<Void>(0xF22130, handle); }
static BOOL PROCGRASS_IS_CULLSPHERE_ENABLED(int handle) { return invoke<BOOL>(0xF22150, handle); }
static void PROCGRASS_ENABLE_AMBSCALESCAN() { invoke<Void>(0xF22170); }
static void PROCGRASS_DISABLE_AMBSCALESCAN() { invoke<Void>(0xF22180); }
static void DISABLE_PROCOBJ_CREATION() { invoke<Void>(0xF22190); }
static void ENABLE_PROCOBJ_CREATION() { invoke<Void>(0xF221A0); }
static void GRASSBATCH_ENABLE_FLATTENING_EXT_IN_SPHERE(float x, float y, float z, Any p3, float p4, float p5, float p6, float scale) { invoke<Void>(0xF221B0, x, y, z, p3, p4, p5, p6, scale); }
static void GRASSBATCH_ENABLE_FLATTENING_IN_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6) { invoke<Void>(0xF22240, x, y, z, radius, p4, p5, p6); }
static void GRASSBATCH_DISABLE_FLATTENING() { invoke<Void>(0xF222D0); }
static void CASCADE_SHADOWS_INIT_SESSION() { invoke<Void>(0xF222E0); }
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS(Any p0, BOOL p1, float p2, float p3, float p4, float p5, BOOL p6, float p7) { invoke<Void>(0xF22300, p0, p1, p2, p3, p4, p5, p6, p7); }
static void CASCADE_SHADOWS_SET_CASCADE_BOUNDS_SCALE(float p0) { invoke<Void>(0xF22340, p0); }
static void CASCADE_SHADOWS_SET_ENTITY_TRACKER_SCALE(float p0) { invoke<Void>(0xF22350, p0); }
static void CASCADE_SHADOWS_SET_SPLIT_Z_EXP_WEIGHT(float p0) { invoke<Void>(0xF22360, p0); }
static void CASCADE_SHADOWS_SET_BOUND_POSITION(Any p0) { invoke<Void>(0xF22370, p0); }
static void CASCADE_SHADOWS_ENABLE_ENTITY_TRACKER(BOOL toggle) { invoke<Void>(0xF22380, toggle); }
static void CASCADE_SHADOWS_SET_SCREEN_SIZE_CHECK_ENABLED(BOOL p0) { invoke<Void>(0xF223A0, p0); }
static void CASCADE_SHADOWS_SET_SHADOW_SAMPLE_TYPE(const char* type) { invoke<Void>(0xF223C0, type); }
static void CASCADE_SHADOWS_CLEAR_SHADOW_SAMPLE_TYPE() { invoke<Void>(0xF223D0); }
static void CASCADE_SHADOWS_SET_AIRCRAFT_MODE(BOOL p0) { invoke<Void>(0xF223E0, p0); }
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_MODE(BOOL p0) { invoke<Void>(0xF22400, p0); }
static void CASCADE_SHADOWS_SET_DYNAMIC_DEPTH_VALUE(float p0) { invoke<Void>(0xF22420, p0); }
static void CASCADE_SHADOWS_ENABLE_FREEZER(BOOL p0) { invoke<Void>(0xF22430, p0); }
static void WATER_REFLECTION_SET_SCRIPT_OBJECT_VISIBILITY(Any p0) { invoke<Void>(0xF22450, p0); }
static void GOLF_TRAIL_SET_ENABLED(BOOL toggle) { invoke<Void>(0xF22470, toggle); }
static void GOLF_TRAIL_SET_PATH(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8) { invoke<Void>(0xF22490, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void GOLF_TRAIL_SET_RADIUS(float p0, float p1, float p2) { invoke<Void>(0xF224E0, p0, p1, p2); }
static void GOLF_TRAIL_SET_COLOUR(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11) { invoke<Void>(0xF22500, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11); }
static void GOLF_TRAIL_SET_TESSELLATION(int p0, int p1) { invoke<Void>(0xF22570, p0, p1); }
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT_ENABLE(BOOL p0) { invoke<Void>(0xF22580, p0); }
static void GOLF_TRAIL_SET_FIXED_CONTROL_POINT(int type, float xPos, float yPos, float zPos, float p4, int red, int green, int blue, int alpha) { invoke<Void>(0xF225A0, type, xPos, yPos, zPos, p4, red, green, blue, alpha); }
static void GOLF_TRAIL_SET_SHADER_PARAMS(float p0, float p1, float p2, float p3, float p4) { invoke<Void>(0xF22660, p0, p1, p2, p3, p4); }
static void GOLF_TRAIL_SET_FACING(BOOL p0) { invoke<Void>(0xF22690, p0); }
static float GOLF_TRAIL_GET_MAX_HEIGHT() { return invoke<float>(0xF226B0); }
static Vector3 GOLF_TRAIL_GET_VISUAL_CONTROL_POINT(int p0) { return invoke<Vector3>(0xF226D0, p0); }
static void SET_SEETHROUGH(BOOL toggle) { invoke<Void>(0xF22700, toggle); }
static BOOL GET_USINGSEETHROUGH() { return invoke<BOOL>(0xF22740); }
static void SEETHROUGH_RESET() { invoke<Void>(0xF22750); }
static void SEETHROUGH_SET_FADE_STARTDISTANCE(float distance) { invoke<Void>(0xF22760, distance); }
static void SEETHROUGH_SET_FADE_ENDDISTANCE(float distance) { invoke<Void>(0xF22780, distance); }
static float SEETHROUGH_GET_MAX_THICKNESS() { return invoke<float>(0xF227A0); }
static void SEETHROUGH_SET_MAX_THICKNESS(float thickness) { invoke<Void>(0xF227C0, thickness); }
static void SEETHROUGH_SET_NOISE_MIN(float amount) { invoke<Void>(0xF227F0, amount); }
static void SEETHROUGH_SET_NOISE_MAX(float amount) { invoke<Void>(0xF22810, amount); }
static void SEETHROUGH_SET_HILIGHT_INTENSITY(float intensity) { invoke<Void>(0xF22830, intensity); }
static void SEETHROUGH_SET_HIGHLIGHT_NOISE(float noise) { invoke<Void>(0xF22850, noise); }
static void SEETHROUGH_SET_HEATSCALE(int index, float heatScale) { invoke<Void>(0xF22870, index, heatScale); }
static void SEETHROUGH_SET_COLOR_NEAR(int red, int green, int blue) { invoke<Void>(0xF228A0, red, green, blue); }
static void SET_MOTIONBLUR_MAX_VEL_SCALER(float p0) { invoke<Void>(0xF22920, p0); }
static float GET_MOTIONBLUR_MAX_VEL_SCALER() { return invoke<float>(0xF22940); }
static void SET_FORCE_MOTIONBLUR(BOOL toggle) { invoke<Void>(0xF22960, toggle); }
static void TOGGLE_PLAYER_DAMAGE_OVERLAY(BOOL toggle) { invoke<Void>(0xF22980, toggle); }
static void RESET_ADAPTATION(int p0) { invoke<Void>(0xF229B0, p0); }
static BOOL TRIGGER_SCREENBLUR_FADE_IN(float transitionTime) { return invoke<BOOL>(0xF229C0, transitionTime); }
static BOOL TRIGGER_SCREENBLUR_FADE_OUT(float transitionTime) { return invoke<BOOL>(0xF22A10, transitionTime); }
static void DISABLE_SCREENBLUR_FADE() { invoke<Void>(0xF22A70); }
static float GET_SCREENBLUR_FADE_CURRENT_TIME() { return invoke<float>(0xF22A80); }
static BOOL IS_SCREENBLUR_FADE_RUNNING() { return invoke<BOOL>(0xF22AA0); }
static void TOGGLE_PAUSED_RENDERPHASES(BOOL toggle) { invoke<Void>(0xF22AE0, toggle); }
static BOOL GET_TOGGLE_PAUSED_RENDERPHASES_STATUS() { return invoke<BOOL>(0xF22B00); }
static void RESET_PAUSED_RENDERPHASES() { invoke<Void>(0xF22B20); }
static void GRAB_PAUSEMENU_OWNERSHIP() { invoke<Void>(0xF22B30); }
static void SET_HIDOF_OVERRIDE(BOOL p0, BOOL p1, float nearplaneOut, float nearplaneIn, float farplaneOut, float farplaneIn) { invoke<Void>(0xF22B50, p0, p1, nearplaneOut, nearplaneIn, farplaneOut, farplaneIn); }
static void SET_LOCK_ADAPTIVE_DOF_DISTANCE(BOOL p0) { invoke<Void>(0xF22BA0, p0); }
static BOOL PHONEPHOTOEDITOR_TOGGLE(BOOL p0) { return invoke<BOOL>(0xF22BC0, p0); }
static BOOL PHONEPHOTOEDITOR_IS_ACTIVE() { return invoke<BOOL>(0xF22C20); }
static BOOL PHONEPHOTOEDITOR_SET_FRAME_TXD(const char* textureDict, BOOL p1) { return invoke<BOOL>(0xF22C40, textureDict, p1); }
static BOOL START_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<BOOL>(0xF22C70, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_AT_COORD(const char* effectName, float xPos, float yPos, float zPos, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<BOOL>(0xF22D50, effectName, xPos, yPos, zPos, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF22E40, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF22ED0, effectName, ped, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF22F60, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static BOOL START_NETWORKED_PARTICLE_FX_NON_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF22FF0, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, scale, axisX, axisY, axisZ); }
static BOOL START_PARTICLE_FX_NON_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float offsetX, float offsetY, float offsetZ, float rotX, float rotY, float rotZ, int boneIndex, float scale, BOOL axisX, BOOL axisY, BOOL axisZ) { return invoke<BOOL>(0xF23080, effectName, entity, offsetX, offsetY, offsetZ, rotX, rotY, rotZ, boneIndex, scale, axisX, axisY, axisZ); }
static void SET_PARTICLE_FX_NON_LOOPED_COLOUR(float r, float g, float b) { invoke<Void>(0xF23100, r, g, b); }
static void SET_PARTICLE_FX_NON_LOOPED_ALPHA(float alpha) { invoke<Void>(0xF23190, alpha); }
static void SET_PARTICLE_FX_NON_LOOPED_SCALE(float scale) { invoke<Void>(0xF231C0, scale); }
static void SET_PARTICLE_FX_NON_LOOPED_EMITTER_SIZE(float p0, float p1, float scale) { invoke<Void>(0xF231D0, p0, p1, scale); }
static void SET_PARTICLE_FX_FORCE_VEHICLE_INTERIOR(BOOL toggle) { invoke<Void>(0xF231F0, toggle); }
static int START_PARTICLE_FX_LOOPED_AT_COORD(const char* effectName, float x, float y, float z, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, BOOL p11) { return invoke<int>(0xF23210, effectName, x, y, z, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, p11); }
static int START_PARTICLE_FX_LOOPED_ON_PED_BONE(const char* effectName, Ped ped, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF23270, effectName, ped, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF232D0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis); }
static int START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis) { return invoke<int>(0xF23360, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis); }
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xF233F0, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, scale, xAxis, yAxis, zAxis, r, g, b, a); }
static int START_NETWORKED_PARTICLE_FX_LOOPED_ON_ENTITY_BONE(const char* effectName, Entity entity, float xOffset, float yOffset, float zOffset, float xRot, float yRot, float zRot, int boneIndex, float scale, BOOL xAxis, BOOL yAxis, BOOL zAxis, float r, float g, float b, float a) { return invoke<int>(0xF23480, effectName, entity, xOffset, yOffset, zOffset, xRot, yRot, zRot, boneIndex, scale, xAxis, yAxis, zAxis, r, g, b, a); }
static void STOP_PARTICLE_FX_LOOPED(int ptfxHandle, BOOL p1) { invoke<Void>(0xF23510, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX(int ptfxHandle, BOOL p1) { invoke<Void>(0xF23530, ptfxHandle, p1); }
static void REMOVE_PARTICLE_FX_FROM_ENTITY(Entity entity) { invoke<Void>(0xF23550, entity); }
static void REMOVE_PARTICLE_FX_IN_RANGE(float X, float Y, float Z, float radius) { invoke<Void>(0xF235A0, X, Y, Z, radius); }
static void FORCE_PARTICLE_FX_IN_VEHICLE_INTERIOR(Any p0, Any p1) { invoke<Void>(0xF235D0, p0, p1); }
static BOOL DOES_PARTICLE_FX_LOOPED_EXIST(int ptfxHandle) { return invoke<BOOL>(0xF235F0, ptfxHandle); }
static void SET_PARTICLE_FX_LOOPED_OFFSETS(int ptfxHandle, float x, float y, float z, float rotX, float rotY, float rotZ) { invoke<Void>(0xF23620, ptfxHandle, x, y, z, rotX, rotY, rotZ); }
static void SET_PARTICLE_FX_LOOPED_EVOLUTION(int ptfxHandle, const char* propertyName, float amount, BOOL noNetwork) { invoke<Void>(0xF23670, ptfxHandle, propertyName, amount, noNetwork); }
static void SET_PARTICLE_FX_LOOPED_COLOUR(int ptfxHandle, float r, float g, float b, BOOL p4) { invoke<Void>(0xF23690, ptfxHandle, r, g, b, p4); }
static void SET_PARTICLE_FX_LOOPED_ALPHA(int ptfxHandle, float alpha) { invoke<Void>(0xF236C0, ptfxHandle, alpha); }
static void SET_PARTICLE_FX_LOOPED_SCALE(int ptfxHandle, float scale) { invoke<Void>(0xF236D0, ptfxHandle, scale); }
static void SET_PARTICLE_FX_LOOPED_FAR_CLIP_DIST(int ptfxHandle, float range) { invoke<Void>(0xF236E0, ptfxHandle, range); }
static void SET_PARTICLE_FX_CAM_INSIDE_VEHICLE(BOOL p0) { invoke<Void>(0xF236F0, p0); }
static void SET_PARTICLE_FX_CAM_INSIDE_NONPLAYER_VEHICLE(Vehicle vehicle, BOOL p1) { invoke<Void>(0xF23710, vehicle, p1); }
static void SET_PARTICLE_FX_SHOOTOUT_BOAT(Any p0) { invoke<Void>(0xF23790, p0); }
static void CLEAR_PARTICLE_FX_SHOOTOUT_BOAT() { invoke<Void>(0xF23800); }
static void SET_PARTICLE_FX_BLOOD_SCALE(Any p0) { invoke<Void>(0xF23830, p0); }
static void DISABLE_IN_WATER_PTFX(BOOL toggle) { invoke<Void>(0xF23870, toggle); }
static void DISABLE_DOWNWASH_PTFX(BOOL toggle) { invoke<Void>(0xF238A0, toggle); }
static void SET_PARTICLE_FX_SLIPSTREAM_LODRANGE_SCALE(float scale) { invoke<Void>(0xF238D0, scale); }
static void ENABLE_CLOWN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xF23910, toggle); }
static void ENABLE_ALIEN_BLOOD_VFX(BOOL toggle) { invoke<Void>(0xF23950, toggle); }
static void SET_PARTICLE_FX_BULLET_IMPACT_SCALE(float scale) { invoke<Void>(0xF23990, scale); }
static void SET_PARTICLE_FX_BULLET_IMPACT_LODRANGE_SCALE(float p0) { invoke<Void>(0xF239D0, p0); }
static void SET_PARTICLE_FX_BULLET_TRACE_NO_ANGLE_REJECT(BOOL p0) { invoke<Void>(0xF23A10, p0); }
static void SET_PARTICLE_FX_BANG_SCRAPE_LODRANGE_SCALE(float p0) { invoke<Void>(0xF23A40, p0); }
static void SET_PARTICLE_FX_FOOT_LODRANGE_SCALE(float p0) { invoke<Void>(0xF23A80, p0); }
static void SET_PARTICLE_FX_FOOT_OVERRIDE_NAME(const char* p0) { invoke<Void>(0xF23AC0, p0); }
static void SET_SKIDMARK_RANGE_SCALE(float scale) { invoke<Void>(0xF23B40, scale); }
static void SET_PTFX_FORCE_VEHICLE_INTERIOR_FLAG(Any p0) { invoke<Void>(0xF23B80, p0); }
static void REGISTER_POSTFX_BULLET_IMPACT(float weaponWorldPosX, float weaponWorldPosY, float weaponWorldPosZ, float intensity) { invoke<Void>(0xF23BB0, weaponWorldPosX, weaponWorldPosY, weaponWorldPosZ, intensity); }
static void FORCE_POSTFX_BULLET_IMPACTS_AFTER_HUD(BOOL p0) { invoke<Void>(0xF23C20, p0); }
static void USE_PARTICLE_FX_ASSET(const char* name) { invoke<Void>(0xF23C40, name); }
static void SET_PARTICLE_FX_OVERRIDE(const char* oldAsset, const char* newAsset) { invoke<Void>(0xF23C60, oldAsset, newAsset); }
static void RESET_PARTICLE_FX_OVERRIDE(const char* name) { invoke<Void>(0xF23C90, name); }
static void SET_WEATHER_PTFX_USE_OVERRIDE_SETTINGS(BOOL p0) { invoke<Void>(0xF23CC0, p0); }
static void SET_WEATHER_PTFX_OVERRIDE_CURR_LEVEL(float p0) { invoke<Void>(0xF23CE0, p0); }
static void WASH_DECALS_IN_RANGE(float x, float y, float z, float range, float p4) { invoke<Void>(0xF23D00, x, y, z, range, p4); }
static void WASH_DECALS_FROM_VEHICLE(Vehicle vehicle, float p1) { invoke<Void>(0xF23D40, vehicle, p1); }
static void FADE_DECALS_IN_RANGE(float x, float y, float z, float p3, float p4) { invoke<Void>(0xF23DA0, x, y, z, p3, p4); }
static void REMOVE_DECALS_IN_RANGE(float x, float y, float z, float range) { invoke<Void>(0xF23DE0, x, y, z, range); }
static void REMOVE_DECALS_FROM_OBJECT(Object obj) { invoke<Void>(0xF23E20, obj); }
static void REMOVE_DECALS_FROM_OBJECT_FACING(Object obj, float x, float y, float z) { invoke<Void>(0xF23E80, obj, x, y, z); }
static void REMOVE_DECALS_FROM_VEHICLE(Vehicle vehicle) { invoke<Void>(0xF23EF0, vehicle); }
static int ADD_DECAL(int decalType, float posX, float posY, float posZ, float p4, float p5, float p6, float p7, float p8, float p9, float width, float height, float rCoef, float gCoef, float bCoef, float opacity, float timeout, BOOL p17, BOOL p18, BOOL p19) { return invoke<int>(0xF23F50, decalType, posX, posY, posZ, p4, p5, p6, p7, p8, p9, width, height, rCoef, gCoef, bCoef, opacity, timeout, p17, p18, p19); }
static int ADD_PETROL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xF23FE0, x, y, z, groundLvl, width, transparency); }
static int ADD_OIL_DECAL(float x, float y, float z, float groundLvl, float width, float transparency) { return invoke<int>(0xF24060, x, y, z, groundLvl, width, transparency); }
static void START_PETROL_TRAIL_DECALS(float p0) { invoke<Void>(0xF240E0, p0); }
static void ADD_PETROL_TRAIL_DECAL_INFO(float x, float y, float z, float p3) { invoke<Void>(0xF24140, x, y, z, p3); }
static void END_PETROL_TRAIL_DECALS() { invoke<Void>(0xF24170); }
static void REMOVE_DECAL(int decal) { invoke<Void>(0xF24180, decal); }
static BOOL IS_DECAL_ALIVE(int decal) { return invoke<BOOL>(0xF24190, decal); }
static float GET_DECAL_WASH_LEVEL(int decal) { return invoke<float>(0xF241C0, decal); }
static void SET_DISABLE_PETROL_DECALS_IGNITING_THIS_FRAME() { invoke<Void>(0xF241F0); }
static void SET_DISABLE_PETROL_DECALS_RECYCLING_THIS_FRAME() { invoke<Void>(0xF24200); }
static void SET_DISABLE_DECAL_RENDERING_THIS_FRAME() { invoke<Void>(0xF24210); }
static BOOL GET_IS_PETROL_DECAL_IN_RANGE(float xCoord, float yCoord, float zCoord, float radius) { return invoke<BOOL>(0xF24270, xCoord, yCoord, zCoord, radius); }
static void PATCH_DECAL_DIFFUSE_MAP(int decalType, const char* textureDict, const char* textureName) { invoke<Void>(0xF24320, decalType, textureDict, textureName); }
static void UNPATCH_DECAL_DIFFUSE_MAP(int decalType) { invoke<Void>(0xF24360, decalType); }
static void MOVE_VEHICLE_DECALS(Any p0, Any p1) { invoke<Void>(0xF24380, p0, p1); }
static BOOL ADD_VEHICLE_CREW_EMBLEM(Vehicle vehicle, Ped ped, int boneIndex, float x1, float x2, float x3, float y1, float y2, float y3, float z1, float z2, float z3, float scale, Any p13, int alpha) { return invoke<BOOL>(0xF24410, vehicle, ped, boneIndex, x1, x2, x3, y1, y2, y3, z1, z2, z3, scale, p13, alpha); }
static BOOL ABORT_VEHICLE_CREW_EMBLEM_REQUEST(int* p0) { return invoke<BOOL>(0xF24460, p0); }
static void REMOVE_VEHICLE_CREW_EMBLEM(Vehicle vehicle, int p1) { invoke<Void>(0xF244B0, vehicle, p1); }
static int GET_VEHICLE_CREW_EMBLEM_REQUEST_STATE(Vehicle vehicle, int p1) { return invoke<int>(0xF24510, vehicle, p1); }
static BOOL DOES_VEHICLE_HAVE_CREW_EMBLEM(Vehicle vehicle, int p1) { return invoke<BOOL>(0xF24570, vehicle, p1); }
static void DISABLE_COMPOSITE_SHOTGUN_DECALS(BOOL toggle) { invoke<Void>(0xF245E0, toggle); }
static void DISABLE_SCUFF_DECALS(BOOL toggle) { invoke<Void>(0xF24610, toggle); }
static void SET_DECAL_BULLET_IMPACT_RANGE_SCALE(float p0) { invoke<Void>(0xF24640, p0); }
static void OVERRIDE_INTERIOR_SMOKE_NAME(const char* name) { invoke<Void>(0xF24680, name); }
static void OVERRIDE_INTERIOR_SMOKE_LEVEL(float level) { invoke<Void>(0xF246B0, level); }
static void OVERRIDE_INTERIOR_SMOKE_END() { invoke<Void>(0xF246D0); }
static void REGISTER_NOIR_LENS_EFFECT() { invoke<Void>(0xF246E0); }
static void DISABLE_VEHICLE_DISTANTLIGHTS(BOOL toggle) { invoke<Void>(0xF24710, toggle); }
static void RENDER_SHADOWED_LIGHTS_WITH_NO_SHADOWS(BOOL p0) { invoke<Void>(0xF24730, p0); }
static void REQUEST_EARLY_LIGHT_CHECK() { invoke<Void>(0xF24750); }
static void USE_SNOW_FOOT_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xF24760, toggle); }
static void USE_SNOW_WHEEL_VFX_WHEN_UNSHELTERED(BOOL toggle) { invoke<Void>(0xF24780, toggle); }
static void DISABLE_REGION_VFX(Any p0) { invoke<Void>(0xF247A0, p0); }
static void PRESET_INTERIOR_AMBIENT_CACHE(const char* timecycleModifierName) { invoke<Void>(0xF247D0, timecycleModifierName); }
static void SET_TIMECYCLE_MODIFIER(const char* modifierName) { invoke<Void>(0xF24820, modifierName); }
static void SET_TIMECYCLE_MODIFIER_STRENGTH(float strength) { invoke<Void>(0xF248A0, strength); }
static void SET_TRANSITION_TIMECYCLE_MODIFIER(const char* modifierName, float transition) { invoke<Void>(0xF248C0, modifierName, transition); }
static void SET_TRANSITION_OUT_OF_TIMECYCLE_MODIFIER(float strength) { invoke<Void>(0xF24920, strength); }
static void CLEAR_TIMECYCLE_MODIFIER() { invoke<Void>(0xF24940); }
static int GET_TIMECYCLE_MODIFIER_INDEX() { return invoke<int>(0xF24980); }
static int GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() { return invoke<int>(0xF249A0); }
static BOOL GET_IS_TIMECYCLE_TRANSITIONING_OUT() { return invoke<BOOL>(0xF249C0); }
static void PUSH_TIMECYCLE_MODIFIER() { invoke<Void>(0xF249E0); }
static void POP_TIMECYCLE_MODIFIER() { invoke<Void>(0xF249F0); }
static void SET_CURRENT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xF24A00, modifierName); }
static void SET_PLAYER_TCMODIFIER_TRANSITION(float value) { invoke<Void>(0xF24AD0, value); }
static void SET_NEXT_PLAYER_TCMODIFIER(const char* modifierName) { invoke<Void>(0xF24AF0, modifierName); }
static void ADD_TCMODIFIER_OVERRIDE(const char* modifierName1, const char* modifierName2) { invoke<Void>(0xF24BA0, modifierName1, modifierName2); }
static void CLEAR_ALL_TCMODIFIER_OVERRIDES(const char* p0) { invoke<Void>(0xF24C10, p0); }
static void SET_EXTRA_TCMODIFIER(const char* modifierName) { invoke<Void>(0xF24C20, modifierName); }
static void CLEAR_EXTRA_TCMODIFIER() { invoke<Void>(0xF24CA0); }
static int GET_EXTRA_TCMODIFIER() { return invoke<int>(0xF24CC0); }
static void ENABLE_MOON_CYCLE_OVERRIDE(float strength) { invoke<Void>(0xF24CE0, strength); }
static void DISABLE_MOON_CYCLE_OVERRIDE() { invoke<Void>(0xF24D10); }
static int REQUEST_SCALEFORM_MOVIE(const char* scaleformName) { return invoke<int>(0xF24D30, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_WITH_IGNORE_SUPER_WIDESCREEN(const char* scaleformName) { return invoke<int>(0xF24D60, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_INSTANCE(const char* scaleformName) { return invoke<int>(0xF24D90, scaleformName); }
static int REQUEST_SCALEFORM_MOVIE_SKIP_RENDER_WHILE_PAUSED(const char* scaleformName) { return invoke<int>(0xF24DC0, scaleformName); }
static BOOL HAS_SCALEFORM_MOVIE_LOADED(int scaleformHandle) { return invoke<BOOL>(0xF24DF0, scaleformHandle); }
static BOOL IS_ACTIVE_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xF24E60, val); }
static BOOL IS_SCALEFORM_MOVIE_DELETING(int val) { return invoke<BOOL>(0xF24EE0, val); }
static BOOL HAS_SCALEFORM_MOVIE_FILENAME_LOADED(const char* scaleformName) { return invoke<BOOL>(0xF24F20, scaleformName); }
static BOOL HAS_SCALEFORM_CONTAINER_MOVIE_LOADED_INTO_PARENT(int scaleformHandle) { return invoke<BOOL>(0xF24FC0, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(int* scaleformHandle) { invoke<Void>(0xF24FF0, scaleformHandle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SYSTEM_TIME(int scaleform, BOOL toggle) { invoke<Void>(0xF25060, scaleform, toggle); }
static void SET_SCALEFORM_MOVIE_TO_USE_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0xF250C0, scaleformHandle, toggle); }
static void SET_SCALEFORM_MOVIE_TO_USE_SUPER_LARGE_RT(int scaleformHandle, BOOL toggle) { invoke<Void>(0xF25110, scaleformHandle, toggle); }
static void DRAW_SCALEFORM_MOVIE(int scaleformHandle, float x, float y, float width, float height, int red, int green, int blue, int alpha, int p9) { invoke<Void>(0xF25160, scaleformHandle, x, y, width, height, red, green, blue, alpha, p9); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN(int scaleform, int red, int green, int blue, int alpha, int p5) { invoke<Void>(0xF251B0, scaleform, red, green, blue, alpha, p5); }
static void DRAW_SCALEFORM_MOVIE_FULLSCREEN_MASKED(int scaleform1, int scaleform2, int red, int green, int blue, int alpha) { invoke<Void>(0xF25280, scaleform1, scaleform2, red, green, blue, alpha); }
static void DRAW_SCALEFORM_MOVIE_3D(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xF252A0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); }
static void DRAW_SCALEFORM_MOVIE_3D_SOLID(int scaleform, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float p7, float p8, float p9, float scaleX, float scaleY, float scaleZ, int rotationOrder) { invoke<Void>(0xF252C0, scaleform, posX, posY, posZ, rotX, rotY, rotZ, p7, p8, p9, scaleX, scaleY, scaleZ, rotationOrder); }
static void CALL_SCALEFORM_MOVIE_METHOD(int scaleform, const char* method) { invoke<Void>(0xF252E0, scaleform, method); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER(int scaleform, const char* methodName, float param1, float param2, float param3, float param4, float param5) { invoke<Void>(0xF253B0, scaleform, methodName, param1, param2, param3, param4, param5); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_STRING(int scaleform, const char* methodName, const char* param1, const char* param2, const char* param3, const char* param4, const char* param5) { invoke<Void>(0xF25480, scaleform, methodName, param1, param2, param3, param4, param5); }
static void CALL_SCALEFORM_MOVIE_METHOD_WITH_NUMBER_AND_STRING(int scaleform, const char* methodName, float floatParam1, float floatParam2, float floatParam3, float floatParam4, float floatParam5, const char* stringParam1, const char* stringParam2, const char* stringParam3, const char* stringParam4, const char* stringParam5) { invoke<Void>(0xF25560, scaleform, methodName, floatParam1, floatParam2, floatParam3, floatParam4, floatParam5, stringParam1, stringParam2, stringParam3, stringParam4, stringParam5); }
static BOOL BEGIN_SCALEFORM_SCRIPT_HUD_MOVIE_METHOD(int hudComponent, const char* methodName) { return invoke<BOOL>(0xF25640, hudComponent, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD(int scaleform, const char* methodName) { return invoke<BOOL>(0xF25690, scaleform, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND(const char* methodName) { return invoke<BOOL>(0xF25770, methodName); }
static BOOL BEGIN_SCALEFORM_MOVIE_METHOD_ON_FRONTEND_HEADER(const char* methodName) { return invoke<BOOL>(0xF257D0, methodName); }
static void END_SCALEFORM_MOVIE_METHOD() { invoke<Void>(0xF25830); }
static int END_SCALEFORM_MOVIE_METHOD_RETURN_VALUE() { return invoke<int>(0xF25840); }
static BOOL IS_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_READY(int methodReturn) { return invoke<BOOL>(0xF25860, methodReturn); }
static int GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_INT(int methodReturn) { return invoke<int>(0xF25890, methodReturn); }
static BOOL GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_BOOL(int methodReturn) { return invoke<BOOL>(0xF258B0, methodReturn); }
static const char* GET_SCALEFORM_MOVIE_METHOD_RETURN_VALUE_STRING(int methodReturn) { return invoke<const char*>(0xF258E0, methodReturn); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(int value) { invoke<Void>(0xF25950, value); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_FLOAT(float value) { invoke<Void>(0xF25960, value); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(BOOL value) { invoke<Void>(0xF25980, value); }
static void BEGIN_TEXT_COMMAND_SCALEFORM_STRING(const char* componentType) { invoke<Void>(0xF259A0, componentType); }
static void END_TEXT_COMMAND_SCALEFORM_STRING() { invoke<Void>(0xF259B0); }
static void END_TEXT_COMMAND_UNPARSED_SCALEFORM_STRING() { invoke<Void>(0xF259C0); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LITERAL_STRING(const char* string) { invoke<Void>(0xF259D0, string); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(const char* string) { invoke<Void>(0xF259F0, string); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_PLAYER_NAME_STRING(const char* string) { invoke<Void>(0xF25A10, string); }
static BOOL DOES_LATEST_BRIEF_STRING_EXIST(int p0) { return invoke<BOOL>(0xF25A30, p0); }
static void SCALEFORM_MOVIE_METHOD_ADD_PARAM_LATEST_BRIEF_STRING(int value) { invoke<Void>(0xF25A60, value); }
static void REQUEST_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xF25AD0, hudComponent); }
static BOOL HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(int hudComponent) { return invoke<BOOL>(0xF25AF0, hudComponent); }
static void REMOVE_SCALEFORM_SCRIPT_HUD_MOVIE(int hudComponent) { invoke<Void>(0xF25B20, hudComponent); }
static BOOL PASS_KEYBOARD_INPUT_TO_SCALEFORM(int scaleformHandle) { return invoke<BOOL>(0xF25B30, scaleformHandle); }
static void SET_TV_CHANNEL(int channel) { invoke<Void>(0xF25B60, channel); }
static int GET_TV_CHANNEL() { return invoke<int>(0xF25B70); }
static void SET_TV_VOLUME(float volume) { invoke<Void>(0xF25B80, volume); }
static float GET_TV_VOLUME() { return invoke<float>(0xF25B90); }
static void DRAW_TV_CHANNEL(float xPos, float yPos, float xScale, float yScale, float rotation, int red, int green, int blue, int alpha) { invoke<Void>(0xF25BB0, xPos, yPos, xScale, yScale, rotation, red, green, blue, alpha); }
static void SET_TV_CHANNEL_PLAYLIST(int tvChannel, const char* playlistName, BOOL restart) { invoke<Void>(0xF25BE0, tvChannel, playlistName, restart); }
static void SET_TV_CHANNEL_PLAYLIST_AT_HOUR(int tvChannel, const char* playlistName, int hour) { invoke<Void>(0xF25C00, tvChannel, playlistName, hour); }
static void CLEAR_TV_CHANNEL_PLAYLIST(int tvChannel) { invoke<Void>(0xF25C20, tvChannel); }
static BOOL IS_PLAYLIST_ON_CHANNEL(int tvChannel, Any p1) { return invoke<BOOL>(0xF25C30, tvChannel, p1); }
static BOOL IS_TVSHOW_CURRENTLY_PLAYING(Hash videoCliphash) { return invoke<BOOL>(0xF25C60, videoCliphash); }
static void ENABLE_MOVIE_KEYFRAME_WAIT(BOOL toggle) { invoke<Void>(0xF25C90, toggle); }
static void SET_TV_PLAYER_WATCHING_THIS_FRAME(Any p0) { invoke<Void>(0xF25CB0, p0); }
static Hash GET_CURRENT_TV_CLIP_NAMEHASH() { return invoke<Hash>(0xF25D00); }
static void ENABLE_MOVIE_SUBTITLES(BOOL toggle) { invoke<Void>(0xF25D20, toggle); }
static BOOL UI3DSCENE_IS_AVAILABLE() { return invoke<BOOL>(0xF25D40); }
static BOOL UI3DSCENE_PUSH_PRESET(const char* presetName) { return invoke<BOOL>(0xF25D60, presetName); }
static BOOL UI3DSCENE_ASSIGN_PED_TO_SLOT(const char* presetName, Ped ped, int slot, float posX, float posY, float posZ) { return invoke<BOOL>(0xF25DD0, presetName, ped, slot, posX, posY, posZ); }
static void UI3DSCENE_CLEAR_PATCHED_DATA() { invoke<Void>(0xF25ED0); }
static void UI3DSCENE_MAKE_PUSHED_PRESET_PERSISTENT(BOOL toggle) { invoke<Void>(0xF25EF0, toggle); }
static void TERRAINGRID_ACTIVATE(BOOL toggle) { invoke<Void>(0xF25F10, toggle); }
static void TERRAINGRID_SET_PARAMS(float x, float y, float z, float forwardX, float forwardY, float forwardZ, float sizeX, float sizeY, float sizeZ, float gridScale, float glowIntensity, float normalHeight, float heightDiff) { invoke<Void>(0xF25F30, x, y, z, forwardX, forwardY, forwardZ, sizeX, sizeY, sizeZ, gridScale, glowIntensity, normalHeight, heightDiff); }
static void TERRAINGRID_SET_COLOURS(int lowR, int lowG, int lowB, int lowAlpha, int r, int g, int b, int alpha, int highR, int highG, int highB, int highAlpha) { invoke<Void>(0xF26010, lowR, lowG, lowB, lowAlpha, r, g, b, alpha, highR, highG, highB, highAlpha); }
static void ANIMPOSTFX_PLAY(const char* effectName, int duration, BOOL looped) { invoke<Void>(0xF26080, effectName, duration, looped); }
static void ANIMPOSTFX_STOP(const char* effectName) { invoke<Void>(0xF26110, effectName); }
static float ANIMPOSTFX_GET_CURRENT_TIME(const char* effectName) { return invoke<float>(0xF26170, effectName); }
static BOOL ANIMPOSTFX_IS_RUNNING(const char* effectName) { return invoke<BOOL>(0xF261E0, effectName); }
static void ANIMPOSTFX_STOP_ALL() { invoke<Void>(0xF26250); }
static void ANIMPOSTFX_STOP_AND_FLUSH_REQUESTS(const char* effectName) { invoke<Void>(0xF26270, effectName); }
static void BEGIN_TEXT_COMMAND_BUSYSPINNER_ON(const char* string) { invoke<Void>(0xF336B0, string); }
static void END_TEXT_COMMAND_BUSYSPINNER_ON(int busySpinnerType) { invoke<Void>(0xF336C0, busySpinnerType); }
static void BUSYSPINNER_OFF() { invoke<Void>(0xF336D0); }
static void PRELOAD_BUSYSPINNER() { invoke<Void>(0xF336E0); }
static BOOL BUSYSPINNER_IS_ON() { return invoke<BOOL>(0xF336F0); }
static BOOL BUSYSPINNER_IS_DISPLAYING() { return invoke<BOOL>(0xF33710); }
static void DISABLE_PAUSEMENU_SPINNER(BOOL p0) { invoke<Void>(0xF33730, p0); }
static void SET_MOUSE_CURSOR_THIS_FRAME() { invoke<Void>(0xF33740); }
static void SET_MOUSE_CURSOR_STYLE(int spriteId) { invoke<Void>(0xF33750, spriteId); }
static void SET_MOUSE_CURSOR_VISIBLE(BOOL toggle) { invoke<Void>(0xF33760, toggle); }
static BOOL IS_MOUSE_ROLLED_OVER_INSTRUCTIONAL_BUTTONS() { return invoke<BOOL>(0xF33770); }
static BOOL GET_MOUSE_EVENT(int scaleformHandle, Any* p1, Any* p2, Any* p3) { return invoke<BOOL>(0xF33780, scaleformHandle, p1, p2, p3); }
static void THEFEED_ONLY_SHOW_TOOLTIPS(BOOL toggle) { invoke<Void>(0xF33790, toggle); }
static void THEFEED_SET_SCRIPTED_MENU_HEIGHT(float pos) { invoke<Void>(0xF337E0, pos); }
static void THEFEED_HIDE() { invoke<Void>(0xF33810); }
static void THEFEED_HIDE_THIS_FRAME() { invoke<Void>(0xF33830); }
static void THEFEED_SHOW() { invoke<Void>(0xF33850); }
static void THEFEED_FLUSH_QUEUE() { invoke<Void>(0xF33870); }
static void THEFEED_REMOVE_ITEM(int notificationId) { invoke<Void>(0xF33890, notificationId); }
static void THEFEED_FORCE_RENDER_ON() { invoke<Void>(0xF338C0); }
static void THEFEED_FORCE_RENDER_OFF() { invoke<Void>(0xF338E0); }
static void THEFEED_PAUSE() { invoke<Void>(0xF33900); }
static void THEFEED_RESUME() { invoke<Void>(0xF33920); }
static BOOL THEFEED_IS_PAUSED() { return invoke<BOOL>(0xF33940); }
static void THEFEED_REPORT_LOGO_ON() { invoke<Void>(0xF33960); }
static void THEFEED_REPORT_LOGO_OFF() { invoke<Void>(0xF33980); }
static int THEFEED_GET_LAST_SHOWN_PHONE_ACTIVATABLE_FEED_ID() { return invoke<int>(0xF339A0); }
static void THEFEED_AUTO_POST_GAMETIPS_ON() { invoke<Void>(0xF339D0); }
static void THEFEED_AUTO_POST_GAMETIPS_OFF() { invoke<Void>(0xF339F0); }
static void THEFEED_SET_BACKGROUND_COLOR_FOR_NEXT_POST(int hudColorIndex) { invoke<Void>(0xF33A10, hudColorIndex); }
static void THEFEED_SET_RGBA_PARAMETER_FOR_NEXT_MESSAGE(int red, int green, int blue, int alpha) { invoke<Void>(0xF33A40, red, green, blue, alpha); }
static void THEFEED_SET_FLASH_DURATION_PARAMETER_FOR_NEXT_MESSAGE(int count) { invoke<Void>(0xF33AA0, count); }
static void THEFEED_SET_VIBRATE_PARAMETER_FOR_NEXT_MESSAGE(BOOL toggle) { invoke<Void>(0xF33AD0, toggle); }
static void THEFEED_RESET_ALL_PARAMETERS() { invoke<Void>(0xF33B00); }
static void THEFEED_FREEZE_NEXT_POST() { invoke<Void>(0xF33B20); }
static void THEFEED_CLEAR_FROZEN_POST() { invoke<Void>(0xF33B40); }
static void THEFEED_SET_SNAP_FEED_ITEM_POSITIONS(BOOL p0) { invoke<Void>(0xF33B60, p0); }
static void THEFEED_UPDATE_ITEM_TEXTURE(const char* txdString1, const char* txnString1, const char* txdString2, const char* txnString2) { invoke<Void>(0xF33B90, txdString1, txnString1, txdString2, txnString2); }
static void BEGIN_TEXT_COMMAND_THEFEED_POST(const char* text) { invoke<Void>(0xF33BE0, text); }
static int END_TEXT_COMMAND_THEFEED_POST_STATS(const char* statTitle, int iconEnum, BOOL stepVal, int barValue, BOOL isImportant, const char* pictureTextureDict, const char* pictureTextureName) { return invoke<int>(0xF33BF0, statTitle, iconEnum, stepVal, barValue, isImportant, pictureTextureDict, pictureTextureName); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xF33C30, txdName, textureName, flash, iconType, sender, subject); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_SUBTITLE_LABEL(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject) { return invoke<int>(0xF33CA0, txdName, textureName, flash, iconType, sender, subject); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_TU(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration) { return invoke<int>(0xF33D50, txdName, textureName, flash, iconType, sender, subject, duration); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG(const char* txdName, const char* textureName, BOOL flash, int iconType, const char* sender, const char* subject, float duration, const char* clanTag) { return invoke<int>(0xF33DC0, txdName, textureName, flash, iconType, sender, subject, duration, clanTag); }
static int END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT_WITH_CREW_TAG_AND_ADDITIONAL_ICON(const char* txdName, const char* textureName, BOOL flash, int iconType1, const char* sender, const char* subject, float duration, const char* clanTag, int iconType2, int p9) { return invoke<int>(0xF33E30, txdName, textureName, flash, iconType1, sender, subject, duration, clanTag, iconType2, p9); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER(BOOL blink, BOOL p1) { return invoke<int>(0xF33EA0, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(BOOL blink, BOOL p1) { return invoke<int>(0xF33EE0, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(BOOL blink, BOOL p1) { return invoke<int>(0xF33F50, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_AWARD(const char* textureDict, const char* textureName, int rpBonus, int colorOverlay, const char* titleLabel) { return invoke<int>(0xF33F90, textureDict, textureName, rpBonus, colorOverlay, titleLabel); }
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, int R, int G, int B) { return invoke<int>(0xF33FC0, p0, p1, p2, p3, isLeader, unk0, clanDesc, R, G, B); }
static int END_TEXT_COMMAND_THEFEED_POST_CREWTAG_WITH_GAME_NAME(BOOL p0, BOOL p1, int* p2, int p3, BOOL isLeader, BOOL unk0, int clanDesc, const char* playerName, int R, int G, int B) { return invoke<int>(0xF34040, p0, p1, p2, p3, isLeader, unk0, clanDesc, playerName, R, G, B); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK(const char* gxtLabel1, int p1, const char* gxtLabel2) { return invoke<int>(0xF340D0, gxtLabel1, p1, gxtLabel2); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU(const char* gxtLabel1, int p1, const char* gxtLabel2, int p3) { return invoke<int>(0xF34100, gxtLabel1, p1, gxtLabel2, p3); }
static int END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<int>(0xF34140, p0, p1, p2, p3, p4, p5); }
static int END_TEXT_COMMAND_THEFEED_POST_MPTICKER(BOOL blink, BOOL p1) { return invoke<int>(0xF34180, blink, p1); }
static int END_TEXT_COMMAND_THEFEED_POST_CREW_RANKUP_WITH_LITERAL_FLAG(const char* p0, const char* p1, const char* p2, BOOL p3, BOOL p4) { return invoke<int>(0xF341C0, p0, p1, p2, p3, p4); }
static int END_TEXT_COMMAND_THEFEED_POST_VERSUS_TU(const char* txdName1, const char* textureName1, int count1, const char* txdName2, const char* textureName2, int count2, int hudColor1, int hudColor2) { return invoke<int>(0xF34200, txdName1, textureName1, count1, txdName2, textureName2, count2, hudColor1, hudColor2); }
static int END_TEXT_COMMAND_THEFEED_POST_REPLAY(int type, int image, const char* text) { return invoke<int>(0xF34250, type, image, text); }
static int END_TEXT_COMMAND_THEFEED_POST_REPLAY_INPUT(int type, const char* button, const char* text) { return invoke<int>(0xF34280, type, button, text); }
static void BEGIN_TEXT_COMMAND_PRINT(const char* GxtEntry) { invoke<Void>(0xF342B0, GxtEntry); }
static void END_TEXT_COMMAND_PRINT(int duration, BOOL drawImmediately) { invoke<Void>(0xF342C0, duration, drawImmediately); }
static void BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(const char* text) { invoke<Void>(0xF342E0, text); }
static BOOL END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED() { return invoke<BOOL>(0xF342F0); }
static void BEGIN_TEXT_COMMAND_DISPLAY_TEXT(const char* text) { invoke<Void>(0xF34310, text); }
static void END_TEXT_COMMAND_DISPLAY_TEXT(float x, float y, int p2) { invoke<Void>(0xF34340, x, y, p2); }
static void BEGIN_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(const char* text) { invoke<Void>(0xF34390, text); }
static float END_TEXT_COMMAND_GET_SCREEN_WIDTH_OF_DISPLAY_TEXT(BOOL p0) { return invoke<float>(0xF343A0, p0); }
static void BEGIN_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(const char* entry) { invoke<Void>(0xF343D0, entry); }
static int END_TEXT_COMMAND_GET_NUMBER_OF_LINES_FOR_STRING(float x, float y) { return invoke<int>(0xF343E0, x, y); }
static void BEGIN_TEXT_COMMAND_DISPLAY_HELP(const char* inputType) { invoke<Void>(0xF34410, inputType); }
static void END_TEXT_COMMAND_DISPLAY_HELP(int p0, BOOL loop, BOOL beep, int shape) { invoke<Void>(0xF34420, p0, loop, beep, shape); }
static void BEGIN_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(const char* labelName) { invoke<Void>(0xF34450, labelName); }
static BOOL END_TEXT_COMMAND_IS_THIS_HELP_MESSAGE_BEING_DISPLAYED(int p0) { return invoke<BOOL>(0xF34460, p0); }
static void BEGIN_TEXT_COMMAND_SET_BLIP_NAME(const char* textLabel) { invoke<Void>(0xF34490, textLabel); }
static void END_TEXT_COMMAND_SET_BLIP_NAME(Blip blip) { invoke<Void>(0xF344A0, blip); }
static void BEGIN_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(const char* p0) { invoke<Void>(0xF344B0, p0); }
static void END_TEXT_COMMAND_ADD_DIRECTLY_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xF344C0, p0); }
static void BEGIN_TEXT_COMMAND_CLEAR_PRINT(const char* text) { invoke<Void>(0xF344E0, text); }
static void END_TEXT_COMMAND_CLEAR_PRINT() { invoke<Void>(0xF344F0); }
static void BEGIN_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(const char* gxtEntry) { invoke<Void>(0xF34500, gxtEntry); }
static void END_TEXT_COMMAND_OVERRIDE_BUTTON_TEXT(int p0) { invoke<Void>(0xF34510, p0); }
static void ADD_TEXT_COMPONENT_INTEGER(int value) { invoke<Void>(0xF34520, value); }
static void ADD_TEXT_COMPONENT_FLOAT(float value, int decimalPlaces) { invoke<Void>(0xF34530, value, decimalPlaces); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(const char* labelName) { invoke<Void>(0xF34540, labelName); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL_HASH_KEY(Hash gxtEntryHash) { invoke<Void>(0xF34550, gxtEntryHash); }
static void ADD_TEXT_COMPONENT_SUBSTRING_BLIP_NAME(Blip blip) { invoke<Void>(0xF34560, blip); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(const char* text) { invoke<Void>(0xF34570, text); }
static void ADD_TEXT_COMPONENT_SUBSTRING_TIME(int timestamp, int flags) { invoke<Void>(0xF34580, timestamp, flags); }
static void ADD_TEXT_COMPONENT_FORMATTED_INTEGER(int value, BOOL commaSeparated) { invoke<Void>(0xF34590, value, commaSeparated); }
static void ADD_TEXT_COMPONENT_SUBSTRING_PHONE_NUMBER(const char* p0, int p1) { invoke<Void>(0xF345A0, p0, p1); }
static void ADD_TEXT_COMPONENT_SUBSTRING_WEBSITE(const char* website) { invoke<Void>(0xF34630, website); }
static void ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(const char* string) { invoke<Void>(0xF34640, string); }
static void SET_COLOUR_OF_NEXT_TEXT_COMPONENT(int hudColor) { invoke<Void>(0xF34650, hudColor); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME(const char* text, int position, int length) { return invoke<const char*>(0xF34660, text, position, length); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_WITH_BYTE_LIMIT(const char* text, int position, int length, int maxLength) { return invoke<const char*>(0xF34690, text, position, length, maxLength); }
static const char* GET_CHARACTER_FROM_AUDIO_CONVERSATION_FILENAME_BYTES(const char* text, int startPosition, int endPosition) { return invoke<const char*>(0xF346C0, text, startPosition, endPosition); }
static const char* GET_FILENAME_FOR_AUDIO_CONVERSATION(const char* labelName) { return invoke<const char*>(0xF34700, labelName); }
static void CLEAR_PRINTS() { invoke<Void>(0xF34790); }
static void CLEAR_BRIEF() { invoke<Void>(0xF347A0); }
static void CLEAR_ALL_HELP_MESSAGES() { invoke<Void>(0xF347C0); }
static void CLEAR_THIS_PRINT(const char* p0) { invoke<Void>(0xF347D0, p0); }
static void CLEAR_SMALL_PRINTS() { invoke<Void>(0xF34950); }
static BOOL DOES_TEXT_BLOCK_EXIST(const char* gxt) { return invoke<BOOL>(0xF34960, gxt); }
static void REQUEST_ADDITIONAL_TEXT(const char* gxt, int slot) { invoke<Void>(0xF349A0, gxt, slot); }
static void REQUEST_ADDITIONAL_TEXT_FOR_DLC(const char* gxt, int slot) { invoke<Void>(0xF349C0, gxt, slot); }
static BOOL HAS_ADDITIONAL_TEXT_LOADED(int slot) { return invoke<BOOL>(0xF349E0, slot); }
static void CLEAR_ADDITIONAL_TEXT(int p0, BOOL p1) { invoke<Void>(0xF34A10, p0, p1); }
static BOOL IS_STREAMING_ADDITIONAL_TEXT(int p0) { return invoke<BOOL>(0xF34A30, p0); }
static BOOL HAS_THIS_ADDITIONAL_TEXT_LOADED(const char* gxt, int slot) { return invoke<BOOL>(0xF34A60, gxt, slot); }
static BOOL IS_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xF34A90); }
static BOOL DOES_TEXT_LABEL_EXIST(const char* gxt) { return invoke<BOOL>(0xF34AB0, gxt); }
static const char* GET_FIRST_N_CHARACTERS_OF_LITERAL_STRING(const char* string, int length) { return invoke<const char*>(0xF34AE0, string, length); }
static int GET_LENGTH_OF_STRING_WITH_THIS_TEXT_LABEL(const char* gxt) { return invoke<int>(0xF34B50, gxt); }
static int GET_LENGTH_OF_LITERAL_STRING(const char* string) { return invoke<int>(0xF34BA0, string); }
static int GET_LENGTH_OF_LITERAL_STRING_IN_BYTES(const char* string) { return invoke<int>(0xF34BD0, string); }
static const char* GET_STREET_NAME_FROM_HASH_KEY(Hash hash) { return invoke<const char*>(0xF34C00, hash); }
static BOOL IS_HUD_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xF34CC0); }
static BOOL IS_RADAR_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xF34CE0); }
static BOOL IS_SUBTITLE_PREFERENCE_SWITCHED_ON() { return invoke<BOOL>(0xF34D00); }
static void DISPLAY_HUD(BOOL toggle) { invoke<Void>(0xF34D20, toggle); }
static void DISPLAY_HUD_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xF34D50); }
static void DISPLAY_HUD_WHEN_PAUSED_THIS_FRAME() { invoke<Void>(0xF34D70); }
static void DISPLAY_RADAR(BOOL toggle) { invoke<Void>(0xF34D90, toggle); }
static void SET_FAKE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xF34DC0, toggle); }
static BOOL GET_FAKE_SPECTATOR_MODE() { return invoke<BOOL>(0xF34DE0); }
static BOOL IS_HUD_HIDDEN() { return invoke<BOOL>(0xF34DF0); }
static BOOL IS_RADAR_HIDDEN() { return invoke<BOOL>(0xF34E10); }
static BOOL IS_MINIMAP_RENDERING() { return invoke<BOOL>(0xF34E30); }
static void USE_VEHICLE_TARGETING_RETICULE(Any p0) { invoke<Void>(0xF34E40, p0); }
static void ADD_VALID_VEHICLE_HIT_HASH(Any p0) { invoke<Void>(0xF34E60, p0); }
static void CLEAR_VALID_VEHICLE_HIT_HASHES() { invoke<Void>(0xF34F10); }
static void SET_BLIP_ROUTE(Blip blip, BOOL enabled) { invoke<Void>(0xF34F50, blip, enabled); }
static void CLEAR_ALL_BLIP_ROUTES() { invoke<Void>(0xF34F70); }
static void SET_BLIP_ROUTE_COLOUR(Blip blip, int colour) { invoke<Void>(0xF34F80, blip, colour); }
static void SET_FORCE_SHOW_GPS(BOOL toggle) { invoke<Void>(0xF34FA0, toggle); }
static void SET_USE_SET_DESTINATION_IN_PAUSE_MAP(BOOL toggle) { invoke<Void>(0xF34FC0, toggle); }
static void SET_BLOCK_WANTED_FLASH(BOOL disabled) { invoke<Void>(0xF34FE0, disabled); }
static void ADD_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS(BOOL p0) { invoke<Void>(0xF35000, p0); }
static void FORCE_NEXT_MESSAGE_TO_PREVIOUS_BRIEFS_LIST(int p0) { invoke<Void>(0xF35020, p0); }
static void SET_RADAR_ZOOM_PRECISE(float zoom) { invoke<Void>(0xF35040, zoom); }
static void SET_RADAR_ZOOM(int zoomLevel) { invoke<Void>(0xF35080, zoomLevel); }
static void SET_RADAR_ZOOM_TO_BLIP(Blip blip, float zoom) { invoke<Void>(0xF35130, blip, zoom); }
static void SET_RADAR_ZOOM_TO_DISTANCE(float zoom) { invoke<Void>(0xF35200, zoom); }
static void UPDATE_RADAR_ZOOM_TO_BLIP() { invoke<Void>(0xF35240); }
static void GET_HUD_COLOUR(int hudColorIndex, int* r, int* g, int* b, int* a) { invoke<Void>(0xF35250, hudColorIndex, r, g, b, a); }
static void SET_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xF352B0, r, g, b, a); }
static void SET_SECOND_SCRIPT_VARIABLE_HUD_COLOUR(int r, int g, int b, int a) { invoke<Void>(0xF352D0, r, g, b, a); }
static void REPLACE_HUD_COLOUR(int hudColorIndex, int hudColorIndex2) { invoke<Void>(0xF352F0, hudColorIndex, hudColorIndex2); }
static void REPLACE_HUD_COLOUR_WITH_RGBA(int hudColorIndex, int r, int g, int b, int a) { invoke<Void>(0xF35320, hudColorIndex, r, g, b, a); }
static void SET_ABILITY_BAR_VISIBILITY(BOOL visible) { invoke<Void>(0xF35340, visible); }
static void SET_ALLOW_ABILITY_BAR(BOOL toggle) { invoke<Void>(0xF35360, toggle); }
static void FLASH_ABILITY_BAR(int millisecondsToFlash) { invoke<Void>(0xF35390, millisecondsToFlash); }
static void SET_ABILITY_BAR_VALUE(float p0, float p1) { invoke<Void>(0xF353A0, p0, p1); }
static void FLASH_WANTED_DISPLAY(BOOL p0) { invoke<Void>(0xF353C0, p0); }
static void FORCE_OFF_WANTED_STAR_FLASH(BOOL toggle) { invoke<Void>(0xF353E0, toggle); }
static void SET_CUSTOM_MP_HUD_COLOR(int hudColorId) { invoke<Void>(0xF35400, hudColorId); }
static float GET_RENDERED_CHARACTER_HEIGHT(float size, int font) { return invoke<float>(0xF35420, size, font); }
static void SET_TEXT_SCALE(float scale, float size) { invoke<Void>(0xF354E0, scale, size); }
static void SET_TEXT_COLOUR(int red, int green, int blue, int alpha) { invoke<Void>(0xF35500, red, green, blue, alpha); }
static void SET_TEXT_CENTRE(BOOL align) { invoke<Void>(0xF35540, align); }
static void SET_TEXT_RIGHT_JUSTIFY(BOOL toggle) { invoke<Void>(0xF35560, toggle); }
static void SET_TEXT_JUSTIFICATION(int justifyType) { invoke<Void>(0xF35580, justifyType); }
static void SET_TEXT_WRAP(float start, float end) { invoke<Void>(0xF355A0, start, end); }
static void SET_TEXT_LEADING(int p0) { invoke<Void>(0xF355C0, p0); }
static void SET_TEXT_PROPORTIONAL(BOOL p0) { invoke<Void>(0xF355E0, p0); }
static void SET_TEXT_FONT(int fontType) { invoke<Void>(0xF355F0, fontType); }
static void SET_TEXT_DROP_SHADOW() { invoke<Void>(0xF35610); }
static void SET_TEXT_DROPSHADOW(int distance, int r, int g, int b, int a) { invoke<Void>(0xF35620, distance, r, g, b, a); }
static void SET_TEXT_OUTLINE() { invoke<Void>(0xF35640); }
static void SET_TEXT_EDGE(int p0, int r, int g, int b, int a) { invoke<Void>(0xF35650, p0, r, g, b, a); }
static void SET_TEXT_RENDER_ID(int renderId) { invoke<Void>(0xF35660, renderId); }
static int GET_DEFAULT_SCRIPT_RENDERTARGET_RENDER_ID() { return invoke<int>(0xF356D0); }
static BOOL REGISTER_NAMED_RENDERTARGET(const char* name, BOOL p1) { return invoke<BOOL>(0xF356E0, name, p1); }
static BOOL IS_NAMED_RENDERTARGET_REGISTERED(const char* name) { return invoke<BOOL>(0xF357B0, name); }
static BOOL RELEASE_NAMED_RENDERTARGET(const char* name) { return invoke<BOOL>(0xF357F0, name); }
static void LINK_NAMED_RENDERTARGET(Hash modelHash) { invoke<Void>(0xF35840, modelHash); }
static int GET_NAMED_RENDERTARGET_RENDER_ID(const char* name) { return invoke<int>(0xF35850, name); }
static BOOL IS_NAMED_RENDERTARGET_LINKED(Hash modelHash) { return invoke<BOOL>(0xF35890, modelHash); }
static void CLEAR_HELP(BOOL toggle) { invoke<Void>(0xF35950, toggle); }
static BOOL IS_HELP_MESSAGE_ON_SCREEN() { return invoke<BOOL>(0xF35970); }
static BOOL HAS_SCRIPT_HIDDEN_HELP_THIS_FRAME() { return invoke<BOOL>(0xF359E0); }
static BOOL IS_HELP_MESSAGE_BEING_DISPLAYED() { return invoke<BOOL>(0xF35A00); }
static BOOL IS_HELP_MESSAGE_FADING_OUT() { return invoke<BOOL>(0xF35A20); }
static void SET_HELP_MESSAGE_STYLE(int style, int hudColor, int alpha, int p3, int p4) { invoke<Void>(0xF35A40, style, hudColor, alpha, p3, p4); }
static int GET_STANDARD_BLIP_ENUM_ID() { return invoke<int>(0xF35A60); }
static int GET_WAYPOINT_BLIP_ENUM_ID() { return invoke<int>(0xF35A70); }
static int GET_NUMBER_OF_ACTIVE_BLIPS() { return invoke<int>(0xF35A80); }
static Blip GET_NEXT_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xF35AF0, blipSprite); }
static Blip GET_FIRST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xF35B10, blipSprite); }
static Blip GET_CLOSEST_BLIP_INFO_ID(int blipSprite) { return invoke<Blip>(0xF35B40, blipSprite); }
static Vector3 GET_BLIP_INFO_ID_COORD(Blip blip) { return invoke<Vector3>(0xF35B60, blip); }
static int GET_BLIP_INFO_ID_DISPLAY(Blip blip) { return invoke<int>(0xF35C10, blip); }
static int GET_BLIP_INFO_ID_TYPE(Blip blip) { return invoke<int>(0xF35C50, blip); }
static Entity GET_BLIP_INFO_ID_ENTITY_INDEX(Blip blip) { return invoke<Entity>(0xF35C90, blip); }
static Pickup GET_BLIP_INFO_ID_PICKUP_INDEX(Blip blip) { return invoke<Pickup>(0xF35D00, blip); }
static Blip GET_BLIP_FROM_ENTITY(Entity entity) { return invoke<Blip>(0xF35D10, entity); }
static Blip ADD_BLIP_FOR_RADIUS(float posX, float posY, float posZ, float radius) { return invoke<Blip>(0xF35D30, posX, posY, posZ, radius); }
static Blip ADD_BLIP_FOR_AREA(float x, float y, float z, float width, float height) { return invoke<Blip>(0xF35DF0, x, y, z, width, height); }
static Blip ADD_BLIP_FOR_ENTITY(Entity entity) { return invoke<Blip>(0xF35E20, entity); }
static Blip ADD_BLIP_FOR_PICKUP(Pickup pickup) { return invoke<Blip>(0xF35E40, pickup); }
static Blip ADD_BLIP_FOR_COORD(float x, float y, float z) { return invoke<Blip>(0xF35E60, x, y, z); }
static void TRIGGER_SONAR_BLIP(float posX, float posY, float posZ, float radius, int p4) { invoke<Void>(0xF35F10, posX, posY, posZ, radius, p4); }
static void ALLOW_SONAR_BLIPS(BOOL toggle) { invoke<Void>(0xF35F80, toggle); }
static void SET_BLIP_COORDS(Blip blip, float posX, float posY, float posZ) { invoke<Void>(0xF35FA0, blip, posX, posY, posZ); }
static Vector3 GET_BLIP_COORDS(Blip blip) { return invoke<Vector3>(0xF36040, blip); }
static void SET_BLIP_SPRITE(Blip blip, int spriteId) { invoke<Void>(0xF360F0, blip, spriteId); }
static int GET_BLIP_SPRITE(Blip blip) { return invoke<int>(0xF36110, blip); }
static void SET_COP_BLIP_SPRITE(int p0, float p1) { invoke<Void>(0xF36150, p0, p1); }
static void SET_COP_BLIP_SPRITE_AS_STANDARD() { invoke<Void>(0xF36170); }
static void SET_BLIP_NAME_FROM_TEXT_FILE(Blip blip, const char* gxtEntry) { invoke<Void>(0xF36190, blip, gxtEntry); }
static void SET_BLIP_NAME_TO_PLAYER_NAME(Blip blip, Player player) { invoke<Void>(0xF361D0, blip, player); }
static void SET_BLIP_ALPHA(Blip blip, int alpha) { invoke<Void>(0xF36210, blip, alpha); }
static int GET_BLIP_ALPHA(Blip blip) { return invoke<int>(0xF36250, blip); }
static void SET_BLIP_FADE(Blip blip, int opacity, int duration) { invoke<Void>(0xF36290, blip, opacity, duration); }
static int GET_BLIP_FADE_DIRECTION(Blip blip) { return invoke<int>(0xF362C0, blip); }
static void SET_BLIP_ROTATION(Blip blip, int rotation) { invoke<Void>(0xF362F0, blip, rotation); }
static void SET_BLIP_ROTATION_WITH_FLOAT(Blip blip, float heading) { invoke<Void>(0xF36310, blip, heading); }
static int GET_BLIP_ROTATION(Blip blip) { return invoke<int>(0xF36330, blip); }
static void SET_BLIP_FLASH_TIMER(Blip blip, int duration) { invoke<Void>(0xF36370, blip, duration); }
static void SET_BLIP_FLASH_INTERVAL(Blip blip, Any p1) { invoke<Void>(0xF36390, blip, p1); }
static void SET_BLIP_COLOUR(Blip blip, int color) { invoke<Void>(0xF363B0, blip, color); }
static void SET_BLIP_SECONDARY_COLOUR(Blip blip, int r, int g, int b) { invoke<Void>(0xF363D0, blip, r, g, b); }
static int GET_BLIP_COLOUR(Blip blip) { return invoke<int>(0xF36450, blip); }
static int GET_BLIP_HUD_COLOUR(Blip blip) { return invoke<int>(0xF36490, blip); }
static BOOL IS_BLIP_SHORT_RANGE(Blip blip) { return invoke<BOOL>(0xF36530, blip); }
static BOOL IS_BLIP_ON_MINIMAP(Blip blip) { return invoke<BOOL>(0xF36570, blip); }
static BOOL DOES_BLIP_HAVE_GPS_ROUTE(Blip blip) { return invoke<BOOL>(0xF365B0, blip); }
static void SET_BLIP_HIDDEN_ON_LEGEND(Blip blip, BOOL toggle) { invoke<Void>(0xF365F0, blip, toggle); }
static void SET_BLIP_HIGH_DETAIL(Blip blip, BOOL toggle) { invoke<Void>(0xF36610, blip, toggle); }
static void SET_BLIP_AS_MISSION_CREATOR_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36630, blip, toggle); }
static BOOL IS_MISSION_CREATOR_BLIP(Blip blip) { return invoke<BOOL>(0xF36650, blip); }
static Blip GET_NEW_SELECTED_MISSION_CREATOR_BLIP() { return invoke<Blip>(0xF36690); }
static BOOL IS_HOVERING_OVER_MISSION_CREATOR_BLIP() { return invoke<BOOL>(0xF366D0); }
static void SHOW_START_MISSION_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xF36720, toggle); }
static void SHOW_CONTACT_INSTRUCTIONAL_BUTTON(BOOL toggle) { invoke<Void>(0xF36770, toggle); }
static void RELOAD_MAP_MENU() { invoke<Void>(0xF367C0); }
static void SET_BLIP_MARKER_LONG_DISTANCE(Any p0, Any p1) { invoke<Void>(0xF367E0, p0, p1); }
static void SET_BLIP_FLASHES(Blip blip, BOOL toggle) { invoke<Void>(0xF36800, blip, toggle); }
static void SET_BLIP_FLASHES_ALTERNATE(Blip blip, BOOL toggle) { invoke<Void>(0xF36820, blip, toggle); }
static BOOL IS_BLIP_FLASHING(Blip blip) { return invoke<BOOL>(0xF36840, blip); }
static void SET_BLIP_AS_SHORT_RANGE(Blip blip, BOOL toggle) { invoke<Void>(0xF36880, blip, toggle); }
static void SET_BLIP_SCALE(Blip blip, float scale) { invoke<Void>(0xF368A0, blip, scale); }
static void SET_BLIP_SCALE_2D(Blip blip, float xScale, float yScale) { invoke<Void>(0xF368C0, blip, xScale, yScale); }
static void SET_BLIP_PRIORITY(Blip blip, int priority) { invoke<Void>(0xF36930, blip, priority); }
static void SET_BLIP_DISPLAY(Blip blip, int displayId) { invoke<Void>(0xF36950, blip, displayId); }
static void SET_BLIP_CATEGORY(Blip blip, int index) { invoke<Void>(0xF36970, blip, index); }
static void REMOVE_BLIP(Blip* blip) { invoke<Void>(0xF36990, blip); }
static void SET_BLIP_AS_FRIENDLY(Blip blip, BOOL toggle) { invoke<Void>(0xF36A00, blip, toggle); }
static void PULSE_BLIP(Blip blip) { invoke<Void>(0xF36A20, blip); }
static void SHOW_NUMBER_ON_BLIP(Blip blip, int number) { invoke<Void>(0xF36A40, blip, number); }
static void HIDE_NUMBER_ON_BLIP(Blip blip) { invoke<Void>(0xF36A70, blip); }
static void SHOW_HEIGHT_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36A90, blip, toggle); }
static void SHOW_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36AB0, blip, toggle); }
static void SHOW_GOLD_TICK_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36AD0, blip, toggle); }
static void SHOW_FOR_SALE_ICON_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36AF0, blip, toggle); }
static void SHOW_HEADING_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36B10, blip, toggle); }
static void SHOW_OUTLINE_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36B30, blip, toggle); }
static void SHOW_FRIEND_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36B50, blip, toggle); }
static void SHOW_CREW_INDICATOR_ON_BLIP(Blip blip, BOOL toggle) { invoke<Void>(0xF36B70, blip, toggle); }
static void SET_BLIP_EXTENDED_HEIGHT_THRESHOLD(Blip blip, BOOL toggle) { invoke<Void>(0xF36B90, blip, toggle); }
static void SET_BLIP_SHORT_HEIGHT_THRESHOLD(Any p0, Any p1) { invoke<Void>(0xF36BB0, p0, p1); }
static void SET_BLIP_USE_HEIGHT_INDICATOR_ON_EDGE(Blip blip, Any p1) { invoke<Void>(0xF36BD0, blip, p1); }
static void SET_BLIP_AS_MINIMAL_ON_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xF36BF0, blip, toggle); }
static void SET_RADIUS_BLIP_EDGE(Blip blip, BOOL toggle) { invoke<Void>(0xF36C10, blip, toggle); }
static BOOL DOES_BLIP_EXIST(Blip blip) { return invoke<BOOL>(0xF36C30, blip); }
static void SET_WAYPOINT_OFF() { invoke<Void>(0xF36C60); }
static void DELETE_WAYPOINTS_FROM_THIS_PLAYER() { invoke<Void>(0xF36C70); }
static void REFRESH_WAYPOINT() { invoke<Void>(0xF36C90); }
static BOOL IS_WAYPOINT_ACTIVE() { return invoke<BOOL>(0xF36CA0); }
static void SET_NEW_WAYPOINT(float x, float y) { invoke<Void>(0xF36CD0, x, y); }
static void SET_BLIP_BRIGHT(Blip blip, BOOL toggle) { invoke<Void>(0xF36D60, blip, toggle); }
static void SET_BLIP_SHOW_CONE(Blip blip, BOOL toggle, int hudColorIndex) { invoke<Void>(0xF36D80, blip, toggle, hudColorIndex); }
static void REMOVE_COP_BLIP_FROM_PED(Ped ped) { invoke<Void>(0xF36DD0, ped); }
static void SETUP_FAKE_CONE_DATA(Blip blip, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, int p8) { invoke<Void>(0xF36E20, blip, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_FAKE_CONE_DATA(Blip blip) { invoke<Void>(0xF36E60, blip); }
static void CLEAR_FAKE_CONE_ARRAY() { invoke<Void>(0xF36E70); }
static BOOL SET_MINIMAP_COMPONENT(int componentId, BOOL toggle, int overrideColor) { return invoke<BOOL>(0xF36E80, componentId, toggle, overrideColor); }
static void SET_MINIMAP_SONAR_SWEEP(BOOL toggle) { invoke<Void>(0xF36EC0, toggle); }
static void SHOW_ACCOUNT_PICKER() { invoke<Void>(0xF36EE0); }
static Blip GET_MAIN_PLAYER_BLIP_ID() { return invoke<Blip>(0xF36EF0); }
static void SET_PM_WARNINGSCREEN_ACTIVE(BOOL p0) { invoke<Void>(0xF36F30, p0); }
static void HIDE_LOADING_ON_FADE_THIS_FRAME() { invoke<Void>(0xF36F50); }
static void SET_RADAR_AS_INTERIOR_THIS_FRAME(Hash interior, float x, float y, int z, int zoom) { invoke<Void>(0xF36F60, interior, x, y, z, zoom); }
static void SET_INSIDE_VERY_SMALL_INTERIOR(BOOL toggle) { invoke<Void>(0xF36FB0, toggle); }
static void SET_INSIDE_VERY_LARGE_INTERIOR(BOOL toggle) { invoke<Void>(0xF36FD0, toggle); }
static void SET_RADAR_AS_EXTERIOR_THIS_FRAME() { invoke<Void>(0xF36FF0); }
static void SET_FAKE_PAUSEMAP_PLAYER_POSITION_THIS_FRAME(float x, float y) { invoke<Void>(0xF37000, x, y); }
static void SET_FAKE_GPS_PLAYER_POSITION_THIS_FRAME(float x, float y, Any p2) { invoke<Void>(0xF37020, x, y, p2); }
static BOOL IS_PAUSEMAP_IN_INTERIOR_MODE() { return invoke<BOOL>(0xF37050); }
static void HIDE_MINIMAP_EXTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xF37060); }
static void HIDE_MINIMAP_INTERIOR_MAP_THIS_FRAME() { invoke<Void>(0xF37070); }
static void SET_USE_ISLAND_MAP(BOOL toggle) { invoke<Void>(0xF37080, toggle); }
static void DONT_TILT_MINIMAP_THIS_FRAME() { invoke<Void>(0xF370A0); }
static void DONT_ZOOM_MINIMAP_WHEN_RUNNING_THIS_FRAME() { invoke<Void>(0xF370B0); }
static void DONT_ZOOM_MINIMAP_WHEN_SNIPING_THIS_FRAME() { invoke<Void>(0xF370C0); }
static void SET_WIDESCREEN_FORMAT(Any p0) { invoke<Void>(0xF370D0, p0); }
static void DISPLAY_AREA_NAME(BOOL toggle) { invoke<Void>(0xF370F0, toggle); }
static void DISPLAY_CASH(BOOL toggle) { invoke<Void>(0xF37110, toggle); }
static void USE_FAKE_MP_CASH(BOOL toggle) { invoke<Void>(0xF37130, toggle); }
static void CHANGE_FAKE_MP_CASH(int cash, int bank) { invoke<Void>(0xF37150, cash, bank); }
static void DISPLAY_AMMO_THIS_FRAME(BOOL display) { invoke<Void>(0xF37160, display); }
static void DISPLAY_SNIPER_SCOPE_THIS_FRAME() { invoke<Void>(0xF37180); }
static void HIDE_HUD_AND_RADAR_THIS_FRAME() { invoke<Void>(0xF37190); }
static void ALLOW_DISPLAY_OF_MULTIPLAYER_CASH_TEXT(BOOL allow) { invoke<Void>(0xF371A0, allow); }
static void SET_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xF371C0); }
static void REMOVE_MULTIPLAYER_WALLET_CASH() { invoke<Void>(0xF371E0); }
static void SET_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xF37200); }
static void REMOVE_MULTIPLAYER_BANK_CASH() { invoke<Void>(0xF37220); }
static void SET_MULTIPLAYER_HUD_CASH(int p0, BOOL p1) { invoke<Void>(0xF37240, p0, p1); }
static void REMOVE_MULTIPLAYER_HUD_CASH() { invoke<Void>(0xF37250); }
static void HIDE_HELP_TEXT_THIS_FRAME() { invoke<Void>(0xF37280); }
static BOOL IS_IME_IN_PROGRESS() { return invoke<BOOL>(0xF37290); }
static void DISPLAY_HELP_TEXT_THIS_FRAME(const char* message, BOOL p1) { invoke<Void>(0xF372A0, message, p1); }
static void HUD_FORCE_WEAPON_WHEEL(BOOL show) { invoke<Void>(0xF37300, show); }
static void HUD_FORCE_SPECIAL_VEHICLE_WEAPON_WHEEL() { invoke<Void>(0xF37320); }
static void HUD_SUPPRESS_WEAPON_WHEEL_RESULTS_THIS_FRAME() { invoke<Void>(0xF37330); }
static Hash HUD_GET_WEAPON_WHEEL_CURRENTLY_HIGHLIGHTED() { return invoke<Hash>(0xF37340); }
static void HUD_SET_WEAPON_WHEEL_TOP_SLOT(Hash weaponHash) { invoke<Void>(0xF37360, weaponHash); }
static Hash HUD_GET_WEAPON_WHEEL_TOP_SLOT(int weaponTypeIndex) { return invoke<Hash>(0xF373B0, weaponTypeIndex); }
static void HUD_SHOWING_CHARACTER_SWITCH_SELECTION(BOOL toggle) { invoke<Void>(0xF37410, toggle); }
static void SET_GPS_FLAGS(int p0, float p1) { invoke<Void>(0xF37430, p0, p1); }
static void CLEAR_GPS_FLAGS() { invoke<Void>(0xF37460); }
static void SET_RACE_TRACK_RENDER(BOOL toggle) { invoke<Void>(0xF37480, toggle); }
static void CLEAR_GPS_RACE_TRACK() { invoke<Void>(0xF374A0); }
static void START_GPS_CUSTOM_ROUTE(int hudColor, BOOL displayOnFoot, BOOL followPlayer) { invoke<Void>(0xF374B0, hudColor, displayOnFoot, followPlayer); }
static void ADD_POINT_TO_GPS_CUSTOM_ROUTE(float x, float y, float z) { invoke<Void>(0xF374D0, x, y, z); }
static void SET_GPS_CUSTOM_ROUTE_RENDER(BOOL toggle, int radarThickness, int mapThickness) { invoke<Void>(0xF37530, toggle, radarThickness, mapThickness); }
static void CLEAR_GPS_CUSTOM_ROUTE() { invoke<Void>(0xF37550); }
static void START_GPS_MULTI_ROUTE(int hudColor, BOOL routeFromPlayer, BOOL displayOnFoot) { invoke<Void>(0xF37570, hudColor, routeFromPlayer, displayOnFoot); }
static void ADD_POINT_TO_GPS_MULTI_ROUTE(float x, float y, float z) { invoke<Void>(0xF37590, x, y, z); }
static void SET_GPS_MULTI_ROUTE_RENDER(BOOL toggle) { invoke<Void>(0xF375F0, toggle); }
static void CLEAR_GPS_MULTI_ROUTE() { invoke<Void>(0xF37610); }
static void CLEAR_GPS_PLAYER_WAYPOINT() { invoke<Void>(0xF37620); }
static void SET_GPS_FLASHES(BOOL toggle) { invoke<Void>(0xF37640, toggle); }
static void SET_PLAYER_ICON_COLOUR(int color) { invoke<Void>(0xF37660, color); }
static void FLASH_MINIMAP_DISPLAY() { invoke<Void>(0xF37670); }
static void FLASH_MINIMAP_DISPLAY_WITH_COLOR(int hudColorIndex) { invoke<Void>(0xF37680, hudColorIndex); }
static void TOGGLE_STEALTH_RADAR(BOOL toggle) { invoke<Void>(0xF37690, toggle); }
static void SET_MINIMAP_IN_SPECTATOR_MODE(BOOL toggle, Ped ped) { invoke<Void>(0xF376B0, toggle, ped); }
static void SET_MISSION_NAME(BOOL p0, const char* name) { invoke<Void>(0xF37720, p0, name); }
static void SET_MISSION_NAME_FOR_UGC_MISSION(BOOL p0, const char* name) { invoke<Void>(0xF37740, p0, name); }
static void SET_DESCRIPTION_FOR_UGC_MISSION_EIGHT_STRINGS(BOOL p0, const char* p1, const char* p2, const char* p3, const char* p4, const char* p5, const char* p6, const char* p7, const char* p8) { invoke<Void>(0xF377B0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_MINIMAP_BLOCK_WAYPOINT(BOOL toggle) { invoke<Void>(0xF37800, toggle); }
static void SET_MINIMAP_IN_PROLOGUE(BOOL toggle) { invoke<Void>(0xF37820, toggle); }
static void SET_MINIMAP_HIDE_FOW(BOOL toggle) { invoke<Void>(0xF37840, toggle); }
static float GET_MINIMAP_FOW_DISCOVERY_RATIO() { return invoke<float>(0xF37860); }
static BOOL GET_MINIMAP_FOW_COORDINATE_IS_REVEALED(float x, float y, float z) { return invoke<BOOL>(0xF37880, x, y, z); }
static void SET_MINIMAP_FOW_DO_NOT_UPDATE(BOOL p0) { invoke<Void>(0xF378F0, p0); }
static void SET_MINIMAP_FOW_REVEAL_COORDINATE(float x, float y, float z) { invoke<Void>(0xF37910, x, y, z); }
static void SET_MINIMAP_GOLF_COURSE(int hole) { invoke<Void>(0xF37960, hole); }
static void SET_MINIMAP_GOLF_COURSE_OFF() { invoke<Void>(0xF37970); }
static void LOCK_MINIMAP_ANGLE(int angle) { invoke<Void>(0xF37980, angle); }
static void UNLOCK_MINIMAP_ANGLE() { invoke<Void>(0xF379A0); }
static void LOCK_MINIMAP_POSITION(float x, float y) { invoke<Void>(0xF379B0, x, y); }
static void UNLOCK_MINIMAP_POSITION() { invoke<Void>(0xF379D0); }
static void SET_FAKE_MINIMAP_MAX_ALTIMETER_HEIGHT(float altitude, BOOL p1, Any p2) { invoke<Void>(0xF379F0, altitude, p1, p2); }
static void SET_HEALTH_HUD_DISPLAY_VALUES(int health, int capacity, BOOL wasAdded) { invoke<Void>(0xF37A20, health, capacity, wasAdded); }
static void SET_MAX_HEALTH_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xF37A40, maximumValue); }
static void SET_MAX_ARMOUR_HUD_DISPLAY(int maximumValue) { invoke<Void>(0xF37A50, maximumValue); }
static void SET_BIGMAP_ACTIVE(BOOL toggleBigMap, BOOL showFullMap) { invoke<Void>(0xF37A60, toggleBigMap, showFullMap); }
static BOOL IS_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xF37A80, id); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_ACTIVE(int id) { return invoke<BOOL>(0xF37AC0, id); }
static void HIDE_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF37AF0, id); }
static void SHOW_SCRIPTED_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF37B00, id); }
static BOOL IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(int id) { return invoke<BOOL>(0xF37B10, id); }
static void HIDE_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF37B40, id); }
static void SHOW_HUD_COMPONENT_THIS_FRAME(int id) { invoke<Void>(0xF37B60, id); }
static void HIDE_STREET_AND_CAR_NAMES_THIS_FRAME() { invoke<Void>(0xF37B70); }
static void RESET_RETICULE_VALUES() { invoke<Void>(0xF37B80); }
static void RESET_HUD_COMPONENT_VALUES(int id) { invoke<Void>(0xF37B90, id); }
static void SET_HUD_COMPONENT_POSITION(int id, float x, float y) { invoke<Void>(0xF37BA0, id, x, y); }
static Vector3 GET_HUD_COMPONENT_POSITION(int id) { return invoke<Vector3>(0xF37BF0, id); }
static void CLEAR_REMINDER_MESSAGE() { invoke<Void>(0xF37C80); }
static int GET_HUD_SCREEN_POSITION_FROM_WORLD_POSITION(float worldX, float worldY, float worldZ, float* screenX, float* screenY) { return invoke<int>(0xF37C90, worldX, worldY, worldZ, screenX, screenY); }
static void OPEN_REPORTUGC_MENU() { invoke<Void>(0xF37D30); }
static void FORCE_CLOSE_REPORTUGC_MENU() { invoke<Void>(0xF37D60); }
static BOOL IS_REPORTUGC_MENU_OPEN() { return invoke<BOOL>(0xF37D70); }
static BOOL IS_FLOATING_HELP_TEXT_ON_SCREEN(int hudIndex) { return invoke<BOOL>(0xF37D90, hudIndex); }
static void SET_FLOATING_HELP_TEXT_SCREEN_POSITION(int hudIndex, float x, float y) { invoke<Void>(0xF37E10, hudIndex, x, y); }
static void SET_FLOATING_HELP_TEXT_WORLD_POSITION(int hudIndex, float x, float y, float z) { invoke<Void>(0xF37E70, hudIndex, x, y, z); }
static void SET_FLOATING_HELP_TEXT_TO_ENTITY(int hudIndex, Entity entity, float offsetX, float offsetY) { invoke<Void>(0xF37ED0, hudIndex, entity, offsetX, offsetY); }
static void SET_FLOATING_HELP_TEXT_STYLE(int hudIndex, int p1, int p2, int p3, int p4, int p5) { invoke<Void>(0xF37F70, hudIndex, p1, p2, p3, p4, p5); }
static void CLEAR_FLOATING_HELP(int hudIndex, BOOL p1) { invoke<Void>(0xF37F90, hudIndex, p1); }
static void CREATE_MP_GAMER_TAG_WITH_CREW_COLOR(Player player, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag, int r, int g, int b) { invoke<Void>(0xF37FB0, player, username, pointedClanTag, isRockstarClan, clanTag, clanFlag, r, g, b); }
static BOOL IS_MP_GAMER_TAG_MOVIE_ACTIVE() { return invoke<BOOL>(0xF38090); }
static int CREATE_FAKE_MP_GAMER_TAG(Ped ped, const char* username, BOOL pointedClanTag, BOOL isRockstarClan, const char* clanTag, int clanFlag) { return invoke<int>(0xF380C0, ped, username, pointedClanTag, isRockstarClan, clanTag, clanFlag); }
static void REMOVE_MP_GAMER_TAG(int gamerTagId) { invoke<Void>(0xF381F0, gamerTagId); }
static BOOL IS_MP_GAMER_TAG_ACTIVE(int gamerTagId) { return invoke<BOOL>(0xF38210, gamerTagId); }
static BOOL IS_MP_GAMER_TAG_FREE(int gamerTagId) { return invoke<BOOL>(0xF38240, gamerTagId); }
static void SET_MP_GAMER_TAG_VISIBILITY(int gamerTagId, int component, BOOL toggle, Any p3) { invoke<Void>(0xF38270, gamerTagId, component, toggle, p3); }
static void SET_ALL_MP_GAMER_TAGS_VISIBILITY(int gamerTagId, BOOL toggle) { invoke<Void>(0xF382B0, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_SHOULD_USE_VEHICLE_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xF382E0, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_SHOULD_USE_POINTS_HEALTH(int gamerTagId, BOOL toggle) { invoke<Void>(0xF38310, gamerTagId, toggle); }
static void SET_MP_GAMER_TAGS_POINT_HEALTH(int gamerTagId, int value, int maximumValue) { invoke<Void>(0xF38340, gamerTagId, value, maximumValue); }
static void SET_MP_GAMER_TAG_COLOUR(int gamerTagId, int component, int hudColorIndex) { invoke<Void>(0xF38370, gamerTagId, component, hudColorIndex); }
static void SET_MP_GAMER_TAG_HEALTH_BAR_COLOUR(int gamerTagId, int hudColorIndex) { invoke<Void>(0xF383A0, gamerTagId, hudColorIndex); }
static void SET_MP_GAMER_TAG_ALPHA(int gamerTagId, int component, int alpha) { invoke<Void>(0xF383D0, gamerTagId, component, alpha); }
static void SET_MP_GAMER_TAG_WANTED_LEVEL(int gamerTagId, int wantedlvl) { invoke<Void>(0xF38400, gamerTagId, wantedlvl); }
static void SET_MP_GAMER_TAG_NUM_PACKAGES(int gamerTagId, int p1) { invoke<Void>(0xF38430, gamerTagId, p1); }
static void SET_MP_GAMER_TAG_NAME(int gamerTagId, const char* string) { invoke<Void>(0xF38460, gamerTagId, string); }
static BOOL IS_UPDATING_MP_GAMER_TAG_NAME_AND_CREW_DETAILS(int gamerTagId) { return invoke<BOOL>(0xF38490, gamerTagId); }
static void SET_MP_GAMER_TAG_BIG_TEXT(int gamerTagId, const char* string) { invoke<Void>(0xF384D0, gamerTagId, string); }
static int GET_CURRENT_WEBPAGE_ID() { return invoke<int>(0xF38500); }
static int GET_CURRENT_WEBSITE_ID() { return invoke<int>(0xF38510); }
static int GET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { return invoke<int>(0xF38520, flagIndex); }
static void RESET_GLOBAL_ACTIONSCRIPT_FLAG(int flagIndex) { invoke<Void>(0xF38550, flagIndex); }
static BOOL IS_WARNING_MESSAGE_READY_FOR_CONTROL() { return invoke<BOOL>(0xF38570); }
static void SET_WARNING_MESSAGE(const char* titleMsg, int flags, const char* promptMsg, BOOL p3, int p4, const char* p5, const char* p6, BOOL showBackground, int errorCode) { invoke<Void>(0xF385C0, titleMsg, flags, promptMsg, p3, p4, p5, p6, showBackground, errorCode); }
static void SET_WARNING_MESSAGE_WITH_HEADER(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any* showBackground, Any* p7, BOOL p8, Any p9) { invoke<Void>(0xF386D0, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, showBackground, p7, p8, p9); }
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS(const char* entryHeader, const char* entryLine1, int instructionalKey, const char* entryLine2, BOOL p4, Any p5, Any additionalIntInfo, const char* additionalTextInfoLine1, const char* additionalTextInfoLine2, BOOL showBackground, int errorCode) { invoke<Void>(0xF38740, entryHeader, entryLine1, instructionalKey, entryLine2, p4, p5, additionalIntInfo, additionalTextInfoLine1, additionalTextInfoLine2, showBackground, errorCode); }
static void SET_WARNING_MESSAGE_WITH_HEADER_EXTENDED(const char* entryHeader, const char* entryLine1, int flags, const char* entryLine2, BOOL p4, Any p5, Any* p6, Any* p7, BOOL showBg, Any p9, Any p10) { invoke<Void>(0xF387B0, entryHeader, entryLine1, flags, entryLine2, p4, p5, p6, p7, showBg, p9, p10); }
static void SET_WARNING_MESSAGE_WITH_HEADER_AND_SUBSTRING_FLAGS_EXTENDED(const char* labelTitle, const char* labelMessage, int p2, int p3, const char* labelMessage2, BOOL p5, int p6, int p7, const char* p8, const char* p9, BOOL background, int errorCode) { invoke<Void>(0xF38820, labelTitle, labelMessage, p2, p3, labelMessage2, p5, p6, p7, p8, p9, background, errorCode); }
static Hash GET_WARNING_SCREEN_MESSAGE_HASH() { return invoke<Hash>(0xF388A0); }
static BOOL SET_WARNING_MESSAGE_OPTION_ITEMS(int index, const char* name, int cash, int rp, int lvl, int colour) { return invoke<BOOL>(0xF388C0, index, name, cash, rp, lvl, colour); }
static BOOL SET_WARNING_MESSAGE_OPTION_HIGHLIGHT(Any p0) { return invoke<BOOL>(0xF38900, p0); }
static void REMOVE_WARNING_MESSAGE_OPTION_ITEMS() { invoke<Void>(0xF38930); }
static BOOL IS_WARNING_MESSAGE_ACTIVE() { return invoke<BOOL>(0xF38940); }
static void CLEAR_DYNAMIC_PAUSE_MENU_ERROR_MESSAGE() { invoke<Void>(0xF38980); }
static void CUSTOM_MINIMAP_SET_ACTIVE(BOOL toggle) { invoke<Void>(0xF389A0, toggle); }
static void CUSTOM_MINIMAP_SET_BLIP_OBJECT(int spriteId) { invoke<Void>(0xF389C0, spriteId); }
static int CUSTOM_MINIMAP_CREATE_BLIP(float x, float y, float z) { return invoke<int>(0xF389D0, x, y, z); }
static void CUSTOM_MINIMAP_CLEAR_BLIPS() { invoke<Void>(0xF38A40); }
static BOOL FORCE_SONAR_BLIPS_THIS_FRAME() { return invoke<BOOL>(0xF38A50); }
static Blip GET_NORTH_BLID_INDEX() { return invoke<Blip>(0xF38A60); }
static void DISPLAY_PLAYER_NAME_TAGS_ON_BLIPS(BOOL toggle) { invoke<Void>(0xF38A70, toggle); }
static void DRAW_FRONTEND_BACKGROUND_THIS_FRAME() { invoke<Void>(0xF38A90); }
static void DRAW_HUD_OVER_FADE_THIS_FRAME() { invoke<Void>(0xF38AA0); }
static void ACTIVATE_FRONTEND_MENU(Hash menuhash, BOOL togglePause, int component) { invoke<Void>(0xF38AB0, menuhash, togglePause, component); }
static void RESTART_FRONTEND_MENU(Hash menuHash, int p1) { invoke<Void>(0xF38B00, menuHash, p1); }
static Hash GET_CURRENT_FRONTEND_MENU_VERSION() { return invoke<Hash>(0xF38B40); }
static void SET_PAUSE_MENU_ACTIVE(BOOL toggle) { invoke<Void>(0xF38B70, toggle); }
static void DISABLE_FRONTEND_THIS_FRAME() { invoke<Void>(0xF38B90); }
static void SUPPRESS_FRONTEND_RENDERING_THIS_FRAME() { invoke<Void>(0xF38BA0); }
static void ALLOW_PAUSE_WHEN_NOT_IN_STATE_OF_PLAY_THIS_FRAME() { invoke<Void>(0xF38BB0); }
static void SET_FRONTEND_ACTIVE(BOOL active) { invoke<Void>(0xF38BC0, active); }
static BOOL IS_PAUSE_MENU_ACTIVE() { return invoke<BOOL>(0xF38BE0); }
static BOOL IS_STORE_PENDING_NETWORK_SHUTDOWN_TO_OPEN() { return invoke<BOOL>(0xF38C10); }
static int GET_PAUSE_MENU_STATE() { return invoke<int>(0xF38C20); }
static Vector3 GET_PAUSE_MENU_POSITION() { return invoke<Vector3>(0xF38C40); }
static BOOL IS_PAUSE_MENU_RESTARTING() { return invoke<BOOL>(0xF38CC0); }
static void FORCE_SCRIPTED_GFX_WHEN_FRONTEND_ACTIVE(const char* p0) { invoke<Void>(0xF38CE0, p0); }
static void PAUSE_MENUCEPTION_GO_DEEPER(int page) { invoke<Void>(0xF38CF0, page); }
static void PAUSE_MENUCEPTION_THE_KICK() { invoke<Void>(0xF38D00); }
static void PAUSE_TOGGLE_FULLSCREEN_MAP(Any p0) { invoke<Void>(0xF38D10, p0); }
static void PAUSE_MENU_ACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xF38D30, contextHash); }
static void PAUSE_MENU_DEACTIVATE_CONTEXT(Hash contextHash) { invoke<Void>(0xF38D70, contextHash); }
static BOOL PAUSE_MENU_IS_CONTEXT_ACTIVE(Hash contextHash) { return invoke<BOOL>(0xF38DB0, contextHash); }
static BOOL PAUSE_MENU_IS_CONTEXT_MENU_ACTIVE() { return invoke<BOOL>(0xF38E00); }
static int PAUSE_MENU_GET_HAIR_COLOUR_INDEX() { return invoke<int>(0xF38E80); }
static int PAUSE_MENU_GET_MOUSE_HOVER_INDEX() { return invoke<int>(0xF38EA0); }
static int PAUSE_MENU_GET_MOUSE_HOVER_UNIQUE_ID() { return invoke<int>(0xF38EC0); }
static BOOL PAUSE_MENU_GET_MOUSE_CLICK_EVENT(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0xF38EE0, p0, p1, p2); }
static void PAUSE_MENU_REDRAW_INSTRUCTIONAL_BUTTONS(int p0) { invoke<Void>(0xF38EF0, p0); }
static void PAUSE_MENU_SET_BUSY_SPINNER(BOOL p0, int position, int spinnerIndex) { invoke<Void>(0xF38F00, p0, position, spinnerIndex); }
static void PAUSE_MENU_SET_WARN_ON_TAB_CHANGE(BOOL p0) { invoke<Void>(0xF38F40, p0); }
static BOOL IS_FRONTEND_READY_FOR_CONTROL() { return invoke<BOOL>(0xF38F60); }
static void TAKE_CONTROL_OF_FRONTEND() { invoke<Void>(0xF38FA0); }
static void RELEASE_CONTROL_OF_FRONTEND() { invoke<Void>(0xF38FB0); }
static BOOL CODE_WANTS_SCRIPT_TO_TAKE_CONTROL() { return invoke<BOOL>(0xF38FC0); }
static int GET_SCREEN_CODE_WANTS_SCRIPT_TO_CONTROL() { return invoke<int>(0xF38FE0); }
static BOOL IS_NAVIGATING_MENU_CONTENT() { return invoke<BOOL>(0xF39000); }
static BOOL HAS_MENU_TRIGGER_EVENT_OCCURRED() { return invoke<BOOL>(0xF39010); }
static BOOL HAS_MENU_LAYOUT_CHANGED_EVENT_OCCURRED() { return invoke<BOOL>(0xF39020); }
static void SET_SAVEGAME_LIST_UNIQUE_ID(Any p0) { invoke<Void>(0xF39030, p0); }
static void GET_MENU_TRIGGER_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xF39040, lastItemMenuId, selectedItemUniqueId); }
static void GET_MENU_LAYOUT_CHANGED_EVENT_DETAILS(int* lastItemMenuId, int* selectedItemMenuId, int* selectedItemUniqueId) { invoke<Void>(0xF39070, lastItemMenuId, selectedItemMenuId, selectedItemUniqueId); }
static BOOL GET_PM_PLAYER_CREW_COLOR(int* r, int* g, int* b) { return invoke<BOOL>(0xF390C0, r, g, b); }
static BOOL GET_MENU_PED_INT_STAT(Any p0, Any* p1) { return invoke<BOOL>(0xF39140, p0, p1); }
static BOOL GET_CHARACTER_MENU_PED_INT_STAT(Any p0, Any* p1, Any p2) { return invoke<BOOL>(0xF39170, p0, p1, p2); }
static BOOL GET_MENU_PED_MASKED_INT_STAT(Hash statHash, int* outValue, int mask, BOOL p3) { return invoke<BOOL>(0xF391A0, statHash, outValue, mask, p3); }
static BOOL GET_CHARACTER_MENU_PED_MASKED_INT_STAT(Hash statHash, Any* outValue, int p2, int mask, BOOL p4) { return invoke<BOOL>(0xF39240, statHash, outValue, p2, mask, p4); }
static BOOL GET_MENU_PED_FLOAT_STAT(Hash statHash, float* outValue) { return invoke<BOOL>(0xF392E0, statHash, outValue); }
static BOOL GET_CHARACTER_MENU_PED_FLOAT_STAT(float statHash, float* outValue, BOOL p2) { return invoke<BOOL>(0xF39310, statHash, outValue, p2); }
static BOOL GET_MENU_PED_BOOL_STAT(Hash statHash, BOOL* outValue) { return invoke<BOOL>(0xF39340, statHash, outValue); }
static void CLEAR_PED_IN_PAUSE_MENU() { invoke<Void>(0xF39370); }
static void GIVE_PED_TO_PAUSE_MENU(Ped ped, int p1) { invoke<Void>(0xF393B0, ped, p1); }
static void SET_PAUSE_MENU_PED_LIGHTING(BOOL state) { invoke<Void>(0xF393C0, state); }
static void SET_PAUSE_MENU_PED_SLEEP_STATE(BOOL state) { invoke<Void>(0xF39420, state); }
static void OPEN_ONLINE_POLICIES_MENU() { invoke<Void>(0xF39470); }
static BOOL ARE_ONLINE_POLICIES_UP_TO_DATE() { return invoke<BOOL>(0xF39480); }
static BOOL IS_ONLINE_POLICIES_MENU_ACTIVE() { return invoke<BOOL>(0xF394A0); }
static void OPEN_SOCIAL_CLUB_MENU() { invoke<Void>(0xF394B0); }
static void CLOSE_SOCIAL_CLUB_MENU() { invoke<Void>(0xF394C0); }
static void SET_SOCIAL_CLUB_TOUR(const char* name) { invoke<Void>(0xF394E0, name); }
static BOOL IS_SOCIAL_CLUB_ACTIVE() { return invoke<BOOL>(0xF39510); }
static void SET_TEXT_INPUT_BOX_ENABLED(BOOL p0) { invoke<Void>(0xF39520, p0); }
static void FORCE_CLOSE_TEXT_INPUT_BOX() { invoke<Void>(0xF39530); }
static void SET_ALLOW_COMMA_ON_TEXT_INPUT(Any p0) { invoke<Void>(0xF39540, p0); }
static void OVERRIDE_MP_TEXT_CHAT_TEAM_STRING(Hash gxtEntryHash) { invoke<Void>(0xF39550, gxtEntryHash); }
static BOOL IS_MP_TEXT_CHAT_TYPING() { return invoke<BOOL>(0xF39560); }
static void CLOSE_MP_TEXT_CHAT() { invoke<Void>(0xF39570); }
static void MP_TEXT_CHAT_IS_TEAM_JOB(Any p0) { invoke<Void>(0xF39580, p0); }
static void OVERRIDE_MP_TEXT_CHAT_COLOR(int p0, int hudColor) { invoke<Void>(0xF39590, p0, hudColor); }
static void MP_TEXT_CHAT_DISABLE(BOOL toggle) { invoke<Void>(0xF395A0, toggle); }
static void FLAG_PLAYER_CONTEXT_IN_TOURNAMENT(BOOL toggle) { invoke<Void>(0xF395B0, toggle); }
static void SET_PED_HAS_AI_BLIP(Ped ped, BOOL hasCone) { invoke<Void>(0xF395D0, ped, hasCone); }
static void SET_PED_HAS_AI_BLIP_WITH_COLOUR(Ped ped, BOOL hasCone, int color) { invoke<Void>(0xF39610, ped, hasCone, color); }
static BOOL DOES_PED_HAVE_AI_BLIP(Ped ped) { return invoke<BOOL>(0xF39650, ped); }
static void SET_PED_AI_BLIP_GANG_ID(Ped ped, int gangId) { invoke<Void>(0xF39680, ped, gangId); }
static void SET_PED_AI_BLIP_HAS_CONE(Ped ped, BOOL toggle) { invoke<Void>(0xF39690, ped, toggle); }
static void SET_PED_AI_BLIP_FORCED_ON(Ped ped, BOOL toggle) { invoke<Void>(0xF396B0, ped, toggle); }
static void SET_PED_AI_BLIP_NOTICE_RANGE(Ped ped, float range) { invoke<Void>(0xF396D0, ped, range); }
static void SET_PED_AI_BLIP_SPRITE(Ped ped, int spriteId) { invoke<Void>(0xF396E0, ped, spriteId); }
static Blip GET_AI_PED_PED_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xF396F0, ped); }
static Blip GET_AI_PED_VEHICLE_BLIP_INDEX(Ped ped) { return invoke<Blip>(0xF39710, ped); }
static BOOL HAS_DIRECTOR_MODE_BEEN_LAUNCHED_BY_CODE() { return invoke<BOOL>(0xF39730); }
static void SET_DIRECTOR_MODE_LAUNCHED_BY_SCRIPT() { invoke<Void>(0xF39740); }
static void SET_PLAYER_IS_IN_DIRECTOR_MODE(BOOL toggle) { invoke<Void>(0xF39750, toggle); }
static void SET_DIRECTOR_MODE_AVAILABLE(BOOL toggle) { invoke<Void>(0xF39770, toggle); }
static void HIDE_HUDMARKERS_THIS_FRAME() { invoke<Void>(0xF39790); }
static float GET_INTERIOR_HEADING(Interior interior) { return invoke<float>(0xF3BC10, interior); }
static void GET_INTERIOR_LOCATION_AND_NAMEHASH(Interior interior, Vector3* position, Hash* nameHash) { invoke<Void>(0xF3BC50, interior, position, nameHash); }
static int GET_INTERIOR_GROUP_ID(Interior interior) { return invoke<int>(0xF3BD20, interior); }
static Vector3 GET_OFFSET_FROM_INTERIOR_IN_WORLD_COORDS(Interior interior, float x, float y, float z) { return invoke<Vector3>(0xF3BD60, interior, x, y, z); }
static BOOL IS_INTERIOR_SCENE() { return invoke<BOOL>(0xF3BE30); }
static BOOL IS_VALID_INTERIOR(Interior interior) { return invoke<BOOL>(0xF3BE40, interior); }
static void CLEAR_ROOM_FOR_ENTITY(Entity entity) { invoke<Void>(0xF3BE60, entity); }
static void FORCE_ROOM_FOR_ENTITY(Entity entity, Interior interior, Hash roomHashKey) { invoke<Void>(0xF3BEF0, entity, interior, roomHashKey); }
static Hash GET_ROOM_KEY_FROM_ENTITY(Entity entity) { return invoke<Hash>(0xF3BF10, entity); }
static Hash GET_KEY_FOR_ENTITY_IN_ROOM(Entity entity) { return invoke<Hash>(0xF3BF30, entity); }
static Interior GET_INTERIOR_FROM_ENTITY(Entity entity) { return invoke<Interior>(0xF3BFC0, entity); }
static void RETAIN_ENTITY_IN_INTERIOR(Entity entity, Interior interior) { invoke<Void>(0xF3BFE0, entity, interior); }
static void CLEAR_INTERIOR_STATE_OF_ENTITY(Entity entity) { invoke<Void>(0xF3C040, entity); }
static void FORCE_ACTIVATING_TRACKING_ON_ENTITY(Any p0, Any p1) { invoke<Void>(0xF3C090, p0, p1); }
static void FORCE_ROOM_FOR_GAME_VIEWPORT(int interiorID, Hash roomHashKey) { invoke<Void>(0xF3C0F0, interiorID, roomHashKey); }
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_NAME(const char* roomName) { invoke<Void>(0xF3C100, roomName); }
static void SET_ROOM_FOR_GAME_VIEWPORT_BY_KEY(Hash roomHashKey) { invoke<Void>(0xF3C110, roomHashKey); }
static Hash GET_ROOM_KEY_FOR_GAME_VIEWPORT() { return invoke<Hash>(0xF3C240); }
static void CLEAR_ROOM_FOR_GAME_VIEWPORT() { invoke<Void>(0xF3C2A0); }
static Interior GET_INTERIOR_FROM_PRIMARY_VIEW() { return invoke<Interior>(0xF3C350); }
static Interior GET_INTERIOR_AT_COORDS(float x, float y, float z) { return invoke<Interior>(0xF3C390, x, y, z); }
static void ADD_PICKUP_TO_INTERIOR_ROOM_BY_NAME(Pickup pickup, const char* roomName) { invoke<Void>(0xF3C400, pickup, roomName); }
static void PIN_INTERIOR_IN_MEMORY(Interior interior) { invoke<Void>(0xF3C450, interior); }
static void UNPIN_INTERIOR(Interior interior) { invoke<Void>(0xF3C4C0, interior); }
static BOOL IS_INTERIOR_READY(Interior interior) { return invoke<BOOL>(0xF3C500, interior); }
static BOOL SET_INTERIOR_IN_USE(Interior interior) { return invoke<BOOL>(0xF3C550, interior); }
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPE(float x, float y, float z, const char* interiorType) { return invoke<Interior>(0xF3C590, x, y, z, interiorType); }
static Interior GET_INTERIOR_AT_COORDS_WITH_TYPEHASH(float x, float y, float z, Hash typeHash) { return invoke<Interior>(0xF3C630, x, y, z, typeHash); }
static void ACTIVATE_INTERIOR_GROUPS_USING_CAMERA() { invoke<Void>(0xF3C6A0); }
static BOOL IS_COLLISION_MARKED_OUTSIDE(float x, float y, float z) { return invoke<BOOL>(0xF3C6B0, x, y, z); }
static Interior GET_INTERIOR_FROM_COLLISION(float x, float y, float z) { return invoke<Interior>(0xF3C740, x, y, z); }
static void ENABLE_STADIUM_PROBES_THIS_FRAME(BOOL toggle) { invoke<Void>(0xF3C7F0, toggle); }
static void ACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xF3C820, interior, entitySetName); }
static void DEACTIVATE_INTERIOR_ENTITY_SET(Interior interior, const char* entitySetName) { invoke<Void>(0xF3C8A0, interior, entitySetName); }
static BOOL IS_INTERIOR_ENTITY_SET_ACTIVE(Interior interior, const char* entitySetName) { return invoke<BOOL>(0xF3C920, interior, entitySetName); }
static void SET_INTERIOR_ENTITY_SET_TINT_INDEX(Interior interior, const char* entitySetName, int color) { invoke<Void>(0xF3C9C0, interior, entitySetName, color); }
static void REFRESH_INTERIOR(Interior interior) { invoke<Void>(0xF3CA60, interior); }
static void ENABLE_EXTERIOR_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xF3CAD0, mapObjectHash); }
static void ENABLE_SHADOW_CULL_MODEL_THIS_FRAME(Hash mapObjectHash) { invoke<Void>(0xF3CAE0, mapObjectHash); }
static void DISABLE_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xF3CAF0, interior, toggle); }
static BOOL IS_INTERIOR_DISABLED(Interior interior) { return invoke<BOOL>(0xF3CB80, interior); }
static void CAP_INTERIOR(Interior interior, BOOL toggle) { invoke<Void>(0xF3CBC0, interior, toggle); }
static BOOL IS_INTERIOR_CAPPED(Interior interior) { return invoke<BOOL>(0xF3CC50, interior); }
static void DISABLE_METRO_SYSTEM(BOOL toggle) { invoke<Void>(0xF3CC90, toggle); }
static void SET_IS_EXTERIOR_ONLY(Entity entity, BOOL toggle) { invoke<Void>(0xF3CCB0, entity, toggle); }
static ScrHandle CREATE_ITEMSET(BOOL p0) { return invoke<ScrHandle>(0xF3D0C0, p0); }
static void DESTROY_ITEMSET(ScrHandle itemset) { invoke<Void>(0xF3D140, itemset); }
static BOOL IS_ITEMSET_VALID(ScrHandle itemset) { return invoke<BOOL>(0xF3D180, itemset); }
static BOOL ADD_TO_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xF3D1C0, item, itemset); }
static void REMOVE_FROM_ITEMSET(ScrHandle item, ScrHandle itemset) { invoke<Void>(0xF3D230, item, itemset); }
static int GET_ITEMSET_SIZE(ScrHandle itemset) { return invoke<int>(0xF3D290, itemset); }
static ScrHandle GET_INDEXED_ITEM_IN_ITEMSET(int index, ScrHandle itemset) { return invoke<ScrHandle>(0xF3D2E0, index, itemset); }
static BOOL IS_IN_ITEMSET(ScrHandle item, ScrHandle itemset) { return invoke<BOOL>(0xF3D330, item, itemset); }
static void CLEAN_ITEMSET(ScrHandle itemset) { invoke<Void>(0xF3D3A0, itemset); }
static BOOL LOBBY_AUTO_MULTIPLAYER_MENU() { return invoke<BOOL>(0xF3D630); }
static BOOL LOBBY_AUTO_MULTIPLAYER_FREEMODE() { return invoke<BOOL>(0xF3D640); }
static void LOBBY_SET_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xF3D680, toggle); }
static BOOL LOBBY_AUTO_MULTIPLAYER_EVENT() { return invoke<BOOL>(0xF3D6A0); }
static void LOBBY_SET_AUTO_MULTIPLAYER_EVENT(BOOL toggle) { invoke<Void>(0xF3D6C0, toggle); }
static BOOL LOBBY_AUTO_MULTIPLAYER_RANDOM_JOB() { return invoke<BOOL>(0xF3D6E0); }
static void LOBBY_SET_AUTO_MP_RANDOM_JOB(BOOL toggle) { invoke<Void>(0xF3D700, toggle); }
static void SHUTDOWN_SESSION_CLEARS_AUTO_MULTIPLAYER(BOOL toggle) { invoke<Void>(0xF3D720, toggle); }
static int LOCALIZATION_GET_SYSTEM_LANGUAGE() { return invoke<int>(0xF3D840); }
static int GET_CURRENT_LANGUAGE() { return invoke<int>(0xF3D870); }
static int LOCALIZATION_GET_SYSTEM_DATE_TYPE() { return invoke<int>(0xF3D8A0); }
static int GET_ALLOCATED_STACK_SIZE() { return invoke<int>(0xF49020); }
static int GET_NUMBER_OF_FREE_STACKS_OF_THIS_SIZE(int stackSize) { return invoke<int>(0xF49050, stackSize); }
static void SET_RANDOM_SEED(int seed) { invoke<Void>(0xF49070, seed); }
static void SET_TIME_SCALE(float timeScale) { invoke<Void>(0xF490A0, timeScale); }
static void SET_MISSION_FLAG(BOOL toggle) { invoke<Void>(0xF490E0, toggle); }
static BOOL GET_MISSION_FLAG() { return invoke<BOOL>(0xF49130); }
static void SET_RANDOM_EVENT_FLAG(BOOL toggle) { invoke<Void>(0xF49150, toggle); }
static BOOL GET_RANDOM_EVENT_FLAG() { return invoke<BOOL>(0xF491B0); }
static const char* GET_CONTENT_TO_LOAD() { return invoke<const char*>(0xF491C0); }
static void ACTIVITY_FEED_CREATE(const char* p0, const char* p1) { invoke<Void>(0xF49250, p0, p1); }
static void ACTIVITY_FEED_ADD_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xF49260, p0); }
static void ACTIVITY_FEED_ADD_LITERAL_SUBSTRING_TO_CAPTION(const char* p0) { invoke<Void>(0xF49270, p0); }
static void ACTIVITY_FEED_ADD_INT_TO_CAPTION(Any p0) { invoke<Void>(0xF49280, p0); }
static void ACTIVITY_FEED_LARGE_IMAGE_URL(const char* p0) { invoke<Void>(0xF492A0, p0); }
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE(const char* p0, const char* p1) { invoke<Void>(0xF492C0, p0, p1); }
static void ACTIVITY_FEED_ACTION_START_WITH_COMMAND_LINE_ADD(const char* p0) { invoke<Void>(0xF492D0, p0); }
static void ACTIVITY_FEED_POST() { invoke<Void>(0xF492F0); }
static void ACTIVITY_FEED_ONLINE_PLAYED_WITH_POST(const char* p0) { invoke<Void>(0xF49310, p0); }
static BOOL HAS_RESUMED_FROM_SUSPEND() { return invoke<BOOL>(0xF49320); }
static void SET_SCRIPT_HIGH_PRIO(BOOL toggle) { invoke<Void>(0xF49350, toggle); }
static void SET_THIS_IS_A_TRIGGER_SCRIPT(BOOL toggle) { invoke<Void>(0xF49380, toggle); }
static void INFORM_CODE_OF_CONTENT_ID_OF_CURRENT_UGC_MISSION(const char* p0) { invoke<Void>(0xF493B0, p0); }
static BOOL GET_BASE_ELEMENT_LOCATION_FROM_METADATA_BLOCK(Any* p0, Any* p1, Any p2, BOOL p3) { return invoke<BOOL>(0xF493C0, p0, p1, p2, p3); }
static Hash GET_PREV_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xF49460); }
static Hash GET_NEXT_WEATHER_TYPE_HASH_NAME() { return invoke<Hash>(0xF49480); }
static BOOL IS_PREV_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xF494A0, weatherType); }
static BOOL IS_NEXT_WEATHER_TYPE(const char* weatherType) { return invoke<BOOL>(0xF494F0, weatherType); }
static void SET_WEATHER_TYPE_PERSIST(const char* weatherType) { invoke<Void>(0xF49540, weatherType); }
static void SET_WEATHER_TYPE_NOW_PERSIST(const char* weatherType) { invoke<Void>(0xF49590, weatherType); }
static void SET_WEATHER_TYPE_NOW(const char* weatherType) { invoke<Void>(0xF495E0, weatherType); }
static void SET_WEATHER_TYPE_OVERTIME_PERSIST(const char* weatherType, float time) { invoke<Void>(0xF49630, weatherType, time); }
static void SET_RANDOM_WEATHER_TYPE() { invoke<Void>(0xF49680); }
static void CLEAR_WEATHER_TYPE_PERSIST() { invoke<Void>(0xF496A0); }
static void CLEAR_WEATHER_TYPE_NOW_PERSIST_NETWORK(int milliseconds) { invoke<Void>(0xF496B0, milliseconds); }
static void GET_CURR_WEATHER_STATE(Hash* weatherType1, Hash* weatherType2, float* percentWeather2) { invoke<Void>(0xF496E0, weatherType1, weatherType2, percentWeather2); }
static void SET_CURR_WEATHER_STATE(Hash weatherType1, Hash weatherType2, float percentWeather2) { invoke<Void>(0xF49730, weatherType1, weatherType2, percentWeather2); }
static void SET_OVERRIDE_WEATHER(const char* weatherType) { invoke<Void>(0xF497C0, weatherType); }
static void SET_OVERRIDE_WEATHEREX(const char* weatherType, BOOL p1) { invoke<Void>(0xF49810, weatherType, p1); }
static void CLEAR_OVERRIDE_WEATHER() { invoke<Void>(0xF49860); }
static void WATER_OVERRIDE_SET_SHOREWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xF49870, amplitude); }
static void WATER_OVERRIDE_SET_SHOREWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xF49890, minAmplitude); }
static void WATER_OVERRIDE_SET_SHOREWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xF498B0, maxAmplitude); }
static void WATER_OVERRIDE_SET_OCEANNOISEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xF498D0, minAmplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEAMPLITUDE(float amplitude) { invoke<Void>(0xF498F0, amplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEMINAMPLITUDE(float minAmplitude) { invoke<Void>(0xF49910, minAmplitude); }
static void WATER_OVERRIDE_SET_OCEANWAVEMAXAMPLITUDE(float maxAmplitude) { invoke<Void>(0xF49930, maxAmplitude); }
static void WATER_OVERRIDE_SET_RIPPLEBUMPINESS(float bumpiness) { invoke<Void>(0xF49950, bumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEMINBUMPINESS(float minBumpiness) { invoke<Void>(0xF49970, minBumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEMAXBUMPINESS(float maxBumpiness) { invoke<Void>(0xF49990, maxBumpiness); }
static void WATER_OVERRIDE_SET_RIPPLEDISTURB(float disturb) { invoke<Void>(0xF499B0, disturb); }
static void WATER_OVERRIDE_SET_STRENGTH(float strength) { invoke<Void>(0xF499D0, strength); }
static void WATER_OVERRIDE_FADE_IN(float p0) { invoke<Void>(0xF499F0, p0); }
static void WATER_OVERRIDE_FADE_OUT(float p0) { invoke<Void>(0xF49A10, p0); }
static void SET_WIND(float speed) { invoke<Void>(0xF49A30, speed); }
static void SET_WIND_SPEED(float speed) { invoke<Void>(0xF49A50, speed); }
static float GET_WIND_SPEED() { return invoke<float>(0xF49A80); }
static void SET_WIND_DIRECTION(float direction) { invoke<Void>(0xF49AA0, direction); }
static Vector3 GET_WIND_DIRECTION() { return invoke<Vector3>(0xF49AC0); }
static void SET_RAIN(float intensity) { invoke<Void>(0xF49B30, intensity); }
static float GET_RAIN_LEVEL() { return invoke<float>(0xF49B50); }
static void SET_SNOW(float level) { invoke<Void>(0xF49B70, level); }
static float GET_SNOW_LEVEL() { return invoke<float>(0xF49B90); }
static void FORCE_LIGHTNING_FLASH() { invoke<Void>(0xF49BB0); }
static void SET_CLOUD_SETTINGS_OVERRIDE(const char* p0) { invoke<Void>(0xF49BC0, p0); }
static void PRELOAD_CLOUD_HAT(const char* name) { invoke<Void>(0xF49C10, name); }
static void LOAD_CLOUD_HAT(const char* name, float transitionTime) { invoke<Void>(0xF49C30, name, transitionTime); }
static void UNLOAD_CLOUD_HAT(const char* name, float p1) { invoke<Void>(0xF49C50, name, p1); }
static void UNLOAD_ALL_CLOUD_HATS() { invoke<Void>(0xF49C70); }
static void SET_CLOUDS_ALPHA(float opacity) { invoke<Void>(0xF49C80, opacity); }
static float GET_CLOUDS_ALPHA() { return invoke<float>(0xF49CA0); }
static int GET_GAME_TIMER() { return invoke<int>(0xF49CC0); }
static float GET_FRAME_TIME() { return invoke<float>(0xF49CD0); }
static float GET_SYSTEM_TIME_STEP() { return invoke<float>(0xF49CF0); }
static int GET_FRAME_COUNT() { return invoke<int>(0xF49D10); }
static float GET_RANDOM_FLOAT_IN_RANGE(float startRange, float endRange) { return invoke<float>(0xF49D20, startRange, endRange); }
static int GET_RANDOM_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xF49D80, startRange, endRange); }
static int GET_RANDOM_MWC_INT_IN_RANGE(int startRange, int endRange) { return invoke<int>(0xF49DD0, startRange, endRange); }
static BOOL GET_GROUND_Z_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL ignoreWater, BOOL p5) { return invoke<BOOL>(0xF49E80, x, y, z, groundZ, ignoreWater, p5); }
static BOOL GET_GROUND_Z_AND_NORMAL_FOR_3D_COORD(float x, float y, float z, float* groundZ, Vector3* normal) { return invoke<BOOL>(0xF49EC0, x, y, z, groundZ, normal); }
static BOOL GET_GROUND_Z_EXCLUDING_OBJECTS_FOR_3D_COORD(float x, float y, float z, float* groundZ, BOOL p4, BOOL p5) { return invoke<BOOL>(0xF49FC0, x, y, z, groundZ, p4, p5); }
static float ASIN(float p0) { return invoke<float>(0xF4A000, p0); }
static float ACOS(float p0) { return invoke<float>(0xF4A050, p0); }
static float TAN(float p0) { return invoke<float>(0xF4A0A0, p0); }
static float ATAN(float p0) { return invoke<float>(0xF4A0D0, p0); }
static float ATAN2(float p0, float p1) { return invoke<float>(0xF4A110, p0, p1); }
static float GET_DISTANCE_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, BOOL useZ) { return invoke<float>(0xF4A150, x1, y1, z1, x2, y2, z2, useZ); }
static float GET_ANGLE_BETWEEN_2D_VECTORS(float x1, float y1, float x2, float y2) { return invoke<float>(0xF4A1B0, x1, y1, x2, y2); }
static float GET_HEADING_FROM_VECTOR_2D(float dx, float dy) { return invoke<float>(0xF4A270, dx, dy); }
static float GET_RATIO_OF_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<float>(0xF4A2F0, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); }
static Vector3 GET_CLOSEST_POINT_ON_LINE(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, BOOL clamp) { return invoke<Vector3>(0xF4A410, x1, y1, z1, x2, y2, z2, x3, y3, z3, clamp); }
static BOOL GET_LINE_PLANE_INTERSECTION(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float* p12) { return invoke<BOOL>(0xF4A560, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL GET_POINT_AREA_OVERLAP(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12, Any p13) { return invoke<BOOL>(0xF4A640, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void SET_BIT(int* address, int offset) { invoke<Void>(0xF4A680, address, offset); }
static void CLEAR_BIT(int* address, int offset) { invoke<Void>(0xF4A6A0, address, offset); }
static Hash GET_HASH_KEY(const char* string) { return invoke<Hash>(0xF4A6C0, string); }
static void SLERP_NEAR_QUATERNION(float t, float x, float y, float z, float w, float x1, float y1, float z1, float w1, float* outX, float* outY, float* outZ, float* outW) { invoke<Void>(0xF4A6F0, t, x, y, z, w, x1, y1, z1, w1, outX, outY, outZ, outW); }
static BOOL IS_AREA_OCCUPIED(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, BOOL p10, Any p11, BOOL p12) { return invoke<BOOL>(0xF4A750, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL IS_AREA_OCCUPIED_SLOW(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { return invoke<BOOL>(0xF4A930, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static BOOL IS_POSITION_OCCUPIED(float x, float y, float z, float range, BOOL p4, BOOL checkVehicles, BOOL checkPeds, BOOL p7, BOOL p8, Entity ignoreEntity, BOOL p10) { return invoke<BOOL>(0xF4AB10, x, y, z, range, p4, checkVehicles, checkPeds, p7, p8, ignoreEntity, p10); }
static BOOL IS_POINT_OBSCURED_BY_A_MISSION_ENTITY(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<BOOL>(0xF4AB90, p0, p1, p2, p3, p4, p5, p6); }
static void CLEAR_AREA(float X, float Y, float Z, float radius, BOOL p4, BOOL ignoreCopCars, BOOL ignoreObjects, BOOL p7) { invoke<Void>(0xF4AD30, X, Y, Z, radius, p4, ignoreCopCars, ignoreObjects, p7); }
static void CLEAR_AREA_LEAVE_VEHICLE_HEALTH(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7) { invoke<Void>(0xF4AD70, x, y, z, radius, p4, p5, p6, p7); }
static void CLEAR_AREA_OF_VEHICLES(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, BOOL p7, BOOL p8, BOOL p9, Any p10) { invoke<Void>(0xF4ADB0, x, y, z, radius, p4, p5, p6, p7, p8, p9, p10); }
static void CLEAR_ANGLED_AREA_OF_VEHICLES(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL p7, BOOL p8, BOOL p9, BOOL p10, BOOL p11, Any p12, Any p13) { invoke<Void>(0xF4AE30, x1, y1, z1, x2, y2, z2, width, p7, p8, p9, p10, p11, p12, p13); }
static void CLEAR_AREA_OF_OBJECTS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF4AF10, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PEDS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF4AF30, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_COPS(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF4AF50, x, y, z, radius, flags); }
static void CLEAR_AREA_OF_PROJECTILES(float x, float y, float z, float radius, int flags) { invoke<Void>(0xF4AF70, x, y, z, radius, flags); }
static void CLEAR_SCENARIO_SPAWN_HISTORY() { invoke<Void>(0xF4AF90); }
static void SET_SAVE_MENU_ACTIVE(BOOL ignoreVehicle) { invoke<Void>(0xF4AFA0, ignoreVehicle); }
static int GET_STATUS_OF_MANUAL_SAVE() { return invoke<int>(0xF4B080); }
static void SET_CREDITS_ACTIVE(BOOL toggle) { invoke<Void>(0xF4B090, toggle); }
static void SET_CREDITS_FADE_OUT_WITH_SCREEN(BOOL toggle) { invoke<Void>(0xF4B0B0, toggle); }
static BOOL HAVE_CREDITS_REACHED_END() { return invoke<BOOL>(0xF4B0D0); }
static BOOL ARE_CREDITS_RUNNING() { return invoke<BOOL>(0xF4B0E0); }
static void TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME(const char* scriptName) { invoke<Void>(0xF4B0F0, scriptName); }
static void NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME() { invoke<Void>(0xF4B130); }
static int ADD_HOSPITAL_RESTART(float x, float y, float z, float p3, Any p4) { return invoke<int>(0xF4B150, x, y, z, p3, p4); }
static void DISABLE_HOSPITAL_RESTART(int hospitalIndex, BOOL toggle) { invoke<Void>(0xF4B2B0, hospitalIndex, toggle); }
static int ADD_POLICE_RESTART(float p0, float p1, float p2, float p3, Any p4) { return invoke<int>(0xF4B2D0, p0, p1, p2, p3, p4); }
static void DISABLE_POLICE_RESTART(int policeIndex, BOOL toggle) { invoke<Void>(0xF4B430, policeIndex, toggle); }
static void SET_RESTART_COORD_OVERRIDE(float x, float y, float z, float heading) { invoke<Void>(0xF4B450, x, y, z, heading); }
static void CLEAR_RESTART_COORD_OVERRIDE() { invoke<Void>(0xF4B570); }
static void PAUSE_DEATH_ARREST_RESTART(BOOL toggle) { invoke<Void>(0xF4B580, toggle); }
static void IGNORE_NEXT_RESTART(BOOL toggle) { invoke<Void>(0xF4B5A0, toggle); }
static void SET_FADE_OUT_AFTER_DEATH(BOOL toggle) { invoke<Void>(0xF4B5C0, toggle); }
static void SET_FADE_OUT_AFTER_ARREST(BOOL toggle) { invoke<Void>(0xF4B5E0, toggle); }
static void SET_FADE_IN_AFTER_DEATH_ARREST(BOOL toggle) { invoke<Void>(0xF4B600, toggle); }
static void SET_FADE_IN_AFTER_LOAD(BOOL toggle) { invoke<Void>(0xF4B620, toggle); }
static int REGISTER_SAVE_HOUSE(float x, float y, float z, float p3, const char* p4, Any p5, Any p6) { return invoke<int>(0xF4B640, x, y, z, p3, p4, p5, p6); }
static void SET_SAVE_HOUSE(int savehouseHandle, BOOL p1, BOOL p2) { invoke<Void>(0xF4B6C0, savehouseHandle, p1, p2); }
static BOOL OVERRIDE_SAVE_HOUSE(BOOL p0, float p1, float p2, float p3, float p4, BOOL p5, float p6, float p7) { return invoke<BOOL>(0xF4B6E0, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL GET_SAVE_HOUSE_DETAILS_AFTER_SUCCESSFUL_LOAD(Vector3* p0, float* p1, BOOL* fadeInAfterLoad, BOOL* p3) { return invoke<BOOL>(0xF4B7C0, p0, p1, fadeInAfterLoad, p3); }
static void DO_AUTO_SAVE() { invoke<Void>(0xF4B890); }
static BOOL GET_IS_AUTO_SAVE_OFF() { return invoke<BOOL>(0xF4B910); }
static BOOL IS_AUTO_SAVE_IN_PROGRESS() { return invoke<BOOL>(0xF4B930); }
static BOOL HAS_CODE_REQUESTED_AUTOSAVE() { return invoke<BOOL>(0xF4B960); }
static void CLEAR_CODE_REQUESTED_AUTOSAVE() { invoke<Void>(0xF4B970); }
static void BEGIN_REPLAY_STATS(Any p0, Any p1) { invoke<Void>(0xF4B980, p0, p1); }
static void ADD_REPLAY_STAT_VALUE(Any value) { invoke<Void>(0xF4B9A0, value); }
static void END_REPLAY_STATS() { invoke<Void>(0xF4B9C0); }
static BOOL HAVE_REPLAY_STATS_BEEN_STORED() { return invoke<BOOL>(0xF4B9D0); }
static int GET_REPLAY_STAT_MISSION_ID() { return invoke<int>(0xF4B9E0); }
static int GET_REPLAY_STAT_MISSION_TYPE() { return invoke<int>(0xF4B9F0); }
static int GET_REPLAY_STAT_COUNT() { return invoke<int>(0xF4BA00); }
static int GET_REPLAY_STAT_AT_INDEX(int index) { return invoke<int>(0xF4BA30, index); }
static void CLEAR_REPLAY_STATS() { invoke<Void>(0xF4BA60); }
static BOOL QUEUE_MISSION_REPEAT_LOAD() { return invoke<BOOL>(0xF4BA70); }
static BOOL QUEUE_MISSION_REPEAT_SAVE() { return invoke<BOOL>(0xF4BA90); }
static BOOL QUEUE_MISSION_REPEAT_SAVE_FOR_BENCHMARK_TEST() { return invoke<BOOL>(0xF4BAB0); }
static int GET_STATUS_OF_MISSION_REPEAT_SAVE() { return invoke<int>(0xF4BAE0); }
static BOOL IS_MEMORY_CARD_IN_USE() { return invoke<BOOL>(0xF4BB00); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed) { invoke<Void>(0xF4BB20, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, Any p14) { invoke<Void>(0xF4BBC0, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14); }
static void SHOOT_SINGLE_BULLET_BETWEEN_COORDS_IGNORE_ENTITY_NEW(float x1, float y1, float z1, float x2, float y2, float z2, int damage, BOOL p7, Hash weaponHash, Ped ownerPed, BOOL isAudible, BOOL isInvisible, float speed, Entity entity, BOOL p14, BOOL p15, Entity targetEntity, BOOL p17, Any p18, Any p19, Any p20) { invoke<Void>(0xF4BC60, x1, y1, z1, x2, y2, z2, damage, p7, weaponHash, ownerPed, isAudible, isInvisible, speed, entity, p14, p15, targetEntity, p17, p18, p19, p20); }
static void GET_MODEL_DIMENSIONS(Hash modelHash, Vector3* minimum, Vector3* maximum) { invoke<Void>(0xF4BD60, modelHash, minimum, maximum); }
static void SET_FAKE_WANTED_LEVEL(int fakeWantedLevel) { invoke<Void>(0xF4BE60, fakeWantedLevel); }
static int GET_FAKE_WANTED_LEVEL() { return invoke<int>(0xF4BF00); }
static void USING_MISSION_CREATOR(BOOL toggle) { invoke<Void>(0xF4BF10, toggle); }
static void ALLOW_MISSION_CREATOR_WARP(BOOL toggle) { invoke<Void>(0xF4BF70, toggle); }
static void SET_MINIGAME_IN_PROGRESS(BOOL toggle) { invoke<Void>(0xF4BFC0, toggle); }
static BOOL IS_MINIGAME_IN_PROGRESS() { return invoke<BOOL>(0xF4BFE0); }
static BOOL IS_THIS_A_MINIGAME_SCRIPT() { return invoke<BOOL>(0xF4C000); }
static BOOL IS_SNIPER_INVERTED() { return invoke<BOOL>(0xF4C040); }
static BOOL SHOULD_USE_METRIC_MEASUREMENTS() { return invoke<BOOL>(0xF4C050); }
static int GET_PROFILE_SETTING(int profileSetting) { return invoke<int>(0xF4C070, profileSetting); }
static BOOL ARE_STRINGS_EQUAL(const char* string1, const char* string2) { return invoke<BOOL>(0xF4C0A0, string1, string2); }
static int COMPARE_STRINGS(const char* str1, const char* str2, BOOL matchCase, int maxLength) { return invoke<int>(0xF4C0E0, str1, str2, matchCase, maxLength); }
static int ABSI(int value) { return invoke<int>(0xF4C130, value); }
static float ABSF(float value) { return invoke<float>(0xF4C150, value); }
static BOOL IS_SNIPER_BULLET_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xF4C180, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PROJECTILE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C240, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, int type, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C340, x1, y1, z1, x2, y2, z2, type, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C3A0, x1, y1, z1, x2, y2, z2, width, p7, ownedByPlayer); }
static BOOL IS_PROJECTILE_TYPE_WITHIN_DISTANCE(float x, float y, float z, Hash projectileHash, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C400, x, y, z, projectileHash, radius, ownedByPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Hash projectileHash, Vector3* projectilePos, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C440, x1, y1, z1, x2, y2, z2, projectileHash, projectilePos, ownedByPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_IN_ANGLED_AREA(float vecAngledAreaPoint1X, float vecAngledAreaPoint1Y, float vecAngledAreaPoint1Z, float vecAngledAreaPoint2X, float vecAngledAreaPoint2Y, float vecAngledAreaPoint2Z, float distanceOfOppositeFace, Hash weaponType, Vector3* positionOut, BOOL bIsPlayer) { return invoke<BOOL>(0xF4C4D0, vecAngledAreaPoint1X, vecAngledAreaPoint1Y, vecAngledAreaPoint1Z, vecAngledAreaPoint2X, vecAngledAreaPoint2Y, vecAngledAreaPoint2Z, distanceOfOppositeFace, weaponType, positionOut, bIsPlayer); }
static BOOL GET_COORDS_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, BOOL p4) { return invoke<BOOL>(0xF4C570, ped, weaponHash, distance, outCoords, p4); }
static BOOL GET_PROJECTILE_OF_PROJECTILE_TYPE_WITHIN_DISTANCE(Ped ped, Hash weaponHash, float distance, Vector3* outCoords, Object* outProjectile, BOOL p5) { return invoke<BOOL>(0xF4C620, ped, weaponHash, distance, outCoords, outProjectile, p5); }
static BOOL IS_BULLET_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C6D0, x1, y1, z1, x2, y2, z2, width, ownedByPlayer); }
static BOOL IS_BULLET_IN_AREA(float x, float y, float z, float radius, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C790, x, y, z, radius, ownedByPlayer); }
static BOOL IS_BULLET_IN_BOX(float x1, float y1, float z1, float x2, float y2, float z2, BOOL ownedByPlayer) { return invoke<BOOL>(0xF4C830, x1, y1, z1, x2, y2, z2, ownedByPlayer); }
static BOOL HAS_BULLET_IMPACTED_IN_AREA(float x, float y, float z, float p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xF4C920, x, y, z, p3, p4, p5); }
static BOOL HAS_BULLET_IMPACTED_IN_BOX(float p0, float p1, float p2, float p3, float p4, float p5, BOOL p6, BOOL p7) { return invoke<BOOL>(0xF4C9C0, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL IS_ORBIS_VERSION() { return invoke<BOOL>(0xF4CAB0); }
static BOOL IS_DURANGO_VERSION() { return invoke<BOOL>(0xF4CAC0); }
static BOOL IS_XBOX360_VERSION() { return invoke<BOOL>(0xF4CAD0); }
static BOOL IS_PS3_VERSION() { return invoke<BOOL>(0xF4CAE0); }
static BOOL IS_PC_VERSION() { return invoke<BOOL>(0xF4CAF0); }
static BOOL IS_STEAM_VERSION() { return invoke<BOOL>(0xF4CB00); }
static BOOL IS_AUSSIE_VERSION() { return invoke<BOOL>(0xF4CB10); }
static BOOL IS_JAPANESE_VERSION() { return invoke<BOOL>(0xF4CB20); }
static BOOL IS_XBOX_PLATFORM() { return invoke<BOOL>(0xF4CB40); }
static BOOL IS_SCARLETT_VERSION() { return invoke<BOOL>(0xF4CB50); }
static BOOL IS_SCE_PLATFORM() { return invoke<BOOL>(0xF4CB60); }
static BOOL IS_PROSPERO_VERSION() { return invoke<BOOL>(0xF4CB70); }
static BOOL IS_STRING_NULL(const char* string) { return invoke<BOOL>(0xF4CB80, string); }
static BOOL IS_STRING_NULL_OR_EMPTY(const char* string) { return invoke<BOOL>(0xF4CBA0, string); }
static BOOL STRING_TO_INT(const char* string, int* outInteger) { return invoke<BOOL>(0xF4CBC0, string, outInteger); }
static void SET_BITS_IN_RANGE(int* var, int rangeStart, int rangeEnd, int p3) { invoke<Void>(0xF4CC60, var, rangeStart, rangeEnd, p3); }
static int GET_BITS_IN_RANGE(int var, int rangeStart, int rangeEnd) { return invoke<int>(0xF4CCB0, var, rangeStart, rangeEnd); }
static int ADD_STUNT_JUMP(float x1, float y1, float z1, float x2, float y2, float z2, float x3, float y3, float z3, float x4, float y4, float z4, float camX, float camY, float camZ, int p15, int p16, int p17) { return invoke<int>(0xF4CCF0, x1, y1, z1, x2, y2, z2, x3, y3, z3, x4, y4, z4, camX, camY, camZ, p15, p16, p17); }
static int ADD_STUNT_JUMP_ANGLED(float x1, float y1, float z1, float x2, float y2, float z2, float radius1, float x3, float y3, float z3, float x4, float y4, float z4, float radius2, float camX, float camY, float camZ, int p17, int p18, int p19) { return invoke<int>(0xF4CDD0, x1, y1, z1, x2, y2, z2, radius1, x3, y3, z3, x4, y4, z4, radius2, camX, camY, camZ, p17, p18, p19); }
static void TOGGLE_SHOW_OPTIONAL_STUNT_JUMP_CAMERA(BOOL toggle) { invoke<Void>(0xF4CEC0, toggle); }
static void DELETE_STUNT_JUMP(int p0) { invoke<Void>(0xF4CEE0, p0); }
static void ENABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xF4CF00, p0); }
static void DISABLE_STUNT_JUMP_SET(int p0) { invoke<Void>(0xF4CF20, p0); }
static void SET_STUNT_JUMPS_CAN_TRIGGER(BOOL toggle) { invoke<Void>(0xF4CF40, toggle); }
static BOOL IS_STUNT_JUMP_IN_PROGRESS() { return invoke<BOOL>(0xF4CF70); }
static BOOL IS_STUNT_JUMP_MESSAGE_SHOWING() { return invoke<BOOL>(0xF4CFA0); }
static int GET_NUM_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xF4CFD0); }
static int GET_TOTAL_SUCCESSFUL_STUNT_JUMPS() { return invoke<int>(0xF4D000); }
static void CANCEL_STUNT_JUMP() { invoke<Void>(0xF4D030); }
static void SET_GAME_PAUSED(BOOL toggle) { invoke<Void>(0xF4D050, toggle); }
static void SET_THIS_SCRIPT_CAN_BE_PAUSED(BOOL toggle) { invoke<Void>(0xF4D080, toggle); }
static void SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(BOOL toggle) { invoke<Void>(0xF4D0B0, toggle); }
static BOOL HAS_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash, int amount) { return invoke<BOOL>(0xF4D0E0, hash, amount); }
static BOOL HAS_PC_CHEAT_WITH_HASH_BEEN_ACTIVATED(Hash hash) { return invoke<BOOL>(0xF4D110, hash); }
static void OVERRIDE_FREEZE_FLAGS(BOOL p0) { invoke<Void>(0xF4D120, p0); }
static void SET_INSTANCE_PRIORITY_MODE(int p0) { invoke<Void>(0xF4D140, p0); }
static void SET_INSTANCE_PRIORITY_HINT(int flag) { invoke<Void>(0xF4D150, flag); }
static BOOL IS_FRONTEND_FADING() { return invoke<BOOL>(0xF4D160); }
static void POPULATE_NOW() { invoke<Void>(0xF4D170); }
static int GET_INDEX_OF_CURRENT_LEVEL() { return invoke<int>(0xF4D180); }
static void SET_GRAVITY_LEVEL(int level) { invoke<Void>(0xF4D1B0, level); }
static void START_SAVE_DATA(Any* p0, Any p1, BOOL p2) { invoke<Void>(0xF4D1D0, p0, p1, p2); }
static void STOP_SAVE_DATA() { invoke<Void>(0xF4D210); }
static int GET_SIZE_OF_SAVE_DATA(BOOL p0) { return invoke<int>(0xF4D230, p0); }
static void REGISTER_INT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D260, p0, name); }
static void REGISTER_INT64_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D290, p0, name); }
static void REGISTER_ENUM_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D2C0, p0, name); }
static void REGISTER_FLOAT_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D2F0, p0, name); }
static void REGISTER_BOOL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D320, p0, name); }
static void REGISTER_TEXT_LABEL_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D350, p0, name); }
static void REGISTER_TEXT_LABEL_15_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D380, p0, name); }
static void REGISTER_TEXT_LABEL_23_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D3B0, p0, name); }
static void REGISTER_TEXT_LABEL_31_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D3E0, p0, name); }
static void REGISTER_TEXT_LABEL_63_TO_SAVE(Any* p0, const char* name) { invoke<Void>(0xF4D410, p0, name); }
static void START_SAVE_STRUCT_WITH_SIZE(Any* p0, int size, const char* structName) { invoke<Void>(0xF4D440, p0, size, structName); }
static void STOP_SAVE_STRUCT() { invoke<Void>(0xF4D480); }
static void START_SAVE_ARRAY_WITH_SIZE(Any* p0, int size, const char* arrayName) { invoke<Void>(0xF4D4A0, p0, size, arrayName); }
static void STOP_SAVE_ARRAY() { invoke<Void>(0xF4D4E0); }
static void COPY_SCRIPT_STRUCT(Any* dst, Any* src, int size) { invoke<Void>(0xF4D500, dst, src, size); }
static void ENABLE_DISPATCH_SERVICE(int dispatchService, BOOL toggle) { invoke<Void>(0xF4D520, dispatchService, toggle); }
static void BLOCK_DISPATCH_SERVICE_RESOURCE_CREATION(int dispatchService, BOOL toggle) { invoke<Void>(0xF4D550, dispatchService, toggle); }
static int GET_NUMBER_RESOURCES_ALLOCATED_TO_WANTED_LEVEL(int dispatchService) { return invoke<int>(0xF4D580, dispatchService); }
static BOOL CREATE_INCIDENT(int dispatchService, float x, float y, float z, int numUnits, float radius, int* outIncidentID, Any p7, Any p8) { return invoke<BOOL>(0xF4D5D0, dispatchService, x, y, z, numUnits, radius, outIncidentID, p7, p8); }
static BOOL CREATE_INCIDENT_WITH_ENTITY(int dispatchService, Ped ped, int numUnits, float radius, int* outIncidentID, Any p5, Any p6) { return invoke<BOOL>(0xF4D610, dispatchService, ped, numUnits, radius, outIncidentID, p5, p6); }
static void DELETE_INCIDENT(int incidentId) { invoke<Void>(0xF4D650, incidentId); }
static BOOL IS_INCIDENT_VALID(int incidentId) { return invoke<BOOL>(0xF4D690, incidentId); }
static void SET_INCIDENT_REQUESTED_UNITS(int incidentId, int dispatchService, int numUnits) { invoke<Void>(0xF4D6D0, incidentId, dispatchService, numUnits); }
static void SET_IDEAL_SPAWN_DISTANCE_FOR_INCIDENT(int incidentId, float p1) { invoke<Void>(0xF4D730, incidentId, p1); }
static BOOL FIND_SPAWN_POINT_IN_DIRECTION(float posX, float posY, float posZ, float fwdVecX, float fwdVecY, float fwdVecZ, float distance, Vector3* spawnPoint) { return invoke<BOOL>(0xF4D780, posX, posY, posZ, fwdVecX, fwdVecY, fwdVecZ, distance, spawnPoint); }
static int ADD_POP_MULTIPLIER_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float p6, float p7, BOOL p8, BOOL p9) { return invoke<int>(0xF4D830, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static BOOL DOES_POP_MULTIPLIER_AREA_EXIST(int id) { return invoke<BOOL>(0xF4D8F0, id); }
static void REMOVE_POP_MULTIPLIER_AREA(int id, BOOL p1) { invoke<Void>(0xF4D930, id, p1); }
static BOOL IS_POP_MULTIPLIER_AREA_NETWORKED(int id) { return invoke<BOOL>(0xF4D950, id); }
static int ADD_POP_MULTIPLIER_SPHERE(float x, float y, float z, float radius, float pedMultiplier, float vehicleMultiplier, BOOL p6, BOOL p7) { return invoke<int>(0xF4D980, x, y, z, radius, pedMultiplier, vehicleMultiplier, p6, p7); }
static BOOL DOES_POP_MULTIPLIER_SPHERE_EXIST(int id) { return invoke<BOOL>(0xF4DA20, id); }
static void REMOVE_POP_MULTIPLIER_SPHERE(int id, BOOL p1) { invoke<Void>(0xF4DA60, id, p1); }
static void ENABLE_TENNIS_MODE(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xF4DA80, ped, toggle, p2); }
static BOOL IS_TENNIS_MODE(Ped ped) { return invoke<BOOL>(0xF4DAA0, ped); }
static void PLAY_TENNIS_SWING_ANIM(Ped ped, const char* animDict, const char* animName, float p3, float p4, BOOL p5) { invoke<Void>(0xF4DB20, ped, animDict, animName, p3, p4, p5); }
static BOOL GET_TENNIS_SWING_ANIM_COMPLETE(Ped ped) { return invoke<BOOL>(0xF4DBD0, ped); }
static BOOL GET_TENNIS_SWING_ANIM_CAN_BE_INTERRUPTED(Ped ped) { return invoke<BOOL>(0xF4DC50, ped); }
static BOOL GET_TENNIS_SWING_ANIM_SWUNG(Ped ped) { return invoke<BOOL>(0xF4DCD0, ped); }
static void PLAY_TENNIS_DIVE_ANIM(Ped ped, int p1, float p2, float p3, float p4, BOOL p5) { invoke<Void>(0xF4DD50, ped, p1, p2, p3, p4, p5); }
static void SET_TENNIS_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* p1, float p2) { invoke<Void>(0xF4DE00, ped, p1, p2); }
static void RESET_DISPATCH_SPAWN_LOCATION() { invoke<Void>(0xF4DEC0); }
static void SET_DISPATCH_SPAWN_LOCATION(float x, float y, float z) { invoke<Void>(0xF4DEE0, x, y, z); }
static void RESET_DISPATCH_IDEAL_SPAWN_DISTANCE() { invoke<Void>(0xF4DF20); }
static void SET_DISPATCH_IDEAL_SPAWN_DISTANCE(float distance) { invoke<Void>(0xF4DF40, distance); }
static void RESET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0) { invoke<Void>(0xF4DF80, p0); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS(Any p0, float p1) { invoke<Void>(0xF4DFE0, p0, p1); }
static void SET_DISPATCH_TIME_BETWEEN_SPAWN_ATTEMPTS_MULTIPLIER(Any p0, float p1) { invoke<Void>(0xF4DFF0, p0, p1); }
static int ADD_DISPATCH_SPAWN_ANGLED_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xF4E000, x1, y1, z1, x2, y2, z2, width); }
static int ADD_DISPATCH_SPAWN_SPHERE_BLOCKING_AREA(float x1, float y1, float x2, float y2) { return invoke<int>(0xF4E080, x1, y1, x2, y2); }
static void REMOVE_DISPATCH_SPAWN_BLOCKING_AREA(int p0) { invoke<Void>(0xF4E0F0, p0); }
static void RESET_DISPATCH_SPAWN_BLOCKING_AREAS() { invoke<Void>(0xF4E120); }
static void RESET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN() { invoke<Void>(0xF4E140); }
static void SET_WANTED_RESPONSE_NUM_PEDS_TO_SPAWN(int p0, int p1) { invoke<Void>(0xF4E160, p0, p1); }
static void ADD_TACTICAL_NAV_MESH_POINT(float x, float y, float z) { invoke<Void>(0xF4E190, x, y, z); }
static void CLEAR_TACTICAL_NAV_MESH_POINTS() { invoke<Void>(0xF4E1C0); }
static void SET_RIOT_MODE_ENABLED(BOOL toggle) { invoke<Void>(0xF4E1D0, toggle); }
static void DISPLAY_ONSCREEN_KEYBOARD_WITH_LONGER_INITIAL_STRING(int p0, const char* windowTitle, Any* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, const char* defaultConcat4, const char* defaultConcat5, const char* defaultConcat6, const char* defaultConcat7, int maxInputLength) { invoke<Void>(0xF4E1F0, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, defaultConcat4, defaultConcat5, defaultConcat6, defaultConcat7, maxInputLength); }
static void DISPLAY_ONSCREEN_KEYBOARD(int p0, const char* windowTitle, const char* p2, const char* defaultText, const char* defaultConcat1, const char* defaultConcat2, const char* defaultConcat3, int maxInputLength) { invoke<Void>(0xF4E260, p0, windowTitle, p2, defaultText, defaultConcat1, defaultConcat2, defaultConcat3, maxInputLength); }
static int UPDATE_ONSCREEN_KEYBOARD() { return invoke<int>(0xF4E2C0); }
static const char* GET_ONSCREEN_KEYBOARD_RESULT() { return invoke<const char*>(0xF4E2E0); }
static void CANCEL_ONSCREEN_KEYBOARD() { invoke<Void>(0xF4E310); }
static void NEXT_ONSCREEN_KEYBOARD_RESULT_WILL_DISPLAY_USING_THESE_FONTS(int p0) { invoke<Void>(0xF4E320, p0); }
static void ACTION_MANAGER_ENABLE_ACTION(Hash hash, BOOL enable) { invoke<Void>(0xF4E330, hash, enable); }
static int GET_REAL_WORLD_TIME() { return invoke<int>(0xF4E360); }
static void SUPRESS_RANDOM_EVENT_THIS_FRAME(int eventType, BOOL suppress) { invoke<Void>(0xF4E380, eventType, suppress); }
static void SET_EXPLOSIVE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xF4E3A0, player); }
static void SET_FIRE_AMMO_THIS_FRAME(Player player) { invoke<Void>(0xF4E3E0, player); }
static void SET_EXPLOSIVE_MELEE_THIS_FRAME(Player player) { invoke<Void>(0xF4E430, player); }
static void SET_SUPER_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xF4E470, player); }
static void SET_BEAST_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xF4E4A0, player); }
static void SET_FORCED_JUMP_THIS_FRAME(Player player) { invoke<Void>(0xF4E4D0, player); }
static BOOL HAS_GAME_INSTALLED_THIS_SESSION() { return invoke<BOOL>(0xF4E500); }
static void SET_TICKER_JOHNMARSTON_IS_DONE() { invoke<Void>(0xF4E510); }
static BOOL ARE_PROFILE_SETTINGS_VALID() { return invoke<BOOL>(0xF4E560); }
static void PREVENT_ARREST_STATE_THIS_FRAME() { invoke<Void>(0xF4E580); }
static void FORCE_GAME_STATE_PLAYING() { invoke<Void>(0xF4E590); }
static void SCRIPT_RACE_INIT(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xF4E5C0, p0, p1, p2, p3); }
static void SCRIPT_RACE_SHUTDOWN() { invoke<Void>(0xF4E5E0); }
static void SCRIPT_RACE_PLAYER_HIT_CHECKPOINT(Player player, Any p1, Any p2, Any p3) { invoke<Void>(0xF4E5F0, player, p1, p2, p3); }
static BOOL SCRIPT_RACE_GET_PLAYER_SPLIT_TIME(Player player, int* p1, int* p2) { return invoke<BOOL>(0xF4E610, player, p1, p2); }
static void START_END_USER_BENCHMARK() { invoke<Void>(0xF4E640); }
static void STOP_END_USER_BENCHMARK() { invoke<Void>(0xF4E650); }
static void RESET_END_USER_BENCHMARK() { invoke<Void>(0xF4E660); }
static void SAVE_END_USER_BENCHMARK() { invoke<Void>(0xF4E670); }
static BOOL UI_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xF4E680); }
static BOOL LANDING_SCREEN_STARTED_END_USER_BENCHMARK() { return invoke<BOOL>(0xF4E690); }
static BOOL IS_COMMANDLINE_END_USER_BENCHMARK() { return invoke<BOOL>(0xF4E6A0); }
static int GET_BENCHMARK_ITERATIONS() { return invoke<int>(0xF4E6B0); }
static int GET_BENCHMARK_PASS() { return invoke<int>(0xF4E6C0); }
static void RESTART_GAME() { invoke<Void>(0xF4E6D0); }
static void QUIT_GAME() { invoke<Void>(0xF4E6E0); }
static BOOL HAS_ASYNC_INSTALL_FINISHED() { return invoke<BOOL>(0xF4E6F0); }
static void CLEANUP_ASYNC_INSTALL() { invoke<Void>(0xF4E710); }
static BOOL PLM_IS_IN_CONSTRAINED_MODE() { return invoke<BOOL>(0xF4E720); }
static int PLM_GET_CONSTRAINED_DURATION_MS() { return invoke<int>(0xF4E750); }
static void SET_PLAYER_IS_IN_ANIMAL_FORM(BOOL toggle) { invoke<Void>(0xF4E780, toggle); }
static BOOL GET_IS_PLAYER_IN_ANIMAL_FORM() { return invoke<BOOL>(0xF4E7A0); }
static void SET_PLAYER_IS_REPEATING_A_MISSION(BOOL toggle) { invoke<Void>(0xF4E7B0, toggle); }
static void DISABLE_SCREEN_DIMMING_THIS_FRAME() { invoke<Void>(0xF4E7D0); }
static float GET_CITY_DENSITY() { return invoke<float>(0xF4E7E0); }
static void USE_ACTIVE_CAMERA_FOR_TIMESLICING_CENTRE() { invoke<Void>(0xF4E7F0); }
static void SET_CONTENT_ID_INDEX(Hash contentId, int index) { invoke<Void>(0xF4E800, contentId, index); }
static int GET_CONTENT_ID_INDEX(Hash contentId) { return invoke<int>(0xF4E850, contentId); }
static void CREATE_MOBILE_PHONE(int phoneType) { invoke<Void>(0xFFF400, phoneType); }
static void DESTROY_MOBILE_PHONE() { invoke<Void>(0xFFF410); }
static void SET_MOBILE_PHONE_SCALE(float scale) { invoke<Void>(0xFFF440, scale); }
static void SET_MOBILE_PHONE_ROTATION(float rotX, float rotY, float rotZ, Any p3) { invoke<Void>(0xFFF460, rotX, rotY, rotZ, p3); }
static void GET_MOBILE_PHONE_ROTATION(Vector3* rotation, Vehicle p1) { invoke<Void>(0xFFF4A0, rotation, p1); }
static void SET_MOBILE_PHONE_POSITION(float posX, float posY, float posZ) { invoke<Void>(0xFFF590, posX, posY, posZ); }
static void GET_MOBILE_PHONE_POSITION(Vector3* position) { invoke<Void>(0xFFF620, position); }
static void SCRIPT_IS_MOVING_MOBILE_PHONE_OFFSCREEN(BOOL toggle) { invoke<Void>(0xFFF690, toggle); }
static BOOL CAN_PHONE_BE_SEEN_ON_SCREEN() { return invoke<BOOL>(0xFFF6B0); }
static void SET_MOBILE_PHONE_DOF_STATE(BOOL toggle) { invoke<Void>(0xFFF6C0, toggle); }
static void CELL_SET_INPUT(int direction) { invoke<Void>(0xFFF6E0, direction); }
static void CELL_HORIZONTAL_MODE_TOGGLE(BOOL toggle) { invoke<Void>(0xFFF6F0, toggle); }
static void CELL_CAM_ACTIVATE(BOOL p0, BOOL p1) { invoke<Void>(0xFFF710, p0, p1); }
static void CELL_CAM_ACTIVATE_SELFIE_MODE(BOOL toggle) { invoke<Void>(0xFFF730, toggle); }
static void CELL_CAM_ACTIVATE_SHALLOW_DOF_MODE(BOOL toggle) { invoke<Void>(0xFFF750, toggle); }
static void CELL_CAM_SET_SELFIE_MODE_SIDE_OFFSET_SCALING(float p0) { invoke<Void>(0xFFF770, p0); }
static void CELL_CAM_SET_SELFIE_MODE_HORZ_PAN_OFFSET(float horizontalPan) { invoke<Void>(0xFFF780, horizontalPan); }
static void CELL_CAM_SET_SELFIE_MODE_VERT_PAN_OFFSET(float vertPan) { invoke<Void>(0xFFF790, vertPan); }
static void CELL_CAM_SET_SELFIE_MODE_ROLL_OFFSET(float roll) { invoke<Void>(0xFFF7A0, roll); }
static void CELL_CAM_SET_SELFIE_MODE_DISTANCE_SCALING(float distanceScaling) { invoke<Void>(0xFFF7B0, distanceScaling); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_YAW_OFFSET(float yaw) { invoke<Void>(0xFFF7C0, yaw); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_ROLL_OFFSET(float roll) { invoke<Void>(0xFFF7D0, roll); }
static void CELL_CAM_SET_SELFIE_MODE_HEAD_PITCH_OFFSET(float pitch) { invoke<Void>(0xFFF7E0, pitch); }
static BOOL CELL_CAM_IS_CHAR_VISIBLE_NO_FACE_CHECK(Entity entity) { return invoke<BOOL>(0xFFF7F0, entity); }
static void GET_MOBILE_PHONE_RENDER_ID(int* renderId) { invoke<Void>(0xFFF820, renderId); }
static void NETWORK_INITIALIZE_CASH(int wallet, int bank) { invoke<Void>(0xF6F3C0, wallet, bank); }
static void NETWORK_DELETE_CHARACTER(int characterSlot, BOOL p1, BOOL p2) { invoke<Void>(0xF6F3D0, characterSlot, p1, p2); }
static void NETWORK_MANUAL_DELETE_CHARACTER(int characterSlot) { invoke<Void>(0xF6F3F0, characterSlot); }
static BOOL NETWORK_GET_PLAYER_IS_HIGH_EARNER() { return invoke<BOOL>(0xF6F480); }
static void NETWORK_CLEAR_CHARACTER_WALLET(int characterSlot) { invoke<Void>(0xF6F4A0, characterSlot); }
static void NETWORK_GIVE_PLAYER_JOBSHARE_CASH(int amount, Any* gamerHandle) { invoke<Void>(0xF6F4F0, amount, gamerHandle); }
static void NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(int value, Any* gamerHandle) { invoke<Void>(0xF6F500, value, gamerHandle); }
static BOOL NETWORK_CAN_SHARE_JOB_CASH() { return invoke<BOOL>(0xF6F510); }
static void NETWORK_REFUND_CASH(int index, const char* context, const char* reason, BOOL p3) { invoke<Void>(0xF6F570, index, context, reason, p3); }
static void NETWORK_DEDUCT_CASH(int amount, const char* p1, const char* p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0xF6F590, amount, p1, p2, p3, p4, p5); }
static BOOL NETWORK_MONEY_CAN_BET(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xF6F5D0, amount, p1, p2); }
static BOOL NETWORK_CAN_BET(int amount) { return invoke<BOOL>(0xF6F610, amount); }
static BOOL NETWORK_CASINO_CAN_BET(Hash hash) { return invoke<BOOL>(0xF6F690, hash); }
static BOOL NETWORK_CASINO_CAN_BET_PVC() { return invoke<BOOL>(0xF6F6C0); }
static BOOL NETWORK_CASINO_CAN_BET_AMOUNT(Any p0) { return invoke<BOOL>(0xF6F6F0, p0); }
static BOOL NETWORK_CASINO_CAN_BUY_CHIPS_PVC() { return invoke<BOOL>(0xF6F720); }
static BOOL NETWORK_CASINO_BUY_CHIPS(int p0, int p1) { return invoke<BOOL>(0xF6F750, p0, p1); }
static BOOL NETWORK_CASINO_SELL_CHIPS(int p0, int p1) { return invoke<BOOL>(0xF6F780, p0, p1); }
static void NETWORK_DEFER_CASH_TRANSACTIONS_UNTIL_SHOP_SAVE() { invoke<Void>(0xF6F7B0); }
static BOOL CAN_PAY_AMOUNT_TO_BOSS(int p0, int p1, int amount, int* p3) { return invoke<BOOL>(0xF6F7C0, p0, p1, amount, p3); }
static void NETWORK_EARN_FROM_PICKUP(int amount) { invoke<Void>(0xF6F840, amount); }
static void NETWORK_EARN_FROM_CASHING_OUT(int amount) { invoke<Void>(0xF6F900, amount); }
static void NETWORK_EARN_FROM_GANGATTACK_PICKUP(int amount) { invoke<Void>(0xF6F9C0, amount); }
static void NETWORK_EARN_ASSASSINATE_TARGET_KILLED(int amount) { invoke<Void>(0xF6FA80, amount); }
static void NETWORK_EARN_FROM_ROB_ARMORED_CARS(int amount) { invoke<Void>(0xF6FB40, amount); }
static void NETWORK_EARN_FROM_CRATE_DROP(int amount) { invoke<Void>(0xF6FC00, amount); }
static void NETWORK_EARN_FROM_BETTING(int amount, const char* p1) { invoke<Void>(0xF6FCC0, amount, p1); }
static void NETWORK_EARN_FROM_JOB(int amount, const char* p1) { invoke<Void>(0xF6FCD0, amount, p1); }
static void NETWORK_EARN_FROM_JOBX2(int amount, const char* p1) { invoke<Void>(0xF6FCE0, amount, p1); }
static void NETWORK_EARN_FROM_PREMIUM_JOB(int amount, const char* p1) { invoke<Void>(0xF6FCF0, amount, p1); }
static void NETWORK_EARN_FROM_BEND_JOB(int amount, const char* heistHash) { invoke<Void>(0xF6FD00, amount, heistHash); }
static void NETWORK_EARN_FROM_CHALLENGE_WIN(Any p0, Any* p1, BOOL p2) { invoke<Void>(0xF6FD10, p0, p1, p2); }
static void NETWORK_EARN_FROM_BOUNTY(int amount, Any* gamerHandle, Any* p2, Any p3) { invoke<Void>(0xF6FD30, amount, gamerHandle, p2, p3); }
static void NETWORK_EARN_FROM_IMPORT_EXPORT(int amount, Hash modelHash) { invoke<Void>(0xF6FD50, amount, modelHash); }
static void NETWORK_EARN_FROM_HOLDUPS(int amount) { invoke<Void>(0xF6FD60, amount); }
static void NETWORK_EARN_FROM_PROPERTY(int amount, Hash propertyName) { invoke<Void>(0xF6FE20, amount, propertyName); }
static void NETWORK_EARN_FROM_AI_TARGET_KILL(Any p0, Any p1) { invoke<Void>(0xF6FEF0, p0, p1); }
static void NETWORK_EARN_FROM_NOT_BADSPORT(int amount) { invoke<Void>(0xF6FFB0, amount); }
static void NETWORK_EARN_FROM_ROCKSTAR(int amount) { invoke<Void>(0xF70070, amount); }
static void NETWORK_EARN_FROM_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0xF70130, p0, p1, p2, p3, p4, p5, p6, p7); }
static void NETWORK_EARN_FROM_PERSONAL_VEHICLE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { invoke<Void>(0xF70180, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void NETWORK_EARN_FROM_DAILY_OBJECTIVES(int amount, const char* type, int characterSlot) { invoke<Void>(0xF701E0, amount, type, characterSlot); }
static void NETWORK_EARN_FROM_AMBIENT_JOB(int p0, const char* p1, Any* p2) { invoke<Void>(0xF70200, p0, p1, p2); }
static void NETWORK_EARN_FROM_JOB_BONUS(Any p0, Any* p1, Any* p2) { invoke<Void>(0xF70220, p0, p1, p2); }
static void NETWORK_EARN_FROM_CRIMINAL_MASTERMIND(Any p0, Any p1, Any p2) { invoke<Void>(0xF70240, p0, p1, p2); }
static void NETWORK_EARN_HEIST_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0xF70260, p0, p1, p2); }
static void NETWORK_EARN_FIRST_TIME_BONUS(Any p0, Any p1, Any p2) { invoke<Void>(0xF70280, p0, p1, p2); }
static void NETWORK_EARN_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0xF702A0, p0, p1, p2); }
static void NETWORK_EARN_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0xF70370, p0, p1, p2); }
static void NETWORK_EARN_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF70440, p0, p1, p2, p3); }
static void NETWORK_EARN_FROM_WAREHOUSE(int amount, int id) { invoke<Void>(0xF70520, amount, id); }
static void NETWORK_EARN_FROM_CONTRABAND(int amount, Any p1) { invoke<Void>(0xF705E0, amount, p1); }
static void NETWORK_EARN_FROM_DESTROYING_CONTRABAND(Any p0) { invoke<Void>(0xF706A0, p0); }
static void NETWORK_EARN_FROM_SMUGGLER_WORK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF70760, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_FROM_HANGAR_TRADE(Any p0, Any p1) { invoke<Void>(0xF70780, p0, p1); }
static void NETWORK_EARN_PURCHASE_CLUB_HOUSE(Any p0, Any p1) { invoke<Void>(0xF70860, p0, p1); }
static void NETWORK_EARN_FROM_BUSINESS_PRODUCT(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xF70870, amount, p1, p2, p3); }
static void NETWORK_EARN_FROM_VEHICLE_EXPORT(int amount, Any p1, Any p2) { invoke<Void>(0xF70960, amount, p1, p2); }
static void NETWORK_EARN_SMUGGLER_AGENCY(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xF70A40, amount, p1, p2, p3); }
static void NETWORK_EARN_BOUNTY_HUNTER_REWARD(Any p0) { invoke<Void>(0xF70B20, p0); }
static void NETWORK_EARN_FROM_BUSINESS_BATTLE(Any p0) { invoke<Void>(0xF70BE0, p0); }
static void NETWORK_EARN_FROM_CLUB_MANAGEMENT_PARTICIPATION(Any p0, int p1) { invoke<Void>(0xF70CA0, p0, p1); }
static void NETWORK_EARN_FROM_FMBB_PHONECALL_MISSION(Any p0) { invoke<Void>(0xF70D70, p0); }
static void NETWORK_EARN_FROM_BUSINESS_HUB_SELL(Any p0, Any p1, Any p2) { invoke<Void>(0xF70E30, p0, p1, p2); }
static void NETWORK_EARN_FROM_FMBB_BOSS_WORK(Any p0) { invoke<Void>(0xF70F10, p0); }
static void NETWORK_EARN_FMBB_WAGE_BONUS(Any p0) { invoke<Void>(0xF70FD0, p0); }
static BOOL NETWORK_CAN_SPEND_MONEY(Any p0, BOOL p1, BOOL p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0xF71090, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_CAN_SPEND_MONEY2(Any p0, BOOL p1, BOOL p2, BOOL p3, Any* p4, Any p5, Any p6) { return invoke<BOOL>(0xF71120, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_BUY_ITEM(int amount, Hash item, Any p2, Any p3, BOOL p4, const char* item_name, Any p6, Any p7, Any p8, BOOL p9) { invoke<Void>(0xF71180, amount, item, p2, p3, p4, item_name, p6, p7, p8, p9); }
static void NETWORK_SPENT_TAXI(int amount, BOOL p1, BOOL p2, Any p3, Any p4) { invoke<Void>(0xF711E0, amount, p1, p2, p3, p4); }
static void NETWORK_PAY_EMPLOYEE_WAGE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF712F0, p0, p1, p2); }
static void NETWORK_PAY_MATCH_ENTRY_FEE(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xF713E0, amount, matchId, p2, p3); }
static void NETWORK_SPENT_BETTING(int amount, int p1, const char* matchId, BOOL p3, BOOL p4) { invoke<Void>(0xF71410, amount, p1, matchId, p3, p4); }
static void NETWORK_SPENT_WAGER(Any p0, Any p1, int amount) { invoke<Void>(0xF71440, p0, p1, amount); }
static void NETWORK_SPENT_IN_STRIPCLUB(Any p0, BOOL p1, Any p2, BOOL p3) { invoke<Void>(0xF71460, p0, p1, p2, p3); }
static void NETWORK_BUY_HEALTHCARE(int cost, BOOL p1, BOOL p2) { invoke<Void>(0xF71560, cost, p1, p2); }
static void NETWORK_BUY_AIRSTRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71650, cost, p1, p2, p3); }
static void NETWORK_BUY_BACKUP_GANG(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0xF71750, p0, p1, p2, p3); }
static void NETWORK_BUY_HELI_STRIKE(int cost, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71860, cost, p1, p2, p3); }
static void NETWORK_SPENT_AMMO_DROP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71960, p0, p1, p2, p3); }
static void NETWORK_BUY_BOUNTY(int amount, Player victim, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xF71A60, amount, victim, p2, p3, p4); }
static void NETWORK_BUY_PROPERTY(int cost, Hash propertyName, BOOL p2, BOOL p3) { invoke<Void>(0xF71A90, cost, propertyName, p2, p3); }
static void NETWORK_BUY_SMOKES(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xF71AC0, p0, p1, p2); }
static void NETWORK_SPENT_HELI_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71BB0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOAT_PICKUP(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71CB0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BULL_SHARK(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71DB0, p0, p1, p2, p3); }
static void NETWORK_SPENT_CASH_DROP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF71EB0, amount, p1, p2); }
static void NETWORK_SPENT_HIRE_MUGGER(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF71FA0, p0, p1, p2, p3); }
static void NETWORK_SPENT_ROBBED_BY_MUGGER(int amount, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF720A0, amount, p1, p2, p3); }
static void NETWORK_SPENT_HIRE_MERCENARY(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF721A0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_WANTEDLEVEL(Any p0, Any* p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xF722A0, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_BUY_OFFTHERADAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF722D0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_REVEAL_PLAYERS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF723D0, p0, p1, p2, p3); }
static void NETWORK_SPENT_CARWASH(Any p0, Any p1, Any p2, BOOL p3, BOOL p4) { invoke<Void>(0xF724D0, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_CINEMA(Any p0, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF725E0, p0, p1, p2, p3); }
static void NETWORK_SPENT_TELESCOPE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF726E0, p0, p1, p2); }
static void NETWORK_SPENT_HOLDUPS(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF727D0, p0, p1, p2); }
static void NETWORK_SPENT_BUY_PASSIVE_MODE(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF728C0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BANK_INTEREST(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xF729C0, p0, p1, p2); }
static void NETWORK_SPENT_PROSTITUTES(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF72AB0, p0, p1, p2); }
static void NETWORK_SPENT_ARREST_BAIL(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF72BA0, p0, p1, p2); }
static void NETWORK_SPENT_PAY_VEHICLE_INSURANCE_PREMIUM(int amount, Hash vehicleModel, Any* gamerHandle, BOOL notBankrupt, BOOL hasTheMoney) { invoke<Void>(0xF72C90, amount, vehicleModel, gamerHandle, notBankrupt, hasTheMoney); }
static void NETWORK_SPENT_CALL_PLAYER(Any p0, Any* p1, BOOL p2, BOOL p3) { invoke<Void>(0xF72CC0, p0, p1, p2, p3); }
static void NETWORK_SPENT_BOUNTY(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xF72CF0, p0, p1, p2); }
static void NETWORK_SPENT_FROM_ROCKSTAR(int p0, BOOL p1, BOOL p2) { invoke<Void>(0xF72DE0, p0, p1, p2); }
static int NETWORK_SPEND_EARNED_FROM_BANK_AND_WALLETS(int amount) { return invoke<int>(0xF72ED0, amount); }
static const char* PROCESS_CASH_GIFT(int* p0, int* p1, const char* p2) { return invoke<const char*>(0xF72EE0, p0, p1, p2); }
static void NETWORK_SPENT_MOVE_SUBMARINE(Any p0, Any p1, Any p2) { invoke<Void>(0xF72F10, p0, p1, p2); }
static void NETWORK_SPENT_PLAYER_HEALTHCARE(int p0, int p1, BOOL p2, BOOL p3) { invoke<Void>(0xF73000, p0, p1, p2, p3); }
static void NETWORK_SPENT_NO_COPS(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF73030, p0, p1, p2, p3); }
static void NETWORK_SPENT_CARGO_SOURCING(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF73130, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SPENT_REQUEST_JOB(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF73250, p0, p1, p2, p3); }
static void NETWORK_SPENT_REQUEST_HEIST(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF73350, p0, p1, p2, p3); }
static void NETWORK_BUY_FAIRGROUND_RIDE(int amount, Any p1, BOOL p2, BOOL p3, Any p4) { invoke<Void>(0xF73450, amount, p1, p2, p3, p4); }
static BOOL NETWORK_ECONOMY_HAS_FIXED_CRAZY_NUMBERS() { return invoke<BOOL>(0xF73560); }
static void NETWORK_SPENT_JOB_SKIP(int amount, const char* matchId, BOOL p2, BOOL p3) { invoke<Void>(0xF73580, amount, matchId, p2, p3); }
static BOOL NETWORK_SPENT_BOSS_GOON(int amount, BOOL p1, BOOL p2) { return invoke<BOOL>(0xF735B0, amount, p1, p2); }
static void NETWORK_SPEND_GOON(int p0, int p1, int amount) { invoke<Void>(0xF735F0, p0, p1, amount); }
static void NETWORK_SPEND_BOSS(Any p0, Any p1, Any p2) { invoke<Void>(0xF73610, p0, p1, p2); }
static void NETWORK_SPENT_MOVE_YACHT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF73630, amount, p1, p2); }
static void NETWORK_SPENT_RENAME_ORGANIZATION(Any p0, Any p1, Any p2) { invoke<Void>(0xF73720, p0, p1, p2); }
static void NETWORK_BUY_CONTRABAND_MISSION(int p0, int p1, Hash p2, BOOL p3, BOOL p4) { invoke<Void>(0xF73740, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_PA_SERVICE_HELI(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73770, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF737A0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_SNACK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF737D0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_DANCER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73800, p0, p1, p2, p3); }
static void NETWORK_SPENT_PA_SERVICE_IMPOUND(Any p0, Any p1, Any p2) { invoke<Void>(0xF73830, p0, p1, p2); }
static void NETWORK_SPENT_PA_HELI_PICKUP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73850, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73880, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_OFFICE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF738B0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF738E0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73910, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_IMPEXP_WAREHOUSE_PROPERTY(int amount, Any* data, BOOL p2, BOOL p3) { invoke<Void>(0xF73940, amount, data, p2, p3); }
static void NETWORK_SPENT_UPGRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73970, p0, p1, p2, p3); }
static void NETWORK_SPENT_TRADE_IMPEXP_WAREHOUSE_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF739A0, p0, p1, p2, p3); }
static void NETWORK_SPENT_ORDER_WAREHOUSE_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF739D0, p0, p1, p2, p3); }
static void NETWORK_SPENT_ORDER_BODYGUARD_VEHICLE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73AD0, p0, p1, p2, p3); }
static void NETWORK_SPENT_JUKEBOX(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73BD0, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73CD0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_CLUB_HOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73D00, p0, p1, p2, p3); }
static void NETWORK_SPENT_PURCHASE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73D30, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73D60, p0, p1, p2, p3); }
static void NETWORK_SPENT_TRADE_BUSINESS_PROPERTY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73D90, p0, p1, p2, p3); }
static void NETWORK_SPENT_MC_ABILITY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF73DC0, p0, p1, p2, p3, p4); }
static void NETWORK_SPENT_PAY_BUSINESS_SUPPLIES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF73ED0, p0, p1, p2, p3); }
static void NETWORK_SPENT_CHANGE_APPEARANCE(Any p0, Any p1, Any p2) { invoke<Void>(0xF73EF0, p0, p1, p2); }
static void NETWORK_SPENT_VEHICLE_EXPORT_MODS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xF73FE0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void NETWORK_SPENT_PURCHASE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74160, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_OFFICE_GARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74190, p0, p1, p2, p3); }
static void NETWORK_SPENT_IMPORT_EXPORT_REPAIR(Any p0, Any p1, Any p2) { invoke<Void>(0xF741C0, p0, p1, p2); }
static void NETWORK_SPENT_PURCHASE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF742C0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_HANGAR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF742F0, p0, p1, p2, p3); }
static void NETWORK_SPENT_HANGAR_UTILITY_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF74320, amount, p1, p2); }
static void NETWORK_SPENT_HANGAR_STAFF_CHARGES(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF74420, amount, p1, p2); }
static void NETWORK_SPENT_BUY_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74520, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74550, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74580, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPRADE_BUNKER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF745B0, p0, p1, p2, p3); }
static void NETWORK_EARN_FROM_SELL_BUNKER(int amount, Hash bunkerHash) { invoke<Void>(0xF745E0, amount, bunkerHash); }
static void NETWORK_SPENT_BALLISTIC_EQUIPMENT(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF746A0, amount, p1, p2); }
static void NETWORK_EARN_RDR_BONUS(int amount, Any p1) { invoke<Void>(0xF74790, amount, p1); }
static void NETWORK_EARN_WAGE_PAYMENT(int amount, Any p1) { invoke<Void>(0xF74850, amount, p1); }
static void NETWORK_EARN_WAGE_PAYMENT_BONUS(int amount) { invoke<Void>(0xF74920, amount); }
static void NETWORK_SPENT_BUY_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF749E0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_BASE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74A10, p0, p1, p2, p3); }
static void NETWORK_SPENT_BUY_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74A40, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_TILTROTOR(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74A70, p0, p1, p2, p3); }
static void NETWORK_SPENT_EMPLOY_ASSASSINS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74AA0, p0, p1, p2, p3); }
static void NETWORK_SPEND_GANGOPS_CANNON(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74BA0, p0, p1, p2, p3); }
static void NETWORK_SPEND_GANGOPS_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74CA0, p0, p1, p2, p3); }
static void NETWORK_SPEND_CASINO_HEIST_SKIP_MISSION(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF74DA0, p0, p1, p2, p3); }
static void NETWORK_EARN_SELL_BASE(int amount, Hash baseNameHash) { invoke<Void>(0xF74EA0, amount, baseNameHash); }
static void NETWORK_EARN_TARGET_REFUND(int amount, int p1) { invoke<Void>(0xF74F60, amount, p1); }
static void NETWORK_EARN_GANGOPS_WAGES(int amount, int p1) { invoke<Void>(0xF75020, amount, p1); }
static void NETWORK_EARN_GANGOPS_WAGES_BONUS(int amount, int p1) { invoke<Void>(0xF750F0, amount, p1); }
static void NETWORK_EARN_DAR_CHALLENGE(int amount, Any p1) { invoke<Void>(0xF751C0, amount, p1); }
static void NETWORK_EARN_DOOMSDAY_FINALE_BONUS(int amount, Hash vehicleHash) { invoke<Void>(0xF75280, amount, vehicleHash); }
static void NETWORK_EARN_GANGOPS_AWARD(int amount, const char* p1, Any p2) { invoke<Void>(0xF75340, amount, p1, p2); }
static void NETWORK_EARN_GANGOPS_ELITE(int amount, const char* p1, int actIndex) { invoke<Void>(0xF75380, amount, p1, actIndex); }
static void NETWORK_SERVICE_EARN_GANGOPS_RIVAL_DELIVERY(int earnedMoney) { invoke<Void>(0xF753D0, earnedMoney); }
static void NETWORK_SPEND_GANGOPS_START_STRAND(int type, int amount, BOOL p2, BOOL p3) { invoke<Void>(0xF753E0, type, amount, p2, p3); }
static void NETWORK_SPEND_GANGOPS_TRIP_SKIP(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF754E0, amount, p1, p2); }
static void NETWORK_EARN_GANGOPS_PREP_PARTICIPATION(int amount) { invoke<Void>(0xF755D0, amount); }
static void NETWORK_EARN_GANGOPS_SETUP(int amount, const char* p1) { invoke<Void>(0xF755E0, amount, p1); }
static void NETWORK_EARN_GANGOPS_FINALE(int amount, const char* p1) { invoke<Void>(0xF755F0, amount, p1); }
static void NETWORK_SPEND_GANGOPS_REPAIR_COST(Any p0, Any p1, Any p2) { invoke<Void>(0xF75600, p0, p1, p2); }
static void NETWORK_EARN_NIGHTCLUB(Any p0) { invoke<Void>(0xF756F0, p0); }
static void NETWORK_EARN_NIGHTCLUB_DANCING(Any p0) { invoke<Void>(0xF757B0, p0); }
static void NETWORK_EARN_BB_EVENT_BONUS(int amount) { invoke<Void>(0xF75870, amount); }
static void NETWORK_SPENT_PURCHASE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF75930, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_HACKER_TRUCK(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF75960, p0, p1, p2, p3); }
static void NETWORK_EARN_HACKER_TRUCK(Any p0, int amount, Any p2, Any p3) { invoke<Void>(0xF75990, p0, amount, p2, p3); }
static void NETWORK_SPENT_PURCHASE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF759B0, p0, p1, p2, p3); }
static void NETWORK_SPENT_UPGRADE_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF759E0, p0, p1, p2, p3); }
static void NETWORK_EARN_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF75A10, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_SPEND_NIGHTCLUB_AND_WAREHOUSE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF75A40, p0, p1, p2, p3); }
static void NETWORK_SPENT_RDR_HATCHET_BONUS(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF75B20, amount, p1, p2); }
static void NETWORK_SPENT_NIGHTCLUB_ENTRY_FEE(Player player, int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF75B40, player, amount, p1, p2, p3); }
static void NETWORK_SPEND_NIGHTCLUB_BAR_DRINK(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF75B70, amount, p1, p2, p3); }
static void NETWORK_SPEND_BOUNTY_HUNTER_MISSION(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF75C70, amount, p1, p2); }
static void NETWORK_SPENT_REHIRE_DJ(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF75D60, amount, p1, p2, p3); }
static void NETWORK_SPENT_ARENA_JOIN_SPECTATOR(int amount, Any p1, BOOL p2, BOOL p3) { invoke<Void>(0xF75E60, amount, p1, p2, p3); }
static void NETWORK_EARN_ARENA_SKILL_LEVEL_PROGRESSION(int amount, Any p1) { invoke<Void>(0xF75F60, amount, p1); }
static void NETWORK_EARN_ARENA_CAREER_PROGRESSION(int amount, Any p1) { invoke<Void>(0xF76020, amount, p1); }
static void NETWORK_SPEND_MAKE_IT_RAIN(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF760E0, amount, p1, p2); }
static void NETWORK_SPEND_BUY_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0xF761E0, amount, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_ARENA(int amount, BOOL p1, BOOL p2, const char* p3) { invoke<Void>(0xF76210, amount, p1, p2, p3); }
static void NETWORK_SPEND_ARENA_SPECTATOR_BOX(int amount, int type, BOOL p2, BOOL p3) { invoke<Void>(0xF76240, amount, type, p2, p3); }
static void NETWORK_SPEND_SPIN_THE_WHEEL_PAYMENT(int amount, Any p1, BOOL p2) { invoke<Void>(0xF76340, amount, p1, p2); }
static void NETWORK_EARN_SPIN_THE_WHEEL_CASH(int amount) { invoke<Void>(0xF76440, amount); }
static void NETWORK_SPEND_ARENA_PREMIUM(int amount, BOOL p1, BOOL p2) { invoke<Void>(0xF76500, amount, p1, p2); }
static void NETWORK_EARN_ARENA_WAR(int amount, Any p1, Any p2, Any p3) { invoke<Void>(0xF765F0, amount, p1, p2, p3); }
static void NETWORK_EARN_ARENA_WAR_ASSASSINATE_TARGET(int amount) { invoke<Void>(0xF76610, amount); }
static void NETWORK_EARN_ARENA_WAR_EVENT_CARGO(int amount) { invoke<Void>(0xF76620, amount); }
static void NETWORK_EARN_RC_TIME_TRIAL(int amount) { invoke<Void>(0xF76630, amount); }
static void NETWORK_EARN_DAILY_OBJECTIVE_EVENT(int amount) { invoke<Void>(0xF766F0, amount); }
static void NETWORK_SPEND_CASINO_MEMBERSHIP(int amount, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xF767B0, amount, p1, p2, p3); }
static void NETWORK_SPEND_BUY_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xF768B0, amount, p1, p2, data); }
static void NETWORK_SPEND_UPGRADE_CASINO(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xF768E0, amount, p1, p2, data); }
static void NETWORK_SPEND_CASINO_GENERIC(int amount, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF76910, amount, p1, p2, p3, p4); }
static void NETWORK_EARN_CASINO_TIME_TRIAL_WIN(int amount) { invoke<Void>(0xF76940, amount); }
static void NETWORK_EARN_COLLECTABLES_ACTION_FIGURES(int amount) { invoke<Void>(0xF76950, amount); }
static void NETWORK_EARN_CASINO_COLLECTABLE_COMPLETED_COLLECTION(int amount) { invoke<Void>(0xF76960, amount); }
static void NETWORK_EARN_SELL_PRIZE_VEHICLE(int amount, Any p1, Any p2) { invoke<Void>(0xF76970, amount, p1, p2); }
static void NETWORK_EARN_CASINO_MISSION_REWARD(int amount) { invoke<Void>(0xF76990, amount); }
static void NETWORK_EARN_CASINO_STORY_MISSION_REWARD(int amount) { invoke<Void>(0xF769A0, amount); }
static void NETWORK_EARN_CASINO_MISSION_PARTICIPATION(int amount) { invoke<Void>(0xF769B0, amount); }
static void NETWORK_EARN_CASINO_AWARD(int amount, Hash hash) { invoke<Void>(0xF769C0, amount, hash); }
static void NETWORK_SPEND_BUY_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF76A80, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_ARCADE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF76AB0, p0, p1, p2, p3); }
static void NETWORK_SPEND_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0xF76AE0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void NETWORK_SPEND_ARCADE_MGMT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF76B50, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_PLAY_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF76B80, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF76BB0, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_CASINO_HEIST(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xF76BE0, p0, p1, p2, p3, p4, p5, p6); }
static void NETWORK_EARN_UPGRADE_ARCADE(Any p0, Any p1, Any p2) { invoke<Void>(0xF76C10, p0, p1, p2); }
static void NETWORK_EARN_ARCADE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF76C30, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_COLLECTABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xF76C50, p0, p1, p2); }
static void NETWORK_EARN_CHALLENGE(int amount, Any p1, Any p2) { invoke<Void>(0xF76C70, amount, p1, p2); }
static void NETWORK_EARN_CASINO_HEIST_AWARDS(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF76C90, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_COLLECTABLE_ITEM(int amount, Any p1) { invoke<Void>(0xF76CB0, amount, p1); }
static void NETWORK_EARN_COLLECTABLE_COMPLETED_COLLECTION(int amount, Any p1) { invoke<Void>(0xF76CC0, amount, p1); }
static void NETWORK_EARN_YATCH_MISSION(int amount, Any p1) { invoke<Void>(0xF76CD0, amount, p1); }
static void NETWORK_EARN_DISPATCH_CALL(int amount, Any p1) { invoke<Void>(0xF76D90, amount, p1); }
static void NETWORK_SPEND_BEACH_PARTY(Any p0) { invoke<Void>(0xF76E50, p0); }
static void NETWORK_SPEND_SUBMARINE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0xF76E60, p0, p1, p2, p3, p4, p5); }
static void NETWORK_SPEND_CASINO_CLUB(int amount1, Any p1, BOOL p2, Any p3, int p4, int p5, int p6, int amount2, Any p8) { invoke<Void>(0xF76E90, amount1, p1, p2, p3, p4, p5, p6, amount2, p8); }
static void NETWORK_SPEND_BUY_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF76EE0, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_SUB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF76F10, p0, p1, p2, p3); }
static void NETWORK_SPEND_ISLAND_HEIST(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF76F40, p0, p1, p2, p3); }
static void NETWORK_EARN_ISLAND_HEIST(int amount1, Any p1, Any p2, Any p3, int amount2, int p5) { invoke<Void>(0xF76F70, amount1, p1, p2, p3, amount2, p5); }
static void NETWORK_EARN_BEACH_PARTY_LOST_FOUND(Any p0, Any p1, Any p2) { invoke<Void>(0xF76F90, p0, p1, p2); }
static void NETWORK_EARN_FROM_ISLAND_HEIST_DJ_MISSION(Any p0, Any p1) { invoke<Void>(0xF76FB0, p0, p1); }
static void NETWORK_SPEND_CAR_CLUB_MEMBERSHIP(int amount1, Any p1, Any p2, int amount2, Any p4) { invoke<Void>(0xF76FC0, amount1, p1, p2, amount2, p4); }
static void NETWORK_SPEND_CAR_CLUB_BAR(Any p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF76FF0, p0, p1, p2, p3); }
static void NETWORK_SPEND_AUTOSHOP_MODIFY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF77020, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_CAR_CLUB_TAKEOVER(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77050, p0, p1, p2, p3); }
static void NETWORK_SPEND_BUY_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77080, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_AUTOSHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF770B0, p0, p1, p2, p3); }
static void NETWORK_EARN_AUTOSHOP_BUSINESS(Any p0, Any p1, Any p2) { invoke<Void>(0xF770E0, p0, p1, p2); }
static void NETWORK_EARN_AUTOSHOP_INCOME(Any p0, int p1) { invoke<Void>(0xF77100, p0, p1); }
static void NETWORK_EARN_CARCLUB_MEMBERSHIP(Any p0) { invoke<Void>(0xF77110, p0); }
static void NETWORK_EARN_DAILY_VEHICLE(Any p0, Any p1) { invoke<Void>(0xF77120, p0, p1); }
static void NETWORK_EARN_DAILY_VEHICLE_BONUS(Any p0) { invoke<Void>(0xF77130, p0); }
static void NETWORK_EARN_TUNER_AWARD(Any p0, Any p1, Any p2) { invoke<Void>(0xF77140, p0, p1, p2); }
static void NETWORK_EARN_TUNER_ROBBERY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF77160, p0, p1, p2, p3, p4); }
static void NETWORK_EARN_UPGRADE_AUTOSHOP(Any p0, Any p1) { invoke<Void>(0xF77180, p0, p1); }
static void NETWORK_SPEND_INTERACTION_MENU_ABILITY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77190, p0, p1, p2, p3); }
static void NETWORK_SPEND_SET_COMMON_FIELDS(Any p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0xF771C0, p0, p1, p2, p3); }
static void NETWORK_SPEND_SET_DISCOUNT(BOOL p0) { invoke<Void>(0xF771F0, p0); }
static void NETWORK_SPEND_BUY_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77200, p0, p1, p2, p3); }
static void NETWORK_SPEND_UPGRADE_AGENCY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77230, p0, p1, p2, p3); }
static void NETWORK_SPEND_AGENCY(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF77260, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_HIDDEN(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77290, p0, p1, p2, p3); }
static void NETWORK_SPEND_SOURCE_BIKE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF772C0, p0, p1, p2, p3); }
static void NETWORK_SPEND_COMP_SUV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF772F0, p0, p1, p2, p3); }
static void NETWORK_SPEND_SUV_FST_TRVL(int p0, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xF77320, p0, p1, p2, p3); }
static void NETWORK_SPEND_SUPPLY(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77350, p0, p1, p2, p3); }
static void NETWORK_SPEND_BIKE_SHOP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77380, p0, p1, p2, p3); }
static void NETWORK_SPEND_VEHICLE_REQUESTED(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0xF773B0, p0, p1, p2, p3, p4); }
static void NETWORK_SPEND_GUNRUNNING(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF774D0, p0, p1, p2, p3); }
static void NETWORK_EARN_AGENCY_SAFE(Any p0) { invoke<Void>(0xF77500, p0); }
static void NETWORK_EARN_AWARD_CONTRACT(Any p0, Any p1) { invoke<Void>(0xF77510, p0, p1); }
static void NETWORK_EARN_AGENCY_CONTRACT(Any p0, Any p1) { invoke<Void>(0xF77520, p0, p1); }
static void NETWORK_EARN_AWARD_PHONE(Any p0, Any p1) { invoke<Void>(0xF77530, p0, p1); }
static void NETWORK_EARN_AGENCY_PHONE(Any p0, Any p1, Any p2) { invoke<Void>(0xF77540, p0, p1, p2); }
static void NETWORK_EARN_AWARD_FIXER_MISSION(Any p0, Any p1) { invoke<Void>(0xF77560, p0, p1); }
static void NETWORK_EARN_FIXER_PREP(Any p0, Any p1) { invoke<Void>(0xF77570, p0, p1); }
static void NETWORK_EARN_FIXER_FINALE(Any p0, Any p1) { invoke<Void>(0xF77580, p0, p1); }
static void NETWORK_EARN_FIXER_AGENCY_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xF77590, p0, p1); }
static void NETWORK_EARN_AWARD_SHORT_TRIP(Any p0, Any p1) { invoke<Void>(0xF775A0, p0, p1); }
static void NETWORK_EARN_FIXER_RIVAL_DELIVERY(Any p0, Any p1) { invoke<Void>(0xF775B0, p0, p1); }
static void NETWORK_EARN_UPGRADE_AGENCY(Any p0, Any p1) { invoke<Void>(0xF775C0, p0, p1); }
static void NETWORK_SPEND_APARTMENT_UTILITIES(int amount, BOOL p1, BOOL p2, Any* data) { invoke<Void>(0xF775D0, amount, p1, p2, data); }
static void NETWORK_SPEND_BUSINESS_PROPERTY_FEES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77600, p0, p1, p2, p3); }
static void NETWORK_EARN_SIGHTSEEING_REWARD(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77630, p0, p1, p2, p3); }
static void NETWORK_EARN_BIKER_SHOP(Any p0, Any p1) { invoke<Void>(0xF77650, p0, p1); }
static void NETWORK_EARN_BIKER(Any p0) { invoke<Void>(0xF77660, p0); }
static void NETWORK_YOHAN_SOURCE_GOODS(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77670, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77690, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_MFGARAGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF776C0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_SUPPLIES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xF776F0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_BUY_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77800, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_EQUIPMENT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77910, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_ARMOR(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xF77940, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_SCOOP(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xF77970, p0, p1, p2, p3); }
static void _NETWORK_SPEND_UPGRADE_ACID_LAB_MINES(int p0, BOOL p1, BOOL p2, int p3) { invoke<Void>(0xF779A0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_RENAME_ACID_LAB(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF779D0, p0, p1, p2, p3); }
static void _NETWORK_SPEND_RENAME_ACID_PRODUCT(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0xF77A00, p0, p1, p2, p3); }
static void _NETWORK_EARN_AWARD_JUGGALO_MISSION(Any p0, Any p1) { invoke<Void>(0xF77A30, p0, p1); }
static void _NETWORK_EARN_AWARD_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xF77B30, p0, p1); }
static void _NETWORK_EARN_AWARD_DAILY_STASH(Any p0, Any p1) { invoke<Void>(0xF77C30, p0, p1); }
static void _NETWORK_EARN_AWARD_DEAD_DROP(Any p0, Any p1) { invoke<Void>(0xF77D30, p0, p1); }
static void _NETWORK_EARN_AWARD_RANDOM_EVENT(Any p0, Any p1) { invoke<Void>(0xF77E30, p0, p1); }
static void _NETWORK_EARN_AWARD_TAXI(Any p0, Any p1) { invoke<Void>(0xF77F30, p0, p1); }
static void _NETWORK_EARN_STREET_DEALER(Any p0, Any p1) { invoke<Void>(0xF78030, p0, p1); }
static void _NETWORK_EARN_SELL_ACID(Any p0, Any p1) { invoke<Void>(0xF78040, p0, p1); }
static void _NETWORK_EARN_SETUP_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xF78100, p0, p1); }
static void _NETWORK_EARN_SOURCE_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xF781C0, p0, p1); }
static void _NETWORK_EARN_SELL_PARTICIPATION_ACID_LAB(Any p0, Any p1) { invoke<Void>(0xF78280, p0, p1); }
static void _NETWORK_EARN_JUGGALO_STORY_MISSION(Any p0, Any p1) { invoke<Void>(0xF78340, p0, p1); }
static void _NETWORK_EARN_JUGGALO_STORY_MISSION_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xF78400, p0, p1); }
static void _NETWORK_EARN_FOOLIGAN_JOB(Any p0, Any p1) { invoke<Void>(0xF784C0, p0, p1); }
static void _NETWORK_EARN_FOOLIGAN_JOB_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xF78580, p0, p1); }
static void _NETWORK_EARN_TAXI_JOB(Any p0, Any p1) { invoke<Void>(0xF78640, p0, p1); }
static void _NETWORK_EARN_DAILY_STASH_HOUSE_COMPLETED(Any p0, Any p1) { invoke<Void>(0xF78730, p0, p1); }
static void _NETWORK_EARN_DAILY_STASH_HOUSE_PARTICIPATION(Any p0, Any p1) { invoke<Void>(0xF787F0, p0, p1); }
static int NETWORK_GET_VC_BANK_BALANCE() { return invoke<int>(0xF788B0); }
static int NETWORK_GET_VC_WALLET_BALANCE(int characterSlot) { return invoke<int>(0xF788E0, characterSlot); }
static int NETWORK_GET_VC_BALANCE() { return invoke<int>(0xF78910); }
static int NETWORK_GET_EVC_BALANCE() { return invoke<int>(0xF78940); }
static int NETWORK_GET_PVC_BALANCE() { return invoke<int>(0xF78970); }
static const char* NETWORK_GET_STRING_WALLET_BALANCE(int characterSlot) { return invoke<const char*>(0xF789A0, characterSlot); }
static const char* NETWORK_GET_STRING_BANK_BALANCE() { return invoke<const char*>(0xF789E0); }
static const char* NETWORK_GET_STRING_BANK_WALLET_BALANCE() { return invoke<const char*>(0xF78A20); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0xF78A70, amount, characterSlot); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK(int amount) { return invoke<BOOL>(0xF78AA0, amount); }
static BOOL NETWORK_GET_CAN_SPEND_FROM_BANK_AND_WALLET(int amount, int characterSlot) { return invoke<BOOL>(0xF78AD0, amount, characterSlot); }
static int NETWORK_GET_PVC_TRANSFER_BALANCE() { return invoke<int>(0xF78B10); }
static BOOL NETWORK_GET_CAN_TRANSFER_CASH(int amount) { return invoke<BOOL>(0xF78B30, amount); }
static BOOL NETWORK_CAN_RECEIVE_PLAYER_CASH(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF78BC0, p0, p1, p2, p3); }
static int NETWORK_GET_REMAINING_TRANSFER_BALANCE() { return invoke<int>(0xF78C10); }
static int WITHDRAW_VC(int amount) { return invoke<int>(0xF78C30, amount); }
static BOOL DEPOSIT_VC(int amount) { return invoke<BOOL>(0xF78C60, amount); }
static BOOL HAS_VC_WITHDRAWAL_COMPLETED(Any p0) { return invoke<BOOL>(0xF78C90, p0); }
static BOOL WAS_VC_WITHDRAWAL_SUCCESSFUL(Any p0) { return invoke<BOOL>(0xF78CA0, p0); }
static BOOL NET_GAMESERVER_USE_SERVER_TRANSACTIONS() { return invoke<BOOL>(0xF79AD0); }
static BOOL NET_GAMESERVER_CATALOG_ITEM_IS_VALID(const char* name) { return invoke<BOOL>(0xF79AE0, name); }
static BOOL NET_GAMESERVER_CATALOG_ITEM_KEY_IS_VALID(Hash hash) { return invoke<BOOL>(0xF79AF0, hash); }
static int NET_GAMESERVER_GET_PRICE(Hash itemHash, Hash categoryHash, BOOL p2) { return invoke<int>(0xF79B00, itemHash, categoryHash, p2); }
static BOOL NET_GAMESERVER_CATALOG_IS_VALID() { return invoke<BOOL>(0xF79B10); }
static BOOL NET_GAMESERVER_IS_CATALOG_CURRENT() { return invoke<BOOL>(0xF79B20); }
static Hash NET_GAMESERVER_GET_CATALOG_CLOUD_CRC() { return invoke<Hash>(0xF79B30); }
static BOOL NET_GAMESERVER_REFRESH_SERVER_CATALOG() { return invoke<BOOL>(0xF79B40); }
static BOOL NET_GAMESERVER_RETRIEVE_CATALOG_REFRESH_STATUS(int* state) { return invoke<BOOL>(0xF79B50, state); }
static BOOL NET_GAMESERVER_INIT_SESSION() { return invoke<BOOL>(0xF79B60); }
static BOOL NET_GAMESERVER_RETRIEVE_INIT_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xF79B70, p0); }
static BOOL NET_GAMESERVER_START_SESSION(int charSlot) { return invoke<BOOL>(0xF79B80, charSlot); }
static BOOL NET_GAMESERVER_START_SESSION_PENDING() { return invoke<BOOL>(0xF79B90); }
static BOOL NET_GAMESERVER_RETRIEVE_START_SESSION_STATUS(int* p0) { return invoke<BOOL>(0xF79BA0, p0); }
static BOOL NET_GAMESERVER_RETRIEVE_SESSION_ERROR_CODE(int* p0) { return invoke<BOOL>(0xF79BB0, p0); }
static BOOL NET_GAMESERVER_IS_SESSION_VALID(int charSlot) { return invoke<BOOL>(0xF79BC0, charSlot); }
static BOOL NET_GAMESERVER_CLEAR_SESSION(int p0) { return invoke<BOOL>(0xF79BD0, p0); }
static BOOL NET_GAMESERVER_SESSION_APPLY_RECEIVED_DATA(int charSlot) { return invoke<BOOL>(0xF79BE0, charSlot); }
static BOOL NET_GAMESERVER_IS_SESSION_REFRESH_PENDING() { return invoke<BOOL>(0xF79BF0); }
static BOOL NET_GAMESERVER_START_SESSION_RESTART(BOOL inventory, BOOL playerbalance) { return invoke<BOOL>(0xF79C00, inventory, playerbalance); }
static BOOL NET_GAMESERVER_TRANSACTION_IN_PROGRESS() { return invoke<BOOL>(0xF79C10); }
static BOOL NET_GAMESERVER_GET_SESSION_STATE_AND_STATUS(int* p0, BOOL* p1) { return invoke<BOOL>(0xF79C20, p0, p1); }
static BOOL NET_GAMESERVER_BASKET_START(int* transactionId, Hash categoryHash, Hash actionHash, int flags) { return invoke<BOOL>(0xF79C30, transactionId, categoryHash, actionHash, flags); }
static BOOL NET_GAMESERVER_BASKET_END() { return invoke<BOOL>(0xF79C40); }
static BOOL NET_GAMESERVER_BASKET_IS_ACTIVE() { return invoke<BOOL>(0xF79C50); }
static BOOL NET_GAMESERVER_BASKET_ADD_ITEM(Any* itemData, int quantity) { return invoke<BOOL>(0xF79C60, itemData, quantity); }
static BOOL NET_GAMESERVER_BASKET_IS_FULL() { return invoke<BOOL>(0xF79C70); }
static BOOL NET_GAMESERVER_BASKET_APPLY_SERVER_DATA(Any p0, Any* p1) { return invoke<BOOL>(0xF79C80, p0, p1); }
static BOOL NET_GAMESERVER_CHECKOUT_START(int transactionId) { return invoke<BOOL>(0xF79C90, transactionId); }
static BOOL NET_GAMESERVER_BEGIN_SERVICE(int* transactionId, Hash categoryHash, Hash itemHash, Hash actionTypeHash, int value, int flags) { return invoke<BOOL>(0xF79CA0, transactionId, categoryHash, itemHash, actionTypeHash, value, flags); }
static BOOL NET_GAMESERVER_END_SERVICE(int transactionId) { return invoke<BOOL>(0xF79CB0, transactionId); }
static BOOL NET_GAMESERVER_DELETE_CHARACTER(int slot, BOOL transfer, Hash reason) { return invoke<BOOL>(0xF79CC0, slot, transfer, reason); }
static int NET_GAMESERVER_DELETE_CHARACTER_GET_STATUS() { return invoke<int>(0xF79CD0); }
static BOOL NET_GAMESERVER_DELETE_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xF79CE0); }
static BOOL NET_GAMESERVER_TRANSFER_BANK_TO_WALLET(int charSlot, int amount) { return invoke<BOOL>(0xF79CF0, charSlot, amount); }
static BOOL NET_GAMESERVER_TRANSFER_WALLET_TO_BANK(int charSlot, int amount) { return invoke<BOOL>(0xF79D00, charSlot, amount); }
static int NET_GAMESERVER_TRANSFER_BANK_TO_WALLET_GET_STATUS() { return invoke<int>(0xF79D10); }
static int NET_GAMESERVER_TRANSFER_WALLET_TO_BANK_GET_STATUS() { return invoke<int>(0xF79D20); }
static BOOL NET_GAMESERVER_TRANSFER_CASH_SET_TELEMETRY_NONCE_SEED() { return invoke<BOOL>(0xF79D30); }
static BOOL NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(int p0) { return invoke<BOOL>(0xF79D40, p0); }
static const char* GET_ONLINE_VERSION() { return invoke<const char*>(0xF99780); }
static BOOL NETWORK_IS_SIGNED_IN() { return invoke<BOOL>(0xF99790); }
static BOOL NETWORK_IS_SIGNED_ONLINE() { return invoke<BOOL>(0xF997B0); }
static BOOL NETWORK_IS_NP_AVAILABLE() { return invoke<BOOL>(0xF997E0); }
static BOOL NETWORK_IS_NP_PENDING() { return invoke<BOOL>(0xF99820); }
static int NETWORK_GET_NP_UNAVAILABLE_REASON() { return invoke<int>(0xF99860); }
static BOOL NETWORK_IS_CONNETED_TO_NP_PRESENCE() { return invoke<BOOL>(0xF998A0); }
static BOOL NETWORK_IS_LOGGED_IN_TO_PSN() { return invoke<BOOL>(0xF998E0); }
static BOOL NETWORK_HAS_VALID_ROS_CREDENTIALS() { return invoke<BOOL>(0xF99920); }
static BOOL NETWORK_IS_REFRESHING_ROS_CREDENTIALS() { return invoke<BOOL>(0xF99950); }
static BOOL NETWORK_IS_CLOUD_AVAILABLE() { return invoke<BOOL>(0xF99980); }
static BOOL NETWORK_HAS_SOCIAL_CLUB_ACCOUNT() { return invoke<BOOL>(0xF999B0); }
static BOOL NETWORK_ARE_SOCIAL_CLUB_POLICIES_CURRENT() { return invoke<BOOL>(0xF999D0); }
static BOOL NETWORK_IS_HOST() { return invoke<BOOL>(0xF99A10); }
static Player NETWORK_GET_HOST_PLAYER_INDEX() { return invoke<Player>(0xF99A30); }
static BOOL NETWORK_WAS_GAME_SUSPENDED() { return invoke<BOOL>(0xF99A60); }
static BOOL NETWORK_HAVE_ONLINE_PRIVILEGES() { return invoke<BOOL>(0xF99A70); }
static BOOL NETWORK_HAS_AGE_RESTRICTIONS() { return invoke<BOOL>(0xF99AA0); }
static BOOL NETWORK_HAVE_USER_CONTENT_PRIVILEGES(int p0) { return invoke<BOOL>(0xF99AD0, p0); }
static BOOL NETWORK_HAVE_COMMUNICATION_PRIVILEGES(int p0, Player player) { return invoke<BOOL>(0xF99B00, p0, player); }
static BOOL NETWORK_CHECK_ONLINE_PRIVILEGES(Any p0, BOOL p1) { return invoke<BOOL>(0xF99B60, p0, p1); }
static BOOL NETWORK_CHECK_USER_CONTENT_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xF99B90, p0, p1, p2); }
static BOOL NETWORK_CHECK_COMMUNICATION_PRIVILEGES(int p0, int p1, BOOL p2) { return invoke<BOOL>(0xF99BC0, p0, p1, p2); }
static BOOL NETWORK_CHECK_TEXT_COMMUNICATION_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xF99BF0, p0, p1, p2); }
static BOOL NETWORK_IS_USING_ONLINE_PROMOTION() { return invoke<BOOL>(0xF99C20); }
static BOOL NETWORK_SHOULD_SHOW_PROMOTION_ALERT_SCREEN() { return invoke<BOOL>(0xF99C60); }
static BOOL NETWORK_HAS_SOCIAL_NETWORKING_SHARING_PRIV() { return invoke<BOOL>(0xF99C90); }
static int NETWORK_GET_AGE_GROUP() { return invoke<int>(0xF99CC0); }
static BOOL NETWORK_CHECK_PRIVILEGES(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xF99CE0, p0, p1, p2); }
static BOOL NETWORK_IS_PRIVILEGE_CHECK_IN_PROGRESS() { return invoke<BOOL>(0xF99D40); }
static void NETWORK_SET_PRIVILEGE_CHECK_RESULT_NOT_NEEDED() { invoke<Void>(0xF99D60); }
static BOOL NETWORK_RESOLVE_PRIVILEGE_USER_CONTENT() { return invoke<BOOL>(0xF99D70); }
static BOOL NETWORK_HAVE_PLATFORM_SUBSCRIPTION() { return invoke<BOOL>(0xF99D80); }
static BOOL NETWORK_IS_PLATFORM_SUBSCRIPTION_CHECK_PENDING() { return invoke<BOOL>(0xF99DC0); }
static void NETWORK_SHOW_ACCOUNT_UPGRADE_UI() { invoke<Void>(0xF99DF0); }
static BOOL NETWORK_IS_SHOWING_SYSTEM_UI_OR_RECENTLY_REQUESTED_UPSELL() { return invoke<BOOL>(0xF99E00); }
static BOOL NETWORK_NEED_TO_START_NEW_GAME_BUT_BLOCKED() { return invoke<BOOL>(0xF99E30); }
static BOOL NETWORK_CAN_BAIL() { return invoke<BOOL>(0xF99E60); }
static void NETWORK_BAIL(int p0, int p1, int p2) { invoke<Void>(0xF99E80, p0, p1, p2); }
static void NETWORK_ON_RETURN_TO_SINGLE_PLAYER() { invoke<Void>(0xF99F40); }
static BOOL NETWORK_TRANSITION_START(int p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xF99F50, p0, p1, p2, p3); }
static BOOL NETWORK_TRANSITION_ADD_STAGE(Hash hash, int p1, int p2, int state, int p4) { return invoke<BOOL>(0xF99F70, hash, p1, p2, state, p4); }
static BOOL NETWORK_TRANSITION_FINISH(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xF99F90, p0, p1, p2); }
static BOOL NETWORK_CAN_ACCESS_MULTIPLAYER(int* loadingState) { return invoke<BOOL>(0xF99FB0, loadingState); }
static BOOL NETWORK_IS_MULTIPLAYER_DISABLED() { return invoke<BOOL>(0xF9A010); }
static BOOL NETWORK_CAN_ENTER_MULTIPLAYER() { return invoke<BOOL>(0xF9A030); }
static BOOL NETWORK_SESSION_DO_FREEROAM_QUICKMATCH(Any p0, Any p1, Any p2, int maxPlayers) { return invoke<BOOL>(0xF9A060, p0, p1, p2, maxPlayers); }
static BOOL NETWORK_SESSION_DO_FRIEND_MATCHMAKING(int p0, int p1, int maxPlayers) { return invoke<BOOL>(0xF9A100, p0, p1, maxPlayers); }
static BOOL NETWORK_SESSION_DO_CREW_MATCHMAKING(int crewId, int p1, int p2, int maxPlayers) { return invoke<BOOL>(0xF9A1B0, crewId, p1, p2, maxPlayers); }
static BOOL NETWORK_SESSION_DO_ACTIVITY_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4) { return invoke<BOOL>(0xF9A1E0, p0, p1, p2, p3, p4); }
static BOOL NETWORK_SESSION_HOST(int p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xF9A290, p0, maxPlayers, p2); }
static BOOL NETWORK_SESSION_HOST_CLOSED(int p0, int maxPlayers) { return invoke<BOOL>(0xF9A340, p0, maxPlayers); }
static BOOL NETWORK_SESSION_HOST_FRIENDS_ONLY(int p0, int maxPlayers) { return invoke<BOOL>(0xF9A3E0, p0, maxPlayers); }
static BOOL NETWORK_SESSION_IS_CLOSED_FRIENDS() { return invoke<BOOL>(0xF9A480); }
static BOOL NETWORK_SESSION_IS_CLOSED_CREW() { return invoke<BOOL>(0xF9A4B0); }
static BOOL NETWORK_SESSION_IS_SOLO() { return invoke<BOOL>(0xF9A4E0); }
static BOOL NETWORK_SESSION_IS_PRIVATE() { return invoke<BOOL>(0xF9A510); }
static BOOL NETWORK_SESSION_END(BOOL p0, BOOL p1) { return invoke<BOOL>(0xF9A540, p0, p1); }
static BOOL NETWORK_SESSION_LEAVE(Any p0) { return invoke<BOOL>(0xF9A590, p0); }
static void NETWORK_SESSION_KICK_PLAYER(Player player) { invoke<Void>(0xF9A5D0, player); }
static BOOL NETWORK_SESSION_GET_KICK_VOTE(Player player) { return invoke<BOOL>(0xF9A610, player); }
static BOOL NETWORK_SESSION_RESERVE_SLOTS_TRANSITION(Any p0, Any p1, Any p2) { return invoke<BOOL>(0xF9A660, p0, p1, p2); }
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_SESSION() { return invoke<BOOL>(0xF9A690); }
static BOOL NETWORK_JOIN_PREVIOUSLY_FAILED_TRANSITION() { return invoke<BOOL>(0xF9A6C0); }
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP(int matchmakingGroup) { invoke<Void>(0xF9A6F0, matchmakingGroup); }
static void NETWORK_SESSION_SET_MATCHMAKING_GROUP_MAX(int playerType, int playerCount) { invoke<Void>(0xF9A710, playerType, playerCount); }
static int NETWORK_SESSION_GET_MATCHMAKING_GROUP_FREE(int p0) { return invoke<int>(0xF9A740, p0); }
static void NETWORK_SESSION_ADD_ACTIVE_MATCHMAKING_GROUP(int groupId) { invoke<Void>(0xF9A780, groupId); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT(Any p0) { invoke<Void>(0xF9A7A0, p0); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_LIMIT_TRANSITION(Any p0) { invoke<Void>(0xF9A7C0, p0); }
static void NETWORK_SESSION_SET_UNIQUE_CREW_ONLY_CREWS_TRANSITION(BOOL p0) { invoke<Void>(0xF9A7E0, p0); }
static void NETWORK_SESSION_SET_CREW_LIMIT_MAX_MEMBERS_TRANSITION(Any p0) { invoke<Void>(0xF9A810, p0); }
static void NETWORK_SESSION_SET_MATCHMAKING_PROPERTY_ID(BOOL p0) { invoke<Void>(0xF9A830, p0); }
static void NETWORK_SESSION_SET_MATCHMAKING_MENTAL_STATE(int p0) { invoke<Void>(0xF9A850, p0); }
static void NETWORK_SESSION_SET_NUM_BOSSES(int num) { invoke<Void>(0xF9A880, num); }
static void NETWORK_SESSION_SET_SCRIPT_VALIDATE_JOIN() { invoke<Void>(0xF9A890); }
static void NETWORK_SESSION_VALIDATE_JOIN(BOOL p0) { invoke<Void>(0xF9A8A0, p0); }
static void NETWORK_ADD_FOLLOWERS(int* p0, int p1) { invoke<Void>(0xF9A8C0, p0, p1); }
static void NETWORK_CLEAR_FOLLOWERS() { invoke<Void>(0xF9A8D0); }
static void NETWORK_GET_GLOBAL_MULTIPLAYER_CLOCK(int* hours, int* minutes, int* seconds) { invoke<Void>(0xF9A8E0, hours, minutes, seconds); }
static void NETWORK_SESSION_SET_GAMEMODE(Any p0) { invoke<Void>(0xF9A900, p0); }
static int NETWORK_SESSION_GET_HOST_AIM_PREFERENCE() { return invoke<int>(0xF9A910); }
static BOOL NETWORK_FIND_GAMERS_IN_CREW(int crewId) { return invoke<BOOL>(0xF9A930, crewId); }
static BOOL NETWORK_FIND_MATCHED_GAMERS(int attribute, float fallbackLimit, float lowerLimit, float upperLimit) { return invoke<BOOL>(0xF9AA00, attribute, fallbackLimit, lowerLimit, upperLimit); }
static BOOL NETWORK_IS_FINDING_GAMERS() { return invoke<BOOL>(0xF9AA40); }
static BOOL NETWORK_DID_FIND_GAMERS_SUCCEED() { return invoke<BOOL>(0xF9AA60); }
static int NETWORK_GET_NUM_FOUND_GAMERS() { return invoke<int>(0xF9AA80); }
static BOOL NETWORK_GET_FOUND_GAMER(Any* p0, Any p1) { return invoke<BOOL>(0xF9AAA0, p0, p1); }
static void NETWORK_CLEAR_FOUND_GAMERS() { invoke<Void>(0xF9AB60); }
static BOOL NETWORK_QUEUE_GAMER_FOR_STATUS(Any* p0) { return invoke<BOOL>(0xF9AB70, p0); }
static BOOL NETWORK_GET_GAMER_STATUS_FROM_QUEUE() { return invoke<BOOL>(0xF9ABF0); }
static BOOL NETWORK_IS_GETTING_GAMER_STATUS() { return invoke<BOOL>(0xF9AC10); }
static BOOL NETWORK_DID_GET_GAMER_STATUS_SUCCEED() { return invoke<BOOL>(0xF9AC30); }
static BOOL NETWORK_GET_GAMER_STATUS_RESULT(Any* p0, Any p1) { return invoke<BOOL>(0xF9AC50, p0, p1); }
static void NETWORK_CLEAR_GET_GAMER_STATUS() { invoke<Void>(0xF9AD00); }
static void NETWORK_SESSION_JOIN_INVITE() { invoke<Void>(0xF9AD10); }
static void NETWORK_SESSION_CANCEL_INVITE() { invoke<Void>(0xF9AD20); }
static void NETWORK_SESSION_FORCE_CANCEL_INVITE() { invoke<Void>(0xF9AD50); }
static BOOL NETWORK_HAS_PENDING_INVITE() { return invoke<BOOL>(0xF9AD80); }
static BOOL NETWORK_HAS_CONFIRMED_INVITE() { return invoke<BOOL>(0xF9ADC0); }
static BOOL NETWORK_REQUEST_INVITE_CONFIRMED_EVENT() { return invoke<BOOL>(0xF9ADE0); }
static BOOL NETWORK_SESSION_WAS_INVITED() { return invoke<BOOL>(0xF9AE10); }
static void NETWORK_SESSION_GET_INVITER(Any* gamerHandle) { invoke<Void>(0xF9AE30, gamerHandle); }
static BOOL NETWORK_SESSION_IS_AWAITING_INVITE_RESPONSE() { return invoke<BOOL>(0xF9AE60); }
static BOOL NETWORK_SESSION_IS_DISPLAYING_INVITE_CONFIRMATION() { return invoke<BOOL>(0xF9AE90); }
static void NETWORK_SUPPRESS_INVITE(BOOL toggle) { invoke<Void>(0xF9AEC0, toggle); }
static void NETWORK_BLOCK_INVITES(BOOL toggle) { invoke<Void>(0xF9AEE0, toggle); }
static void NETWORK_BLOCK_JOIN_QUEUE_INVITES(BOOL toggle) { invoke<Void>(0xF9AF00, toggle); }
static void NETWORK_SET_CAN_RECEIVE_RS_INVITES(BOOL p0) { invoke<Void>(0xF9AF20, p0); }
static void NETWORK_STORE_INVITE_THROUGH_RESTART() { invoke<Void>(0xF9AF40); }
static void NETWORK_ALLOW_INVITE_PROCESS_IN_PLAYER_SWITCH(BOOL p0) { invoke<Void>(0xF9AF50, p0); }
static void NETWORK_SET_SCRIPT_READY_FOR_EVENTS(BOOL toggle) { invoke<Void>(0xF9AF70, toggle); }
static BOOL NETWORK_IS_OFFLINE_INVITE_PENDING() { return invoke<BOOL>(0xF9AF90); }
static void NETWORK_CLEAR_OFFLINE_INVITE_PENDING() { invoke<Void>(0xF9AFB0); }
static void NETWORK_SESSION_HOST_SINGLE_PLAYER(int p0) { invoke<Void>(0xF9AFC0, p0); }
static void NETWORK_SESSION_LEAVE_SINGLE_PLAYER() { invoke<Void>(0xF9AFE0); }
static BOOL NETWORK_IS_GAME_IN_PROGRESS() { return invoke<BOOL>(0xF9B000); }
static BOOL NETWORK_IS_SESSION_ACTIVE() { return invoke<BOOL>(0xF9B010); }
static BOOL NETWORK_IS_IN_SESSION() { return invoke<BOOL>(0xF9B030); }
static BOOL NETWORK_IS_SESSION_STARTED() { return invoke<BOOL>(0xF9B050); }
static BOOL NETWORK_IS_SESSION_BUSY() { return invoke<BOOL>(0xF9B070); }
static BOOL NETWORK_CAN_SESSION_END() { return invoke<BOOL>(0xF9B090); }
static int NETWORK_GET_GAME_MODE() { return invoke<int>(0xF9B0B0); }
static void NETWORK_SESSION_MARK_VISIBLE(BOOL toggle) { invoke<Void>(0xF9B0F0, toggle); }
static BOOL NETWORK_SESSION_IS_VISIBLE() { return invoke<BOOL>(0xF9B140); }
static void NETWORK_SESSION_BLOCK_JOIN_REQUESTS(BOOL toggle) { invoke<Void>(0xF9B180, toggle); }
static void NETWORK_SESSION_CHANGE_SLOTS(int slots, BOOL p1) { invoke<Void>(0xF9B1D0, slots, p1); }
static int NETWORK_SESSION_GET_PRIVATE_SLOTS() { return invoke<int>(0xF9B210); }
static BOOL NETWORK_SESSION_VOICE_HOST() { return invoke<BOOL>(0xF9B240); }
static BOOL NETWORK_SESSION_VOICE_LEAVE() { return invoke<BOOL>(0xF9B270); }
static void NETWORK_SESSION_VOICE_CONNECT_TO_PLAYER(Any* gamerHandle) { invoke<Void>(0xF9B2A0, gamerHandle); }
static void NETWORK_SESSION_VOICE_RESPOND_TO_REQUEST(BOOL p0, int p1) { invoke<Void>(0xF9B320, p0, p1); }
static void NETWORK_SESSION_VOICE_SET_TIMEOUT(int timeout) { invoke<Void>(0xF9B340, timeout); }
static BOOL NETWORK_SESSION_IS_IN_VOICE_SESSION() { return invoke<BOOL>(0xF9B360); }
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_ACTIVE() { return invoke<BOOL>(0xF9B390); }
static BOOL NETWORK_SESSION_IS_VOICE_SESSION_BUSY() { return invoke<BOOL>(0xF9B3C0); }
static BOOL NETWORK_SEND_TEXT_MESSAGE(const char* message, Any* gamerHandle) { return invoke<BOOL>(0xF9B3F0, message, gamerHandle); }
static void NETWORK_SET_ACTIVITY_SPECTATOR(BOOL toggle) { invoke<Void>(0xF9B480, toggle); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR() { return invoke<BOOL>(0xF9B4A0); }
static void NETWORK_SET_ACTIVITY_PLAYER_MAX(Any p0) { invoke<Void>(0xF9B4C0, p0); }
static void NETWORK_SET_ACTIVITY_SPECTATOR_MAX(int maxSpectators) { invoke<Void>(0xF9B4E0, maxSpectators); }
static int NETWORK_GET_ACTIVITY_PLAYER_NUM(BOOL p0) { return invoke<int>(0xF9B500, p0); }
static BOOL NETWORK_IS_ACTIVITY_SPECTATOR_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xF9B540, gamerHandle); }
static BOOL NETWORK_HOST_TRANSITION(int p0, int p1, int p2, int p3, Any p4, BOOL p5, BOOL p6, int p7, Any p8, int p9) { return invoke<BOOL>(0xF9B5D0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xF9B6A0, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_ASYNC(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xF9B740, p0, p1, p2, p3, p4, p5); }
static BOOL NETWORK_DO_TRANSITION_QUICKMATCH_WITH_GROUP(Any p0, Any p1, Any p2, Any p3, Any* p4, Any p5, Any p6, Any p7) { return invoke<BOOL>(0xF9B7E0, p0, p1, p2, p3, p4, p5, p6, p7); }
static BOOL NETWORK_JOIN_GROUP_ACTIVITY() { return invoke<BOOL>(0xF9B830); }
static void NETWORK_CLEAR_GROUP_ACTIVITY() { invoke<Void>(0xF9B860); }
static void NETWORK_RETAIN_ACTIVITY_GROUP() { invoke<Void>(0xF9B870); }
static BOOL NETWORK_IS_TRANSITION_CLOSED_FRIENDS() { return invoke<BOOL>(0xF9B880); }
static BOOL NETWORK_IS_TRANSITION_CLOSED_CREW() { return invoke<BOOL>(0xF9B8B0); }
static BOOL NETWORK_IS_TRANSITION_SOLO() { return invoke<BOOL>(0xF9B8E0); }
static BOOL NETWORK_IS_TRANSITION_PRIVATE() { return invoke<BOOL>(0xF9B910); }
static int NETWORK_GET_NUM_TRANSITION_NON_ASYNC_GAMERS() { return invoke<int>(0xF9B940); }
static void NETWORK_MARK_AS_PREFERRED_ACTIVITY(BOOL p0) { invoke<Void>(0xF9B970, p0); }
static void NETWORK_MARK_AS_WAITING_ASYNC(BOOL p0) { invoke<Void>(0xF9B990, p0); }
static void NETWORK_SET_IN_PROGRESS_FINISH_TIME(Any p0) { invoke<Void>(0xF9B9B0, p0); }
static void NETWORK_SET_TRANSITION_CREATOR_HANDLE(Any* p0) { invoke<Void>(0xF9B9D0, p0); }
static void NETWORK_CLEAR_TRANSITION_CREATOR_HANDLE() { invoke<Void>(0xF9BA50); }
static BOOL NETWORK_INVITE_GAMERS_TO_TRANSITION(Any* p0, Any p1) { return invoke<BOOL>(0xF9BAB0, p0, p1); }
static void NETWORK_SET_GAMER_INVITED_TO_TRANSITION(Any* gamerHandle) { invoke<Void>(0xF9BAE0, gamerHandle); }
static BOOL NETWORK_LEAVE_TRANSITION() { return invoke<BOOL>(0xF9BB70); }
static BOOL NETWORK_LAUNCH_TRANSITION() { return invoke<BOOL>(0xF9BBB0); }
static void NETWORK_SET_DO_NOT_LAUNCH_FROM_JOIN_AS_MIGRATED_HOST(BOOL toggle) { invoke<Void>(0xF9BBF0, toggle); }
static void NETWORK_CANCEL_TRANSITION_MATCHMAKING() { invoke<Void>(0xF9BC10); }
static void NETWORK_BAIL_TRANSITION(int p0, int p1, int p2) { invoke<Void>(0xF9BC20, p0, p1, p2); }
static BOOL NETWORK_DO_TRANSITION_TO_GAME(BOOL p0, int maxPlayers) { return invoke<BOOL>(0xF9BC50, p0, maxPlayers); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_GAME(BOOL p0, int maxPlayers, BOOL p2) { return invoke<BOOL>(0xF9BC80, p0, maxPlayers, p2); }
static BOOL NETWORK_DO_TRANSITION_TO_FREEMODE(Any* p0, Any p1, BOOL p2, int players, BOOL p4) { return invoke<BOOL>(0xF9BCC0, p0, p1, p2, players, p4); }
static BOOL NETWORK_DO_TRANSITION_TO_NEW_FREEMODE(Any* p0, Any p1, int players, BOOL p3, BOOL p4, BOOL p5) { return invoke<BOOL>(0xF9BD00, p0, p1, players, p3, p4, p5); }
static BOOL NETWORK_IS_TRANSITION_TO_GAME() { return invoke<BOOL>(0xF9BD50); }
static int NETWORK_GET_TRANSITION_MEMBERS(Any* data, int dataCount) { return invoke<int>(0xF9BD90, data, dataCount); }
static void NETWORK_APPLY_TRANSITION_PARAMETER(int p0, int p1) { invoke<Void>(0xF9BDC0, p0, p1); }
static void NETWORK_APPLY_TRANSITION_PARAMETER_STRING(int p0, const char* string, BOOL p2) { invoke<Void>(0xF9BDE0, p0, string, p2); }
static BOOL NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(Any* gamerHandle, const char* p1, int p2, int p3, BOOL p4) { return invoke<BOOL>(0xF9BE10, gamerHandle, p1, p2, p3, p4); }
static BOOL NETWORK_MARK_TRANSITION_GAMER_AS_FULLY_JOINED(Any* p0) { return invoke<BOOL>(0xF9BEE0, p0); }
static BOOL NETWORK_IS_TRANSITION_HOST() { return invoke<BOOL>(0xF9BF80); }
static BOOL NETWORK_IS_TRANSITION_HOST_FROM_HANDLE(Any* gamerHandle) { return invoke<BOOL>(0xF9BFB0, gamerHandle); }
static BOOL NETWORK_GET_TRANSITION_HOST(Any* gamerHandle) { return invoke<BOOL>(0xF9C060, gamerHandle); }
static BOOL NETWORK_IS_IN_TRANSITION() { return invoke<BOOL>(0xF9C0F0); }
static BOOL NETWORK_IS_TRANSITION_STARTED() { return invoke<BOOL>(0xF9C110); }
static BOOL NETWORK_IS_TRANSITION_BUSY() { return invoke<BOOL>(0xF9C130); }
static BOOL NETWORK_IS_TRANSITION_MATCHMAKING() { return invoke<BOOL>(0xF9C150); }
static BOOL NETWORK_IS_TRANSITION_LEAVE_POSTPONED() { return invoke<BOOL>(0xF9C170); }
static void NETWORK_TRANSITION_SET_IN_PROGRESS(Any p0) { invoke<Void>(0xF9C190, p0); }
static void NETWORK_TRANSITION_SET_CONTENT_CREATOR(Any p0) { invoke<Void>(0xF9C1C0, p0); }
static void NETWORK_TRANSITION_SET_ACTIVITY_ISLAND(Any p0) { invoke<Void>(0xF9C1E0, p0); }
static void NETWORK_OPEN_TRANSITION_MATCHMAKING() { invoke<Void>(0xF9C210); }
static void NETWORK_CLOSE_TRANSITION_MATCHMAKING() { invoke<Void>(0xF9C230); }
static BOOL NETWORK_IS_TRANSITION_OPEN_TO_MATCHMAKING() { return invoke<BOOL>(0xF9C250); }
static void NETWORK_SET_TRANSITION_VISIBILITY_LOCK(BOOL p0, BOOL p1) { invoke<Void>(0xF9C280, p0, p1); }
static BOOL NETWORK_IS_TRANSITION_VISIBILITY_LOCKED() { return invoke<BOOL>(0xF9C2B0); }
static void NETWORK_SET_TRANSITION_ACTIVITY_ID(Any p0) { invoke<Void>(0xF9C2E0, p0); }
static void NETWORK_CHANGE_TRANSITION_SLOTS(Any p0, BOOL p1) { invoke<Void>(0xF9C330, p0, p1); }
static void NETWORK_TRANSITION_BLOCK_JOIN_REQUESTS(BOOL p0) { invoke<Void>(0xF9C390, p0); }
static BOOL NETWORK_HAS_PLAYER_STARTED_TRANSITION(Player player) { return invoke<BOOL>(0xF9C3E0, player); }
static BOOL NETWORK_ARE_TRANSITION_DETAILS_VALID(Any p0) { return invoke<BOOL>(0xF9C430, p0); }
static BOOL NETWORK_JOIN_TRANSITION(Player player) { return invoke<BOOL>(0xF9C490, player); }
static BOOL NETWORK_HAS_INVITED_GAMER_TO_TRANSITION(Any* p0) { return invoke<BOOL>(0xF9C4F0, p0); }
static BOOL NETWORK_HAS_TRANSITION_INVITE_BEEN_ACKED(Any* p0) { return invoke<BOOL>(0xF9C580, p0); }
static BOOL NETWORK_IS_ACTIVITY_SESSION() { return invoke<BOOL>(0xF9C610); }
static void NETWORK_DISABLE_REALTIME_MULTIPLAYER() { invoke<Void>(0xF9C640); }
static void NETWORK_SET_PRESENCE_SESSION_INVITES_BLOCKED(BOOL toggle) { invoke<Void>(0xF9C650, toggle); }
static BOOL NETWORK_SEND_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xF9C680, gamerHandle, p1, dataCount, p3); }
static BOOL NETWORK_SEND_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xF9C750, gamerHandle, p1, dataCount, p3); }
static BOOL NETWORK_SEND_IMPORTANT_TRANSITION_INVITE_VIA_PRESENCE(Any* gamerHandle, const char* p1, int dataCount, int p3) { return invoke<BOOL>(0xF9C820, gamerHandle, p1, dataCount, p3); }
static int NETWORK_GET_PRESENCE_INVITE_INDEX_BY_ID(int p0) { return invoke<int>(0xF9C8F0, p0); }
static int NETWORK_GET_NUM_PRESENCE_INVITES() { return invoke<int>(0xF9C920); }
static BOOL NETWORK_ACCEPT_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xF9C950, p0); }
static BOOL NETWORK_REMOVE_PRESENCE_INVITE(int p0) { return invoke<BOOL>(0xF9C980, p0); }
static int NETWORK_GET_PRESENCE_INVITE_ID(int p0) { return invoke<int>(0xF9C9B0, p0); }
static const char* NETWORK_GET_PRESENCE_INVITE_INVITER(int p0) { return invoke<const char*>(0xF9C9E0, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_HANDLE(Any p0, Any* p1) { return invoke<BOOL>(0xF9CA10, p0, p1); }
static int NETWORK_GET_PRESENCE_INVITE_SESSION_ID(Any p0) { return invoke<int>(0xF9CAA0, p0); }
static const char* NETWORK_GET_PRESENCE_INVITE_CONTENT_ID(int p0) { return invoke<const char*>(0xF9CAC0, p0); }
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_LENGTH(int p0) { return invoke<int>(0xF9CAF0, p0); }
static int NETWORK_GET_PRESENCE_INVITE_PLAYLIST_CURRENT(int p0) { return invoke<int>(0xF9CB20, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(int p0) { return invoke<BOOL>(0xF9CB50, p0); }
static BOOL NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(Any p0) { return invoke<BOOL>(0xF9CB80, p0); }
static BOOL NETWORK_HAS_FOLLOW_INVITE() { return invoke<BOOL>(0xF9CBB0); }
static BOOL NETWORK_ACTION_FOLLOW_INVITE() { return invoke<BOOL>(0xF9CBE0); }
static BOOL NETWORK_CLEAR_FOLLOW_INVITE() { return invoke<BOOL>(0xF9CC10); }
static void NETWORK_REMOVE_AND_CANCEL_ALL_INVITES() { invoke<Void>(0xF9CC40); }
static void NETWORK_REMOVE_TRANSITION_INVITE(Any* p0) { invoke<Void>(0xF9CC50, p0); }
static void NETWORK_REMOVE_ALL_TRANSITION_INVITE() { invoke<Void>(0xF9CCD0); }
static void NETWORK_REMOVE_AND_CANCEL_ALL_TRANSITION_INVITES() { invoke<Void>(0xF9CCE0); }
static BOOL NETWORK_INVITE_GAMERS(Any* p0, Any p1, Any* p2, Any p3) { return invoke<BOOL>(0xF9CCF0, p0, p1, p2, p3); }
static BOOL NETWORK_HAS_INVITED_GAMER(Any* p0) { return invoke<BOOL>(0xF9CD20, p0); }
static BOOL NETWORK_HAS_MADE_INVITE_DECISION(Any* gamerHandle) { return invoke<BOOL>(0xF9CDC0, gamerHandle); }
static int NETWORK_GET_INVITE_REPLY_STATUS(Any p0) { return invoke<int>(0xF9CE50, p0); }
static BOOL NETWORK_GET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xF9CEE0, p0); }
static BOOL NETWORK_SET_CURRENTLY_SELECTED_GAMER_HANDLE_FROM_INVITE_MENU(Any* p0) { return invoke<BOOL>(0xF9CF40, p0); }
static void NETWORK_SET_INVITE_ON_CALL_FOR_INVITE_MENU(Any* p0) { invoke<Void>(0xF9D010, p0); }
static BOOL NETWORK_CHECK_DATA_MANAGER_SUCCEEDED_FOR_HANDLE(int p0, Any* gamerHandle) { return invoke<BOOL>(0xF9D020, p0, gamerHandle); }
static BOOL NETWORK_CHECK_DATA_MANAGER_FOR_HANDLE(Any p0, Any* gamerHandle) { return invoke<BOOL>(0xF9D0E0, p0, gamerHandle); }
static void NETWORK_SET_INVITE_FAILED_MESSAGE_FOR_INVITE_MENU(Any* p0, Any* p1) { invoke<Void>(0xF9D1A0, p0, p1); }
static BOOL FILLOUT_PM_PLAYER_LIST(Any* gamerHandle, Any p1, Any p2) { return invoke<BOOL>(0xF9D1B0, gamerHandle, p1, p2); }
static BOOL FILLOUT_PM_PLAYER_LIST_WITH_NAMES(Any* p0, Any* p1, Any p2, Any p3) { return invoke<BOOL>(0xF9D1E0, p0, p1, p2, p3); }
static BOOL REFRESH_PLAYER_LIST_STATS(int p0) { return invoke<BOOL>(0xF9D210, p0); }
static BOOL NETWORK_SET_CURRENT_DATA_MANAGER_HANDLE(Any* p0) { return invoke<BOOL>(0xF9D240, p0); }
static BOOL NETWORK_IS_IN_PLATFORM_PARTY() { return invoke<BOOL>(0xF9D2F0); }
static int NETWORK_GET_PLATFORM_PARTY_MEMBER_COUNT() { return invoke<int>(0xF9D310); }
static int NETWORK_GET_PLATFORM_PARTY_MEMBERS(Any* data, int dataSize) { return invoke<int>(0xF9D330, data, dataSize); }
static BOOL NETWORK_IS_IN_PLATFORM_PARTY_CHAT() { return invoke<BOOL>(0xF9D360); }
static BOOL NETWORK_IS_CHATTING_IN_PLATFORM_PARTY(Any* gamerHandle) { return invoke<BOOL>(0xF9D380, gamerHandle); }
static BOOL NETWORK_CAN_QUEUE_FOR_PREVIOUS_SESSION_JOIN() { return invoke<BOOL>(0xF9D400); }
static BOOL NETWORK_IS_QUEUING_FOR_SESSION_JOIN() { return invoke<BOOL>(0xF9D430); }
static void NETWORK_CLEAR_QUEUED_JOIN_REQUEST() { invoke<Void>(0xF9D460); }
static void NETWORK_SEND_QUEUED_JOIN_REQUEST() { invoke<Void>(0xF9D470); }
static void NETWORK_REMOVE_ALL_QUEUED_JOIN_REQUESTS() { invoke<Void>(0xF9D480); }
static void NETWORK_SEED_RANDOM_NUMBER_GENERATOR(int seed) { invoke<Void>(0xF9D490, seed); }
static int NETWORK_GET_RANDOM_INT() { return invoke<int>(0xF9D4D0); }
static int NETWORK_GET_RANDOM_INT_RANGED(int rangeStart, int rangeEnd) { return invoke<int>(0xF9D510, rangeStart, rangeEnd); }
static float _NETWORK_GET_RANDOM_FLOAT_RANGED(float rangeStart, float rangeEnd) { return invoke<float>(0xF9D570, rangeStart, rangeEnd); }
static BOOL NETWORK_PLAYER_IS_CHEATER() { return invoke<BOOL>(0xF9D5F0); }
static int NETWORK_PLAYER_GET_CHEATER_REASON() { return invoke<int>(0xF9D640); }
static BOOL NETWORK_PLAYER_IS_BADSPORT() { return invoke<BOOL>(0xF9D670); }
static BOOL TRIGGER_PLAYER_CRC_HACKER_CHECK(Player player, int p1, Hash scriptHash) { return invoke<BOOL>(0xF9D6A0, player, p1, scriptHash); }
static BOOL TRIGGER_TUNING_CRC_HACKER_CHECK(Player player, const char* p1, const char* p2) { return invoke<BOOL>(0xF9D730, player, p1, p2); }
static BOOL TRIGGER_FILE_CRC_HACKER_CHECK(Player player, const char* p1) { return invoke<BOOL>(0xF9D760, player, p1); }
static BOOL REMOTE_CHEATER_PLAYER_DETECTED(Player player, int a, int b) { return invoke<BOOL>(0xF9D790, player, a, b); }
static BOOL BAD_SPORT_PLAYER_LEFT_DETECTED(Any* gamerHandle, int event, int amountReceived) { return invoke<BOOL>(0xF9D800, gamerHandle, event, amountReceived); }
static void NETWORK_ADD_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0xF9D8B0, modelHash); }
static void NETWORK_REMOVE_INVALID_OBJECT_MODEL(Hash modelHash) { invoke<Void>(0xF9D920, modelHash); }
static void NETWORK_CLEAR_INVALID_OBJECT_MODELS() { invoke<Void>(0xF9D990); }
static void NETWORK_APPLY_PED_SCAR_DATA(Ped ped, int p1) { invoke<Void>(0xF9D9A0, ped, p1); }
static void NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(int maxNumMissionParticipants, BOOL p1, int instanceId) { invoke<Void>(0xF9DA00, maxNumMissionParticipants, p1, instanceId); }
static BOOL NETWORK_TRY_TO_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(Any p0, BOOL p1, Any p2) { return invoke<BOOL>(0xF9DA70, p0, p1, p2); }
static BOOL NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT() { return invoke<BOOL>(0xF9DB00); }
static int NETWORK_GET_MAX_NUM_PARTICIPANTS() { return invoke<int>(0xF9DB30); }
static int NETWORK_GET_NUM_PARTICIPANTS() { return invoke<int>(0xF9DB70); }
static int NETWORK_GET_SCRIPT_STATUS() { return invoke<int>(0xF9DBB0); }
static void NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xF9DBD0, vars, numVars, debugName); }
static void NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(int* vars, int numVars, const char* debugName) { invoke<Void>(0xF9DBF0, vars, numVars, debugName); }
static void NETWORK_REGISTER_HIGH_FREQUENCY_HOST_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xF9DC10, p0, p1, p2); }
static void NETWORK_REGISTER_HIGH_FREQUENCY_PLAYER_BROADCAST_VARIABLES(Any p0, Any p1, Any p2) { invoke<Void>(0xF9DC30, p0, p1, p2); }
static void NETWORK_FINISH_BROADCASTING_DATA() { invoke<Void>(0xF9DC50); }
static BOOL NETWORK_HAS_RECEIVED_HOST_BROADCAST_DATA() { return invoke<BOOL>(0xF9DC70); }
static Player NETWORK_GET_PLAYER_INDEX(Player player) { return invoke<Player>(0xF9DC90, player); }
static int NETWORK_GET_PARTICIPANT_INDEX(int index) { return invoke<int>(0xF9DD60, index); }
static Player NETWORK_GET_PLAYER_INDEX_FROM_PED(Ped ped) { return invoke<Player>(0xF9DDE0, ped); }
static int NETWORK_GET_NUM_CONNECTED_PLAYERS() { return invoke<int>(0xF9DE70); }
static BOOL NETWORK_IS_PLAYER_CONNECTED(Player player) { return invoke<BOOL>(0xF9DE90, player); }
static int NETWORK_GET_TOTAL_NUM_PLAYERS() { return invoke<int>(0xF9DEF0); }
static BOOL NETWORK_IS_PARTICIPANT_ACTIVE(int p0) { return invoke<BOOL>(0xF9DF10, p0); }
static BOOL NETWORK_IS_PLAYER_ACTIVE(Player player) { return invoke<BOOL>(0xF9DF50, player); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT(Player player) { return invoke<BOOL>(0xF9DF80, player); }
static BOOL NETWORK_IS_HOST_OF_THIS_SCRIPT() { return invoke<BOOL>(0xF9DFC0); }
static Player NETWORK_GET_HOST_OF_THIS_SCRIPT() { return invoke<Player>(0xF9DFF0); }
static Player NETWORK_GET_HOST_OF_SCRIPT(const char* scriptName, int instance_id, int position_hash) { return invoke<Player>(0xF9E030, scriptName, instance_id, position_hash); }
static void NETWORK_SET_MISSION_FINISHED() { invoke<Void>(0xF9E060); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE(const char* scriptName, int instance_id, BOOL p2, int position_hash) { return invoke<BOOL>(0xF9E090, scriptName, instance_id, p2, position_hash); }
static BOOL NETWORK_IS_SCRIPT_ACTIVE_BY_HASH(Hash scriptHash, int p1, BOOL p2, int p3) { return invoke<BOOL>(0xF9E1A0, scriptHash, p1, p2, p3); }
static BOOL NETWORK_IS_THREAD_A_NETWORK_SCRIPT(int threadId) { return invoke<BOOL>(0xF9E260, threadId); }
static int NETWORK_GET_NUM_SCRIPT_PARTICIPANTS(const char* scriptName, int instance_id, int position_hash) { return invoke<int>(0xF9E2B0, scriptName, instance_id, position_hash); }
static int NETWORK_GET_INSTANCE_ID_OF_THIS_SCRIPT() { return invoke<int>(0xF9E3C0); }
static Hash NETWORK_GET_POSITION_HASH_OF_THIS_SCRIPT() { return invoke<Hash>(0xF9E400); }
static BOOL NETWORK_IS_PLAYER_A_PARTICIPANT_ON_SCRIPT(Player player, const char* script, int instance_id) { return invoke<BOOL>(0xF9E440, player, script, instance_id); }
static void NETWORK_PREVENT_SCRIPT_HOST_MIGRATION() { invoke<Void>(0xF9E470); }
static void NETWORK_REQUEST_TO_BE_HOST_OF_THIS_SCRIPT() { invoke<Void>(0xF9E4A0); }
static Player PARTICIPANT_ID() { return invoke<Player>(0xF9E4D0); }
static int PARTICIPANT_ID_TO_INT() { return invoke<int>(0xF9E500); }
static Player NETWORK_GET_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Player>(0xF9E530, player, weaponHash); }
static Player NETWORK_GET_DESTROYER_OF_NETWORK_ID(int netId, Hash* weaponHash) { return invoke<Player>(0xF9E5A0, netId, weaponHash); }
static Player NETWORK_GET_DESTROYER_OF_ENTITY(Entity entity, Hash* weaponHash) { return invoke<Player>(0xF9E5D0, entity, weaponHash); }
static BOOL NETWORK_GET_ASSISTED_KILL_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xF9E600, player, entity, p2); }
static BOOL NETWORK_GET_ASSISTED_DAMAGE_OF_ENTITY(Player player, Entity entity, int* p2) { return invoke<BOOL>(0xF9E630, player, entity, p2); }
static Entity NETWORK_GET_ENTITY_KILLER_OF_PLAYER(Player player, Hash* weaponHash) { return invoke<Entity>(0xF9E660, player, weaponHash); }
static void NETWORK_SET_CURRENT_PUBLIC_CONTENT_ID(const char* missionId) { invoke<Void>(0xF9E690, missionId); }
static void NETWORK_SET_CURRENT_CHAT_OPTION(int newChatOption) { invoke<Void>(0xF9E6D0, newChatOption); }
static void NETWORK_SET_CURRENT_SPAWN_LOCATION_OPTION(Hash mpSettingSpawn) { invoke<Void>(0xF9E700, mpSettingSpawn); }
static void NETWORK_SET_VEHICLE_DRIVEN_IN_TEST_DRIVE(BOOL toggle) { invoke<Void>(0xF9E730, toggle); }
static void NETWORK_RESURRECT_LOCAL_PLAYER(float x, float y, float z, float heading, BOOL p4, BOOL changetime, BOOL p6, int p7, int p8) { invoke<Void>(0xF9E770, x, y, z, heading, p4, changetime, p6, p7, p8); }
static void NETWORK_SET_LOCAL_PLAYER_INVINCIBLE_TIME(int time) { invoke<Void>(0xF9E7A0, time); }
static BOOL NETWORK_IS_LOCAL_PLAYER_INVINCIBLE() { return invoke<BOOL>(0xF9E7E0); }
static void NETWORK_DISABLE_INVINCIBLE_FLASHING(Player player, BOOL toggle) { invoke<Void>(0xF9E820, player, toggle); }
static void NETWORK_PATCH_POST_CUTSCENE_HS4F_TUN_ENT(Ped ped) { invoke<Void>(0xF9E870, ped); }
static void NETWORK_SET_LOCAL_PLAYER_SYNC_LOOK_AT(BOOL toggle) { invoke<Void>(0xF9E8D0, toggle); }
static BOOL NETWORK_HAS_ENTITY_BEEN_REGISTERED_WITH_THIS_THREAD(Entity entity) { return invoke<BOOL>(0xF9E910, entity); }
static int NETWORK_GET_NETWORK_ID_FROM_ENTITY(Entity entity) { return invoke<int>(0xF9E970, entity); }
static Entity NETWORK_GET_ENTITY_FROM_NETWORK_ID(int netId) { return invoke<Entity>(0xF9E9D0, netId); }
static BOOL NETWORK_GET_ENTITY_IS_NETWORKED(Entity entity) { return invoke<BOOL>(0xF9EA10, entity); }
static BOOL NETWORK_GET_ENTITY_IS_LOCAL(Entity entity) { return invoke<BOOL>(0xF9EA70, entity); }
static void NETWORK_REGISTER_ENTITY_AS_NETWORKED(Entity entity) { invoke<Void>(0xF9EAE0, entity); }
static void NETWORK_UNREGISTER_NETWORKED_ENTITY(Entity entity) { invoke<Void>(0xF9EBB0, entity); }
static BOOL NETWORK_DOES_NETWORK_ID_EXIST(int netId) { return invoke<BOOL>(0xF9EC50, netId); }
static BOOL NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(int netId) { return invoke<BOOL>(0xF9EC90, netId); }
static BOOL NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xF9ECD0, netId); }
static BOOL NETWORK_HAS_CONTROL_OF_NETWORK_ID(int netId) { return invoke<BOOL>(0xF9ED40, netId); }
static BOOL NETWORK_IS_NETWORK_ID_REMOTELY_CONTROLLED(int netId) { return invoke<BOOL>(0xF9EDC0, netId); }
static BOOL NETWORK_REQUEST_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xF9EE10, entity); }
static BOOL NETWORK_REQUEST_CONTROL_OF_DOOR(int doorID) { return invoke<BOOL>(0xF9EE40, doorID); }
static BOOL NETWORK_HAS_CONTROL_OF_ENTITY(Entity entity) { return invoke<BOOL>(0xF9EEB0, entity); }
static BOOL NETWORK_HAS_CONTROL_OF_PICKUP(Pickup pickup) { return invoke<BOOL>(0xF9EF20, pickup); }
static BOOL NETWORK_HAS_CONTROL_OF_DOOR(Hash doorHash) { return invoke<BOOL>(0xF9EF50, doorHash); }
static BOOL NETWORK_IS_DOOR_NETWORKED(Hash doorHash) { return invoke<BOOL>(0xF9EFA0, doorHash); }
static int VEH_TO_NET(Vehicle vehicle) { return invoke<int>(0xF9EFE0, vehicle); }
static int PED_TO_NET(Ped ped) { return invoke<int>(0xF9F040, ped); }
static int OBJ_TO_NET(Object object) { return invoke<int>(0xF9F0A0, object); }
static Vehicle NET_TO_VEH(int netHandle) { return invoke<Vehicle>(0xF9F100, netHandle); }
static Ped NET_TO_PED(int netHandle) { return invoke<Ped>(0xF9F140, netHandle); }
static Object NET_TO_OBJ(int netHandle) { return invoke<Object>(0xF9F180, netHandle); }
static Entity NET_TO_ENT(int netHandle) { return invoke<Entity>(0xF9F1C0, netHandle); }
static void NETWORK_GET_LOCAL_HANDLE(Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xF9F200, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_USER_ID(const char* userId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xF9F240, userId, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_MEMBER_ID(const char* memberId, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xF9F2C0, memberId, gamerHandle, gamerHandleSize); }
static void NETWORK_HANDLE_FROM_PLAYER(Player player, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xF9F340, player, gamerHandle, gamerHandleSize); }
static Hash NETWORK_HASH_FROM_PLAYER_HANDLE(Player player) { return invoke<Hash>(0xF9F3B0, player); }
static Hash NETWORK_HASH_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Hash>(0xF9F3D0, gamerHandle); }
static void NETWORK_HANDLE_FROM_FRIEND(int friendIndex, Any* gamerHandle, int gamerHandleSize) { invoke<Void>(0xF9F480, friendIndex, gamerHandle, gamerHandleSize); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_START(Any* gamerHandle) { return invoke<BOOL>(0xF9F520, gamerHandle); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_PENDING() { return invoke<BOOL>(0xF9F530); }
static BOOL NETWORK_GAMERTAG_FROM_HANDLE_SUCCEEDED() { return invoke<BOOL>(0xF9F540); }
static const char* NETWORK_GET_GAMERTAG_FROM_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xF9F550, gamerHandle); }
static int NETWORK_DISPLAYNAMES_FROM_HANDLES_START(Any* p0, Any p1) { return invoke<int>(0xF9F600, p0, p1); }
static int NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Any p0, Any p1, Any p2) { return invoke<int>(0xF9F700, p0, p1, p2); }
static BOOL NETWORK_ARE_HANDLES_THE_SAME(Any* gamerHandle1, Any* gamerHandle2) { return invoke<BOOL>(0xF9F810, gamerHandle1, gamerHandle2); }
static BOOL NETWORK_IS_HANDLE_VALID(Any* gamerHandle, int gamerHandleSize) { return invoke<BOOL>(0xF9F8C0, gamerHandle, gamerHandleSize); }
static Player NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<Player>(0xF9F8F0, gamerHandle); }
static const char* NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(Any* gamerHandle) { return invoke<const char*>(0xF9F920, gamerHandle); }
static BOOL NETWORK_IS_GAMER_IN_MY_SESSION(Any* gamerHandle) { return invoke<BOOL>(0xF9F9B0, gamerHandle); }
static void NETWORK_SHOW_PROFILE_UI(Any* gamerHandle) { invoke<Void>(0xF9FA40, gamerHandle); }
static const char* NETWORK_PLAYER_GET_NAME(Player player) { return invoke<const char*>(0xF9FAB0, player); }
static const char* NETWORK_PLAYER_GET_USERID(Player player, int* userID) { return invoke<const char*>(0xF9FB30, player, userID); }
static BOOL NETWORK_PLAYER_IS_ROCKSTAR_DEV(Player player) { return invoke<BOOL>(0xF9FB60, player); }
static BOOL NETWORK_PLAYER_INDEX_IS_CHEATER(Player player) { return invoke<BOOL>(0xF9FBB0, player); }
static int NETWORK_ENTITY_GET_OBJECT_ID(Entity entity) { return invoke<int>(0xF9FC30, entity); }
static Entity NETWORK_GET_ENTITY_FROM_OBJECT_ID(Any p0) { return invoke<Entity>(0xF9FCA0, p0); }
static BOOL NETWORK_IS_INACTIVE_PROFILE(Any* p0) { return invoke<BOOL>(0xF9FD00, p0); }
static int NETWORK_GET_MAX_FRIENDS() { return invoke<int>(0xF9FD30); }
static int NETWORK_GET_FRIEND_COUNT() { return invoke<int>(0xF9FD40); }
static const char* NETWORK_GET_FRIEND_NAME(int friendIndex) { return invoke<const char*>(0xF9FD50, friendIndex); }
static const char* NETWORK_GET_FRIEND_DISPLAY_NAME(int friendIndex) { return invoke<const char*>(0xF9FDA0, friendIndex); }
static BOOL NETWORK_IS_FRIEND_ONLINE(const char* name) { return invoke<BOOL>(0xF9FDF0, name); }
static BOOL NETWORK_IS_FRIEND_HANDLE_ONLINE(Any* gamerHandle) { return invoke<BOOL>(0xF9FE40, gamerHandle); }
static BOOL NETWORK_IS_FRIEND_IN_SAME_TITLE(const char* friendName) { return invoke<BOOL>(0xF9FE70, friendName); }
static BOOL NETWORK_IS_FRIEND_IN_MULTIPLAYER(const char* friendName) { return invoke<BOOL>(0xF9FEF0, friendName); }
static BOOL NETWORK_IS_FRIEND(Any* gamerHandle) { return invoke<BOOL>(0xF9FF40, gamerHandle); }
static BOOL NETWORK_IS_PENDING_FRIEND(Any p0) { return invoke<BOOL>(0xF9FFD0, p0); }
static BOOL NETWORK_IS_ADDING_FRIEND() { return invoke<BOOL>(0xF9FFE0); }
static BOOL NETWORK_ADD_FRIEND(Any* gamerHandle, const char* message) { return invoke<BOOL>(0xFA0000, gamerHandle, message); }
static BOOL NETWORK_IS_FRIEND_INDEX_ONLINE(int friendIndex) { return invoke<BOOL>(0xFA0090, friendIndex); }
static void NETWORK_SET_PLAYER_IS_PASSIVE(BOOL toggle) { invoke<Void>(0xFA00E0, toggle); }
static BOOL NETWORK_GET_PLAYER_OWNS_WAYPOINT(Player player) { return invoke<BOOL>(0xFA0130, player); }
static BOOL NETWORK_CAN_SET_WAYPOINT() { return invoke<BOOL>(0xFA0190); }
static void NETWORK_IGNORE_REMOTE_WAYPOINTS() { invoke<Void>(0xFA01C0); }
static BOOL NETWORK_IS_PLAYER_ON_BLOCKLIST(Any* gamerHandle) { return invoke<BOOL>(0xFA01D0, gamerHandle); }
static BOOL NETWORK_SET_SCRIPT_AUTOMUTED(Any p0) { return invoke<BOOL>(0xFA0250, p0); }
static BOOL NETWORK_HAS_AUTOMUTE_OVERRIDE() { return invoke<BOOL>(0xFA0270); }
static BOOL NETWORK_HAS_HEADSET() { return invoke<BOOL>(0xFA02A0); }
static void NETWORK_SET_LOOK_AT_TALKERS(BOOL p0) { invoke<Void>(0xFA02E0, p0); }
static BOOL NETWORK_IS_PUSH_TO_TALK_ACTIVE() { return invoke<BOOL>(0xFA0300); }
static BOOL NETWORK_GAMER_HAS_HEADSET(Any* gamerHandle) { return invoke<BOOL>(0xFA0320, gamerHandle); }
static BOOL NETWORK_IS_GAMER_TALKING(Any* gamerHandle) { return invoke<BOOL>(0xFA03B0, gamerHandle); }
static BOOL NETWORK_PERMISSIONS_HAS_GAMER_RECORD(Any* gamerHandle) { return invoke<BOOL>(0xFA03E0, gamerHandle); }
static BOOL NETWORK_CAN_COMMUNICATE_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xFA0470, gamerHandle); }
static BOOL NETWORK_CAN_TEXT_CHAT_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xFA0510, gamerHandle); }
static BOOL NETWORK_IS_GAMER_MUTED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xFA05A0, gamerHandle); }
static BOOL NETWORK_AM_I_MUTED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xFA0630, gamerHandle); }
static BOOL NETWORK_IS_GAMER_BLOCKED_BY_ME(Any* gamerHandle) { return invoke<BOOL>(0xFA06C0, gamerHandle); }
static BOOL NETWORK_AM_I_BLOCKED_BY_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xFA0750, gamerHandle); }
static BOOL NETWORK_CAN_VIEW_GAMER_USER_CONTENT(Any* gamerHandle) { return invoke<BOOL>(0xFA07E0, gamerHandle); }
static BOOL NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(Any* gamerHandle) { return invoke<BOOL>(0xFA0870, gamerHandle); }
static BOOL NETWORK_CAN_PLAY_MULTIPLAYER_WITH_GAMER(Any* gamerHandle) { return invoke<BOOL>(0xFA0900, gamerHandle); }
static BOOL NETWORK_CAN_GAMER_PLAY_MULTIPLAYER_WITH_ME(Any* gamerHandle) { return invoke<BOOL>(0xFA0990, gamerHandle); }
static BOOL NETWORK_CAN_SEND_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0xFA0A20, gamerHandle); }
static BOOL NETWORK_CAN_RECEIVE_LOCAL_INVITE(Any* gamerHandle) { return invoke<BOOL>(0xFA0AB0, gamerHandle); }
static BOOL NETWORK_IS_PLAYER_TALKING(Player player) { return invoke<BOOL>(0xFA0B40, player); }
static BOOL NETWORK_PLAYER_HAS_HEADSET(Player player) { return invoke<BOOL>(0xFA0BA0, player); }
static BOOL NETWORK_IS_PLAYER_MUTED_BY_ME(Player player) { return invoke<BOOL>(0xFA0C00, player); }
static BOOL NETWORK_AM_I_MUTED_BY_PLAYER(Player player) { return invoke<BOOL>(0xFA0C60, player); }
static BOOL NETWORK_IS_PLAYER_BLOCKED_BY_ME(Player player) { return invoke<BOOL>(0xFA0CC0, player); }
static BOOL NETWORK_AM_I_BLOCKED_BY_PLAYER(Player player) { return invoke<BOOL>(0xFA0D20, player); }
static float NETWORK_GET_PLAYER_LOUDNESS(Player player) { return invoke<float>(0xFA0D80, player); }
static void NETWORK_SET_TALKER_PROXIMITY(float value) { invoke<Void>(0xFA0DE0, value); }
static float NETWORK_GET_TALKER_PROXIMITY() { return invoke<float>(0xFA0E00); }
static void NETWORK_SET_VOICE_ACTIVE(BOOL toggle) { invoke<Void>(0xFA0E30, toggle); }
static void NETWORK_REMAIN_IN_GAME_CHAT(BOOL p0) { invoke<Void>(0xFA0E50, p0); }
static void NETWORK_OVERRIDE_TRANSITION_CHAT(BOOL p0) { invoke<Void>(0xFA0E70, p0); }
static void NETWORK_SET_TEAM_ONLY_CHAT(BOOL toggle) { invoke<Void>(0xFA0E90, toggle); }
static void NETWORK_SET_SCRIPT_CONTROLLING_TEAMS(Any p0) { invoke<Void>(0xFA0EB0, p0); }
static BOOL NETWORK_SET_SAME_TEAM_AS_LOCAL_PLAYER(Any p0, Any p1) { return invoke<BOOL>(0xFA0EC0, p0, p1); }
static void NETWORK_OVERRIDE_TEAM_RESTRICTIONS(int team, BOOL toggle) { invoke<Void>(0xFA0ED0, team, toggle); }
static void NETWORK_SET_OVERRIDE_SPECTATOR_MODE(BOOL toggle) { invoke<Void>(0xFA0F00, toggle); }
static void NETWORK_SET_OVERRIDE_TUTORIAL_SESSION_CHAT(BOOL toggle) { invoke<Void>(0xFA0F20, toggle); }
static void NETWORK_SET_PROXIMITY_AFFECTS_TEAM(BOOL toggle) { invoke<Void>(0xFA0F40, toggle); }
static void NETWORK_SET_NO_SPECTATOR_CHAT(BOOL toggle) { invoke<Void>(0xFA0F60, toggle); }
static void NETWORK_SET_IGNORE_SPECTATOR_CHAT_LIMITS_SAME_TEAM(BOOL toggle) { invoke<Void>(0xFA0F80, toggle); }
static void NETWORK_OVERRIDE_CHAT_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xFA0FA0, player, toggle); }
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xFA1000, player, toggle); }
static void NETWORK_OVERRIDE_SEND_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xFA1030, toggle); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS(Player player, BOOL toggle) { invoke<Void>(0xFA1050, player, toggle); }
static void NETWORK_OVERRIDE_RECEIVE_RESTRICTIONS_ALL(BOOL toggle) { invoke<Void>(0xFA1080, toggle); }
static void NETWORK_SET_VOICE_CHANNEL(int channel) { invoke<Void>(0xFA10A0, channel); }
static void NETWORK_CLEAR_VOICE_CHANNEL() { invoke<Void>(0xFA10F0); }
static void NETWORK_APPLY_VOICE_PROXIMITY_OVERRIDE(float x, float y, float z) { invoke<Void>(0xFA1120, x, y, z); }
static void NETWORK_CLEAR_VOICE_PROXIMITY_OVERRIDE() { invoke<Void>(0xFA11B0); }
static void NETWORK_ENABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xFA11E0, player); }
static void NETWORK_DISABLE_VOICE_BANDWIDTH_RESTRICTION(Player player) { invoke<Void>(0xFA1240, player); }
static void NETWORK_GET_MUTE_COUNT_FOR_PLAYER(Player p0, float* p1, float* p2) { invoke<Void>(0xFA12A0, p0, p1, p2); }
static void NETWORK_SET_SPECTATOR_TO_NON_SPECTATOR_TEXT_CHAT(BOOL toggle) { invoke<Void>(0xFA12F0, toggle); }
static BOOL NETWORK_TEXT_CHAT_IS_TYPING() { return invoke<BOOL>(0xFA1300); }
static void SHUTDOWN_AND_LAUNCH_SINGLE_PLAYER_GAME() { invoke<Void>(0xFA1310); }
static BOOL SHUTDOWN_AND_LOAD_MOST_RECENT_SAVE() { return invoke<BOOL>(0xFA1330); }
static void NETWORK_SET_FRIENDLY_FIRE_OPTION(BOOL toggle) { invoke<Void>(0xFA1370, toggle); }
static void NETWORK_SET_RICH_PRESENCE(int p0, int p1, Any p2, Any p3) { invoke<Void>(0xFA1390, p0, p1, p2, p3); }
static void NETWORK_SET_RICH_PRESENCE_STRING(int p0, const char* textLabel) { invoke<Void>(0xFA13A0, p0, textLabel); }
static int NETWORK_GET_TIMEOUT_TIME() { return invoke<int>(0xFA13B0); }
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_WARP(Player player, float x, float y, float z, BOOL p4, BOOL p5) { invoke<Void>(0xFA13D0, player, x, y, z, p4, p5); }
static void NETWORK_LEAVE_PED_BEHIND_BEFORE_CUTSCENE(Player player, BOOL p1) { invoke<Void>(0xFA1400, player, p1); }
static void REMOVE_ALL_STICKY_BOMBS_FROM_ENTITY(Entity entity, Ped ped) { invoke<Void>(0xFA1420, entity, ped); }
static void NETWORK_KEEP_ENTITY_COLLISION_DISABLED_AFTER_ANIM_SCENE(Any p0, Any p1) { invoke<Void>(0xFA14B0, p0, p1); }
static BOOL NETWORK_IS_ANY_PLAYER_NEAR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { return invoke<BOOL>(0xFA1520, p0, p1, p2, p3, p4, p5, p6); }
static BOOL NETWORK_CLAN_SERVICE_IS_VALID() { return invoke<BOOL>(0xFA1560); }
static BOOL NETWORK_CLAN_PLAYER_IS_ACTIVE(Any* gamerHandle) { return invoke<BOOL>(0xFA1590, gamerHandle); }
static BOOL NETWORK_CLAN_PLAYER_GET_DESC(Any* clanDesc, int bufferSize, Any* gamerHandle) { return invoke<BOOL>(0xFA1640, clanDesc, bufferSize, gamerHandle); }
static BOOL NETWORK_CLAN_IS_ROCKSTAR_CLAN(Any* clanDesc, int bufferSize) { return invoke<BOOL>(0xFA1670, clanDesc, bufferSize); }
static void NETWORK_CLAN_GET_UI_FORMATTED_TAG(Any* clanDesc, int bufferSize, char* formattedTag) { invoke<Void>(0xFA16B0, clanDesc, bufferSize, formattedTag); }
static int NETWORK_CLAN_GET_LOCAL_MEMBERSHIPS_COUNT() { return invoke<int>(0xFA1730); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_DESC(Any* memberDesc, int p1) { return invoke<BOOL>(0xFA1760, memberDesc, p1); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP(Any* gamerHandle) { return invoke<BOOL>(0xFA1790, gamerHandle); }
static BOOL NETWORK_CLAN_DOWNLOAD_MEMBERSHIP_PENDING(Any* p0) { return invoke<BOOL>(0xFA17C0, p0); }
static BOOL NETWORK_CLAN_ANY_DOWNLOAD_MEMBERSHIP_PENDING() { return invoke<BOOL>(0xFA17F0); }
static BOOL NETWORK_CLAN_REMOTE_MEMBERSHIPS_ARE_IN_CACHE(int* p0) { return invoke<BOOL>(0xFA1840, p0); }
static int NETWORK_CLAN_GET_MEMBERSHIP_COUNT(int* p0) { return invoke<int>(0xFA1870, p0); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP_VALID(int* p0, Any p1) { return invoke<BOOL>(0xFA18A0, p0, p1); }
static BOOL NETWORK_CLAN_GET_MEMBERSHIP(int* p0, Any* clanMembership, int p2) { return invoke<BOOL>(0xFA18D0, p0, clanMembership, p2); }
static BOOL NETWORK_CLAN_JOIN(int clanDesc) { return invoke<BOOL>(0xFA1900, clanDesc); }
static BOOL NETWORK_CLAN_CREWINFO_GET_STRING_VALUE(const char* animDict, const char* animName) { return invoke<BOOL>(0xFA1930, animDict, animName); }
static BOOL NETWORK_CLAN_CREWINFO_GET_CREWRANKTITLE(int p0, const char* p1) { return invoke<BOOL>(0xFA1980, p0, p1); }
static BOOL NETWORK_CLAN_HAS_CREWINFO_METADATA_BEEN_RECEIVED() { return invoke<BOOL>(0xFA19D0); }
static BOOL NETWORK_CLAN_GET_EMBLEM_TXD_NAME(Any* netHandle, char* txdName) { return invoke<BOOL>(0xFA1A10, netHandle, txdName); }
static BOOL NETWORK_CLAN_REQUEST_EMBLEM(Any p0) { return invoke<BOOL>(0xFA1A40, p0); }
static BOOL NETWORK_CLAN_IS_EMBLEM_READY(Any p0, Any* p1) { return invoke<BOOL>(0xFA1A70, p0, p1); }
static void NETWORK_CLAN_RELEASE_EMBLEM(Any p0) { invoke<Void>(0xFA1B20, p0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_CLEAR() { return invoke<BOOL>(0xFA1BC0); }
static void NETWORK_GET_PRIMARY_CLAN_DATA_CANCEL() { invoke<Void>(0xFA1BE0); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_START(Any* p0, Any p1) { return invoke<BOOL>(0xFA1C00, p0, p1); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_PENDING() { return invoke<BOOL>(0xFA1C30); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_SUCCESS() { return invoke<BOOL>(0xFA1C50); }
static BOOL NETWORK_GET_PRIMARY_CLAN_DATA_NEW(Any* p0, Any* p1) { return invoke<BOOL>(0xFA1C70, p0, p1); }
static void SET_NETWORK_ID_CAN_MIGRATE(int netId, BOOL toggle) { invoke<Void>(0xFA1CA0, netId, toggle); }
static void SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(int netId, BOOL toggle) { invoke<Void>(0xFA1CC0, netId, toggle); }
static void SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(int netId, Player player, BOOL toggle) { invoke<Void>(0xFA1CE0, netId, player, toggle); }
static void SET_NETWORK_ID_CAN_BE_REASSIGNED(int netId, BOOL toggle) { invoke<Void>(0xFA1D00, netId, toggle); }
static void NETWORK_SET_ENTITY_CAN_BLEND(Entity entity, BOOL toggle) { invoke<Void>(0xFA1D20, entity, toggle); }
static void NETWORK_SET_OBJECT_CAN_BLEND_WHEN_FIXED(Object object, BOOL toggle) { invoke<Void>(0xFA1D80, object, toggle); }
static void NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(Entity entity, BOOL toggle) { invoke<Void>(0xFA1DF0, entity, toggle); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xFA1E70, netId, p1, p2); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_HACK(int netId, BOOL p1, BOOL p2) { invoke<Void>(0xFA1E90, netId, p1, p2); }
static void SET_NETWORK_ID_VISIBLE_IN_CUTSCENE_REMAIN_HACK(Any p0, Any p1) { invoke<Void>(0xFA1EB0, p0, p1); }
static void SET_NETWORK_CUTSCENE_ENTITIES(BOOL toggle) { invoke<Void>(0xFA1ED0, toggle); }
static BOOL ARE_CUTSCENE_ENTITIES_NETWORKED() { return invoke<BOOL>(0xFA1EF0); }
static void SET_NETWORK_ID_PASS_CONTROL_IN_TUTORIAL(int netId, BOOL state) { invoke<Void>(0xFA1F00, netId, state); }
static BOOL IS_NETWORK_ID_OWNED_BY_PARTICIPANT(int netId) { return invoke<BOOL>(0xFA1F20, netId); }
static void SET_REMOTE_PLAYER_VISIBLE_IN_CUTSCENE(Player player, BOOL locallyVisible) { invoke<Void>(0xFA1F50, player, locallyVisible); }
static void SET_LOCAL_PLAYER_VISIBLE_IN_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xFA1FC0, p0, p1); }
static void SET_LOCAL_PLAYER_INVISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0xFA2040, p0); }
static void SET_LOCAL_PLAYER_VISIBLE_LOCALLY(BOOL p0) { invoke<Void>(0xFA20E0, p0); }
static void SET_PLAYER_INVISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0xFA2180, player, toggle); }
static void SET_PLAYER_VISIBLE_LOCALLY(Player player, BOOL toggle) { invoke<Void>(0xFA2220, player, toggle); }
static void FADE_OUT_LOCAL_PLAYER(BOOL p0) { invoke<Void>(0xFA22D0, p0); }
static void NETWORK_FADE_OUT_ENTITY(Entity entity, BOOL normal, BOOL slow) { invoke<Void>(0xFA2350, entity, normal, slow); }
static void NETWORK_FADE_IN_ENTITY(Entity entity, BOOL state, Any p2) { invoke<Void>(0xFA2370, entity, state, p2); }
static BOOL NETWORK_IS_PLAYER_FADING(Player player) { return invoke<BOOL>(0xFA2390, player); }
static BOOL NETWORK_IS_ENTITY_FADING(Entity entity) { return invoke<BOOL>(0xFA2410, entity); }
static BOOL IS_PLAYER_IN_CUTSCENE(Player player) { return invoke<BOOL>(0xFA2490, player); }
static void SET_ENTITY_VISIBLE_IN_CUTSCENE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xFA24F0, p0, p1, p2); }
static void SET_ENTITY_LOCALLY_INVISIBLE(Entity entity) { invoke<Void>(0xFA25A0, entity); }
static void SET_ENTITY_LOCALLY_VISIBLE(Entity entity) { invoke<Void>(0xFA2600, entity); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_NETWORK_ID(int netID) { return invoke<BOOL>(0xFA2670, netID); }
static void ACTIVATE_DAMAGE_TRACKER_ON_NETWORK_ID(int netID, BOOL toggle) { invoke<Void>(0xFA26A0, netID, toggle); }
static BOOL IS_DAMAGE_TRACKER_ACTIVE_ON_PLAYER(Player player) { return invoke<BOOL>(0xFA26C0, player); }
static void ACTIVATE_DAMAGE_TRACKER_ON_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFA2730, player, toggle); }
static BOOL IS_SPHERE_VISIBLE_TO_ANOTHER_MACHINE(float p0, float p1, float p2, float p3) { return invoke<BOOL>(0xFA27B0, p0, p1, p2, p3); }
static BOOL IS_SPHERE_VISIBLE_TO_PLAYER(Any p0, float p1, float p2, float p3, float p4) { return invoke<BOOL>(0xFA2850, p0, p1, p2, p3, p4); }
static void RESERVE_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xFA2910, amount); }
static void RESERVE_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xFA2920, amount); }
static void RESERVE_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xFA2930, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_OBJECTS(int amount) { invoke<Void>(0xFA2940, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_PEDS(int amount) { invoke<Void>(0xFA2950, amount); }
static void RESERVE_LOCAL_NETWORK_MISSION_VEHICLES(int amount) { invoke<Void>(0xFA2960, amount); }
static BOOL CAN_REGISTER_MISSION_OBJECTS(int amount) { return invoke<BOOL>(0xFA2970, amount); }
static BOOL CAN_REGISTER_MISSION_PEDS(int amount) { return invoke<BOOL>(0xFA29F0, amount); }
static BOOL CAN_REGISTER_MISSION_VEHICLES(int amount) { return invoke<BOOL>(0xFA2A70, amount); }
static BOOL CAN_REGISTER_MISSION_PICKUPS(int amount) { return invoke<BOOL>(0xFA2B10, amount); }
static BOOL CAN_REGISTER_MISSION_DOORS(Any p0) { return invoke<BOOL>(0xFA2B90, p0); }
static BOOL CAN_REGISTER_MISSION_ENTITIES(int ped_amt, int vehicle_amt, int object_amt, int pickup_amt) { return invoke<BOOL>(0xFA2BE0, ped_amt, vehicle_amt, object_amt, pickup_amt); }
static int GET_NUM_RESERVED_MISSION_OBJECTS(BOOL p0, Any p1) { return invoke<int>(0xFA2CC0, p0, p1); }
static int GET_NUM_RESERVED_MISSION_PEDS(BOOL p0, Any p1) { return invoke<int>(0xFA2D80, p0, p1); }
static int GET_NUM_RESERVED_MISSION_VEHICLES(BOOL p0, Any p1) { return invoke<int>(0xFA2E40, p0, p1); }
static int GET_NUM_CREATED_MISSION_OBJECTS(BOOL p0) { return invoke<int>(0xFA2F00, p0); }
static int GET_NUM_CREATED_MISSION_PEDS(BOOL p0) { return invoke<int>(0xFA2F80, p0); }
static int GET_NUM_CREATED_MISSION_VEHICLES(BOOL p0) { return invoke<int>(0xFA3000, p0); }
static void GET_RESERVED_MISSION_ENTITIES_IN_AREA(float x, float y, float z, Any p3, Any* out1, Any* out2, Any* out3) { invoke<Void>(0xFA3080, x, y, z, p3, out1, out2, out3); }
static int GET_MAX_NUM_NETWORK_OBJECTS() { return invoke<int>(0xFA3180); }
static int GET_MAX_NUM_NETWORK_PEDS() { return invoke<int>(0xFA3190); }
static int GET_MAX_NUM_NETWORK_VEHICLES() { return invoke<int>(0xFA31A0); }
static int GET_MAX_NUM_NETWORK_PICKUPS() { return invoke<int>(0xFA31B0); }
static void NETWORK_SET_OBJECT_SCOPE_DISTANCE(Object object, float range) { invoke<Void>(0xFA31C0, object, range); }
static void NETWORK_ALLOW_CLONING_WHILE_IN_TUTORIAL(Any p0, Any p1) { invoke<Void>(0xFA3220, p0, p1); }
static void NETWORK_SET_TASK_CUTSCENE_INSCOPE_MULTIPLER(Any p0) { invoke<Void>(0xFA32A0, p0); }
static int GET_NETWORK_TIME() { return invoke<int>(0xFA32E0); }
static int GET_NETWORK_TIME_ACCURATE() { return invoke<int>(0xFA3340); }
static BOOL HAS_NETWORK_TIME_STARTED() { return invoke<BOOL>(0xFA33D0); }
static int GET_TIME_OFFSET(int timeA, int timeB) { return invoke<int>(0xFA3400, timeA, timeB); }
static BOOL IS_TIME_LESS_THAN(int timeA, int timeB) { return invoke<BOOL>(0xFA3410, timeA, timeB); }
static BOOL IS_TIME_MORE_THAN(int timeA, int timeB) { return invoke<BOOL>(0xFA3430, timeA, timeB); }
static BOOL IS_TIME_EQUAL_TO(int timeA, int timeB) { return invoke<BOOL>(0xFA3450, timeA, timeB); }
static int GET_TIME_DIFFERENCE(int timeA, int timeB) { return invoke<int>(0xFA3470, timeA, timeB); }
static const char* GET_TIME_AS_STRING(int time) { return invoke<const char*>(0xFA3480, time); }
static const char* GET_CLOUD_TIME_AS_STRING() { return invoke<const char*>(0xFA3590); }
static int GET_CLOUD_TIME_AS_INT() { return invoke<int>(0xFA35D0); }
static void CONVERT_POSIX_TIME(int posixTime, Any* timeStructure) { invoke<Void>(0xFA35F0, posixTime, timeStructure); }
static void NETWORK_SET_IN_SPECTATOR_MODE(BOOL toggle, Ped playerPed) { invoke<Void>(0xFA3690, toggle, playerPed); }
static void NETWORK_SET_IN_SPECTATOR_MODE_EXTENDED(BOOL toggle, Ped playerPed, BOOL p2) { invoke<Void>(0xFA3700, toggle, playerPed, p2); }
static void NETWORK_SET_IN_FREE_CAM_MODE(BOOL toggle) { invoke<Void>(0xFA3770, toggle); }
static void NETWORK_SET_ANTAGONISTIC_TO_PLAYER(BOOL toggle, Player player) { invoke<Void>(0xFA37C0, toggle, player); }
static BOOL NETWORK_IS_IN_SPECTATOR_MODE() { return invoke<BOOL>(0xFA3810); }
static void NETWORK_SET_IN_MP_CUTSCENE(BOOL p0, BOOL p1) { invoke<Void>(0xFA3830, p0, p1); }
static BOOL NETWORK_IS_IN_MP_CUTSCENE() { return invoke<BOOL>(0xFA3860); }
static BOOL NETWORK_IS_PLAYER_IN_MP_CUTSCENE(Player player) { return invoke<BOOL>(0xFA3870, player); }
static void NETWORK_HIDE_PROJECTILE_IN_CUTSCENE() { invoke<Void>(0xFA38C0); }
static void SET_NETWORK_VEHICLE_RESPOT_TIMER(int netId, int time, Any p2, Any p3) { invoke<Void>(0xFA38D0, netId, time, p2, p3); }
static BOOL IS_NETWORK_VEHICLE_RUNNING_RESPOT_TIMER(int networkID) { return invoke<BOOL>(0xFA3940, networkID); }
static void SET_NETWORK_VEHICLE_AS_GHOST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xFA3990, vehicle, toggle); }
static void SET_NETWORK_VEHICLE_MAX_POSITION_DELTA_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0xFA39F0, vehicle, multiplier); }
static void SET_NETWORK_ENABLE_HIGH_SPEED_EDGE_FALL_DETECTION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0xFA3AC0, vehicle, toggle); }
static void SET_LOCAL_PLAYER_AS_GHOST(BOOL toggle, BOOL p1) { invoke<Void>(0xFA3B80, toggle, p1); }
static BOOL IS_ENTITY_A_GHOST(Entity entity) { return invoke<BOOL>(0xFA3BA0, entity); }
static void SET_NON_PARTICIPANTS_OF_THIS_SCRIPT_AS_GHOSTS(BOOL p0) { invoke<Void>(0xFA3C10, p0); }
static void SET_REMOTE_PLAYER_AS_GHOST(Player player, BOOL p1) { invoke<Void>(0xFA3C80, player, p1); }
static void SET_GHOST_ALPHA(int alpha) { invoke<Void>(0xFA3D30, alpha); }
static void RESET_GHOST_ALPHA() { invoke<Void>(0xFA3DC0); }
static void SET_ENTITY_GHOSTED_FOR_GHOST_PLAYERS(Entity entity, BOOL toggle) { invoke<Void>(0xFA3DD0, entity, toggle); }
static void SET_INVERT_GHOSTING(BOOL p0) { invoke<Void>(0xFA3E40, p0); }
static BOOL IS_ENTITY_IN_GHOST_COLLISION(Entity entity) { return invoke<BOOL>(0xFA3ED0, entity); }
static void USE_PLAYER_COLOUR_INSTEAD_OF_TEAM_COLOUR(BOOL toggle) { invoke<Void>(0xFA3F30, toggle); }
static int NETWORK_CREATE_SYNCHRONISED_SCENE(float x, float y, float z, float xRot, float yRot, float zRot, int rotationOrder, BOOL useOcclusionPortal, BOOL looped, float p9, float animTime, float p11) { return invoke<int>(0xFA3F50, x, y, z, xRot, yRot, zRot, rotationOrder, useOcclusionPortal, looped, p9, animTime, p11); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(Ped ped, int netScene, const char* animDict, const char* animnName, float speed, float speedMultiplier, int duration, int flag, float playbackRate, Any p9) { invoke<Void>(0xFA3FA0, ped, netScene, animDict, animnName, speed, speedMultiplier, duration, flag, playbackRate, p9); }
static void NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE_WITH_IK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0xFA4080, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(Entity entity, int netScene, const char* animDict, const char* animName, float speed, float speedMulitiplier, int flag) { invoke<Void>(0xFA4160, entity, netScene, animDict, animName, speed, speedMulitiplier, flag); }
static void NETWORK_ADD_MAP_ENTITY_TO_SYNCHRONISED_SCENE(int netScene, Hash modelHash, float x, float y, float z, float p5, const char* p6, float p7, float p8, int flags) { invoke<Void>(0xFA4220, netScene, modelHash, x, y, z, p5, p6, p7, p8, flags); }
static void NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(int netScene, const char* animDict, const char* animName) { invoke<Void>(0xFA42A0, netScene, animDict, animName); }
static void NETWORK_ATTACH_SYNCHRONISED_SCENE_TO_ENTITY(int netScene, Entity entity, int bone) { invoke<Void>(0xFA4320, netScene, entity, bone); }
static void NETWORK_START_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xFA43E0, netScene); }
static void NETWORK_STOP_SYNCHRONISED_SCENE(int netScene) { invoke<Void>(0xFA4450, netScene); }
static int NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(int netId) { return invoke<int>(0xFA44C0, netId); }
static void NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(int netScene) { invoke<Void>(0xFA4500, netScene); }
static void NETWORK_ALLOW_REMOTE_SYNCED_SCENE_LOCAL_PLAYER_REQUESTS(Any p0) { invoke<Void>(0xFA4570, p0); }
static BOOL NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(int p0, Any p1) { return invoke<BOOL>(0xFA45A0, p0, p1); }
static BOOL NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(Player player, float x, float y, float z, float radius, float p5, float p6, float p7, int flags) { return invoke<BOOL>(0xFA4610, player, x, y, z, radius, p5, p6, p7, flags); }
static BOOL NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(Player player, float x1, float y1, float z1, float x2, float y2, float z2, float width, float p8, float p9, float p10, int flags) { return invoke<BOOL>(0xFA4650, player, x1, y1, z1, x2, y2, z2, width, p8, p9, p10, flags); }
static int NETWORK_QUERY_RESPAWN_RESULTS(Any* p0) { return invoke<int>(0xFA4690, p0); }
static void NETWORK_CANCEL_RESPAWN_SEARCH() { invoke<Void>(0xFA46F0); }
static void NETWORK_GET_RESPAWN_RESULT(int randomInt, Vector3* coordinates, float* heading) { invoke<Void>(0xFA4700, randomInt, coordinates, heading); }
static int NETWORK_GET_RESPAWN_RESULT_FLAGS(int p0) { return invoke<int>(0xFA4770, p0); }
static void NETWORK_START_SOLO_TUTORIAL_SESSION() { invoke<Void>(0xFA4790); }
static void NETWORK_ALLOW_GANG_TO_JOIN_TUTORIAL_SESSION(int teamId, int instanceId) { invoke<Void>(0xFA47C0, teamId, instanceId); }
static void NETWORK_END_TUTORIAL_SESSION() { invoke<Void>(0xFA4810); }
static BOOL NETWORK_IS_IN_TUTORIAL_SESSION() { return invoke<BOOL>(0xFA4840); }
static BOOL NETWORK_WAITING_POP_CLEAR_TUTORIAL_SESSION() { return invoke<BOOL>(0xFA4880); }
static BOOL NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING() { return invoke<BOOL>(0xFA48C0); }
static int NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(Player player) { return invoke<int>(0xFA4900, player); }
static BOOL NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(Player player, int index) { return invoke<BOOL>(0xFA4950, player, index); }
static void NETWORK_BLOCK_PROXY_MIGRATION_BETWEEN_TUTORIAL_SESSIONS(Any p0) { invoke<Void>(0xFA49B0, p0); }
static void NETWORK_CONCEAL_PLAYER(Player player, BOOL toggle, BOOL p2) { invoke<Void>(0xFA49E0, player, toggle, p2); }
static BOOL NETWORK_IS_PLAYER_CONCEALED(Player player) { return invoke<BOOL>(0xFA4A30, player); }
static void NETWORK_CONCEAL_ENTITY(Entity entity, BOOL toggle) { invoke<Void>(0xFA4A80, entity, toggle); }
static BOOL NETWORK_IS_ENTITY_CONCEALED(Entity entity) { return invoke<BOOL>(0xFA4AF0, entity); }
static void NETWORK_OVERRIDE_CLOCK_TIME(int hours, int minutes, int seconds) { invoke<Void>(0xFA4B60, hours, minutes, seconds); }
static void NETWORK_OVERRIDE_CLOCK_RATE(int ms) { invoke<Void>(0xFA4B80, ms); }
static void NETWORK_CLEAR_CLOCK_TIME_OVERRIDE() { invoke<Void>(0xFA4B90); }
static BOOL NETWORK_IS_CLOCK_TIME_OVERRIDDEN() { return invoke<BOOL>(0xFA4BB0); }
static int NETWORK_ADD_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xFA4BD0, x1, y1, z1, x2, y2, z2); }
static int NETWORK_ADD_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width) { return invoke<int>(0xFA4C00, x1, y1, z1, x2, y2, z2, width); }
static int NETWORK_ADD_CLIENT_ENTITY_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xFA4C30, x1, y1, z1, x2, y2, z2); }
static int NETWORK_ADD_CLIENT_ENTITY_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float radius) { return invoke<int>(0xFA4C60, x1, y1, z1, x2, y2, z2, radius); }
static BOOL NETWORK_REMOVE_ENTITY_AREA(int areaHandle) { return invoke<BOOL>(0xFA4C90, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_DOES_EXIST(int areaHandle) { return invoke<BOOL>(0xFA4D90, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(int areaHandle) { return invoke<BOOL>(0xFA4DC0, areaHandle); }
static BOOL NETWORK_ENTITY_AREA_IS_OCCUPIED(int areaHandle) { return invoke<BOOL>(0xFA4DF0, areaHandle); }
static void NETWORK_USE_HIGH_PRECISION_BLENDING(int netID, BOOL toggle) { invoke<Void>(0xFA4E20, netID, toggle); }
static void NETWORK_SET_CUSTOM_ARENA_BALL_PARAMS(int netId) { invoke<Void>(0xFA4E80, netId); }
static void NETWORK_ENTITY_USE_HIGH_PRECISION_ROTATION(int netId, BOOL toggle) { invoke<Void>(0xFA4EE0, netId, toggle); }
static BOOL NETWORK_REQUEST_CLOUD_BACKGROUND_SCRIPTS() { return invoke<BOOL>(0xFA4F40); }
static BOOL NETWORK_IS_CLOUD_BACKGROUND_SCRIPT_REQUEST_PENDING() { return invoke<BOOL>(0xFA4F70); }
static void NETWORK_REQUEST_CLOUD_TUNABLES() { invoke<Void>(0xFA4FA0); }
static BOOL NETWORK_IS_TUNABLE_CLOUD_REQUEST_PENDING() { return invoke<BOOL>(0xFA4FB0); }
static int NETWORK_GET_TUNABLE_CLOUD_CRC() { return invoke<int>(0xFA4FE0); }
static BOOL NETWORK_DOES_TUNABLE_EXIST(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xFA5000, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_INT(const char* tunableContext, const char* tunableName, int* value) { return invoke<BOOL>(0xFA5070, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT(const char* tunableContext, const char* tunableName, float* value) { return invoke<BOOL>(0xFA50F0, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL(const char* tunableContext, const char* tunableName) { return invoke<BOOL>(0xFA5170, tunableContext, tunableName); }
static BOOL NETWORK_DOES_TUNABLE_EXIST_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xFA5210, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_MODIFICATION_DETECTION_CLEAR() { return invoke<BOOL>(0xFA5260); }
static BOOL NETWORK_ACCESS_TUNABLE_INT_HASH(Hash tunableContext, Hash tunableName, int* value) { return invoke<BOOL>(0xFA5290, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_INT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, int* value) { return invoke<BOOL>(0xFA52F0, contextHash, nameHash, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_HASH(Hash tunableContext, Hash tunableName, float* value) { return invoke<BOOL>(0xFA5330, tunableContext, tunableName, value); }
static BOOL NETWORK_ACCESS_TUNABLE_FLOAT_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, float* value) { return invoke<BOOL>(0xFA5390, contextHash, nameHash, value); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName) { return invoke<BOOL>(0xFA53D0, tunableContext, tunableName); }
static BOOL NETWORK_ACCESS_TUNABLE_BOOL_MODIFICATION_DETECTION_REGISTRATION_HASH(Hash contextHash, Hash nameHash, BOOL* value) { return invoke<BOOL>(0xFA5450, contextHash, nameHash, value); }
static BOOL NETWORK_TRY_ACCESS_TUNABLE_BOOL_HASH(Hash tunableContext, Hash tunableName, BOOL defaultValue) { return invoke<BOOL>(0xFA5490, tunableContext, tunableName, defaultValue); }
static int NETWORK_GET_CONTENT_MODIFIER_LIST_ID(Hash contentHash) { return invoke<int>(0xFA54F0, contentHash); }
static int NETWORK_GET_BONE_ID_OF_FATAL_HIT() { return invoke<int>(0xFA5520); }
static void NETWORK_RESET_BODY_TRACKER() { invoke<Void>(0xFA5550); }
static int NETWORK_GET_NUMBER_BODY_TRACKER_HITS() { return invoke<int>(0xFA5570); }
static BOOL NETWORK_HAS_BONE_BEEN_HIT_BY_KILLER(int boneIndex) { return invoke<BOOL>(0xFA55A0, boneIndex); }
static BOOL NETWORK_SET_ATTRIBUTE_DAMAGE_TO_PLAYER(Ped ped, Player player) { return invoke<BOOL>(0xFA5630, ped, player); }
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_DAMAGE(Entity entity, BOOL toggle) { invoke<Void>(0xFA56F0, entity, toggle); }
static void NETWORK_TRIGGER_DAMAGE_EVENT_FOR_ZERO_WEAPON_HASH(Entity entity, BOOL toggle) { invoke<Void>(0xFA5760, entity, toggle); }
static void NETWORK_SET_NO_LONGER_NEEDED(Entity entity, BOOL toggle) { invoke<Void>(0xFA57D0, entity, toggle); }
static BOOL NETWORK_EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { return invoke<BOOL>(0xFA57E0, vehicle, isAudible, isInvisible, netId); }
static void NETWORK_EXPLODE_HELI(Vehicle vehicle, BOOL isAudible, BOOL isInvisible, int netId) { invoke<Void>(0xFA5810, vehicle, isAudible, isInvisible, netId); }
static void NETWORK_USE_LOGARITHMIC_BLENDING_THIS_FRAME(Entity entity) { invoke<Void>(0xFA5840, entity); }
static void NETWORK_OVERRIDE_COORDS_AND_HEADING(Entity entity, float x, float y, float z, float heading) { invoke<Void>(0xFA58A0, entity, x, y, z, heading); }
static void NETWORK_ENABLE_EXTRA_VEHICLE_ORIENTATION_BLEND_CHECKS(int netId, BOOL toggle) { invoke<Void>(0xFA58C0, netId, toggle); }
static void NETWORK_DISABLE_PROXIMITY_MIGRATION(int netID) { invoke<Void>(0xFA5940, netID); }
static void NETWORK_SET_PROPERTY_ID(int id) { invoke<Void>(0xFA5990, id); }
static void NETWORK_CLEAR_PROPERTY_ID() { invoke<Void>(0xFA59D0); }
static void NETWORK_SET_PLAYER_MENTAL_STATE(int p0) { invoke<Void>(0xFA5A00, p0); }
static void NETWORK_SET_MINIMUM_RANK_FOR_MISSION(BOOL p0) { invoke<Void>(0xFA5A40, p0); }
static void NETWORK_CACHE_LOCAL_PLAYER_HEAD_BLEND_DATA() { invoke<Void>(0xFA5A60); }
static BOOL NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(Player player) { return invoke<BOOL>(0xFA5A70, player); }
static BOOL NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(Ped ped, Player player) { return invoke<BOOL>(0xFA5AB0, ped, player); }
static int GET_NUM_COMMERCE_ITEMS() { return invoke<int>(0xFA5B30); }
static BOOL IS_COMMERCE_DATA_VALID() { return invoke<BOOL>(0xFA5B50); }
static void TRIGGER_COMMERCE_DATA_FETCH(Any p0) { invoke<Void>(0xFA5B70, p0); }
static BOOL IS_COMMERCE_DATA_FETCH_IN_PROGRESS() { return invoke<BOOL>(0xFA5B80); }
static const char* GET_COMMERCE_ITEM_ID(int index) { return invoke<const char*>(0xFA5BB0, index); }
static const char* GET_COMMERCE_ITEM_NAME(int index) { return invoke<const char*>(0xFA5C20, index); }
static const char* GET_COMMERCE_PRODUCT_PRICE(int index) { return invoke<const char*>(0xFA5C90, index); }
static int GET_COMMERCE_ITEM_NUM_CATS(int index) { return invoke<int>(0xFA5D00, index); }
static const char* GET_COMMERCE_ITEM_CAT(int index, int index2) { return invoke<const char*>(0xFA5D70, index, index2); }
static void OPEN_COMMERCE_STORE(const char* p0, const char* p1, int p2) { invoke<Void>(0xFA5DE0, p0, p1, p2); }
static BOOL IS_COMMERCE_STORE_OPEN() { return invoke<BOOL>(0xFA5E00); }
static void SET_STORE_ENABLED(BOOL toggle) { invoke<Void>(0xFA5E20, toggle); }
static BOOL REQUEST_COMMERCE_ITEM_IMAGE(int index) { return invoke<BOOL>(0xFA5E40, index); }
static void RELEASE_ALL_COMMERCE_ITEM_IMAGES() { invoke<Void>(0xFA5E70); }
static const char* GET_COMMERCE_ITEM_TEXTURENAME(int index) { return invoke<const char*>(0xFA5E80, index); }
static BOOL IS_STORE_AVAILABLE_TO_USER() { return invoke<BOOL>(0xFA5EF0); }
static void DELAY_MP_STORE_OPEN() { invoke<Void>(0xFA5F40); }
static void RESET_STORE_NETWORK_GAME_TRACKING() { invoke<Void>(0xFA5F50); }
static BOOL IS_USER_OLD_ENOUGH_TO_ACCESS_STORE() { return invoke<BOOL>(0xFA5F60); }
static void SET_LAST_VIEWED_SHOP_ITEM(Hash p0, int p1, Hash p2) { invoke<Void>(0xFA5FA0, p0, p1, p2); }
static int GET_USER_PREMIUM_ACCESS() { return invoke<int>(0xFA5FC0); }
static int GET_USER_STARTER_ACCESS() { return invoke<int>(0xFA5FF0); }
static int CLOUD_DELETE_MEMBER_FILE(const char* p0) { return invoke<int>(0xFA6020, p0); }
static BOOL CLOUD_HAS_REQUEST_COMPLETED(int requestId) { return invoke<BOOL>(0xFA6080, requestId); }
static BOOL CLOUD_DID_REQUEST_SUCCEED(int requestId) { return invoke<BOOL>(0xFA60B0, requestId); }
static void CLOUD_CHECK_AVAILABILITY() { invoke<Void>(0xFA60E0); }
static BOOL CLOUD_IS_CHECKING_AVAILABILITY() { return invoke<BOOL>(0xFA60F0); }
static BOOL CLOUD_GET_AVAILABILITY_CHECK_RESULT() { return invoke<BOOL>(0xFA6110); }
static int GET_CONTENT_TO_LOAD_TYPE() { return invoke<int>(0xFA6140); }
static BOOL GET_IS_LAUNCH_FROM_LIVE_AREA() { return invoke<BOOL>(0xFA6240); }
static BOOL GET_IS_LIVE_AREA_LAUNCH_WITH_CONTENT() { return invoke<BOOL>(0xFA6280); }
static void CLEAR_SERVICE_EVENT_ARGUMENTS() { invoke<Void>(0xFA62E0); }
static BOOL UGC_COPY_CONTENT(Any* p0, Any* p1) { return invoke<BOOL>(0xFA62F0, p0, p1); }
static BOOL UGC_IS_CREATING() { return invoke<BOOL>(0xFA6340); }
static BOOL UGC_HAS_CREATE_FINISHED() { return invoke<BOOL>(0xFA6370); }
static BOOL UGC_DID_CREATE_SUCCEED() { return invoke<BOOL>(0xFA63A0); }
static int UGC_GET_CREATE_RESULT() { return invoke<int>(0xFA63D0); }
static const char* UGC_GET_CREATE_CONTENT_ID() { return invoke<const char*>(0xFA6400); }
static void UGC_CLEAR_CREATE_RESULT() { invoke<Void>(0xFA6430); }
static BOOL UGC_QUERY_MY_CONTENT(Any p0, Any p1, Any* p2, Any p3, Any p4, Any p5) { return invoke<BOOL>(0xFA6440, p0, p1, p2, p3, p4, p5); }
static BOOL UGC_QUERY_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any p4, BOOL p5) { return invoke<BOOL>(0xFA6510, p0, p1, p2, p3, p4, p5); }
static BOOL UGC_QUERY_BY_CONTENT_ID(const char* contentId, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xFA65A0, contentId, latestVersion, contentTypeName); }
static BOOL UGC_QUERY_BY_CONTENT_IDS(Any* data, int count, BOOL latestVersion, const char* contentTypeName) { return invoke<BOOL>(0xFA6660, data, count, latestVersion, contentTypeName); }
static BOOL UGC_QUERY_MOST_RECENTLY_CREATED_CONTENT(int offset, int count, const char* contentTypeName, int p3) { return invoke<BOOL>(0xFA6780, offset, count, contentTypeName, p3); }
static BOOL UGC_GET_BOOKMARKED_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xFA6820, p0, p1, p2, p3); }
static BOOL UGC_GET_MY_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xFA6880, p0, p1, p2, p3); }
static BOOL UGC_GET_FRIEND_CONTENT(Any p0, Any p1, const char* p2, Any* p3) { return invoke<BOOL>(0xFA68F0, p0, p1, p2, p3); }
static BOOL UGC_GET_CREW_CONTENT(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xFA6950, p0, p1, p2, p3, p4); }
static BOOL UGC_GET_GET_BY_CATEGORY(Any p0, Any p1, Any p2, const char* p3, Any* p4) { return invoke<BOOL>(0xFA69B0, p0, p1, p2, p3, p4); }
static BOOL UGC_GET_GET_BY_CONTENT_ID(const char* contentId, const char* contentTypeName) { return invoke<BOOL>(0xFA6A20, contentId, contentTypeName); }
static BOOL UGC_GET_GET_BY_CONTENT_IDS(Any* data, int dataCount, const char* contentTypeName) { return invoke<BOOL>(0xFA6AD0, data, dataCount, contentTypeName); }
static BOOL UGC_GET_MOST_RECENTLY_CREATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xFA6BF0, p0, p1, p2, p3); }
static BOOL UGC_GET_MOST_RECENTLY_PLAYED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xFA6C50, p0, p1, p2, p3); }
static BOOL UGC_GET_TOP_RATED_CONTENT(Any p0, Any p1, Any* p2, Any* p3) { return invoke<BOOL>(0xFA6CB0, p0, p1, p2, p3); }
static void UGC_CANCEL_QUERY() { invoke<Void>(0xFA6D10); }
static BOOL UGC_IS_GETTING() { return invoke<BOOL>(0xFA6D20); }
static BOOL UGC_HAS_GET_FINISHED() { return invoke<BOOL>(0xFA6D50); }
static BOOL UGC_DID_GET_SUCCEED() { return invoke<BOOL>(0xFA6D80); }
static BOOL UGC_WAS_QUERY_FORCE_CANCELLED() { return invoke<BOOL>(0xFA6DB0); }
static int UGC_GET_QUERY_RESULT() { return invoke<int>(0xFA6DE0); }
static int UGC_GET_CONTENT_NUM() { return invoke<int>(0xFA6E10); }
static int UGC_GET_CONTENT_TOTAL() { return invoke<int>(0xFA6E40); }
static Hash UGC_GET_CONTENT_HASH() { return invoke<Hash>(0xFA6E70); }
static void UGC_CLEAR_QUERY_RESULTS() { invoke<Void>(0xFA6EA0); }
static const char* UGC_GET_CONTENT_USER_ID(int p0) { return invoke<const char*>(0xFA6EB0, p0); }
static BOOL UGC_GET_CONTENT_CREATOR_GAMER_HANDLE(int p0, Any* p1) { return invoke<BOOL>(0xFA6EE0, p0, p1); }
static BOOL UGC_GET_CONTENT_CREATED_BY_LOCAL_PLAYER(Any p0) { return invoke<BOOL>(0xFA6F70, p0); }
static const char* UGC_GET_CONTENT_USER_NAME(Any p0) { return invoke<const char*>(0xFA6FA0, p0); }
static BOOL UGC_GET_CONTENT_IS_USING_SC_NICKNAME(Any p0) { return invoke<BOOL>(0xFA6FD0, p0); }
static int UGC_GET_CONTENT_CATEGORY(int p0) { return invoke<int>(0xFA7000, p0); }
static const char* UGC_GET_CONTENT_ID(int p0) { return invoke<const char*>(0xFA7030, p0); }
static const char* UGC_GET_ROOT_CONTENT_ID(int p0) { return invoke<const char*>(0xFA7060, p0); }
static const char* UGC_GET_CONTENT_NAME(Any p0) { return invoke<const char*>(0xFA7090, p0); }
static int UGC_GET_CONTENT_DESCRIPTION_HASH(Any p0) { return invoke<int>(0xFA70C0, p0); }
static const char* UGC_GET_CONTENT_PATH(int p0, int p1) { return invoke<const char*>(0xFA70F0, p0, p1); }
static void UGC_GET_CONTENT_UPDATED_DATE(Any p0, Any* p1) { invoke<Void>(0xFA7130, p0, p1); }
static int UGC_GET_CONTENT_FILE_VERSION(Any p0, Any p1) { return invoke<int>(0xFA71C0, p0, p1); }
static BOOL UGC_GET_CONTENT_HAS_LO_RES_PHOTO(int p0) { return invoke<BOOL>(0xFA71F0, p0); }
static BOOL UGC_GET_CONTENT_HAS_HI_RES_PHOTO(int p0) { return invoke<BOOL>(0xFA7220, p0); }
static int UGC_GET_CONTENT_LANGUAGE(Any p0) { return invoke<int>(0xFA7250, p0); }
static BOOL UGC_GET_CONTENT_IS_PUBLISHED(Any p0) { return invoke<BOOL>(0xFA7280, p0); }
static BOOL UGC_GET_CONTENT_IS_VERIFIED(Any p0) { return invoke<BOOL>(0xFA72B0, p0); }
static float UGC_GET_CONTENT_RATING(Any p0, Any p1) { return invoke<float>(0xFA72E0, p0, p1); }
static int UGC_GET_CONTENT_RATING_COUNT(Any p0, Any p1) { return invoke<int>(0xFA7310, p0, p1); }
static int UGC_GET_CONTENT_RATING_POSITIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xFA7340, p0, p1); }
static int UGC_GET_CONTENT_RATING_NEGATIVE_COUNT(Any p0, Any p1) { return invoke<int>(0xFA7370, p0, p1); }
static BOOL UGC_GET_CONTENT_HAS_PLAYER_RECORD(Any p0) { return invoke<BOOL>(0xFA73A0, p0); }
static BOOL UGC_GET_CONTENT_HAS_PLAYER_BOOKMARKED(Any p0) { return invoke<BOOL>(0xFA73D0, p0); }
static int UGC_REQUEST_CONTENT_DATA_FROM_INDEX(int p0, int p1) { return invoke<int>(0xFA7400, p0, p1); }
static int UGC_REQUEST_CONTENT_DATA_FROM_PARAMS(const char* contentTypeName, const char* contentId, int p2, int p3, int p4) { return invoke<int>(0xFA7440, contentTypeName, contentId, p2, p3, p4); }
static int UGC_REQUEST_CACHED_DESCRIPTION(int p0) { return invoke<int>(0xFA74C0, p0); }
static BOOL UGC_IS_DESCRIPTION_REQUEST_IN_PROGRESS(Any p0) { return invoke<BOOL>(0xFA74F0, p0); }
static BOOL UGC_HAS_DESCRIPTION_REQUEST_FINISHED(Any p0) { return invoke<BOOL>(0xFA7520, p0); }
static BOOL UGC_DID_DESCRIPTION_REQUEST_SUCCEED(Any p0) { return invoke<BOOL>(0xFA7550, p0); }
static const char* UGC_GET_CACHED_DESCRIPTION(Any p0, Any p1) { return invoke<const char*>(0xFA7580, p0, p1); }
static BOOL UGC_RELEASE_CACHED_DESCRIPTION(Any p0) { return invoke<BOOL>(0xFA7600, p0); }
static void UGC_RELEASE_ALL_CACHED_DESCRIPTIONS() { invoke<Void>(0xFA7630); }
static BOOL UGC_PUBLISH(const char* contentId, const char* baseContentId, const char* contentTypeName) { return invoke<BOOL>(0xFA7640, contentId, baseContentId, contentTypeName); }
static BOOL UGC_SET_BOOKMARKED(const char* contentId, BOOL bookmarked, const char* contentTypeName) { return invoke<BOOL>(0xFA76B0, contentId, bookmarked, contentTypeName); }
static BOOL UGC_SET_DELETED(Any* p0, BOOL p1, const char* p2) { return invoke<BOOL>(0xFA7710, p0, p1, p2); }
static BOOL UGC_IS_MODIFYING() { return invoke<BOOL>(0xFA7770); }
static BOOL UGC_HAS_MODIFY_FINISHED() { return invoke<BOOL>(0xFA77A0); }
static BOOL UGC_DID_MODIFY_SUCCEED() { return invoke<BOOL>(0xFA77D0); }
static int UGC_GET_MODIFY_RESULT() { return invoke<int>(0xFA7800); }
static void UGC_CLEAR_MODIFY_RESULT() { invoke<Void>(0xFA7830); }
static BOOL UGC_GET_CREATORS_BY_USER_ID(Any* p0, Any* p1) { return invoke<BOOL>(0xFA7840, p0, p1); }
static BOOL UGC_HAS_QUERY_CREATORS_FINISHED() { return invoke<BOOL>(0xFA78F0); }
static BOOL UGC_DID_QUERY_CREATORS_SUCCEED() { return invoke<BOOL>(0xFA7920); }
static int UGC_GET_CREATOR_NUM() { return invoke<int>(0xFA7950); }
static BOOL UGC_LOAD_OFFLINE_QUERY(Any p0) { return invoke<BOOL>(0xFA7980, p0); }
static void UGC_CLEAR_OFFLINE_QUERY() { invoke<Void>(0xFA79B0); }
static void UGC_SET_QUERY_DATA_FROM_OFFLINE(BOOL p0) { invoke<Void>(0xFA79C0, p0); }
static void UGC_SET_USING_OFFLINE_CONTENT(BOOL p0) { invoke<Void>(0xFA79E0, p0); }
static BOOL UGC_IS_LANGUAGE_SUPPORTED(Any p0) { return invoke<BOOL>(0xFA7A00, p0); }
static BOOL FACEBOOK_POST_COMPLETED_HEIST(const char* heistName, int cashEarned, int xpEarned) { return invoke<BOOL>(0xFA7A30, heistName, cashEarned, xpEarned); }
static BOOL FACEBOOK_POST_CREATE_CHARACTER() { return invoke<BOOL>(0xFA7A40); }
static BOOL FACEBOOK_POST_COMPLETED_MILESTONE(int milestoneId) { return invoke<BOOL>(0xFA7A50, milestoneId); }
static BOOL FACEBOOK_HAS_POST_COMPLETED() { return invoke<BOOL>(0xFA7A60); }
static BOOL FACEBOOK_DID_POST_SUCCEED() { return invoke<BOOL>(0xFA7A70); }
static BOOL FACEBOOK_CAN_POST_TO_FACEBOOK() { return invoke<BOOL>(0xFA7A80); }
static int TEXTURE_DOWNLOAD_REQUEST(Any* gamerHandle, const char* filePath, const char* name, BOOL p3) { return invoke<int>(0xFA7A90, gamerHandle, filePath, name, p3); }
static int TITLE_TEXTURE_DOWNLOAD_REQUEST(const char* filePath, const char* name, BOOL p2) { return invoke<int>(0xFA7BF0, filePath, name, p2); }
static int UGC_TEXTURE_DOWNLOAD_REQUEST(const char* p0, int p1, int p2, int p3, const char* p4, BOOL p5) { return invoke<int>(0xFA7CB0, p0, p1, p2, p3, p4, p5); }
static void TEXTURE_DOWNLOAD_RELEASE(int p0) { invoke<Void>(0xFA7D80, p0); }
static BOOL TEXTURE_DOWNLOAD_HAS_FAILED(int p0) { return invoke<BOOL>(0xFA7DA0, p0); }
static const char* TEXTURE_DOWNLOAD_GET_NAME(int p0) { return invoke<const char*>(0xFA7DD0, p0); }
static int GET_STATUS_OF_TEXTURE_DOWNLOAD(int p0) { return invoke<int>(0xFA7E00, p0); }
static BOOL NETWORK_CHECK_ROS_LINK_WENTDOWN_NOT_NET() { return invoke<BOOL>(0xFA7E50); }
static BOOL NETWORK_SHOULD_SHOW_STRICT_NAT_WARNING() { return invoke<BOOL>(0xFA7EC0); }
static BOOL NETWORK_IS_CABLE_CONNECTED() { return invoke<BOOL>(0xFA7ED0); }
static BOOL NETWORK_HAVE_SCS_PRIVATE_MSG_PRIV() { return invoke<BOOL>(0xFA7EF0); }
static BOOL NETWORK_HAVE_ROS_SOCIAL_CLUB_PRIV() { return invoke<BOOL>(0xFA7F50); }
static BOOL NETWORK_HAVE_ROS_BANNED_PRIV() { return invoke<BOOL>(0xFA7FB0); }
static BOOL NETWORK_HAVE_ROS_CREATE_TICKET_PRIV() { return invoke<BOOL>(0xFA7FF0); }
static BOOL NETWORK_HAVE_ROS_MULTIPLAYER_PRIV() { return invoke<BOOL>(0xFA8050); }
static BOOL NETWORK_HAVE_ROS_LEADERBOARD_WRITE_PRIV() { return invoke<BOOL>(0xFA80B0); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE(int index) { return invoke<BOOL>(0xFA8110, index); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_END_DATE(int privilege, int* banType, Any* timeData) { return invoke<BOOL>(0xFA8190, privilege, banType, timeData); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_PLAYED_LAST_GEN() { return invoke<BOOL>(0xFA81C0); }
static BOOL NETWORK_HAS_ROS_PRIVILEGE_SPECIAL_EDITION_CONTENT() { return invoke<BOOL>(0xFA8220); }
static int NETWORK_START_COMMUNICATION_PERMISSIONS_CHECK(Any p0) { return invoke<int>(0xFA8280, p0); }
static int NETWORK_START_USER_CONTENT_PERMISSIONS_CHECK(Any* netHandle) { return invoke<int>(0xFA8290, netHandle); }
static void NETWORK_SKIP_RADIO_RESET_NEXT_CLOSE() { invoke<Void>(0xFA82A0); }
static void NETWORK_SKIP_RADIO_RESET_NEXT_OPEN() { invoke<Void>(0xFA82B0); }
static BOOL NETWORK_SKIP_RADIO_WARNING() { return invoke<BOOL>(0xFA82C0); }
static void NETWORK_FORCE_LOCAL_PLAYER_SCAR_SYNC() { invoke<Void>(0xFA82D0); }
static void NETWORK_DISABLE_LEAVE_REMOTE_PED_BEHIND(BOOL toggle) { invoke<Void>(0xFA82F0, toggle); }
static void NETWORK_ALLOW_REMOTE_ATTACHMENT_MODIFICATION(Entity entity, BOOL toggle) { invoke<Void>(0xFA8340, entity, toggle); }
static void NETWORK_SHOW_CHAT_RESTRICTION_MSC(Player player) { invoke<Void>(0xFA8390, player); }
static void NETWORK_SHOW_PSN_UGC_RESTRICTION() { invoke<Void>(0xFA83D0); }
static BOOL NETWORK_IS_TITLE_UPDATE_REQUIRED() { return invoke<BOOL>(0xFA8410); }
static void NETWORK_QUIT_MP_TO_DESKTOP() { invoke<Void>(0xFA8470); }
static BOOL NETWORK_IS_CONNECTED_VIA_RELAY(Player player) { return invoke<BOOL>(0xFA8480, player); }
static float NETWORK_GET_AVERAGE_LATENCY(Player player) { return invoke<float>(0xFA84E0, player); }
static float NETWORK_GET_AVERAGE_PING(Player player) { return invoke<float>(0xFA8530, player); }
static float NETWORK_GET_AVERAGE_PACKET_LOSS(Player player) { return invoke<float>(0xFA8580, player); }
static int NETWORK_GET_NUM_UNACKED_RELIABLES(Player player) { return invoke<int>(0xFA85D0, player); }
static int NETWORK_GET_UNRELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0xFA8630, player); }
static int NETWORK_GET_HIGHEST_RELIABLE_RESEND_COUNT(Player player) { return invoke<int>(0xFA8690, player); }
static void NETWORK_REPORT_CODE_TAMPER() { invoke<Void>(0xFA86F0); }
static Vector3 NETWORK_GET_LAST_ENTITY_POS_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<Vector3>(0xFA8700, entity); }
static Vector3 NETWORK_GET_LAST_PLAYER_POS_RECEIVED_OVER_NETWORK(Player player) { return invoke<Vector3>(0xFA8800, player); }
static Vector3 NETWORK_GET_LAST_VEL_RECEIVED_OVER_NETWORK(Entity entity) { return invoke<Vector3>(0xFA88D0, entity); }
static Vector3 NETWORK_GET_PREDICTED_VELOCITY(Entity entity) { return invoke<Vector3>(0xFA8990, entity); }
static void NETWORK_DUMP_NET_IF_CONFIG() { invoke<Void>(0xFA8A60); }
static void NETWORK_GET_SIGNALLING_INFO(Any* p0) { invoke<Void>(0xFA8A70, p0); }
static void NETWORK_GET_NET_STATISTICS_INFO(Any* p0) { invoke<Void>(0xFA8A80, p0); }
static int NETWORK_GET_PLAYER_ACCOUNT_ID(Player player) { return invoke<int>(0xFA8A90, player); }
static void NETWORK_UGC_NAV(Any p0, Any p1) { invoke<Void>(0xFA8AD0, p0, p1); }
static Object CREATE_OBJECT(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xFB2460, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); }
static Object CREATE_OBJECT_NO_OFFSET(Hash modelHash, float x, float y, float z, BOOL isNetwork, BOOL bScriptHostObj, BOOL dynamic) { return invoke<Object>(0xFB24F0, modelHash, x, y, z, isNetwork, bScriptHostObj, dynamic); }
static void DELETE_OBJECT(Object* object) { invoke<Void>(0xFB2580, object); }
static BOOL PLACE_OBJECT_ON_GROUND_PROPERLY(Object object) { return invoke<BOOL>(0xFB2590, object); }
static BOOL PLACE_OBJECT_ON_GROUND_OR_OBJECT_PROPERLY(Object object) { return invoke<BOOL>(0xFB2630, object); }
static BOOL ROTATE_OBJECT(Object object, float p1, float p2, BOOL p3) { return invoke<BOOL>(0xFB26D0, object, p1, p2, p3); }
static BOOL SLIDE_OBJECT(Object object, float toX, float toY, float toZ, float speedX, float speedY, float speedZ, BOOL collision) { return invoke<BOOL>(0xFB2710, object, toX, toY, toZ, speedX, speedY, speedZ, collision); }
static void SET_OBJECT_TARGETTABLE(Object object, BOOL targettable) { invoke<Void>(0xFB2750, object, targettable); }
static void SET_OBJECT_FORCE_VEHICLES_TO_AVOID(Object object, BOOL toggle) { invoke<Void>(0xFB27E0, object, toggle); }
static Object GET_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, BOOL isMission, BOOL p6, BOOL p7) { return invoke<Object>(0xFB2840, x, y, z, radius, modelHash, isMission, p6, p7); }
static BOOL HAS_OBJECT_BEEN_BROKEN(Object object, Any p1) { return invoke<BOOL>(0xFB2890, object, p1); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_BROKEN(float p0, float p1, float p2, float p3, Hash modelHash, Any p5) { return invoke<BOOL>(0xFB2930, p0, p1, p2, p3, modelHash, p5); }
static BOOL HAS_CLOSEST_OBJECT_OF_TYPE_BEEN_COMPLETELY_DESTROYED(float x, float y, float z, float radius, Hash modelHash, BOOL p5) { return invoke<BOOL>(0xFB2960, x, y, z, radius, modelHash, p5); }
static BOOL GET_HAS_OBJECT_BEEN_COMPLETELY_DESTROYED(Any p0) { return invoke<BOOL>(0xFB2990, p0); }
static Vector3 GET_OFFSET_FROM_COORD_AND_HEADING_IN_WORLD_COORDS(float xPos, float yPos, float zPos, float heading, float xOffset, float yOffset, float zOffset) { return invoke<Vector3>(0xFB2A00, xPos, yPos, zPos, heading, xOffset, yOffset, zOffset); }
static BOOL GET_COORDS_AND_ROTATION_OF_CLOSEST_OBJECT_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, Vector3* outPosition, Vector3* outRotation, int rotationOrder) { return invoke<BOOL>(0xFB2AE0, x, y, z, radius, modelHash, outPosition, outRotation, rotationOrder); }
static void SET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL locked, float heading, BOOL p6) { invoke<Void>(0xFB2B90, type, x, y, z, locked, heading, p6); }
static void GET_STATE_OF_CLOSEST_DOOR_OF_TYPE(Hash type, float x, float y, float z, BOOL* locked, float* heading) { invoke<Void>(0xFB2C90, type, x, y, z, locked, heading); }
static void SET_LOCKED_UNSTREAMED_IN_DOOR_OF_TYPE(Hash modelHash, float x, float y, float z, BOOL locked, float xRotMult, float yRotMult, float zRotMult) { invoke<Void>(0xFB2CB0, modelHash, x, y, z, locked, xRotMult, yRotMult, zRotMult); }
static void PLAY_OBJECT_AUTO_START_ANIM(Any p0) { invoke<Void>(0xFB2DD0, p0); }
static void ADD_DOOR_TO_SYSTEM(Hash doorHash, Hash modelHash, float x, float y, float z, BOOL p5, BOOL scriptDoor, BOOL isLocal) { invoke<Void>(0xFB2E20, doorHash, modelHash, x, y, z, p5, scriptDoor, isLocal); }
static void REMOVE_DOOR_FROM_SYSTEM(Hash doorHash, Any p1) { invoke<Void>(0xFB2E60, doorHash, p1); }
static void DOOR_SYSTEM_SET_DOOR_STATE(Hash doorHash, int state, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xFB2E80, doorHash, state, requestDoor, forceUpdate); }
static int DOOR_SYSTEM_GET_DOOR_STATE(Hash doorHash) { return invoke<int>(0xFB2EB0, doorHash); }
static int DOOR_SYSTEM_GET_DOOR_PENDING_STATE(Hash doorHash) { return invoke<int>(0xFB2EE0, doorHash); }
static void DOOR_SYSTEM_SET_AUTOMATIC_RATE(Hash doorHash, float rate, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xFB2F10, doorHash, rate, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_AUTOMATIC_DISTANCE(Hash doorHash, float distance, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xFB2FB0, doorHash, distance, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_OPEN_RATIO(Hash doorHash, float ajar, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xFB3050, doorHash, ajar, requestDoor, forceUpdate); }
static float DOOR_SYSTEM_GET_AUTOMATIC_DISTANCE(Hash doorHash) { return invoke<float>(0xFB30F0, doorHash); }
static float DOOR_SYSTEM_GET_OPEN_RATIO(Hash doorHash) { return invoke<float>(0xFB3140, doorHash); }
static void DOOR_SYSTEM_SET_SPRING_REMOVED(Hash doorHash, BOOL removed, BOOL requestDoor, BOOL forceUpdate) { invoke<Void>(0xFB3190, doorHash, removed, requestDoor, forceUpdate); }
static void DOOR_SYSTEM_SET_HOLD_OPEN(Hash doorHash, BOOL toggle) { invoke<Void>(0xFB3240, doorHash, toggle); }
static void DOOR_SYSTEM_SET_DOOR_OPEN_FOR_RACES(Hash doorHash, BOOL p1) { invoke<Void>(0xFB32A0, doorHash, p1); }
static BOOL IS_DOOR_REGISTERED_WITH_SYSTEM(Hash doorHash) { return invoke<BOOL>(0xFB3340, doorHash); }
static BOOL IS_DOOR_CLOSED(Hash doorHash) { return invoke<BOOL>(0xFB3370, doorHash); }
static void OPEN_ALL_BARRIERS_FOR_RACE(BOOL p0) { invoke<Void>(0xFB33E0, p0); }
static void CLOSE_ALL_BARRIERS_FOR_RACE() { invoke<Void>(0xFB3400); }
static BOOL DOOR_SYSTEM_GET_IS_PHYSICS_LOADED(Any p0) { return invoke<BOOL>(0xFB3410, p0); }
static BOOL DOOR_SYSTEM_FIND_EXISTING_DOOR(float x, float y, float z, Hash modelHash, Hash* outDoorHash) { return invoke<BOOL>(0xFB3450, x, y, z, modelHash, outDoorHash); }
static BOOL IS_GARAGE_EMPTY(Hash garageHash, BOOL p1, int p2) { return invoke<BOOL>(0xFB34E0, garageHash, p1, p2); }
static BOOL IS_PLAYER_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Player player, float p2, int p3) { return invoke<BOOL>(0xFB3570, garageHash, player, p2, p3); }
static BOOL IS_PLAYER_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Player player, int p2) { return invoke<BOOL>(0xFB3610, garageHash, player, p2); }
static BOOL ARE_ENTITIES_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xFB3670, garageHash, p1, p2, p3, p4); }
static BOOL IS_ANY_ENTITY_ENTIRELY_INSIDE_GARAGE(Hash garageHash, BOOL p1, BOOL p2, BOOL p3, Any p4) { return invoke<BOOL>(0xFB36E0, garageHash, p1, p2, p3, p4); }
static BOOL IS_OBJECT_ENTIRELY_INSIDE_GARAGE(Hash garageHash, Entity entity, float p2, int p3) { return invoke<BOOL>(0xFB3750, garageHash, entity, p2, p3); }
static BOOL IS_OBJECT_PARTIALLY_INSIDE_GARAGE(Hash garageHash, Entity entity, int p2) { return invoke<BOOL>(0xFB3810, garageHash, entity, p2); }
static void CLEAR_GARAGE(Hash garageHash, BOOL isNetwork) { invoke<Void>(0xFB3890, garageHash, isNetwork); }
static void CLEAR_OBJECTS_INSIDE_GARAGE(Hash garageHash, BOOL vehicles, BOOL peds, BOOL objects, BOOL isNetwork) { invoke<Void>(0xFB38B0, garageHash, vehicles, peds, objects, isNetwork); }
static void DISABLE_TIDYING_UP_IN_GARAGE(int id, BOOL toggle) { invoke<Void>(0xFB38F0, id, toggle); }
static void ENABLE_SAVING_IN_GARAGE(Hash garageHash, BOOL toggle) { invoke<Void>(0xFB3950, garageHash, toggle); }
static void CLOSE_SAFEHOUSE_GARAGES() { invoke<Void>(0xFB39B0); }
static BOOL DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(float x, float y, float z, float radius, Hash hash, BOOL p5) { return invoke<BOOL>(0xFB39C0, x, y, z, radius, hash, p5); }
static BOOL IS_POINT_IN_ANGLED_AREA(float xPos, float yPos, float zPos, float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL debug, BOOL includeZ) { return invoke<BOOL>(0xFB3A30, xPos, yPos, zPos, x1, y1, z1, x2, y2, z2, width, debug, includeZ); }
static void SET_OBJECT_ALLOW_LOW_LOD_BUOYANCY(Object object, BOOL toggle) { invoke<Void>(0xFB3B10, object, toggle); }
static void SET_OBJECT_PHYSICS_PARAMS(Object object, float weight, float p2, float p3, float p4, float p5, float gravity, float p7, float p8, float p9, float p10, float buoyancy) { invoke<Void>(0xFB3B70, object, weight, p2, p3, p4, p5, gravity, p7, p8, p9, p10, buoyancy); }
static float GET_OBJECT_FRAGMENT_DAMAGE_HEALTH(Any p0, BOOL p1) { return invoke<float>(0xFB3BA0, p0, p1); }
static void SET_ACTIVATE_OBJECT_PHYSICS_AS_SOON_AS_IT_IS_UNFROZEN(Object object, BOOL toggle) { invoke<Void>(0xFB3C10, object, toggle); }
static BOOL IS_ANY_OBJECT_NEAR_POINT(float x, float y, float z, float range, BOOL p4) { return invoke<BOOL>(0xFB3C70, x, y, z, range, p4); }
static BOOL IS_OBJECT_NEAR_POINT(Hash objectHash, float x, float y, float z, float range) { return invoke<BOOL>(0xFB3D70, objectHash, x, y, z, range); }
static void REMOVE_OBJECT_HIGH_DETAIL_MODEL(Object object) { invoke<Void>(0xFB3DA0, object); }
static void BREAK_OBJECT_FRAGMENT_CHILD(Object p0, Any p1, BOOL p2) { invoke<Void>(0xFB3DD0, p0, p1, p2); }
static void DAMAGE_OBJECT_FRAGMENT_CHILD(Any p0, Any p1, Any p2) { invoke<Void>(0xFB3DF0, p0, p1, p2); }
static void FIX_OBJECT_FRAGMENT(Object object) { invoke<Void>(0xFB3E10, object); }
static void TRACK_OBJECT_VISIBILITY(Object object) { invoke<Void>(0xFB3E90, object); }
static BOOL IS_OBJECT_VISIBLE(Object object) { return invoke<BOOL>(0xFB3ED0, object); }
static void SET_OBJECT_IS_SPECIAL_GOLFBALL(Object object, BOOL toggle) { invoke<Void>(0xFB3F40, object, toggle); }
static void SET_OBJECT_TAKES_DAMAGE_FROM_COLLIDING_WITH_BUILDINGS(Any p0, BOOL p1) { invoke<Void>(0xFB3FA0, p0, p1); }
static void ALLOW_DAMAGE_EVENTS_FOR_NON_NETWORKED_OBJECTS(BOOL value) { invoke<Void>(0xFB4000, value); }
static void SET_CUTSCENES_WEAPON_FLASHLIGHT_ON_THIS_FRAME(Object object, BOOL toggle) { invoke<Void>(0xFB4020, object, toggle); }
static Object GET_RAYFIRE_MAP_OBJECT(float x, float y, float z, float radius, const char* name) { return invoke<Object>(0xFB4090, x, y, z, radius, name); }
static void SET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object, int state) { invoke<Void>(0xFB41A0, object, state); }
static int GET_STATE_OF_RAYFIRE_MAP_OBJECT(Object object) { return invoke<int>(0xFB41B0, object); }
static BOOL DOES_RAYFIRE_MAP_OBJECT_EXIST(Object object) { return invoke<BOOL>(0xFB41F0, object); }
static float GET_RAYFIRE_MAP_OBJECT_ANIM_PHASE(Object object) { return invoke<float>(0xFB4230, object); }
static Pickup CREATE_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int p4, int value, BOOL p6, Hash modelHash) { return invoke<Pickup>(0xFB4260, pickupHash, posX, posY, posZ, p4, value, p6, modelHash); }
static Pickup CREATE_PICKUP_ROTATE(Hash pickupHash, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, int flag, int amount, Any p9, BOOL p10, Hash modelHash) { return invoke<Pickup>(0xFB42A0, pickupHash, posX, posY, posZ, rotX, rotY, rotZ, flag, amount, p9, p10, modelHash); }
static void FORCE_PICKUP_ROTATE_FACE_UP() { invoke<Void>(0xFB42F0); }
static void SET_CUSTOM_PICKUP_WEAPON_HASH(Hash pickupHash, Pickup pickup) { invoke<Void>(0xFB4300, pickupHash, pickup); }
static Object CREATE_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xFB4340, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); }
static Object CREATE_NON_NETWORKED_AMBIENT_PICKUP(Hash pickupHash, float posX, float posY, float posZ, int flags, int value, Hash modelHash, BOOL p7, BOOL p8) { return invoke<Object>(0xFB4390, pickupHash, posX, posY, posZ, flags, value, modelHash, p7, p8); }
static void BLOCK_PLAYERS_FOR_AMBIENT_PICKUP(Any p0, Any p1) { invoke<Void>(0xFB43F0, p0, p1); }
static Object CREATE_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xFB4440, pickupHash, x, y, z, placeOnGround, modelHash); }
static Object CREATE_NON_NETWORKED_PORTABLE_PICKUP(Hash pickupHash, float x, float y, float z, BOOL placeOnGround, Hash modelHash) { return invoke<Object>(0xFB4480, pickupHash, x, y, z, placeOnGround, modelHash); }
static void ATTACH_PORTABLE_PICKUP_TO_PED(Object pickupObject, Ped ped) { invoke<Void>(0xFB44C0, pickupObject, ped); }
static void DETACH_PORTABLE_PICKUP_FROM_PED(Object pickupObject) { invoke<Void>(0xFB44D0, pickupObject); }
static void FORCE_PORTABLE_PICKUP_LAST_ACCESSIBLE_POSITION_SETTING(Object object) { invoke<Void>(0xFB4550, object); }
static void HIDE_PORTABLE_PICKUP_WHEN_DETACHED(Object pickupObject, BOOL toggle) { invoke<Void>(0xFB45A0, pickupObject, toggle); }
static void SET_MAX_NUM_PORTABLE_PICKUPS_CARRIED_BY_PLAYER(Hash modelHash, int number) { invoke<Void>(0xFB4600, modelHash, number); }
static void SET_LOCAL_PLAYER_CAN_COLLECT_PORTABLE_PICKUPS(BOOL toggle) { invoke<Void>(0xFB46C0, toggle); }
static Vector3 GET_SAFE_PICKUP_COORDS(float x, float y, float z, float p3, float p4) { return invoke<Vector3>(0xFB4710, x, y, z, p3, p4); }
static void ADD_EXTENDED_PICKUP_PROBE_AREA(float x, float y, float z, float radius) { invoke<Void>(0xFB4820, x, y, z, radius); }
static void CLEAR_EXTENDED_PICKUP_PROBE_AREAS() { invoke<Void>(0xFB4890); }
static Vector3 GET_PICKUP_COORDS(Pickup pickup) { return invoke<Vector3>(0xFB48A0, pickup); }
static void SUPPRESS_PICKUP_SOUND_FOR_PICKUP(Any p0, Any p1) { invoke<Void>(0xFB4940, p0, p1); }
static void REMOVE_ALL_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xFB49A0, pickupHash); }
static BOOL HAS_PICKUP_BEEN_COLLECTED(Pickup pickup) { return invoke<BOOL>(0xFB49C0, pickup); }
static void REMOVE_PICKUP(Pickup pickup) { invoke<Void>(0xFB49F0, pickup); }
static void CREATE_MONEY_PICKUPS(float x, float y, float z, int value, int amount, Hash model) { invoke<Void>(0xFB4A00, x, y, z, value, amount, model); }
static BOOL DOES_PICKUP_EXIST(Pickup pickup) { return invoke<BOOL>(0xFB4A20, pickup); }
static BOOL DOES_PICKUP_OBJECT_EXIST(Object pickupObject) { return invoke<BOOL>(0xFB4A70, pickupObject); }
static Object GET_PICKUP_OBJECT(Pickup pickup) { return invoke<Object>(0xFB4AA0, pickup); }
static BOOL IS_OBJECT_A_PICKUP(Object object) { return invoke<BOOL>(0xFB4AC0, object); }
static BOOL IS_OBJECT_A_PORTABLE_PICKUP(Object object) { return invoke<BOOL>(0xFB4B20, object); }
static BOOL DOES_PICKUP_OF_TYPE_EXIST_IN_AREA(Hash pickupHash, float x, float y, float z, float radius) { return invoke<BOOL>(0xFB4B80, pickupHash, x, y, z, radius); }
static void SET_PICKUP_REGENERATION_TIME(Pickup pickup, int duration) { invoke<Void>(0xFB4CA0, pickup, duration); }
static void FORCE_PICKUP_REGENERATE(Any p0) { invoke<Void>(0xFB4CB0, p0); }
static void SET_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_OF_TYPE(Player player, Hash pickupHash, BOOL toggle) { invoke<Void>(0xFB4D20, player, pickupHash, toggle); }
static void SET_LOCAL_PLAYER_PERMITTED_TO_COLLECT_PICKUPS_WITH_MODEL(Hash modelHash, BOOL toggle) { invoke<Void>(0xFB4D90, modelHash, toggle); }
static void ALLOW_ALL_PLAYERS_TO_COLLECT_PICKUPS_OF_TYPE(Hash pickupHash) { invoke<Void>(0xFB4DD0, pickupHash); }
static void SET_TEAM_PICKUP_OBJECT(Object object, Any p1, BOOL p2) { invoke<Void>(0xFB4DF0, object, p1, p2); }
static void PREVENT_COLLECTION_OF_PORTABLE_PICKUP(Object object, BOOL p1, BOOL p2) { invoke<Void>(0xFB4E80, object, p1, p2); }
static void SET_PICKUP_OBJECT_GLOW_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB4F20, pickup, toggle); }
static void SET_PICKUP_GLOW_OFFSET(Pickup pickup, float p1) { invoke<Void>(0xFB4F80, pickup, p1); }
static void SET_PICKUP_OBJECT_GLOW_OFFSET(Pickup pickup, float p1, BOOL p2) { invoke<Void>(0xFB4FD0, pickup, p1, p2); }
static void SET_OBJECT_GLOW_IN_SAME_TEAM(Pickup pickup) { invoke<Void>(0xFB5050, pickup); }
static void SET_PICKUP_OBJECT_ARROW_MARKER(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB50A0, pickup, toggle); }
static void ALLOW_PICKUP_ARROW_MARKER_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5100, pickup, toggle); }
static int GET_DEFAULT_AMMO_FOR_WEAPON_PICKUP(Hash pickupHash) { return invoke<int>(0xFB5160, pickupHash); }
static void SET_PICKUP_GENERATION_RANGE_MULTIPLIER(float multiplier) { invoke<Void>(0xFB51F0, multiplier); }
static float GET_PICKUP_GENERATION_RANGE_MULTIPLIER() { return invoke<float>(0xFB5280); }
static void SET_ONLY_ALLOW_AMMO_COLLECTION_WHEN_LOW(BOOL p0) { invoke<Void>(0xFB52A0, p0); }
static void SET_PICKUP_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB52C0, pickup, toggle); }
static void SET_PICKUP_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5310, pickup, toggle); }
static void SET_PICKUP_HIDDEN_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5360, pickup, toggle); }
static void SET_PICKUP_OBJECT_TRANSPARENT_WHEN_UNCOLLECTABLE(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB53B0, pickup, toggle); }
static void SET_PICKUP_OBJECT_ALPHA_WHEN_TRANSPARENT(int p0) { invoke<Void>(0xFB5410, p0); }
static void SET_PORTABLE_PICKUP_PERSIST(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5430, pickup, toggle); }
static void ALLOW_PORTABLE_PICKUP_TO_MIGRATE_TO_NON_PARTICIPANTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5490, pickup, toggle); }
static void FORCE_ACTIVATE_PHYSICS_ON_UNFIXED_PICKUP(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5500, pickup, toggle); }
static void ALLOW_PICKUP_BY_NONE_PARTICIPANT(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5560, pickup, toggle); }
static void SUPPRESS_PICKUP_REWARD_TYPE(int rewardType, BOOL suppress) { invoke<Void>(0xFB55B0, rewardType, suppress); }
static void CLEAR_ALL_PICKUP_REWARD_TYPE_SUPPRESSION() { invoke<Void>(0xFB55E0); }
static void CLEAR_PICKUP_REWARD_TYPE_SUPPRESSION(int rewardType) { invoke<Void>(0xFB55F0, rewardType); }
static void RENDER_FAKE_PICKUP_GLOW(float x, float y, float z, int colorIndex) { invoke<Void>(0xFB5610, x, y, z, colorIndex); }
static void SET_PICKUP_OBJECT_COLLECTABLE_IN_VEHICLE(Pickup pickup) { invoke<Void>(0xFB5640, pickup); }
static void SET_PICKUP_TRACK_DAMAGE_EVENTS(Pickup pickup, BOOL toggle) { invoke<Void>(0xFB5680, pickup, toggle); }
static void SET_ENTITY_FLAG_SUPPRESS_SHADOW(Entity entity, BOOL toggle) { invoke<Void>(0xFB56E0, entity, toggle); }
static void SET_ENTITY_FLAG_RENDER_SMALL_SHADOW(Object object, BOOL toggle) { invoke<Void>(0xFB5730, object, toggle); }
static Hash GET_WEAPON_TYPE_FROM_PICKUP_TYPE(Hash pickupHash) { return invoke<Hash>(0xFB5780, pickupHash); }
static Hash GET_PICKUP_TYPE_FROM_WEAPON_HASH(Hash weaponHash) { return invoke<Hash>(0xFB5830, weaponHash); }
static BOOL IS_PICKUP_WEAPON_OBJECT_VALID(Object object) { return invoke<BOOL>(0xFB58A0, object); }
static int GET_OBJECT_TINT_INDEX(Object object) { return invoke<int>(0xFB58F0, object); }
static void SET_OBJECT_TINT_INDEX(Object object, int textureVariation) { invoke<Void>(0xFB5950, object, textureVariation); }
static BOOL SET_TINT_INDEX_CLOSEST_BUILDING_OF_TYPE(float x, float y, float z, float radius, Hash modelHash, int textureVariation) { return invoke<BOOL>(0xFB5960, x, y, z, radius, modelHash, textureVariation); }
static void SET_PROP_TINT_INDEX(Any p0, Any p1) { invoke<Void>(0xFB5990, p0, p1); }
static BOOL SET_PROP_LIGHT_COLOR(Object object, BOOL p1, int r, int g, int b) { return invoke<BOOL>(0xFB5A00, object, p1, r, g, b); }
static BOOL IS_PROP_LIGHT_OVERRIDEN(Object object) { return invoke<BOOL>(0xFB5A40, object); }
static void SET_OBJECT_IS_VISIBLE_IN_MIRRORS(Object object, BOOL toggle) { invoke<Void>(0xFB5A70, object, toggle); }
static void SET_OBJECT_SPEED_BOOST_AMOUNT(Object object, Any p1) { invoke<Void>(0xFB5AD0, object, p1); }
static void SET_OBJECT_SPEED_BOOST_DURATION(Object object, float duration) { invoke<Void>(0xFB5B20, object, duration); }
static Hash CONVERT_OLD_PICKUP_TYPE_TO_NEW(Hash pickupHash) { return invoke<Hash>(0xFB5B90, pickupHash); }
static void SET_FORCE_OBJECT_THIS_FRAME(float x, float y, float z, float p3) { invoke<Void>(0xFB5BB0, x, y, z, p3); }
static void ONLY_CLEAN_UP_OBJECT_WHEN_OUT_OF_RANGE(Object object) { invoke<Void>(0xFB5C10, object); }
static void SET_DISABLE_COLLISIONS_BETWEEN_CARS_AND_CAR_PARACHUTE(Any p0) { invoke<Void>(0xFB5C50, p0); }
static void SET_PROJECTILES_SHOULD_EXPLODE_ON_CONTACT(Entity entity, Any p1) { invoke<Void>(0xFB5C70, entity, p1); }
static void SET_DRIVE_ARTICULATED_JOINT(Object object, BOOL toggle, int p2) { invoke<Void>(0xFB5CD0, object, toggle, p2); }
static void SET_DRIVE_ARTICULATED_JOINT_WITH_INFLICTOR(Object object, BOOL toggle, int p2, Ped ped) { invoke<Void>(0xFB5D40, object, toggle, p2, ped); }
static void SET_OBJECT_IS_A_PRESSURE_PLATE(Object object, BOOL toggle) { invoke<Void>(0xFB5D60, object, toggle); }
static void SET_WEAPON_IMPACTS_APPLY_GREATER_FORCE(Object object, BOOL p1) { invoke<Void>(0xFB5DC0, object, p1); }
static BOOL GET_IS_ARTICULATED_JOINT_AT_MIN_ANGLE(Object object, Any p1) { return invoke<BOOL>(0xFB5E20, object, p1); }
static BOOL GET_IS_ARTICULATED_JOINT_AT_MAX_ANGLE(Any p0, Any p1) { return invoke<BOOL>(0xFB5E80, p0, p1); }
static void SET_IS_OBJECT_ARTICULATED(Object object, BOOL toggle) { invoke<Void>(0xFB5EE0, object, toggle); }
static void SET_IS_OBJECT_BALL(Object object, BOOL toggle) { invoke<Void>(0xFB5F40, object, toggle); }
static BOOL IS_CONTROL_ENABLED(int control, int action) { return invoke<BOOL>(0xFB8A80, control, action); }
static BOOL IS_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xFB8AE0, control, action); }
static BOOL IS_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xFB8B50, control, action); }
static BOOL IS_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xFB8BC0, control, action); }
static BOOL IS_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xFB8C30, control, action); }
static int GET_CONTROL_VALUE(int control, int action) { return invoke<int>(0xFB8CA0, control, action); }
static float GET_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xFB8D20, control, action); }
static void SET_USE_ADJUSTED_MOUSE_COORDS(BOOL toggle) { invoke<Void>(0xFB8D80, toggle); }
static float GET_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xFB8DA0, control, action); }
static BOOL SET_CONTROL_VALUE_NEXT_FRAME(int control, int action, float value) { return invoke<BOOL>(0xFB8E00, control, action, value); }
static BOOL IS_DISABLED_CONTROL_PRESSED(int control, int action) { return invoke<BOOL>(0xFB8E80, control, action); }
static BOOL IS_DISABLED_CONTROL_RELEASED(int control, int action) { return invoke<BOOL>(0xFB8F20, control, action); }
static BOOL IS_DISABLED_CONTROL_JUST_PRESSED(int control, int action) { return invoke<BOOL>(0xFB8FC0, control, action); }
static BOOL IS_DISABLED_CONTROL_JUST_RELEASED(int control, int action) { return invoke<BOOL>(0xFB9060, control, action); }
static float GET_DISABLED_CONTROL_NORMAL(int control, int action) { return invoke<float>(0xFB9100, control, action); }
static float GET_DISABLED_CONTROL_UNBOUND_NORMAL(int control, int action) { return invoke<float>(0xFB91A0, control, action); }
static int GET_CONTROL_HOW_LONG_AGO(int control) { return invoke<int>(0xFB9240, control); }
static BOOL IS_USING_KEYBOARD_AND_MOUSE(int control) { return invoke<BOOL>(0xFB9290, control); }
static BOOL IS_USING_CURSOR(int control) { return invoke<BOOL>(0xFB92A0, control); }
static BOOL SET_CURSOR_POSITION(float x, float y) { return invoke<BOOL>(0xFB92F0, x, y); }
static BOOL IS_USING_REMOTE_PLAY(int control) { return invoke<BOOL>(0xFB9300, control); }
static BOOL HAVE_CONTROLS_CHANGED(int control) { return invoke<BOOL>(0xFB9350, control); }
static const char* GET_CONTROL_INSTRUCTIONAL_BUTTONS_STRING(int control, int action, BOOL allowXOSwap) { return invoke<const char*>(0xFB9380, control, action, allowXOSwap); }
static const char* GET_CONTROL_GROUP_INSTRUCTIONAL_BUTTONS_STRING(int control, int controlGroup, BOOL allowXOSwap) { return invoke<const char*>(0xFB9430, control, controlGroup, allowXOSwap); }
static void SET_CONTROL_LIGHT_EFFECT_COLOR(int control, int red, int green, int blue) { invoke<Void>(0xFB94E0, control, red, green, blue); }
static void CLEAR_CONTROL_LIGHT_EFFECT(int control) { invoke<Void>(0xFB9580, control); }
static void SET_CONTROL_SHAKE(int control, int duration, int frequency) { invoke<Void>(0xFB95C0, control, duration, frequency); }
static void SET_CONTROL_TRIGGER_SHAKE(int control, int leftDuration, int leftFrequency, int rightDuration, int rightFrequency) { invoke<Void>(0xFB9630, control, leftDuration, leftFrequency, rightDuration, rightFrequency); }
static void STOP_CONTROL_SHAKE(int control) { invoke<Void>(0xFB9640, control); }
static void SET_CONTROL_SHAKE_SUPPRESSED_ID(int control, int uniqueId) { invoke<Void>(0xFB9680, control, uniqueId); }
static void CLEAR_CONTROL_SHAKE_SUPPRESSED_ID(int control) { invoke<Void>(0xFB96C0, control); }
static BOOL IS_LOOK_INVERTED() { return invoke<BOOL>(0xFB9700); }
static BOOL IS_MOUSE_LOOK_INVERTED() { return invoke<BOOL>(0xFB9720); }
static int GET_LOCAL_PLAYER_AIM_STATE() { return invoke<int>(0xFB9730); }
static int GET_LOCAL_PLAYER_GAMEPAD_AIM_STATE() { return invoke<int>(0xFB9740); }
static BOOL GET_IS_USING_ALTERNATE_HANDBRAKE() { return invoke<BOOL>(0xFB9750); }
static BOOL GET_IS_USING_ALTERNATE_DRIVEBY() { return invoke<BOOL>(0xFB9770); }
static BOOL GET_ALLOW_MOVEMENT_WHILE_ZOOMED() { return invoke<BOOL>(0xFB9790); }
static void SET_PLAYERPAD_SHAKES_WHEN_CONTROLLER_DISABLED(BOOL toggle) { invoke<Void>(0xFB97B0, toggle); }
static void SET_INPUT_EXCLUSIVE(int control, int action) { invoke<Void>(0xFB97D0, control, action); }
static void DISABLE_CONTROL_ACTION(int control, int action, BOOL disableRelatedActions) { invoke<Void>(0xFB9820, control, action, disableRelatedActions); }
static void ENABLE_CONTROL_ACTION(int control, int action, BOOL enableRelatedActions) { invoke<Void>(0xFB98B0, control, action, enableRelatedActions); }
static void DISABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xFB9940, control); }
static void ENABLE_ALL_CONTROL_ACTIONS(int control) { invoke<Void>(0xFB99A0, control); }
static BOOL INIT_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xFB99D0, schemeName); }
static BOOL SWITCH_PC_SCRIPTED_CONTROLS(const char* schemeName) { return invoke<BOOL>(0xFB99E0, schemeName); }
static void SHUTDOWN_PC_SCRIPTED_CONTROLS() { invoke<Void>(0xFB99F0); }
static void ALLOW_ALTERNATIVE_SCRIPT_CONTROLS_LAYOUT(int control) { invoke<Void>(0xFB9A00, control); }
static void SET_ROADS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL nodeEnabled, BOOL unknown2) { invoke<Void>(0xFBDAF0, x1, y1, z1, x2, y2, z2, nodeEnabled, unknown2); }
static void SET_ROADS_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, BOOL unknown1, BOOL unknown2, BOOL unknown3) { invoke<Void>(0xFBDB20, x1, y1, z1, x2, y2, z2, width, unknown1, unknown2, unknown3); }
static void SET_PED_PATHS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, Any p7) { invoke<Void>(0xFBDB60, x1, y1, z1, x2, y2, z2, p6, p7); }
static BOOL GET_SAFE_COORD_FOR_PED(float x, float y, float z, BOOL onGround, Vector3* outPosition, int flags) { return invoke<BOOL>(0xFBDB90, x, y, z, onGround, outPosition, flags); }
static BOOL GET_CLOSEST_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, int nodeFlags, float p5, float p6) { return invoke<BOOL>(0xFBDCE0, x, y, z, outPosition, nodeFlags, p5, p6); }
static BOOL GET_CLOSEST_MAJOR_VEHICLE_NODE(float x, float y, float z, Vector3* outPosition, float unknown1, float unknown2) { return invoke<BOOL>(0xFBDDC0, x, y, z, outPosition, unknown1, unknown2); }
static BOOL GET_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, Vector3* outPosition, float* outHeading, int nodeType, float p6, float p7) { return invoke<BOOL>(0xFBDE90, x, y, z, outPosition, outHeading, nodeType, p6, p7); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE(float x, float y, float z, int nthClosest, Vector3* outPosition, int nodeFlags, float unknown1, float unknown2) { return invoke<BOOL>(0xFBDF80, x, y, z, nthClosest, outPosition, nodeFlags, unknown1, unknown2); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID(float x, float y, float z, int nth, int nodeFlags, float p5, float p6) { return invoke<int>(0xFBE060, x, y, z, nth, nodeFlags, p5, p6); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int* outNumLanes, int nodeFlags, float unknown3, float unknown4) { return invoke<BOOL>(0xFBE100, x, y, z, nthClosest, outPosition, outHeading, outNumLanes, nodeFlags, unknown3, unknown4); }
static int GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(float x, float y, float z, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p7, float p8) { return invoke<int>(0xFBE200, x, y, z, nthClosest, outPosition, outHeading, nodeFlags, p7, p8); }
static BOOL GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(float x, float y, float z, float desiredX, float desiredY, float desiredZ, int nthClosest, Vector3* outPosition, float* outHeading, int nodeFlags, float p10, float p11) { return invoke<BOOL>(0xFBE2B0, x, y, z, desiredX, desiredY, desiredZ, nthClosest, outPosition, outHeading, nodeFlags, p10, p11); }
static BOOL GET_VEHICLE_NODE_PROPERTIES(float x, float y, float z, int* density, int* flags) { return invoke<BOOL>(0xFBE3C0, x, y, z, density, flags); }
static BOOL IS_VEHICLE_NODE_ID_VALID(int vehicleNodeId) { return invoke<BOOL>(0xFBE3F0, vehicleNodeId); }
static void GET_VEHICLE_NODE_POSITION(int nodeId, Vector3* outPosition) { invoke<Void>(0xFBE410, nodeId, outPosition); }
static BOOL GET_VEHICLE_NODE_IS_GPS_ALLOWED(int nodeID) { return invoke<BOOL>(0xFBE4F0, nodeID); }
static BOOL GET_VEHICLE_NODE_IS_SWITCHED_OFF(int nodeID) { return invoke<BOOL>(0xFBE540, nodeID); }
static BOOL GET_CLOSEST_ROAD(float x, float y, float z, float p3, int p4, Vector3* p5, Vector3* p6, Any* p7, Any* p8, float* p9, BOOL p10) { return invoke<BOOL>(0xFBE590, x, y, z, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL LOAD_ALL_PATH_NODES(BOOL set) { return invoke<BOOL>(0xFBE670, set); }
static void SET_ALLOW_STREAM_PROLOGUE_NODES(BOOL toggle) { invoke<Void>(0xFBE6E0, toggle); }
static void SET_ALLOW_STREAM_HEIST_ISLAND_NODES(int type) { invoke<Void>(0xFBE700, type); }
static BOOL ARE_NODES_LOADED_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xFBE720, x1, y1, x2, y2); }
static BOOL REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(float x1, float y1, float x2, float y2) { return invoke<BOOL>(0xFBE760, x1, y1, x2, y2); }
static void SET_ROADS_BACK_TO_ORIGINAL(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { invoke<Void>(0xFBE810, p0, p1, p2, p3, p4, p5, p6); }
static void SET_ROADS_BACK_TO_ORIGINAL_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, Any p7) { invoke<Void>(0xFBE830, x1, y1, z1, x2, y2, z2, width, p7); }
static void SET_AMBIENT_PED_RANGE_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xFBE850, multiplier); }
static void ADJUST_AMBIENT_PED_SPAWN_DENSITIES_THIS_FRAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0xFBE860, p0, p1, p2, p3, p4, p5, p6); }
static void SET_PED_PATHS_BACK_TO_ORIGINAL(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0xFBE900, x1, y1, z1, x2, y2, z2, p6); }
static BOOL GET_RANDOM_VEHICLE_NODE(float x, float y, float z, float radius, BOOL p4, BOOL p5, BOOL p6, Vector3* outPosition, int* nodeId) { return invoke<BOOL>(0xFBE9B0, x, y, z, radius, p4, p5, p6, outPosition, nodeId); }
static void GET_STREET_NAME_AT_COORD(float x, float y, float z, Hash* streetName, Hash* crossingRoad) { invoke<Void>(0xFBEAE0, x, y, z, streetName, crossingRoad); }
static int GENERATE_DIRECTIONS_TO_COORD(float x, float y, float z, BOOL p3, int* direction, float* p5, float* distToNxJunction) { return invoke<int>(0xFBEB70, x, y, z, p3, direction, p5, distToNxJunction); }
static void SET_IGNORE_NO_GPS_FLAG(BOOL toggle) { invoke<Void>(0xFBEBD0, toggle); }
static void SET_IGNORE_NO_GPS_FLAG_UNTIL_FIRST_NORMAL_NODE(BOOL toggle) { invoke<Void>(0xFBEBF0, toggle); }
static void SET_GPS_DISABLED_ZONE(float x1, float y1, float z1, float x2, float y2, float z3) { invoke<Void>(0xFBEC10, x1, y1, z1, x2, y2, z3); }
static int GET_GPS_BLIP_ROUTE_LENGTH() { return invoke<int>(0xFBECD0); }
static BOOL GET_POS_ALONG_GPS_TYPE_ROUTE(Vector3* result, BOOL p1, float p2, int p3) { return invoke<BOOL>(0xFBED00, result, p1, p2, p3); }
static BOOL GET_GPS_BLIP_ROUTE_FOUND() { return invoke<BOOL>(0xFBEDF0); }
static BOOL GET_ROAD_BOUNDARY_USING_HEADING(float x, float y, float z, float heading, Vector3* outPosition) { return invoke<BOOL>(0xFBEE20, x, y, z, heading, outPosition); }
static BOOL GET_POSITION_BY_SIDE_OF_ROAD(float x, float y, float z, int p3, Vector3* outPosition) { return invoke<BOOL>(0xFBEE90, x, y, z, p3, outPosition); }
static BOOL IS_POINT_ON_ROAD(float x, float y, float z, Vehicle vehicle) { return invoke<BOOL>(0xFBEF30, x, y, z, vehicle); }
static int GET_NEXT_GPS_DISABLED_ZONE_INDEX() { return invoke<int>(0xFBEFE0); }
static void SET_GPS_DISABLED_ZONE_AT_INDEX(float x1, float y1, float z1, float x2, float y2, float z2, int index) { invoke<Void>(0xFBF010, x1, y1, z1, x2, y2, z2, index); }
static void CLEAR_GPS_DISABLED_ZONE_AT_INDEX(int index) { invoke<Void>(0xFBF0D0, index); }
static void ADD_NAVMESH_REQUIRED_REGION(float x, float y, float radius) { invoke<Void>(0xFBF0F0, x, y, radius); }
static void REMOVE_NAVMESH_REQUIRED_REGIONS() { invoke<Void>(0xFBF140); }
static BOOL IS_NAVMESH_REQUIRED_REGION_IN_USE() { return invoke<BOOL>(0xFBF160); }
static void DISABLE_NAVMESH_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle) { invoke<Void>(0xFBF190, x1, y1, z1, x2, y2, z2, toggle); }
static BOOL ARE_ALL_NAVMESH_REGIONS_LOADED() { return invoke<BOOL>(0xFBF1B0); }
static BOOL IS_NAVMESH_LOADED_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xFBF1D0, x1, y1, z1, x2, y2, z2); }
static int GET_NUM_NAVMESHES_EXISTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0xFBF200, x1, y1, z1, x2, y2, z2); }
static int ADD_NAVMESH_BLOCKING_OBJECT(float p0, float p1, float p2, float p3, float p4, float p5, float p6, BOOL p7, Any p8) { return invoke<int>(0xFBF230, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void UPDATE_NAVMESH_BLOCKING_OBJECT(Any p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, Any p8) { invoke<Void>(0xFBF2F0, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static void REMOVE_NAVMESH_BLOCKING_OBJECT(Any p0) { invoke<Void>(0xFBF3B0, p0); }
static BOOL DOES_NAVMESH_BLOCKING_OBJECT_EXIST(Any p0) { return invoke<BOOL>(0xFBF3E0, p0); }
static float GET_APPROX_HEIGHT_FOR_POINT(float x, float y) { return invoke<float>(0xFBF410, x, y); }
static float GET_APPROX_HEIGHT_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xFBF440, x1, y1, x2, y2); }
static float GET_APPROX_FLOOR_FOR_POINT(float x, float y) { return invoke<float>(0xFBF480, x, y); }
static float GET_APPROX_FLOOR_FOR_AREA(float x1, float y1, float x2, float y2) { return invoke<float>(0xFBF4B0, x1, y1, x2, y2); }
static float CALCULATE_TRAVEL_DISTANCE_BETWEEN_POINTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<float>(0xFBF4F0, x1, y1, z1, x2, y2, z2); }
static Ped CREATE_PED(int pedType, Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xFDDD50, pedType, modelHash, x, y, z, heading, isNetwork, bScriptHostPed); }
static void DELETE_PED(Ped* ped) { invoke<Void>(0xFDDDA0, ped); }
static Ped CLONE_PED(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag) { return invoke<Ped>(0xFDDDB0, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag); }
static Ped CLONE_PED_ALT(Ped ped, BOOL isNetwork, BOOL bScriptHostPed, BOOL copyHeadBlendFlag, BOOL p4) { return invoke<Ped>(0xFDDE00, ped, isNetwork, bScriptHostPed, copyHeadBlendFlag, p4); }
static void CLONE_PED_TO_TARGET(Ped ped, Ped targetPed) { invoke<Void>(0xFDDE50, ped, targetPed); }
static void CLONE_PED_TO_TARGET_ALT(Ped ped, Ped targetPed, BOOL p2) { invoke<Void>(0xFDDF00, ped, targetPed, p2); }
static BOOL IS_PED_IN_VEHICLE(Ped ped, Vehicle vehicle, BOOL atGetIn) { return invoke<BOOL>(0xFDDFC0, ped, vehicle, atGetIn); }
static BOOL IS_PED_IN_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xFDDFF0, ped, modelHash); }
static BOOL IS_PED_IN_ANY_VEHICLE(Ped ped, BOOL atGetIn) { return invoke<BOOL>(0xFDE0D0, ped, atGetIn); }
static BOOL IS_COP_PED_IN_AREA_3D(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xFDE100, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PED_INJURED(Ped ped) { return invoke<BOOL>(0xFDE1B0, ped); }
static BOOL IS_PED_HURT(Ped ped) { return invoke<BOOL>(0xFDE210, ped); }
static BOOL IS_PED_FATALLY_INJURED(Ped ped) { return invoke<BOOL>(0xFDE270, ped); }
static BOOL IS_PED_DEAD_OR_DYING(Ped ped, BOOL p1) { return invoke<BOOL>(0xFDE2D0, ped, p1); }
static BOOL IS_CONVERSATION_PED_DEAD(Ped ped) { return invoke<BOOL>(0xFDE350, ped); }
static BOOL IS_PED_AIMING_FROM_COVER(Ped ped) { return invoke<BOOL>(0xFDE3C0, ped); }
static BOOL IS_PED_RELOADING(Ped ped) { return invoke<BOOL>(0xFDE3F0, ped); }
static BOOL IS_PED_A_PLAYER(Ped ped) { return invoke<BOOL>(0xFDE450, ped); }
static Ped CREATE_PED_INSIDE_VEHICLE(Vehicle vehicle, int pedType, Hash modelHash, int seat, BOOL isNetwork, BOOL bScriptHostPed) { return invoke<Ped>(0xFDE4B0, vehicle, pedType, modelHash, seat, isNetwork, bScriptHostPed); }
static void SET_PED_DESIRED_HEADING(Ped ped, float heading) { invoke<Void>(0xFDE4F0, ped, heading); }
static void FORCE_ALL_HEADING_VALUES_TO_ALIGN(Ped ped) { invoke<Void>(0xFDE5E0, ped); }
static BOOL IS_PED_FACING_PED(Ped ped, Ped otherPed, float angle) { return invoke<BOOL>(0xFDE5F0, ped, otherPed, angle); }
static BOOL IS_PED_IN_MELEE_COMBAT(Ped ped) { return invoke<BOOL>(0xFDE620, ped); }
static BOOL IS_PED_STOPPED(Ped ped) { return invoke<BOOL>(0xFDE690, ped); }
static BOOL IS_PED_SHOOTING_IN_AREA(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, BOOL p7, BOOL p8) { return invoke<BOOL>(0xFDE6F0, ped, x1, y1, z1, x2, y2, z2, p7, p8); }
static BOOL IS_ANY_PED_SHOOTING_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7) { return invoke<BOOL>(0xFDE730, x1, y1, z1, x2, y2, z2, p6, p7); }
static BOOL IS_PED_SHOOTING(Ped ped) { return invoke<BOOL>(0xFDE770, ped); }
static void SET_PED_ACCURACY(Ped ped, int accuracy) { invoke<Void>(0xFDE7D0, ped, accuracy); }
static int GET_PED_ACCURACY(Ped ped) { return invoke<int>(0xFDE860, ped); }
static void SET_AMBIENT_LAW_PED_ACCURACY_MODIFIER(float multiplier) { invoke<Void>(0xFDE8D0, multiplier); }
static BOOL IS_PED_MODEL(Ped ped, Hash modelHash) { return invoke<BOOL>(0xFDE900, ped, modelHash); }
static void EXPLODE_PED_HEAD(Ped ped, Hash weaponHash) { invoke<Void>(0xFDE9C0, ped, weaponHash); }
static void REMOVE_PED_ELEGANTLY(Ped* ped) { invoke<Void>(0xFDE9D0, ped); }
static void ADD_ARMOUR_TO_PED(Ped ped, int amount) { invoke<Void>(0xFDE9E0, ped, amount); }
static void SET_PED_ARMOUR(Ped ped, int amount) { invoke<Void>(0xFDEAC0, ped, amount); }
static void SET_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seatIndex) { invoke<Void>(0xFDEBA0, ped, vehicle, seatIndex); }
static void SET_PED_ALLOW_VEHICLES_OVERRIDE(Ped ped, BOOL toggle) { invoke<Void>(0xFDEBC0, ped, toggle); }
static BOOL CAN_CREATE_RANDOM_PED(BOOL p0) { return invoke<BOOL>(0xFDEC20, p0); }
static Ped CREATE_RANDOM_PED(float posX, float posY, float posZ) { return invoke<Ped>(0xFDECE0, posX, posY, posZ); }
static Ped CREATE_RANDOM_PED_AS_DRIVER(Vehicle vehicle, BOOL returnHandle) { return invoke<Ped>(0xFDED60, vehicle, returnHandle); }
static BOOL CAN_CREATE_RANDOM_DRIVER() { return invoke<BOOL>(0xFDED90); }
static BOOL CAN_CREATE_RANDOM_BIKE_RIDER() { return invoke<BOOL>(0xFDEDE0); }
static void SET_PED_MOVE_ANIMS_BLEND_OUT(Ped ped) { invoke<Void>(0xFDEE40, ped); }
static void SET_PED_CAN_BE_DRAGGED_OUT(Ped ped, BOOL toggle) { invoke<Void>(0xFDEEA0, ped, toggle); }
static void SET_PED_ALLOW_HURT_COMBAT_FOR_ALL_MISSION_PEDS(BOOL toggle) { invoke<Void>(0xFDEF00, toggle); }
static BOOL IS_PED_MALE(Ped ped) { return invoke<BOOL>(0xFDEF20, ped); }
static BOOL IS_PED_HUMAN(Ped ped) { return invoke<BOOL>(0xFDEF90, ped); }
static Vehicle GET_VEHICLE_PED_IS_IN(Ped ped, BOOL includeLastVehicle) { return invoke<Vehicle>(0xFDF010, ped, includeLastVehicle); }
static void RESET_PED_LAST_VEHICLE(Ped ped) { invoke<Void>(0xFDF040, ped); }
static void SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0xFDF0A0, multiplier); }
static void SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(float p0, float p1) { invoke<Void>(0xFDF0B0, p0, p1); }
static void SUPPRESS_AMBIENT_PED_AGGRESSIVE_CLEANUP_THIS_FRAME() { invoke<Void>(0xFDF0D0); }
static void SET_SCRIPTED_CONVERSION_COORD_THIS_FRAME(float x, float y, float z) { invoke<Void>(0xFDF0E0, x, y, z); }
static void SET_PED_NON_CREATION_AREA(float x1, float y1, float z1, float x2, float y2, float z2) { invoke<Void>(0xFDF140, x1, y1, z1, x2, y2, z2); }
static void CLEAR_PED_NON_CREATION_AREA() { invoke<Void>(0xFDF1C0); }
static void INSTANTLY_FILL_PED_POPULATION() { invoke<Void>(0xFDF1D0); }
static BOOL IS_PED_ON_MOUNT(Ped ped) { return invoke<BOOL>(0xFDF1E0, ped); }
static Ped GET_MOUNT(Ped ped) { return invoke<Ped>(0xFDF220, ped); }
static BOOL IS_PED_ON_VEHICLE(Ped ped) { return invoke<BOOL>(0xFDF260, ped); }
static BOOL IS_PED_ON_SPECIFIC_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xFDF2C0, ped, vehicle); }
static void SET_PED_MONEY(Ped ped, int amount) { invoke<Void>(0xFDF360, ped, amount); }
static int GET_PED_MONEY(Ped ped) { return invoke<int>(0xFDF3C0, ped); }
static void SET_HEALTH_SNACKS_CARRIED_BY_ALL_NEW_PEDS(float p0, Any p1) { invoke<Void>(0xFDF410, p0, p1); }
static void SET_AMBIENT_PEDS_DROP_MONEY(BOOL p0) { invoke<Void>(0xFDF450, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS_FOR_AMBIENT_PEDS_THIS_FRAME(BOOL p0) { invoke<Void>(0xFDF470, p0); }
static void SET_PED_SUFFERS_CRITICAL_HITS(Ped ped, BOOL toggle) { invoke<Void>(0xFDF490, ped, toggle); }
static void SET_PED_UPPER_BODY_DAMAGE_ONLY(Ped ped, BOOL toggle) { invoke<Void>(0xFDF4E0, ped, toggle); }
static BOOL IS_PED_SITTING_IN_VEHICLE(Ped ped, Vehicle vehicle) { return invoke<BOOL>(0xFDF540, ped, vehicle); }
static BOOL IS_PED_SITTING_IN_ANY_VEHICLE(Ped ped) { return invoke<BOOL>(0xFDF570, ped); }
static BOOL IS_PED_ON_FOOT(Ped ped) { return invoke<BOOL>(0xFDF600, ped); }
static BOOL IS_PED_ON_ANY_BIKE(Ped ped) { return invoke<BOOL>(0xFDF630, ped); }
static BOOL IS_PED_PLANTING_BOMB(Ped ped) { return invoke<BOOL>(0xFDF6A0, ped); }
static Vector3 GET_DEAD_PED_PICKUP_COORDS(Ped ped, float p1, float p2) { return invoke<Vector3>(0xFDF710, ped, p1, p2); }
static BOOL IS_PED_IN_ANY_BOAT(Ped ped) { return invoke<BOOL>(0xFDF780, ped); }
static BOOL IS_PED_IN_ANY_SUB(Ped ped) { return invoke<BOOL>(0xFDF7F0, ped); }
static BOOL IS_PED_IN_ANY_HELI(Ped ped) { return invoke<BOOL>(0xFDF860, ped); }
static BOOL IS_PED_IN_ANY_PLANE(Ped ped) { return invoke<BOOL>(0xFDF8D0, ped); }
static BOOL IS_PED_IN_FLYING_VEHICLE(Ped ped) { return invoke<BOOL>(0xFDF940, ped); }
static void SET_PED_DIES_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xFDF9C0, ped, toggle); }
static BOOL GET_PED_DIES_IN_WATER(Ped ped) { return invoke<BOOL>(0xFDFA10, ped); }
static void SET_PED_DIES_IN_SINKING_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFDFA70, ped, toggle); }
static int GET_PED_ARMOUR(Ped ped) { return invoke<int>(0xFDFAC0, ped); }
static void SET_PED_STAY_IN_VEHICLE_WHEN_JACKED(Ped ped, BOOL toggle) { invoke<Void>(0xFDFB10, ped, toggle); }
static void SET_PED_CAN_BE_SHOT_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFDFB70, ped, toggle); }
static BOOL GET_PED_LAST_DAMAGE_BONE(Ped ped, int* outBone) { return invoke<BOOL>(0xFDFBD0, ped, outBone); }
static void CLEAR_PED_LAST_DAMAGE_BONE(Ped ped) { invoke<Void>(0xFDFC40, ped); }
static void SET_AI_WEAPON_DAMAGE_MODIFIER(float value) { invoke<Void>(0xFDFC90, value); }
static void RESET_AI_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xFDFCB0); }
static void SET_AI_MELEE_WEAPON_DAMAGE_MODIFIER(float modifier) { invoke<Void>(0xFDFCD0, modifier); }
static void RESET_AI_MELEE_WEAPON_DAMAGE_MODIFIER() { invoke<Void>(0xFDFCF0); }
static void SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(Ped ped, BOOL p1) { invoke<Void>(0xFDFD10, ped, p1); }
static void SET_PED_CAN_BE_TARGETTED(Ped ped, BOOL toggle) { invoke<Void>(0xFDFD60, ped, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_TEAM(Ped ped, int team, BOOL toggle) { invoke<Void>(0xFDFDC0, ped, team, toggle); }
static void SET_PED_CAN_BE_TARGETTED_BY_PLAYER(Ped ped, Player player, BOOL toggle) { invoke<Void>(0xFDFE40, ped, player, toggle); }
static void SET_ALLOW_LOCKON_TO_PED_IF_FRIENDLY(Ped ped, BOOL toggle) { invoke<Void>(0xFDFEC0, ped, toggle); }
static void SET_USE_CAMERA_HEADING_FOR_DESIRED_DIRECTION_LOCK_ON_TEST(Ped ped, BOOL toggle) { invoke<Void>(0xFDFF20, ped, toggle); }
static BOOL IS_PED_IN_ANY_POLICE_VEHICLE(Ped ped) { return invoke<BOOL>(0xFDFF80, ped); }
static void FORCE_PED_TO_OPEN_PARACHUTE(Ped ped) { invoke<Void>(0xFDFFF0, ped); }
static BOOL IS_PED_IN_PARACHUTE_FREE_FALL(Ped ped) { return invoke<BOOL>(0xFE0050, ped); }
static BOOL IS_PED_FALLING(Ped ped) { return invoke<BOOL>(0xFE0110, ped); }
static BOOL IS_PED_JUMPING(Ped ped) { return invoke<BOOL>(0xFE0170, ped); }
static BOOL IS_PED_LANDING(Any p0) { return invoke<BOOL>(0xFE01D0, p0); }
static BOOL IS_PED_DOING_A_BEAST_JUMP(Any p0) { return invoke<BOOL>(0xFE0230, p0); }
static BOOL IS_PED_CLIMBING(Ped ped) { return invoke<BOOL>(0xFE02B0, ped); }
static BOOL IS_PED_VAULTING(Ped ped) { return invoke<BOOL>(0xFE0310, ped); }
static BOOL IS_PED_DIVING(Ped ped) { return invoke<BOOL>(0xFE0370, ped); }
static BOOL IS_PED_JUMPING_OUT_OF_VEHICLE(Ped ped) { return invoke<BOOL>(0xFE03D0, ped); }
static BOOL IS_PED_OPENING_DOOR(Ped ped) { return invoke<BOOL>(0xFE0400, ped); }
static int GET_PED_PARACHUTE_STATE(Ped ped) { return invoke<int>(0xFE0490, ped); }
static int GET_PED_PARACHUTE_LANDING_TYPE(Ped ped) { return invoke<int>(0xFE0560, ped); }
static void SET_PED_PARACHUTE_TINT_INDEX(Ped ped, int tintIndex) { invoke<Void>(0xFE05D0, ped, tintIndex); }
static void GET_PED_PARACHUTE_TINT_INDEX(Ped ped, int* outTintIndex) { invoke<Void>(0xFE0620, ped, outTintIndex); }
static void SET_PED_RESERVE_PARACHUTE_TINT_INDEX(Ped ped, Any p1) { invoke<Void>(0xFE0670, ped, p1); }
static Object CREATE_PARACHUTE_BAG_OBJECT(Ped ped, BOOL p1, BOOL p2) { return invoke<Object>(0xFE06C0, ped, p1, p2); }
static void SET_PED_DUCKING(Ped ped, BOOL toggle) { invoke<Void>(0xFE0750, ped, toggle); }
static BOOL IS_PED_DUCKING(Ped ped) { return invoke<BOOL>(0xFE07B0, ped); }
static BOOL IS_PED_IN_ANY_TAXI(Ped ped) { return invoke<BOOL>(0xFE0810, ped); }
static void SET_PED_ID_RANGE(Ped ped, float value) { invoke<Void>(0xFE08D0, ped, value); }
static void SET_PED_HIGHLY_PERCEPTIVE(Ped ped, BOOL toggle) { invoke<Void>(0xFE0930, ped, toggle); }
static void SET_COP_PERCEPTION_OVERRIDES(float seeingRange, float seeingRangePeripheral, float hearingRange, float visualFieldMinAzimuthAngle, float visualFieldMaxAzimuthAngle, float fieldOfGazeMaxAngle, float p6) { invoke<Void>(0xFE0980, seeingRange, seeingRangePeripheral, hearingRange, visualFieldMinAzimuthAngle, visualFieldMaxAzimuthAngle, fieldOfGazeMaxAngle, p6); }
static void SET_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped, float p1) { invoke<Void>(0xFE0A00, ped, p1); }
static void DISABLE_PED_INJURED_ON_GROUND_BEHAVIOUR(Ped ped) { invoke<Void>(0xFE0A70, ped); }
static void SET_PED_SEEING_RANGE(Ped ped, float value) { invoke<Void>(0xFE0AC0, ped, value); }
static void SET_PED_HEARING_RANGE(Ped ped, float value) { invoke<Void>(0xFE0B20, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ANGLE(Ped ped, float value) { invoke<Void>(0xFE0B80, ped, value); }
static void SET_PED_VISUAL_FIELD_MAX_ANGLE(Ped ped, float value) { invoke<Void>(0xFE0BE0, ped, value); }
static void SET_PED_VISUAL_FIELD_MIN_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xFE0C40, ped, angle); }
static void SET_PED_VISUAL_FIELD_MAX_ELEVATION_ANGLE(Ped ped, float angle) { invoke<Void>(0xFE0CA0, ped, angle); }
static void SET_PED_VISUAL_FIELD_PERIPHERAL_RANGE(Ped ped, float range) { invoke<Void>(0xFE0D00, ped, range); }
static void SET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped, float angle) { invoke<Void>(0xFE0D60, ped, angle); }
static float GET_PED_VISUAL_FIELD_CENTER_ANGLE(Ped ped) { return invoke<float>(0xFE0DC0, ped); }
static void SET_PED_STEALTH_MOVEMENT(Ped ped, BOOL p1, const char* action) { invoke<Void>(0xFE0E20, ped, p1, action); }
static BOOL GET_PED_STEALTH_MOVEMENT(Ped ped) { return invoke<BOOL>(0xFE0EE0, ped); }
static int CREATE_GROUP(int unused) { return invoke<int>(0xFE0F40, unused); }
static void SET_PED_AS_GROUP_LEADER(Ped ped, int groupId) { invoke<Void>(0xFE0FC0, ped, groupId); }
static void SET_PED_AS_GROUP_MEMBER(Ped ped, int groupId) { invoke<Void>(0xFE0FD0, ped, groupId); }
static void SET_PED_CAN_TELEPORT_TO_GROUP_LEADER(Ped pedHandle, int groupHandle, BOOL toggle) { invoke<Void>(0xFE0FE0, pedHandle, groupHandle, toggle); }
static void REMOVE_GROUP(int groupId) { invoke<Void>(0xFE1000, groupId); }
static void REMOVE_PED_FROM_GROUP(Ped ped) { invoke<Void>(0xFE1010, ped); }
static BOOL IS_PED_GROUP_MEMBER(Ped ped, int groupId) { return invoke<BOOL>(0xFE1020, ped, groupId); }
static BOOL IS_PED_HANGING_ON_TO_VEHICLE(Ped ped) { return invoke<BOOL>(0xFE1050, ped); }
static void SET_GROUP_SEPARATION_RANGE(int groupHandle, float separationRange) { invoke<Void>(0xFE10F0, groupHandle, separationRange); }
static void SET_PED_MIN_GROUND_TIME_FOR_STUNGUN(Ped ped, int ms) { invoke<Void>(0xFE1100, ped, ms); }
static BOOL IS_PED_PRONE(Ped ped) { return invoke<BOOL>(0xFE1140, ped); }
static BOOL IS_PED_IN_COMBAT(Ped ped, Ped target) { return invoke<BOOL>(0xFE11A0, ped, target); }
static Entity GET_PED_TARGET_FROM_COMBAT_PED(Ped ped, Any p1) { return invoke<Entity>(0xFE11D0, ped, p1); }
static BOOL CAN_PED_IN_COMBAT_SEE_TARGET(Ped ped, Ped target) { return invoke<BOOL>(0xFE1200, ped, target); }
static BOOL IS_PED_DOING_DRIVEBY(Ped ped) { return invoke<BOOL>(0xFE12B0, ped); }
static BOOL IS_PED_JACKING(Ped ped) { return invoke<BOOL>(0xFE1340, ped); }
static BOOL IS_PED_BEING_JACKED(Ped ped) { return invoke<BOOL>(0xFE1370, ped); }
static BOOL IS_PED_BEING_STUNNED(Ped ped, int p1) { return invoke<BOOL>(0xFE13A0, ped, p1); }
static Ped GET_PEDS_JACKER(Ped ped) { return invoke<Ped>(0xFE13D0, ped); }
static Ped GET_JACK_TARGET(Ped ped) { return invoke<Ped>(0xFE13F0, ped); }
static BOOL IS_PED_FLEEING(Ped ped) { return invoke<BOOL>(0xFE1410, ped); }
static BOOL IS_PED_IN_COVER(Ped ped, BOOL exceptUseWeapon) { return invoke<BOOL>(0xFE1440, ped, exceptUseWeapon); }
static BOOL IS_PED_IN_COVER_FACING_LEFT(Ped ped) { return invoke<BOOL>(0xFE1470, ped); }
static BOOL IS_PED_IN_HIGH_COVER(Ped ped) { return invoke<BOOL>(0xFE14A0, ped); }
static BOOL IS_PED_GOING_INTO_COVER(Ped ped) { return invoke<BOOL>(0xFE14D0, ped); }
static BOOL SET_PED_PINNED_DOWN(Ped ped, BOOL pinned, int i) { return invoke<BOOL>(0xFE1590, ped, pinned, i); }
static int GET_SEAT_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<int>(0xFE1600, ped); }
static Vehicle GET_VEHICLE_PED_IS_TRYING_TO_ENTER(Ped ped) { return invoke<Vehicle>(0xFE1620, ped); }
static Entity GET_PED_SOURCE_OF_DEATH(Ped ped) { return invoke<Entity>(0xFE1640, ped); }
static Hash GET_PED_CAUSE_OF_DEATH(Ped ped) { return invoke<Hash>(0xFE16A0, ped); }
static int GET_PED_TIME_OF_DEATH(Ped ped) { return invoke<int>(0xFE16F0, ped); }
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET(Ped ped) { return invoke<int>(0xFE1740, ped); }
static int COUNT_PEDS_IN_COMBAT_WITH_TARGET_WITHIN_RADIUS(Ped ped, float x, float y, float z, float radius) { return invoke<int>(0xFE17B0, ped, x, y, z, radius); }
static void SET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped, Hash hash) { invoke<Void>(0xFE1880, ped, hash); }
static void SET_PED_RELATIONSHIP_GROUP_HASH(Ped ped, Hash hash) { invoke<Void>(0xFE18E0, ped, hash); }
static void SET_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xFE18F0, relationship, group1, group2); }
static void CLEAR_RELATIONSHIP_BETWEEN_GROUPS(int relationship, Hash group1, Hash group2) { invoke<Void>(0xFE1960, relationship, group1, group2); }
static BOOL ADD_RELATIONSHIP_GROUP(const char* name, Hash* groupHash) { return invoke<BOOL>(0xFE19A0, name, groupHash); }
static void REMOVE_RELATIONSHIP_GROUP(Hash groupHash) { invoke<Void>(0xFE1A10, groupHash); }
static BOOL DOES_RELATIONSHIP_GROUP_EXIST(Hash groupHash) { return invoke<BOOL>(0xFE1A20, groupHash); }
static int GET_RELATIONSHIP_BETWEEN_PEDS(Ped ped1, Ped ped2) { return invoke<int>(0xFE1A50, ped1, ped2); }
static Hash GET_PED_RELATIONSHIP_GROUP_DEFAULT_HASH(Ped ped) { return invoke<Hash>(0xFE1B00, ped); }
static Hash GET_PED_RELATIONSHIP_GROUP_HASH(Ped ped) { return invoke<Hash>(0xFE1B60, ped); }
static int GET_RELATIONSHIP_BETWEEN_GROUPS(Hash group1, Hash group2) { return invoke<int>(0xFE1BC0, group1, group2); }
static void SET_RELATIONSHIP_GROUP_AFFECTS_WANTED_LEVEL(Hash group, BOOL p1) { invoke<Void>(0xFE1C20, group, p1); }
static void TELL_GROUP_PEDS_IN_AREA_TO_ATTACK(Ped ped, Any p1, float p2, Hash hash, Any p4, Any p5) { invoke<Void>(0xFE1CB0, ped, p1, p2, hash, p4, p5); }
static void SET_PED_CAN_BE_TARGETED_WITHOUT_LOS(Ped ped, BOOL toggle) { invoke<Void>(0xFE1CD0, ped, toggle); }
static void SET_PED_TO_INFORM_RESPECTED_FRIENDS(Ped ped, float radius, int maxFriends) { invoke<Void>(0xFE1D30, ped, radius, maxFriends); }
static BOOL IS_PED_RESPONDING_TO_EVENT(Ped ped, Any event) { return invoke<BOOL>(0xFE1DB0, ped, event); }
static BOOL GET_POS_FROM_FIRED_EVENT(Ped ped, int eventType, Any* outData) { return invoke<BOOL>(0xFE1E10, ped, eventType, outData); }
static void SET_PED_FIRING_PATTERN(Ped ped, Hash patternHash) { invoke<Void>(0xFE1E90, ped, patternHash); }
static void SET_PED_SHOOT_RATE(Ped ped, int shootRate) { invoke<Void>(0xFE1EA0, ped, shootRate); }
static void SET_COMBAT_FLOAT(Ped ped, int combatType, float p2) { invoke<Void>(0xFE1F50, ped, combatType, p2); }
static float GET_COMBAT_FLOAT(Ped ped, int p1) { return invoke<float>(0xFE1FC0, ped, p1); }
static void GET_GROUP_SIZE(int groupID, Any* p1, int* sizeInMembers) { invoke<Void>(0xFE2040, groupID, p1, sizeInMembers); }
static BOOL DOES_GROUP_EXIST(int groupId) { return invoke<BOOL>(0xFE20D0, groupId); }
static int GET_PED_GROUP_INDEX(Ped ped) { return invoke<int>(0xFE2110, ped); }
static BOOL IS_PED_IN_GROUP(Ped ped) { return invoke<BOOL>(0xFE2130, ped); }
static Player GET_PLAYER_PED_IS_FOLLOWING(Ped ped) { return invoke<Player>(0xFE2190, ped); }
static void SET_GROUP_FORMATION(int groupId, int formationType) { invoke<Void>(0xFE21B0, groupId, formationType); }
static void SET_GROUP_FORMATION_SPACING(int groupId, float x, float y, float z) { invoke<Void>(0xFE2220, groupId, x, y, z); }
static void RESET_GROUP_FORMATION_DEFAULT_SPACING(int groupHandle) { invoke<Void>(0xFE22D0, groupHandle); }
static Vehicle GET_VEHICLE_PED_IS_USING(Ped ped) { return invoke<Vehicle>(0xFE2350, ped); }
static Vehicle GET_VEHICLE_PED_IS_ENTERING(Ped ped) { return invoke<Vehicle>(0xFE23D0, ped); }
static void SET_PED_GRAVITY(Ped ped, BOOL toggle) { invoke<Void>(0xFE23F0, ped, toggle); }
static void APPLY_DAMAGE_TO_PED(Ped ped, int damageAmount, BOOL p2, Any p3) { invoke<Void>(0xFE2470, ped, damageAmount, p2, p3); }
static int GET_TIME_PED_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash) { return invoke<int>(0xFE2490, ped, weaponHash); }
static void SET_PED_ALLOWED_TO_DUCK(Ped ped, BOOL toggle) { invoke<Void>(0xFE2540, ped, toggle); }
static void SET_PED_NEVER_LEAVES_GROUP(Ped ped, BOOL toggle) { invoke<Void>(0xFE25A0, ped, toggle); }
static int GET_PED_TYPE(Ped ped) { return invoke<int>(0xFE2600, ped); }
static void SET_PED_AS_COP(Ped ped, BOOL toggle) { invoke<Void>(0xFE2660, ped, toggle); }
static void SET_PED_HEALTH_PENDING_LAST_DAMAGE_EVENT_OVERRIDE_FLAG(BOOL toggle) { invoke<Void>(0xFE26F0, toggle); }
static void SET_PED_MAX_HEALTH(Ped ped, int value) { invoke<Void>(0xFE2720, ped, value); }
static int GET_PED_MAX_HEALTH(Ped ped) { return invoke<int>(0xFE2790, ped); }
static void SET_PED_MAX_TIME_IN_WATER(Ped ped, float value) { invoke<Void>(0xFE27E0, ped, value); }
static void SET_PED_MAX_TIME_UNDERWATER(Ped ped, float value) { invoke<Void>(0xFE2860, ped, value); }
static void SET_CORPSE_RAGDOLL_FRICTION(Ped ped, float p1) { invoke<Void>(0xFE28C0, ped, p1); }
static void SET_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped, Vehicle vehicle, int seatIndex, int flags, Any p4) { invoke<Void>(0xFE2910, ped, vehicle, seatIndex, flags, p4); }
static void CLEAR_ALL_PED_VEHICLE_FORCED_SEAT_USAGE(Ped ped) { invoke<Void>(0xFE2930, ped); }
static void SET_PED_CAN_BE_KNOCKED_OFF_BIKE(Any p0, Any p1) { invoke<Void>(0xFE2980, p0, p1); }
static void SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(Ped ped, int state) { invoke<Void>(0xFE2990, ped, state); }
static BOOL CAN_KNOCK_PED_OFF_VEHICLE(Ped ped) { return invoke<BOOL>(0xFE2A10, ped); }
static void KNOCK_PED_OFF_VEHICLE(Ped ped) { invoke<Void>(0xFE2AD0, ped); }
static void SET_PED_COORDS_NO_GANG(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xFE2AE0, ped, posX, posY, posZ); }
static Ped GET_PED_AS_GROUP_MEMBER(int groupID, int memberNumber) { return invoke<Ped>(0xFE2B50, groupID, memberNumber); }
static Ped GET_PED_AS_GROUP_LEADER(int groupID) { return invoke<Ped>(0xFE2BD0, groupID); }
static void SET_PED_KEEP_TASK(Ped ped, BOOL toggle) { invoke<Void>(0xFE2C40, ped, toggle); }
static void SET_PED_ALLOW_MINOR_REACTIONS_AS_MISSION_PED(Ped ped, BOOL toggle) { invoke<Void>(0xFE2CA0, ped, toggle); }
static BOOL IS_PED_SWIMMING(Ped ped) { return invoke<BOOL>(0xFE2CF0, ped); }
static BOOL IS_PED_SWIMMING_UNDER_WATER(Ped ped) { return invoke<BOOL>(0xFE2D50, ped); }
static void SET_PED_COORDS_KEEP_VEHICLE(Ped ped, float posX, float posY, float posZ) { invoke<Void>(0xFE2DC0, ped, posX, posY, posZ); }
static void SET_PED_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFE2E50, ped, toggle); }
static void SET_CREATE_RANDOM_COPS(BOOL toggle) { invoke<Void>(0xFE2EB0, toggle); }
static void SET_CREATE_RANDOM_COPS_NOT_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xFE2EE0, toggle); }
static void SET_CREATE_RANDOM_COPS_ON_SCENARIOS(BOOL toggle) { invoke<Void>(0xFE2F00, toggle); }
static BOOL CAN_CREATE_RANDOM_COPS() { return invoke<BOOL>(0xFE2F20); }
static void SET_PED_AS_ENEMY(Ped ped, BOOL toggle) { invoke<Void>(0xFE2F40, ped, toggle); }
static void SET_PED_CAN_SMASH_GLASS(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xFE2F90, ped, p1, p2); }
static BOOL IS_PED_IN_ANY_TRAIN(Ped ped) { return invoke<BOOL>(0xFE3000, ped); }
static BOOL IS_PED_GETTING_INTO_A_VEHICLE(Ped ped) { return invoke<BOOL>(0xFE3080, ped); }
static BOOL IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(Ped ped) { return invoke<BOOL>(0xFE30B0, ped); }
static void SET_ENABLE_HANDCUFFS(Ped ped, BOOL toggle) { invoke<Void>(0xFE3170, ped, toggle); }
static void SET_ENABLE_BOUND_ANKLES(Ped ped, BOOL toggle) { invoke<Void>(0xFE31F0, ped, toggle); }
static void SET_ENABLE_SCUBA(Ped ped, BOOL toggle) { invoke<Void>(0xFE3270, ped, toggle); }
static void SET_CAN_ATTACK_FRIENDLY(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xFE32D0, ped, toggle, p2); }
static int GET_PED_ALERTNESS(Ped ped) { return invoke<int>(0xFE3350, ped); }
static void SET_PED_ALERTNESS(Ped ped, int value) { invoke<Void>(0xFE33B0, ped, value); }
static void SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFE3400, ped, toggle); }
static void SET_PED_MOVEMENT_CLIPSET(Ped ped, const char* clipSet, float transitionSpeed) { invoke<Void>(0xFE3460, ped, clipSet, transitionSpeed); }
static void RESET_PED_MOVEMENT_CLIPSET(Ped ped, float p1) { invoke<Void>(0xFE3480, ped, p1); }
static void SET_PED_STRAFE_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xFE34F0, ped, clipSet); }
static void RESET_PED_STRAFE_CLIPSET(Ped ped) { invoke<Void>(0xFE3500, ped); }
static void SET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped, const char* clipSet) { invoke<Void>(0xFE3560, ped, clipSet); }
static void RESET_PED_WEAPON_MOVEMENT_CLIPSET(Ped ped) { invoke<Void>(0xFE3570, ped); }
static void SET_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped, const char* clipset) { invoke<Void>(0xFE35D0, ped, clipset); }
static void CLEAR_PED_DRIVE_BY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xFE35E0, ped); }
static void SET_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped, const char* p1) { invoke<Void>(0xFE3630, ped, p1); }
static void CLEAR_PED_MOTION_IN_COVER_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xFE3640, ped); }
static void CLEAR_PED_FALL_UPPER_BODY_CLIPSET_OVERRIDE(Ped ped) { invoke<Void>(0xFE3690, ped); }
static void SET_PED_IN_VEHICLE_CONTEXT(Ped ped, Hash context) { invoke<Void>(0xFE36E0, ped, context); }
static void RESET_PED_IN_VEHICLE_CONTEXT(Ped ped) { invoke<Void>(0xFE3750, ped); }
static BOOL IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(Ped ped, const char* animDict, const char* anim) { return invoke<BOOL>(0xFE37B0, ped, animDict, anim); }
static void SET_PED_ALTERNATE_WALK_ANIM(Ped ped, const char* animDict, const char* animName, float p3, BOOL p4) { invoke<Void>(0xFE37E0, ped, animDict, animName, p3, p4); }
static void CLEAR_PED_ALTERNATE_WALK_ANIM(Ped ped, float p1) { invoke<Void>(0xFE3810, ped, p1); }
static void SET_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, const char* animDictionary, const char* animationName, float p4, BOOL p5) { invoke<Void>(0xFE38B0, ped, stance, animDictionary, animationName, p4, p5); }
static void CLEAR_PED_ALTERNATE_MOVEMENT_ANIM(Ped ped, int stance, float p2) { invoke<Void>(0xFE38E0, ped, stance, p2); }
static void SET_PED_GESTURE_GROUP(Ped ped, const char* animGroupGesture) { invoke<Void>(0xFE3990, ped, animGroupGesture); }
static Vector3 GET_ANIM_INITIAL_OFFSET_POSITION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xFE3A20, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static Vector3 GET_ANIM_INITIAL_OFFSET_ROTATION(const char* animDict, const char* animName, float x, float y, float z, float xRot, float yRot, float zRot, float p8, int p9) { return invoke<Vector3>(0xFE3B30, animDict, animName, x, y, z, xRot, yRot, zRot, p8, p9); }
static int GET_PED_DRAWABLE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xFE3C40, ped, componentId); }
static int GET_NUMBER_OF_PED_DRAWABLE_VARIATIONS(Ped ped, int componentId) { return invoke<int>(0xFE3CA0, ped, componentId); }
static int GET_PED_TEXTURE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xFE3CD0, ped, componentId); }
static int GET_NUMBER_OF_PED_TEXTURE_VARIATIONS(Ped ped, int componentId, int drawableId) { return invoke<int>(0xFE3D30, ped, componentId, drawableId); }
static int GET_NUMBER_OF_PED_PROP_DRAWABLE_VARIATIONS(Ped ped, int propId) { return invoke<int>(0xFE3D60, ped, propId); }
static int GET_NUMBER_OF_PED_PROP_TEXTURE_VARIATIONS(Ped ped, int propId, int drawableId) { return invoke<int>(0xFE3D90, ped, propId, drawableId); }
static int GET_PED_PALETTE_VARIATION(Ped ped, int componentId) { return invoke<int>(0xFE3DC0, ped, componentId); }
static BOOL GET_MP_OUTFIT_DATA_FROM_METADATA(Any* p0, Any* p1) { return invoke<BOOL>(0xFE3E20, p0, p1); }
static int GET_FM_MALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0xFE3E50, p0); }
static int GET_FM_FEMALE_SHOP_PED_APPAREL_ITEM_INDEX(int p0) { return invoke<int>(0xFE3E70, p0); }
static BOOL IS_PED_COMPONENT_VARIATION_VALID(Ped ped, int componentId, int drawableId, int textureId) { return invoke<BOOL>(0xFE3E90, ped, componentId, drawableId, textureId); }
static void SET_PED_COMPONENT_VARIATION(Ped ped, int componentId, int drawableId, int textureId, int paletteId) { invoke<Void>(0xFE3F10, ped, componentId, drawableId, textureId, paletteId); }
static void SET_PED_RANDOM_COMPONENT_VARIATION(Ped ped, int p1) { invoke<Void>(0xFE3FD0, ped, p1); }
static void SET_PED_RANDOM_PROPS(Ped ped) { invoke<Void>(0xFE4070, ped); }
static void SET_PED_DEFAULT_COMPONENT_VARIATION(Ped ped) { invoke<Void>(0xFE4120, ped); }
static void SET_PED_BLEND_FROM_PARENTS(Ped ped, Any p1, Any p2, float p3, float p4) { invoke<Void>(0xFE41A0, ped, p1, p2, p3, p4); }
static void SET_PED_HEAD_BLEND_DATA(Ped ped, int shapeFirstID, int shapeSecondID, int shapeThirdID, int skinFirstID, int skinSecondID, int skinThirdID, float shapeMix, float skinMix, float thirdMix, BOOL isParent) { invoke<Void>(0xFE41C0, ped, shapeFirstID, shapeSecondID, shapeThirdID, skinFirstID, skinSecondID, skinThirdID, shapeMix, skinMix, thirdMix, isParent); }
static BOOL GET_PED_HEAD_BLEND_DATA(Ped ped, Any* headBlendData) { return invoke<BOOL>(0xFE4320, ped, headBlendData); }
static void UPDATE_PED_HEAD_BLEND_DATA(Ped ped, float shapeMix, float skinMix, float thirdMix) { invoke<Void>(0xFE4410, ped, shapeMix, skinMix, thirdMix); }
static void SET_HEAD_BLEND_EYE_COLOR(Ped ped, int index) { invoke<Void>(0xFE4490, ped, index); }
static int GET_HEAD_BLEND_EYE_COLOR(Ped ped) { return invoke<int>(0xFE44E0, ped); }
static void SET_PED_HEAD_OVERLAY(Ped ped, int overlayID, int index, float opacity) { invoke<Void>(0xFE4540, ped, overlayID, index, opacity); }
static int GET_PED_HEAD_OVERLAY(Ped ped, int overlayID) { return invoke<int>(0xFE45C0, ped, overlayID); }
static int GET_PED_HEAD_OVERLAY_NUM(int overlayID) { return invoke<int>(0xFE4630, overlayID); }
static void SET_PED_HEAD_OVERLAY_TINT(Ped ped, int overlayID, int colorType, int colorID, int secondColorID) { invoke<Void>(0xFE4750, ped, overlayID, colorType, colorID, secondColorID); }
static void SET_PED_HAIR_TINT(Ped ped, int colorID, int highlightColorID) { invoke<Void>(0xFE47D0, ped, colorID, highlightColorID); }
static int GET_NUM_PED_HAIR_TINTS() { return invoke<int>(0xFE4830); }
static int GET_NUM_PED_MAKEUP_TINTS() { return invoke<int>(0xFE4840); }
static void GET_PED_HAIR_TINT_COLOR(int hairColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xFE4850, hairColorIndex, outR, outG, outB); }
static void GET_PED_MAKEUP_TINT_COLOR(int makeupColorIndex, int* outR, int* outG, int* outB) { invoke<Void>(0xFE48A0, makeupColorIndex, outR, outG, outB); }
static BOOL IS_PED_HAIR_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xFE48F0, colorId); }
static int GET_DEFAULT_SECONDARY_TINT_FOR_CREATOR(int colorId) { return invoke<int>(0xFE4940, colorId); }
static BOOL IS_PED_LIPSTICK_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xFE4980, colorId); }
static BOOL IS_PED_BLUSH_TINT_FOR_CREATOR(int colorId) { return invoke<BOOL>(0xFE49D0, colorId); }
static BOOL IS_PED_HAIR_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xFE4A20, colorID); }
static int GET_DEFAULT_SECONDARY_TINT_FOR_BARBER(int colorID) { return invoke<int>(0xFE4A70, colorID); }
static BOOL IS_PED_LIPSTICK_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xFE4AB0, colorID); }
static BOOL IS_PED_BLUSH_TINT_FOR_BARBER(int colorID) { return invoke<BOOL>(0xFE4B00, colorID); }
static BOOL IS_PED_BLUSH_FACEPAINT_TINT_FOR_BARBER(int colorId) { return invoke<BOOL>(0xFE4B50, colorId); }
static int GET_TINT_INDEX_FOR_LAST_GEN_HAIR_TEXTURE(Hash modelHash, int drawableId, int textureId) { return invoke<int>(0xFE4BA0, modelHash, drawableId, textureId); }
static void SET_PED_MICRO_MORPH(Ped ped, int index, float scale) { invoke<Void>(0xFE4C80, ped, index, scale); }
static BOOL HAS_PED_HEAD_BLEND_FINISHED(Ped ped) { return invoke<BOOL>(0xFE4CF0, ped); }
static void FINALIZE_HEAD_BLEND(Ped ped) { invoke<Void>(0xFE4D50, ped); }
static void SET_HEAD_BLEND_PALETTE_COLOR(Ped ped, int r, int g, int b, int id) { invoke<Void>(0xFE4DA0, ped, r, g, b, id); }
static void DISABLE_HEAD_BLEND_PALETTE_COLOR(Ped ped) { invoke<Void>(0xFE4E60, ped); }
static int GET_PED_HEAD_BLEND_FIRST_INDEX(int type) { return invoke<int>(0xFE4EB0, type); }
static int GET_PED_HEAD_BLEND_NUM_HEADS(int type) { return invoke<int>(0xFE4F10, type); }
static int SET_PED_PRELOAD_VARIATION_DATA(Ped ped, int slot, int drawableId, int textureId) { return invoke<int>(0xFE4F80, ped, slot, drawableId, textureId); }
static BOOL HAS_PED_PRELOAD_VARIATION_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xFE5030, ped); }
static void RELEASE_PED_PRELOAD_VARIATION_DATA(Ped ped) { invoke<Void>(0xFE5090, ped); }
static int SET_PED_PRELOAD_PROP_DATA(Ped ped, int componentId, int drawableId, int TextureId) { return invoke<int>(0xFE50E0, ped, componentId, drawableId, TextureId); }
static BOOL HAS_PED_PRELOAD_PROP_DATA_FINISHED(Ped ped) { return invoke<BOOL>(0xFE5190, ped); }
static void RELEASE_PED_PRELOAD_PROP_DATA(Ped ped) { invoke<Void>(0xFE51F0, ped); }
static int GET_PED_PROP_INDEX(Ped ped, int componentId, Any p2) { return invoke<int>(0xFE5240, ped, componentId, p2); }
static void SET_PED_PROP_INDEX(Ped ped, int componentId, int drawableId, int TextureId, BOOL attach, Any p5) { invoke<Void>(0xFE52A0, ped, componentId, drawableId, TextureId, attach, p5); }
static void KNOCK_OFF_PED_PROP(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0xFE52D0, ped, p1, p2, p3, p4); }
static void CLEAR_PED_PROP(Ped ped, int propId, Any p2) { invoke<Void>(0xFE5370, ped, propId, p2); }
static void CLEAR_ALL_PED_PROPS(Ped ped, Any p1) { invoke<Void>(0xFE53D0, ped, p1); }
static void DROP_AMBIENT_PROP(Ped ped) { invoke<Void>(0xFE5420, ped); }
static int GET_PED_PROP_TEXTURE_INDEX(Ped ped, int componentId) { return invoke<int>(0xFE54B0, ped, componentId); }
static void CLEAR_PED_PARACHUTE_PACK_VARIATION(Ped ped) { invoke<Void>(0xFE5510, ped); }
static void SET_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xFE5560, ped); }
static void CLEAR_PED_SCUBA_GEAR_VARIATION(Ped ped) { invoke<Void>(0xFE55B0, ped); }
static BOOL IS_USING_PED_SCUBA_GEAR_VARIATION(Any p0) { return invoke<BOOL>(0xFE5600, p0); }
static void SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xFE5660, ped, toggle); }
static void SET_PED_BOUNDS_ORIENTATION(Ped ped, float p1, float p2, float x, float y, float z) { invoke<Void>(0xFE5680, ped, p1, p2, x, y, z); }
static void REGISTER_TARGET(Ped ped, Ped target) { invoke<Void>(0xFE5720, ped, target); }
static void REGISTER_HATED_TARGETS_AROUND_PED(Ped ped, float radius) { invoke<Void>(0xFE57D0, ped, radius); }
static Ped GET_RANDOM_PED_AT_COORD(float x, float y, float z, float xRadius, float yRadius, float zRadius, int pedType) { return invoke<Ped>(0xFE5870, x, y, z, xRadius, yRadius, zRadius, pedType); }
static BOOL GET_CLOSEST_PED(float x, float y, float z, float radius, BOOL p4, BOOL p5, Ped* outPed, BOOL p7, BOOL p8, int pedType) { return invoke<BOOL>(0xFE58A0, x, y, z, radius, p4, p5, outPed, p7, p8, pedType); }
static void SET_SCENARIO_PEDS_TO_BE_RETURNED_BY_NEXT_COMMAND(BOOL value) { invoke<Void>(0xFE59A0, value); }
static BOOL GET_CAN_PED_BE_GRABBED_BY_SCRIPT(Ped ped, BOOL p1, BOOL p2, BOOL p3, BOOL p4, BOOL p5, BOOL p6, BOOL p7, Any p8) { return invoke<BOOL>(0xFE59C0, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void SET_DRIVER_RACING_MODIFIER(Ped driver, float modifier) { invoke<Void>(0xFE5AB0, driver, modifier); }
static void SET_DRIVER_ABILITY(Ped driver, float ability) { invoke<Void>(0xFE5B20, driver, ability); }
static void SET_DRIVER_AGGRESSIVENESS(Ped driver, float aggressiveness) { invoke<Void>(0xFE5B90, driver, aggressiveness); }
static BOOL CAN_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xFE5C00, ped); }
static BOOL SET_PED_TO_RAGDOLL(Ped ped, int time1, int time2, int ragdollType, BOOL p4, BOOL p5, BOOL p6) { return invoke<BOOL>(0xFE5C80, ped, time1, time2, ragdollType, p4, p5, p6); }
static BOOL SET_PED_TO_RAGDOLL_WITH_FALL(Ped ped, int time, int p2, int ragdollType, float x, float y, float z, float velocity, float p8, float p9, float p10, float p11, float p12, float p13) { return invoke<BOOL>(0xFE5CE0, ped, time, p2, ragdollType, x, y, z, velocity, p8, p9, p10, p11, p12, p13); }
static void SET_PED_RAGDOLL_ON_COLLISION(Ped ped, BOOL toggle) { invoke<Void>(0xFE5D30, ped, toggle); }
static BOOL IS_PED_RAGDOLL(Ped ped) { return invoke<BOOL>(0xFE5D50, ped); }
static BOOL IS_PED_RUNNING_RAGDOLL_TASK(Ped ped) { return invoke<BOOL>(0xFE5DC0, ped); }
static void SET_PED_RAGDOLL_FORCE_FALL(Ped ped) { invoke<Void>(0xFE5E50, ped); }
static void RESET_PED_RAGDOLL_TIMER(Ped ped) { invoke<Void>(0xFE5ED0, ped); }
static void SET_PED_CAN_RAGDOLL(Ped ped, BOOL toggle) { invoke<Void>(0xFE5F40, ped, toggle); }
static BOOL IS_PED_RUNNING_MELEE_TASK(Ped ped) { return invoke<BOOL>(0xFE5F60, ped); }
static BOOL IS_PED_RUNNING_MOBILE_PHONE_TASK(Ped ped) { return invoke<BOOL>(0xFE5FC0, ped); }
static BOOL IS_MOBILE_PHONE_TO_PED_EAR(Ped ped) { return invoke<BOOL>(0xFE6010, ped); }
static void SET_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xFE60A0, ped, blockingFlag); }
static void CLEAR_RAGDOLL_BLOCKING_FLAGS(Ped ped, int blockingFlag) { invoke<Void>(0xFE60B0, ped, blockingFlag); }
static void SET_PED_ANGLED_DEFENSIVE_AREA(Ped ped, float p1, float p2, float p3, float p4, float p5, float p6, float p7, BOOL p8, BOOL p9) { invoke<Void>(0xFE6120, ped, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void SET_PED_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius, BOOL p5, BOOL p6) { invoke<Void>(0xFE6150, ped, x, y, z, radius, p5, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_PED(Ped ped, Ped target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xFE6240, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void SET_PED_DEFENSIVE_SPHERE_ATTACHED_TO_VEHICLE(Ped ped, Vehicle target, float xOffset, float yOffset, float zOffset, float radius, BOOL p6) { invoke<Void>(0xFE6270, ped, target, xOffset, yOffset, zOffset, radius, p6); }
static void SET_PED_DEFENSIVE_AREA_ATTACHED_TO_PED(Ped ped, Ped attachPed, float p2, float p3, float p4, float p5, float p6, float p7, float p8, BOOL p9, BOOL p10) { invoke<Void>(0xFE62A0, ped, attachPed, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void SET_PED_DEFENSIVE_AREA_DIRECTION(Ped ped, float p1, float p2, float p3, BOOL p4) { invoke<Void>(0xFE62E0, ped, p1, p2, p3, p4); }
static void REMOVE_PED_DEFENSIVE_AREA(Ped ped, BOOL toggle) { invoke<Void>(0xFE63A0, ped, toggle); }
static Vector3 GET_PED_DEFENSIVE_AREA_POSITION(Ped ped, BOOL p1) { return invoke<Vector3>(0xFE6400, ped, p1); }
static BOOL IS_PED_DEFENSIVE_AREA_ACTIVE(Ped ped, BOOL p1) { return invoke<BOOL>(0xFE6470, ped, p1); }
static void SET_PED_PREFERRED_COVER_SET(Ped ped, Any itemSet) { invoke<Void>(0xFE64F0, ped, itemSet); }
static void REMOVE_PED_PREFERRED_COVER_SET(Ped ped) { invoke<Void>(0xFE6540, ped); }
static void REVIVE_INJURED_PED(Ped ped) { invoke<Void>(0xFE6590, ped); }
static void RESURRECT_PED(Ped ped) { invoke<Void>(0xFE6620, ped); }
static void SET_PED_NAME_DEBUG(Ped ped, const char* name) { invoke<Void>(0xFE66C0, ped, name); }
static Vector3 GET_PED_EXTRACTED_DISPLACEMENT(Ped ped, BOOL worldSpace) { return invoke<Vector3>(0xFE66D0, ped, worldSpace); }
static void SET_PED_DIES_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xFE67B0, ped, toggle); }
static void SET_PED_ENABLE_WEAPON_BLOCKING(Ped ped, BOOL toggle) { invoke<Void>(0xFE6820, ped, toggle); }
static void SPECIAL_FUNCTION_DO_NOT_USE(Ped ped, BOOL p1) { invoke<Void>(0xFE6880, ped, p1); }
static void RESET_PED_VISIBLE_DAMAGE(Ped ped) { invoke<Void>(0xFE6900, ped); }
static void APPLY_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, float p2, float p3, Any p4) { invoke<Void>(0xFE6950, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD(Ped ped, int boneIndex, float xRot, float yRot, float zRot, const char* woundType) { invoke<Void>(0xFE6AA0, ped, boneIndex, xRot, yRot, zRot, woundType); }
static void APPLY_PED_BLOOD_BY_ZONE(Ped ped, int p1, float p2, float p3, const char* p4) { invoke<Void>(0xFE6B70, ped, p1, p2, p3, p4); }
static void APPLY_PED_BLOOD_SPECIFIC(Ped ped, int p1, float p2, float p3, float p4, float p5, int p6, float p7, const char* p8) { invoke<Void>(0xFE6C50, ped, p1, p2, p3, p4, p5, p6, p7, p8); }
static void APPLY_PED_DAMAGE_DECAL(Ped ped, int damageZone, float xOffset, float yOffset, float heading, float scale, float alpha, int variation, BOOL fadeIn, const char* decalName) { invoke<Void>(0xFE6D60, ped, damageZone, xOffset, yOffset, heading, scale, alpha, variation, fadeIn, decalName); }
static void APPLY_PED_DAMAGE_PACK(Ped ped, const char* damagePack, float damage, float mult) { invoke<Void>(0xFE6E80, ped, damagePack, damage, mult); }
static void CLEAR_PED_BLOOD_DAMAGE(Ped ped) { invoke<Void>(0xFE6F30, ped); }
static void CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, int p1) { invoke<Void>(0xFE6F80, ped, p1); }
static void HIDE_PED_BLOOD_DAMAGE_BY_ZONE(Ped ped, Any p1, BOOL p2) { invoke<Void>(0xFE6FD0, ped, p1, p2); }
static void CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Ped ped, int p1, const char* p2) { invoke<Void>(0xFE7040, ped, p1, p2); }
static int GET_PED_DECORATIONS_STATE(Ped ped) { return invoke<int>(0xFE70E0, ped); }
static void MARK_PED_DECORATIONS_AS_CLONED_FROM_LOCAL_PLAYER(Ped ped, BOOL p1) { invoke<Void>(0xFE71A0, ped, p1); }
static void CLEAR_PED_WETNESS(Ped ped) { invoke<Void>(0xFE7210, ped); }
static void SET_PED_WETNESS_HEIGHT(Ped ped, float height) { invoke<Void>(0xFE7270, ped, height); }
static void SET_PED_WETNESS_ENABLED_THIS_FRAME(Ped ped) { invoke<Void>(0xFE72E0, ped); }
static void SET_PED_WETNESS(Ped ped, float wetLevel) { invoke<Void>(0xFE7330, ped, wetLevel); }
static void CLEAR_PED_ENV_DIRT(Ped ped) { invoke<Void>(0xFE7390, ped); }
static void SET_PED_SWEAT(Ped ped, float sweat) { invoke<Void>(0xFE73D0, ped, sweat); }
static void ADD_PED_DECORATION_FROM_HASHES(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xFE7420, ped, collection, overlay); }
static void ADD_PED_DECORATION_FROM_HASHES_IN_CORONA(Ped ped, Hash collection, Hash overlay) { invoke<Void>(0xFE74C0, ped, collection, overlay); }
static int GET_PED_DECORATION_ZONE_FROM_HASHES(Hash collection, Hash overlay) { return invoke<int>(0xFE7580, collection, overlay); }
static void CLEAR_PED_DECORATIONS(Ped ped) { invoke<Void>(0xFE75E0, ped); }
static void CLEAR_PED_DECORATIONS_LEAVE_SCARS(Ped ped) { invoke<Void>(0xFE7630, ped); }
static BOOL WAS_PED_SKELETON_UPDATED(Ped ped) { return invoke<BOOL>(0xFE7640, ped); }
static Vector3 GET_PED_BONE_COORDS(Ped ped, int boneId, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0xFE7680, ped, boneId, offsetX, offsetY, offsetZ); }
static void CREATE_NM_MESSAGE(BOOL startImmediately, int messageId) { invoke<Void>(0xFE76F0, startImmediately, messageId); }
static void GIVE_PED_NM_MESSAGE(Ped ped) { invoke<Void>(0xFE7760, ped); }
static int ADD_SCENARIO_BLOCKING_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL p6, BOOL p7, BOOL p8, BOOL p9) { return invoke<int>(0xFE7770, x1, y1, z1, x2, y2, z2, p6, p7, p8, p9); }
static void REMOVE_SCENARIO_BLOCKING_AREAS() { invoke<Void>(0xFE77C0); }
static void REMOVE_SCENARIO_BLOCKING_AREA(Any p0, BOOL p1) { invoke<Void>(0xFE77E0, p0, p1); }
static void SET_SCENARIO_PEDS_SPAWN_IN_SPHERE_AREA(float x, float y, float z, float range, int p4) { invoke<Void>(0xFE7800, x, y, z, range, p4); }
static BOOL DOES_SCENARIO_BLOCKING_AREA_EXISTS(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<BOOL>(0xFE7880, x1, y1, z1, x2, y2, z2); }
static BOOL IS_PED_USING_SCENARIO(Ped ped, const char* scenario) { return invoke<BOOL>(0xFE7910, ped, scenario); }
static BOOL IS_PED_USING_ANY_SCENARIO(Ped ped) { return invoke<BOOL>(0xFE7940, ped); }
static BOOL SET_PED_PANIC_EXIT_SCENARIO(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xFE79A0, p0, p1, p2, p3); }
static void TOGGLE_SCENARIO_PED_COWER_IN_PLACE(Ped ped, BOOL toggle) { invoke<Void>(0xFE79D0, ped, toggle); }
static BOOL TRIGGER_PED_SCENARIO_PANICEXITTOFLEE(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xFE7A40, p0, p1, p2, p3); }
static BOOL SET_PED_SHOULD_PLAY_DIRECTED_NORMAL_SCENARIO_EXIT(Any p0, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xFE7A70, p0, p1, p2, p3); }
static void SET_PED_SHOULD_PLAY_NORMAL_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xFE7B20, ped); }
static void SET_PED_SHOULD_PLAY_IMMEDIATE_SCENARIO_EXIT(Ped ped) { invoke<Void>(0xFE7B70, ped); }
static BOOL SET_PED_SHOULD_PLAY_FLEE_SCENARIO_EXIT(Ped ped, Any p1, Any p2, Any p3) { return invoke<BOOL>(0xFE7BC0, ped, p1, p2, p3); }
static void SET_PED_SHOULD_IGNORE_SCENARIO_EXIT_COLLISION_CHECKS(Ped ped, BOOL p1) { invoke<Void>(0xFE7C80, ped, p1); }
static void SET_PED_SHOULD_IGNORE_SCENARIO_NAV_CHECKS(Any p0, BOOL p1) { invoke<Void>(0xFE7CD0, p0, p1); }
static void SET_PED_SHOULD_PROBE_FOR_SCENARIO_EXITS_IN_ONE_FRAME(Any p0, BOOL p1) { invoke<Void>(0xFE7D30, p0, p1); }
static BOOL IS_PED_GESTURING(Any p0) { return invoke<BOOL>(0xFE7D80, p0); }
static void RESET_FACIAL_IDLE_ANIM(Ped ped) { invoke<Void>(0xFE7DD0, ped); }
static void PLAY_FACIAL_ANIM(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xFE7E20, ped, animName, animDict); }
static void SET_FACIAL_CLIPSET(Ped ped, const char* animDict) { invoke<Void>(0xFE7E40, ped, animDict); }
static void SET_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped, const char* animName, const char* animDict) { invoke<Void>(0xFE7EF0, ped, animName, animDict); }
static void CLEAR_FACIAL_IDLE_ANIM_OVERRIDE(Ped ped) { invoke<Void>(0xFE7F10, ped); }
static void SET_PED_CAN_PLAY_GESTURE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xFE7F20, ped, toggle); }
static void SET_PED_CAN_PLAY_VISEME_ANIMS(Ped ped, BOOL toggle, BOOL p2) { invoke<Void>(0xFE7F90, ped, toggle, p2); }
static void SET_PED_IS_IGNORED_BY_AUTO_OPEN_DOORS(Ped ped, BOOL p1) { invoke<Void>(0xFE8020, ped, p1); }
static void SET_PED_CAN_PLAY_AMBIENT_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xFE8080, ped, toggle); }
static void SET_PED_CAN_PLAY_AMBIENT_BASE_ANIMS(Ped ped, BOOL toggle) { invoke<Void>(0xFE80D0, ped, toggle); }
static void TRIGGER_IDLE_ANIMATION_ON_PED(Ped ped) { invoke<Void>(0xFE8120, ped); }
static void SET_PED_CAN_ARM_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFE8180, ped, toggle); }
static void SET_PED_CAN_HEAD_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFE81D0, ped, toggle); }
static void SET_PED_CAN_LEG_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFE8230, ped, toggle); }
static void SET_PED_CAN_TORSO_IK(Ped ped, BOOL toggle) { invoke<Void>(0xFE8290, ped, toggle); }
static void SET_PED_CAN_TORSO_REACT_IK(Ped ped, BOOL p1) { invoke<Void>(0xFE82F0, ped, p1); }
static void SET_PED_CAN_TORSO_VEHICLE_IK(Ped ped, BOOL p1) { invoke<Void>(0xFE8350, ped, p1); }
static void SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Ped ped, BOOL toggle) { invoke<Void>(0xFE83B0, ped, toggle); }
static BOOL IS_PED_HEADTRACKING_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xFE8400, ped1, ped2); }
static BOOL IS_PED_HEADTRACKING_ENTITY(Ped ped, Entity entity) { return invoke<BOOL>(0xFE8430, ped, entity); }
static void SET_PED_PRIMARY_LOOKAT(Ped ped, Ped lookAt) { invoke<Void>(0xFE8460, ped, lookAt); }
static void SET_PED_CLOTH_PIN_FRAMES(Any p0, Any p1) { invoke<Void>(0xFE8470, p0, p1); }
static void SET_PED_CLOTH_PACKAGE_INDEX(Any p0, Any p1) { invoke<Void>(0xFE84C0, p0, p1); }
static void SET_PED_CLOTH_PRONE(Any p0, BOOL p1) { invoke<Void>(0xFE8510, p0, p1); }
static void SET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL value) { invoke<Void>(0xFE8560, ped, flagId, value); }
static void SET_PED_RESET_FLAG(Ped ped, int flagId, BOOL doReset) { invoke<Void>(0xFE8610, ped, flagId, doReset); }
static BOOL GET_PED_CONFIG_FLAG(Ped ped, int flagId, BOOL p2) { return invoke<BOOL>(0xFE8690, ped, flagId, p2); }
static BOOL GET_PED_RESET_FLAG(Ped ped, int flagId) { return invoke<BOOL>(0xFE86C0, ped, flagId); }
static void SET_PED_GROUP_MEMBER_PASSENGER_INDEX(Ped ped, int index) { invoke<Void>(0xFE8730, ped, index); }
static void SET_PED_CAN_EVASIVE_DIVE(Ped ped, BOOL toggle) { invoke<Void>(0xFE8790, ped, toggle); }
static BOOL IS_PED_EVASIVE_DIVING(Ped ped, Entity* evadingEntity) { return invoke<BOOL>(0xFE87F0, ped, evadingEntity); }
static void SET_PED_SHOOTS_AT_COORD(Ped ped, float x, float y, float z, BOOL toggle) { invoke<Void>(0xFE8880, ped, x, y, z, toggle); }
static void SET_PED_MODEL_IS_SUPPRESSED(Hash modelHash, BOOL toggle) { invoke<Void>(0xFE88A0, modelHash, toggle); }
static void STOP_ANY_PED_MODEL_BEING_SUPPRESSED() { invoke<Void>(0xFE88C0); }
static void SET_PED_CAN_BE_TARGETED_WHEN_INJURED(Ped ped, BOOL toggle) { invoke<Void>(0xFE88D0, ped, toggle); }
static void SET_PED_GENERATES_DEAD_BODY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0xFE8930, ped, toggle); }
static void BLOCK_PED_FROM_GENERATING_DEAD_BODY_EVENTS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xFE8950, ped, toggle); }
static void SET_PED_WILL_ONLY_ATTACK_WANTED_PLAYER(Any p0, Any p1) { invoke<Void>(0xFE89A0, p0, p1); }
static void SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(Ped ped, BOOL toggle) { invoke<Void>(0xFE8A00, ped, toggle); }
static void GIVE_PED_HELMET(Ped ped, BOOL cannotRemove, int helmetFlag, int textureIndex) { invoke<Void>(0xFE8A60, ped, cannotRemove, helmetFlag, textureIndex); }
static void REMOVE_PED_HELMET(Ped ped, BOOL instantly) { invoke<Void>(0xFE8A80, ped, instantly); }
static BOOL IS_PED_TAKING_OFF_HELMET(Ped ped) { return invoke<BOOL>(0xFE8AA0, ped); }
static void SET_PED_HELMET(Ped ped, BOOL canWearHelmet) { invoke<Void>(0xFE8B00, ped, canWearHelmet); }
static void SET_PED_HELMET_FLAG(Ped ped, int helmetFlag) { invoke<Void>(0xFE8B50, ped, helmetFlag); }
static void SET_PED_HELMET_PROP_INDEX(Ped ped, int propIndex, BOOL p2) { invoke<Void>(0xFE8BA0, ped, propIndex, p2); }
static void SET_PED_HELMET_VISOR_PROP_INDICES(Ped ped, BOOL p1, int p2, int p3) { invoke<Void>(0xFE8C40, ped, p1, p2, p3); }
static BOOL IS_PED_HELMET_VISOR_UP(Ped ped) { return invoke<BOOL>(0xFE8CC0, ped); }
static void SET_PED_HELMET_TEXTURE_INDEX(Ped ped, int textureIndex) { invoke<Void>(0xFE8D40, ped, textureIndex); }
static BOOL IS_PED_WEARING_HELMET(Ped ped) { return invoke<BOOL>(0xFE8DA0, ped); }
static void CLEAR_PED_STORED_HAT_PROP(Ped ped) { invoke<Void>(0xFE8E00, ped); }
static int GET_PED_HELMET_STORED_HAT_PROP_INDEX(Ped ped) { return invoke<int>(0xFE8E60, ped); }
static int GET_PED_HELMET_STORED_HAT_TEX_INDEX(Ped ped) { return invoke<int>(0xFE8EC0, ped); }
static BOOL IS_CURRENT_HEAD_PROP_A_HELMET(Any p0) { return invoke<BOOL>(0xFE8F20, p0); }
static void SET_PED_TO_LOAD_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xFE8F50, ped, toggle); }
static void SET_PED_CAN_COWER_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xFE8FB0, ped, toggle); }
static void SET_PED_CAN_PEEK_IN_COVER(Ped ped, BOOL toggle) { invoke<Void>(0xFE9010, ped, toggle); }
static void SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(Ped ped, BOOL toggle) { invoke<Void>(0xFE9070, ped, toggle); }
static void SET_PED_LEG_IK_MODE(Ped ped, int mode) { invoke<Void>(0xFE9080, ped, mode); }
static void SET_PED_MOTION_BLUR(Ped ped, BOOL toggle) { invoke<Void>(0xFE90E0, ped, toggle); }
static void SET_PED_CAN_SWITCH_WEAPON(Ped ped, BOOL toggle) { invoke<Void>(0xFE9140, ped, toggle); }
static void SET_PED_DIES_INSTANTLY_IN_WATER(Ped ped, BOOL toggle) { invoke<Void>(0xFE91A0, ped, toggle); }
static void SET_LADDER_CLIMB_INPUT_STATE(Ped ped, int p1) { invoke<Void>(0xFE91F0, ped, p1); }
static void STOP_PED_WEAPON_FIRING_WHEN_DROPPED(Ped ped) { invoke<Void>(0xFE9250, ped); }
static void SET_SCRIPTED_ANIM_SEAT_OFFSET(Ped ped, float p1) { invoke<Void>(0xFE9290, ped, p1); }
static void SET_PED_COMBAT_MOVEMENT(Ped ped, int combatMovement) { invoke<Void>(0xFE92E0, ped, combatMovement); }
static int GET_PED_COMBAT_MOVEMENT(Ped ped) { return invoke<int>(0xFE9330, ped); }
static void SET_PED_COMBAT_ABILITY(Ped ped, int abilityLevel) { invoke<Void>(0xFE9390, ped, abilityLevel); }
static void SET_PED_COMBAT_RANGE(Ped ped, int combatRange) { invoke<Void>(0xFE93E0, ped, combatRange); }
static int GET_PED_COMBAT_RANGE(Ped ped) { return invoke<int>(0xFE9430, ped); }
static void SET_PED_COMBAT_ATTRIBUTES(Ped ped, int attributeId, BOOL enabled) { invoke<Void>(0xFE9490, ped, attributeId, enabled); }
static void SET_PED_TARGET_LOSS_RESPONSE(Ped ped, int responseType) { invoke<Void>(0xFE9500, ped, responseType); }
static BOOL IS_PED_PERFORMING_MELEE_ACTION(Ped ped) { return invoke<BOOL>(0xFE9550, ped); }
static BOOL IS_PED_PERFORMING_STEALTH_KILL(Ped ped) { return invoke<BOOL>(0xFE95C0, ped); }
static BOOL IS_PED_PERFORMING_A_COUNTER_ATTACK(Ped ped) { return invoke<BOOL>(0xFE9660, ped); }
static BOOL IS_PED_BEING_STEALTH_KILLED(Ped ped) { return invoke<BOOL>(0xFE96F0, ped); }
static Ped GET_MELEE_TARGET_FOR_PED(Ped ped) { return invoke<Ped>(0xFE9760, ped); }
static BOOL WAS_PED_KILLED_BY_STEALTH(Ped ped) { return invoke<BOOL>(0xFE97F0, ped); }
static BOOL WAS_PED_KILLED_BY_TAKEDOWN(Ped ped) { return invoke<BOOL>(0xFE9840, ped); }
static BOOL WAS_PED_KNOCKED_OUT(Ped ped) { return invoke<BOOL>(0xFE9890, ped); }
static void SET_PED_FLEE_ATTRIBUTES(Ped ped, int attributeFlags, BOOL enable) { invoke<Void>(0xFE98E0, ped, attributeFlags, enable); }
static void SET_PED_COWER_HASH(Ped ped, const char* p1) { invoke<Void>(0xFE9950, ped, p1); }
static void SET_PED_STEERS_AROUND_DEAD_BODIES(Ped ped, BOOL toggle) { invoke<Void>(0xFE99B0, ped, toggle); }
static void SET_PED_STEERS_AROUND_PEDS(Ped ped, BOOL toggle) { invoke<Void>(0xFE9A10, ped, toggle); }
static void SET_PED_STEERS_AROUND_OBJECTS(Ped ped, BOOL toggle) { invoke<Void>(0xFE9A60, ped, toggle); }
static void SET_PED_STEERS_AROUND_VEHICLES(Ped ped, BOOL toggle) { invoke<Void>(0xFE9AC0, ped, toggle); }
static void SET_PED_IS_AVOIDED_BY_OTHERS(Any p0, BOOL p1) { invoke<Void>(0xFE9B20, p0, p1); }
static void SET_PED_INCREASED_AVOIDANCE_RADIUS(Ped ped) { invoke<Void>(0xFE9B80, ped); }
static void SET_PED_BLOCKS_PATHING_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0xFE9BC0, ped, toggle); }
static void SET_PED_NO_TIME_DELAY_BEFORE_SHOT(Any p0) { invoke<Void>(0xFE9C20, p0); }
static BOOL IS_ANY_PED_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0xFE9C60, x, y, z, radius); }
static void FORCE_PED_AI_AND_ANIMATION_UPDATE(Ped ped, BOOL p1, BOOL p2) { invoke<Void>(0xFE9D40, ped, p1, p2); }
static BOOL IS_PED_HEADING_TOWARDS_POSITION(Ped ped, float x, float y, float z, float p4) { return invoke<BOOL>(0xFE9DD0, ped, x, y, z, p4); }
static void REQUEST_PED_VISIBILITY_TRACKING(Ped ped) { invoke<Void>(0xFE9E00, ped); }
static void REQUEST_PED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xFE9E40, ped, p1); }
static void REQUEST_PED_RESTRICTED_VEHICLE_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xFE9EA0, ped, p1); }
static void REQUEST_PED_USE_SMALL_BBOX_VISIBILITY_TRACKING(Ped ped, BOOL p1) { invoke<Void>(0xFE9EF0, ped, p1); }
static BOOL IS_TRACKED_PED_VISIBLE(Ped ped) { return invoke<BOOL>(0xFE9F50, ped); }
static int GET_TRACKED_PED_PIXELCOUNT(Ped ped) { return invoke<int>(0xFE9FB0, ped); }
static BOOL IS_PED_TRACKED(Ped ped) { return invoke<BOOL>(0xFEA010, ped); }
static BOOL HAS_PED_RECEIVED_EVENT(Ped ped, int eventId) { return invoke<BOOL>(0xFEA070, ped, eventId); }
static BOOL CAN_PED_SEE_HATED_PED(Ped ped1, Ped ped2) { return invoke<BOOL>(0xFEA0A0, ped1, ped2); }
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_TURRET_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xFEA0D0, ped, p1); }
static BOOL CAN_PED_SHUFFLE_TO_OR_FROM_EXTRA_SEAT(Ped ped, int* p1) { return invoke<BOOL>(0xFEA150, ped, p1); }
static int GET_PED_BONE_INDEX(Ped ped, int boneId) { return invoke<int>(0xFEA1D0, ped, boneId); }
static int GET_PED_RAGDOLL_BONE_INDEX(Ped ped, int bone) { return invoke<int>(0xFEA200, ped, bone); }
static void SET_PED_ENVEFF_SCALE(Ped ped, float value) { invoke<Void>(0xFEA210, ped, value); }
static float GET_PED_ENVEFF_SCALE(Ped ped) { return invoke<float>(0xFEA2B0, ped); }
static void SET_ENABLE_PED_ENVEFF_SCALE(Ped ped, BOOL toggle) { invoke<Void>(0xFEA340, ped, toggle); }
static void SET_PED_ENVEFF_CPV_ADD(Ped ped, float p1) { invoke<Void>(0xFEA3C0, ped, p1); }
static void SET_PED_ENVEFF_COLOR_MODULATOR(Ped ped, int p1, int p2, int p3) { invoke<Void>(0xFEA460, ped, p1, p2, p3); }
static void SET_PED_EMISSIVE_SCALE(Ped ped, float intensity) { invoke<Void>(0xFEA530, ped, intensity); }
static float GET_PED_EMISSIVE_SCALE(Ped ped) { return invoke<float>(0xFEA5D0, ped); }
static BOOL IS_PED_SHADER_READY(Ped ped) { return invoke<BOOL>(0xFEA660, ped); }
static void SET_PED_ENABLE_CREW_EMBLEM(Ped ped, BOOL toggle) { invoke<Void>(0xFEA6D0, ped, toggle); }
static void REQUEST_RAGDOLL_BOUNDS_UPDATE(Any p0, Any p1) { invoke<Void>(0xFEA720, p0, p1); }
static void SET_PED_AO_BLOB_RENDERING(Ped ped, BOOL toggle) { invoke<Void>(0xFEA730, ped, toggle); }
static BOOL IS_PED_SHELTERED(Ped ped) { return invoke<BOOL>(0xFEA790, ped); }
static int CREATE_SYNCHRONIZED_SCENE(float x, float y, float z, float roll, float pitch, float yaw, int p6) { return invoke<int>(0xFEA7F0, x, y, z, roll, pitch, yaw, p6); }
static int CREATE_SYNCHRONIZED_SCENE_AT_MAP_OBJECT(float x, float y, float z, float radius, Hash object) { return invoke<int>(0xFEA820, x, y, z, radius, object); }
static BOOL IS_SYNCHRONIZED_SCENE_RUNNING(int sceneId) { return invoke<BOOL>(0xFEA850, sceneId); }
static void SET_SYNCHRONIZED_SCENE_ORIGIN(int sceneID, float x, float y, float z, float roll, float pitch, float yaw, BOOL p7) { invoke<Void>(0xFEA880, sceneID, x, y, z, roll, pitch, yaw, p7); }
static void SET_SYNCHRONIZED_SCENE_PHASE(int sceneID, float phase) { invoke<Void>(0xFEA940, sceneID, phase); }
static float GET_SYNCHRONIZED_SCENE_PHASE(int sceneID) { return invoke<float>(0xFEA980, sceneID); }
static void SET_SYNCHRONIZED_SCENE_RATE(int sceneID, float rate) { invoke<Void>(0xFEA9C0, sceneID, rate); }
static float GET_SYNCHRONIZED_SCENE_RATE(int sceneID) { return invoke<float>(0xFEAA30, sceneID); }
static void SET_SYNCHRONIZED_SCENE_LOOPED(int sceneID, BOOL toggle) { invoke<Void>(0xFEAA70, sceneID, toggle); }
static BOOL IS_SYNCHRONIZED_SCENE_LOOPED(int sceneID) { return invoke<BOOL>(0xFEAAB0, sceneID); }
static void SET_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID, BOOL toggle) { invoke<Void>(0xFEAAF0, sceneID, toggle); }
static BOOL IS_SYNCHRONIZED_SCENE_HOLD_LAST_FRAME(int sceneID) { return invoke<BOOL>(0xFEAB40, sceneID); }
static void ATTACH_SYNCHRONIZED_SCENE_TO_ENTITY(int sceneID, Entity entity, int boneIndex) { invoke<Void>(0xFEAB80, sceneID, entity, boneIndex); }
static void DETACH_SYNCHRONIZED_SCENE(int sceneID) { invoke<Void>(0xFEABF0, sceneID); }
static void TAKE_OWNERSHIP_OF_SYNCHRONIZED_SCENE(int scene) { invoke<Void>(0xFEAC20, scene); }
static BOOL FORCE_PED_MOTION_STATE(Ped ped, Hash motionStateHash, BOOL p2, int p3, BOOL p4) { return invoke<BOOL>(0xFEAC60, ped, motionStateHash, p2, p3, p4); }
static BOOL GET_PED_CURRENT_MOVE_BLEND_RATIO(Ped ped, float* speedX, float* speedY) { return invoke<BOOL>(0xFEACA0, ped, speedX, speedY); }
static void SET_PED_MAX_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xFEAD20, ped, value); }
static void SET_PED_MIN_MOVE_BLEND_RATIO(Ped ped, float value) { invoke<Void>(0xFEAD70, ped, value); }
static void SET_PED_MOVE_RATE_OVERRIDE(Ped ped, float value) { invoke<Void>(0xFEADD0, ped, value); }
static void SET_PED_MOVE_RATE_IN_WATER_OVERRIDE(Ped ped, float p1) { invoke<Void>(0xFEAE50, ped, p1); }
static BOOL PED_HAS_SEXINESS_FLAG_SET(Ped ped, int sexinessFlag) { return invoke<BOOL>(0xFEAED0, ped, sexinessFlag); }
static int GET_PED_NEARBY_VEHICLES(Ped ped, Any* sizeAndVehs) { return invoke<int>(0xFEAF30, ped, sizeAndVehs); }
static int GET_PED_NEARBY_PEDS(Ped ped, Any* sizeAndPeds, int ignore) { return invoke<int>(0xFEAF60, ped, sizeAndPeds, ignore); }
static BOOL HAVE_ALL_STREAMING_REQUESTS_COMPLETED(Ped ped) { return invoke<BOOL>(0xFEAF90, ped); }
static BOOL IS_PED_USING_ACTION_MODE(Ped ped) { return invoke<BOOL>(0xFEAFF0, ped); }
static void SET_PED_USING_ACTION_MODE(Ped ped, BOOL p1, int p2, const char* action) { invoke<Void>(0xFEB050, ped, p1, p2, action); }
static void SET_MOVEMENT_MODE_OVERRIDE(Ped ped, const char* name) { invoke<Void>(0xFEB070, ped, name); }
static void SET_PED_CAPSULE(Ped ped, float value) { invoke<Void>(0xFEB0D0, ped, value); }
static int REGISTER_PEDHEADSHOT(Ped ped) { return invoke<int>(0xFEB120, ped); }
static int REGISTER_PEDHEADSHOT_HIRES(Ped ped) { return invoke<int>(0xFEB190, ped); }
static int REGISTER_PEDHEADSHOT_TRANSPARENT(Ped ped) { return invoke<int>(0xFEB200, ped); }
static void UNREGISTER_PEDHEADSHOT(int id) { invoke<Void>(0xFEB270, id); }
static BOOL IS_PEDHEADSHOT_VALID(int id) { return invoke<BOOL>(0xFEB290, id); }
static BOOL IS_PEDHEADSHOT_READY(int id) { return invoke<BOOL>(0xFEB2D0, id); }
static const char* GET_PEDHEADSHOT_TXD_STRING(int id) { return invoke<const char*>(0xFEB300, id); }
static BOOL REQUEST_PEDHEADSHOT_IMG_UPLOAD(int id) { return invoke<BOOL>(0xFEB330, id); }
static void RELEASE_PEDHEADSHOT_IMG_UPLOAD(int id) { invoke<Void>(0xFEB370, id); }
static BOOL IS_PEDHEADSHOT_IMG_UPLOAD_AVAILABLE() { return invoke<BOOL>(0xFEB390); }
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_FAILED() { return invoke<BOOL>(0xFEB3B0); }
static BOOL HAS_PEDHEADSHOT_IMG_UPLOAD_SUCCEEDED() { return invoke<BOOL>(0xFEB3D0); }
static void SET_PED_HEATSCALE_OVERRIDE(Ped ped, float heatScale) { invoke<Void>(0xFEB3F0, ped, heatScale); }
static void DISABLE_PED_HEATSCALE_OVERRIDE(Ped ped) { invoke<Void>(0xFEB450, ped); }
static void SPAWNPOINTS_START_SEARCH(float p0, float p1, float p2, float p3, float p4, int interiorFlags, float scale, int duration) { invoke<Void>(0xFEB490, p0, p1, p2, p3, p4, interiorFlags, scale, duration); }
static void SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(float x1, float y1, float z1, float x2, float y2, float z2, float width, int interiorFlags, float scale, int duration) { invoke<Void>(0xFEB510, x1, y1, z1, x2, y2, z2, width, interiorFlags, scale, duration); }
static void SPAWNPOINTS_CANCEL_SEARCH() { invoke<Void>(0xFEB5B0); }
static BOOL SPAWNPOINTS_IS_SEARCH_ACTIVE() { return invoke<BOOL>(0xFEB5C0); }
static BOOL SPAWNPOINTS_IS_SEARCH_COMPLETE() { return invoke<BOOL>(0xFEB5F0); }
static BOOL SPAWNPOINTS_IS_SEARCH_FAILED() { return invoke<BOOL>(0xFEB620); }
static int SPAWNPOINTS_GET_NUM_SEARCH_RESULTS() { return invoke<int>(0xFEB650); }
static void SPAWNPOINTS_GET_SEARCH_RESULT(int randomInt, float* x, float* y, float* z) { invoke<Void>(0xFEB680, randomInt, x, y, z); }
static void SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(int p0, int* p1) { invoke<Void>(0xFEB700, p0, p1); }
static void SET_IK_TARGET(Ped ped, int ikIndex, Entity entityLookAt, int boneLookAt, float offsetX, float offsetY, float offsetZ, Any p7, int blendInDuration, int blendOutDuration) { invoke<Void>(0xFEB750, ped, ikIndex, entityLookAt, boneLookAt, offsetX, offsetY, offsetZ, p7, blendInDuration, blendOutDuration); }
static void FORCE_INSTANT_LEG_IK_SETUP(Ped ped) { invoke<Void>(0xFEB790, ped); }
static void REQUEST_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xFEB7F0, asset); }
static BOOL HAS_ACTION_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xFEB870, asset); }
static void REMOVE_ACTION_MODE_ASSET(const char* asset) { invoke<Void>(0xFEB8A0, asset); }
static void REQUEST_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xFEB920, asset); }
static BOOL HAS_STEALTH_MODE_ASSET_LOADED(const char* asset) { return invoke<BOOL>(0xFEB9B0, asset); }
static void REMOVE_STEALTH_MODE_ASSET(const char* asset) { invoke<Void>(0xFEB9E0, asset); }
static void SET_PED_LOD_MULTIPLIER(Ped ped, float multiplier) { invoke<Void>(0xFEBA70, ped, multiplier); }
static void SET_PED_CAN_LOSE_PROPS_ON_DAMAGE(Ped ped, BOOL toggle, int p2) { invoke<Void>(0xFEBAD0, ped, toggle, p2); }
static void SET_FORCE_FOOTSTEP_UPDATE(Ped ped, BOOL toggle) { invoke<Void>(0xFEBB60, ped, toggle); }
static void SET_FORCE_STEP_TYPE(Ped ped, BOOL p1, int type, int p3) { invoke<Void>(0xFEBBB0, ped, p1, type, p3); }
static BOOL IS_ANY_HOSTILE_PED_NEAR_POINT(Ped ped, float x, float y, float z, float radius) { return invoke<BOOL>(0xFEBC20, ped, x, y, z, radius); }
static void SET_PED_CAN_PLAY_IN_CAR_IDLES(Ped ped, BOOL toggle) { invoke<Void>(0xFEBC50, ped, toggle); }
static BOOL IS_TARGET_PED_IN_PERCEPTION_AREA(Ped ped, Ped targetPed, float p2, float p3, float p4, float p5) { return invoke<BOOL>(0xFEBCB0, ped, targetPed, p2, p3, p4, p5); }
static void SET_POP_CONTROL_SPHERE_THIS_FRAME(float x, float y, float z, float min, float max) { invoke<Void>(0xFEBCF0, x, y, z, min, max); }
static void FORCE_ZERO_MASS_IN_COLLISIONS(Ped ped) { invoke<Void>(0xFEBD60, ped); }
static void SET_DISABLE_HIGH_FALL_DEATH(Ped ped, BOOL toggle) { invoke<Void>(0xFEBDA0, ped, toggle); }
static void SET_PED_PHONE_PALETTE_IDX(Any p0, Any p1) { invoke<Void>(0xFEBDF0, p0, p1); }
static void SET_PED_STEER_BIAS(Ped ped, float value) { invoke<Void>(0xFEBE30, ped, value); }
static BOOL IS_PED_SWITCHING_WEAPON(Ped Ped) { return invoke<BOOL>(0xFEBE80, Ped); }
static void SET_PED_TREATED_AS_FRIENDLY(Any p0, Any p1, Any p2) { invoke<Void>(0xFEBEE0, p0, p1, p2); }
static void SET_DISABLE_PED_MAP_COLLISION(Ped ped) { invoke<Void>(0xFEBF60, ped); }
static void ENABLE_MP_LIGHT(Ped ped, BOOL toggle) { invoke<Void>(0xFEC020, ped, toggle); }
static BOOL GET_MP_LIGHT_ENABLED(Ped ped) { return invoke<BOOL>(0xFEC070, ped); }
static void CLEAR_COVER_POINT_FOR_PED(Ped ped) { invoke<Void>(0xFEC0D0, ped); }
static void SET_ALLOW_STUNT_JUMP_CAMERA(Ped ped, BOOL toggle) { invoke<Void>(0xFEC120, ped, toggle); }
static int ADD_ROPE(float x, float y, float z, float rotX, float rotY, float rotZ, float length, int ropeType, float maxLength, float minLength, float windingSpeed, BOOL p11, BOOL p12, BOOL rigid, float p14, BOOL breakWhenShot, Any* unkPtr) { return invoke<int>(0xFF0D80, x, y, z, rotX, rotY, rotZ, length, ropeType, maxLength, minLength, windingSpeed, p11, p12, rigid, p14, breakWhenShot, unkPtr); }
static void DELETE_ROPE(int* ropeId) { invoke<Void>(0xFF0E00, ropeId); }
static void DELETE_CHILD_ROPE(int ropeId) { invoke<Void>(0xFF0E10, ropeId); }
static BOOL DOES_ROPE_EXIST(int* ropeId) { return invoke<BOOL>(0xFF0E30, ropeId); }
static void ROPE_DRAW_ENABLED(int* ropeId, BOOL p1) { invoke<Void>(0xFF0E70, ropeId, p1); }
static void ROPE_DRAW_SHADOW_ENABLED(int* ropeId, BOOL toggle) { invoke<Void>(0xFF0ED0, ropeId, toggle); }
static void LOAD_ROPE_DATA(int ropeId, const char* rope_preset) { invoke<Void>(0xFF0F30, ropeId, rope_preset); }
static void PIN_ROPE_VERTEX(int ropeId, int vertex, float x, float y, float z) { invoke<Void>(0xFF0F40, ropeId, vertex, x, y, z); }
static void UNPIN_ROPE_VERTEX(int ropeId, int vertex) { invoke<Void>(0xFF0F60, ropeId, vertex); }
static int GET_ROPE_VERTEX_COUNT(int ropeId) { return invoke<int>(0xFF0F70, ropeId); }
static void ATTACH_ENTITIES_TO_ROPE(int ropeId, Entity ent1, Entity ent2, float ent1_x, float ent1_y, float ent1_z, float ent2_x, float ent2_y, float ent2_z, float length, BOOL p10, BOOL p11, Any* p12, Any* p13) { invoke<Void>(0xFF0FD0, ropeId, ent1, ent2, ent1_x, ent1_y, ent1_z, ent2_x, ent2_y, ent2_z, length, p10, p11, p12, p13); }
static void ATTACH_ROPE_TO_ENTITY(int ropeId, Entity entity, float x, float y, float z, BOOL p5) { invoke<Void>(0xFF1020, ropeId, entity, x, y, z, p5); }
static void DETACH_ROPE_FROM_ENTITY(int ropeId, Entity entity) { invoke<Void>(0xFF1040, ropeId, entity); }
static void ROPE_SET_UPDATE_PINVERTS(int ropeId) { invoke<Void>(0xFF1050, ropeId); }
static void ROPE_SET_UPDATE_ORDER(int ropeId, Any p1) { invoke<Void>(0xFF1090, ropeId, p1); }
static void ROPE_SET_SMOOTH_REELIN(int ropeId, BOOL p1) { invoke<Void>(0xFF10A0, ropeId, p1); }
static BOOL IS_ROPE_ATTACHED_AT_BOTH_ENDS(int* ropeId) { return invoke<BOOL>(0xFF1100, ropeId); }
static Vector3 GET_ROPE_LAST_VERTEX_COORD(int ropeId) { return invoke<Vector3>(0xFF1150, ropeId); }
static Vector3 GET_ROPE_VERTEX_COORD(int ropeId, int vertex) { return invoke<Vector3>(0xFF11E0, ropeId, vertex); }
static void START_ROPE_WINDING(int ropeId) { invoke<Void>(0xFF1260, ropeId); }
static void STOP_ROPE_WINDING(int ropeId) { invoke<Void>(0xFF1270, ropeId); }
static void START_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xFF1280, ropeId); }
static void STOP_ROPE_UNWINDING_FRONT(int ropeId) { invoke<Void>(0xFF1290, ropeId); }
static void ROPE_CONVERT_TO_SIMPLE(int ropeId) { invoke<Void>(0xFF12A0, ropeId); }
static void ROPE_LOAD_TEXTURES() { invoke<Void>(0xFF1300); }
static BOOL ROPE_ARE_TEXTURES_LOADED() { return invoke<BOOL>(0xFF1320); }
static void ROPE_UNLOAD_TEXTURES() { invoke<Void>(0xFF1350); }
static BOOL DOES_SCRIPT_OWN_ROPE(int ropeId) { return invoke<BOOL>(0xFF1370, ropeId); }
static void ROPE_ATTACH_VIRTUAL_BOUND_GEOM(int ropeId, int p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float p9, float p10, float p11, float p12, float p13) { invoke<Void>(0xFF13F0, ropeId, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12, p13); }
static void ROPE_CHANGE_SCRIPT_OWNER(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0xFF14F0, p0, p1, p2); }
static void ROPE_SET_REFFRAMEVELOCITY_COLLIDERORDER(int ropeId, int p1) { invoke<Void>(0xFF1510, ropeId, p1); }
static float ROPE_GET_DISTANCE_BETWEEN_ENDS(int ropeId) { return invoke<float>(0xFF1550, ropeId); }
static void ROPE_FORCE_LENGTH(int ropeId, float length) { invoke<Void>(0xFF15A0, ropeId, length); }
static void ROPE_RESET_LENGTH(int ropeId, float length) { invoke<Void>(0xFF15F0, ropeId, length); }
static void APPLY_IMPULSE_TO_CLOTH(float posX, float posY, float posZ, float vecX, float vecY, float vecZ, float impulse) { invoke<Void>(0xFF1650, posX, posY, posZ, vecX, vecY, vecZ, impulse); }
static void SET_DAMPING(Entity entity, int vertex, float value) { invoke<Void>(0xFF16A0, entity, vertex, value); }
static void ACTIVATE_PHYSICS(Entity entity) { invoke<Void>(0xFF1720, entity); }
static void SET_CGOFFSET(Entity entity, float x, float y, float z) { invoke<Void>(0xFF1770, entity, x, y, z); }
static Vector3 GET_CGOFFSET(Entity entity) { return invoke<Vector3>(0xFF1780, entity); }
static void SET_CG_AT_BOUNDCENTER(Entity entity) { invoke<Void>(0xFF1820, entity); }
static void BREAK_ENTITY_GLASS(Entity entity, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, Any p9, BOOL p10) { invoke<Void>(0xFF1900, entity, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static BOOL GET_IS_ENTITY_A_FRAG(Object object) { return invoke<BOOL>(0xFF1930, object); }
static void SET_DISABLE_BREAKING(Object object, BOOL toggle) { invoke<Void>(0xFF1990, object, toggle); }
static void RESET_DISABLE_BREAKING(Object object) { invoke<Void>(0xFF1A30, object); }
static void SET_DISABLE_FRAG_DAMAGE(Object object, BOOL toggle) { invoke<Void>(0xFF1A40, object, toggle); }
static void SET_USE_KINEMATIC_PHYSICS(Entity entity, BOOL toggle) { invoke<Void>(0xFF1AE0, entity, toggle); }
static void SET_IN_STUNT_MODE(BOOL p0) { invoke<Void>(0xFF1B60, p0); }
static void SET_IN_ARENA_MODE(BOOL toggle) { invoke<Void>(0xFF1B90, toggle); }
static Ped GET_PLAYER_PED(Player player) { return invoke<Ped>(0xFF9510, player); }
static Ped GET_PLAYER_PED_SCRIPT_INDEX(Player player) { return invoke<Ped>(0xFF9560, player); }
static void SET_PLAYER_MODEL(Player player, Hash model) { invoke<Void>(0xFF95A0, player, model); }
static void CHANGE_PLAYER_PED(Player player, Ped ped, BOOL p2, BOOL resetDamage) { invoke<Void>(0xFF95B0, player, ped, p2, resetDamage); }
static void GET_PLAYER_RGB_COLOUR(Player player, int* r, int* g, int* b) { invoke<Void>(0xFF95E0, player, r, g, b); }
static int GET_NUMBER_OF_PLAYERS() { return invoke<int>(0xFF9640); }
static int GET_PLAYER_TEAM(Player player) { return invoke<int>(0xFF9670, player); }
static void SET_PLAYER_TEAM(Player player, int team) { invoke<Void>(0xFF96B0, player, team); }
static int GET_NUMBER_OF_PLAYERS_IN_TEAM(int team) { return invoke<int>(0xFF9720, team); }
static const char* GET_PLAYER_NAME(Player player) { return invoke<const char*>(0xFF97C0, player); }
static float GET_WANTED_LEVEL_RADIUS(Player player) { return invoke<float>(0xFF9840, player); }
static Vector3 GET_PLAYER_WANTED_CENTRE_POSITION(Player player) { return invoke<Vector3>(0xFF9870, player); }
static void SET_PLAYER_WANTED_CENTRE_POSITION(Player player, Vector3* position, BOOL p2, BOOL p3) { invoke<Void>(0xFF9910, player, position, p2, p3); }
static int GET_WANTED_LEVEL_THRESHOLD(int wantedLevel) { return invoke<int>(0xFF9990, wantedLevel); }
static void SET_PLAYER_WANTED_LEVEL(Player player, int wantedLevel, BOOL disableNoMission) { invoke<Void>(0xFF99B0, player, wantedLevel, disableNoMission); }
static void SET_PLAYER_WANTED_LEVEL_NO_DROP(Player player, int wantedLevel, BOOL p2) { invoke<Void>(0xFF99D0, player, wantedLevel, p2); }
static void SET_PLAYER_WANTED_LEVEL_NOW(Player player, BOOL p1) { invoke<Void>(0xFF9A90, player, p1); }
static BOOL ARE_PLAYER_FLASHING_STARS_ABOUT_TO_DROP(Player player) { return invoke<BOOL>(0xFF9B50, player); }
static BOOL ARE_PLAYER_STARS_GREYED_OUT(Player player) { return invoke<BOOL>(0xFF9BC0, player); }
static BOOL IS_WANTED_AND_HAS_BEEN_SEEN_BY_COPS(Player player) { return invoke<BOOL>(0xFF9C20, player); }
static void SET_DISPATCH_COPS_FOR_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFF9C90, player, toggle); }
static BOOL IS_PLAYER_WANTED_LEVEL_GREATER(Player player, int wantedLevel) { return invoke<BOOL>(0xFF9D00, player, wantedLevel); }
static void CLEAR_PLAYER_WANTED_LEVEL(Player player) { invoke<Void>(0xFF9D50, player); }
static BOOL IS_PLAYER_DEAD(Player player) { return invoke<BOOL>(0xFF9DF0, player); }
static BOOL IS_PLAYER_PRESSING_HORN(Player player) { return invoke<BOOL>(0xFF9E30, player); }
static void SET_PLAYER_CONTROL(Player player, BOOL bHasControl, int flags) { invoke<Void>(0xFF9E70, player, bHasControl, flags); }
static int GET_PLAYER_WANTED_LEVEL(Player player) { return invoke<int>(0xFF9E90, player); }
static void SET_MAX_WANTED_LEVEL(int maxWantedLevel) { invoke<Void>(0xFF9EE0, maxWantedLevel); }
static void SET_POLICE_RADAR_BLIPS(BOOL toggle) { invoke<Void>(0xFF9F00, toggle); }
static void SET_POLICE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFF9F20, player, toggle); }
static BOOL IS_PLAYER_PLAYING(Player player) { return invoke<BOOL>(0xFF9F90, player); }
static void SET_EVERYONE_IGNORE_PLAYER(Player player, BOOL toggle) { invoke<Void>(0xFF9FD0, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xFFA040, player, toggle); }
static void SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xFFA090, player); }
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE(Player player, BOOL toggle) { invoke<Void>(0xFFA0C0, player, toggle); }
static void SET_ALL_NEUTRAL_RANDOM_PEDS_FLEE_THIS_FRAME(Player player) { invoke<Void>(0xFFA120, player); }
static void SET_LAW_PEDS_CAN_ATTACK_NON_WANTED_PLAYER_THIS_FRAME(Player player) { invoke<Void>(0xFFA150, player); }
static void SET_IGNORE_LOW_PRIORITY_SHOCKING_EVENTS(Player player, BOOL toggle) { invoke<Void>(0xFFA180, player, toggle); }
static void SET_WANTED_LEVEL_MULTIPLIER(float multiplier) { invoke<Void>(0xFFA1D0, multiplier); }
static void SET_WANTED_LEVEL_DIFFICULTY(Player player, float difficulty) { invoke<Void>(0xFFA210, player, difficulty); }
static void RESET_WANTED_LEVEL_DIFFICULTY(Player player) { invoke<Void>(0xFFA260, player); }
static int GET_WANTED_LEVEL_TIME_TO_ESCAPE() { return invoke<int>(0xFFA2A0); }
static void SET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player, int wantedLevel, int lossTime) { invoke<Void>(0xFFA2C0, player, wantedLevel, lossTime); }
static void RESET_WANTED_LEVEL_HIDDEN_ESCAPE_TIME(Player player) { invoke<Void>(0xFFA310, player); }
static void START_FIRING_AMNESTY(int duration) { invoke<Void>(0xFFA350, duration); }
static void REPORT_CRIME(Player player, int crimeType, int wantedLvlThresh) { invoke<Void>(0xFFA3B0, player, crimeType, wantedLvlThresh); }
static void SUPPRESS_CRIME_THIS_FRAME(Player player, int crimeType) { invoke<Void>(0xFFA470, player, crimeType); }
static void UPDATE_WANTED_POSITION_THIS_FRAME(Player player) { invoke<Void>(0xFFA4C0, player); }
static void SUPPRESS_LOSING_WANTED_LEVEL_IF_HIDDEN_THIS_FRAME(Player player) { invoke<Void>(0xFFA4F0, player); }
static void ALLOW_EVASION_HUD_IF_DISABLING_HIDDEN_EVASION_THIS_FRAME(Player player, Any p1) { invoke<Void>(0xFFA520, player, p1); }
static void FORCE_START_HIDDEN_EVASION(Player player) { invoke<Void>(0xFFA590, player); }
static void SUPPRESS_WITNESSES_CALLING_POLICE_THIS_FRAME(Player player) { invoke<Void>(0xFFA5D0, player); }
static void REPORT_POLICE_SPOTTED_PLAYER(Player player) { invoke<Void>(0xFFA600, player); }
static void SET_LAW_RESPONSE_DELAY_OVERRIDE(float p0) { invoke<Void>(0xFFA690, p0); }
static void RESET_LAW_RESPONSE_DELAY_OVERRIDE() { invoke<Void>(0xFFA6B0); }
static BOOL CAN_PLAYER_START_MISSION(Player player) { return invoke<BOOL>(0xFFA6C0, player); }
static BOOL IS_PLAYER_READY_FOR_CUTSCENE(Player player) { return invoke<BOOL>(0xFFA700, player); }
static BOOL IS_PLAYER_TARGETTING_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xFFA730, player, entity); }
static BOOL GET_PLAYER_TARGET_ENTITY(Player player, Entity* entity) { return invoke<BOOL>(0xFFA7D0, player, entity); }
static BOOL IS_PLAYER_FREE_AIMING(Player player) { return invoke<BOOL>(0xFFA830, player); }
static BOOL IS_PLAYER_FREE_AIMING_AT_ENTITY(Player player, Entity entity) { return invoke<BOOL>(0xFFA880, player, entity); }
static BOOL GET_ENTITY_PLAYER_IS_FREE_AIMING_AT(Player player, Entity* entity) { return invoke<BOOL>(0xFFA930, player, entity); }
static void SET_PLAYER_LOCKON_RANGE_OVERRIDE(Player player, float range) { invoke<Void>(0xFFA9A0, player, range); }
static void SET_PLAYER_CAN_DO_DRIVE_BY(Player player, BOOL toggle) { invoke<Void>(0xFFA9F0, player, toggle); }
static void SET_PLAYER_CAN_BE_HASSLED_BY_GANGS(Player player, BOOL toggle) { invoke<Void>(0xFFAA40, player, toggle); }
static void SET_PLAYER_CAN_USE_COVER(Player player, BOOL toggle) { invoke<Void>(0xFFAA90, player, toggle); }
static int GET_MAX_WANTED_LEVEL() { return invoke<int>(0xFFAAE0); }
static BOOL IS_PLAYER_TARGETTING_ANYTHING(Player player) { return invoke<BOOL>(0xFFAAF0, player); }
static void SET_PLAYER_SPRINT(Player player, BOOL toggle) { invoke<Void>(0xFFAB40, player, toggle); }
static void RESET_PLAYER_STAMINA(Player player) { invoke<Void>(0xFFAB90, player); }
static void RESTORE_PLAYER_STAMINA(Player player, float p1) { invoke<Void>(0xFFABC0, player, p1); }
static float GET_PLAYER_SPRINT_STAMINA_REMAINING(Player player) { return invoke<float>(0xFFAC20, player); }
static float GET_PLAYER_SPRINT_TIME_REMAINING(Player player) { return invoke<float>(0xFFAC70, player); }
static float GET_PLAYER_UNDERWATER_TIME_REMAINING(Player player) { return invoke<float>(0xFFACE0, player); }
static float SET_PLAYER_UNDERWATER_BREATH_PERCENT_REMAINING(Player player, float time) { return invoke<float>(0xFFAD40, player, time); }
static int GET_PLAYER_GROUP(Player player) { return invoke<int>(0xFFADB0, player); }
static int GET_PLAYER_MAX_ARMOUR(Player player) { return invoke<int>(0xFFADD0, player); }
static BOOL IS_PLAYER_CONTROL_ON(Player player) { return invoke<BOOL>(0xFFAE10, player); }
static BOOL GET_ARE_CAMERA_CONTROLS_DISABLED() { return invoke<BOOL>(0xFFAE70); }
static BOOL IS_PLAYER_SCRIPT_CONTROL_ON(Player player) { return invoke<BOOL>(0xFFAEB0, player); }
static BOOL IS_PLAYER_CLIMBING(Player player) { return invoke<BOOL>(0xFFAF00, player); }
static BOOL IS_PLAYER_BEING_ARRESTED(Player player, BOOL atArresting) { return invoke<BOOL>(0xFFAF40, player, atArresting); }
static void RESET_PLAYER_ARREST_STATE(Player player) { invoke<Void>(0xFFAFD0, player); }
static Vehicle GET_PLAYERS_LAST_VEHICLE() { return invoke<Vehicle>(0xFFB000); }
static Player GET_PLAYER_INDEX() { return invoke<Player>(0xFFB030); }
static Player INT_TO_PLAYERINDEX(int value) { return invoke<Player>(0xFFB070, value); }
static int INT_TO_PARTICIPANTINDEX(int value) { return invoke<int>(0xFFB080, value); }
static int GET_TIME_SINCE_PLAYER_HIT_VEHICLE(Player player) { return invoke<int>(0xFFB090, player); }
static int GET_TIME_SINCE_PLAYER_HIT_PED(Player player) { return invoke<int>(0xFFB0D0, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(Player player) { return invoke<int>(0xFFB110, player); }
static int GET_TIME_SINCE_PLAYER_DROVE_AGAINST_TRAFFIC(Player player) { return invoke<int>(0xFFB150, player); }
static BOOL IS_PLAYER_FREE_FOR_AMBIENT_TASK(Player player) { return invoke<BOOL>(0xFFB190, player); }
static Player PLAYER_ID() { return invoke<Player>(0xFFB1C0); }
static Ped PLAYER_PED_ID() { return invoke<Ped>(0xFFB200); }
static int NETWORK_PLAYER_ID_TO_INT() { return invoke<int>(0xFFB240); }
static BOOL HAS_FORCE_CLEANUP_OCCURRED(int cleanupFlags) { return invoke<BOOL>(0xFFB280, cleanupFlags); }
static void FORCE_CLEANUP(int cleanupFlags) { invoke<Void>(0xFFB2C0, cleanupFlags); }
static void FORCE_CLEANUP_FOR_ALL_THREADS_WITH_THIS_NAME(const char* name, int cleanupFlags) { invoke<Void>(0xFFB300, name, cleanupFlags); }
static void FORCE_CLEANUP_FOR_THREAD_WITH_THIS_ID(int id, int cleanupFlags) { invoke<Void>(0xFFB330, id, cleanupFlags); }
static int GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP() { return invoke<int>(0xFFB370); }
static void SET_PLAYER_MAY_ONLY_ENTER_THIS_VEHICLE(Player player, Vehicle vehicle) { invoke<Void>(0xFFB3A0, player, vehicle); }
static void SET_PLAYER_MAY_NOT_ENTER_ANY_VEHICLE(Player player) { invoke<Void>(0xFFB3B0, player); }
static BOOL GIVE_ACHIEVEMENT_TO_PLAYER(int achievementId) { return invoke<BOOL>(0xFFB3F0, achievementId); }
static BOOL SET_ACHIEVEMENT_PROGRESS(int achievementId, int progress) { return invoke<BOOL>(0xFFB420, achievementId, progress); }
static int GET_ACHIEVEMENT_PROGRESS(int achievementId) { return invoke<int>(0xFFB450, achievementId); }
static BOOL HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0xFFB480, achievementId); }
static BOOL IS_PLAYER_ONLINE() { return invoke<BOOL>(0xFFB4B0); }
static BOOL IS_PLAYER_LOGGING_IN_NP() { return invoke<BOOL>(0xFFB4E0); }
static void DISPLAY_SYSTEM_SIGNIN_UI(BOOL p0) { invoke<Void>(0xFFB4F0, p0); }
static BOOL IS_SYSTEM_UI_BEING_DISPLAYED() { return invoke<BOOL>(0xFFB500); }
static void SET_PLAYER_INVINCIBLE(Player player, BOOL toggle) { invoke<Void>(0xFFB520, player, toggle); }
static BOOL GET_PLAYER_INVINCIBLE(Player player) { return invoke<BOOL>(0xFFB5A0, player); }
static BOOL GET_PLAYER_DEBUG_INVINCIBLE(Player player) { return invoke<BOOL>(0xFFB5E0, player); }
static void SET_PLAYER_INVINCIBLE_BUT_HAS_REACTIONS(Player player, BOOL toggle) { invoke<Void>(0xFFB5F0, player, toggle); }
static void SET_PLAYER_CAN_COLLECT_DROPPED_MONEY(Player player, BOOL p1) { invoke<Void>(0xFFB660, player, p1); }
static void REMOVE_PLAYER_HELMET(Player player, BOOL p2) { invoke<Void>(0xFFB6B0, player, p2); }
static void GIVE_PLAYER_RAGDOLL_CONTROL(Player player, BOOL toggle) { invoke<Void>(0xFFB700, player, toggle); }
static void SET_PLAYER_LOCKON(Player player, BOOL toggle) { invoke<Void>(0xFFB760, player, toggle); }
static void SET_PLAYER_TARGETING_MODE(int targetMode) { invoke<Void>(0xFFB7A0, targetMode); }
static void SET_PLAYER_TARGET_LEVEL(int targetLevel) { invoke<Void>(0xFFB7E0, targetLevel); }
static BOOL GET_IS_USING_FPS_THIRD_PERSON_COVER() { return invoke<BOOL>(0xFFB7F0); }
static BOOL GET_IS_USING_HOOD_CAMERA() { return invoke<BOOL>(0xFFB810); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_PED(Player player) { invoke<Void>(0xFFB830, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_PED(Player player) { return invoke<BOOL>(0xFFB860, player); }
static void CLEAR_PLAYER_HAS_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { invoke<Void>(0xFFB8B0, player); }
static BOOL HAS_PLAYER_DAMAGED_AT_LEAST_ONE_NON_ANIMAL_PED(Player player) { return invoke<BOOL>(0xFFB8E0, player); }
static void SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(Player player, float multiplier) { invoke<Void>(0xFFB930, player, multiplier); }
static void SET_SWIM_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xFFB990, player, multiplier); }
static void SET_RUN_SPRINT_MULTIPLIER_FOR_PLAYER(Player player, float multiplier) { invoke<Void>(0xFFB9F0, player, multiplier); }
static int GET_TIME_SINCE_LAST_ARREST() { return invoke<int>(0xFFBA50); }
static int GET_TIME_SINCE_LAST_DEATH() { return invoke<int>(0xFFBA80); }
static void ASSISTED_MOVEMENT_CLOSE_ROUTE() { invoke<Void>(0xFFBAB0); }
static void ASSISTED_MOVEMENT_FLUSH_ROUTE() { invoke<Void>(0xFFBB00); }
static void SET_PLAYER_FORCED_AIM(Player player, BOOL toggle) { invoke<Void>(0xFFBB30, player, toggle); }
static void SET_PLAYER_FORCED_ZOOM(Player player, BOOL toggle) { invoke<Void>(0xFFBB70, player, toggle); }
static void SET_PLAYER_FORCE_SKIP_AIM_INTRO(Player player, BOOL toggle) { invoke<Void>(0xFFBBC0, player, toggle); }
static void DISABLE_PLAYER_FIRING(Player player, BOOL toggle) { invoke<Void>(0xFFBC10, player, toggle); }
static void DISABLE_PLAYER_THROW_GRENADE_WHILE_USING_GUN() { invoke<Void>(0xFFBCA0); }
static void SET_DISABLE_AMBIENT_MELEE_MOVE(Player player, BOOL toggle) { invoke<Void>(0xFFBCC0, player, toggle); }
static void SET_PLAYER_MAX_ARMOUR(Player player, int value) { invoke<Void>(0xFFBD10, player, value); }
static void SPECIAL_ABILITY_ACTIVATE(Player player, int p1) { invoke<Void>(0xFFBD50, player, p1); }
static void SET_SPECIAL_ABILITY_MP(Player player, int p1, Any p2) { invoke<Void>(0xFFBDB0, player, p1, p2); }
static void SPECIAL_ABILITY_DEACTIVATE_MP(Player player, int p1) { invoke<Void>(0xFFBE20, player, p1); }
static void SPECIAL_ABILITY_DEACTIVATE(Player player, Any p1) { invoke<Void>(0xFFBE30, player, p1); }
static void SPECIAL_ABILITY_DEACTIVATE_FAST(Player player, Any p1) { invoke<Void>(0xFFBE90, player, p1); }
static void SPECIAL_ABILITY_RESET(Player player, Any p1) { invoke<Void>(0xFFBF00, player, p1); }
static void SPECIAL_ABILITY_CHARGE_ON_MISSION_FAILED(Player player, Any p1) { invoke<Void>(0xFFBF60, player, p1); }
static void SPECIAL_ABILITY_CHARGE_SMALL(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xFFBFC0, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_MEDIUM(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xFFBFF0, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_LARGE(Player player, BOOL p1, BOOL p2, Any p3) { invoke<Void>(0xFFC020, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_CONTINUOUS(Player player, Ped p1, Any p2) { invoke<Void>(0xFFC050, player, p1, p2); }
static void SPECIAL_ABILITY_CHARGE_ABSOLUTE(Player player, int p1, BOOL p2, Any p3) { invoke<Void>(0xFFC0D0, player, p1, p2, p3); }
static void SPECIAL_ABILITY_CHARGE_NORMALIZED(Player player, float normalizedValue, BOOL p2, Any p3) { invoke<Void>(0xFFC150, player, normalizedValue, p2, p3); }
static void SPECIAL_ABILITY_FILL_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xFFC1E0, player, p1, p2); }
static void SPECIAL_ABILITY_DEPLETE_METER(Player player, BOOL p1, Any p2) { invoke<Void>(0xFFC260, player, p1, p2); }
static void SPECIAL_ABILITY_LOCK(Hash playerModel, Any p1) { invoke<Void>(0xFFC2E0, playerModel, p1); }
static void SPECIAL_ABILITY_UNLOCK(Hash playerModel, Any p1) { invoke<Void>(0xFFC300, playerModel, p1); }
static BOOL IS_SPECIAL_ABILITY_UNLOCKED(Hash playerModel) { return invoke<BOOL>(0xFFC320, playerModel); }
static BOOL IS_SPECIAL_ABILITY_ACTIVE(Player player, Any p1) { return invoke<BOOL>(0xFFC350, player, p1); }
static BOOL IS_SPECIAL_ABILITY_METER_FULL(Player player, Any p1) { return invoke<BOOL>(0xFFC3C0, player, p1); }
static void ENABLE_SPECIAL_ABILITY(Player player, BOOL toggle, Any p2) { invoke<Void>(0xFFC430, player, toggle, p2); }
static BOOL IS_SPECIAL_ABILITY_ENABLED(Player player, Any p1) { return invoke<BOOL>(0xFFC4A0, player, p1); }
static void SET_SPECIAL_ABILITY_MULTIPLIER(float multiplier) { invoke<Void>(0xFFC510, multiplier); }
static void UPDATE_SPECIAL_ABILITY_FROM_STAT(Player player, Any p1) { invoke<Void>(0xFFC530, player, p1); }
static BOOL GET_IS_PLAYER_DRIVING_ON_HIGHWAY(Player player) { return invoke<BOOL>(0xFFC590, player); }
static BOOL GET_IS_PLAYER_DRIVING_WRECKLESS(Player player, int p1) { return invoke<BOOL>(0xFFC610, player, p1); }
static BOOL GET_IS_MOPPING_AREA_FREE_IN_FRONT_OF_PLAYER(Player player, float p1) { return invoke<BOOL>(0xFFC6B0, player, p1); }
static void START_PLAYER_TELEPORT(Player player, float x, float y, float z, float heading, BOOL p5, BOOL findCollisionLand, BOOL p7) { invoke<Void>(0xFFC6E0, player, x, y, z, heading, p5, findCollisionLand, p7); }
static BOOL UPDATE_PLAYER_TELEPORT(Player player) { return invoke<BOOL>(0xFFC720, player); }
static void STOP_PLAYER_TELEPORT() { invoke<Void>(0xFFC770); }
static BOOL IS_PLAYER_TELEPORT_ACTIVE() { return invoke<BOOL>(0xFFC780); }
static float GET_PLAYER_CURRENT_STEALTH_NOISE(Player player) { return invoke<float>(0xFFC7A0, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(Player player, float regenRate) { invoke<Void>(0xFFC7F0, player, regenRate); }
static float GET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player) { return invoke<float>(0xFFC840, player); }
static void SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(Player player, float limit) { invoke<Void>(0xFFC890, player, limit); }
static void DISABLE_PLAYER_HEALTH_RECHARGE(Player player) { invoke<Void>(0xFFC8F0, player); }
static void SET_PLAYER_FALL_DISTANCE_TO_TRIGGER_RAGDOLL_OVERRIDE(Player player, float p1) { invoke<Void>(0xFFC920, player, p1); }
static void SET_PLAYER_WEAPON_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFFC970, player, modifier); }
static void SET_PLAYER_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFFC9C0, player, modifier); }
static void SET_PLAYER_WEAPON_MINIGUN_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFFCA10, player, modifier); }
static void SET_PLAYER_MELEE_WEAPON_DAMAGE_MODIFIER(Player player, float modifier, BOOL p2) { invoke<Void>(0xFFCA60, player, modifier, p2); }
static void SET_PLAYER_MELEE_WEAPON_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFFCAC0, player, modifier); }
static void SET_PLAYER_VEHICLE_DAMAGE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFFCB10, player, modifier); }
static void SET_PLAYER_VEHICLE_DEFENSE_MODIFIER(Player player, float modifier) { invoke<Void>(0xFFCB60, player, modifier); }
static void SET_PLAYER_MAX_EXPLOSIVE_DAMAGE(Player player, float p1) { invoke<Void>(0xFFCBB0, player, p1); }
static void SET_PLAYER_EXPLOSIVE_DAMAGE_MODIFIER(Player player, Any p1) { invoke<Void>(0xFFCC00, player, p1); }
static void SET_PLAYER_WEAPON_TAKEDOWN_DEFENSE_MODIFIER(Player player, float p1) { invoke<Void>(0xFFCC50, player, p1); }
static void SET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xFFCCA0, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xFFCCE0, player, tintIndex); }
static void SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int index) { invoke<Void>(0xFFCD20, player, index); }
static void GET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(Player player, int* index) { invoke<Void>(0xFFCD60, player, index); }
static void SET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int tintIndex) { invoke<Void>(0xFFCDA0, player, tintIndex); }
static void GET_PLAYER_PARACHUTE_PACK_TINT_INDEX(Player player, int* tintIndex) { invoke<Void>(0xFFCDE0, player, tintIndex); }
static void SET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { invoke<Void>(0xFFCE20, player); }
static BOOL GET_PLAYER_HAS_RESERVE_PARACHUTE(Player player) { return invoke<BOOL>(0xFFCE50, player); }
static void SET_PLAYER_CAN_LEAVE_PARACHUTE_SMOKE_TRAIL(Player player, BOOL enabled) { invoke<Void>(0xFFCE90, player, enabled); }
static void SET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int r, int g, int b) { invoke<Void>(0xFFCEE0, player, r, g, b); }
static void GET_PLAYER_PARACHUTE_SMOKE_TRAIL_COLOR(Player player, int* r, int* g, int* b) { invoke<Void>(0xFFCF90, player, r, g, b); }
static void SET_PLAYER_PHONE_PALETTE_IDX(Player player, int flags) { invoke<Void>(0xFFD000, player, flags); }
static void SET_PLAYER_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xFFD030, player, multiplier); }
static void SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(Player player, float multiplier) { invoke<Void>(0xFFD080, player, multiplier); }
static BOOL CAN_PED_HEAR_PLAYER(Player player, Ped ped) { return invoke<BOOL>(0xFFD0D0, player, ped); }
static void SIMULATE_PLAYER_INPUT_GAIT(Player player, float amount, int gaitType, float speed, BOOL p4, BOOL p5) { invoke<Void>(0xFFD180, player, amount, gaitType, speed, p4, p5); }
static void RESET_PLAYER_INPUT_GAIT(Player player) { invoke<Void>(0xFFD210, player); }
static void SET_AUTO_GIVE_PARACHUTE_WHEN_ENTER_PLANE(Player player, BOOL toggle) { invoke<Void>(0xFFD250, player, toggle); }
static void SET_AUTO_GIVE_SCUBA_GEAR_WHEN_EXIT_VEHICLE(Player player, BOOL toggle) { invoke<Void>(0xFFD2A0, player, toggle); }
static void SET_PLAYER_STEALTH_PERCEPTION_MODIFIER(Player player, float value) { invoke<Void>(0xFFD2F0, player, value); }
static BOOL IS_REMOTE_PLAYER_IN_NON_CLONED_VEHICLE(Player player) { return invoke<BOOL>(0xFFD350, player); }
static void INCREASE_PLAYER_JUMP_SUPPRESSION_RANGE(Player player) { invoke<Void>(0xFFD390, player); }
static void SET_PLAYER_SIMULATE_AIMING(Player player, BOOL toggle) { invoke<Void>(0xFFD3C0, player, toggle); }
static void SET_PLAYER_CLOTH_PIN_FRAMES(Player player, int p1) { invoke<Void>(0xFFD400, player, p1); }
static void SET_PLAYER_CLOTH_PACKAGE_INDEX(int index) { invoke<Void>(0xFFD440, index); }
static void SET_PLAYER_CLOTH_LOCK_COUNTER(int value) { invoke<Void>(0xFFD470, value); }
static void PLAYER_ATTACH_VIRTUAL_BOUND(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7) { invoke<Void>(0xFFD4A0, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYER_DETACH_VIRTUAL_BOUND() { invoke<Void>(0xFFD4C0); }
static BOOL HAS_PLAYER_BEEN_SPOTTED_IN_STOLEN_VEHICLE(Player player) { return invoke<BOOL>(0xFFD520, player); }
static BOOL IS_PLAYER_BATTLE_AWARE(Player player) { return invoke<BOOL>(0xFFD570, player); }
static BOOL GET_PLAYER_RECEIVED_BATTLE_EVENT_RECENTLY(Player player, int p1, BOOL p2) { return invoke<BOOL>(0xFFD5F0, player, p1, p2); }
static void EXTEND_WORLD_BOUNDARY_FOR_PLAYER(float x, float y, float z) { invoke<Void>(0xFFD660, x, y, z); }
static void RESET_WORLD_BOUNDARY_FOR_PLAYER() { invoke<Void>(0xFFD6C0); }
static BOOL IS_PLAYER_RIDING_TRAIN(Player player) { return invoke<BOOL>(0xFFD720, player); }
static BOOL HAS_PLAYER_LEFT_THE_WORLD(Player player) { return invoke<BOOL>(0xFFD780, player); }
static void SET_PLAYER_LEAVE_PED_BEHIND(Player player, BOOL toggle) { invoke<Void>(0xFFD7D0, player, toggle); }
static void SET_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player, int p1, Any p2, Any p3, BOOL p4) { invoke<Void>(0xFFD820, player, p1, p2, p3, p4); }
static void CLEAR_PLAYER_PARACHUTE_VARIATION_OVERRIDE(Player player) { invoke<Void>(0xFFD890, player); }
static void SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xFFD8C0, player, model); }
static void SET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xFFD900, player, model); }
static Hash GET_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0xFFD940, player); }
static Hash GET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { return invoke<Hash>(0xFFD980, player); }
static void CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xFFD9C0, player); }
static void CLEAR_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(Player player) { invoke<Void>(0xFFDA00, player); }
static void SET_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player, Hash model) { invoke<Void>(0xFFDA40, player, model); }
static void CLEAR_PLAYER_PARACHUTE_PACK_MODEL_OVERRIDE(Player player) { invoke<Void>(0xFFDA80, player); }
static void DISABLE_PLAYER_VEHICLE_REWARDS(Player player) { invoke<Void>(0xFFDAC0, player); }
static void SET_PLAYER_SPECTATED_VEHICLE_RADIO_OVERRIDE(BOOL p0) { invoke<Void>(0xFFDAF0, p0); }
static void SET_PLAYER_BLUETOOTH_STATE(Player player, BOOL state) { invoke<Void>(0xFFDB30, player, state); }
static BOOL IS_PLAYER_BLUETOOTH_ENABLE(Player player) { return invoke<BOOL>(0xFFDB80, player); }
static void DISABLE_CAMERA_VIEW_MODE_CYCLE(Player player) { invoke<Void>(0xFFDBD0, player); }
static int GET_PLAYER_FAKE_WANTED_LEVEL(Player player) { return invoke<int>(0xFFDC00, player); }
static void SET_PLAYER_CAN_DAMAGE_PLAYER(Player player1, Player player2, BOOL toggle) { invoke<Void>(0xFFDC60, player1, player2, toggle); }
static void SET_APPLY_WAYPOINT_OF_PLAYER(Player player, int hudColor) { invoke<Void>(0xFFDCE0, player, hudColor); }
static BOOL IS_PLAYER_VEHICLE_WEAPON_TOGGLED_TO_NON_HOMING(Any p0) { return invoke<BOOL>(0xFFDCF0, p0); }
static void SET_PLAYER_VEHICLE_WEAPON_TO_NON_HOMING(Any p0) { invoke<Void>(0xFFDD60, p0); }
static void SET_PLAYER_HOMING_DISABLED_FOR_ALL_VEHICLE_WEAPONS(Any p0, Any p1) { invoke<Void>(0xFFDDC0, p0, p1); }
static void ADD_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0xFFDE40, player, entity); }
static void REMOVE_PLAYER_TARGETABLE_ENTITY(Player player, Entity entity) { invoke<Void>(0xFFDEB0, player, entity); }
static void SET_PLAYER_PREVIOUS_VARIATION_DATA(Player player, int p1, int p2, Any p3, Any p4, Any p5) { invoke<Void>(0xFFDF20, player, p1, p2, p3, p4, p5); }
static void REMOVE_SCRIPT_FIRE_POSITION() { invoke<Void>(0xFFDFA0); }
static void SET_SCRIPT_FIRE_POSITION(float coordX, float coordY, float coordZ) { invoke<Void>(0xFFDFE0, coordX, coordY, coordZ); }
static void REPLAY_START_EVENT(int p0) { invoke<Void>(0xFFE450, p0); }
static void REPLAY_STOP_EVENT() { invoke<Void>(0xFFE460); }
static void REPLAY_CANCEL_EVENT() { invoke<Void>(0xFFE470); }
static void REPLAY_RECORD_BACK_FOR_TIME(float p0, float p1, int p2) { invoke<Void>(0xFFE480, p0, p1, p2); }
static void REPLAY_CHECK_FOR_EVENT_THIS_FRAME(const char* missionNameLabel, Any p1) { invoke<Void>(0xFFE490, missionNameLabel, p1); }
static void REPLAY_PREVENT_RECORDING_THIS_FRAME() { invoke<Void>(0xFFE4A0); }
static void REPLAY_RESET_EVENT_INFO() { invoke<Void>(0xFFE4B0); }
static void REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME() { invoke<Void>(0xFFE4C0); }
static void RECORD_GREATEST_MOMENT(int p0, int p1, int p2) { invoke<Void>(0xFFE4D0, p0, p1, p2); }
static void START_REPLAY_RECORDING(int mode) { invoke<Void>(0xFFE4E0, mode); }
static void STOP_REPLAY_RECORDING() { invoke<Void>(0xFFE4F0); }
static void CANCEL_REPLAY_RECORDING() { invoke<Void>(0xFFE500); }
static BOOL SAVE_REPLAY_RECORDING() { return invoke<BOOL>(0xFFE510); }
static BOOL IS_REPLAY_RECORDING() { return invoke<BOOL>(0xFFE530); }
static BOOL IS_REPLAY_INITIALIZED() { return invoke<BOOL>(0xFFE550); }
static BOOL IS_REPLAY_AVAILABLE() { return invoke<BOOL>(0xFFE580); }
static BOOL IS_REPLAY_RECORD_SPACE_AVAILABLE(BOOL p0) { return invoke<BOOL>(0xFFE5A0, p0); }
static void REGISTER_EFFECT_FOR_REPLAY_EDITOR(const char* p0, BOOL p1) { invoke<Void>(0xFFE6E0, p0, p1); }
static BOOL REPLAY_SYSTEM_HAS_REQUESTED_A_SCRIPT_CLEANUP() { return invoke<BOOL>(0xFFE6F0); }
static void SET_SCRIPTS_HAVE_CLEANED_UP_FOR_REPLAY_SYSTEM() { invoke<Void>(0xFFE700); }
static void SET_REPLAY_SYSTEM_PAUSED_FOR_SAVE(BOOL p0) { invoke<Void>(0xFFE710, p0); }
static void REPLAY_CONTROL_SHUTDOWN() { invoke<Void>(0xFFE730); }
static void ACTIVATE_ROCKSTAR_EDITOR(int p0) { invoke<Void>(0xFFE740, p0); }
static BOOL SAVEMIGRATION_IS_MP_ENABLED() { return invoke<BOOL>(0xFFFFD0); }
static BOOL SAVEMIGRATION_MP_REQUEST_ACCOUNTS() { return invoke<BOOL>(0xFFFFF0); }
static int SAVEMIGRATION_MP_GET_ACCOUNTS_STATUS() { return invoke<int>(0x1000020); }
static int SAVEMIGRATION_MP_NUM_ACCOUNTS() { return invoke<int>(0x1000050); }
static BOOL SAVEMIGRATION_MP_GET_ACCOUNT(int p0, Any* p1) { return invoke<BOOL>(0x1000090, p0, p1); }
static BOOL SAVEMIGRATION_MP_REQUEST_STATUS() { return invoke<BOOL>(0x10000C0); }
static int SAVEMIGRATION_MP_GET_STATUS() { return invoke<int>(0x10000F0); }
static void REQUEST_SCRIPT(const char* scriptName) { invoke<Void>(0x10011A0, scriptName); }
static void SET_SCRIPT_AS_NO_LONGER_NEEDED(const char* scriptName) { invoke<Void>(0x1001220, scriptName); }
static BOOL HAS_SCRIPT_LOADED(const char* scriptName) { return invoke<BOOL>(0x1001280, scriptName); }
static BOOL DOES_SCRIPT_EXIST(const char* scriptName) { return invoke<BOOL>(0x10012D0, scriptName); }
static void REQUEST_SCRIPT_WITH_NAME_HASH(Hash scriptHash) { invoke<Void>(0x1001310, scriptHash); }
static void SET_SCRIPT_WITH_NAME_HASH_AS_NO_LONGER_NEEDED(Hash scriptHash) { invoke<Void>(0x1001400, scriptHash); }
static BOOL HAS_SCRIPT_WITH_NAME_HASH_LOADED(Hash scriptHash) { return invoke<BOOL>(0x10014B0, scriptHash); }
static BOOL DOES_SCRIPT_WITH_NAME_HASH_EXIST(Hash scriptHash) { return invoke<BOOL>(0x1001550, scriptHash); }
static void TERMINATE_THREAD(int threadId) { invoke<Void>(0x10015E0, threadId); }
static BOOL IS_THREAD_ACTIVE(int threadId) { return invoke<BOOL>(0x10015F0, threadId); }
static const char* GET_NAME_OF_SCRIPT_WITH_THIS_ID(int threadId) { return invoke<const char*>(0x1001630, threadId); }
static void SCRIPT_THREAD_ITERATOR_RESET() { invoke<Void>(0x10016B0); }
static int SCRIPT_THREAD_ITERATOR_GET_NEXT_THREAD_ID() { return invoke<int>(0x10016C0); }
static int GET_ID_OF_THIS_THREAD() { return invoke<int>(0x10016E0); }
static void TERMINATE_THIS_THREAD() { invoke<Void>(0x1001700); }
static int GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(Hash scriptHash) { return invoke<int>(0x1001720, scriptHash); }
static const char* GET_THIS_SCRIPT_NAME() { return invoke<const char*>(0x1001740); }
static Hash GET_HASH_OF_THIS_SCRIPT_NAME() { return invoke<Hash>(0x1001770); }
static int GET_NUMBER_OF_EVENTS(int eventGroup) { return invoke<int>(0x1001790, eventGroup); }
static BOOL GET_EVENT_EXISTS(int eventGroup, int eventIndex) { return invoke<BOOL>(0x10017E0, eventGroup, eventIndex); }
static int GET_EVENT_AT_INDEX(int eventGroup, int eventIndex) { return invoke<int>(0x1001810, eventGroup, eventIndex); }
static BOOL GET_EVENT_DATA(int eventGroup, int eventIndex, Any* eventData, int eventDataSize) { return invoke<BOOL>(0x1001850, eventGroup, eventIndex, eventData, eventDataSize); }
static void TRIGGER_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0x10018A0, eventGroup, eventData, eventDataSize, playerBits); }
static void SHUTDOWN_LOADING_SCREEN() { invoke<Void>(0x10018C0); }
static void SET_NO_LOADING_SCREEN(BOOL toggle) { invoke<Void>(0x10018D0, toggle); }
static BOOL GET_NO_LOADING_SCREEN() { return invoke<BOOL>(0x10018F0); }
static void COMMIT_TO_LOADINGSCREEN_SELCTION() { invoke<Void>(0x1001900); }
static BOOL BG_IS_EXITFLAG_SET() { return invoke<BOOL>(0x1001910); }
static void BG_SET_EXITFLAG_RESPONSE() { invoke<Void>(0x1001940); }
static void BG_START_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0x1001960, contextHash); }
static void BG_END_CONTEXT_HASH(Hash contextHash) { invoke<Void>(0x1001980, contextHash); }
static void BG_START_CONTEXT(const char* contextName) { invoke<Void>(0x10019A0, contextName); }
static void BG_END_CONTEXT(const char* contextName) { invoke<Void>(0x10019D0, contextName); }
static BOOL BG_DOES_LAUNCH_PARAM_EXIST(int scriptIndex, const char* p1) { return invoke<BOOL>(0x1001A00, scriptIndex, p1); }
static int BG_GET_LAUNCH_PARAM_VALUE(int scriptIndex, const char* p1) { return invoke<int>(0x1001A70, scriptIndex, p1); }
static int BG_GET_SCRIPT_ID_FROM_NAME_HASH(Hash p0) { return invoke<int>(0x1001AF0, p0); }
static void SEND_TU_SCRIPT_EVENT(int eventGroup, Any* eventData, int eventDataSize, int playerBits) { invoke<Void>(0x1001B20, eventGroup, eventData, eventDataSize, playerBits); }
static void REGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0x10001F0, variable); }
static void UNREGISTER_SCRIPT_VARIABLE(Any* variable) { invoke<Void>(0x1000220, variable); }
static void FORCE_CHECK_SCRIPT_VARIABLES() { invoke<Void>(0x1000250); }
static int START_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x10035F0, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_EXPENSIVE_SYNCHRONOUS_SHAPE_TEST_LOS_PROBE(float x1, float y1, float z1, float x2, float y2, float z2, int flags, Entity entity, int p8) { return invoke<int>(0x1003620, x1, y1, z1, x2, y2, z2, flags, entity, p8); }
static int START_SHAPE_TEST_BOUNDING_BOX(Entity entity, int flags1, int flags2) { return invoke<int>(0x1003650, entity, flags1, flags2); }
static int START_SHAPE_TEST_BOX(float x, float y, float z, float dimX, float dimY, float dimZ, float rotX, float rotY, float rotZ, Any p9, int flags, Entity entity, Any p12) { return invoke<int>(0x1003680, x, y, z, dimX, dimY, dimZ, rotX, rotY, rotZ, p9, flags, entity, p12); }
static int START_SHAPE_TEST_BOUND(Entity entity, int flags1, int flags2) { return invoke<int>(0x10036C0, entity, flags1, flags2); }
static int START_SHAPE_TEST_CAPSULE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, int p9) { return invoke<int>(0x10036F0, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int START_SHAPE_TEST_SWEPT_SPHERE(float x1, float y1, float z1, float x2, float y2, float z2, float radius, int flags, Entity entity, Any p9) { return invoke<int>(0x1003730, x1, y1, z1, x2, y2, z2, radius, flags, entity, p9); }
static int START_SHAPE_TEST_MOUSE_CURSOR_LOS_PROBE(Vector3* pVec1, Vector3* pVec2, int flag, Entity entity, int flag2) { return invoke<int>(0x1003770, pVec1, pVec2, flag, entity, flag2); }
static int GET_SHAPE_TEST_RESULT(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Entity* entityHit) { return invoke<int>(0x1003810, shapeTestHandle, hit, endCoords, surfaceNormal, entityHit); }
static int GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(int shapeTestHandle, BOOL* hit, Vector3* endCoords, Vector3* surfaceNormal, Hash* materialHash, Entity* entityHit) { return invoke<int>(0x10038C0, shapeTestHandle, hit, endCoords, surfaceNormal, materialHash, entityHit); }
static void RELEASE_SCRIPT_GUID_FROM_ENTITY(Entity entityHit) { invoke<Void>(0x1003970, entityHit); }
static int SC_INBOX_GET_TOTAL_NUM_MESSAGES() { return invoke<int>(0x1005B30); }
static Hash SC_INBOX_GET_MESSAGE_TYPE_AT_INDEX(int msgIndex) { return invoke<Hash>(0x1005B50, msgIndex); }
static BOOL SC_INBOX_GET_MESSAGE_IS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x1005BA0, msgIndex); }
static BOOL SC_INBOX_SET_MESSAGE_AS_READ_AT_INDEX(int msgIndex) { return invoke<BOOL>(0x1005BD0, msgIndex); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_INT(int p0, const char* context, int* out) { return invoke<BOOL>(0x1005C00, p0, context, out); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_BOOL(int p0, const char* p1) { return invoke<BOOL>(0x1005C40, p0, p1); }
static BOOL SC_INBOX_MESSAGE_GET_DATA_STRING(int p0, const char* context, char* out) { return invoke<BOOL>(0x1005CC0, p0, context, out); }
static BOOL SC_INBOX_MESSAGE_DO_APPLY(int p0) { return invoke<BOOL>(0x1005D00, p0); }
static const char* SC_INBOX_MESSAGE_GET_RAW_TYPE_AT_INDEX(int p0) { return invoke<const char*>(0x1005D30, p0); }
static void SC_INBOX_MESSAGE_PUSH_GAMER_T0_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0x1005D80, gamerHandle); }
static void SC_INBOX_SEND_UGCSTATUPDATE_TO_RECIP_LIST(Any* data) { invoke<Void>(0x1005E40, data); }
static BOOL SC_INBOX_MESSAGE_GET_UGCDATA(int p0, Any* p1) { return invoke<BOOL>(0x1005E80, p0, p1); }
static BOOL SC_INBOX_SEND_BOUNTY_TO_RECIP_LIST(Any* data) { return invoke<BOOL>(0x1005EB0, data); }
static BOOL SC_INBOX_GET_BOUNTY_DATA_AT_INDEX(int index, Any* outData) { return invoke<BOOL>(0x1005F00, index, outData); }
static void SC_EMAIL_RETRIEVE_EMAILS(int offset, int limit) { invoke<Void>(0x1005F30, offset, limit); }
static int SC_EMAIL_GET_RETRIEVAL_STATUS() { return invoke<int>(0x1005F70); }
static int SC_EMAIL_GET_NUM_RETRIEVED_EMAILS() { return invoke<int>(0x1005FA0); }
static BOOL SC_EMAIL_GET_EMAIL_AT_INDEX(int p0, Any* p1) { return invoke<BOOL>(0x1005FD0, p0, p1); }
static void SC_EMAIL_DELETE_EMAILS(Any* p0, Any p1) { invoke<Void>(0x1006020, p0, p1); }
static void SC_EMAIL_MESSAGE_PUSH_GAMER_TO_RECIP_LIST(Any* gamerHandle) { invoke<Void>(0x1006070, gamerHandle); }
static void SC_EMAIL_MESSAGE_CLEAR_RECIP_LIST() { invoke<Void>(0x1006110); }
static void SC_EMAIL_SEND_EMAIL(const char* p0) { invoke<Void>(0x1006120, p0); }
static BOOL SC_EMAIL_SET_CURRENT_EMAIL_TAG(Any p0) { return invoke<BOOL>(0x1006180, p0); }
static void SC_CACHE_NEW_ROCKSTAR_MSGS(BOOL toggle) { invoke<Void>(0x10061B0, toggle); }
static BOOL SC_HAS_NEW_ROCKSTAR_MSG() { return invoke<BOOL>(0x10061D0); }
static const char* SC_GET_NEW_ROCKSTAR_MSG() { return invoke<const char*>(0x10061E0); }
static BOOL SC_PRESENCE_ATTR_SET_INT(Hash attrHash, int value) { return invoke<BOOL>(0x1006210, attrHash, value); }
static BOOL SC_PRESENCE_ATTR_SET_FLOAT(Hash attrHash, float value) { return invoke<BOOL>(0x1006240, attrHash, value); }
static BOOL SC_PRESENCE_ATTR_SET_STRING(Hash attrHash, const char* value) { return invoke<BOOL>(0x1006280, attrHash, value); }
static BOOL SC_PRESENCE_SET_ACTIVITY_RATING(Any p0, float p1) { return invoke<BOOL>(0x10062C0, p0, p1); }
static BOOL SC_GAMERDATA_GET_INT(const char* name, int* value) { return invoke<BOOL>(0x1006300, name, value); }
static BOOL SC_GAMERDATA_GET_FLOAT(const char* name, float* value) { return invoke<BOOL>(0x1006340, name, value); }
static BOOL SC_GAMERDATA_GET_BOOL(const char* name) { return invoke<BOOL>(0x1006380, name); }
static BOOL SC_GAMERDATA_GET_STRING(const char* name, char* value) { return invoke<BOOL>(0x10063F0, name, value); }
static BOOL SC_GAMERDATA_GET_ACTIVE_XP_BONUS(float* value) { return invoke<BOOL>(0x1006430, value); }
static BOOL SC_PROFANITY_CHECK_STRING(const char* string, int* token) { return invoke<BOOL>(0x1006460, string, token); }
static BOOL SC_PROFANITY_CHECK_STRING_UGC(const char* string, int* token) { return invoke<BOOL>(0x10064A0, string, token); }
static BOOL SC_PROFANITY_GET_CHECK_IS_VALID(int token) { return invoke<BOOL>(0x10064E0, token); }
static BOOL SC_PROFANITY_GET_CHECK_IS_PENDING(int token) { return invoke<BOOL>(0x1006540, token); }
static BOOL SC_PROFANITY_GET_STRING_PASSED(int token) { return invoke<BOOL>(0x10065A0, token); }
static int SC_PROFANITY_GET_STRING_STATUS(int token) { return invoke<int>(0x1006600, token); }
static BOOL SC_LICENSEPLATE_CHECK_STRING(const char* p0, int* p1) { return invoke<BOOL>(0x1006650, p0, p1); }
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_VALID(Any p0) { return invoke<BOOL>(0x1006690, p0); }
static BOOL SC_LICENSEPLATE_GET_CHECK_IS_PENDING(Any p0) { return invoke<BOOL>(0x10066F0, p0); }
static int SC_LICENSEPLATE_GET_COUNT(int token) { return invoke<int>(0x1006750, token); }
static const char* SC_LICENSEPLATE_GET_PLATE(int token, int plateIndex) { return invoke<const char*>(0x10067A0, token, plateIndex); }
static const char* SC_LICENSEPLATE_GET_PLATE_DATA(int token, int plateIndex) { return invoke<const char*>(0x1006800, token, plateIndex); }
static BOOL SC_LICENSEPLATE_SET_PLATE_DATA(const char* oldPlateText, const char* newPlateText, Any* plateData) { return invoke<BOOL>(0x1006860, oldPlateText, newPlateText, plateData); }
static BOOL SC_LICENSEPLATE_ADD(const char* plateText, Any* plateData, int* token) { return invoke<BOOL>(0x10068E0, plateText, plateData, token); }
static BOOL SC_LICENSEPLATE_GET_ADD_IS_PENDING(int token) { return invoke<BOOL>(0x1006950, token); }
static int SC_LICENSEPLATE_GET_ADD_STATUS(int token) { return invoke<int>(0x10069B0, token); }
static BOOL SC_LICENSEPLATE_ISVALID(const char* plateText, int* token) { return invoke<BOOL>(0x1006A00, plateText, token); }
static BOOL SC_LICENSEPLATE_GET_ISVALID_IS_PENDING(int token) { return invoke<BOOL>(0x1006A40, token); }
static int SC_LICENSEPLATE_GET_ISVALID_STATUS(int token) { return invoke<int>(0x1006AA0, token); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE() { return invoke<BOOL>(0x1006AF0); }
static int SC_COMMUNITY_EVENT_GET_EVENT_ID() { return invoke<int>(0x1006B20); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT(const char* p0, int* p1) { return invoke<BOOL>(0x1006B50, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT(const char* p0, float* p1) { return invoke<BOOL>(0x1006B90, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING(const char* p0, char* p1) { return invoke<BOOL>(0x1006BD0, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME(char* p0) { return invoke<BOOL>(0x1006C20, p0); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_FOR_TYPE(const char* p0) { return invoke<BOOL>(0x1006C60, p0); }
static int SC_COMMUNITY_EVENT_GET_EVENT_ID_FOR_TYPE(const char* p0) { return invoke<int>(0x1006C90, p0); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_FOR_TYPE(const char* p0, int* p1, const char* p2) { return invoke<BOOL>(0x1006CC0, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_FOR_TYPE(const char* p0, float* p1, const char* p2) { return invoke<BOOL>(0x1006D10, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_FOR_TYPE(const char* p0, char* p1, const char* p2) { return invoke<BOOL>(0x1006D60, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_FOR_TYPE(char* p0, const char* p1) { return invoke<BOOL>(0x1006DB0, p0, p1); }
static BOOL SC_COMMUNITY_EVENT_IS_ACTIVE_BY_ID(int p0) { return invoke<BOOL>(0x1006E00, p0); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_INT_BY_ID(int p0, const char* p1, int* p2) { return invoke<BOOL>(0x1006E30, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_FLOAT_BY_ID(int p0, const char* p1, float* p2) { return invoke<BOOL>(0x1006E80, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_EXTRA_DATA_STRING_BY_ID(int p0, const char* p1, char* p2) { return invoke<BOOL>(0x1006ED0, p0, p1, p2); }
static BOOL SC_COMMUNITY_EVENT_GET_DISPLAY_NAME_BY_ID(int p0, char* p1) { return invoke<BOOL>(0x1006F20, p0, p1); }
static BOOL SC_TRANSITION_NEWS_SHOW(Any p0) { return invoke<BOOL>(0x1006F70, p0); }
static BOOL SC_TRANSITION_NEWS_SHOW_TIMED(Any p0, Any p1) { return invoke<BOOL>(0x1006FC0, p0, p1); }
static BOOL SC_TRANSITION_NEWS_SHOW_NEXT_ITEM() { return invoke<BOOL>(0x1007010); }
static BOOL SC_TRANSITION_NEWS_HAS_EXTRA_DATA_TU() { return invoke<BOOL>(0x1007040); }
static BOOL SC_TRANSITION_NEWS_GET_EXTRA_DATA_INT_TU(const char* p0, int* p1) { return invoke<BOOL>(0x1007070, p0, p1); }
static void SC_TRANSITION_NEWS_END() { invoke<Void>(0x10070B0); }
static BOOL SC_PAUSE_NEWS_INIT_STARTER_PACK(Any p0) { return invoke<BOOL>(0x10070D0, p0); }
static BOOL SC_PAUSE_NEWS_GET_PENDING_STORY(Any p0) { return invoke<BOOL>(0x1007110, p0); }
static void SC_PAUSE_NEWS_SHUTDOWN() { invoke<Void>(0x1007140); }
static const char* SC_ACCOUNT_INFO_GET_NICKNAME() { return invoke<const char*>(0x1007160); }
static BOOL SC_ACHIEVEMENT_INFO_STATUS(int* p0) { return invoke<BOOL>(0x1007180, p0); }
static BOOL SC_HAS_ACHIEVEMENT_BEEN_PASSED(int achievementId) { return invoke<BOOL>(0x10071F0, achievementId); }
static BOOL STAT_CLEAR_SLOT_FOR_RELOAD(int statSlot) { return invoke<BOOL>(0x101DF50, statSlot); }
static BOOL STAT_LOAD(int statSlot) { return invoke<BOOL>(0x101E000, statSlot); }
static BOOL STAT_SAVE(int p0, BOOL p1, int p2, BOOL p3) { return invoke<BOOL>(0x101E030, p0, p1, p2, p3); }
static void STAT_SET_OPEN_SAVETYPE_IN_JOB(int p0) { invoke<Void>(0x101E070, p0); }
static BOOL STAT_LOAD_PENDING(int statSlot) { return invoke<BOOL>(0x101E0A0, statSlot); }
static BOOL STAT_SAVE_PENDING() { return invoke<BOOL>(0x101E0D0); }
static BOOL STAT_SAVE_PENDING_OR_REQUESTED() { return invoke<BOOL>(0x101E0F0); }
static BOOL STAT_DELETE_SLOT(int p0) { return invoke<BOOL>(0x101E130, p0); }
static BOOL STAT_SLOT_IS_LOADED(int statSlot) { return invoke<BOOL>(0x101E1A0, statSlot); }
static BOOL STAT_CLOUD_SLOT_LOAD_FAILED(int p0) { return invoke<BOOL>(0x101E1D0, p0); }
static int STAT_CLOUD_SLOT_LOAD_FAILED_CODE(Any p0) { return invoke<int>(0x101E200, p0); }
static void STAT_SET_BLOCK_SAVES(BOOL toggle) { invoke<Void>(0x101E250, toggle); }
static BOOL STAT_GET_BLOCK_SAVES() { return invoke<BOOL>(0x101E270); }
static BOOL STAT_CLOUD_SLOT_SAVE_FAILED(Any p0) { return invoke<BOOL>(0x101E290, p0); }
static void STAT_CLEAR_PENDING_SAVES(Any p0) { invoke<Void>(0x101E310, p0); }
static BOOL STAT_LOAD_DIRTY_READ_DETECTED() { return invoke<BOOL>(0x101E350); }
static void STAT_CLEAR_DIRTY_READ_DETECTED() { invoke<Void>(0x101E380); }
static BOOL STAT_GET_LOAD_SAFE_TO_PROGRESS_TO_MP_FROM_SP() { return invoke<BOOL>(0x101E3B0); }
static BOOL STAT_SET_INT(Hash statName, int value, BOOL save) { return invoke<BOOL>(0x101E3D0, statName, value, save); }
static BOOL STAT_SET_FLOAT(Hash statName, float value, BOOL save) { return invoke<BOOL>(0x101E400, statName, value, save); }
static BOOL STAT_SET_BOOL(Hash statName, BOOL value, BOOL save) { return invoke<BOOL>(0x101E440, statName, value, save); }
static BOOL STAT_SET_GXT_LABEL(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0x101E480, statName, value, save); }
static BOOL STAT_SET_DATE(Hash statName, Any* value, int numFields, BOOL save) { return invoke<BOOL>(0x101E4C0, statName, value, numFields, save); }
static BOOL STAT_SET_STRING(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0x101E500, statName, value, save); }
static BOOL STAT_SET_POS(Hash statName, float x, float y, float z, BOOL save) { return invoke<BOOL>(0x101E540, statName, x, y, z, save); }
static BOOL STAT_SET_MASKED_INT(Hash statName, int p1, int p2, int p3, BOOL save) { return invoke<BOOL>(0x101E580, statName, p1, p2, p3, save); }
static BOOL STAT_SET_USER_ID(Hash statName, const char* value, BOOL save) { return invoke<BOOL>(0x101E5C0, statName, value, save); }
static BOOL STAT_SET_CURRENT_POSIX_TIME(Hash statName, BOOL p1) { return invoke<BOOL>(0x101E600, statName, p1); }
static BOOL STAT_GET_INT(Hash statHash, int* outValue, int p2) { return invoke<BOOL>(0x101E630, statHash, outValue, p2); }
static BOOL STAT_GET_FLOAT(Hash statHash, float* outValue, Any p2) { return invoke<BOOL>(0x101E710, statHash, outValue, p2); }
static BOOL STAT_GET_BOOL(Hash statHash, BOOL* outValue, Any p2) { return invoke<BOOL>(0x101E740, statHash, outValue, p2); }
static BOOL STAT_GET_DATE(Hash statHash, Any* outValue, int numFields, Any p3) { return invoke<BOOL>(0x101E770, statHash, outValue, numFields, p3); }
static const char* STAT_GET_STRING(Hash statHash, int p1) { return invoke<const char*>(0x101E7A0, statHash, p1); }
static BOOL STAT_GET_POS(Hash statName, float* outX, float* outY, float* outZ, Any p4) { return invoke<BOOL>(0x101E7D0, statName, outX, outY, outZ, p4); }
static BOOL STAT_GET_MASKED_INT(Hash statHash, int* outValue, int p2, int p3, Any p4) { return invoke<BOOL>(0x101E810, statHash, outValue, p2, p3, p4); }
static const char* STAT_GET_USER_ID(Hash statHash) { return invoke<const char*>(0x101E8E0, statHash); }
static const char* STAT_GET_LICENSE_PLATE(Hash statName) { return invoke<const char*>(0x101E910, statName); }
static BOOL STAT_SET_LICENSE_PLATE(Hash statName, const char* str) { return invoke<BOOL>(0x101E940, statName, str); }
static void STAT_INCREMENT(Hash statName, float value) { invoke<Void>(0x101E970, statName, value); }
static BOOL STAT_COMMUNITY_START_SYNCH() { return invoke<BOOL>(0x101E9F0); }
static BOOL STAT_COMMUNITY_SYNCH_IS_PENDING() { return invoke<BOOL>(0x101EA20); }
static BOOL STAT_COMMUNITY_GET_HISTORY(Hash statName, int p1, float* outValue) { return invoke<BOOL>(0x101EA30, statName, p1, outValue); }
static void STAT_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0x101EA70, p0); }
static void STAT_LOCAL_RESET_ALL_ONLINE_CHARACTER_STATS(int p0) { invoke<Void>(0x101EA80, p0); }
static int STAT_GET_NUMBER_OF_DAYS(Hash statName) { return invoke<int>(0x101EAE0, statName); }
static int STAT_GET_NUMBER_OF_HOURS(Hash statName) { return invoke<int>(0x101EB00, statName); }
static int STAT_GET_NUMBER_OF_MINUTES(Hash statName) { return invoke<int>(0x101EB20, statName); }
static int STAT_GET_NUMBER_OF_SECONDS(Hash statName) { return invoke<int>(0x101EB40, statName); }
static void STAT_SET_PROFILE_SETTING_VALUE(int profileSetting, int value) { invoke<Void>(0x101EB60, profileSetting, value); }
static void STATS_COMPLETED_CHARACTER_CREATION(Any p0) { invoke<Void>(0x101EBD0, p0); }
static int PACKED_STAT_GET_INT_STAT_INDEX(int p0) { return invoke<int>(0x101EBE0, p0); }
static Hash GET_PACKED_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0x101EC10, index, spStat, charStat, character); }
static Hash GET_PACKED_TU_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character) { return invoke<Hash>(0x101ECF0, index, spStat, charStat, character); }
static Hash GET_PACKED_NG_INT_STAT_KEY(int index, BOOL spStat, BOOL charStat, int character, const char* section) { return invoke<Hash>(0x101EDD0, index, spStat, charStat, character, section); }
static BOOL GET_PACKED_STAT_BOOL_CODE(int index, int characterSlot) { return invoke<BOOL>(0x101EEB0, index, characterSlot); }
static int GET_PACKED_STAT_INT_CODE(int index, int characterSlot) { return invoke<int>(0x101EF60, index, characterSlot); }
static void SET_PACKED_STAT_BOOL_CODE(int index, BOOL value, int characterSlot) { invoke<Void>(0x101F010, index, value, characterSlot); }
static void SET_PACKED_STAT_INT_CODE(int index, int value, int characterSlot) { invoke<Void>(0x101F060, index, value, characterSlot); }
static void PLAYSTATS_BACKGROUND_SCRIPT_ACTION(const char* action, int value) { invoke<Void>(0x101F0B0, action, value); }
static void PLAYSTATS_NPC_INVITE(const char* p0) { invoke<Void>(0x101F170, p0); }
static void PLAYSTATS_AWARD_XP(int amount, Hash type, Hash category) { invoke<Void>(0x101F180, amount, type, category); }
static void PLAYSTATS_RANK_UP(int rank) { invoke<Void>(0x101F1A0, rank); }
static void PLAYSTATS_STARTED_SESSION_IN_OFFLINEMODE() { invoke<Void>(0x101F1B0); }
static void PLAYSTATS_ACTIVITY_DONE(int p0, int activityId) { invoke<Void>(0x101F240, p0, activityId); }
static void PLAYSTATS_LEAVE_JOB_CHAIN(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x101F2E0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_STARTED(const char* p0, Any p1, Any p2, BOOL p3) { invoke<Void>(0x101F3A0, p0, p1, p2, p3); }
static void PLAYSTATS_MISSION_OVER(const char* p0, Any p1, Any p2, BOOL p3, BOOL p4, BOOL p5) { invoke<Void>(0x101F3C0, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MISSION_CHECKPOINT(const char* p0, Any p1, Any p2, Any p3) { invoke<Void>(0x101F470, p0, p1, p2, p3); }
static void PLAYSTATS_RANDOM_MISSION_DONE(const char* name, Any p1, Any p2, Any p3) { invoke<Void>(0x101F4A0, name, p1, p2, p3); }
static void PLAYSTATS_ROS_BET(int amount, int act, Player player, float cm) { invoke<Void>(0x101F4D0, amount, act, player, cm); }
static void PLAYSTATS_RACE_CHECKPOINT(Vehicle p0, Any p1, int p2, int p3, Any p4) { invoke<Void>(0x101F580, p0, p1, p2, p3, p4); }
static BOOL PLAYSTATS_CREATE_MATCH_HISTORY_ID_2(int* playerAccountId, int* posixTime) { return invoke<BOOL>(0x101F5B0, playerAccountId, posixTime); }
static void PLAYSTATS_MATCH_STARTED(Any p0, Any p1, Any p2) { invoke<Void>(0x101F5E0, p0, p1, p2); }
static void PLAYSTATS_SHOP_ITEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x101F600, p0, p1, p2, p3, p4); }
static void PLAYSTATS_CRATE_DROP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x101F630, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYSTATS_CRATE_CREATED(float p0, float p1, float p2) { invoke<Void>(0x101F6E0, p0, p1, p2); }
static void PLAYSTATS_HOLD_UP_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x101F710, p0, p1, p2, p3); }
static void PLAYSTATS_IMPORT_EXPORT_MISSION_DONE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x101F740, p0, p1, p2, p3); }
static void PLAYSTATS_RACE_TO_POINT_MISSION_DONE(int p0, Any p1, Any p2, Any p3) { invoke<Void>(0x101F7C0, p0, p1, p2, p3); }
static void PLAYSTATS_ACQUIRED_HIDDEN_PACKAGE(Any p0) { invoke<Void>(0x101F880, p0); }
static void PLAYSTATS_WEBSITE_VISITED(Hash scaleformHash, int p1) { invoke<Void>(0x101F890, scaleformHash, p1); }
static void PLAYSTATS_FRIEND_ACTIVITY(int p0, BOOL p1) { invoke<Void>(0x101F8A0, p0, p1); }
static void PLAYSTATS_ODDJOB_DONE(int totalTimeMs, int p1, BOOL p2) { invoke<Void>(0x101F8B0, totalTimeMs, p1, p2); }
static void PLAYSTATS_PROP_CHANGE(Ped p0, int p1, int p2, int p3) { invoke<Void>(0x101F8C0, p0, p1, p2, p3); }
static void PLAYSTATS_CLOTH_CHANGE(Ped p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x101F950, p0, p1, p2, p3, p4); }
static void PLAYSTATS_WEAPON_MODE_CHANGE(Hash weaponHash, Hash componentHashTo, Hash componentHashFrom) { invoke<Void>(0x101F9D0, weaponHash, componentHashTo, componentHashFrom); }
static void PLAYSTATS_CHEAT_APPLIED(const char* cheat) { invoke<Void>(0x101FA90, cheat); }
static void PLAYSTATS_JOB_ACTIVITY_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x101FAB0, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_BEND(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x101FAD0, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_LTS_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x101FAF0, p0, p1, p2, p3); }
static void PLAYSTATS_JOB_LTS_ROUND_END(Any* p0, Any* p1, Any* p2, Any* p3) { invoke<Void>(0x101FB10, p0, p1, p2, p3); }
static void PLAYSTATS_QUICKFIX_TOOL(int element, const char* item) { invoke<Void>(0x101FB30, element, item); }
static void PLAYSTATS_IDLE_KICK(int msStoodIdle) { invoke<Void>(0x101FBE0, msStoodIdle); }
static void PLAYSTATS_SET_JOIN_TYPE(int joinType) { invoke<Void>(0x101FC60, joinType); }
static void PLAYSTATS_HEIST_SAVE_CHEAT(Hash hash, int p1) { invoke<Void>(0x101FC70, hash, p1); }
static void PLAYSTATS_APPEND_DIRECTOR_METRIC(Any* p0) { invoke<Void>(0x101FC80, p0); }
static void PLAYSTATS_AWARD_BAD_SPORT(int id) { invoke<Void>(0x101FD00, id); }
static void PLAYSTATS_PEGASUS_AS_PERSONAL_AIRCRAFT(Hash modelHash) { invoke<Void>(0x101FD70, modelHash); }
static void _PLAYSTATS_SHOPMENU_NAV(Any p0, Any p1, Any p2) { invoke<Void>(0x101FDF0, p0, p1, p2); }
static void PLAYSTATS_FM_EVENT_CHALLENGES(Any p0) { invoke<Void>(0x101FE80, p0); }
static void PLAYSTATS_FM_EVENT_VEHICLETARGET(Any p0) { invoke<Void>(0x101FE90, p0); }
static void PLAYSTATS_FM_EVENT_URBANWARFARE(Any p0) { invoke<Void>(0x101FEA0, p0); }
static void PLAYSTATS_FM_EVENT_CHECKPOINTCOLLECTION(Any p0) { invoke<Void>(0x101FEB0, p0); }
static void PLAYSTATS_FM_EVENT_ATOB(Any p0) { invoke<Void>(0x101FEC0, p0); }
static void PLAYSTATS_FM_EVENT_PENNEDIN(Any p0) { invoke<Void>(0x101FED0, p0); }
static void PLAYSTATS_FM_EVENT_PASSTHEPARCEL(Any p0) { invoke<Void>(0x101FEE0, p0); }
static void PLAYSTATS_FM_EVENT_HOTPROPERTY(Any p0) { invoke<Void>(0x101FEF0, p0); }
static void PLAYSTATS_FM_EVENT_DEADDROP(Any p0) { invoke<Void>(0x101FF00, p0); }
static void PLAYSTATS_FM_EVENT_KINGOFTHECASTLE(Any p0) { invoke<Void>(0x101FF10, p0); }
static void PLAYSTATS_FM_EVENT_CRIMINALDAMAGE(Any p0) { invoke<Void>(0x101FF20, p0); }
static void PLAYSTATS_FM_EVENT_COMPETITIVEURBANWARFARE(Any p0) { invoke<Void>(0x101FF30, p0); }
static void PLAYSTATS_FM_EVENT_HUNTBEAST(Any p0) { invoke<Void>(0x101FF40, p0); }
static void PLAYSTATS_PIMENU_HIDE_OPTIONS(Any* data) { invoke<Void>(0x101FF50, data); }
static int LEADERBOARDS_GET_NUMBER_OF_COLUMNS(int p0, Any p1) { return invoke<int>(0x1020000, p0, p1); }
static int LEADERBOARDS_GET_COLUMN_ID(int p0, int p1, int p2) { return invoke<int>(0x1020040, p0, p1, p2); }
static int LEADERBOARDS_GET_COLUMN_TYPE(int p0, Any p1, Any p2) { return invoke<int>(0x1020090, p0, p1, p2); }
static int LEADERBOARDS_READ_CLEAR_ALL() { return invoke<int>(0x1020100); }
static int LEADERBOARDS_READ_CLEAR(Any p0, Any p1, Any p2) { return invoke<int>(0x1020140, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_PENDING(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x10201B0, p0, p1, p2); }
static BOOL LEADERBOARDS_READ_ANY_PENDING() { return invoke<BOOL>(0x10201E0); }
static BOOL LEADERBOARDS_READ_SUCCESSFUL(Any p0, Any p1, Any p2) { return invoke<BOOL>(0x1020230, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_FRIENDS_BY_ROW(Any* p0, Any* p1, Any p2, BOOL p3, Any p4, Any p5) { return invoke<BOOL>(0x10202B0, p0, p1, p2, p3, p4, p5); }
static BOOL LEADERBOARDS2_READ_BY_HANDLE(Any* p0, Any* p1) { return invoke<BOOL>(0x10202F0, p0, p1); }
static BOOL LEADERBOARDS2_READ_BY_ROW(Any* p0, Any* p1, Any p2, Any* p3, Any p4, Any* p5, Any p6) { return invoke<BOOL>(0x1020320, p0, p1, p2, p3, p4, p5, p6); }
static BOOL LEADERBOARDS2_READ_BY_RANK(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x1020360, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_RADIUS(Any* p0, Any p1, Any* p2) { return invoke<BOOL>(0x1020390, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_INT(Any* p0, Any p1, Any p2) { return invoke<BOOL>(0x10203C0, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_SCORE_FLOAT(Any* p0, float p1, Any p2) { return invoke<BOOL>(0x10203F0, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_RANK_PREDICTION(Any* p0, Any* p1, Any* p2) { return invoke<BOOL>(0x1020420, p0, p1, p2); }
static BOOL LEADERBOARDS2_READ_BY_PLAFORM(Any* p0, const char* gamerHandleCsv, const char* platformName) { return invoke<BOOL>(0x1020450, p0, gamerHandleCsv, platformName); }
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_START(Any* p0) { return invoke<BOOL>(0x1020480, p0); }
static void LEADERBOARDS2_READ_GET_ROW_DATA_END() { invoke<Void>(0x10204B0); }
static BOOL LEADERBOARDS2_READ_GET_ROW_DATA_INFO(Any p0, Any* p1) { return invoke<BOOL>(0x10204E0, p0, p1); }
static int LEADERBOARDS2_READ_GET_ROW_DATA_INT(Any p0, Any p1) { return invoke<int>(0x1020620, p0, p1); }
static float LEADERBOARDS2_READ_GET_ROW_DATA_FLOAT(Any p0, Any p1) { return invoke<float>(0x1020650, p0, p1); }
static BOOL LEADERBOARDS2_WRITE_DATA(Any* p0) { return invoke<BOOL>(0x1020680, p0); }
static void LEADERBOARDS_WRITE_ADD_COLUMN(Any p0, Any p1, float p2) { invoke<Void>(0x10206B0, p0, p1, p2); }
static void LEADERBOARDS_WRITE_ADD_COLUMN_LONG(Any p0, Any p1, Any p2) { invoke<Void>(0x10206D0, p0, p1, p2); }
static BOOL LEADERBOARDS_CACHE_DATA_ROW(Any* p0) { return invoke<BOOL>(0x10206F0, p0); }
static void LEADERBOARDS_CLEAR_CACHE_DATA() { invoke<Void>(0x1020720); }
static void LEADERBOARDS_CLEAR_CACHE_DATA_ID(Any p0) { invoke<Void>(0x1020740, p0); }
static BOOL LEADERBOARDS_GET_CACHE_EXISTS(Any p0) { return invoke<BOOL>(0x1020760, p0); }
static int LEADERBOARDS_GET_CACHE_TIME(Any p0) { return invoke<int>(0x10207C0, p0); }
static int LEADERBOARDS_GET_CACHE_NUMBER_OF_ROWS(Any p0) { return invoke<int>(0x1020820, p0); }
static BOOL LEADERBOARDS_GET_CACHE_DATA_ROW(Any p0, Any p1, Any* p2) { return invoke<BOOL>(0x1020860, p0, p1, p2); }
static void PRESENCE_EVENT_UPDATESTAT_INT(Hash statHash, int value, int p2) { invoke<Void>(0x1020890, statHash, value, p2); }
static void PRESENCE_EVENT_UPDATESTAT_FLOAT(Hash statHash, float value, int p2) { invoke<Void>(0x10208B0, statHash, value, p2); }
static void PRESENCE_EVENT_UPDATESTAT_INT_WITH_STRING(Hash statHash, int value, int p2, const char* string) { invoke<Void>(0x10208D0, statHash, value, p2, string); }
static BOOL GET_PLAYER_HAS_DRIVEN_ALL_VEHICLES() { return invoke<BOOL>(0x1020910); }
static void SET_HAS_POSTED_ALL_VEHICLES_DRIVEN() { invoke<Void>(0x1020940); }
static void SET_PROFILE_SETTING_PROLOGUE_COMPLETE() { invoke<Void>(0x1020990); }
static void SET_PROFILE_SETTING_SP_CHOP_MISSION_COMPLETE() { invoke<Void>(0x10209E0); }
static void SET_PROFILE_SETTING_CREATOR_RACES_DONE(int value) { invoke<Void>(0x1020A30, value); }
static void SET_PROFILE_SETTING_CREATOR_DM_DONE(int value) { invoke<Void>(0x1020A90, value); }
static void SET_PROFILE_SETTING_CREATOR_CTF_DONE(int value) { invoke<Void>(0x1020AF0, value); }
static void SET_JOB_ACTIVITY_ID_STARTED(Any p0, int characterSlot) { invoke<Void>(0x1020B50, p0, characterSlot); }
static void SET_FREEMODE_PROLOGUE_DONE(Any p0, int characterSlot) { invoke<Void>(0x1020B60, p0, characterSlot); }
static void SET_FREEMODE_STRAND_PROGRESSION_STATUS(int profileSetting, int settingValue) { invoke<Void>(0x1020B70, profileSetting, settingValue); }
static void STAT_NETWORK_INCREMENT_ON_SUICIDE(Any p0, float p1) { invoke<Void>(0x1020BC0, p0, p1); }
static void STAT_SET_CHEAT_IS_ACTIVE() { invoke<Void>(0x1020C40); }
static BOOL LEADERBOARDS2_WRITE_DATA_FOR_EVENT_TYPE(Any* p0, Any* p1) { return invoke<BOOL>(0x1020C60, p0, p1); }
static void FORCE_CLOUD_MP_STATS_DOWNLOAD_AND_OVERWRITE_LOCAL_SAVE() { invoke<Void>(0x1020C90); }
static void STAT_MIGRATE_CLEAR_FOR_RESTART() { invoke<Void>(0x1020CE0); }
static BOOL STAT_MIGRATE_SAVEGAME_START(const char* platformName) { return invoke<BOOL>(0x1020CF0, platformName); }
static int STAT_MIGRATE_SAVEGAME_GET_STATUS() { return invoke<int>(0x1020D00); }
static BOOL STAT_MIGRATE_CHECK_ALREADY_DONE() { return invoke<BOOL>(0x1020D10); }
static BOOL STAT_MIGRATE_CHECK_START() { return invoke<BOOL>(0x1020D20); }
static int STAT_MIGRATE_CHECK_GET_IS_PLATFORM_AVAILABLE(int p0) { return invoke<int>(0x1020D30, p0); }
static int STAT_MIGRATE_CHECK_GET_PLATFORM_STATUS(int p0, Any* p1) { return invoke<int>(0x1020D40, p0, p1); }
static int STAT_GET_SAVE_MIGRATION_STATUS(Any* data) { return invoke<int>(0x1020D50, data); }
static BOOL STAT_SAVE_MIGRATION_CANCEL_PENDING_OPERATION() { return invoke<BOOL>(0x1020D60); }
static int STAT_GET_CANCEL_SAVE_MIGRATION_STATUS() { return invoke<int>(0x1020D70); }
static BOOL STAT_SAVE_MIGRATION_CONSUME_CONTENT(Hash contentId, const char* srcPlatform, const char* srcGamerHandle) { return invoke<BOOL>(0x1020D80, contentId, srcPlatform, srcGamerHandle); }
static int STAT_GET_SAVE_MIGRATION_CONSUME_CONTENT_STATUS(int* p0) { return invoke<int>(0x1020D90, p0); }
static void STAT_ENABLE_STATS_TRACKING() { invoke<Void>(0x1020DA0); }
static void STAT_DISABLE_STATS_TRACKING() { invoke<Void>(0x1020DB0); }
static BOOL STAT_IS_STATS_TRACKING_ENABLED() { return invoke<BOOL>(0x1020DC0); }
static BOOL STAT_START_RECORD_STAT(int statType, int valueType) { return invoke<BOOL>(0x1020DE0, statType, valueType); }
static BOOL STAT_STOP_RECORD_STAT() { return invoke<BOOL>(0x1020E30); }
static BOOL STAT_GET_RECORDED_VALUE(float* value) { return invoke<BOOL>(0x1020E60, value); }
static BOOL STAT_IS_RECORDING_STAT() { return invoke<BOOL>(0x1020E90); }
static int STAT_GET_CURRENT_NEAR_MISS_NOCRASH_PRECISE() { return invoke<int>(0x1020EB0); }
static float STAT_GET_CURRENT_REAR_WHEEL_DISTANCE() { return invoke<float>(0x1020EC0); }
static float STAT_GET_CURRENT_FRONT_WHEEL_DISTANCE() { return invoke<float>(0x1020EF0); }
static float STAT_GET_CURRENT_JUMP_DISTANCE() { return invoke<float>(0x1020F20); }
static float STAT_GET_CURRENT_DRIVE_NOCRASH_DISTANCE() { return invoke<float>(0x1020F40); }
static float STAT_GET_CURRENT_SPEED() { return invoke<float>(0x1020F60); }
static float STAT_GET_CURRENT_DRIVING_REVERSE_DISTANCE() { return invoke<float>(0x1020F80); }
static float STAT_GET_CURRENT_SKYDIVING_DISTANCE() { return invoke<float>(0x1020FA0); }
static float STAT_GET_CHALLENGE_FLYING_DIST() { return invoke<float>(0x1020FC0); }
static BOOL STAT_GET_FLYING_ALTITUDE(float* outValue) { return invoke<BOOL>(0x1020FE0, outValue); }
static BOOL STAT_IS_PLAYER_VEHICLE_ABOVE_OCEAN() { return invoke<BOOL>(0x1021010); }
static float STAT_GET_VEHICLE_BAIL_DISTANCE() { return invoke<float>(0x1021030); }
static BOOL STAT_ROLLBACK_SAVE_MIGRATION() { return invoke<BOOL>(0x1021050); }
static void SET_HAS_SPECIALEDITION_CONTENT(int value) { invoke<Void>(0x1021060, value); }
static void SET_SAVE_MIGRATION_TRANSACTION_ID_WARNING(int transactionId) { invoke<Void>(0x10210A0, transactionId); }
static void GET_BOSS_GOON_UUID(int characterSlot, Any p1, Any p2) { invoke<Void>(0x10210E0, characterSlot, p1, p2); }
static void PLAYSTATS_BW_BOSSONBOSSDEATHMATCH(Any p0) { invoke<Void>(0x1021150, p0); }
static void PLAYSTATS_BW_YATCHATTACK(Any p0) { invoke<Void>(0x1021160, p0); }
static void PLAYSTATS_BW_HUNT_THE_BOSS(Any p0) { invoke<Void>(0x1021170, p0); }
static void PLAYSTATS_BW_SIGHTSEER(Any p0) { invoke<Void>(0x1021180, p0); }
static void PLAYSTATS_BW_ASSAULT(Any p0) { invoke<Void>(0x1021190, p0); }
static void PLAYSTATS_BW_BELLY_OF_THE_BEAST(Any p0) { invoke<Void>(0x10211A0, p0); }
static void PLAYSTATS_BW_HEAD_HUNTER(Any p0) { invoke<Void>(0x10211B0, p0); }
static void PLAYSTATS_BW_FRAGILE_GOODS(Any p0) { invoke<Void>(0x10211C0, p0); }
static void PLAYSTATS_BW_AIR_FREIGHT(Any p0) { invoke<Void>(0x10211D0, p0); }
static void PLAYSTATS_BC_CAR_JACKING(Any p0) { invoke<Void>(0x10211E0, p0); }
static void PLAYSTATS_BC_SMASH_AND_GRAB(Any p0) { invoke<Void>(0x10211F0, p0); }
static void PLAYSTATS_BC_PROTECTION_RACKET(Any p0) { invoke<Void>(0x1021200, p0); }
static void PLAYSTATS_BC_MOST_WANTED(Any p0) { invoke<Void>(0x1021210, p0); }
static void PLAYSTATS_BC_FINDERS_KEEPERS(Any p0) { invoke<Void>(0x1021220, p0); }
static void PLAYSTATS_BC_POINT_TO_POINT(Any p0) { invoke<Void>(0x1021230, p0); }
static void PLAYSTATS_BC_CASHING(Any p0) { invoke<Void>(0x1021240, p0); }
static void PLAYSTATS_BC_SALVAGE(Any p0) { invoke<Void>(0x1021250, p0); }
static void PLAYSTATS_SPENT_PI_CUSTOM_LOADOUT(int amount) { invoke<Void>(0x1021260, amount); }
static void PLAYSTATS_BUY_CONTRABAND_MISSION(Any* data) { invoke<Void>(0x1021330, data); }
static void PLAYSTATS_SELL_CONTRABAND_MISSION(Any* data) { invoke<Void>(0x1021340, data); }
static void PLAYSTATS_DEFEND_CONTRABAND_MISSION(Any* data) { invoke<Void>(0x1021350, data); }
static void PLAYSTATS_RECOVER_CONTRABAND_MISSION(Any* data) { invoke<Void>(0x1021360, data); }
static void PLAYSTATS_HIT_CONTRABAND_DESTROY_LIMIT(Any p0) { invoke<Void>(0x1021370, p0); }
static void START_BEING_BOSS(Any p0) { invoke<Void>(0x1021400, p0); }
static void START_BEING_GOON(Any p0, Any p1, Any p2) { invoke<Void>(0x1021410, p0, p1, p2); }
static void END_BEING_BOSS(Any p0, Any p1) { invoke<Void>(0x10214A0, p0, p1); }
static void END_BEING_GOON(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x10214B0, p0, p1, p2, p3, p4); }
static void HIRED_LIMO(Any p0, Any p1) { invoke<Void>(0x10214D0, p0, p1); }
static void ORDER_BOSS_VEHICLE(Any p0, Any p1, Hash vehicleHash) { invoke<Void>(0x1021550, p0, p1, vehicleHash); }
static void CHANGE_UNIFORM(Any p0, Any p1, Any p2) { invoke<Void>(0x1021600, p0, p1, p2); }
static void CHANGE_GOON_LOOKING_FOR_WORK(Any p0) { invoke<Void>(0x1021690, p0); }
static void SEND_METRIC_GHOSTING_TO_PLAYER(Any p0) { invoke<Void>(0x10216B0, p0); }
static void SEND_METRIC_VIP_POACH(Any p0, Any p1, Any p2) { invoke<Void>(0x10216C0, p0, p1, p2); }
static void SEND_METRIC_PUNISH_BODYGUARD(Any p0) { invoke<Void>(0x1021790, p0); }
static void PLAYSTATS_START_TRACKING_STUNTS() { invoke<Void>(0x1021840); }
static void PLAYSTATS_STOP_TRACKING_STUNTS() { invoke<Void>(0x1021850); }
static void PLAYSTATS_MISSION_ENDED(Any p0) { invoke<Void>(0x1021860, p0); }
static void PLAYSTATS_IMPEXP_MISSION_ENDED(Any p0) { invoke<Void>(0x1021870, p0); }
static void PLAYSTATS_CHANGE_MC_ROLE(Any p0, Any p1, Any p2, Any p3, int role, int p5, Any p6) { invoke<Void>(0x1021880, p0, p1, p2, p3, role, p5, p6); }
static void PLAYSTATS_CHANGE_MC_OUTFIT(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x10218B0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_SWITCH_MC_EMBLEM(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x10218D0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MC_REQUEST_BIKE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x10218F0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MC_KILLED_RIVAL_MC_MEMBER(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x1021910, p0, p1, p2, p3, p4); }
static void PLAYSTATS_ABANDONED_MC(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x1021930, p0, p1, p2, p3, p4); }
static void PLAYSTATS_EARNED_MC_POINTS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x1021950, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_MC_FORMATION_ENDS(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x1021970, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_MC_CLUBHOUSE_ACTIVITY(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7) { invoke<Void>(0x10219A0, p0, p1, p2, p3, p4, p5, p6, p7); }
static void PLAYSTATS_RIVAL_BEHAVIOR(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9) { invoke<Void>(0x10219E0, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9); }
static void PLAYSTATS_COPY_RANK_INTO_NEW_SLOT(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x1021B10, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_DUPE_DETECTED(Any* data) { invoke<Void>(0x1021BD0, data); }
static void PLAYSTATS_BAN_ALERT(int p0) { invoke<Void>(0x1021C90, p0); }
static void PLAYSTATS_GUNRUNNING_MISSION_ENDED(Any* data) { invoke<Void>(0x1021D00, data); }
static void PLAYSTATS_GUNRUNNING_RND(Any p0) { invoke<Void>(0x1021D10, p0); }
static void PLAYSTATS_BUSINESS_BATTLE_ENDED(Any p0) { invoke<Void>(0x1021DE0, p0); }
static void PLAYSTATS_WAREHOUSE_MISSION_ENDED(Any p0) { invoke<Void>(0x1021DF0, p0); }
static void PLAYSTATS_NIGHTCLUB_MISSION_ENDED(Any p0) { invoke<Void>(0x1021E00, p0); }
static void PLAYSTATS_DJ_USAGE(Any p0, Any p1) { invoke<Void>(0x1021E10, p0, p1); }
static void PLAYSTATS_MINIGAME_USAGE(Any p0, Any p1, Any p2) { invoke<Void>(0x1021EA0, p0, p1, p2); }
static void PLAYSTATS_STONE_HATCHET_ENDED(Any* data) { invoke<Void>(0x1021F40, data); }
static void PLAYSTATS_SMUGGLER_MISSION_ENDED(Any* data) { invoke<Void>(0x1021F50, data); }
static void PLAYSTATS_FM_HEIST_PREP_ENDED(Any* data) { invoke<Void>(0x1021F60, data); }
static void PLAYSTATS_INSTANCED_HEIST_ENDED(Any* data, Any p1, Any p2, Any p3) { invoke<Void>(0x1021F70, data, p1, p2, p3); }
static void PLAYSTATS_DAR_CHECKPOINT(Any* data) { invoke<Void>(0x1021F90, data); }
static void PLAYSTATS_ENTER_SESSION_PACK(Any* data) { invoke<Void>(0x1021FA0, data); }
static void PLAYSTATS_DRONE_USAGE(int p0, int p1, int p2) { invoke<Void>(0x1021FB0, p0, p1, p2); }
static void PLAYSTATS_SPIN_WHEEL(int p0, int p1, int p2, int p3) { invoke<Void>(0x1022050, p0, p1, p2, p3); }
static void PLAYSTATS_ARENA_WARS_SPECTATOR(int p0, int p1, int p2, int p3, int p4) { invoke<Void>(0x1022110, p0, p1, p2, p3, p4); }
static void PLAYSTATS_ARENA_WARS_ENDED(Any* data) { invoke<Void>(0x10221D0, data); }
static void PLAYSTATS_SWITCH_PASSIVE_MODE(BOOL p0, int p1, int p2, int p3) { invoke<Void>(0x10221E0, p0, p1, p2, p3); }
static void PLAYSTATS_COLLECTIBLE_PICKED_UP(int p0, Hash objectHash, Any p2, Any p3, int moneyAmount, int rpAmount, int chipsAmount, Any p7, int p8, Any p9, Any p10) { invoke<Void>(0x1022280, p0, objectHash, p2, p3, moneyAmount, rpAmount, chipsAmount, p7, p8, p9, p10); }
static void PLAYSTATS_CASINO_STORY_MISSION_ENDED(Any p0, Any p1) { invoke<Void>(0x10223A0, p0, p1); }
static void PLAYSTATS_CASINO_CHIP(Any p0) { invoke<Void>(0x1022410, p0); }
static void PLAYSTATS_CASINO_ROULETTE(Any p0) { invoke<Void>(0x10224D0, p0); }
static void PLAYSTATS_CASINO_BLACKJACK(Any p0) { invoke<Void>(0x10224E0, p0); }
static void PLAYSTATS_CASINO_THREE_CARD_POKER(Any p0) { invoke<Void>(0x10224F0, p0); }
static void PLAYSTATS_CASINO_SLOT_MACHINE(Any p0) { invoke<Void>(0x1022640, p0); }
static void PLAYSTATS_CASINO_INSIDE_TRACK(Any p0) { invoke<Void>(0x1022780, p0); }
static void PLAYSTATS_CASINO_LUCKY_SEVEN(Any p0) { invoke<Void>(0x10228C0, p0); }
static void PLAYSTATS_CASINO_ROULETTE_LIGHT(Any p0) { invoke<Void>(0x1022A10, p0); }
static void PLAYSTATS_CASINO_BLACKJACK_LIGHT(Any p0) { invoke<Void>(0x1022AF0, p0); }
static void PLAYSTATS_CASINO_THREE_CARD_POKER_LIGHT(Any p0) { invoke<Void>(0x1022C10, p0); }
static void PLAYSTATS_CASINO_SLOT_MACHINE_LIGHT(Any p0) { invoke<Void>(0x1022CF0, p0); }
static void PLAYSTATS_CASINO_INSIDE_TRACK_LIGHT(Any p0) { invoke<Void>(0x1022DE0, p0); }
static void PLAYSTATS_ARCADE_GAME(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6) { invoke<Void>(0x1022ED0, p0, p1, p2, p3, p4, p5, p6); }
static void PLAYSTATS_ARCADE_LOVE_MATCH(Any p0, Any p1) { invoke<Void>(0x1022F90, p0, p1); }
static void PLAYSTATS_FREEMODE_CASINO_MISSION_ENDED(Any* data) { invoke<Void>(0x1023030, data); }
static void PLAYSTATS_HEIST3_DRONE(Any p0) { invoke<Void>(0x1023040, p0); }
static void PLAYSTATS_HEIST3_HACK(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x10230E0, p0, p1, p2, p3, p4, p5); }
static void PLAYSTATS_NPC_PHONE(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10, Any p11, Any p12) { invoke<Void>(0x1023190, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10, p11, p12); }
static void PLAYSTATS_ARCADE_CABINET(Any p0) { invoke<Void>(0x10232E0, p0); }
static void PLAYSTATS_HEIST3_FINALE(Any p0) { invoke<Void>(0x1023390, p0); }
static void PLAYSTATS_HEIST3_PREP(Any p0) { invoke<Void>(0x10233F0, p0); }
static void PLAYSTATS_MASTER_CONTROL(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1023450, p0, p1, p2, p3); }
static void PLAYSTATS_QUIT_MODE(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x10234F0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_MISSION_VOTE(Any p0) { invoke<Void>(0x10235E0, p0); }
static void PLAYSTATS_NJVS_VOTE(Any p0) { invoke<Void>(0x10235F0, p0); }
static void PLAYSTATS_KILL_YOURSELF() { invoke<Void>(0x1023600); }
static void PLAYSTATS_FM_MISSION_END(Any p0, Any p1, Any p2) { invoke<Void>(0x1023630, p0, p1, p2); }
static void PLAYSTATS_HEIST4_PREP(Any p0) { invoke<Void>(0x1023710, p0); }
static void PLAYSTATS_HEIST4_FINALE(Any p0) { invoke<Void>(0x1023770, p0); }
static void PLAYSTATS_HEIST4_HACK(Any p0, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x10237D0, p0, p1, p2, p3, p4); }
static void PLAYSTATS_SUB_WEAP(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1023880, p0, p1, p2, p3); }
static void PLAYSTATS_FAST_TRVL(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8, Any p9, Any p10) { invoke<Void>(0x1023920, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10); }
static void PLAYSTATS_HUB_ENTRY(Any p0) { invoke<Void>(0x1023A60, p0); }
static void PLAYSTATS_DJ_MISSION_ENDED(Any p0) { invoke<Void>(0x1023B30, p0); }
static void PLAYSTATS_ROBBERY_PREP(Any p0) { invoke<Void>(0x1023B40, p0); }
static void PLAYSTATS_ROBBERY_FINALE(Any p0) { invoke<Void>(0x1023BA0, p0); }
static void PLAYSTATS_EXTRA_EVENT(Any p0) { invoke<Void>(0x1023C00, p0); }
static void PLAYSTATS_CARCLUB_POINTS(Any p0) { invoke<Void>(0x1023CA0, p0); }
static void PLAYSTATS_CARCLUB_CHALLENGE(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1023D90, p0, p1, p2, p3); }
static void PLAYSTATS_CARCLUB_PRIZE(int p0, Hash vehicleModel) { invoke<Void>(0x1023E30, p0, vehicleModel); }
static void PLAYSTATS_AWARD_NAV(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1023EB0, p0, p1, p2, p3); }
static void PLAYSTATS_INST_MISSION_END(Any p0) { invoke<Void>(0x1023F50, p0); }
static void PLAYSTATS_HUB_EXIT(Any p0) { invoke<Void>(0x1023FB0, p0); }
static void PLAYSTATS_INVENTORY(Any p0) { invoke<Void>(0x1024070, p0); }
static void _PLAYSTATS_ACID_MISSION_END(Any p0) { invoke<Void>(0x1024120, p0); }
static void _PLAYSTATS_ACID_RND(Any p0) { invoke<Void>(0x1024180, p0); }
static void _PLAYSTATS_IDLE(Any p0, Any p1, Any p2) { invoke<Void>(0x1024250, p0, p1, p2); }
static void _PLAYSTATS_PLAYER_STYLE(Any p0) { invoke<Void>(0x1024320, p0); }
static void LOAD_ALL_OBJECTS_NOW() { invoke<Void>(0x1027AB0); }
static void LOAD_SCENE(float x, float y, float z) { invoke<Void>(0x1027AD0, x, y, z); }
static BOOL NETWORK_UPDATE_LOAD_SCENE() { return invoke<BOOL>(0x1027B50); }
static BOOL IS_NETWORK_LOADING_SCENE() { return invoke<BOOL>(0x1027B80); }
static void SET_INTERIOR_ACTIVE(int interiorID, BOOL toggle) { invoke<Void>(0x1027BA0, interiorID, toggle); }
static void REQUEST_MODEL(Hash model) { invoke<Void>(0x1027BC0, model); }
static void REQUEST_MENU_PED_MODEL(Hash model) { invoke<Void>(0x1027BD0, model); }
static BOOL HAS_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x1027BF0, model); }
static void REQUEST_MODELS_IN_ROOM(Interior interior, const char* roomName) { invoke<Void>(0x1027CB0, interior, roomName); }
static void SET_MODEL_AS_NO_LONGER_NEEDED(Hash model) { invoke<Void>(0x1027D20, model); }
static BOOL IS_MODEL_IN_CDIMAGE(Hash model) { return invoke<BOOL>(0x1027DA0, model); }
static BOOL IS_MODEL_VALID(Hash model) { return invoke<BOOL>(0x1027E10, model); }
static BOOL IS_MODEL_A_PED(Hash model) { return invoke<BOOL>(0x1027E80, model); }
static BOOL IS_MODEL_A_VEHICLE(Hash model) { return invoke<BOOL>(0x1027EF0, model); }
static void REQUEST_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0x1027F60, x, y, z); }
static void REQUEST_COLLISION_FOR_MODEL(Hash model) { invoke<Void>(0x1027FA0, model); }
static BOOL HAS_COLLISION_FOR_MODEL_LOADED(Hash model) { return invoke<BOOL>(0x1027FB0, model); }
static void REQUEST_ADDITIONAL_COLLISION_AT_COORD(float x, float y, float z) { invoke<Void>(0x1028050, x, y, z); }
static BOOL DOES_ANIM_DICT_EXIST(const char* animDict) { return invoke<BOOL>(0x1028090, animDict); }
static void REQUEST_ANIM_DICT(const char* animDict) { invoke<Void>(0x10280F0, animDict); }
static BOOL HAS_ANIM_DICT_LOADED(const char* animDict) { return invoke<BOOL>(0x1028100, animDict); }
static void REMOVE_ANIM_DICT(const char* animDict) { invoke<Void>(0x1028180, animDict); }
static void REQUEST_ANIM_SET(const char* animSet) { invoke<Void>(0x1028200, animSet); }
static BOOL HAS_ANIM_SET_LOADED(const char* animSet) { return invoke<BOOL>(0x1028210, animSet); }
static void REMOVE_ANIM_SET(const char* animSet) { invoke<Void>(0x10282A0, animSet); }
static void REQUEST_CLIP_SET(const char* clipSet) { invoke<Void>(0x1028330, clipSet); }
static BOOL HAS_CLIP_SET_LOADED(const char* clipSet) { return invoke<BOOL>(0x1028340, clipSet); }
static void REMOVE_CLIP_SET(const char* clipSet) { invoke<Void>(0x10283D0, clipSet); }
static void REQUEST_IPL(const char* iplName) { invoke<Void>(0x1028460, iplName); }
static void REMOVE_IPL(const char* iplName) { invoke<Void>(0x10284E0, iplName); }
static BOOL IS_IPL_ACTIVE(const char* iplName) { return invoke<BOOL>(0x10284F0, iplName); }
static void SET_STREAMING(BOOL toggle) { invoke<Void>(0x1028540, toggle); }
static void LOAD_GLOBAL_WATER_FILE(int waterType) { invoke<Void>(0x1028560, waterType); }
static int GET_GLOBAL_WATER_FILE() { return invoke<int>(0x1028570); }
static void SET_GAME_PAUSES_FOR_STREAMING(BOOL toggle) { invoke<Void>(0x1028590, toggle); }
static void SET_REDUCE_PED_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0x10285B0, toggle); }
static void SET_REDUCE_VEHICLE_MODEL_BUDGET(BOOL toggle) { invoke<Void>(0x10285D0, toggle); }
static void SET_DITCH_POLICE_MODELS(BOOL toggle) { invoke<Void>(0x10285F0, toggle); }
static int GET_NUMBER_OF_STREAMING_REQUESTS() { return invoke<int>(0x1028600); }
static void REQUEST_PTFX_ASSET() { invoke<Void>(0x1028620); }
static BOOL HAS_PTFX_ASSET_LOADED() { return invoke<BOOL>(0x1028630); }
static void REMOVE_PTFX_ASSET() { invoke<Void>(0x1028650); }
static void REQUEST_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0x1028660, fxName); }
static BOOL HAS_NAMED_PTFX_ASSET_LOADED(const char* fxName) { return invoke<BOOL>(0x1028670, fxName); }
static void REMOVE_NAMED_PTFX_ASSET(const char* fxName) { invoke<Void>(0x10286A0, fxName); }
static void SET_VEHICLE_POPULATION_BUDGET(int p0) { invoke<Void>(0x10286B0, p0); }
static void SET_PED_POPULATION_BUDGET(int p0) { invoke<Void>(0x10286D0, p0); }
static void CLEAR_FOCUS() { invoke<Void>(0x10286F0); }
static void SET_FOCUS_POS_AND_VEL(float x, float y, float z, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0x1028700, x, y, z, offsetX, offsetY, offsetZ); }
static void SET_FOCUS_ENTITY(Entity entity) { invoke<Void>(0x1028710, entity); }
static BOOL IS_ENTITY_FOCUS(Entity entity) { return invoke<BOOL>(0x1028720, entity); }
static void SET_RESTORE_FOCUS_ENTITY(Entity p0) { invoke<Void>(0x1028780, p0); }
static void SET_MAPDATACULLBOX_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0x1028800, name, toggle); }
static void SET_ALL_MAPDATA_CULLED(Any p0) { invoke<Void>(0x1028820, p0); }
static int STREAMVOL_CREATE_SPHERE(float x, float y, float z, float rad, Any p4, Any p5) { return invoke<int>(0x1028830, x, y, z, rad, p4, p5); }
static int STREAMVOL_CREATE_FRUSTUM(float p0, float p1, float p2, float p3, float p4, float p5, float p6, Any p7, Any p8) { return invoke<int>(0x1028930, p0, p1, p2, p3, p4, p5, p6, p7, p8); }
static int STREAMVOL_CREATE_LINE(float p0, float p1, float p2, float p3, float p4, float p5, Any p6) { return invoke<int>(0x1028A10, p0, p1, p2, p3, p4, p5, p6); }
static void STREAMVOL_DELETE(Any unused) { invoke<Void>(0x1028AC0, unused); }
static BOOL STREAMVOL_HAS_LOADED(Any unused) { return invoke<BOOL>(0x1028AE0, unused); }
static BOOL STREAMVOL_IS_VALID(Any unused) { return invoke<BOOL>(0x1028B10, unused); }
static BOOL IS_STREAMVOL_ACTIVE() { return invoke<BOOL>(0x1028B20); }
static BOOL NEW_LOAD_SCENE_START(float posX, float posY, float posZ, float offsetX, float offsetY, float offsetZ, float radius, int p7) { return invoke<BOOL>(0x1028B30, posX, posY, posZ, offsetX, offsetY, offsetZ, radius, p7); }
static BOOL NEW_LOAD_SCENE_START_SPHERE(float x, float y, float z, float radius, Any p4) { return invoke<BOOL>(0x1028BE0, x, y, z, radius, p4); }
static void NEW_LOAD_SCENE_STOP() { invoke<Void>(0x1028C70); }
static BOOL IS_NEW_LOAD_SCENE_ACTIVE() { return invoke<BOOL>(0x1028C80); }
static BOOL IS_NEW_LOAD_SCENE_LOADED() { return invoke<BOOL>(0x1028CA0); }
static BOOL IS_SAFE_TO_START_PLAYER_SWITCH() { return invoke<BOOL>(0x1028CD0); }
static void START_PLAYER_SWITCH(Ped from, Ped to, int flags, int switchType) { invoke<Void>(0x1028D20, from, to, flags, switchType); }
static void STOP_PLAYER_SWITCH() { invoke<Void>(0x1028DE0); }
static BOOL IS_PLAYER_SWITCH_IN_PROGRESS() { return invoke<BOOL>(0x1028E10); }
static int GET_PLAYER_SWITCH_TYPE() { return invoke<int>(0x1028E40); }
static int GET_IDEAL_PLAYER_SWITCH_TYPE(float x1, float y1, float z1, float x2, float y2, float z2) { return invoke<int>(0x1028E50, x1, y1, z1, x2, y2, z2); }
static int GET_PLAYER_SWITCH_STATE() { return invoke<int>(0x1028EB0); }
static int GET_PLAYER_SHORT_SWITCH_STATE() { return invoke<int>(0x1028ED0); }
static void SET_PLAYER_SHORT_SWITCH_STYLE(int p0) { invoke<Void>(0x1028EF0, p0); }
static int GET_PLAYER_SWITCH_JUMP_CUT_INDEX() { return invoke<int>(0x1028F10); }
static void SET_PLAYER_SWITCH_OUTRO(float cameraCoordX, float cameraCoordY, float cameraCoordZ, float camRotationX, float camRotationY, float camRotationZ, float camFov, float camFarClip, int rotationOrder) { invoke<Void>(0x1028F30, cameraCoordX, cameraCoordY, cameraCoordZ, camRotationX, camRotationY, camRotationZ, camFov, camFarClip, rotationOrder); }
static void SET_PLAYER_SWITCH_ESTABLISHING_SHOT(const char* name) { invoke<Void>(0x1029020, name); }
static void ALLOW_PLAYER_SWITCH_PAN() { invoke<Void>(0x1029080); }
static void ALLOW_PLAYER_SWITCH_OUTRO() { invoke<Void>(0x10290C0); }
static void ALLOW_PLAYER_SWITCH_ASCENT() { invoke<Void>(0x1029100); }
static void ALLOW_PLAYER_SWITCH_DESCENT() { invoke<Void>(0x1029140); }
static BOOL IS_SWITCH_READY_FOR_DESCENT() { return invoke<BOOL>(0x1029180); }
static void ENABLE_SWITCH_PAUSE_BEFORE_DESCENT() { invoke<Void>(0x10291C0); }
static void DISABLE_SWITCH_OUTRO_FX() { invoke<Void>(0x1029200); }
static void SWITCH_TO_MULTI_FIRSTPART(Ped ped, int flags, int switchType) { invoke<Void>(0x1029250, ped, flags, switchType); }
static void SWITCH_TO_MULTI_SECONDPART(Ped ped) { invoke<Void>(0x10292D0, ped); }
static BOOL IS_SWITCH_TO_MULTI_FIRSTPART_FINISHED() { return invoke<BOOL>(0x1029330); }
static int GET_PLAYER_SWITCH_INTERP_OUT_DURATION() { return invoke<int>(0x1029350); }
static int GET_PLAYER_SWITCH_INTERP_OUT_CURRENT_TIME() { return invoke<int>(0x1029370); }
static BOOL IS_SWITCH_SKIPPING_DESCENT() { return invoke<BOOL>(0x10293B0); }
static void SET_SCENE_STREAMING_TRACKS_CAM_POS_THIS_FRAME() { invoke<Void>(0x10293F0); }
static float GET_LODSCALE() { return invoke<float>(0x1029400); }
static void OVERRIDE_LODSCALE_THIS_FRAME(float scaling) { invoke<Void>(0x1029420, scaling); }
static void REMAP_LODSCALE_RANGE_THIS_FRAME(float p0, float p1, float p2, float p3) { invoke<Void>(0x1029440, p0, p1, p2, p3); }
static void SUPPRESS_HD_MAP_STREAMING_THIS_FRAME() { invoke<Void>(0x1029470); }
static void SET_RENDER_HD_ONLY(BOOL toggle) { invoke<Void>(0x1029480, toggle); }
static void FORCE_ALLOW_TIME_BASED_FADING_THIS_FRAME() { invoke<Void>(0x10294C0); }
static void IPL_GROUP_SWAP_START(const char* iplName1, const char* iplName2) { invoke<Void>(0x10294D0, iplName1, iplName2); }
static void IPL_GROUP_SWAP_CANCEL() { invoke<Void>(0x10294E0); }
static BOOL IPL_GROUP_SWAP_IS_READY() { return invoke<BOOL>(0x1029500); }
static void IPL_GROUP_SWAP_FINISH() { invoke<Void>(0x1029530); }
static BOOL IPL_GROUP_SWAP_IS_ACTIVE() { return invoke<BOOL>(0x1029550); }
static void PREFETCH_SRL(const char* srl) { invoke<Void>(0x1029570, srl); }
static BOOL IS_SRL_LOADED() { return invoke<BOOL>(0x1029590); }
static void BEGIN_SRL() { invoke<Void>(0x10295C0); }
static void END_SRL() { invoke<Void>(0x10295D0); }
static void SET_SRL_TIME(float p0) { invoke<Void>(0x10295E0, p0); }
static void SET_SRL_POST_CUTSCENE_CAMERA(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x1029600, p0, p1, p2, p3, p4, p5); }
static void SET_SRL_READAHEAD_TIMES(Any p0, Any p1, Any p2, Any p3) { invoke<Void>(0x1029650, p0, p1, p2, p3); }
static void SET_SRL_LONG_JUMP_MODE(BOOL p0) { invoke<Void>(0x1029670, p0); }
static void SET_SRL_FORCE_PRESTREAM(Any p0) { invoke<Void>(0x1029690, p0); }
static void SET_HD_AREA(float x, float y, float z, float radius) { invoke<Void>(0x10296B0, x, y, z, radius); }
static void CLEAR_HD_AREA() { invoke<Void>(0x1029700); }
static void INIT_CREATOR_BUDGET() { invoke<Void>(0x1029710); }
static void SHUTDOWN_CREATOR_BUDGET() { invoke<Void>(0x1029720); }
static BOOL ADD_MODEL_TO_CREATOR_BUDGET(Hash modelHash) { return invoke<BOOL>(0x1029730, modelHash); }
static void REMOVE_MODEL_FROM_CREATOR_BUDGET(Hash modelHash) { invoke<Void>(0x10297E0, modelHash); }
static float GET_USED_CREATOR_BUDGET() { return invoke<float>(0x1029880); }
static void SET_ISLAND_ENABLED(const char* name, BOOL toggle) { invoke<Void>(0x10298A0, name, toggle); }
static void TASK_PAUSE(Ped ped, int ms) { invoke<Void>(0x1040510, ped, ms); }
static void TASK_STAND_STILL(Ped ped, int time) { invoke<Void>(0x1040580, ped, time); }
static void TASK_JUMP(Ped ped, BOOL usePlayerLaunchForce, BOOL doSuperJump, BOOL useFullSuperJumpForce) { invoke<Void>(0x1040610, ped, usePlayerLaunchForce, doSuperJump, useFullSuperJumpForce); }
static void TASK_COWER(Ped ped, int duration) { invoke<Void>(0x1040690, ped, duration); }
static void TASK_HANDS_UP(Ped ped, int duration, Ped facingPed, int timeToFacePed, int flags) { invoke<Void>(0x1040710, ped, duration, facingPed, timeToFacePed, flags); }
static void UPDATE_TASK_HANDS_UP_DURATION(Ped ped, int duration) { invoke<Void>(0x10407E0, ped, duration); }
static void TASK_OPEN_VEHICLE_DOOR(Ped ped, Vehicle vehicle, int timeOut, int seat, float speed) { invoke<Void>(0x1040840, ped, vehicle, timeOut, seat, speed); }
static void TASK_ENTER_VEHICLE(Ped ped, Vehicle vehicle, int timeout, int seat, float speed, int flag, const char* overrideEntryClipsetName) { invoke<Void>(0x1040860, ped, vehicle, timeout, seat, speed, flag, overrideEntryClipsetName); }
static void TASK_LEAVE_VEHICLE(Ped ped, Vehicle vehicle, int flags) { invoke<Void>(0x1040890, ped, vehicle, flags); }
static void TASK_GET_OFF_BOAT(Ped ped, Vehicle boat) { invoke<Void>(0x10408B0, ped, boat); }
static void TASK_SKY_DIVE(Ped ped, BOOL instant) { invoke<Void>(0x1040930, ped, instant); }
static void TASK_PARACHUTE(Ped ped, BOOL giveParachuteItem, BOOL instant) { invoke<Void>(0x1040950, ped, giveParachuteItem, instant); }
static void TASK_PARACHUTE_TO_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0x10409D0, ped, x, y, z); }
static void SET_PARACHUTE_TASK_TARGET(Ped ped, float x, float y, float z) { invoke<Void>(0x1040A60, ped, x, y, z); }
static void SET_PARACHUTE_TASK_THRUST(Ped ped, float thrust) { invoke<Void>(0x1040AE0, ped, thrust); }
static void TASK_RAPPEL_FROM_HELI(Ped ped, float minHeightAboveGround) { invoke<Void>(0x1040B50, ped, minHeightAboveGround); }
static void TASK_VEHICLE_DRIVE_TO_COORD(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, Any p6, Hash vehicleModel, int drivingMode, float stopRange, float straightLineDistance) { invoke<Void>(0x1040BD0, ped, vehicle, x, y, z, speed, p6, vehicleModel, drivingMode, stopRange, straightLineDistance); }
static void TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int driveMode, float stopRange) { invoke<Void>(0x1040C50, ped, vehicle, x, y, z, speed, driveMode, stopRange); }
static void TASK_VEHICLE_DRIVE_WANDER(Ped ped, Vehicle vehicle, float speed, int drivingStyle) { invoke<Void>(0x1040C70, ped, vehicle, speed, drivingStyle); }
static void TASK_FOLLOW_TO_OFFSET_OF_ENTITY(Ped ped, Entity entity, float offsetX, float offsetY, float offsetZ, float movementSpeed, int timeout, float stoppingRange, BOOL persistFollowing) { invoke<Void>(0x1040D40, ped, entity, offsetX, offsetY, offsetZ, movementSpeed, timeout, stoppingRange, persistFollowing); }
static void TASK_GO_STRAIGHT_TO_COORD(Ped ped, float x, float y, float z, float speed, int timeout, float targetHeading, float distanceToSlide) { invoke<Void>(0x1040D70, ped, x, y, z, speed, timeout, targetHeading, distanceToSlide); }
static void TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Ped ped, Entity entity, float x, float y, float z, float moveBlendRatio, int time) { invoke<Void>(0x1040DA0, ped, entity, x, y, z, moveBlendRatio, time); }
static void TASK_ACHIEVE_HEADING(Ped ped, float heading, int timeout) { invoke<Void>(0x1040DC0, ped, heading, timeout); }
static void TASK_FLUSH_ROUTE() { invoke<Void>(0x1040DE0); }
static void TASK_EXTEND_ROUTE(float x, float y, float z) { invoke<Void>(0x1040DF0, x, y, z); }
static void TASK_FOLLOW_POINT_ROUTE(Ped ped, float speed, int mode) { invoke<Void>(0x1040E30, ped, speed, mode); }
static void TASK_GO_TO_ENTITY(Entity entity, Entity target, int duration, float distance, float moveBlendRatio, float slowDownDistance, int flags) { invoke<Void>(0x1040E50, entity, target, duration, distance, moveBlendRatio, slowDownDistance, flags); }
static void TASK_SMART_FLEE_COORD(Ped ped, float x, float y, float z, float distance, int time, BOOL preferPavements, BOOL quitIfOutOfRange) { invoke<Void>(0x1040E80, ped, x, y, z, distance, time, preferPavements, quitIfOutOfRange); }
static void TASK_SMART_FLEE_PED(Ped ped, Ped fleeTarget, float safeDistance, int fleeTime, BOOL preferPavements, BOOL updateToNearestHatedPed) { invoke<Void>(0x1040EB0, ped, fleeTarget, safeDistance, fleeTime, preferPavements, updateToNearestHatedPed); }
static void TASK_REACT_AND_FLEE_PED(Ped ped, Ped fleeTarget) { invoke<Void>(0x1040EE0, ped, fleeTarget); }
static void TASK_SHOCKING_EVENT_REACT(Ped ped, int eventHandle) { invoke<Void>(0x1040EF0, ped, eventHandle); }
static void TASK_WANDER_IN_AREA(Ped ped, float x, float y, float z, float radius, float minimalLength, float timeBetweenWalks) { invoke<Void>(0x1040F00, ped, x, y, z, radius, minimalLength, timeBetweenWalks); }
static void TASK_WANDER_STANDARD(Ped ped, float heading, int flags) { invoke<Void>(0x1041010, ped, heading, flags); }
static void TASK_WANDER_SPECIFIC(Ped ped, const char* conditionalAnimGroupStr, const char* conditionalAnimStr, float heading) { invoke<Void>(0x1041030, ped, conditionalAnimGroupStr, conditionalAnimStr, heading); }
static void TASK_VEHICLE_PARK(Ped ped, Vehicle vehicle, float x, float y, float z, float heading, int mode, float radius, BOOL keepEngineOn) { invoke<Void>(0x1041050, ped, vehicle, x, y, z, heading, mode, radius, keepEngineOn); }
static void TASK_STEALTH_KILL(Ped killer, Ped target, Hash stealthKillActionResultHash, float desiredMoveBlendRatio, int stealthFlags) { invoke<Void>(0x1041080, killer, target, stealthKillActionResultHash, desiredMoveBlendRatio, stealthFlags); }
static void TASK_PLANT_BOMB(Ped ped, float x, float y, float z, float heading) { invoke<Void>(0x10410A0, ped, x, y, z, heading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float targetHeading) { invoke<Void>(0x10410C0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, targetHeading); }
static void TASK_FOLLOW_NAV_MESH_TO_COORD_ADVANCED(Ped ped, float x, float y, float z, float moveBlendRatio, int time, float targetRadius, int flags, float slideToCoordHeading, float maxSlopeNavigable, float clampMaxSearchDistance, float targetHeading) { invoke<Void>(0x102CBC0, ped, x, y, z, moveBlendRatio, time, targetRadius, flags, slideToCoordHeading, maxSlopeNavigable, clampMaxSearchDistance, targetHeading); }
static void SET_PED_PATH_CAN_USE_CLIMBOVERS(Ped ped, BOOL Toggle) { invoke<Void>(0x10410F0, ped, Toggle); }
static void SET_PED_PATH_CAN_USE_LADDERS(Ped ped, BOOL Toggle) { invoke<Void>(0x1041150, ped, Toggle); }
static void SET_PED_PATH_CAN_DROP_FROM_HEIGHT(Ped ped, BOOL Toggle) { invoke<Void>(0x10411B0, ped, Toggle); }
static void SET_PED_PATH_CLIMB_COST_MODIFIER(Ped ped, float modifier) { invoke<Void>(0x1041210, ped, modifier); }
static void SET_PED_PATH_MAY_ENTER_WATER(Ped ped, BOOL mayEnterWater) { invoke<Void>(0x1041280, ped, mayEnterWater); }
static void SET_PED_PATH_PREFER_TO_AVOID_WATER(Ped ped, BOOL avoidWater) { invoke<Void>(0x10412E0, ped, avoidWater); }
static void SET_PED_PATH_AVOID_FIRE(Ped ped, BOOL avoidFire) { invoke<Void>(0x1041340, ped, avoidFire); }
static void SET_GLOBAL_MIN_BIRD_FLIGHT_HEIGHT(float height) { invoke<Void>(0x10413A0, height); }
static int GET_NAVMESH_ROUTE_DISTANCE_REMAINING(Ped ped, float* distanceRemaining, BOOL* isPathReady) { return invoke<int>(0x10413D0, ped, distanceRemaining, isPathReady); }
static int GET_NAVMESH_ROUTE_RESULT(Ped ped) { return invoke<int>(0x10414B0, ped); }
static BOOL IS_CONTROLLED_VEHICLE_UNABLE_TO_GET_TO_ROAD(Ped ped) { return invoke<BOOL>(0x10414D0, ped); }
static void TASK_GO_TO_COORD_ANY_MEANS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets) { invoke<Void>(0x1041550, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float warpTimerMS) { invoke<Void>(0x1041580, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, warpTimerMS); }
static void TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(Ped ped, float x, float y, float z, float moveBlendRatio, Vehicle vehicle, BOOL useLongRangeVehiclePathing, int drivingFlags, float maxRangeToShootTargets, float extraVehToTargetDistToPreferVehicle, float driveStraightLineDistance, int extraFlags, float cruiseSpeed, float targetArriveDist) { invoke<Void>(0x10415C0, ped, x, y, z, moveBlendRatio, vehicle, useLongRangeVehiclePathing, drivingFlags, maxRangeToShootTargets, extraVehToTargetDistToPreferVehicle, driveStraightLineDistance, extraFlags, cruiseSpeed, targetArriveDist); }
static void TASK_PLAY_ANIM(Ped ped, const char* animDictionary, const char* animationName, float blendInSpeed, float blendOutSpeed, int duration, int flag, float playbackRate, BOOL lockX, BOOL lockY, BOOL lockZ) { invoke<Void>(0x1041610, ped, animDictionary, animationName, blendInSpeed, blendOutSpeed, duration, flag, playbackRate, lockX, lockY, lockZ); }
static void TASK_PLAY_ANIM_ADVANCED(Ped ped, const char* animDict, const char* animName, float posX, float posY, float posZ, float rotX, float rotY, float rotZ, float animEnterSpeed, float animExitSpeed, int duration, Any flag, float animTime, int rotOrder, int ikFlags) { invoke<Void>(0x10416A0, ped, animDict, animName, posX, posY, posZ, rotX, rotY, rotZ, animEnterSpeed, animExitSpeed, duration, flag, animTime, rotOrder, ikFlags); }
static void STOP_ANIM_TASK(Entity entity, const char* animDictionary, const char* animationName, float blendDelta) { invoke<Void>(0x1041700, entity, animDictionary, animationName, blendDelta); }
static void TASK_SCRIPTED_ANIMATION(Ped ped, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0x1041720, ped, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); }
static void PLAY_ENTITY_SCRIPTED_ANIM(Entity entity, int* priorityLowData, int* priorityMidData, int* priorityHighData, float blendInDelta, float blendOutDelta) { invoke<Void>(0x1041750, entity, priorityLowData, priorityMidData, priorityHighData, blendInDelta, blendOutDelta); }
static void STOP_ANIM_PLAYBACK(Entity entity, int priority, BOOL secondary) { invoke<Void>(0x1041780, entity, priority, secondary); }
static void SET_ANIM_WEIGHT(Entity entity, float weight, int priority, int index, BOOL secondary) { invoke<Void>(0x1041820, entity, weight, priority, index, secondary); }
static void SET_ANIM_PHASE(Entity entity, float phase, int priority, BOOL secondary) { invoke<Void>(0x1041840, entity, phase, priority, secondary); }
static void SET_ANIM_RATE(Entity entity, float rate, int priority, BOOL secondary) { invoke<Void>(0x10418F0, entity, rate, priority, secondary); }
static void SET_ANIM_LOOPED(Entity entity, BOOL looped, int priority, BOOL secondary) { invoke<Void>(0x10419A0, entity, looped, priority, secondary); }
static void TASK_PLAY_PHONE_GESTURE_ANIMATION(Ped ped, const char* animDict, const char* animation, const char* boneMaskType, float blendInDuration, float blendOutDuration, BOOL isLooping, BOOL holdLastFrame) { invoke<Void>(0x10419D0, ped, animDict, animation, boneMaskType, blendInDuration, blendOutDuration, isLooping, holdLastFrame); }
static void TASK_STOP_PHONE_GESTURE_ANIMATION(Ped ped, float blendOutOverride) { invoke<Void>(0x1041A10, ped, blendOutOverride); }
static BOOL IS_PLAYING_PHONE_GESTURE_ANIM(Ped ped) { return invoke<BOOL>(0x1041A90, ped); }
static float GET_PHONE_GESTURE_ANIM_CURRENT_TIME(Ped ped) { return invoke<float>(0x1041B20, ped); }
static float GET_PHONE_GESTURE_ANIM_TOTAL_TIME(Ped ped) { return invoke<float>(0x1041BC0, ped); }
static void TASK_VEHICLE_PLAY_ANIM(Vehicle vehicle, const char* animationSet, const char* animationName) { invoke<Void>(0x1041C60, vehicle, animationSet, animationName); }
static void TASK_LOOK_AT_COORD(Entity entity, float x, float y, float z, int duration, int flags, int priority) { invoke<Void>(0x1041C80, entity, x, y, z, duration, flags, priority); }
static void TASK_LOOK_AT_ENTITY(Ped ped, Entity lookAt, int duration, int flags, int priority) { invoke<Void>(0x1041CA0, ped, lookAt, duration, flags, priority); }
static void TASK_CLEAR_LOOK_AT(Ped ped) { invoke<Void>(0x1041CC0, ped); }
static void OPEN_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0x1041CD0, taskSequenceId); }
static void CLOSE_SEQUENCE_TASK(int taskSequenceId) { invoke<Void>(0x1041D40, taskSequenceId); }
static void TASK_PERFORM_SEQUENCE(Ped ped, int taskSequenceId) { invoke<Void>(0x1041D90, ped, taskSequenceId); }
static void TASK_PERFORM_SEQUENCE_LOCALLY(Ped ped, int taskSequenceId) { invoke<Void>(0x1041DA0, ped, taskSequenceId); }
static void CLEAR_SEQUENCE_TASK(int* taskSequenceId) { invoke<Void>(0x1041DB0, taskSequenceId); }
static void SET_SEQUENCE_TO_REPEAT(int taskSequenceId, BOOL repeat) { invoke<Void>(0x1041DF0, taskSequenceId, repeat); }
static int GET_SEQUENCE_PROGRESS(Ped ped) { return invoke<int>(0x1041E60, ped); }
static BOOL GET_IS_TASK_ACTIVE(Ped ped, int taskIndex) { return invoke<BOOL>(0x1041E80, ped, taskIndex); }
static int GET_SCRIPT_TASK_STATUS(Ped ped, Hash taskHash) { return invoke<int>(0x1041F20, ped, taskHash); }
static int GET_ACTIVE_VEHICLE_MISSION_TYPE(Vehicle vehicle) { return invoke<int>(0x1041F90, vehicle); }
static void TASK_LEAVE_ANY_VEHICLE(Ped ped, int delayTime, int flags) { invoke<Void>(0x1041FB0, ped, delayTime, flags); }
static void TASK_AIM_GUN_SCRIPTED(Ped ped, Hash scriptTask, BOOL disableBlockingClip, BOOL instantBlendToAim) { invoke<Void>(0x1041FD0, ped, scriptTask, disableBlockingClip, instantBlendToAim); }
static void TASK_AIM_GUN_SCRIPTED_WITH_TARGET(Ped ped, Ped target, float x, float y, float z, int gunTaskType, BOOL disableBlockingClip, BOOL forceAim) { invoke<Void>(0x1042000, ped, target, x, y, z, gunTaskType, disableBlockingClip, forceAim); }
static void UPDATE_TASK_AIM_GUN_SCRIPTED_TARGET(Ped ped, Ped target, float x, float y, float z, BOOL disableBlockingClip) { invoke<Void>(0x1042030, ped, target, x, y, z, disableBlockingClip); }
static const char* GET_CLIP_SET_FOR_SCRIPTED_GUN_TASK(int gunTaskType) { return invoke<const char*>(0x1042050, gunTaskType); }
static void TASK_AIM_GUN_AT_ENTITY(Ped ped, Entity entity, int duration, BOOL instantBlendToAim) { invoke<Void>(0x1042090, ped, entity, duration, instantBlendToAim); }
static void TASK_TURN_PED_TO_FACE_ENTITY(Ped ped, Entity entity, int duration) { invoke<Void>(0x10420B0, ped, entity, duration); }
static void TASK_AIM_GUN_AT_COORD(Ped ped, float x, float y, float z, int time, BOOL instantBlendToAim, BOOL playAnimIntro) { invoke<Void>(0x10420D0, ped, x, y, z, time, instantBlendToAim, playAnimIntro); }
static void TASK_SHOOT_AT_COORD(Ped ped, float x, float y, float z, int duration, Hash firingPattern) { invoke<Void>(0x1042100, ped, x, y, z, duration, firingPattern); }
static void TASK_SHUFFLE_TO_NEXT_VEHICLE_SEAT(Ped ped, Vehicle vehicle, BOOL useAlternateShuffle) { invoke<Void>(0x1042120, ped, vehicle, useAlternateShuffle); }
static void CLEAR_PED_TASKS(Ped ped) { invoke<Void>(0x1042140, ped); }
static void CLEAR_PED_SECONDARY_TASK(Ped ped) { invoke<Void>(0x1042150, ped); }
static void TASK_EVERYONE_LEAVE_VEHICLE(Vehicle vehicle) { invoke<Void>(0x10421E0, vehicle); }
static void TASK_GOTO_ENTITY_OFFSET(Ped ped, Entity entity, int time, float seekRadius, float seekAngleDeg, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0x10421F0, ped, entity, time, seekRadius, seekAngleDeg, moveBlendRatio, gotoEntityOffsetFlags); }
static void TASK_GOTO_ENTITY_OFFSET_XY(Ped ped, Entity entity, int duration, float targetRadius, float offsetX, float offsetY, float moveBlendRatio, int gotoEntityOffsetFlags) { invoke<Void>(0x1042220, ped, entity, duration, targetRadius, offsetX, offsetY, moveBlendRatio, gotoEntityOffsetFlags); }
static void TASK_TURN_PED_TO_FACE_COORD(Ped ped, float x, float y, float z, int duration) { invoke<Void>(0x1042250, ped, x, y, z, duration); }
static void TASK_VEHICLE_TEMP_ACTION(Ped driver, Vehicle vehicle, int action, int time) { invoke<Void>(0x1042340, driver, vehicle, action, time); }
static void TASK_VEHICLE_MISSION(Ped driver, Vehicle vehicle, Vehicle vehicleTarget, int missionType, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0x1042360, driver, vehicle, vehicleTarget, missionType, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_MISSION_PED_TARGET(Ped ped, Vehicle vehicle, Ped pedTarget, int missionType, float maxSpeed, int drivingStyle, float minDistance, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0x10423B0, ped, vehicle, pedTarget, missionType, maxSpeed, drivingStyle, minDistance, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_MISSION_COORS_TARGET(Ped ped, Vehicle vehicle, float x, float y, float z, int mission, float cruiseSpeed, int drivingStyle, float targetReached, float straightLineDistance, BOOL DriveAgainstTraffic) { invoke<Void>(0x10423F0, ped, vehicle, x, y, z, mission, cruiseSpeed, drivingStyle, targetReached, straightLineDistance, DriveAgainstTraffic); }
static void TASK_VEHICLE_ESCORT(Ped ped, Vehicle vehicle, Vehicle targetVehicle, int mode, float speed, int drivingStyle, float minDistance, int minHeightAboveTerrain, float noRoadsDistance) { invoke<Void>(0x1042480, ped, vehicle, targetVehicle, mode, speed, drivingStyle, minDistance, minHeightAboveTerrain, noRoadsDistance); }
static void TASK_VEHICLE_FOLLOW(Ped driver, Vehicle vehicle, Entity targetEntity, float speed, int drivingStyle, int minDistance) { invoke<Void>(0x10424B0, driver, vehicle, targetEntity, speed, drivingStyle, minDistance); }
static void TASK_VEHICLE_CHASE(Ped driver, Entity targetEnt) { invoke<Void>(0x10424D0, driver, targetEnt); }
static void TASK_VEHICLE_HELI_PROTECT(Ped pilot, Vehicle vehicle, Entity entityToFollow, float targetSpeed, int drivingFlags, float radius, int altitude, int heliFlags) { invoke<Void>(0x10424E0, pilot, vehicle, entityToFollow, targetSpeed, drivingFlags, radius, altitude, heliFlags); }
static void SET_TASK_VEHICLE_CHASE_BEHAVIOR_FLAG(Ped ped, int flag, BOOL set) { invoke<Void>(0x1042510, ped, flag, set); }
static void SET_TASK_VEHICLE_CHASE_IDEAL_PURSUIT_DISTANCE(Ped ped, float distance) { invoke<Void>(0x10425A0, ped, distance); }
static void TASK_HELI_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x1042610, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_CHASE(Ped pilot, Entity entityToFollow, float x, float y, float z) { invoke<Void>(0x1042630, pilot, entityToFollow, x, y, z); }
static void TASK_PLANE_LAND(Ped pilot, Vehicle plane, float runwayStartX, float runwayStartY, float runwayStartZ, float runwayEndX, float runwayEndY, float runwayEndZ) { invoke<Void>(0x1042650, pilot, plane, runwayStartX, runwayStartY, runwayStartZ, runwayEndX, runwayEndY, runwayEndZ); }
static void CLEAR_DEFAULT_PRIMARY_TASK(Ped ped) { invoke<Void>(0x1042670, ped); }
static void CLEAR_PRIMARY_VEHICLE_TASK(Vehicle vehicle) { invoke<Void>(0x10426F0, vehicle); }
static void CLEAR_VEHICLE_CRASH_TASK(Vehicle vehicle) { invoke<Void>(0x1042750, vehicle); }
static void TASK_PLANE_GOTO_PRECISE_VTOL(Ped ped, Vehicle vehicle, float x, float y, float z, int flightHeight, int minHeightAboveTerrain, BOOL useDesiredOrientation, float desiredOrientation, BOOL autopilot) { invoke<Void>(0x10427B0, ped, vehicle, x, y, z, flightHeight, minHeightAboveTerrain, useDesiredOrientation, desiredOrientation, autopilot); }
static void TASK_SUBMARINE_GOTO_AND_STOP(Ped ped, Vehicle submarine, float x, float y, float z, BOOL autopilot) { invoke<Void>(0x1042800, ped, submarine, x, y, z, autopilot); }
static void TASK_HELI_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float maxSpeed, float radius, float targetHeading, int maxHeight, int minHeight, float slowDownDistance, int behaviorFlags) { invoke<Void>(0x1042820, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, maxSpeed, radius, targetHeading, maxHeight, minHeight, slowDownDistance, behaviorFlags); }
static void TASK_HELI_ESCORT_HELI(Ped pilot, Vehicle heli1, Vehicle heli2, float offsetX, float offsetY, float offsetZ) { invoke<Void>(0x1042880, pilot, heli1, heli2, offsetX, offsetY, offsetZ); }
static void TASK_PLANE_MISSION(Ped pilot, Vehicle aircraft, Vehicle targetVehicle, Ped targetPed, float destinationX, float destinationY, float destinationZ, int missionFlag, float angularDrag, float targetReached, float targetHeading, float maxZ, float minZ, BOOL precise) { invoke<Void>(0x10428A0, pilot, aircraft, targetVehicle, targetPed, destinationX, destinationY, destinationZ, missionFlag, angularDrag, targetReached, targetHeading, maxZ, minZ, precise); }
static void TASK_PLANE_TAXI(Ped pilot, Vehicle aircraft, float x, float y, float z, float cruiseSpeed, float targetReached) { invoke<Void>(0x1042900, pilot, aircraft, x, y, z, cruiseSpeed, targetReached); }
static void TASK_BOAT_MISSION(Ped pedDriver, Vehicle vehicle, Vehicle targetVehicle, Ped targetPed, float x, float y, float z, int mission, float maxSpeed, int drivingStyle, float targetReached, Any boatFlags) { invoke<Void>(0x1042920, pedDriver, vehicle, targetVehicle, targetPed, x, y, z, mission, maxSpeed, drivingStyle, targetReached, boatFlags); }
static void TASK_DRIVE_BY(Ped driverPed, Ped targetPed, Vehicle targetVehicle, float targetX, float targetY, float targetZ, float distanceToShoot, int pedAccuracy, BOOL pushUnderneathDrivingTaskIfDriving, Hash firingPattern) { invoke<Void>(0x1042970, driverPed, targetPed, targetVehicle, targetX, targetY, targetZ, distanceToShoot, pedAccuracy, pushUnderneathDrivingTaskIfDriving, firingPattern); }
static void SET_DRIVEBY_TASK_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z) { invoke<Void>(0x10429B0, shootingPed, targetPed, targetVehicle, x, y, z); }
static void CLEAR_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { invoke<Void>(0x10429D0, ped); }
static BOOL IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x1042A60, ped); }
static BOOL CONTROL_MOUNTED_WEAPON(Ped ped) { return invoke<BOOL>(0x1042AF0, ped); }
static void SET_MOUNTED_WEAPON_TARGET(Ped shootingPed, Ped targetPed, Vehicle targetVehicle, float x, float y, float z, int taskMode, BOOL ignoreTargetVehDeadCheck) { invoke<Void>(0x1042B90, shootingPed, targetPed, targetVehicle, x, y, z, taskMode, ignoreTargetVehDeadCheck); }
static BOOL IS_MOUNTED_WEAPON_TASK_UNDERNEATH_DRIVING_TASK(Ped ped) { return invoke<BOOL>(0x1042BC0, ped); }
static void TASK_USE_MOBILE_PHONE(Ped ped, BOOL usePhone, int desiredPhoneMode) { invoke<Void>(0x1042C30, ped, usePhone, desiredPhoneMode); }
static void TASK_USE_MOBILE_PHONE_TIMED(Ped ped, int duration) { invoke<Void>(0x1042C50, ped, duration); }
static void TASK_CHAT_TO_PED(Ped ped, Ped target, int flags, float goToLocationX, float goToLocationY, float goToLocationZ, float headingDegs, float idleTime) { invoke<Void>(0x1042C60, ped, target, flags, goToLocationX, goToLocationY, goToLocationZ, headingDegs, idleTime); }
static void TASK_WARP_PED_INTO_VEHICLE(Ped ped, Vehicle vehicle, int seat) { invoke<Void>(0x1042C80, ped, vehicle, seat); }
static void TASK_SHOOT_AT_ENTITY(Entity entity, Entity target, int duration, Hash firingPattern) { invoke<Void>(0x1042CA0, entity, target, duration, firingPattern); }
static void TASK_CLIMB(Ped ped, BOOL usePlayerLaunchForce) { invoke<Void>(0x1042CC0, ped, usePlayerLaunchForce); }
static void TASK_CLIMB_LADDER(Ped ped, BOOL fast) { invoke<Void>(0x1042D20, ped, fast); }
static void TASK_RAPPEL_DOWN_WALL_USING_CLIPSET_OVERRIDE(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, float minZ, int ropeHandle, const char* clipSet, Any p10) { invoke<Void>(0x1042D90, ped, x1, y1, z1, x2, y2, z2, minZ, ropeHandle, clipSet, p10); }
static int GET_TASK_RAPPEL_DOWN_WALL_STATE(Ped ped) { return invoke<int>(0x1042DC0, ped); }
static void CLEAR_PED_TASKS_IMMEDIATELY(Ped ped) { invoke<Void>(0x1042E80, ped); }
static void TASK_PERFORM_SEQUENCE_FROM_PROGRESS(Ped ped, int taskIndex, int progress1, int progress2) { invoke<Void>(0x1042E90, ped, taskIndex, progress1, progress2); }
static void SET_NEXT_DESIRED_MOVE_STATE(float nextMoveState) { invoke<Void>(0x1042EB0, nextMoveState); }
static void SET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped, float newMoveBlendRatio) { invoke<Void>(0x1042EC0, ped, newMoveBlendRatio); }
static float GET_PED_DESIRED_MOVE_BLEND_RATIO(Ped ped) { return invoke<float>(0x1042ED0, ped); }
static void TASK_GOTO_ENTITY_AIMING(Ped ped, Entity target, float distanceToStopAt, float StartAimingDist) { invoke<Void>(0x1042F20, ped, target, distanceToStopAt, StartAimingDist); }
static void TASK_SET_DECISION_MAKER(Ped ped, Hash decisionMakerId) { invoke<Void>(0x1042FD0, ped, decisionMakerId); }
static void TASK_SET_SPHERE_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float radius) { invoke<Void>(0x1042FE0, ped, x, y, z, radius); }
static void TASK_CLEAR_DEFENSIVE_AREA(Ped ped) { invoke<Void>(0x1043000, ped); }
static void TASK_PED_SLIDE_TO_COORD(Ped ped, float x, float y, float z, float heading, float speed) { invoke<Void>(0x1043010, ped, x, y, z, heading, speed); }
static void TASK_PED_SLIDE_TO_COORD_HDG_RATE(Ped ped, float x, float y, float z, float heading, float speed, float headingChangeRate) { invoke<Void>(0x1043030, ped, x, y, z, heading, speed, headingChangeRate); }
static ScrHandle ADD_COVER_POINT(float x, float y, float z, float direction, int usage, int height, int arc, BOOL isPriority) { return invoke<ScrHandle>(0x1043050, x, y, z, direction, usage, height, arc, isPriority); }
static void REMOVE_COVER_POINT(ScrHandle coverpoint) { invoke<Void>(0x1043100, coverpoint); }
static BOOL DOES_SCRIPTED_COVER_POINT_EXIST_AT_COORDS(float x, float y, float z) { return invoke<BOOL>(0x1043140, x, y, z); }
static Vector3 GET_SCRIPTED_COVER_POINT_COORDS(ScrHandle coverpoint) { return invoke<Vector3>(0x10431D0, coverpoint); }
static void ADD_SCRIPTED_COVER_AREA(float x, float y, float z, float radius) { invoke<Void>(0x10432A0, x, y, z, radius); }
static void TASK_COMBAT_PED(Ped ped, Ped targetPed, int combatFlags, int threatResponseFlags) { invoke<Void>(0x1043360, ped, targetPed, combatFlags, threatResponseFlags); }
static void TASK_COMBAT_PED_TIMED(Ped ped, Ped target, int time, int flags) { invoke<Void>(0x1043380, ped, target, time, flags); }
static void TASK_SEEK_COVER_FROM_POS(Ped ped, float x, float y, float z, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0x10433A0, ped, x, y, z, duration, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_FROM_PED(Ped ped, Ped target, int duration, BOOL allowPeekingAndFiring) { invoke<Void>(0x10433C0, ped, target, duration, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_TO_COVER_POINT(Ped ped, ScrHandle coverpoint, float x, float y, float z, int time, BOOL allowPeekingAndFiring) { invoke<Void>(0x10433E0, ped, coverpoint, x, y, z, time, allowPeekingAndFiring); }
static void TASK_SEEK_COVER_TO_COORDS(Ped ped, float x1, float y1, float z1, float x2, float y2, float z2, int timeout, BOOL shortRoute) { invoke<Void>(0x1043400, ped, x1, y1, z1, x2, y2, z2, timeout, shortRoute); }
static void TASK_PUT_PED_DIRECTLY_INTO_COVER(Ped ped, float x, float y, float z, int time, BOOL allowPeekingAndFiring, float blendInDuration, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier, BOOL doEntry) { invoke<Void>(0x1043430, ped, x, y, z, time, allowPeekingAndFiring, blendInDuration, forceInitialFacingDirection, forceFaceLeft, identifier, doEntry); }
static void TASK_WARP_PED_DIRECTLY_INTO_COVER(Ped ped, int time, BOOL allowPeekingAndFiring, BOOL forceInitialFacingDirection, BOOL forceFaceLeft, int identifier) { invoke<Void>(0x1043540, ped, time, allowPeekingAndFiring, forceInitialFacingDirection, forceFaceLeft, identifier); }
static void TASK_EXIT_COVER(Ped ped, int exitType, float x, float y, float z) { invoke<Void>(0x1043580, ped, exitType, x, y, z); }
static void TASK_PUT_PED_DIRECTLY_INTO_MELEE(Ped ped, Ped meleeTarget, float blendInDuration, float timeInMelee, float strafePhaseSync, int aiCombatFlags) { invoke<Void>(0x10435A0, ped, meleeTarget, blendInDuration, timeInMelee, strafePhaseSync, aiCombatFlags); }
static void TASK_TOGGLE_DUCK(Ped ped, int toggleType) { invoke<Void>(0x10435C0, ped, toggleType); }
static void TASK_GUARD_CURRENT_POSITION(Ped ped, float maxPatrolProximity, float defensiveAreaRadius, BOOL setDefensiveArea) { invoke<Void>(0x1043650, ped, maxPatrolProximity, defensiveAreaRadius, setDefensiveArea); }
static void TASK_GUARD_ASSIGNED_DEFENSIVE_AREA(Ped ped, float x, float y, float z, float heading, float maxPatrolProximity, int timer) { invoke<Void>(0x1043670, ped, x, y, z, heading, maxPatrolProximity, timer); }
static void TASK_GUARD_SPHERE_DEFENSIVE_AREA(Ped ped, float defendPositionX, float defendPositionY, float defendPositionZ, float heading, float maxPatrolProximity, int time, float x, float y, float z, float defensiveAreaRadius) { invoke<Void>(0x1043690, ped, defendPositionX, defendPositionY, defendPositionZ, heading, maxPatrolProximity, time, x, y, z, defensiveAreaRadius); }
static void TASK_STAND_GUARD(Ped ped, float x, float y, float z, float heading, const char* scenarioName) { invoke<Void>(0x10436C0, ped, x, y, z, heading, scenarioName); }
static void SET_DRIVE_TASK_CRUISE_SPEED(Ped driver, float cruiseSpeed) { invoke<Void>(0x10436E0, driver, cruiseSpeed); }
static void SET_DRIVE_TASK_MAX_CRUISE_SPEED(Ped ped, float speed) { invoke<Void>(0x10436F0, ped, speed); }
static void SET_DRIVE_TASK_DRIVING_STYLE(Ped ped, int drivingStyle) { invoke<Void>(0x1043790, ped, drivingStyle); }
static void ADD_COVER_BLOCKING_AREA(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0x1043820, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); }
static void REMOVE_ALL_COVER_BLOCKING_AREAS() { invoke<Void>(0x10438D0); }
static void REMOVE_COVER_BLOCKING_AREAS_AT_POSITION(float x, float y, float z) { invoke<Void>(0x10438F0, x, y, z); }
static void REMOVE_SPECIFIC_COVER_BLOCKING_AREAS(float startX, float startY, float startZ, float endX, float endY, float endZ, BOOL blockObjects, BOOL blockVehicles, BOOL blockMap, BOOL blockPlayer) { invoke<Void>(0x1043950, startX, startY, startZ, endX, endY, endZ, blockObjects, blockVehicles, blockMap, blockPlayer); }
static void TASK_START_SCENARIO_IN_PLACE(Ped ped, const char* scenarioName, int unkDelay, BOOL playEnterAnim) { invoke<Void>(0x1043A00, ped, scenarioName, unkDelay, playEnterAnim); }
static void TASK_START_SCENARIO_AT_POSITION(Ped ped, const char* scenarioName, float x, float y, float z, float heading, int duration, BOOL sittingScenario, BOOL teleport) { invoke<Void>(0x1043A20, ped, scenarioName, x, y, z, heading, duration, sittingScenario, teleport); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD(Ped ped, float x, float y, float z, float distance, int duration) { invoke<Void>(0x1043A60, ped, x, y, z, distance, duration); }
static void TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0x1043B10, ped, x, y, z, radius, timeToLeave); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD(Ped ped, float x, float y, float z, float maxRange, int timeToLeave) { invoke<Void>(0x1043BC0, ped, x, y, z, maxRange, timeToLeave); }
static void TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(Ped ped, float x, float y, float z, float radius, int timeToLeave) { invoke<Void>(0x1043BE0, ped, x, y, z, radius, timeToLeave); }
static BOOL DOES_SCENARIO_EXIST_IN_AREA(float x, float y, float z, float radius, BOOL mustBeFree) { return invoke<BOOL>(0x1043C00, x, y, z, radius, mustBeFree); }
static BOOL DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(float x, float y, float z, const char* scenarioName, float radius, BOOL mustBeFree) { return invoke<BOOL>(0x1043CA0, x, y, z, scenarioName, radius, mustBeFree); }
static BOOL IS_SCENARIO_OCCUPIED(float x, float y, float z, float maxRange, BOOL onlyUsersActuallyAtScenario) { return invoke<BOOL>(0x1043D60, x, y, z, maxRange, onlyUsersActuallyAtScenario); }
static BOOL PED_HAS_USE_SCENARIO_TASK(Ped ped) { return invoke<BOOL>(0x1043D90, ped); }
static void PLAY_ANIM_ON_RUNNING_SCENARIO(Ped ped, const char* animDict, const char* animName) { invoke<Void>(0x1043DF0, ped, animDict, animName); }
static BOOL DOES_SCENARIO_GROUP_EXIST(const char* scenarioGroup) { return invoke<BOOL>(0x1043E10, scenarioGroup); }
static BOOL IS_SCENARIO_GROUP_ENABLED(const char* scenarioGroup) { return invoke<BOOL>(0x1043E90, scenarioGroup); }
static void SET_SCENARIO_GROUP_ENABLED(const char* scenarioGroup, BOOL enabled) { invoke<Void>(0x1043F30, scenarioGroup, enabled); }
static void RESET_SCENARIO_GROUPS_ENABLED() { invoke<Void>(0x1043FC0); }
static void SET_EXCLUSIVE_SCENARIO_GROUP(const char* scenarioGroup) { invoke<Void>(0x1043FD0, scenarioGroup); }
static void RESET_EXCLUSIVE_SCENARIO_GROUP() { invoke<Void>(0x1044050); }
static BOOL IS_SCENARIO_TYPE_ENABLED(const char* scenarioType) { return invoke<BOOL>(0x1044070, scenarioType); }
static void SET_SCENARIO_TYPE_ENABLED(const char* scenarioType, BOOL toggle) { invoke<Void>(0x1044100, scenarioType, toggle); }
static void RESET_SCENARIO_TYPES_ENABLED() { invoke<Void>(0x1044190); }
static BOOL IS_PED_ACTIVE_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0x10441A0, ped); }
static BOOL IS_PED_PLAYING_BASE_CLIP_IN_SCENARIO(Ped ped) { return invoke<BOOL>(0x1044220, ped); }
static void SET_PED_CAN_PLAY_AMBIENT_IDLES(Ped ped, BOOL blockIdleClips, BOOL removeIdleClipIfPlaying) { invoke<Void>(0x1044250, ped, blockIdleClips, removeIdleClipIfPlaying); }
static void TASK_COMBAT_HATED_TARGETS_IN_AREA(Ped ped, float x, float y, float z, float radius, int combatFlags) { invoke<Void>(0x10442D0, ped, x, y, z, radius, combatFlags); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED(Ped ped, float radius, int combatFlags) { invoke<Void>(0x10443D0, ped, radius, combatFlags); }
static void TASK_COMBAT_HATED_TARGETS_AROUND_PED_TIMED(Ped ped, float radius, int time, int combatFlags) { invoke<Void>(0x10444C0, ped, radius, time, combatFlags); }
static void TASK_THROW_PROJECTILE(Ped ped, float x, float y, float z, int ignoreCollisionEntityIndex, BOOL createInvincibleProjectile) { invoke<Void>(0x10445C0, ped, x, y, z, ignoreCollisionEntityIndex, createInvincibleProjectile); }
static void TASK_SWAP_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0x10445E0, ped, drawWeapon); }
static void TASK_RELOAD_WEAPON(Ped ped, BOOL drawWeapon) { invoke<Void>(0x1044660, ped, drawWeapon); }
static BOOL IS_PED_GETTING_UP(Ped ped) { return invoke<BOOL>(0x1044680, ped); }
static void TASK_WRITHE(Ped ped, Ped target, int minFireLoops, int startState, BOOL forceShootOnGround, int shootFromGroundTimer) { invoke<Void>(0x10446E0, ped, target, minFireLoops, startState, forceShootOnGround, shootFromGroundTimer); }
static BOOL IS_PED_IN_WRITHE(Ped ped) { return invoke<BOOL>(0x1044710, ped); }
static void OPEN_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0x1044770, patrolRoute); }
static void CLOSE_PATROL_ROUTE() { invoke<Void>(0x1044790); }
static void ADD_PATROL_ROUTE_NODE(int nodeId, const char* nodeType, float posX, float posY, float posZ, float headingX, float headingY, float headingZ, int duration) { invoke<Void>(0x10447A0, nodeId, nodeType, posX, posY, posZ, headingX, headingY, headingZ, duration); }
static void ADD_PATROL_ROUTE_LINK(int nodeId1, int nodeId2) { invoke<Void>(0x1044830, nodeId1, nodeId2); }
static void CREATE_PATROL_ROUTE() { invoke<Void>(0x1044850); }
static void DELETE_PATROL_ROUTE(const char* patrolRoute) { invoke<Void>(0x1044860, patrolRoute); }
static BOOL GET_PATROL_TASK_INFO(Ped ped, int* timeLeftAtNode, int* nodeId) { return invoke<BOOL>(0x10448A0, ped, timeLeftAtNode, nodeId); }
static void TASK_PATROL(Ped ped, const char* patrolRouteName, int alertState, BOOL canChatToPeds, BOOL useHeadLookAt) { invoke<Void>(0x1044940, ped, patrolRouteName, alertState, canChatToPeds, useHeadLookAt); }
static void TASK_STAY_IN_COVER(Ped ped) { invoke<Void>(0x10449E0, ped); }
static void ADD_VEHICLE_SUBTASK_ATTACK_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0x1044A40, ped, x, y, z); }
static void ADD_VEHICLE_SUBTASK_ATTACK_PED(Ped ped, Ped target) { invoke<Void>(0x1044A50, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_PED(Ped ped, Ped target, float fireTolerance) { invoke<Void>(0x1044A60, ped, target, fireTolerance); }
static void TASK_VEHICLE_AIM_AT_PED(Ped ped, Ped target) { invoke<Void>(0x1044A80, ped, target); }
static void TASK_VEHICLE_SHOOT_AT_COORD(Ped ped, float x, float y, float z, float fireTolerance) { invoke<Void>(0x1044A90, ped, x, y, z, fireTolerance); }
static void TASK_VEHICLE_AIM_AT_COORD(Ped ped, float x, float y, float z) { invoke<Void>(0x1044AB0, ped, x, y, z); }
static void TASK_VEHICLE_GOTO_NAVMESH(Ped ped, Vehicle vehicle, float x, float y, float z, float speed, int behaviorFlag, float stoppingRange) { invoke<Void>(0x1044AC0, ped, vehicle, x, y, z, speed, behaviorFlag, stoppingRange); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(Ped ped, float x, float y, float z, float aimAtX, float aimAtY, float aimAtZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0x1044AE0, ped, x, y, z, aimAtX, aimAtY, aimAtZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern); }
static void TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(Ped ped, float x, float y, float z, Entity aimAtID, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, int navFlags, BOOL instantBlendToAim, Hash firingPattern, int time) { invoke<Void>(0x1044B40, ped, x, y, z, aimAtID, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, navFlags, instantBlendToAim, firingPattern, time); }
static void TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD(Ped pedHandle, float goToLocationX, float goToLocationY, float goToLocationZ, float focusLocationX, float focusLocationY, float focusLocationZ, float speed, BOOL shootAtEnemies, float distanceToStopAt, float noRoadsDistance, BOOL useNavMesh, int navFlags, int taskFlags, Hash firingPattern) { invoke<Void>(0x1044BB0, pedHandle, goToLocationX, goToLocationY, goToLocationZ, focusLocationX, focusLocationY, focusLocationZ, speed, shootAtEnemies, distanceToStopAt, noRoadsDistance, useNavMesh, navFlags, taskFlags, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_COORD(Ped ped, Entity entity, float aimX, float aimY, float aimZ, float moveBlendRatio, BOOL shoot, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0x1044C10, ped, entity, aimX, aimY, aimZ, moveBlendRatio, shoot, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); }
static void TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY(Ped ped, Entity entityToWalkTo, Entity entityToAimAt, float speed, BOOL shootatEntity, float targetRadius, float slowDistance, BOOL useNavMesh, BOOL instantBlendToAim, Hash firingPattern) { invoke<Void>(0x1044C70, ped, entityToWalkTo, entityToAimAt, speed, shootatEntity, targetRadius, slowDistance, useNavMesh, instantBlendToAim, firingPattern); }
static void SET_HIGH_FALL_TASK(Ped ped, int minTime, int maxTime, int entryType) { invoke<Void>(0x1044CD0, ped, minTime, maxTime, entryType); }
static void REQUEST_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0x1044CF0, name); }
static BOOL GET_IS_WAYPOINT_RECORDING_LOADED(const char* name) { return invoke<BOOL>(0x1044D30, name); }
static void REMOVE_WAYPOINT_RECORDING(const char* name) { invoke<Void>(0x1044D70, name); }
static BOOL WAYPOINT_RECORDING_GET_NUM_POINTS(const char* name, int* points) { return invoke<BOOL>(0x1044DB0, name, points); }
static BOOL WAYPOINT_RECORDING_GET_COORD(const char* name, int point, Vector3* coord) { return invoke<BOOL>(0x1044E10, name, point, coord); }
static float WAYPOINT_RECORDING_GET_SPEED_AT_POINT(const char* name, int point) { return invoke<float>(0x1044E80, name, point); }
static BOOL WAYPOINT_RECORDING_GET_CLOSEST_WAYPOINT(const char* name, float x, float y, float z, int* point) { return invoke<BOOL>(0x1044F20, name, x, y, z, point); }
static void TASK_FOLLOW_WAYPOINT_RECORDING(Ped ped, const char* name, int p2, int p3, int p4) { invoke<Void>(0x1044FD0, ped, name, p2, p3, p4); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(Ped ped) { return invoke<BOOL>(0x1045090, ped); }
static int GET_PED_WAYPOINT_PROGRESS(Ped ped) { return invoke<int>(0x1045110, ped); }
static float GET_PED_WAYPOINT_DISTANCE(Any p0) { return invoke<float>(0x1045190, p0); }
static BOOL SET_PED_WAYPOINT_ROUTE_OFFSET(Ped ped, float x, float y, float z) { return invoke<BOOL>(0x1045220, ped, x, y, z); }
static float GET_WAYPOINT_DISTANCE_ALONG_ROUTE(const char* name, int point) { return invoke<float>(0x10452D0, name, point); }
static BOOL WAYPOINT_PLAYBACK_GET_IS_PAUSED(Any p0) { return invoke<BOOL>(0x1045330, p0); }
static void WAYPOINT_PLAYBACK_PAUSE(Any p0, BOOL p1, BOOL p2) { invoke<Void>(0x10453C0, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_RESUME(Any p0, BOOL p1, Any p2, Any p3) { invoke<Void>(0x1045460, p0, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Any p0, float p1, BOOL p2) { invoke<Void>(0x1045500, p0, p1, p2); }
static void WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Any p0) { invoke<Void>(0x10455C0, p0); }
static void USE_WAYPOINT_RECORDING_AS_ASSISTED_MOVEMENT_ROUTE(const char* name, BOOL p1, float p2, float p3) { invoke<Void>(0x1045630, name, p1, p2, p3); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_PED(Ped ped, Ped target, BOOL p2) { invoke<Void>(0x1045650, ped, target, p2); }
static void WAYPOINT_PLAYBACK_START_AIMING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4) { invoke<Void>(0x1045710, ped, x, y, z, p4); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_PED(Ped ped, Ped ped2, BOOL p2, BOOL p3) { invoke<Void>(0x10457E0, ped, ped2, p2, p3); }
static void WAYPOINT_PLAYBACK_START_SHOOTING_AT_COORD(Ped ped, float x, float y, float z, BOOL p4, Hash firingPattern) { invoke<Void>(0x1045800, ped, x, y, z, p4, firingPattern); }
static void WAYPOINT_PLAYBACK_STOP_AIMING_OR_SHOOTING(Ped ped) { invoke<Void>(0x1045820, ped); }
static void ASSISTED_MOVEMENT_REQUEST_ROUTE(const char* route) { invoke<Void>(0x1045890, route); }
static void ASSISTED_MOVEMENT_REMOVE_ROUTE(const char* route) { invoke<Void>(0x10458A0, route); }
static BOOL ASSISTED_MOVEMENT_IS_ROUTE_LOADED(const char* route) { return invoke<BOOL>(0x10458E0, route); }
static void ASSISTED_MOVEMENT_SET_ROUTE_PROPERTIES(const char* route, int props) { invoke<Void>(0x1045960, route, props); }
static void ASSISTED_MOVEMENT_OVERRIDE_LOAD_DISTANCE_THIS_FRAME(float dist) { invoke<Void>(0x1045970, dist); }
static void TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(Ped ped, Vehicle vehicle, const char* WPRecording, int p3, int p4, int p5, int p6, float p7, BOOL p8, float p9) { invoke<Void>(0x1045990, ped, vehicle, WPRecording, p3, p4, p5, p6, p7, p8, p9); }
static BOOL IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x10459E0, vehicle); }
static int GET_VEHICLE_WAYPOINT_PROGRESS(Vehicle vehicle) { return invoke<int>(0x1045A60, vehicle); }
static int GET_VEHICLE_WAYPOINT_TARGET_POINT(Vehicle vehicle) { return invoke<int>(0x1045AE0, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_PAUSE(Vehicle vehicle) { invoke<Void>(0x1045B70, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_RESUME(Vehicle vehicle) { invoke<Void>(0x1045BE0, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_USE_DEFAULT_SPEED(Vehicle vehicle) { invoke<Void>(0x1045C50, vehicle); }
static void VEHICLE_WAYPOINT_PLAYBACK_OVERRIDE_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x1045CC0, vehicle, speed); }
static void TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Ped ped, BOOL toggle) { invoke<Void>(0x1045D40, ped, toggle); }
static void TASK_FORCE_MOTION_STATE(Ped ped, Hash state, BOOL forceRestart) { invoke<Void>(0x1045DC0, ped, state, forceRestart); }
static void TASK_MOVE_NETWORK_BY_NAME(Ped ped, const char* task, float multiplier, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0x1045DE0, ped, task, multiplier, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME(Ped ped, const char* network, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0x1045E10, ped, network, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float blendDuration, BOOL allowOverrideCloneUpdate, const char* animDict, int flags) { invoke<Void>(0x1045E60, ped, network, initialParameters, blendDuration, allowOverrideCloneUpdate, animDict, flags); }
static void TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Ped ped, const char* network, int* initialParameters, float x, float y, float z, float rotX, float rotY, float rotZ, int rotOrder, float blendDuration, BOOL allowOverrideCloneUpdate, const char* dictionary, int flags) { invoke<Void>(0x1045E90, ped, network, initialParameters, x, y, z, rotX, rotY, rotZ, rotOrder, blendDuration, allowOverrideCloneUpdate, dictionary, flags); }
static BOOL IS_TASK_MOVE_NETWORK_ACTIVE(Ped ped) { return invoke<BOOL>(0x1045EF0, ped); }
static BOOL IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(Ped ped) { return invoke<BOOL>(0x1045F80, ped); }
static BOOL REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(Ped ped, const char* name) { return invoke<BOOL>(0x1046030, ped, name); }
static BOOL SET_EXPECTED_CLONE_NEXT_TASK_MOVE_NETWORK_STATE(Ped ped, const char* state) { return invoke<BOOL>(0x1046040, ped, state); }
static const char* GET_TASK_MOVE_NETWORK_STATE(Ped ped) { return invoke<const char*>(0x1046050, ped); }
static void SET_TASK_MOVE_NETWORK_ANIM_SET(Ped ped, Hash clipSet, Hash variableClipSet) { invoke<Void>(0x1046100, ped, clipSet, variableClipSet); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0x1046120, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_LOCAL_FLOAT(Ped ped, const char* signalName, float value) { invoke<Void>(0x1046140, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(Ped ped, const char* signalName, float value) { invoke<Void>(0x10461F0, ped, signalName, value); }
static void SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName, BOOL value) { invoke<Void>(0x10462A0, ped, signalName, value); }
static float GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Ped ped, const char* signalName) { return invoke<float>(0x10462C0, ped, signalName); }
static BOOL GET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Ped ped, const char* signalName) { return invoke<BOOL>(0x1046370, ped, signalName); }
static BOOL GET_TASK_MOVE_NETWORK_EVENT(Ped ped, const char* eventName) { return invoke<BOOL>(0x1046410, ped, eventName); }
static BOOL SET_TASK_MOVE_NETWORK_ENABLE_COLLISION_ON_NETWORK_CLONE_WHEN_FIXED(Ped ped, BOOL enable) { return invoke<BOOL>(0x10464B0, ped, enable); }
static BOOL IS_MOVE_BLEND_RATIO_STILL(Ped ped) { return invoke<BOOL>(0x1046540, ped); }
static BOOL IS_MOVE_BLEND_RATIO_WALKING(Ped ped) { return invoke<BOOL>(0x1046560, ped); }
static BOOL IS_MOVE_BLEND_RATIO_RUNNING(Ped ped) { return invoke<BOOL>(0x10465A0, ped); }
static BOOL IS_MOVE_BLEND_RATIO_SPRINTING(Ped ped) { return invoke<BOOL>(0x10465E0, ped); }
static BOOL IS_PED_STILL(Ped ped) { return invoke<BOOL>(0x1046600, ped); }
static BOOL IS_PED_WALKING(Ped ped) { return invoke<BOOL>(0x10466B0, ped); }
static BOOL IS_PED_RUNNING(Ped ped) { return invoke<BOOL>(0x1046760, ped); }
static BOOL IS_PED_SPRINTING(Ped ped) { return invoke<BOOL>(0x1046810, ped); }
static BOOL IS_PED_STRAFING(Ped ped) { return invoke<BOOL>(0x10468B0, ped); }
static void TASK_SYNCHRONIZED_SCENE(Ped ped, int scene, const char* animDictionary, const char* animationName, float blendIn, float blendOut, int flags, int ragdollBlockingFlags, float moverBlendDelta, int ikFlags) { invoke<Void>(0x1046910, ped, scene, animDictionary, animationName, blendIn, blendOut, flags, ragdollBlockingFlags, moverBlendDelta, ikFlags); }
static void TASK_AGITATED_ACTION_CONFRONT_RESPONSE(Ped ped, Ped ped2) { invoke<Void>(0x1046960, ped, ped2); }
static void TASK_SWEEP_AIM_ENTITY(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, Entity targetEntity, float turnRate, float blendInDuration) { invoke<Void>(0x1046970, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, targetEntity, turnRate, blendInDuration); }
static void UPDATE_TASK_SWEEP_AIM_ENTITY(Ped ped, Entity entity) { invoke<Void>(0x10469B0, ped, entity); }
static void TASK_SWEEP_AIM_POSITION(Ped ped, const char* animDict, const char* lowAnimName, const char* medAnimName, const char* hiAnimName, int runtime, float x, float y, float z, float turnRate, float blendInDuration) { invoke<Void>(0x10469C0, ped, animDict, lowAnimName, medAnimName, hiAnimName, runtime, x, y, z, turnRate, blendInDuration); }
static void UPDATE_TASK_SWEEP_AIM_POSITION(Ped ped, float x, float y, float z) { invoke<Void>(0x1046A00, ped, x, y, z); }
static void TASK_ARREST_PED(Ped ped, Ped target) { invoke<Void>(0x1046A90, ped, target); }
static BOOL IS_PED_RUNNING_ARREST_TASK(Ped ped) { return invoke<BOOL>(0x1046AA0, ped); }
static BOOL IS_PED_BEING_ARRESTED(Ped ped) { return invoke<BOOL>(0x1046B30, ped); }
static void UNCUFF_PED(Ped ped) { invoke<Void>(0x1046B40, ped); }
static BOOL IS_PED_CUFFED(Ped ped) { return invoke<BOOL>(0x1046B90, ped); }
static Vehicle CREATE_VEHICLE(Hash modelHash, float x, float y, float z, float heading, BOOL isNetwork, BOOL bScriptHostVeh, BOOL p7) { return invoke<Vehicle>(0x1067200, modelHash, x, y, z, heading, isNetwork, bScriptHostVeh, p7); }
static void DELETE_VEHICLE(Vehicle* vehicle) { invoke<Void>(0x1067250, vehicle); }
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON(Vehicle vehicle, BOOL toggle, BOOL p2) { invoke<Void>(0x1067260, vehicle, toggle, p2); }
static void SET_VEHICLE_ALLOW_HOMING_MISSLE_LOCKON_SYNCED(Vehicle vehicle, BOOL canBeLockedOn, BOOL p2) { invoke<Void>(0x1067320, vehicle, canBeLockedOn, p2); }
static void SET_VEHICLE_ALLOW_NO_PASSENGERS_LOCKON(Vehicle veh, BOOL toggle) { invoke<Void>(0x1067390, veh, toggle); }
static int GET_VEHICLE_HOMING_LOCKON_STATE(Vehicle vehicle) { return invoke<int>(0x1067440, vehicle); }
static int GET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0) { return invoke<int>(0x1067490, p0); }
static void SET_VEHICLE_HOMING_LOCKEDONTO_STATE(Any p0, Any p1) { invoke<Void>(0x10674E0, p0, p1); }
static BOOL IS_VEHICLE_MODEL(Vehicle vehicle, Hash model) { return invoke<BOOL>(0x1067540, vehicle, model); }
static BOOL DOES_SCRIPT_VEHICLE_GENERATOR_EXIST(int vehicleGenerator) { return invoke<BOOL>(0x1067600, vehicleGenerator); }
static int CREATE_SCRIPT_VEHICLE_GENERATOR(float x, float y, float z, float heading, float p4, float p5, Hash modelHash, int p7, int p8, int p9, int p10, BOOL p11, BOOL p12, BOOL p13, BOOL p14, BOOL p15, int p16) { return invoke<int>(0x1067660, x, y, z, heading, p4, p5, modelHash, p7, p8, p9, p10, p11, p12, p13, p14, p15, p16); }
static void DELETE_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator) { invoke<Void>(0x1067830, vehicleGenerator); }
static void SET_SCRIPT_VEHICLE_GENERATOR(int vehicleGenerator, BOOL enabled) { invoke<Void>(0x10678B0, vehicleGenerator, enabled); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, BOOL toggle, BOOL p7) { invoke<Void>(0x1067940, x1, y1, z1, x2, y2, z2, toggle, p7); }
static void SET_ALL_VEHICLE_GENERATORS_ACTIVE() { invoke<Void>(0x1067970); }
static void SET_ALL_LOW_PRIORITY_VEHICLE_GENERATORS_ACTIVE(BOOL active) { invoke<Void>(0x1067980, active); }
static void SET_VEHICLE_GENERATOR_AREA_OF_INTEREST(float x, float y, float z, float radius) { invoke<Void>(0x10679A0, x, y, z, radius); }
static void CLEAR_VEHICLE_GENERATOR_AREA_OF_INTEREST() { invoke<Void>(0x10679E0); }
static BOOL SET_VEHICLE_ON_GROUND_PROPERLY(Vehicle vehicle, float p1) { return invoke<BOOL>(0x10679F0, vehicle, p1); }
static BOOL SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(Vehicle p0, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0x1067AA0, p0, p1, p2, p3); }
static BOOL IS_VEHICLE_STUCK_ON_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x1067BE0, vehicle); }
static void ADD_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x1067C40, vehicle); }
static void REMOVE_VEHICLE_UPSIDEDOWN_CHECK(Vehicle vehicle) { invoke<Void>(0x1067C90, vehicle); }
static BOOL IS_VEHICLE_STOPPED(Vehicle vehicle) { return invoke<BOOL>(0x1067CB0, vehicle); }
static int GET_VEHICLE_NUMBER_OF_PASSENGERS(Vehicle vehicle, BOOL includeDriver, BOOL includeDeadOccupants) { return invoke<int>(0x1067D10, vehicle, includeDriver, includeDeadOccupants); }
static int GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(Vehicle vehicle) { return invoke<int>(0x1067DA0, vehicle); }
static int GET_VEHICLE_MODEL_NUMBER_OF_SEATS(Hash modelHash) { return invoke<int>(0x1067E00, modelHash); }
static BOOL IS_SEAT_WARP_ONLY(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x1067EA0, vehicle, seatIndex); }
static BOOL IS_TURRET_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x1067F40, vehicle, seatIndex); }
static BOOL DOES_VEHICLE_ALLOW_RAPPEL(Vehicle vehicle) { return invoke<BOOL>(0x1067FC0, vehicle); }
static void SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x1068020, multiplier); }
static void SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x1068050, multiplier); }
static void SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(float multiplier) { invoke<Void>(0x1068070, multiplier); }
static void SET_DISABLE_RANDOM_TRAINS_THIS_FRAME(BOOL toggle) { invoke<Void>(0x1068090, toggle); }
static void SET_AMBIENT_VEHICLE_RANGE_MULTIPLIER_THIS_FRAME(float value) { invoke<Void>(0x10680B0, value); }
static void SET_FAR_DRAW_VEHICLES(BOOL toggle) { invoke<Void>(0x10680F0, toggle); }
static void SET_NUMBER_OF_PARKED_VEHICLES(int value) { invoke<Void>(0x1068110, value); }
static void SET_VEHICLE_DOORS_LOCKED(Vehicle vehicle, int doorLockStatus) { invoke<Void>(0x1068120, vehicle, doorLockStatus); }
static void SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(Vehicle vehicle, int doorId, int doorLockStatus) { invoke<Void>(0x1068170, vehicle, doorId, doorLockStatus); }
static void SET_VEHICLE_HAS_MUTED_SIRENS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10681F0, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player, BOOL toggle) { invoke<Void>(0x1068290, vehicle, player, toggle); }
static BOOL GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(Vehicle vehicle, Player player) { return invoke<BOOL>(0x10682B0, vehicle, player); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1068320, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_NON_SCRIPT_PLAYERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10683D0, vehicle, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(Vehicle vehicle, int team, BOOL toggle) { invoke<Void>(0x1068430, vehicle, team, toggle); }
static void SET_VEHICLE_DOORS_LOCKED_FOR_ALL_TEAMS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10684B0, vehicle, toggle); }
static void SET_VEHICLE_DONT_TERMINATE_TASK_WHEN_ACHIEVED(Vehicle vehicle) { invoke<Void>(0x1068510, vehicle); }
static void EXPLODE_VEHICLE(Vehicle vehicle, BOOL isAudible, BOOL isInvisible) { invoke<Void>(0x1068570, vehicle, isAudible, isInvisible); }
static void SET_VEHICLE_OUT_OF_CONTROL(Vehicle vehicle, BOOL killDriver, BOOL explodeOnImpact) { invoke<Void>(0x1068620, vehicle, killDriver, explodeOnImpact); }
static void SET_VEHICLE_TIMED_EXPLOSION(Vehicle vehicle, Ped ped, BOOL toggle) { invoke<Void>(0x1068700, vehicle, ped, toggle); }
static void ADD_VEHICLE_PHONE_EXPLOSIVE_DEVICE(Vehicle vehicle) { invoke<Void>(0x1068720, vehicle); }
static void CLEAR_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0x10687A0); }
static BOOL HAS_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { return invoke<BOOL>(0x10687D0); }
static void DETONATE_VEHICLE_PHONE_EXPLOSIVE_DEVICE() { invoke<Void>(0x1068850); }
static void SET_TAXI_LIGHTS(Vehicle vehicle, BOOL state) { invoke<Void>(0x1068860, vehicle, state); }
static BOOL IS_TAXI_LIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x10688F0, vehicle); }
static BOOL IS_VEHICLE_IN_GARAGE_AREA(const char* garageName, Vehicle vehicle) { return invoke<BOOL>(0x1068960, garageName, vehicle); }
static void SET_VEHICLE_COLOURS(Vehicle vehicle, int colorPrimary, int colorSecondary) { invoke<Void>(0x10689D0, vehicle, colorPrimary, colorSecondary); }
static void SET_VEHICLE_FULLBEAM(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1068A70, vehicle, toggle); }
static void SET_VEHICLE_IS_RACING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1068B10, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x1068BC0, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x1068C90, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_PRIMARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x1068D10, vehicle); }
static BOOL GET_IS_VEHICLE_PRIMARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x1068D60, vehicle); }
static void SET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x1068DC0, vehicle, r, g, b); }
static void GET_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x1068E90, vehicle, r, g, b); }
static void CLEAR_VEHICLE_CUSTOM_SECONDARY_COLOUR(Vehicle vehicle) { invoke<Void>(0x1068F10, vehicle); }
static BOOL GET_IS_VEHICLE_SECONDARY_COLOUR_CUSTOM(Vehicle vehicle) { return invoke<BOOL>(0x1068F60, vehicle); }
static void SET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle, float fade) { invoke<Void>(0x1068FC0, vehicle, fade); }
static float GET_VEHICLE_ENVEFF_SCALE(Vehicle vehicle) { return invoke<float>(0x1069030, vehicle); }
static void SET_CAN_RESPRAY_VEHICLE(Vehicle vehicle, BOOL state) { invoke<Void>(0x10690B0, vehicle, state); }
static void SET_GOON_BOSS_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1069160, vehicle, toggle); }
static void SET_OPEN_REAR_DOORS_ON_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10691C0, vehicle, toggle); }
static void FORCE_SUBMARINE_SURFACE_MODE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1069220, vehicle, toggle); }
static void FORCE_SUBMARINE_NEURTAL_BUOYANCY(Any p0, Any p1) { invoke<Void>(0x1069290, p0, p1); }
static void SET_SUBMARINE_CRUSH_DEPTHS(Vehicle vehicle, BOOL p1, float depth1, float depth2, float depth3) { invoke<Void>(0x10692F0, vehicle, p1, depth1, depth2, depth3); }
static BOOL GET_SUBMARINE_IS_UNDER_DESIGN_DEPTH(Vehicle submarine) { return invoke<BOOL>(0x1069390, submarine); }
static int GET_SUBMARINE_NUMBER_OF_AIR_LEAKS(Vehicle submarine) { return invoke<int>(0x1069410, submarine); }
static void SET_BOAT_IGNORE_LAND_PROBES(Any p0, Any p1) { invoke<Void>(0x1069470, p0, p1); }
static void _0x85FC953F6C6CBDE1(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10694D0, vehicle, p1); }
static void SET_BOAT_ANCHOR(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1069530, vehicle, toggle); }
static BOOL CAN_ANCHOR_BOAT_HERE(Vehicle vehicle) { return invoke<BOOL>(0x1069550, vehicle); }
static BOOL CAN_ANCHOR_BOAT_HERE_IGNORE_PLAYERS(Vehicle vehicle) { return invoke<BOOL>(0x10695D0, vehicle); }
static void SET_BOAT_REMAINS_ANCHORED_WHILE_PLAYER_IS_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1069650, vehicle, toggle); }
static void SET_FORCE_LOW_LOD_ANCHOR_MODE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1069670, vehicle, p1); }
static void SET_BOAT_LOW_LOD_ANCHOR_DISTANCE(Vehicle vehicle, float value) { invoke<Void>(0x10696D0, vehicle, value); }
static BOOL IS_BOAT_ANCHORED(Vehicle vehicle) { return invoke<BOOL>(0x1069730, vehicle); }
static void SET_BOAT_SINKS_WHEN_WRECKED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10697A0, vehicle, toggle); }
static void SET_BOAT_WRECKED(Vehicle vehicle) { invoke<Void>(0x1069800, vehicle); }
static void SET_VEHICLE_SIREN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1069850, vehicle, toggle); }
static BOOL IS_VEHICLE_SIREN_ON(Vehicle vehicle) { return invoke<BOOL>(0x10698B0, vehicle); }
static BOOL IS_VEHICLE_SIREN_AUDIO_ON(Vehicle vehicle) { return invoke<BOOL>(0x1069940, vehicle); }
static void SET_VEHICLE_STRONG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10699D0, vehicle, toggle); }
static void REMOVE_VEHICLE_STUCK_CHECK(Vehicle vehicle) { invoke<Void>(0x1069A70, vehicle); }
static void GET_VEHICLE_COLOURS(Vehicle vehicle, int* colorPrimary, int* colorSecondary) { invoke<Void>(0x1069A90, vehicle, colorPrimary, colorSecondary); }
static BOOL IS_VEHICLE_SEAT_FREE(Vehicle vehicle, int seatIndex, BOOL isTaskRunning) { return invoke<BOOL>(0x1069AF0, vehicle, seatIndex, isTaskRunning); }
static Ped GET_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex, BOOL p2) { return invoke<Ped>(0x1069B20, vehicle, seatIndex, p2); }
static Ped GET_LAST_PED_IN_VEHICLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<Ped>(0x1069B50, vehicle, seatIndex); }
static BOOL GET_VEHICLE_LIGHTS_STATE(Vehicle vehicle, BOOL* lightsOn, BOOL* highbeamsOn) { return invoke<BOOL>(0x1069BD0, vehicle, lightsOn, highbeamsOn); }
static BOOL IS_VEHICLE_TYRE_BURST(Vehicle vehicle, int wheelID, BOOL completely) { return invoke<BOOL>(0x1069C60, vehicle, wheelID, completely); }
static void SET_VEHICLE_FORWARD_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x1069D30, vehicle, speed); }
static void SET_VEHICLE_FORWARD_SPEED_XY(Vehicle vehicle, float speed) { invoke<Void>(0x1069DA0, vehicle, speed); }
static void BRING_VEHICLE_TO_HALT(Vehicle vehicle, float distance, int duration, BOOL p3) { invoke<Void>(0x1069E10, vehicle, distance, duration, p3); }
static void SET_VEHICLE_STEER_FOR_BUILDINGS(Vehicle vehicle, Any p1) { invoke<Void>(0x1069E30, vehicle, p1); }
static void SET_VEHICLE_CAUSES_SWERVING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1069E90, vehicle, toggle); }
static void SET_IGNORE_PLANES_SMALL_PITCH_CHANGE(Any p0, Any p1) { invoke<Void>(0x1069F00, p0, p1); }
static void STOP_BRINGING_VEHICLE_TO_HALT(Vehicle vehicle) { invoke<Void>(0x1069F60, vehicle); }
static BOOL IS_VEHICLE_BEING_BROUGHT_TO_HALT(Vehicle vehicle) { return invoke<BOOL>(0x1069FD0, vehicle); }
static void LOWER_FORKLIFT_FORKS(Vehicle forklift) { invoke<Void>(0x106A050, forklift); }
static void SET_FORKLIFT_FORK_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0x106A060, vehicle, height); }
static BOOL IS_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x106A070, vehicle, entity); }
static BOOL IS_ANY_ENTITY_ATTACHED_TO_HANDLER_FRAME(Vehicle vehicle) { return invoke<BOOL>(0x106A0A0, vehicle); }
static Vehicle FIND_HANDLER_VEHICLE_CONTAINER_IS_ATTACHED_TO(Entity entity) { return invoke<Vehicle>(0x106A160, entity); }
static BOOL IS_HANDLER_FRAME_LINED_UP_WITH_CONTAINER(Vehicle vehicle, Entity entity) { return invoke<BOOL>(0x106A180, vehicle, entity); }
static void ATTACH_CONTAINER_TO_HANDLER_FRAME_WHEN_LINED_UP(Vehicle vehicle, Entity entity) { invoke<Void>(0x106A1B0, vehicle, entity); }
static void DETACH_CONTAINER_FROM_HANDLER_FRAME(Vehicle vehicle) { invoke<Void>(0x106A1C0, vehicle); }
static void SET_VEHICLE_DISABLE_HEIGHT_MAP_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106A1D0, vehicle, p1); }
static void SET_BOAT_DISABLE_AVOIDANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106A270, vehicle, p1); }
static BOOL IS_HELI_LANDING_AREA_BLOCKED(Vehicle vehicle) { return invoke<BOOL>(0x106A2D0, vehicle); }
static void SET_SHORT_SLOWDOWN_FOR_LANDING(Vehicle vehicle) { invoke<Void>(0x106A340, vehicle); }
static void SET_HELI_TURBULENCE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0x106A3B0, vehicle, p1); }
static void SET_CAR_BOOT_OPEN(Vehicle vehicle) { invoke<Void>(0x106A410, vehicle); }
static void SET_VEHICLE_TYRE_BURST(Vehicle vehicle, int index, BOOL onRim, float p3) { invoke<Void>(0x106A480, vehicle, index, onRim, p3); }
static void SET_VEHICLE_DOORS_SHUT(Vehicle vehicle, BOOL closeInstantly) { invoke<Void>(0x106A4A0, vehicle, closeInstantly); }
static void SET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106A4C0, vehicle, toggle); }
static BOOL GET_VEHICLE_TYRES_CAN_BURST(Vehicle vehicle) { return invoke<BOOL>(0x106A520, vehicle); }
static void SET_VEHICLE_WHEELS_CAN_BREAK(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x106A580, vehicle, enabled); }
static void SET_VEHICLE_DOOR_OPEN(Vehicle vehicle, int doorId, BOOL loose, BOOL openInstantly) { invoke<Void>(0x106A620, vehicle, doorId, loose, openInstantly); }
static void SET_VEHICLE_DOOR_AUTO_LOCK(Vehicle vehicle, int doorId, BOOL toggle) { invoke<Void>(0x106A650, vehicle, doorId, toggle); }
static void SET_FLEEING_VEHICLES_USE_SWITCHED_OFF_NODES(Any p0) { invoke<Void>(0x106A6E0, p0); }
static void REMOVE_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x106A700, vehicle, windowIndex); }
static void ROLL_DOWN_WINDOWS(Vehicle vehicle) { invoke<Void>(0x106A770, vehicle); }
static void ROLL_DOWN_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x106A780, vehicle, windowIndex); }
static void ROLL_UP_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x106A7E0, vehicle, windowIndex); }
static void SMASH_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x106A840, vehicle, windowIndex); }
static void FIX_VEHICLE_WINDOW(Vehicle vehicle, int windowIndex) { invoke<Void>(0x106A850, vehicle, windowIndex); }
static void POP_OUT_VEHICLE_WINDSCREEN(Vehicle vehicle) { invoke<Void>(0x106A8B0, vehicle); }
static void POP_OFF_VEHICLE_ROOF_WITH_IMPULSE(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x106A910, vehicle, x, y, z); }
static void SET_VEHICLE_LIGHTS(Vehicle vehicle, int state) { invoke<Void>(0x106A9C0, vehicle, state); }
static void SET_VEHICLE_USE_PLAYER_LIGHT_SETTINGS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106AAC0, vehicle, toggle); }
static void SET_VEHICLE_HEADLIGHT_SHADOWS(Vehicle vehicle, int p1) { invoke<Void>(0x106AB10, vehicle, p1); }
static void SET_VEHICLE_ALARM(Vehicle vehicle, BOOL state) { invoke<Void>(0x106AB70, vehicle, state); }
static void START_VEHICLE_ALARM(Vehicle vehicle) { invoke<Void>(0x106ABC0, vehicle); }
static BOOL IS_VEHICLE_ALARM_ACTIVATED(Vehicle vehicle) { return invoke<BOOL>(0x106AC10, vehicle); }
static void SET_VEHICLE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106AC80, vehicle, toggle); }
static void SET_VEHICLE_FORCE_INTERIORLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106AD20, vehicle, toggle); }
static void SET_VEHICLE_LIGHT_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x106AD70, vehicle, multiplier); }
static void ATTACH_VEHICLE_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float radius) { invoke<Void>(0x106ADC0, vehicle, trailer, radius); }
static void ATTACH_VEHICLE_ON_TO_TRAILER(Vehicle vehicle, Vehicle trailer, float offsetX, float offsetY, float offsetZ, float coordsX, float coordsY, float coordsZ, float rotationX, float rotationY, float rotationZ, float disableCollisions) { invoke<Void>(0x106AEA0, vehicle, trailer, offsetX, offsetY, offsetZ, coordsX, coordsY, coordsZ, rotationX, rotationY, rotationZ, disableCollisions); }
static void STABILISE_ENTITY_ATTACHED_TO_HELI(Vehicle vehicle, Entity entity, float p2) { invoke<Void>(0x106AEC0, vehicle, entity, p2); }
static void DETACH_VEHICLE_FROM_TRAILER(Vehicle vehicle) { invoke<Void>(0x106AF70, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TRAILER(Vehicle vehicle) { return invoke<BOOL>(0x106B000, vehicle); }
static void SET_TRAILER_INVERSE_MASS_SCALE(Vehicle vehicle, float p1) { invoke<Void>(0x106B0C0, vehicle, p1); }
static void SET_TRAILER_LEGS_RAISED(Vehicle vehicle) { invoke<Void>(0x106B150, vehicle); }
static void SET_TRAILER_LEGS_LOWERED(Vehicle vehicle) { invoke<Void>(0x106B1B0, vehicle); }
static void SET_VEHICLE_TYRE_FIXED(Vehicle vehicle, int tyreIndex) { invoke<Void>(0x106B210, vehicle, tyreIndex); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle, const char* plateText) { invoke<Void>(0x106B290, vehicle, plateText); }
static const char* GET_VEHICLE_NUMBER_PLATE_TEXT(Vehicle vehicle) { return invoke<const char*>(0x106B2E0, vehicle); }
static int GET_NUMBER_OF_VEHICLE_NUMBER_PLATES() { return invoke<int>(0x106B340); }
static void SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle, int plateIndex) { invoke<Void>(0x106B360, vehicle, plateIndex); }
static int GET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(Vehicle vehicle) { return invoke<int>(0x106B3B0, vehicle); }
static void SET_RANDOM_TRAINS(BOOL toggle) { invoke<Void>(0x106B410, toggle); }
static Vehicle CREATE_MISSION_TRAIN(int variation, float x, float y, float z, BOOL direction, Any p5, Any p6) { return invoke<Vehicle>(0x106B430, variation, x, y, z, direction, p5, p6); }
static void SWITCH_TRAIN_TRACK(int trackId, BOOL state) { invoke<Void>(0x106B480, trackId, state); }
static void SET_TRAIN_TRACK_SPAWN_FREQUENCY(int trackIndex, int frequency) { invoke<Void>(0x106B4B0, trackIndex, frequency); }
static void ALLOW_TRAIN_TO_BE_REMOVED_BY_POPULATION(Any p0) { invoke<Void>(0x106B4E0, p0); }
static void DELETE_ALL_TRAINS() { invoke<Void>(0x106B530); }
static void SET_TRAIN_SPEED(Vehicle train, float speed) { invoke<Void>(0x106B540, train, speed); }
static void SET_TRAIN_CRUISE_SPEED(Vehicle train, float speed) { invoke<Void>(0x106B5B0, train, speed); }
static void SET_RANDOM_BOATS(BOOL toggle) { invoke<Void>(0x106B620, toggle); }
static void SET_RANDOM_BOATS_MP(BOOL toggle) { invoke<Void>(0x106B640, toggle); }
static void SET_GARBAGE_TRUCKS(BOOL toggle) { invoke<Void>(0x106B660, toggle); }
static BOOL DOES_VEHICLE_HAVE_STUCK_VEHICLE_CHECK(Vehicle vehicle) { return invoke<BOOL>(0x106B680, vehicle); }
static int GET_VEHICLE_RECORDING_ID(int recording, const char* script) { return invoke<int>(0x106B700, recording, script); }
static void REQUEST_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0x106B730, recording, script); }
static BOOL HAS_VEHICLE_RECORDING_BEEN_LOADED(int recording, const char* script) { return invoke<BOOL>(0x106B7B0, recording, script); }
static void REMOVE_VEHICLE_RECORDING(int recording, const char* script) { invoke<Void>(0x106B7F0, recording, script); }
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0x106B840, id, time); }
static Vector3 GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0x106B8B0, recording, time, script); }
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(int id, float time) { return invoke<Vector3>(0x106B950, id, time); }
static Vector3 GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(int recording, float time, const char* script) { return invoke<Vector3>(0x106B9C0, recording, time, script); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(int id) { return invoke<float>(0x106BA60, id); }
static float GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(int recording, const char* script) { return invoke<float>(0x106BA90, recording, script); }
static float GET_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x106BAD0, vehicle); }
static float GET_TIME_POSITION_IN_RECORDING(Vehicle vehicle) { return invoke<float>(0x106BB20, vehicle); }
static void START_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, int recording, const char* script, BOOL p3) { invoke<Void>(0x106BB70, vehicle, recording, script, p3); }
static void START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(Vehicle vehicle, int recording, const char* script, int flags, int time, int drivingStyle) { invoke<Void>(0x106BB90, vehicle, recording, script, flags, time, drivingStyle); }
static void FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106BBB0, vehicle, p1); }
static void STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x106BBD0, vehicle); }
static void PAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x106BC20, vehicle); }
static void UNPAUSE_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x106BC70, vehicle); }
static BOOL IS_PLAYBACK_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x106BCC0, vehicle); }
static BOOL IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x106BD20, vehicle); }
static int GET_CURRENT_PLAYBACK_FOR_VEHICLE(Vehicle vehicle) { return invoke<int>(0x106BD90, vehicle); }
static void SKIP_TO_END_AND_STOP_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle) { invoke<Void>(0x106BDE0, vehicle); }
static void SET_PLAYBACK_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x106BE30, vehicle, speed); }
static void START_PLAYBACK_RECORDED_VEHICLE_USING_AI(Vehicle vehicle, int recording, const char* script, float speed, int drivingStyle) { invoke<Void>(0x106BE90, vehicle, recording, script, speed, drivingStyle); }
static void SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Vehicle vehicle, float time) { invoke<Void>(0x106BEB0, vehicle, time); }
static void SET_PLAYBACK_TO_USE_AI(Vehicle vehicle, int drivingStyle) { invoke<Void>(0x106BF10, vehicle, drivingStyle); }
static void SET_PLAYBACK_TO_USE_AI_TRY_TO_REVERT_BACK_LATER(Vehicle vehicle, int time, int drivingStyle, BOOL p3) { invoke<Void>(0x106BF60, vehicle, time, drivingStyle, p3); }
static void SET_ADDITIONAL_ROTATION_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z, Any p4) { invoke<Void>(0x106BFD0, vehicle, x, y, z, p4); }
static void SET_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x106BFF0, vehicle, x, y, z); }
static void SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x106C050, vehicle, x, y, z); }
static void SET_SHOULD_LERP_FROM_AI_TO_FULL_RECORDING(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106C0B0, vehicle, p1); }
static void EXPLODE_VEHICLE_IN_CUTSCENE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106C150, vehicle, p1); }
static void ADD_VEHICLE_STUCK_CHECK_WITH_WARP(Any p0, float p1, Any p2, BOOL p3, BOOL p4, BOOL p5, Any p6) { invoke<Void>(0x106C1D0, p0, p1, p2, p3, p4, p5, p6); }
static void SET_VEHICLE_MODEL_IS_SUPPRESSED(Hash model, BOOL suppressed) { invoke<Void>(0x106C280, model, suppressed); }
static Vehicle GET_RANDOM_VEHICLE_IN_SPHERE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x106C2A0, x, y, z, radius, modelHash, flags); }
static Vehicle GET_RANDOM_VEHICLE_FRONT_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x106C320, p0, p1, p2, p3, p4, p5, p6); }
static Vehicle GET_RANDOM_VEHICLE_BACK_BUMPER_IN_SPHERE(float p0, float p1, float p2, float p3, int p4, int p5, int p6) { return invoke<Vehicle>(0x106C3A0, p0, p1, p2, p3, p4, p5, p6); }
static Vehicle GET_CLOSEST_VEHICLE(float x, float y, float z, float radius, Hash modelHash, int flags) { return invoke<Vehicle>(0x106C420, x, y, z, radius, modelHash, flags); }
static Vehicle GET_TRAIN_CARRIAGE(Vehicle train, int trailerNumber) { return invoke<Vehicle>(0x106C450, train, trailerNumber); }
static BOOL IS_MISSION_TRAIN(Vehicle train) { return invoke<BOOL>(0x106C4C0, train); }
static void DELETE_MISSION_TRAIN(Vehicle* train) { invoke<Void>(0x106C540, train); }
static void SET_MISSION_TRAIN_AS_NO_LONGER_NEEDED(Vehicle* train, BOOL p1) { invoke<Void>(0x106C550, train, p1); }
static void SET_MISSION_TRAIN_COORDS(Vehicle train, float x, float y, float z) { invoke<Void>(0x106C560, train, x, y, z); }
static BOOL IS_THIS_MODEL_A_BOAT(Hash model) { return invoke<BOOL>(0x106C600, model); }
static BOOL IS_THIS_MODEL_A_JETSKI(Hash model) { return invoke<BOOL>(0x106C680, model); }
static BOOL IS_THIS_MODEL_A_PLANE(Hash model) { return invoke<BOOL>(0x106C700, model); }
static BOOL IS_THIS_MODEL_A_HELI(Hash model) { return invoke<BOOL>(0x106C780, model); }
static BOOL IS_THIS_MODEL_A_CAR(Hash model) { return invoke<BOOL>(0x106C800, model); }
static BOOL IS_THIS_MODEL_A_TRAIN(Hash model) { return invoke<BOOL>(0x106C880, model); }
static BOOL IS_THIS_MODEL_A_BIKE(Hash model) { return invoke<BOOL>(0x106C900, model); }
static BOOL IS_THIS_MODEL_A_BICYCLE(Hash model) { return invoke<BOOL>(0x106C980, model); }
static BOOL IS_THIS_MODEL_A_QUADBIKE(Hash model) { return invoke<BOOL>(0x106CA00, model); }
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_CAR(Hash model) { return invoke<BOOL>(0x106CA80, model); }
static BOOL IS_THIS_MODEL_AN_AMPHIBIOUS_QUADBIKE(Hash model) { return invoke<BOOL>(0x106CB00, model); }
static void SET_HELI_BLADES_FULL_SPEED(Vehicle vehicle) { invoke<Void>(0x106CB80, vehicle); }
static void SET_HELI_BLADES_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x106CC40, vehicle, speed); }
static void FORCE_SUB_THROTTLE_FOR_TIME(Vehicle vehicle, float p1, float p2) { invoke<Void>(0x106CD20, vehicle, p1, p2); }
static void SET_VEHICLE_CAN_BE_TARGETTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x106CDB0, vehicle, state); }
static void SET_DONT_ALLOW_PLAYER_TO_ENTER_VEHICLE_IF_LOCKED_FOR_PLAYER(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106CE50, vehicle, p1); }
static void SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(Vehicle vehicle, BOOL state) { invoke<Void>(0x106CF50, vehicle, state); }
static void SET_VEHICLE_HAS_UNBREAKABLE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106CFF0, vehicle, toggle); }
static void SET_VEHICLE_RESPECTS_LOCKS_WHEN_HAS_DRIVER(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106D090, vehicle, p1); }
static void SET_VEHICLE_CAN_EJECT_PASSENGERS_IF_LOCKED(Any p0, Any p1) { invoke<Void>(0x106D130, p0, p1); }
static float GET_VEHICLE_DIRT_LEVEL(Vehicle vehicle) { return invoke<float>(0x106D180, vehicle); }
static void SET_VEHICLE_DIRT_LEVEL(Vehicle vehicle, float dirtLevel) { invoke<Void>(0x106D1D0, vehicle, dirtLevel); }
static BOOL GET_DOES_VEHICLE_HAVE_DAMAGE_DECALS(Vehicle vehicle) { return invoke<BOOL>(0x106D240, vehicle); }
static BOOL IS_VEHICLE_DOOR_FULLY_OPEN(Vehicle vehicle, int doorId) { return invoke<BOOL>(0x106D2A0, vehicle, doorId); }
static void SET_VEHICLE_ENGINE_ON(Vehicle vehicle, BOOL value, BOOL instantly, BOOL disableAutoStart) { invoke<Void>(0x106D320, vehicle, value, instantly, disableAutoStart); }
static void SET_VEHICLE_UNDRIVEABLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106D350, vehicle, toggle); }
static void SET_VEHICLE_PROVIDES_COVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106D420, vehicle, toggle); }
static void SET_VEHICLE_DOOR_CONTROL(Vehicle vehicle, int doorId, int speed, float angle) { invoke<Void>(0x106D4C0, vehicle, doorId, speed, angle); }
static void SET_VEHICLE_DOOR_LATCHED(Vehicle vehicle, int doorId, BOOL p2, BOOL p3, BOOL p4) { invoke<Void>(0x106D4E0, vehicle, doorId, p2, p3, p4); }
static float GET_VEHICLE_DOOR_ANGLE_RATIO(Vehicle vehicle, int doorId) { return invoke<float>(0x106D510, vehicle, doorId); }
static Ped GET_PED_USING_VEHICLE_DOOR(Vehicle vehicle, int doord) { return invoke<Ped>(0x106D5A0, vehicle, doord); }
static void SET_VEHICLE_DOOR_SHUT(Vehicle vehicle, int doorId, BOOL closeInstantly) { invoke<Void>(0x106D5D0, vehicle, doorId, closeInstantly); }
static void SET_VEHICLE_DOOR_BROKEN(Vehicle vehicle, int doorId, BOOL deleteDoor) { invoke<Void>(0x106D5F0, vehicle, doorId, deleteDoor); }
static void SET_VEHICLE_CAN_BREAK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106D610, vehicle, toggle); }
static BOOL DOES_VEHICLE_HAVE_ROOF(Vehicle vehicle) { return invoke<BOOL>(0x106D680, vehicle); }
static void SET_VEHICLE_REMOVE_AGGRESSIVE_CARJACK_MISSION(Any p0) { invoke<Void>(0x106D6E0, p0); }
static void SET_VEHICLE_AVOID_PLAYER_VEHICLE_RIOT_VAN_MISSION(Any p0) { invoke<Void>(0x106D730, p0); }
static void SET_CARJACK_MISSION_REMOVAL_PARAMETERS(Any p0, Any p1) { invoke<Void>(0x106D780, p0, p1); }
static BOOL IS_BIG_VEHICLE(Vehicle vehicle) { return invoke<BOOL>(0x106D7A0, vehicle); }
static int GET_NUMBER_OF_VEHICLE_COLOURS(Vehicle vehicle) { return invoke<int>(0x106D800, vehicle); }
static void SET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle, int colorCombination) { invoke<Void>(0x106D870, vehicle, colorCombination); }
static int GET_VEHICLE_COLOUR_COMBINATION(Vehicle vehicle) { return invoke<int>(0x106D880, vehicle); }
static void SET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle, int colorIndex) { invoke<Void>(0x106D8A0, vehicle, colorIndex); }
static int GET_VEHICLE_XENON_LIGHT_COLOR_INDEX(Vehicle vehicle) { return invoke<int>(0x106D8F0, vehicle); }
static void SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106D950, vehicle, toggle); }
static void SET_VEHICLE_WILL_FORCE_OTHER_VEHICLES_TO_STOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106D9F0, vehicle, toggle); }
static void SET_VEHICLE_ACT_AS_IF_HAS_SIREN_ON(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106DA90, vehicle, p1); }
static void SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106DAF0, vehicle, p1); }
static void SET_VEHICLE_MAY_BE_USED_BY_GOTO_POINT_ANY_MEANS(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106DB50, vehicle, p1); }
static void GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(BOOL p0, Hash* modelHash, int* successIndicator) { invoke<Void>(0x106DBC0, p0, modelHash, successIndicator); }
static int GET_VEHICLE_DOOR_LOCK_STATUS(Vehicle vehicle) { return invoke<int>(0x106DBD0, vehicle); }
static int GET_VEHICLE_INDIVIDUAL_DOOR_LOCK_STATUS(Vehicle vehicle, int doorId) { return invoke<int>(0x106DC20, vehicle, doorId); }
static BOOL IS_VEHICLE_DOOR_DAMAGED(Vehicle veh, int doorID) { return invoke<BOOL>(0x106DC90, veh, doorID); }
static void SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(Vehicle vehicle, int doorId, BOOL isBreakable) { invoke<Void>(0x106DD20, vehicle, doorId, isBreakable); }
static BOOL IS_VEHICLE_BUMPER_BOUNCING(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0x106DDB0, vehicle, frontBumper); }
static BOOL IS_VEHICLE_BUMPER_BROKEN_OFF(Vehicle vehicle, BOOL frontBumper) { return invoke<BOOL>(0x106DE40, vehicle, frontBumper); }
static BOOL IS_COP_VEHICLE_IN_AREA_3D(float x1, float x2, float y1, float y2, float z1, float z2) { return invoke<BOOL>(0x106DE70, x1, x2, y1, y2, z1, z2); }
static BOOL IS_VEHICLE_ON_ALL_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0x106DF20, vehicle); }
static int GET_VEHICLE_MODEL_VALUE(Hash vehicleModel) { return invoke<int>(0x106DF80, vehicleModel); }
static Hash GET_VEHICLE_LAYOUT_HASH(Vehicle vehicle) { return invoke<Hash>(0x106DFA0, vehicle); }
static Hash GET_IN_VEHICLE_CLIPSET_HASH_FOR_SEAT(Vehicle vehicle, int p1) { return invoke<Hash>(0x106E000, vehicle, p1); }
static void SET_RENDER_TRAIN_AS_DERAILED(Vehicle train, BOOL toggle) { invoke<Void>(0x106E080, train, toggle); }
static void SET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int pearlescentColor, int wheelColor) { invoke<Void>(0x106E0A0, vehicle, pearlescentColor, wheelColor); }
static void GET_VEHICLE_EXTRA_COLOURS(Vehicle vehicle, int* pearlescentColor, int* wheelColor) { invoke<Void>(0x106E140, vehicle, pearlescentColor, wheelColor); }
static void SET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int color) { invoke<Void>(0x106E1A0, vehicle, color); }
static void GET_VEHICLE_EXTRA_COLOUR_5(Vehicle vehicle, int* color) { invoke<Void>(0x106E210, vehicle, color); }
static void SET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int color) { invoke<Void>(0x106E260, vehicle, color); }
static void GET_VEHICLE_EXTRA_COLOUR_6(Vehicle vehicle, int* color) { invoke<Void>(0x106E2D0, vehicle, color); }
static void STOP_ALL_GARAGE_ACTIVITY() { invoke<Void>(0x106E320); }
static void SET_VEHICLE_FIXED(Vehicle vehicle) { invoke<Void>(0x106E330, vehicle); }
static void SET_VEHICLE_DEFORMATION_FIXED(Vehicle vehicle) { invoke<Void>(0x106E3A0, vehicle); }
static void SET_VEHICLE_CAN_ENGINE_MISSFIRE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E3F0, vehicle, toggle); }
static void SET_VEHICLE_CAN_LEAK_OIL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E4A0, vehicle, toggle); }
static void SET_VEHICLE_CAN_LEAK_PETROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E560, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E620, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_PETROL_TANK_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E6D0, vehicle, toggle); }
static void SET_DISABLE_VEHICLE_ENGINE_FIRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E780, vehicle, toggle); }
static void SET_VEHICLE_LIMIT_SPEED_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E830, vehicle, toggle); }
static void SET_VEHICLE_STOP_INSTANTLY_WHEN_PLAYER_INACTIVE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E8E0, vehicle, toggle); }
static void SET_DISABLE_PRETEND_OCCUPANTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106E980, vehicle, toggle); }
static void REMOVE_VEHICLES_FROM_GENERATORS_IN_AREA(float x1, float y1, float z1, float x2, float y2, float z2, Any p6) { invoke<Void>(0x106EA30, x1, y1, z1, x2, y2, z2, p6); }
static void SET_VEHICLE_STEER_BIAS(Vehicle vehicle, float value) { invoke<Void>(0x106EA50, vehicle, value); }
static BOOL IS_VEHICLE_EXTRA_TURNED_ON(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x106EAA0, vehicle, extraId); }
static void SET_VEHICLE_EXTRA(Vehicle vehicle, int extraId, BOOL disable) { invoke<Void>(0x106EB10, vehicle, extraId, disable); }
static BOOL DOES_EXTRA_EXIST(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x106EB30, vehicle, extraId); }
static BOOL IS_EXTRA_BROKEN_OFF(Vehicle vehicle, int extraId) { return invoke<BOOL>(0x106EBB0, vehicle, extraId); }
static void SET_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106EC60, vehicle, p1); }
static void LOWER_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyLower) { invoke<Void>(0x106ECD0, vehicle, instantlyLower); }
static void RAISE_CONVERTIBLE_ROOF(Vehicle vehicle, BOOL instantlyRaise) { invoke<Void>(0x106ED20, vehicle, instantlyRaise); }
static int GET_CONVERTIBLE_ROOF_STATE(Vehicle vehicle) { return invoke<int>(0x106ED70, vehicle); }
static BOOL IS_VEHICLE_A_CONVERTIBLE(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x106EDD0, vehicle, p1); }
static BOOL TRANSFORM_TO_SUBMARINE(Vehicle vehicle, BOOL noAnimation) { return invoke<BOOL>(0x106EE50, vehicle, noAnimation); }
static void TRANSFORM_TO_CAR(Vehicle vehicle, BOOL noAnimation) { invoke<Void>(0x106EEA0, vehicle, noAnimation); }
static BOOL IS_VEHICLE_IN_SUBMARINE_MODE(Vehicle vehicle) { return invoke<BOOL>(0x106EEF0, vehicle); }
static BOOL IS_VEHICLE_STOPPED_AT_TRAFFIC_LIGHTS(Vehicle vehicle) { return invoke<BOOL>(0x106EF50, vehicle); }
static void SET_VEHICLE_DAMAGE(Vehicle vehicle, float xOffset, float yOffset, float zOffset, float damage, float radius, BOOL focusOnModel) { invoke<Void>(0x106EFF0, vehicle, xOffset, yOffset, zOffset, damage, radius, focusOnModel); }
static void SET_VEHICLE_OCCUPANTS_TAKE_EXPLOSIVE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106F020, vehicle, toggle); }
static float GET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle) { return invoke<float>(0x106F070, vehicle); }
static void SET_VEHICLE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x106F0D0, vehicle, health); }
static void SET_PLANE_ENGINE_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x106F1D0, vehicle, health); }
static float GET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle) { return invoke<float>(0x106F270, vehicle); }
static void SET_VEHICLE_PETROL_TANK_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x106F2D0, vehicle, health); }
static BOOL IS_VEHICLE_STUCK_TIMER_UP(Vehicle vehicle, int p1, int ms) { return invoke<BOOL>(0x106F320, vehicle, p1, ms); }
static void RESET_VEHICLE_STUCK_TIMER(Vehicle vehicle, int nullAttributes) { invoke<Void>(0x106F3B0, vehicle, nullAttributes); }
static BOOL IS_VEHICLE_DRIVEABLE(Vehicle vehicle, BOOL isOnFireCheck) { return invoke<BOOL>(0x106F400, vehicle, isOnFireCheck); }
static void SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Vehicle vehicle, BOOL owned) { invoke<Void>(0x106F490, vehicle, owned); }
static void SET_VEHICLE_NEEDS_TO_BE_HOTWIRED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106F530, vehicle, toggle); }
static void SET_VEHICLE_BLIP_THROTTLE_RANDOMLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x106F5D0, vehicle, p1); }
static void SET_POLICE_FOCUS_WILL_TRACK_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106F670, vehicle, toggle); }
static void START_VEHICLE_HORN(Vehicle vehicle, int duration, Hash mode, BOOL forever) { invoke<Void>(0x106F710, vehicle, duration, mode, forever); }
static void SET_VEHICLE_IN_CAR_MOD_SHOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106F7E0, vehicle, toggle); }
static void SET_VEHICLE_HAS_STRONG_AXLES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106F840, vehicle, toggle); }
static const char* GET_DISPLAY_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0x106F8E0, modelHash); }
static const char* GET_MAKE_NAME_FROM_VEHICLE_MODEL(Hash modelHash) { return invoke<const char*>(0x106F960, modelHash); }
static Vector3 GET_VEHICLE_DEFORMATION_AT_POS(Vehicle vehicle, float offsetX, float offsetY, float offsetZ) { return invoke<Vector3>(0x106F9E0, vehicle, offsetX, offsetY, offsetZ); }
static void SET_VEHICLE_LIVERY(Vehicle vehicle, int livery) { invoke<Void>(0x106FAB0, vehicle, livery); }
static int GET_VEHICLE_LIVERY(Vehicle vehicle) { return invoke<int>(0x106FB10, vehicle); }
static int GET_VEHICLE_LIVERY_COUNT(Vehicle vehicle) { return invoke<int>(0x106FB70, vehicle); }
static void SET_VEHICLE_LIVERY2(Vehicle vehicle, int livery) { invoke<Void>(0x106FBD0, vehicle, livery); }
static int GET_VEHICLE_LIVERY2(Vehicle vehicle) { return invoke<int>(0x106FC30, vehicle); }
static int GET_VEHICLE_LIVERY2_COUNT(Vehicle vehicle) { return invoke<int>(0x106FC90, vehicle); }
static BOOL IS_VEHICLE_WINDOW_INTACT(Vehicle vehicle, int windowIndex) { return invoke<BOOL>(0x106FCF0, vehicle, windowIndex); }
static BOOL ARE_ALL_VEHICLE_WINDOWS_INTACT(Vehicle vehicle) { return invoke<BOOL>(0x106FD60, vehicle); }
static BOOL ARE_ANY_VEHICLE_SEATS_FREE(Vehicle vehicle) { return invoke<BOOL>(0x106FDC0, vehicle); }
static void RESET_VEHICLE_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x106FE30, vehicle, toggle); }
static BOOL IS_HELI_PART_BROKEN(Vehicle vehicle, BOOL p1, BOOL p2, BOOL p3) { return invoke<BOOL>(0x106FEB0, vehicle, p1, p2, p3); }
static float GET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x106FF60, vehicle); }
static float GET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle) { return invoke<float>(0x106FFE0, vehicle); }
static float GET_HELI_TAIL_BOOM_HEALTH(Vehicle vehicle) { return invoke<float>(0x1070060, vehicle); }
static void SET_HELI_MAIN_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x10700E0, vehicle, health); }
static void SET_HELI_TAIL_ROTOR_HEALTH(Vehicle vehicle, float health) { invoke<Void>(0x1070140, vehicle, health); }
static BOOL SET_HELI_TAIL_BOOM_CAN_BREAK_OFF(Vehicle vehicle, BOOL toggle) { return invoke<BOOL>(0x10701A0, vehicle, toggle); }
static void SET_VEHICLE_NAME_DEBUG(Vehicle vehicle, const char* name) { invoke<Void>(0x10701F0, vehicle, name); }
static void SET_VEHICLE_EXPLODES_ON_HIGH_EXPLOSION_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1070200, vehicle, toggle); }
static void SET_VEHICLE_EXPLODES_ON_EXPLOSION_DAMAGE_AT_ZERO_BODY_HEALTH(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10702A0, vehicle, toggle); }
static void SET_ALLOW_VEHICLE_EXPLODES_ON_CONTACT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10702F0, vehicle, toggle); }
static void SET_VEHICLE_DISABLE_TOWING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1070390, vehicle, toggle); }
static BOOL GET_VEHICLE_HAS_LANDING_GEAR(Vehicle vehicle) { return invoke<BOOL>(0x1070430, vehicle); }
static void CONTROL_LANDING_GEAR(Vehicle vehicle, int state) { invoke<Void>(0x1070490, vehicle, state); }
static int GET_LANDING_GEAR_STATE(Vehicle vehicle) { return invoke<int>(0x1070510, vehicle); }
static BOOL IS_ANY_VEHICLE_NEAR_POINT(float x, float y, float z, float radius) { return invoke<BOOL>(0x1070590, x, y, z, radius); }
static void REQUEST_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x1070690, vehicle); }
static void REMOVE_VEHICLE_HIGH_DETAIL_MODEL(Vehicle vehicle) { invoke<Void>(0x10706D0, vehicle); }
static BOOL IS_VEHICLE_HIGH_DETAIL(Vehicle vehicle) { return invoke<BOOL>(0x1070710, vehicle); }
static void REQUEST_VEHICLE_ASSET(Hash vehicleHash, int vehicleAsset) { invoke<Void>(0x1070770, vehicleHash, vehicleAsset); }
static BOOL HAS_VEHICLE_ASSET_LOADED(int vehicleAsset) { return invoke<BOOL>(0x1070820, vehicleAsset); }
static void REMOVE_VEHICLE_ASSET(int vehicleAsset) { invoke<Void>(0x1070850, vehicleAsset); }
static void SET_VEHICLE_TOW_TRUCK_ARM_POSITION(Vehicle vehicle, float position) { invoke<Void>(0x10708D0, vehicle, position); }
static void ATTACH_VEHICLE_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle, BOOL rear, float hookOffsetX, float hookOffsetY, float hookOffsetZ) { invoke<Void>(0x1070970, towTruck, vehicle, rear, hookOffsetX, hookOffsetY, hookOffsetZ); }
static void DETACH_VEHICLE_FROM_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { invoke<Void>(0x1070990, towTruck, vehicle); }
static BOOL DETACH_VEHICLE_FROM_ANY_TOW_TRUCK(Vehicle vehicle) { return invoke<BOOL>(0x10709A0, vehicle); }
static BOOL IS_VEHICLE_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck, Vehicle vehicle) { return invoke<BOOL>(0x10709D0, towTruck, vehicle); }
static Entity GET_ENTITY_ATTACHED_TO_TOW_TRUCK(Vehicle towTruck) { return invoke<Entity>(0x1070A00, towTruck); }
static Entity SET_VEHICLE_AUTOMATICALLY_ATTACHES(Vehicle vehicle, BOOL p1, Any p2) { return invoke<Entity>(0x1070AB0, vehicle, p1, p2); }
static void SET_VEHICLE_BULLDOZER_ARM_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0x1070B70, vehicle, position, p2); }
static void SET_VEHICLE_TANK_TURRET_POSITION(Vehicle vehicle, float position, BOOL p2) { invoke<Void>(0x1070B90, vehicle, position, p2); }
static void SET_VEHICLE_TURRET_TARGET(Vehicle vehicle, BOOL p1, float x, float y, float z, BOOL p5) { invoke<Void>(0x1070BB0, vehicle, p1, x, y, z, p5); }
static void SET_VEHICLE_TANK_STATIONARY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1070BD0, vehicle, p1); }
static void SET_VEHICLE_TURRET_SPEED_THIS_FRAME(Vehicle vehicle, float speed) { invoke<Void>(0x1070C30, vehicle, speed); }
static void DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(Vehicle vehicle) { invoke<Void>(0x1070C40, vehicle); }
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle vehicle, float angleRatio) { invoke<Void>(0x1070C50, vehicle, angleRatio); }
static void SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(Vehicle vehicle, float angle) { invoke<Void>(0x1070CC0, vehicle, angle); }
static float GET_VEHICLE_FLIGHT_NOZZLE_POSITION(Vehicle plane) { return invoke<float>(0x1070D30, plane); }
static void SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1070DA0, vehicle, toggle); }
static BOOL GENERATE_VEHICLE_CREATION_POS_FROM_PATHS(Vector3* outVec, Any p1, Vector3* outVec1, Any p3, Any p4, Any p5, Any p6, Any p7, Any p8) { return invoke<BOOL>(0x1070E00, outVec, p1, outVec1, p3, p4, p5, p6, p7, p8); }
static void SET_VEHICLE_BURNOUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1070EF0, vehicle, toggle); }
static BOOL IS_VEHICLE_IN_BURNOUT(Vehicle vehicle) { return invoke<BOOL>(0x1070F50, vehicle); }
static void SET_VEHICLE_REDUCE_GRIP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1070FC0, vehicle, toggle); }
static void SET_VEHICLE_REDUCE_GRIP_LEVEL(Vehicle vehicle, int val) { invoke<Void>(0x1071040, vehicle, val); }
static void SET_VEHICLE_INDICATOR_LIGHTS(Vehicle vehicle, int turnSignal, BOOL toggle) { invoke<Void>(0x10710A0, vehicle, turnSignal, toggle); }
static void SET_VEHICLE_BRAKE_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10711B0, vehicle, toggle); }
static void SET_VEHICLE_TAIL_LIGHTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1071250, vehicle, toggle); }
static void SET_VEHICLE_HANDBRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10712B0, vehicle, toggle); }
static void SET_VEHICLE_BRAKE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1071380, vehicle, toggle); }
static void INSTANTLY_FILL_VEHICLE_POPULATION() { invoke<Void>(0x10713D0); }
static BOOL HAS_INSTANT_FILL_VEHICLE_POPULATION_FINISHED() { return invoke<BOOL>(0x10713E0); }
static void NETWORK_ENABLE_EMPTY_CROWDING_VEHICLES_REMOVAL(BOOL toggle) { invoke<Void>(0x1071400, toggle); }
static void NETWORK_CAP_EMPTY_CROWDING_VEHICLES_REMOVAL(int p0) { invoke<Void>(0x1071420, p0); }
static BOOL GET_VEHICLE_TRAILER_VEHICLE(Vehicle vehicle, Vehicle* trailer) { return invoke<BOOL>(0x1071430, vehicle, trailer); }
static Vehicle _GET_VEHICLE_TRAILER_PARENT_VEHICLE(Vehicle trailer) { return invoke<Vehicle>(0x1071500, trailer); }
static void SET_VEHICLE_USES_LARGE_REAR_RAMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1071570, vehicle, toggle); }
static void SET_VEHICLE_RUDDER_BROKEN(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1071610, vehicle, toggle); }
static void SET_CONVERTIBLE_ROOF_LATCH_STATE(Vehicle vehicle, BOOL state) { invoke<Void>(0x10716D0, vehicle, state); }
static float GET_VEHICLE_ESTIMATED_MAX_SPEED(Vehicle vehicle) { return invoke<float>(0x1071730, vehicle); }
static float GET_VEHICLE_MAX_BRAKING(Vehicle vehicle) { return invoke<float>(0x1071760, vehicle); }
static float GET_VEHICLE_MAX_TRACTION(Vehicle vehicle) { return invoke<float>(0x1071810, vehicle); }
static float GET_VEHICLE_ACCELERATION(Vehicle vehicle) { return invoke<float>(0x1071840, vehicle); }
static float GET_VEHICLE_MODEL_ESTIMATED_MAX_SPEED(Hash modelHash) { return invoke<float>(0x1071870, modelHash); }
static float GET_VEHICLE_MODEL_MAX_BRAKING(Hash modelHash) { return invoke<float>(0x1071920, modelHash); }
static float GET_VEHICLE_MODEL_MAX_BRAKING_MAX_MODS(Hash modelHash) { return invoke<float>(0x10719F0, modelHash); }
static float GET_VEHICLE_MODEL_MAX_TRACTION(Hash modelHash) { return invoke<float>(0x1071AD0, modelHash); }
static float GET_VEHICLE_MODEL_ACCELERATION(Hash modelHash) { return invoke<float>(0x1071BB0, modelHash); }
static float GET_VEHICLE_MODEL_ACCELERATION_MAX_MODS(Hash modelHash) { return invoke<float>(0x1071C70, modelHash); }
static float GET_FLYING_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0x1071CA0, modelHash); }
static float GET_BOAT_VEHICLE_MODEL_AGILITY(Hash modelHash) { return invoke<float>(0x1071CD0, modelHash); }
static float GET_VEHICLE_CLASS_ESTIMATED_MAX_SPEED(int vehicleClass) { return invoke<float>(0x1071D90, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_TRACTION(int vehicleClass) { return invoke<float>(0x1071DC0, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_AGILITY(int vehicleClass) { return invoke<float>(0x1071E00, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_ACCELERATION(int vehicleClass) { return invoke<float>(0x1071E40, vehicleClass); }
static float GET_VEHICLE_CLASS_MAX_BRAKING(int vehicleClass) { return invoke<float>(0x1071E80, vehicleClass); }
static int ADD_ROAD_NODE_SPEED_ZONE(float x, float y, float z, float radius, float speed, BOOL p5) { return invoke<int>(0x1071EC0, x, y, z, radius, speed, p5); }
static BOOL REMOVE_ROAD_NODE_SPEED_ZONE(int speedzone) { return invoke<BOOL>(0x1071F70, speedzone); }
static void OPEN_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0x1071FB0, vehicle); }
static void CLOSE_BOMB_BAY_DOORS(Vehicle vehicle) { invoke<Void>(0x1072030, vehicle); }
static BOOL GET_ARE_BOMB_BAY_DOORS_OPEN(Vehicle aircraft) { return invoke<BOOL>(0x10720B0, aircraft); }
static BOOL IS_VEHICLE_SEARCHLIGHT_ON(Vehicle vehicle) { return invoke<BOOL>(0x1072140, vehicle); }
static void SET_VEHICLE_SEARCHLIGHT(Vehicle heli, BOOL toggle, BOOL canBeUsedByAI) { invoke<Void>(0x1072210, heli, toggle, canBeUsedByAI); }
static BOOL DOES_VEHICLE_HAVE_SEARCHLIGHT(Vehicle vehicle) { return invoke<BOOL>(0x1072230, vehicle); }
static BOOL IS_ENTRY_POINT_FOR_SEAT_CLEAR(Ped ped, Vehicle vehicle, int seatIndex, BOOL side, BOOL onEnter) { return invoke<BOOL>(0x10722E0, ped, vehicle, seatIndex, side, onEnter); }
static Vector3 GET_ENTRY_POINT_POSITION(Vehicle vehicle, int doorId) { return invoke<Vector3>(0x1072320, vehicle, doorId); }
static BOOL CAN_SHUFFLE_SEAT(Vehicle vehicle, int seatIndex) { return invoke<BOOL>(0x1072400, vehicle, seatIndex); }
static int GET_NUM_MOD_KITS(Vehicle vehicle) { return invoke<int>(0x10724B0, vehicle); }
static void SET_VEHICLE_MOD_KIT(Vehicle vehicle, int modKit) { invoke<Void>(0x1072510, vehicle, modKit); }
static int GET_VEHICLE_MOD_KIT(Vehicle vehicle) { return invoke<int>(0x1072580, vehicle); }
static int GET_VEHICLE_MOD_KIT_TYPE(Vehicle vehicle) { return invoke<int>(0x10725E0, vehicle); }
static int GET_VEHICLE_WHEEL_TYPE(Vehicle vehicle) { return invoke<int>(0x1072650, vehicle); }
static void SET_VEHICLE_WHEEL_TYPE(Vehicle vehicle, int WheelType) { invoke<Void>(0x10726B0, vehicle, WheelType); }
static int GET_NUM_MOD_COLORS(int paintType, BOOL p1) { return invoke<int>(0x1072750, paintType, p1); }
static void SET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int paintType, int color, int pearlescentColor) { invoke<Void>(0x10727F0, vehicle, paintType, color, pearlescentColor); }
static void SET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int paintType, int color) { invoke<Void>(0x1072880, vehicle, paintType, color); }
static void GET_VEHICLE_MOD_COLOR_1(Vehicle vehicle, int* paintType, int* color, int* pearlescentColor) { invoke<Void>(0x1072910, vehicle, paintType, color, pearlescentColor); }
static void GET_VEHICLE_MOD_COLOR_2(Vehicle vehicle, int* paintType, int* color) { invoke<Void>(0x10729C0, vehicle, paintType, color); }
static const char* GET_VEHICLE_MOD_COLOR_1_NAME(Vehicle vehicle, BOOL p1) { return invoke<const char*>(0x1072A60, vehicle, p1); }
static const char* GET_VEHICLE_MOD_COLOR_2_NAME(Vehicle vehicle) { return invoke<const char*>(0x1072AF0, vehicle); }
static BOOL HAVE_VEHICLE_MODS_STREAMED_IN(Vehicle vehicle) { return invoke<BOOL>(0x1072B70, vehicle); }
static BOOL IS_VEHICLE_MOD_GEN9_EXCLUSIVE(Vehicle vehicle, int modType, int modIndex) { return invoke<BOOL>(0x1072BD0, vehicle, modType, modIndex); }
static void SET_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex, BOOL customTires) { invoke<Void>(0x1072C60, vehicle, modType, modIndex, customTires); }
static int GET_VEHICLE_MOD(Vehicle vehicle, int modType) { return invoke<int>(0x1072D40, vehicle, modType); }
static int GET_VEHICLE_MOD_VARIATION(Vehicle vehicle, int modType) { return invoke<int>(0x1072E20, vehicle, modType); }
static int GET_NUM_VEHICLE_MODS(Vehicle vehicle, int modType) { return invoke<int>(0x1072EF0, vehicle, modType); }
static void REMOVE_VEHICLE_MOD(Vehicle vehicle, int modType) { invoke<Void>(0x1072F90, vehicle, modType); }
static void TOGGLE_VEHICLE_MOD(Vehicle vehicle, int modType, BOOL toggle) { invoke<Void>(0x1073060, vehicle, modType, toggle); }
static BOOL IS_TOGGLE_MOD_ON(Vehicle vehicle, int modType) { return invoke<BOOL>(0x10730F0, vehicle, modType); }
static const char* GET_MOD_TEXT_LABEL(Vehicle vehicle, int modType, int modValue) { return invoke<const char*>(0x1073170, vehicle, modType, modValue); }
static const char* GET_MOD_SLOT_NAME(Vehicle vehicle, int modType) { return invoke<const char*>(0x1073220, vehicle, modType); }
static const char* GET_LIVERY_NAME(Vehicle vehicle, int liveryIndex) { return invoke<const char*>(0x10732C0, vehicle, liveryIndex); }
static int GET_VEHICLE_MOD_MODIFIER_VALUE(Vehicle vehicle, int modType, int modIndex) { return invoke<int>(0x1073340, vehicle, modType, modIndex); }
static Hash GET_VEHICLE_MOD_IDENTIFIER_HASH(Vehicle vehicle, int modType, int modIndex) { return invoke<Hash>(0x1073370, vehicle, modType, modIndex); }
static void PRELOAD_VEHICLE_MOD(Vehicle vehicle, int modType, int modIndex) { invoke<Void>(0x10733A0, vehicle, modType, modIndex); }
static BOOL HAS_PRELOAD_MODS_FINISHED(Vehicle vehicle) { return invoke<BOOL>(0x1073440, vehicle); }
static void RELEASE_PRELOAD_MODS(Vehicle vehicle) { invoke<Void>(0x10734A0, vehicle); }
static void SET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x10734F0, vehicle, r, g, b); }
static void GET_VEHICLE_TYRE_SMOKE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x1073550, vehicle, r, g, b); }
static void SET_VEHICLE_WINDOW_TINT(Vehicle vehicle, int tint) { invoke<Void>(0x10735C0, vehicle, tint); }
static int GET_VEHICLE_WINDOW_TINT(Vehicle vehicle) { return invoke<int>(0x1073610, vehicle); }
static int GET_NUM_VEHICLE_WINDOW_TINTS() { return invoke<int>(0x1073680); }
static void GET_VEHICLE_COLOR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x10736A0, vehicle, r, g, b); }
static int GET_VEHICLE_COLOURS_WHICH_CAN_BE_SET(Vehicle vehicle) { return invoke<int>(0x10736C0, vehicle); }
static Hash GET_VEHICLE_CAUSE_OF_DESTRUCTION(Vehicle vehicle) { return invoke<Hash>(0x10736E0, vehicle); }
static void OVERRIDE_PLANE_DAMAGE_THREHSOLD(Vehicle vehicle, float health) { invoke<Void>(0x1073730, vehicle, health); }
static BOOL GET_IS_LEFT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x1073780, vehicle); }
static BOOL GET_IS_RIGHT_VEHICLE_HEADLIGHT_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x1073800, vehicle); }
static BOOL GET_BOTH_VEHICLE_HEADLIGHTS_DAMAGED(Vehicle vehicle) { return invoke<BOOL>(0x1073880, vehicle); }
static void MODIFY_VEHICLE_TOP_SPEED(Vehicle vehicle, float value) { invoke<Void>(0x10738E0, vehicle, value); }
static void SET_VEHICLE_MAX_SPEED(Vehicle vehicle, float speed) { invoke<Void>(0x10738F0, vehicle, speed); }
static void SET_VEHICLE_STAYS_FROZEN_WHEN_CLEANED_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1073940, vehicle, toggle); }
static void SET_VEHICLE_ACT_AS_IF_HIGH_SPEED_FOR_FRAG_SMASHING(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10739E0, vehicle, p1); }
static void SET_PEDS_CAN_FALL_OFF_THIS_VEHICLE_FROM_LARGE_FALL_DAMAGE(Vehicle vehicle, BOOL toggle, float p2) { invoke<Void>(0x1073A70, vehicle, toggle, p2); }
static int ADD_VEHICLE_COMBAT_ANGLED_AVOIDANCE_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6) { return invoke<int>(0x1073B40, p0, p1, p2, p3, p4, p5, p6); }
static void REMOVE_VEHICLE_COMBAT_AVOIDANCE_AREA(int p0) { invoke<Void>(0x1073BE0, p0); }
static BOOL IS_ANY_PED_RAPPELLING_FROM_HELI(Vehicle vehicle) { return invoke<BOOL>(0x1073C20, vehicle); }
static void SET_VEHICLE_CHEAT_POWER_INCREASE(Vehicle vehicle, float value) { invoke<Void>(0x1073C50, vehicle, value); }
static void SET_VEHICLE_INFLUENCES_WANTED_LEVEL(Any p0, BOOL p1) { invoke<Void>(0x1073CA0, p0, p1); }
static void SET_VEHICLE_IS_WANTED(Vehicle vehicle, BOOL state) { invoke<Void>(0x1073D30, vehicle, state); }
static void SWING_BOAT_BOOM_TO_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0x1073DD0, vehicle, ratio); }
static void SWING_BOAT_BOOM_FREELY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1073E70, vehicle, toggle); }
static void ALLOW_BOAT_BOOM_TO_ANIMATE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1073F10, vehicle, toggle); }
static float GET_BOAT_BOOM_POSITION_RATIO(Vehicle vehicle) { return invoke<float>(0x1073FB0, vehicle); }
static void DISABLE_PLANE_AILERON(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x1074050, vehicle, p1, p2); }
static BOOL GET_IS_VEHICLE_ENGINE_RUNNING(Vehicle vehicle) { return invoke<BOOL>(0x10740D0, vehicle); }
static void SET_VEHICLE_USE_ALTERNATE_HANDLING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1074130, vehicle, toggle); }
static void SET_BIKE_ON_STAND(Vehicle vehicle, float x, float y) { invoke<Void>(0x10741F0, vehicle, x, y); }
static void SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1074270, vehicle, p1); }
static void LOCK_DOORS_WHEN_NO_LONGER_NEEDED(Vehicle vehicle) { invoke<Void>(0x1074310, vehicle); }
static void SET_LAST_DRIVEN_VEHICLE(Vehicle vehicle) { invoke<Void>(0x1074360, vehicle); }
static Vehicle GET_LAST_DRIVEN_VEHICLE() { return invoke<Vehicle>(0x10743B0); }
static void CLEAR_LAST_DRIVEN_VEHICLE() { invoke<Void>(0x10743E0); }
static void SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10743F0, vehicle, toggle); }
static void SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(Vehicle plane, int height) { invoke<Void>(0x1074490, plane, height); }
static void SET_VEHICLE_LOD_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x10744A0, vehicle, multiplier); }
static void SET_VEHICLE_CAN_SAVE_IN_GARAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10744F0, vehicle, toggle); }
static int GET_VEHICLE_NUM_OF_BROKEN_OFF_PARTS(Vehicle vehicle) { return invoke<int>(0x1074590, vehicle); }
static int GET_VEHICLE_NUM_OF_BROKEN_LOOSEN_PARTS(Vehicle vehicle) { return invoke<int>(0x10745F0, vehicle); }
static void SET_FORCE_VEHICLE_ENGINE_DAMAGE_BY_BULLET(Any p0, BOOL p1) { invoke<Void>(0x1074650, p0, p1); }
static void SET_VEHICLE_GENERATES_ENGINE_SHOCKING_EVENTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10746F0, vehicle, toggle); }
static void COPY_VEHICLE_DAMAGES(Vehicle sourceVehicle, Vehicle targetVehicle) { invoke<Void>(0x1074790, sourceVehicle, targetVehicle); }
static void DISABLE_VEHICLE_EXPLOSION_BREAK_OFF_PARTS() { invoke<Void>(0x1074820); }
static void SET_LIGHTS_CUTOFF_DISTANCE_TWEAK(float distance) { invoke<Void>(0x1074830, distance); }
static void SET_VEHICLE_SHOOT_AT_TARGET(Ped driver, Entity entity, float xTarget, float yTarget, float zTarget) { invoke<Void>(0x1074850, driver, entity, xTarget, yTarget, zTarget); }
static BOOL GET_VEHICLE_LOCK_ON_TARGET(Vehicle vehicle, Entity* entity) { return invoke<BOOL>(0x1074870, vehicle, entity); }
static void SET_FORCE_HD_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10748E0, vehicle, toggle); }
static void SET_VEHICLE_CUSTOM_PATH_NODE_STREAMING_RADIUS(Vehicle vehicle, float p1) { invoke<Void>(0x1074980, vehicle, p1); }
static int GET_VEHICLE_PLATE_TYPE(Vehicle vehicle) { return invoke<int>(0x10749E0, vehicle); }
static void TRACK_VEHICLE_VISIBILITY(Vehicle vehicle) { invoke<Void>(0x1074A40, vehicle); }
static BOOL IS_VEHICLE_VISIBLE(Vehicle vehicle) { return invoke<BOOL>(0x1074A80, vehicle); }
static void SET_VEHICLE_GRAVITY(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1074AF0, vehicle, toggle); }
static void SET_ENABLE_VEHICLE_SLIPSTREAMING(BOOL toggle) { invoke<Void>(0x1074B50, toggle); }
static void SET_VEHICLE_SLIPSTREAMING_SHOULD_TIME_OUT(BOOL toggle) { invoke<Void>(0x1074B70, toggle); }
static float GET_VEHICLE_CURRENT_TIME_IN_SLIP_STREAM(Vehicle vehicle) { return invoke<float>(0x1074B90, vehicle); }
static BOOL IS_VEHICLE_PRODUCING_SLIP_STREAM(Vehicle vehicle) { return invoke<BOOL>(0x1074BE0, vehicle); }
static void SET_VEHICLE_INACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1074C40, vehicle, toggle); }
static void SET_VEHICLE_ACTIVE_DURING_PLAYBACK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1074D50, vehicle, toggle); }
static BOOL IS_VEHICLE_SPRAYABLE(Vehicle vehicle) { return invoke<BOOL>(0x1074DF0, vehicle); }
static void SET_VEHICLE_ENGINE_CAN_DEGRADE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1074E50, vehicle, toggle); }
static void DISABLE_VEHCILE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle, int p1, int p2) { invoke<Void>(0x1074F10, vehicle, p1, p2); }
static void ENABLE_VEHICLE_DYNAMIC_AMBIENT_SCALES(Vehicle vehicle) { invoke<Void>(0x1074F90, vehicle); }
static BOOL IS_PLANE_LANDING_GEAR_INTACT(Vehicle plane) { return invoke<BOOL>(0x1074FD0, plane); }
static BOOL ARE_PLANE_PROPELLERS_INTACT(Vehicle plane) { return invoke<BOOL>(0x1075050, plane); }
static BOOL SET_PLANE_PROPELLER_HEALTH(Vehicle plane, float health) { return invoke<BOOL>(0x10750C0, plane, health); }
static void SET_VEHICLE_CAN_DEFORM_WHEELS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1075130, vehicle, toggle); }
static BOOL IS_VEHICLE_STOLEN(Vehicle vehicle) { return invoke<BOOL>(0x10751E0, vehicle); }
static void SET_VEHICLE_IS_STOLEN(Vehicle vehicle, BOOL isStolen) { invoke<Void>(0x1075240, vehicle, isStolen); }
static void SET_PLANE_TURBULENCE_MULTIPLIER(Vehicle vehicle, float multiplier) { invoke<Void>(0x10752D0, vehicle, multiplier); }
static BOOL ARE_WINGS_OF_PLANE_INTACT(Vehicle plane) { return invoke<BOOL>(0x1075350, plane); }
static void ALLOW_AMBIENT_VEHICLES_TO_AVOID_ADVERSE_CONDITIONS(Vehicle vehicle) { invoke<Void>(0x10753E0, vehicle); }
static void DETACH_VEHICLE_FROM_CARGOBOB(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x10753F0, vehicle, cargobob); }
static BOOL DETACH_VEHICLE_FROM_ANY_CARGOBOB(Vehicle vehicle) { return invoke<BOOL>(0x1075400, vehicle); }
static BOOL DETACH_ENTITY_FROM_CARGOBOB(Vehicle cargobob, Entity entity) { return invoke<BOOL>(0x1075430, cargobob, entity); }
static BOOL IS_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob, Vehicle vehicleAttached) { return invoke<BOOL>(0x1075440, cargobob, vehicleAttached); }
static Vehicle GET_VEHICLE_ATTACHED_TO_CARGOBOB(Vehicle cargobob) { return invoke<Vehicle>(0x1075470, cargobob); }
static Entity GET_ENTITY_ATTACHED_TO_CARGOBOB(Any p0) { return invoke<Entity>(0x1075490, p0); }
static void ATTACH_VEHICLE_TO_CARGOBOB(Vehicle vehicle, Vehicle cargobob, int p2, float x, float y, float z) { invoke<Void>(0x10754B0, vehicle, cargobob, p2, x, y, z); }
static void ATTACH_ENTITY_TO_CARGOBOB(Any p0, Any p1, Any p2, Any p3, Any p4, Any p5) { invoke<Void>(0x10754D0, p0, p1, p2, p3, p4, p5); }
static void SET_CARGOBOB_FORCE_DONT_DETACH_VEHICLE(Vehicle cargobob, BOOL toggle) { invoke<Void>(0x10754F0, cargobob, toggle); }
static void SET_CARGOBOB_EXCLUDE_FROM_PICKUP_ENTITY(Any p0, Any p1) { invoke<Void>(0x1075510, p0, p1); }
static BOOL CAN_CARGOBOB_PICK_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x1075520, p0, p1); }
static Vector3 GET_ATTACHED_PICK_UP_HOOK_POSITION(Vehicle cargobob) { return invoke<Vector3>(0x1075550, cargobob); }
static BOOL DOES_CARGOBOB_HAVE_PICK_UP_ROPE(Vehicle cargobob) { return invoke<BOOL>(0x10756B0, cargobob); }
static void CREATE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob, int state) { invoke<Void>(0x1075760, cargobob, state); }
static void REMOVE_PICK_UP_ROPE_FOR_CARGOBOB(Vehicle cargobob) { invoke<Void>(0x1075770, cargobob); }
static void SET_PICKUP_ROPE_LENGTH_FOR_CARGOBOB(Vehicle cargobob, float length1, float length2, BOOL p3) { invoke<Void>(0x10757D0, cargobob, length1, length2, p3); }
static void SET_PICKUP_ROPE_LENGTH_WITHOUT_CREATING_ROPE_FOR_CARGOBOB(Any p0, Any p1, Any p2) { invoke<Void>(0x10757F0, p0, p1, p2); }
static void SET_CARGOBOB_PICKUP_ROPE_DAMPING_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0x1075810, p0, p1); }
static void SET_CARGOBOB_PICKUP_ROPE_TYPE(Any p0, Any p1) { invoke<Void>(0x1075820, p0, p1); }
static BOOL DOES_CARGOBOB_HAVE_PICKUP_MAGNET(Vehicle cargobob) { return invoke<BOOL>(0x1075880, cargobob); }
static void SET_CARGOBOB_PICKUP_MAGNET_ACTIVE(Vehicle cargobob, BOOL isActive) { invoke<Void>(0x1075920, cargobob, isActive); }
static void SET_CARGOBOB_PICKUP_MAGNET_STRENGTH(Vehicle cargobob, float strength) { invoke<Void>(0x1075940, cargobob, strength); }
static void SET_CARGOBOB_PICKUP_MAGNET_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0x10759F0, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0x1075AA0, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_REDUCED_FALLOFF(Vehicle cargobob, float p1) { invoke<Void>(0x1075B50, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_STRENGTH(Vehicle cargobob, float p1) { invoke<Void>(0x1075C00, cargobob, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_PULL_ROPE_LENGTH(Vehicle vehicle, float p1) { invoke<Void>(0x1075CB0, vehicle, p1); }
static void SET_CARGOBOB_PICKUP_MAGNET_SET_TARGETED_MODE(Vehicle vehicle, Vehicle cargobob) { invoke<Void>(0x1075D60, vehicle, cargobob); }
static void SET_CARGOBOB_PICKUP_MAGNET_SET_AMBIENT_MODE(Vehicle vehicle, BOOL p1, BOOL p2) { invoke<Void>(0x1075D70, vehicle, p1, p2); }
static void SET_CARGOBOB_PICKUP_MAGNET_ENSURE_PICKUP_ENTITY_UPRIGHT(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1075D90, vehicle, p1); }
static BOOL DOES_VEHICLE_HAVE_WEAPONS(Vehicle vehicle) { return invoke<BOOL>(0x1075E30, vehicle); }
static void SET_VEHICLE_WILL_TELL_OTHERS_TO_HURRY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1075EB0, vehicle, p1); }
static void DISABLE_VEHICLE_WEAPON(BOOL disabled, Hash weaponHash, Vehicle vehicle, Ped owner) { invoke<Void>(0x1075F10, disabled, weaponHash, vehicle, owner); }
static BOOL IS_VEHICLE_WEAPON_DISABLED(Hash weaponHash, Vehicle vehicle, Ped owner) { return invoke<BOOL>(0x1075F30, weaponHash, vehicle, owner); }
static void SET_VEHICLE_USED_FOR_PILOT_SCHOOL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1075F60, vehicle, toggle); }
static void SET_VEHICLE_ACTIVE_FOR_PED_NAVIGATION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076000, vehicle, toggle); }
static int GET_VEHICLE_CLASS(Vehicle vehicle) { return invoke<int>(0x10760C0, vehicle); }
static int GET_VEHICLE_CLASS_FROM_NAME(Hash modelHash) { return invoke<int>(0x1076120, modelHash); }
static void SET_PLAYERS_LAST_VEHICLE(Vehicle vehicle) { invoke<Void>(0x1076190, vehicle); }
static void SET_VEHICLE_CAN_BE_USED_BY_FLEEING_PEDS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10761E0, vehicle, toggle); }
static void SET_AIRCRAFT_PILOT_SKILL_NOISE_SCALAR(Vehicle vehicle, float p1) { invoke<Void>(0x1076290, vehicle, p1); }
static void SET_VEHICLE_DROPS_MONEY_WHEN_BLOWN_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076330, vehicle, toggle); }
static void SET_VEHICLE_KEEP_ENGINE_ON_WHEN_ABANDONED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10763B0, vehicle, toggle); }
static void SET_VEHICLE_IMPATIENCE_TIMER(Vehicle vehicle, Any p1) { invoke<Void>(0x1076450, vehicle, p1); }
static void SET_VEHICLE_HANDLING_OVERRIDE(Vehicle vehicle, Hash hash) { invoke<Void>(0x10764A0, vehicle, hash); }
static void SET_VEHICLE_EXTENDED_REMOVAL_RANGE(Vehicle vehicle, int range) { invoke<Void>(0x10764F0, vehicle, range); }
static void SET_VEHICLE_STEERING_BIAS_SCALAR(Any p0, float p1) { invoke<Void>(0x1076530, p0, p1); }
static void SET_HELI_CONTROL_LAGGING_RATE_SCALAR(Vehicle helicopter, float multiplier) { invoke<Void>(0x1076590, helicopter, multiplier); }
static void SET_VEHICLE_FRICTION_OVERRIDE(Vehicle vehicle, float friction) { invoke<Void>(0x1076600, vehicle, friction); }
static void SET_VEHICLE_WHEELS_CAN_BREAK_OFF_WHEN_BLOW_UP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076650, vehicle, toggle); }
static BOOL ARE_PLANE_CONTROL_PANELS_INTACT(Vehicle vehicle, BOOL p1) { return invoke<BOOL>(0x10766F0, vehicle, p1); }
static void SET_VEHICLE_CEILING_HEIGHT(Vehicle vehicle, float height) { invoke<Void>(0x1076760, vehicle, height); }
static void SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10767D0, vehicle, toggle); }
static void CLEAR_VEHICLE_ROUTE_HISTORY(Vehicle vehicle) { invoke<Void>(0x1076820, vehicle); }
static Vehicle DOES_VEHICLE_EXIST_WITH_DECORATOR(const char* decorator) { return invoke<Vehicle>(0x1076870, decorator); }
static void SET_VEHICLE_AI_CAN_USE_EXCLUSIVE_SEATS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10768A0, vehicle, toggle); }
static void SET_VEHICLE_EXCLUSIVE_DRIVER(Vehicle vehicle, Ped ped, int index) { invoke<Void>(0x1076940, vehicle, ped, index); }
static BOOL IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(Ped ped, Vehicle vehicle, int* outIndex) { return invoke<BOOL>(0x1076960, ped, vehicle, outIndex); }
static void DISABLE_INDIVIDUAL_PLANE_PROPELLER(Vehicle vehicle, int propeller) { invoke<Void>(0x1076A20, vehicle, propeller); }
static void SET_VEHICLE_FORCE_AFTERBURNER(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076A80, vehicle, toggle); }
static void SET_DONT_PROCESS_VEHICLE_GLASS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076B30, vehicle, toggle); }
static void SET_DISABLE_WANTED_CONES_RESPONSE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076B80, vehicle, toggle); }
static void SET_USE_DESIRED_Z_CRUISE_SPEED_FOR_LANDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1076BD0, vehicle, toggle); }
static void SET_ARRIVE_DISTANCE_OVERRIDE_FOR_VEHICLE_PERSUIT_ATTACK(Vehicle vehicle, float p1) { invoke<Void>(0x1076C20, vehicle, p1); }
static void SET_VEHICLE_READY_FOR_CLEANUP(Any p0) { invoke<Void>(0x1076C70, p0); }
static void SET_DISTANT_CARS_ENABLED(BOOL toggle) { invoke<Void>(0x1076CB0, toggle); }
static void SET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int r, int g, int b) { invoke<Void>(0x1076CD0, vehicle, r, g, b); }
static void SET_VEHICLE_NEON_INDEX_COLOUR(Vehicle vehicle, int index) { invoke<Void>(0x1076D90, vehicle, index); }
static void GET_VEHICLE_NEON_COLOUR(Vehicle vehicle, int* r, int* g, int* b) { invoke<Void>(0x1076E20, vehicle, r, g, b); }
static void SET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x1076EA0, vehicle, index, toggle); }
static BOOL GET_VEHICLE_NEON_ENABLED(Vehicle vehicle, int index) { return invoke<BOOL>(0x1076F50, vehicle, index); }
static void SET_AMBIENT_VEHICLE_NEON_ENABLED(BOOL p0) { invoke<Void>(0x1077000, p0); }
static void SUPPRESS_NEONS_ON_VEHICLE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1077020, vehicle, toggle); }
static void SET_DISABLE_SUPERDUMMY(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1077070, vehicle, p1); }
static void REQUEST_VEHICLE_DIAL(Vehicle vehicle) { invoke<Void>(0x1077100, vehicle); }
static float GET_VEHICLE_BODY_HEALTH(Vehicle vehicle) { return invoke<float>(0x1077150, vehicle); }
static void SET_VEHICLE_BODY_HEALTH(Vehicle vehicle, float value) { invoke<Void>(0x10771B0, vehicle, value); }
static void GET_VEHICLE_SIZE(Vehicle vehicle, Vector3* out1, Vector3* out2) { invoke<Void>(0x1077230, vehicle, out1, out2); }
static float GET_FAKE_SUSPENSION_LOWERING_AMOUNT(Vehicle vehicle) { return invoke<float>(0x10772D0, vehicle); }
static void SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(float multiplier) { invoke<Void>(0x1077340, multiplier); }
static int GET_NUMBER_OF_VEHICLE_DOORS(Vehicle vehicle) { return invoke<int>(0x1077360, vehicle); }
static void SET_HYDRAULICS_CONTROL(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10773B0, vehicle, toggle); }
static void SET_CAN_ADJUST_GROUND_CLEARANCE(Vehicle vehicle, BOOL p1) { invoke<Void>(0x10773D0, vehicle, p1); }
static float GET_VEHICLE_HEALTH_PERCENTAGE(Vehicle vehicle, float maxEngineHealth, float maxPetrolTankHealth, float maxBodyHealth, float maxMainRotorHealth, float maxTailRotorHealth, float maxUnkHealth) { return invoke<float>(0x1077460, vehicle, maxEngineHealth, maxPetrolTankHealth, maxBodyHealth, maxMainRotorHealth, maxTailRotorHealth, maxUnkHealth); }
static BOOL GET_VEHICLE_IS_MERCENARY(Vehicle vehicle) { return invoke<BOOL>(0x1077520, vehicle); }
static void SET_VEHICLE_BROKEN_PARTS_DONT_AFFECT_AI_HANDLING(Vehicle vehicle, BOOL p1) { invoke<Void>(0x1077580, vehicle, p1); }
static void SET_VEHICLE_KERS_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10775D0, vehicle, toggle); }
static BOOL GET_VEHICLE_HAS_KERS(Vehicle vehicle) { return invoke<BOOL>(0x1077630, vehicle); }
static void SET_PLANE_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1077690, vehicle, toggle); }
static void SET_HELI_RESIST_TO_EXPLOSION(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1077730, vehicle, toggle); }
static void SET_DISABLE_BMX_EXTRA_TRICK_FORCES(Any p0) { invoke<Void>(0x10777E0, p0); }
static void SET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId, float value) { invoke<Void>(0x1077800, vehicle, wheelId, value); }
static float GET_HYDRAULIC_SUSPENSION_RAISE_FACTOR(Vehicle vehicle, int wheelId) { return invoke<float>(0x1077820, vehicle, wheelId); }
static void SET_CAN_USE_HYDRAULICS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1077900, vehicle, toggle); }
static void SET_HYDRAULIC_VEHICLE_STATE(Vehicle vehicle, int state) { invoke<Void>(0x1077920, vehicle, state); }
static void SET_HYDRAULIC_WHEEL_STATE(Vehicle vehicle, int wheelId, int state, float value, Any p4) { invoke<Void>(0x1077930, vehicle, wheelId, state, value, p4); }
static BOOL HAS_VEHICLE_PETROLTANK_SET_ON_FIRE_BY_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x1077950, p0, p1); }
static void CLEAR_VEHICLE_PETROLTANK_FIRE_CULPRIT(Vehicle vehicle) { invoke<Void>(0x10779F0, vehicle); }
static void SET_VEHICLE_BOBBLEHEAD_VELOCITY(float x, float y, float p2) { invoke<Void>(0x1077A50, x, y, p2); }
static BOOL GET_VEHICLE_IS_DUMMY(Any p0) { return invoke<BOOL>(0x1077AB0, p0); }
static BOOL SET_VEHICLE_DAMAGE_SCALE(Vehicle vehicle, float p1) { return invoke<BOOL>(0x1077B10, vehicle, p1); }
static BOOL SET_VEHICLE_WEAPON_DAMAGE_SCALE(Vehicle vehicle, float multiplier) { return invoke<BOOL>(0x1077B60, vehicle, multiplier); }
static BOOL SET_DISABLE_DAMAGE_WITH_PICKED_UP_ENTITY(Any p0, Any p1) { return invoke<BOOL>(0x1077BB0, p0, p1); }
static void SET_VEHICLE_USES_MP_PLAYER_DAMAGE_MULTIPLIER(Any p0, Any p1) { invoke<Void>(0x1077C00, p0, p1); }
static void SET_BIKE_EASY_TO_LAND(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1077C50, vehicle, toggle); }
static void SET_INVERT_VEHICLE_CONTROLS(Vehicle vehicle, BOOL state) { invoke<Void>(0x1077CA0, vehicle, state); }
static void SET_SPEED_BOOST_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0x1077CF0, disabled); }
static void SET_SLOW_DOWN_EFFECT_DISABLED(BOOL disabled) { invoke<Void>(0x1077D10, disabled); }
static void SET_FORMATION_LEADER(Vehicle vehicle, float x, float y, float z, float p4) { invoke<Void>(0x1077D30, vehicle, x, y, z, p4); }
static void RESET_FORMATION_LEADER() { invoke<Void>(0x1077DD0); }
static BOOL GET_IS_BOAT_CAPSIZED(Vehicle vehicle) { return invoke<BOOL>(0x1077DE0, vehicle); }
static void SET_ALLOW_RAMMING_SOOP_OR_RAMP(Any p0, Any p1) { invoke<Void>(0x1077E40, p0, p1); }
static void SET_SCRIPT_RAMP_IMPULSE_SCALE(Vehicle vehicle, float impulseScale) { invoke<Void>(0x1077E90, vehicle, impulseScale); }
static BOOL GET_IS_DOOR_VALID(Vehicle vehicle, int doorId) { return invoke<BOOL>(0x1077EE0, vehicle, doorId); }
static void SET_SCRIPT_ROCKET_BOOST_RECHARGE_TIME(Vehicle vehicle, float seconds) { invoke<Void>(0x1077F50, vehicle, seconds); }
static BOOL GET_HAS_ROCKET_BOOST(Vehicle vehicle) { return invoke<BOOL>(0x1078020, vehicle); }
static BOOL IS_ROCKET_BOOST_ACTIVE(Vehicle vehicle) { return invoke<BOOL>(0x1078080, vehicle); }
static void SET_ROCKET_BOOST_ACTIVE(Vehicle vehicle, BOOL active) { invoke<Void>(0x10780F0, vehicle, active); }
static BOOL GET_HAS_RETRACTABLE_WHEELS(Vehicle vehicle) { return invoke<BOOL>(0x1078110, vehicle); }
static BOOL GET_IS_WHEELS_RETRACTED(Vehicle vehicle) { return invoke<BOOL>(0x1078170, vehicle); }
static void SET_WHEELS_EXTENDED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0x10781E0, vehicle); }
static void SET_WHEELS_RETRACTED_INSTANTLY(Vehicle vehicle) { invoke<Void>(0x1078230, vehicle); }
static BOOL GET_CAR_HAS_JUMP(Vehicle vehicle) { return invoke<BOOL>(0x1078280, vehicle); }
static void SET_USE_HIGHER_CAR_JUMP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10782E0, vehicle, toggle); }
static void SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1078330, vehicle, toggle); }
static void SET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex, int capacity) { invoke<Void>(0x1078380, vehicle, weaponIndex, capacity); }
static int GET_VEHICLE_WEAPON_RESTRICTED_AMMO(Vehicle vehicle, int weaponIndex) { return invoke<int>(0x10783E0, vehicle, weaponIndex); }
static BOOL GET_VEHICLE_HAS_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0x1078440, vehicle); }
static BOOL GET_VEHICLE_CAN_DEPLOY_PARACHUTE(Vehicle vehicle) { return invoke<BOOL>(0x10784B0, vehicle); }
static void VEHICLE_START_PARACHUTING(Vehicle vehicle, BOOL active) { invoke<Void>(0x1078520, vehicle, active); }
static BOOL IS_VEHICLE_PARACHUTE_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0x1078590, vehicle); }
static void VEHICLE_SET_RAMP_AND_RAMMING_CARS_TAKE_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1078600, vehicle, toggle); }
static void VEHICLE_SET_ENABLE_RAMP_CAR_SIDE_IMPULSE(Any p0, Any p1) { invoke<Void>(0x1078670, p0, p1); }
static void VEHICLE_SET_ENABLE_NORMALISE_RAMP_CAR_VERTICAL_VELOCTIY(Any p0, Any p1) { invoke<Void>(0x10786D0, p0, p1); }
static void VEHICLE_SET_JET_WASH_FORCE_ENABLED(Any p0) { invoke<Void>(0x1078730, p0); }
static void SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1078750, vehicle, toggle); }
static void SET_VEHICLE_USE_BOOST_BUTTON_FOR_WHEEL_RETRACT(BOOL toggle) { invoke<Void>(0x10787A0, toggle); }
static void VEHICLE_SET_PARACHUTE_MODEL_OVERRIDE(Vehicle vehicle, Hash modelHash) { invoke<Void>(0x10787C0, vehicle, modelHash); }
static void VEHICLE_SET_PARACHUTE_MODEL_TINT_INDEX(Vehicle vehicle, int textureVariation) { invoke<Void>(0x1078820, vehicle, textureVariation); }
static int VEHICLE_SET_OVERRIDE_EXTENABLE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0x10788B0, p0, p1); }
static int VEHICLE_SET_EXTENABLE_SIDE_TARGET_RATIO(Any p0, Any p1) { return invoke<int>(0x10788C0, p0, p1); }
static int VEHICLE_SET_OVERRIDE_SIDE_RATIO(Any p0, Any p1) { return invoke<int>(0x10788D0, p0, p1); }
static int GET_ALL_VEHICLES(Any* vehsStruct) { return invoke<int>(0x10788E0, vehsStruct); }
static void SET_CARGOBOB_EXTA_PICKUP_RANGE(Any p0, Any p1) { invoke<Void>(0x1078910, p0, p1); }
static void SET_OVERRIDE_VEHICLE_DOOR_TORQUE(Any p0, Any p1, Any p2) { invoke<Void>(0x1078920, p0, p1, p2); }
static void SET_WHEELIE_ENABLED(Vehicle vehicle, BOOL enabled) { invoke<Void>(0x10789A0, vehicle, enabled); }
static void SET_DISABLE_HELI_EXPLODE_FROM_BODY_DAMAGE(Any p0, Any p1) { invoke<Void>(0x10789F0, p0, p1); }
static void SET_DISABLE_EXPLODE_FROM_BODY_DAMAGE_ON_COLLISION(Vehicle vehicle, float value) { invoke<Void>(0x1078A50, vehicle, value); }
static void SET_TRAILER_ATTACHMENT_ENABLED(Any p0, Any p1) { invoke<Void>(0x1078AA0, p0, p1); }
static void SET_ROCKET_BOOST_FILL(Vehicle vehicle, float percentage) { invoke<Void>(0x1078AF0, vehicle, percentage); }
static void SET_GLIDER_ACTIVE(Vehicle vehicle, BOOL state) { invoke<Void>(0x1078BF0, vehicle, state); }
static void SET_SHOULD_RESET_TURRET_IN_SCRIPTED_CAMERAS(Vehicle vehicle, BOOL shouldReset) { invoke<Void>(0x1078C50, vehicle, shouldReset); }
static void SET_VEHICLE_DISABLE_COLLISION_UPON_CREATION(Vehicle vehicle, BOOL disable) { invoke<Void>(0x1078CA0, vehicle, disable); }
static void SET_GROUND_EFFECT_REDUCES_DRAG(BOOL toggle) { invoke<Void>(0x1078D30, toggle); }
static void SET_DISABLE_MAP_COLLISION(Vehicle vehicle) { invoke<Void>(0x1078D50, vehicle); }
static void SET_DISABLE_PED_STAND_ON_TOP(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1078DC0, vehicle, toggle); }
static void SET_VEHICLE_DAMAGE_SCALES(Vehicle vehicle, Any p1, Any p2, Any p3, Any p4) { invoke<Void>(0x1078E10, vehicle, p1, p2, p3, p4); }
static void SET_PLANE_SECTION_DAMAGE_SCALE(Vehicle vehicle, Any p1, Any p2) { invoke<Void>(0x1078EA0, vehicle, p1, p2); }
static void SET_HELI_CAN_PICKUP_ENTITY_THAT_HAS_PICK_UP_DISABLED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1078F20, vehicle, toggle); }
static void SET_VEHICLE_BOMB_AMMO(Vehicle vehicle, int bombCount) { invoke<Void>(0x1078F70, vehicle, bombCount); }
static int GET_VEHICLE_BOMB_AMMO(Vehicle vehicle) { return invoke<int>(0x1078FC0, vehicle); }
static void SET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle, int counterMeasureCount) { invoke<Void>(0x1079020, vehicle, counterMeasureCount); }
static int GET_VEHICLE_COUNTERMEASURE_AMMO(Vehicle vehicle) { return invoke<int>(0x1079070, vehicle); }
static void SET_HELI_COMBAT_OFFSET(Vehicle vehicle, float x, float y, float z) { invoke<Void>(0x10790D0, vehicle, x, y, z); }
static BOOL GET_CAN_VEHICLE_BE_PLACED_HERE(Vehicle vehicle, float x, float y, float z, float rotX, float rotY, float rotZ, int p7, Any p8) { return invoke<BOOL>(0x1079160, vehicle, x, y, z, rotX, rotY, rotZ, p7, p8); }
static void SET_DISABLE_AUTOMATIC_CRASH_TASK(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10791A0, vehicle, toggle); }
static void SET_SPECIAL_FLIGHT_MODE_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0x1079220, vehicle, ratio); }
static void SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(Vehicle vehicle, float targetRatio) { invoke<Void>(0x1079290, vehicle, targetRatio); }
static void SET_SPECIAL_FLIGHT_MODE_ALLOWED(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1079300, vehicle, toggle); }
static void SET_DISABLE_HOVER_MODE_FLIGHT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1079360, vehicle, toggle); }
static BOOL GET_OUTRIGGERS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0x10793C0, vehicle); }
static Vector3 FIND_SPAWN_COORDINATES_FOR_HELI(Ped ped) { return invoke<Vector3>(0x1079430, ped); }
static void SET_DEPLOY_FOLDING_WINGS(Vehicle vehicle, BOOL deploy, BOOL p2) { invoke<Void>(0x10794D0, vehicle, deploy, p2); }
static BOOL ARE_FOLDING_WINGS_DEPLOYED(Vehicle vehicle) { return invoke<BOOL>(0x1079540, vehicle); }
static void SET_DIP_STRAIGHT_DOWN_WHEN_CRASHING_PLANE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x10795A0, vehicle, toggle); }
static void SET_TURRET_HIDDEN(Vehicle vehicle, int index, BOOL toggle) { invoke<Void>(0x10795F0, vehicle, index, toggle); }
static void SET_HOVER_MODE_WING_RATIO(Vehicle vehicle, float ratio) { invoke<Void>(0x1079690, vehicle, ratio); }
static void SET_DISABLE_TURRET_MOVEMENT(Vehicle vehicle, int turretId) { invoke<Void>(0x10796F0, vehicle, turretId); }
static void SET_FORCE_FIX_LINK_MATRICES(Vehicle vehicle) { invoke<Void>(0x1079780, vehicle); }
static void SET_TRANSFORM_RATE_FOR_ANIMATION(Vehicle vehicle, float transformRate) { invoke<Void>(0x10797C0, vehicle, transformRate); }
static void SET_TRANSFORM_TO_SUBMARINE_USES_ALTERNATE_INPUT(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1079820, vehicle, toggle); }
static void SET_VEHICLE_COMBAT_MODE(BOOL toggle) { invoke<Void>(0x1079890, toggle); }
static void SET_VEHICLE_DETONATION_MODE(BOOL toggle) { invoke<Void>(0x10798A0, toggle); }
static void SET_VEHICLE_SHUNT_ON_STICK(BOOL toggle) { invoke<Void>(0x10798B0, toggle); }
static BOOL GET_IS_VEHICLE_SHUNTING(Vehicle vehicle) { return invoke<BOOL>(0x10798C0, vehicle); }
static BOOL GET_HAS_VEHICLE_BEEN_HIT_BY_SHUNT(Vehicle vehicle) { return invoke<BOOL>(0x1079930, vehicle); }
static Vehicle GET_LAST_SHUNT_VEHICLE(Vehicle vehicle) { return invoke<Vehicle>(0x10799A0, vehicle); }
static void SET_DISABLE_VEHICLE_EXPLOSIONS_DAMAGE(BOOL toggle) { invoke<Void>(0x1079A00, toggle); }
static void SET_OVERRIDE_NITROUS_LEVEL(Vehicle vehicle, BOOL toggle, float level, float power, float rechargeTime, BOOL disableSound) { invoke<Void>(0x1079A20, vehicle, toggle, level, power, rechargeTime, disableSound); }
static void SET_INCREASE_WHEEL_CRUSH_DAMAGE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1079AC0, vehicle, toggle); }
static void SET_DISABLE_WEAPON_BLADE_FORCES(BOOL toggle) { invoke<Void>(0x1079B10, toggle); }
static void SET_USE_DOUBLE_CLICK_FOR_CAR_JUMP(BOOL toggle) { invoke<Void>(0x1079B30, toggle); }
static BOOL GET_DOES_VEHICLE_HAVE_TOMBSTONE(Vehicle vehicle) { return invoke<BOOL>(0x1079B50, vehicle); }
static void HIDE_TOMBSTONE(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x1079BB0, vehicle, toggle); }
static BOOL GET_IS_VEHICLE_DISABLED_BY_EMP(Vehicle vehicle) { return invoke<BOOL>(0x1079C10, vehicle); }
static void SET_DISABLE_RETRACTING_WEAPON_BLADES(BOOL toggle) { invoke<Void>(0x1079C70, toggle); }
static float GET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex) { return invoke<float>(0x1079C90, vehicle, wheelIndex); }
static void SET_TYRE_HEALTH(Vehicle vehicle, int wheelIndex, float health) { invoke<Void>(0x1079D10, vehicle, wheelIndex, health); }
static float GET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex) { return invoke<float>(0x1079DC0, vehicle, wheelIndex); }
static void SET_TYRE_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0x1079E40, vehicle, wheelIndex, multiplier); }
static void SET_TYRE_WEAR_RATE_SCALE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0x1079EC0, vehicle, wheelIndex, multiplier); }
static void SET_TYRE_MAXIMUM_GRIP_DIFFERENCE_DUE_TO_WEAR_RATE(Vehicle vehicle, int wheelIndex, float multiplier) { invoke<Void>(0x1079F30, vehicle, wheelIndex, multiplier); }
static void SET_AIRCRAFT_IGNORE_HIGHTMAP_OPTIMISATION(Vehicle vehicle, int p1) { invoke<Void>(0x1079FA0, vehicle, p1); }
static void SET_REDUCED_SUSPENSION_FORCE(Vehicle vehicle, BOOL enable) { invoke<Void>(0x107A000, vehicle, enable); }
static void SET_DRIFT_TYRES(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x107A060, vehicle, toggle); }
static BOOL GET_DRIFT_TYRES_SET(Vehicle vehicle) { return invoke<BOOL>(0x107A0B0, vehicle); }
static void NETWORK_USE_HIGH_PRECISION_TRAIN_BLENDING(Vehicle vehicle, BOOL toggle) { invoke<Void>(0x107A110, vehicle, toggle); }
static void SET_CHECK_FOR_ENOUGH_ROOM_FOR_PED(Vehicle vehicle, BOOL p1) { invoke<Void>(0x107A170, vehicle, p1); }
static BOOL GET_WATER_HEIGHT(float x, float y, float z, float* height) { return invoke<BOOL>(0x107AD00, x, y, z, height); }
static BOOL GET_WATER_HEIGHT_NO_WAVES(float x, float y, float z, float* height) { return invoke<BOOL>(0x107AD30, x, y, z, height); }
static BOOL TEST_PROBE_AGAINST_WATER(float x1, float y1, float z1, float x2, float y2, float z2, Vector3* result) { return invoke<BOOL>(0x107AEA0, x1, y1, z1, x2, y2, z2, result); }
static int TEST_PROBE_AGAINST_ALL_WATER(float x1, float y1, float z1, float x2, float y2, float z2, int flags, float* waterHeight) { return invoke<int>(0x107AF10, x1, y1, z1, x2, y2, z2, flags, waterHeight); }
static int TEST_VERTICAL_PROBE_AGAINST_ALL_WATER(float x, float y, float z, int flags, float* waterHeight) { return invoke<int>(0x107AFD0, x, y, z, flags, waterHeight); }
static void MODIFY_WATER(float x, float y, float radius, float height) { invoke<Void>(0x107B0B0, x, y, radius, height); }
static int ADD_EXTRA_CALMING_QUAD(float xLow, float yLow, float xHigh, float yHigh, float height) { return invoke<int>(0x107B0D0, xLow, yLow, xHigh, yHigh, height); }
static void REMOVE_EXTRA_CALMING_QUAD(int calmingQuad) { invoke<Void>(0x107B110, calmingQuad); }
static void SET_DEEP_OCEAN_SCALER(float intensity) { invoke<Void>(0x107B120, intensity); }
static float GET_DEEP_OCEAN_SCALER() { return invoke<float>(0x107B130); }
static void SET_CALMED_WAVE_HEIGHT_SCALER(float height) { invoke<Void>(0x107B150, height); }
static void RESET_DEEP_OCEAN_SCALER() { invoke<Void>(0x107B160); }
static void ENABLE_LASER_SIGHT_RENDERING(BOOL toggle) { invoke<Void>(0x10833A0, toggle); }
static Hash GET_WEAPON_COMPONENT_TYPE_MODEL(Hash componentHash) { return invoke<Hash>(0x10833C0, componentHash); }
static Hash GET_WEAPONTYPE_MODEL(Hash weaponHash) { return invoke<Hash>(0x1083480, weaponHash); }
static Hash GET_WEAPONTYPE_SLOT(Hash weaponHash) { return invoke<Hash>(0x1083550, weaponHash); }
static Hash GET_WEAPONTYPE_GROUP(Hash weaponHash) { return invoke<Hash>(0x10835C0, weaponHash); }
static int GET_WEAPON_COMPONENT_VARIANT_EXTRA_COUNT(Hash componentHash) { return invoke<int>(0x1083630, componentHash); }
static Hash GET_WEAPON_COMPONENT_VARIANT_EXTRA_MODEL(Hash componentHash, int extraComponentIndex) { return invoke<Hash>(0x10836C0, componentHash, extraComponentIndex); }
static void SET_CURRENT_PED_WEAPON(Ped ped, Hash weaponHash, BOOL bForceInHand) { invoke<Void>(0x10837A0, ped, weaponHash, bForceInHand); }
static BOOL GET_CURRENT_PED_WEAPON(Ped ped, Hash* weaponHash, BOOL p2) { return invoke<BOOL>(0x10837C0, ped, weaponHash, p2); }
static Entity GET_CURRENT_PED_WEAPON_ENTITY_INDEX(Ped ped, Any p1) { return invoke<Entity>(0x1083860, ped, p1); }
static Hash GET_BEST_PED_WEAPON(Ped ped, BOOL p1) { return invoke<Hash>(0x10838D0, ped, p1); }
static BOOL SET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash weaponHash) { return invoke<BOOL>(0x1083940, ped, weaponHash); }
static BOOL GET_CURRENT_PED_VEHICLE_WEAPON(Ped ped, Hash* weaponHash) { return invoke<BOOL>(0x1083970, ped, weaponHash); }
static void SET_PED_CYCLE_VEHICLE_WEAPONS_ONLY(Ped ped) { invoke<Void>(0x10839F0, ped); }
static BOOL IS_PED_ARMED(Ped ped, int typeFlags) { return invoke<BOOL>(0x1083A30, ped, typeFlags); }
static BOOL IS_WEAPON_VALID(Hash weaponHash) { return invoke<BOOL>(0x1083A60, weaponHash); }
static BOOL HAS_PED_GOT_WEAPON(Ped ped, Hash weaponHash, BOOL p2) { return invoke<BOOL>(0x1083AD0, ped, weaponHash, p2); }
static BOOL IS_PED_WEAPON_READY_TO_SHOOT(Ped ped) { return invoke<BOOL>(0x1083B00, ped); }
static Hash GET_PED_WEAPONTYPE_IN_SLOT(Ped ped, Hash weaponSlot) { return invoke<Hash>(0x1083B70, ped, weaponSlot); }
static int GET_AMMO_IN_PED_WEAPON(Ped ped, Hash weaponhash) { return invoke<int>(0x1083C20, ped, weaponhash); }
static void ADD_AMMO_TO_PED(Ped ped, Hash weaponHash, int ammo) { invoke<Void>(0x1083C50, ped, weaponHash, ammo); }
static void SET_PED_AMMO(Ped ped, Hash weaponHash, int ammo, BOOL p3) { invoke<Void>(0x1083CC0, ped, weaponHash, ammo, p3); }
static void SET_PED_INFINITE_AMMO(Ped ped, BOOL toggle, Hash weaponHash) { invoke<Void>(0x1083CE0, ped, toggle, weaponHash); }
static void SET_PED_INFINITE_AMMO_CLIP(Ped ped, BOOL toggle) { invoke<Void>(0x1083D00, ped, toggle); }
static void SET_PED_STUN_GUN_FINITE_AMMO(Any p0, Any p1) { invoke<Void>(0x1083D70, p0, p1); }
static void GIVE_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL isHidden, BOOL bForceInHand) { invoke<Void>(0x1083DF0, ped, weaponHash, ammoCount, isHidden, bForceInHand); }
static void GIVE_DELAYED_WEAPON_TO_PED(Ped ped, Hash weaponHash, int ammoCount, BOOL bForceInHand) { invoke<Void>(0x1083E20, ped, weaponHash, ammoCount, bForceInHand); }
static void REMOVE_ALL_PED_WEAPONS(Ped ped, BOOL p1) { invoke<Void>(0x1083E40, ped, p1); }
static void REMOVE_WEAPON_FROM_PED(Ped ped, Hash weaponHash) { invoke<Void>(0x1083EC0, ped, weaponHash); }
static void HIDE_PED_WEAPON_FOR_SCRIPTED_CUTSCENE(Ped ped, BOOL toggle) { invoke<Void>(0x1083F40, ped, toggle); }
static void SET_PED_CURRENT_WEAPON_VISIBLE(Ped ped, BOOL visible, BOOL deselectWeapon, BOOL p3, BOOL p4) { invoke<Void>(0x1083FD0, ped, visible, deselectWeapon, p3, p4); }
static void SET_PED_DROPS_WEAPONS_WHEN_DEAD(Ped ped, BOOL toggle) { invoke<Void>(0x1084010, ped, toggle); }
static BOOL HAS_PED_BEEN_DAMAGED_BY_WEAPON(Ped ped, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x1084070, ped, weaponHash, weaponType); }
static void CLEAR_PED_LAST_WEAPON_DAMAGE(Ped ped) { invoke<Void>(0x10840E0, ped); }
static BOOL HAS_ENTITY_BEEN_DAMAGED_BY_WEAPON(Entity entity, Hash weaponHash, int weaponType) { return invoke<BOOL>(0x1084140, entity, weaponHash, weaponType); }
static void CLEAR_ENTITY_LAST_WEAPON_DAMAGE(Entity entity) { invoke<Void>(0x10841C0, entity); }
static void SET_PED_DROPS_WEAPON(Ped ped) { invoke<Void>(0x1084220, ped); }
static void SET_PED_DROPS_INVENTORY_WEAPON(Ped ped, Hash weaponHash, float xOffset, float yOffset, float zOffset, int ammoCount) { invoke<Void>(0x1084230, ped, weaponHash, xOffset, yOffset, zOffset, ammoCount); }
static int GET_MAX_AMMO_IN_CLIP(Ped ped, Hash weaponHash, BOOL p2) { return invoke<int>(0x1084250, ped, weaponHash, p2); }
static BOOL GET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x1084280, ped, weaponHash, ammo); }
static BOOL SET_AMMO_IN_CLIP(Ped ped, Hash weaponHash, int ammo) { return invoke<BOOL>(0x1084330, ped, weaponHash, ammo); }
static BOOL GET_MAX_AMMO(Ped ped, Hash weaponHash, int* ammo) { return invoke<BOOL>(0x1084360, ped, weaponHash, ammo); }
static BOOL GET_MAX_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int* ammo) { return invoke<BOOL>(0x1084420, ped, ammoTypeHash, ammo); }
static void ADD_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0x10844E0, ped, ammoTypeHash, ammo); }
static void SET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash, int ammo) { invoke<Void>(0x1084550, ped, ammoTypeHash, ammo); }
static int GET_PED_AMMO_BY_TYPE(Ped ped, Hash ammoTypeHash) { return invoke<int>(0x10845C0, ped, ammoTypeHash); }
static void SET_PED_AMMO_TO_DROP(Ped ped, int p1) { invoke<Void>(0x1084630, ped, p1); }
static void SET_PICKUP_AMMO_AMOUNT_SCALER(float p0) { invoke<Void>(0x1084680, p0); }
static Hash GET_PED_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0x10846A0, ped, weaponHash); }
static Hash GET_PED_ORIGINAL_AMMO_TYPE_FROM_WEAPON(Ped ped, Hash weaponHash) { return invoke<Hash>(0x10846D0, ped, weaponHash); }
static BOOL GET_PED_LAST_WEAPON_IMPACT_COORD(Ped ped, Vector3* coords) { return invoke<BOOL>(0x1084780, ped, coords); }
static void SET_PED_GADGET(Ped ped, Hash gadgetHash, BOOL p2) { invoke<Void>(0x1084880, ped, gadgetHash, p2); }
static BOOL GET_IS_PED_GADGET_EQUIPPED(Ped ped, Hash gadgetHash) { return invoke<BOOL>(0x10848A0, ped, gadgetHash); }
static Hash GET_SELECTED_PED_WEAPON(Ped ped) { return invoke<Hash>(0x1084910, ped); }
static void EXPLODE_PROJECTILES(Ped ped, Hash weaponHash, BOOL p2) { invoke<Void>(0x1084970, ped, weaponHash, p2); }
static void REMOVE_ALL_PROJECTILES_OF_TYPE(Hash weaponHash, BOOL explode) { invoke<Void>(0x1084990, weaponHash, explode); }
static float GET_LOCKON_DISTANCE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x1084A20, ped); }
static float GET_MAX_RANGE_OF_CURRENT_PED_WEAPON(Ped ped) { return invoke<float>(0x1084A50, ped); }
static BOOL HAS_VEHICLE_GOT_PROJECTILE_ATTACHED(Ped driver, Vehicle vehicle, Hash weaponHash, Any p3) { return invoke<BOOL>(0x1084A80, driver, vehicle, weaponHash, p3); }
static void GIVE_WEAPON_COMPONENT_TO_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x1084AB0, ped, weaponHash, componentHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_PED(Ped ped, Hash weaponHash, Hash componentHash) { invoke<Void>(0x1084B20, ped, weaponHash, componentHash); }
static BOOL HAS_PED_GOT_WEAPON_COMPONENT(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x1084B90, ped, weaponHash, componentHash); }
static BOOL IS_PED_WEAPON_COMPONENT_ACTIVE(Ped ped, Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x1084BC0, ped, weaponHash, componentHash); }
static BOOL REFILL_AMMO_INSTANTLY(Ped ped) { return invoke<BOOL>(0x1084BF0, ped); }
static BOOL MAKE_PED_RELOAD(Ped ped) { return invoke<BOOL>(0x1084C50, ped); }
static void REQUEST_WEAPON_ASSET(Hash weaponHash, int p1, int p2) { invoke<Void>(0x1084CD0, weaponHash, p1, p2); }
static BOOL HAS_WEAPON_ASSET_LOADED(Hash weaponHash) { return invoke<BOOL>(0x1084D90, weaponHash); }
static void REMOVE_WEAPON_ASSET(Hash weaponHash) { invoke<Void>(0x1084DC0, weaponHash); }
static Object CREATE_WEAPON_OBJECT(Hash weaponHash, int ammoCount, float x, float y, float z, BOOL showWorldModel, float scale, Any p7, Any p8, Any p9) { return invoke<Object>(0x1084E50, weaponHash, ammoCount, x, y, z, showWorldModel, scale, p7, p8, p9); }
static void GIVE_WEAPON_COMPONENT_TO_WEAPON_OBJECT(Object weaponObject, Hash componentHash) { invoke<Void>(0x1084EB0, weaponObject, componentHash); }
static void REMOVE_WEAPON_COMPONENT_FROM_WEAPON_OBJECT(Object object, Hash componentHash) { invoke<Void>(0x1084F00, object, componentHash); }
static BOOL HAS_WEAPON_GOT_WEAPON_COMPONENT(Object weapon, Hash componentHash) { return invoke<BOOL>(0x1084F80, weapon, componentHash); }
static void GIVE_WEAPON_OBJECT_TO_PED(Object weaponObject, Ped ped) { invoke<Void>(0x1085010, weaponObject, ped); }
static BOOL DOES_WEAPON_TAKE_WEAPON_COMPONENT(Hash weaponHash, Hash componentHash) { return invoke<BOOL>(0x1085020, weaponHash, componentHash); }
static Object GET_WEAPON_OBJECT_FROM_PED(Ped ped, BOOL p1) { return invoke<Object>(0x1085050, ped, p1); }
static void GIVE_LOADOUT_TO_PED(Ped ped, Hash loadoutHash) { invoke<Void>(0x1085080, ped, loadoutHash); }
static void SET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash, int tintIndex) { invoke<Void>(0x10850D0, ped, weaponHash, tintIndex); }
static int GET_PED_WEAPON_TINT_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x10850F0, ped, weaponHash); }
static void SET_WEAPON_OBJECT_TINT_INDEX(Object weapon, int tintIndex) { invoke<Void>(0x1085120, weapon, tintIndex); }
static int GET_WEAPON_OBJECT_TINT_INDEX(Object weapon) { return invoke<int>(0x1085170, weapon); }
static int GET_WEAPON_TINT_COUNT(Hash weaponHash) { return invoke<int>(0x10851D0, weaponHash); }
static void SET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash, int colorIndex) { invoke<Void>(0x1085240, ped, weaponHash, camoComponentHash, colorIndex); }
static int GET_PED_WEAPON_COMPONENT_TINT_INDEX(Ped ped, Hash weaponHash, Hash camoComponentHash) { return invoke<int>(0x1085260, ped, weaponHash, camoComponentHash); }
static void SET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash, int colorIndex) { invoke<Void>(0x1085290, weaponObject, camoComponentHash, colorIndex); }
static int GET_WEAPON_OBJECT_COMPONENT_TINT_INDEX(Object weaponObject, Hash camoComponentHash) { return invoke<int>(0x1085330, weaponObject, camoComponentHash); }
static int GET_PED_WEAPON_CAMO_INDEX(Ped ped, Hash weaponHash) { return invoke<int>(0x10853C0, ped, weaponHash); }
static void SET_WEAPON_OBJECT_CAMO_INDEX(Object weaponObject, int p1) { invoke<Void>(0x10853F0, weaponObject, p1); }
static BOOL GET_WEAPON_HUD_STATS(Hash weaponHash, Any* outData) { return invoke<BOOL>(0x1085440, weaponHash, outData); }
static BOOL GET_WEAPON_COMPONENT_HUD_STATS(Hash componentHash, Any* outData) { return invoke<BOOL>(0x10854F0, componentHash, outData); }
static float GET_WEAPON_DAMAGE(Hash weaponHash, Hash componentHash) { return invoke<float>(0x1085590, weaponHash, componentHash); }
static int GET_WEAPON_CLIP_SIZE(Hash weaponHash) { return invoke<int>(0x10855C0, weaponHash); }
static float GET_WEAPON_TIME_BETWEEN_SHOTS(Hash weaponHash) { return invoke<float>(0x1085630, weaponHash); }
static void SET_PED_CHANCE_OF_FIRING_BLANKS(Ped ped, float xBias, float yBias) { invoke<Void>(0x10856A0, ped, xBias, yBias); }
static Object SET_PED_SHOOT_ORDNANCE_WEAPON(Ped ped, float p1) { return invoke<Object>(0x1085710, ped, p1); }
static void REQUEST_WEAPON_HIGH_DETAIL_MODEL(Entity weaponObject) { invoke<Void>(0x1085740, weaponObject); }
static void SET_WEAPON_DAMAGE_MODIFIER(Hash weaponHash, float damageMultiplier) { invoke<Void>(0x1085790, weaponHash, damageMultiplier); }
static void SET_WEAPON_AOE_MODIFIER(Hash weaponHash, float multiplier) { invoke<Void>(0x10857F0, weaponHash, multiplier); }
static void SET_WEAPON_EFFECT_DURATION_MODIFIER(Hash p0, float p1) { invoke<Void>(0x1085850, p0, p1); }
static BOOL IS_PED_CURRENT_WEAPON_SILENCED(Ped ped) { return invoke<BOOL>(0x10858B0, ped); }
static BOOL IS_FLASH_LIGHT_ON(Ped ped) { return invoke<BOOL>(0x1085920, ped); }
static BOOL SET_FLASH_LIGHT_FADE_DISTANCE(float distance) { return invoke<BOOL>(0x10859A0, distance); }
static void SET_FLASH_LIGHT_ACTIVE_HISTORY(Ped ped, BOOL toggle) { invoke<Void>(0x10859B0, ped, toggle); }
static void SET_WEAPON_ANIMATION_OVERRIDE(Ped ped, Hash animStyle) { invoke<Void>(0x1085A20, ped, animStyle); }
static int GET_WEAPON_DAMAGE_TYPE(Hash weaponHash) { return invoke<int>(0x1085AB0, weaponHash); }
static void SET_EQIPPED_WEAPON_START_SPINNING_AT_FULL_SPEED(Ped ped) { invoke<Void>(0x1085B20, ped); }
static BOOL CAN_USE_WEAPON_ON_PARACHUTE(Hash weaponHash) { return invoke<BOOL>(0x1085B80, weaponHash); }
static int CREATE_AIR_DEFENCE_SPHERE(float x, float y, float z, float radius, float p4, float p5, float p6, Hash weaponHash) { return invoke<int>(0x1085BB0, x, y, z, radius, p4, p5, p6, weaponHash); }
static int CREATE_AIR_DEFENCE_ANGLED_AREA(float p0, float p1, float p2, float p3, float p4, float p5, float p6, float p7, float p8, float radius, Hash weaponHash) { return invoke<int>(0x1085C20, p0, p1, p2, p3, p4, p5, p6, p7, p8, radius, weaponHash); }
static BOOL REMOVE_AIR_DEFENCE_SPHERE(int zoneId) { return invoke<BOOL>(0x1085E10, zoneId); }
static void REMOVE_ALL_AIR_DEFENCE_SPHERES() { invoke<Void>(0x1085E40); }
static void SET_PLAYER_TARGETTABLE_FOR_AIR_DEFENCE_SPHERE(Player player, int zoneId, BOOL enable) { invoke<Void>(0x1085E50, player, zoneId, enable); }
static BOOL IS_AIR_DEFENCE_SPHERE_IN_AREA(float x, float y, float z, float radius, int* outZoneId) { return invoke<BOOL>(0x1085E90, x, y, z, radius, outZoneId); }
static void FIRE_AIR_DEFENCE_SPHERE_WEAPON_AT_POSITION(int zoneId, float x, float y, float z) { invoke<Void>(0x1085F20, zoneId, x, y, z); }
static BOOL DOES_AIR_DEFENCE_SPHERE_EXIST(int zoneId) { return invoke<BOOL>(0x1085FA0, zoneId); }
static void SET_CAN_PED_SELECT_INVENTORY_WEAPON(Ped ped, Hash weaponHash, BOOL toggle) { invoke<Void>(0x1085FD0, ped, weaponHash, toggle); }
static void SET_CAN_PED_SELECT_ALL_WEAPONS(Ped ped, BOOL toggle) { invoke<Void>(0x1085FF0, ped, toggle); }
static int GET_ZONE_AT_COORDS(float x, float y, float z) { return invoke<int>(0x1086F50, x, y, z); }
static int GET_ZONE_FROM_NAME_ID(const char* zoneName) { return invoke<int>(0x1086FE0, zoneName); }
static int GET_ZONE_POPSCHEDULE(int zoneId) { return invoke<int>(0x1087020, zoneId); }
static const char* GET_NAME_OF_ZONE(float x, float y, float z) { return invoke<const char*>(0x1087070, x, y, z); }
static void SET_ZONE_ENABLED(int zoneId, BOOL toggle) { invoke<Void>(0x1087120, zoneId, toggle); }
static int GET_ZONE_SCUMMINESS(int zoneId) { return invoke<int>(0x1087140, zoneId); }
static void OVERRIDE_POPSCHEDULE_VEHICLE_MODEL(int scheduleId, Hash vehicleHash) { invoke<Void>(0x1087170, scheduleId, vehicleHash); }
static void CLEAR_POPSCHEDULE_OVERRIDE_VEHICLE_MODEL(int scheduleId) { invoke<Void>(0x1087180, scheduleId); }
static Hash GET_HASH_OF_MAP_AREA_AT_COORDS(float x, float y, float z) { return invoke<Hash>(0x10871D0, x, y, z); }