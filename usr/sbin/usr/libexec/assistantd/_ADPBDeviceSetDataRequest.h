//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Sep 26 2020 13:48:20).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import "NSCopying-Protocol.h"

@class ADSharedData, NSMutableArray, NSString, _ADPBDeviceOutputVoiceInfo, _ADPBDeviceStringKeyValueDictionary;

@interface _ADPBDeviceSetDataRequest : PBRequest <NSCopying>
{
    NSString *_airplayRouteId;	// 8 = 0x8
    NSString *_assistantId;	// 16 = 0x10
    NSString *_dataSharingOptInStatus;	// 24 = 0x18
    NSString *_ekToken;	// 32 = 0x20
    NSString *_hostname;	// 40 = 0x28
    NSString *_languageCode;	// 48 = 0x30
    NSString *_loggingAssistantId;	// 56 = 0x38
    NSString *_loggingSharedId;	// 64 = 0x40
    NSMutableArray *_notificationPreviewRestrictedApps;	// 72 = 0x48
    _ADPBDeviceOutputVoiceInfo *_outputVoice;	// 80 = 0x50
    NSString *_previousLangaugeCode;	// 88 = 0x58
    _ADPBDeviceOutputVoiceInfo *_previousOutputVoice;	// 96 = 0x60
    NSString *_sharedId;	// 104 = 0x68
    NSString *_speechId;	// 112 = 0x70
    NSString *_storeFrontId;	// 120 = 0x78
    NSString *_temperatureUnit;	// 128 = 0x80
    NSString *_userAgent;	// 136 = 0x88
    NSString *_userAssignedName;	// 144 = 0x90
    NSString *_userToken;	// 152 = 0x98
    _ADPBDeviceStringKeyValueDictionary *_utsRequiredRequestData;	// 160 = 0xa0
    _Bool _activityContinuationAllowed;	// 168 = 0xa8
    _Bool _cloudSyncEnabled;	// 169 = 0xa9
    _Bool _dictationEnabled;	// 170 = 0xaa
    _Bool _isLocationSharingDevice;	// 171 = 0xab
    _Bool _isRemotePlaybackDevice;	// 172 = 0xac
    _Bool _shouldCensorSpeech;	// 173 = 0xad
    _Bool _siriEnabled;	// 174 = 0xae
    struct {
        unsigned int activityContinuationAllowed:1;
        unsigned int cloudSyncEnabled:1;
        unsigned int dictationEnabled:1;
        unsigned int isLocationSharingDevice:1;
        unsigned int isRemotePlaybackDevice:1;
        unsigned int shouldCensorSpeech:1;
        unsigned int siriEnabled:1;
    } _has;	// 176 = 0xb0
}

+ (Class)notificationPreviewRestrictedAppsType;	// IMP=0x00000001000dd8a0
+ (unsigned short)_ADPBDeviceRequestType;	// IMP=0x000000010008da40
- (void).cxx_destruct;	// IMP=0x00000001000e088c
@property(retain, nonatomic) NSString *dataSharingOptInStatus; // @synthesize dataSharingOptInStatus=_dataSharingOptInStatus;
@property(retain, nonatomic) _ADPBDeviceStringKeyValueDictionary *utsRequiredRequestData; // @synthesize utsRequiredRequestData=_utsRequiredRequestData;
@property(retain, nonatomic) NSString *userAssignedName; // @synthesize userAssignedName=_userAssignedName;
@property(nonatomic) _Bool isRemotePlaybackDevice; // @synthesize isRemotePlaybackDevice=_isRemotePlaybackDevice;
@property(retain, nonatomic) NSString *userToken; // @synthesize userToken=_userToken;
@property(retain, nonatomic) NSString *ekToken; // @synthesize ekToken=_ekToken;
@property(retain, nonatomic) NSString *airplayRouteId; // @synthesize airplayRouteId=_airplayRouteId;
@property(retain, nonatomic) NSString *storeFrontId; // @synthesize storeFrontId=_storeFrontId;
@property(retain, nonatomic) NSString *loggingSharedId; // @synthesize loggingSharedId=_loggingSharedId;
@property(retain, nonatomic) NSString *loggingAssistantId; // @synthesize loggingAssistantId=_loggingAssistantId;
@property(retain, nonatomic) NSString *temperatureUnit; // @synthesize temperatureUnit=_temperatureUnit;
@property(retain, nonatomic) NSMutableArray *notificationPreviewRestrictedApps; // @synthesize notificationPreviewRestrictedApps=_notificationPreviewRestrictedApps;
@property(nonatomic) _Bool isLocationSharingDevice; // @synthesize isLocationSharingDevice=_isLocationSharingDevice;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(nonatomic) _Bool shouldCensorSpeech; // @synthesize shouldCensorSpeech=_shouldCensorSpeech;
@property(nonatomic) _Bool cloudSyncEnabled; // @synthesize cloudSyncEnabled=_cloudSyncEnabled;
@property(retain, nonatomic) _ADPBDeviceOutputVoiceInfo *outputVoice; // @synthesize outputVoice=_outputVoice;
@property(retain, nonatomic) _ADPBDeviceOutputVoiceInfo *previousOutputVoice; // @synthesize previousOutputVoice=_previousOutputVoice;
@property(retain, nonatomic) NSString *previousLangaugeCode; // @synthesize previousLangaugeCode=_previousLangaugeCode;
@property(retain, nonatomic) NSString *sharedId; // @synthesize sharedId=_sharedId;
@property(nonatomic) _Bool dictationEnabled; // @synthesize dictationEnabled=_dictationEnabled;
@property(nonatomic) _Bool activityContinuationAllowed; // @synthesize activityContinuationAllowed=_activityContinuationAllowed;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) NSString *assistantId; // @synthesize assistantId=_assistantId;
@property(retain, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(retain, nonatomic) NSString *speechId; // @synthesize speechId=_speechId;
@property(nonatomic) _Bool siriEnabled; // @synthesize siriEnabled=_siriEnabled;
- (void)mergeFrom:(id)arg1;	// IMP=0x00000001000e0064
- (unsigned long long)hash;	// IMP=0x00000001000dfd50
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001000df7e4
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001000df264
- (void)copyTo:(id)arg1;	// IMP=0x00000001000dee2c
- (void)writeTo:(id)arg1;	// IMP=0x00000001000de9fc
- (_Bool)readFrom:(id)arg1;	// IMP=0x00000001000de9f4
- (id)dictionaryRepresentation;	// IMP=0x00000001000ddab0
- (id)description;	// IMP=0x00000001000dd9fc
@property(readonly, nonatomic) _Bool hasDataSharingOptInStatus;
@property(readonly, nonatomic) _Bool hasUtsRequiredRequestData;
@property(readonly, nonatomic) _Bool hasUserAssignedName;
@property(nonatomic) _Bool hasIsRemotePlaybackDevice;
@property(readonly, nonatomic) _Bool hasUserToken;
@property(readonly, nonatomic) _Bool hasEkToken;
@property(readonly, nonatomic) _Bool hasAirplayRouteId;
@property(readonly, nonatomic) _Bool hasStoreFrontId;
@property(readonly, nonatomic) _Bool hasLoggingSharedId;
@property(readonly, nonatomic) _Bool hasLoggingAssistantId;
@property(readonly, nonatomic) _Bool hasTemperatureUnit;
- (id)notificationPreviewRestrictedAppsAtIndex:(unsigned long long)arg1;	// IMP=0x00000001000dd888
- (unsigned long long)notificationPreviewRestrictedAppsCount;	// IMP=0x00000001000dd870
- (void)addNotificationPreviewRestrictedApps:(id)arg1;	// IMP=0x00000001000dd7fc
- (void)clearNotificationPreviewRestrictedApps;	// IMP=0x00000001000dd7e4
@property(nonatomic) _Bool hasIsLocationSharingDevice;
@property(readonly, nonatomic) _Bool hasUserAgent;
@property(nonatomic) _Bool hasShouldCensorSpeech;
@property(nonatomic) _Bool hasCloudSyncEnabled;
@property(readonly, nonatomic) _Bool hasOutputVoice;
@property(readonly, nonatomic) _Bool hasPreviousOutputVoice;
@property(readonly, nonatomic) _Bool hasPreviousLangaugeCode;
@property(readonly, nonatomic) _Bool hasSharedId;
@property(nonatomic) _Bool hasDictationEnabled;
@property(nonatomic) _Bool hasActivityContinuationAllowed;
@property(readonly, nonatomic) _Bool hasHostname;
@property(readonly, nonatomic) _Bool hasAssistantId;
@property(readonly, nonatomic) _Bool hasLanguageCode;
@property(readonly, nonatomic) _Bool hasSpeechId;
@property(nonatomic) _Bool hasSiriEnabled;
- (void)_ad_performWithSharedDataRemote:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x00000001000aa3a0
- (void)_ad_performWithCloudService:(id)arg1 fromPeer:(id)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x000000010011fe98
@property(copy, nonatomic, setter=_ad_setData:) ADSharedData *_ad_data;

@end

