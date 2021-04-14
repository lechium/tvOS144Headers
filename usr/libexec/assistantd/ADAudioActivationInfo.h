//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AFClientConfiguration, AFExperimentContext, AFLanguageDetectionUserContext, AFSpeechRecordingAlertPolicy, NSString, NSUUID;

@interface ADAudioActivationInfo : NSObject
{
    long long _activationMode;	// 8 = 0x8
    AFClientConfiguration *_currentClientConfiguration;	// 16 = 0x10
    _Bool _suppressStartAlert;	// 24 = 0x18
    AFExperimentContext *_experimentContext;	// 32 = 0x20
    _Bool _isActivated;	// 40 = 0x28
    float _activeMediaPlaybackVolume;	// 44 = 0x2c
    _Bool _useBorealisBuffer;	// 48 = 0x30
    _Bool _usePrelistening;	// 49 = 0x31
    _Bool _isOnPhoneCall;	// 50 = 0x32
    _Bool _hasPlayedStartAlert;	// 51 = 0x33
    long long _speechEvent;	// 56 = 0x38
    long long _audioAlertStyle;	// 64 = 0x40
    NSString *_deviceIdentifier;	// 72 = 0x48
    double _activationSystemUptime;	// 80 = 0x50
    unsigned long long _activationHostTime;	// 88 = 0x58
    unsigned long long _buttonDownHostTime;	// 96 = 0x60
    unsigned long long _voiceTriggerEndHostTime;	// 104 = 0x68
    long long _speechCapturingMode;	// 112 = 0x70
    long long _speechEndpointerOperationMode;	// 120 = 0x78
    AFSpeechRecordingAlertPolicy *_speechRecordingAlertPolicy;	// 128 = 0x80
    long long _presentationMode;	// 136 = 0x88
    AFLanguageDetectionUserContext *_languageDetectionUserContext;	// 144 = 0x90
    long long _dictationInputOrigin;	// 152 = 0x98
    NSUUID *_turnIdentifier;	// 160 = 0xa0
    NSString *_applicationDisplayName;	// 168 = 0xa8
    NSString *_applicationBundleIdentifier;	// 176 = 0xb0
}

- (void).cxx_destruct;	// IMP=0x00000001001865e4
@property(readonly, copy, nonatomic) NSString *applicationBundleIdentifier; // @synthesize applicationBundleIdentifier=_applicationBundleIdentifier;
@property(readonly, copy, nonatomic) NSString *applicationDisplayName; // @synthesize applicationDisplayName=_applicationDisplayName;
@property(readonly, copy, nonatomic) NSUUID *turnIdentifier; // @synthesize turnIdentifier=_turnIdentifier;
@property(readonly, nonatomic) long long dictationInputOrigin; // @synthesize dictationInputOrigin=_dictationInputOrigin;
@property(readonly, copy, nonatomic) AFLanguageDetectionUserContext *languageDetectionUserContext; // @synthesize languageDetectionUserContext=_languageDetectionUserContext;
@property(readonly, nonatomic) long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(readonly, nonatomic) AFSpeechRecordingAlertPolicy *speechRecordingAlertPolicy; // @synthesize speechRecordingAlertPolicy=_speechRecordingAlertPolicy;
@property(readonly, nonatomic) long long speechEndpointerOperationMode; // @synthesize speechEndpointerOperationMode=_speechEndpointerOperationMode;
@property(readonly, nonatomic) _Bool hasPlayedStartAlert; // @synthesize hasPlayedStartAlert=_hasPlayedStartAlert;
@property(readonly, nonatomic) _Bool isOnPhoneCall; // @synthesize isOnPhoneCall=_isOnPhoneCall;
@property(nonatomic) long long speechCapturingMode; // @synthesize speechCapturingMode=_speechCapturingMode;
@property(readonly, nonatomic) unsigned long long voiceTriggerEndHostTime; // @synthesize voiceTriggerEndHostTime=_voiceTriggerEndHostTime;
@property(readonly, nonatomic) unsigned long long buttonDownHostTime; // @synthesize buttonDownHostTime=_buttonDownHostTime;
@property(readonly, nonatomic) unsigned long long activationHostTime; // @synthesize activationHostTime=_activationHostTime;
@property(readonly, nonatomic) double activationSystemUptime; // @synthesize activationSystemUptime=_activationSystemUptime;
@property(readonly, copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(readonly, nonatomic) long long audioAlertStyle; // @synthesize audioAlertStyle=_audioAlertStyle;
@property(readonly, nonatomic) _Bool usePrelistening; // @synthesize usePrelistening=_usePrelistening;
@property(readonly, nonatomic) _Bool useBorealisBuffer; // @synthesize useBorealisBuffer=_useBorealisBuffer;
@property(readonly, nonatomic) long long speechEvent; // @synthesize speechEvent=_speechEvent;
- (id)_audioSessionActiveDelayServerConfiguration;	// IMP=0x0000000100186208
- (id)_audioSessionActiveDelayOverride;	// IMP=0x0000000100186114
- (id)_audioSessionActiveDelayUserPerception;	// IMP=0x0000000100185dd0
- (id)_audioSessionActiveDelayCoreSpeech;	// IMP=0x0000000100185c08
- (long long)_audioAlertStyleForListenAfterSpeakingWithRecordRoute:(id)arg1 playbackRoute:(id)arg2 echoCancellation:(_Bool)arg3 useDeviceSpeakerForTTS:(long long)arg4;	// IMP=0x0000000100185a74
- (_Bool)_isVibrationDisabledInAccessibility;	// IMP=0x00000001001859bc
- (_Bool)_isVoiceOverTouchEnabledInAccessibility;	// IMP=0x0000000100185904
- (id)dateByAddingTimeIntervalSinceActivation:(double)arg1;	// IMP=0x000000010018562c
- (id)audioSessionActivationTargetDate;	// IMP=0x00000001001854b4
- (long long)overrideStartingAlertBeepSoundID;	// IMP=0x0000000100185464
- (_Bool)isVoiceOverTouchEnabled;	// IMP=0x0000000100185458
- (long long)twoShotPromptTypeForRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x0000000100185324
- (_Bool)shouldSuppressRecordingErrorAlert;	// IMP=0x0000000100185310
- (_Bool)shouldSuppressRecordingStopAlert;	// IMP=0x00000001001852e8
- (_Bool)shouldPlayAlertIfNotPrelistening;	// IMP=0x00000001001852a0
- (_Bool)shouldExplicitlyPlayAlertOnStart;	// IMP=0x0000000100185254
- (_Bool)shouldUseVoiceTriggerAnalyzerStyle;	// IMP=0x0000000100185248
- (_Bool)canEnterTwoShot;	// IMP=0x00000001001851f4
- (_Bool)_eventIsRaiseToSpeak;	// IMP=0x00000001001851e4
- (_Bool)_eventIsVoiceTrigger;	// IMP=0x00000001001851dc
- (_Bool)_canUseZLL;	// IMP=0x000000010018514c
- (_Bool)canGetPCMStream;	// IMP=0x0000000100185134
- (_Bool)requiresBorealisConsumerCheck;	// IMP=0x0000000100185104
- (_Bool)shouldTreatTimeoutAsHardEndpoint;	// IMP=0x00000001001850f8
- (_Bool)canPrepareWithoutInterruption;	// IMP=0x00000001001850f0
- (_Bool)canPrewarm;	// IMP=0x00000001001850bc
- (void)endUpdateToPostVoiceWithContext:(unsigned long long)arg1 success:(_Bool)arg2;	// IMP=0x00000001001850b0
- (unsigned long long)beginUpdateToPostVoice;	// IMP=0x0000000100185098
- (_Bool)needsUpdateToPostVoiceMode;	// IMP=0x0000000100185054
- (void)audioSessionActivated;	// IMP=0x0000000100185048
- (long long)audioAlertStyleForRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00000001001849cc
- (_Bool)shouldOverrideRecordingStartingAlertBehaviorForAlertStyle:(long long)arg1;	// IMP=0x0000000100184948
- (id)_alertBehaviorForRecordRoute:(id)arg1 playbackRoute:(id)arg2 attemptsToUsePastDataBufferFrames:(_Bool)arg3;	// IMP=0x000000010018455c
- (id)startRecordingSettingsWithRecordRoute:(id)arg1 playbackRoute:(id)arg2;	// IMP=0x00000001001840d8
- (id)recordContext;	// IMP=0x0000000100184078
- (id)avvcContext;	// IMP=0x0000000100183fbc
- (long long)_activationMode;	// IMP=0x0000000100183f70
- (id)recordSettingsWithOptions:(unsigned long long)arg1;	// IMP=0x0000000100183ba8
- (id)_appendDictationApplicationInfoSettings:(id)arg1;	// IMP=0x0000000100183ae8
- (long long)event;	// IMP=0x0000000100183ae0
- (void)setClientConfiguration:(id)arg1;	// IMP=0x00000001001839f0
- (void)setSpeechRequestOptions:(id)arg1 currentActivationInfo:(id)arg2;	// IMP=0x0000000100183484
- (id)initWithSpeechCapturingMode:(long long)arg1 clientConfiguration:(id)arg2 experimentContext:(id)arg3;	// IMP=0x00000001001832ec
- (id)description;	// IMP=0x0000000100183238

@end
