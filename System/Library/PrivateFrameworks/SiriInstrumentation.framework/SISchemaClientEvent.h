/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, April 14, 2021 at 2:35:58 PM Mountain Standard Time
                       * Operating System: Version 14.4 (Build 18K802)
                       * Image Source: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>

@class SISchemaClientEventMetadata, SISchemaClientTransportEventMetadata, SISchemaAudioFirstBufferRecorded, SISchemaAudioStopRecording, SISchemaConversationTrace, SISchemaDeviceDynamicContext, SISchemaDeviceFixedContext, SISchemaDictationContext, SISchemaInvocation, SISchemaLocation, SISchemaPunchOut, SISchemaSiriCue, SISchemaUUFRPresented, SISchemaSpeechTranscription, SISchemaTextToSpeechBegin, SISchemaTextToSpeechEnd, SISchemaUIStateTransition, SISchemaClientFlow, SISchemaDialogOutput, SISchemaDictationEndPointStop, SISchemaDictationEndPointCancel, SISchemaDictationAlternativeSelected, SISchemaDictationTranscriptionMetadata, SISchemaCarPlayHeadUnitContext, SISchemaUUFRCompletion, SISchemaUUFRShown, SISchemaUUFRSaid, SISchemaUUFRFatalError, SISchemaDictationAlternativesViewed, SISchemaIntercomMessageRecorded, SISchemaCasinoRelationship, SISchemaUserViewRegionInteraction, SISchemaDeviceLockStateChanged, NSData;

@interface SISchemaClientEvent : PBCodable {

	SISchemaClientEventMetadata* _eventMetadata;
	SISchemaClientTransportEventMetadata* _transportMetadata;
	SISchemaAudioFirstBufferRecorded* _audioFirstBufferRecorded;
	SISchemaAudioStopRecording* _audioStopRecording;
	SISchemaConversationTrace* _clientConversationTrace;
	SISchemaDeviceDynamicContext* _deviceDynamicContext;
	SISchemaDeviceFixedContext* _deviceFixedContext;
	SISchemaDictationContext* _dictationContext;
	SISchemaInvocation* _invocation;
	SISchemaLocation* _location;
	SISchemaPunchOut* _punchOut;
	SISchemaSiriCue* _siriCue;
	SISchemaUUFRPresented* _uufrPresented;
	SISchemaSpeechTranscription* _speechTranscription;
	SISchemaTextToSpeechBegin* _textToSpeechBegin;
	SISchemaTextToSpeechEnd* _textToSpeechEnd;
	SISchemaUIStateTransition* _uiStateTransition;
	SISchemaClientFlow* _clientFlow;
	SISchemaDialogOutput* _dialogOutput;
	SISchemaDictationEndPointStop* _dictationEndPointStop;
	SISchemaDictationEndPointCancel* _dictationEndPointCancel;
	SISchemaDictationAlternativeSelected* _dictationAlternativeSelected;
	SISchemaDictationTranscriptionMetadata* _dictationTranscriptionMetadata;
	SISchemaCarPlayHeadUnitContext* _carPlayHeadUnitContext;
	SISchemaUUFRCompletion* _uufrCompletion;
	SISchemaUUFRShown* _uufrShown;
	SISchemaUUFRSaid* _uufrSaid;
	SISchemaUUFRFatalError* _uufrFatalError;
	SISchemaDictationAlternativesViewed* _dictationAlternativesViewed;
	SISchemaIntercomMessageRecorded* _intercomMessageRecorded;
	SISchemaCasinoRelationship* _casinoRelationship;
	SISchemaUserViewRegionInteraction* _userViewRegionInteraction;
	SISchemaDeviceLockStateChanged* _deviceLockStateChanged;
	BOOL _hasEventMetadata;
	BOOL _hasTransportMetadata;
	BOOL _hasAudioFirstBufferRecorded;
	BOOL _hasAudioStopRecording;
	BOOL _hasClientConversationTrace;
	BOOL _hasDeviceDynamicContext;
	BOOL _hasDeviceFixedContext;
	BOOL _hasDictationContext;
	BOOL _hasInvocation;
	BOOL _hasLocation;
	BOOL _hasPunchOut;
	BOOL _hasSiriCue;
	BOOL _hasUufrPresented;
	BOOL _hasSpeechTranscription;
	BOOL _hasTextToSpeechBegin;
	BOOL _hasTextToSpeechEnd;
	BOOL _hasUiStateTransition;
	BOOL _hasClientFlow;
	BOOL _hasDialogOutput;
	BOOL _hasDictationEndPointStop;
	BOOL _hasDictationEndPointCancel;
	BOOL _hasDictationAlternativeSelected;
	BOOL _hasDictationTranscriptionMetadata;
	BOOL _hasCarPlayHeadUnitContext;
	BOOL _hasUufrCompletion;
	BOOL _hasUufrShown;
	BOOL _hasUufrSaid;
	BOOL _hasUufrFatalError;
	BOOL _hasDictationAlternativesViewed;
	BOOL _hasIntercomMessageRecorded;
	BOOL _hasCasinoRelationship;
	BOOL _hasUserViewRegionInteraction;
	BOOL _hasDeviceLockStateChanged;
	unsigned long long _whichEvent_Type;

}

@property (nonatomic,retain) SISchemaClientEventMetadata * eventMetadata;                                          //@synthesize eventMetadata=_eventMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasEventMetadata;                                                                //@synthesize hasEventMetadata=_hasEventMetadata - In the implementation block
@property (nonatomic,retain) SISchemaClientTransportEventMetadata * transportMetadata;                             //@synthesize transportMetadata=_transportMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasTransportMetadata;                                                            //@synthesize hasTransportMetadata=_hasTransportMetadata - In the implementation block
@property (nonatomic,retain) SISchemaAudioFirstBufferRecorded * audioFirstBufferRecorded;                          //@synthesize audioFirstBufferRecorded=_audioFirstBufferRecorded - In the implementation block
@property (assign,nonatomic) BOOL hasAudioFirstBufferRecorded;                                                     //@synthesize hasAudioFirstBufferRecorded=_hasAudioFirstBufferRecorded - In the implementation block
@property (nonatomic,retain) SISchemaAudioStopRecording * audioStopRecording;                                      //@synthesize audioStopRecording=_audioStopRecording - In the implementation block
@property (assign,nonatomic) BOOL hasAudioStopRecording;                                                           //@synthesize hasAudioStopRecording=_hasAudioStopRecording - In the implementation block
@property (nonatomic,retain) SISchemaConversationTrace * clientConversationTrace;                                  //@synthesize clientConversationTrace=_clientConversationTrace - In the implementation block
@property (assign,nonatomic) BOOL hasClientConversationTrace;                                                      //@synthesize hasClientConversationTrace=_hasClientConversationTrace - In the implementation block
@property (nonatomic,retain) SISchemaDeviceDynamicContext * deviceDynamicContext;                                  //@synthesize deviceDynamicContext=_deviceDynamicContext - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceDynamicContext;                                                         //@synthesize hasDeviceDynamicContext=_hasDeviceDynamicContext - In the implementation block
@property (nonatomic,retain) SISchemaDeviceFixedContext * deviceFixedContext;                                      //@synthesize deviceFixedContext=_deviceFixedContext - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceFixedContext;                                                           //@synthesize hasDeviceFixedContext=_hasDeviceFixedContext - In the implementation block
@property (nonatomic,retain) SISchemaDictationContext * dictationContext;                                          //@synthesize dictationContext=_dictationContext - In the implementation block
@property (assign,nonatomic) BOOL hasDictationContext;                                                             //@synthesize hasDictationContext=_hasDictationContext - In the implementation block
@property (nonatomic,retain) SISchemaInvocation * invocation;                                                      //@synthesize invocation=_invocation - In the implementation block
@property (assign,nonatomic) BOOL hasInvocation;                                                                   //@synthesize hasInvocation=_hasInvocation - In the implementation block
@property (nonatomic,retain) SISchemaLocation * location;                                                          //@synthesize location=_location - In the implementation block
@property (assign,nonatomic) BOOL hasLocation;                                                                     //@synthesize hasLocation=_hasLocation - In the implementation block
@property (nonatomic,retain) SISchemaPunchOut * punchOut;                                                          //@synthesize punchOut=_punchOut - In the implementation block
@property (assign,nonatomic) BOOL hasPunchOut;                                                                     //@synthesize hasPunchOut=_hasPunchOut - In the implementation block
@property (nonatomic,retain) SISchemaSiriCue * siriCue;                                                            //@synthesize siriCue=_siriCue - In the implementation block
@property (assign,nonatomic) BOOL hasSiriCue;                                                                      //@synthesize hasSiriCue=_hasSiriCue - In the implementation block
@property (nonatomic,retain) SISchemaUUFRPresented * uufrPresented;                                                //@synthesize uufrPresented=_uufrPresented - In the implementation block
@property (assign,nonatomic) BOOL hasUufrPresented;                                                                //@synthesize hasUufrPresented=_hasUufrPresented - In the implementation block
@property (nonatomic,retain) SISchemaSpeechTranscription * speechTranscription;                                    //@synthesize speechTranscription=_speechTranscription - In the implementation block
@property (assign,nonatomic) BOOL hasSpeechTranscription;                                                          //@synthesize hasSpeechTranscription=_hasSpeechTranscription - In the implementation block
@property (nonatomic,retain) SISchemaTextToSpeechBegin * textToSpeechBegin;                                        //@synthesize textToSpeechBegin=_textToSpeechBegin - In the implementation block
@property (assign,nonatomic) BOOL hasTextToSpeechBegin;                                                            //@synthesize hasTextToSpeechBegin=_hasTextToSpeechBegin - In the implementation block
@property (nonatomic,retain) SISchemaTextToSpeechEnd * textToSpeechEnd;                                            //@synthesize textToSpeechEnd=_textToSpeechEnd - In the implementation block
@property (assign,nonatomic) BOOL hasTextToSpeechEnd;                                                              //@synthesize hasTextToSpeechEnd=_hasTextToSpeechEnd - In the implementation block
@property (nonatomic,retain) SISchemaUIStateTransition * uiStateTransition;                                        //@synthesize uiStateTransition=_uiStateTransition - In the implementation block
@property (assign,nonatomic) BOOL hasUiStateTransition;                                                            //@synthesize hasUiStateTransition=_hasUiStateTransition - In the implementation block
@property (nonatomic,retain) SISchemaClientFlow * clientFlow;                                                      //@synthesize clientFlow=_clientFlow - In the implementation block
@property (assign,nonatomic) BOOL hasClientFlow;                                                                   //@synthesize hasClientFlow=_hasClientFlow - In the implementation block
@property (nonatomic,retain) SISchemaDialogOutput * dialogOutput;                                                  //@synthesize dialogOutput=_dialogOutput - In the implementation block
@property (assign,nonatomic) BOOL hasDialogOutput;                                                                 //@synthesize hasDialogOutput=_hasDialogOutput - In the implementation block
@property (nonatomic,retain) SISchemaDictationEndPointStop * dictationEndPointStop;                                //@synthesize dictationEndPointStop=_dictationEndPointStop - In the implementation block
@property (assign,nonatomic) BOOL hasDictationEndPointStop;                                                        //@synthesize hasDictationEndPointStop=_hasDictationEndPointStop - In the implementation block
@property (nonatomic,retain) SISchemaDictationEndPointCancel * dictationEndPointCancel;                            //@synthesize dictationEndPointCancel=_dictationEndPointCancel - In the implementation block
@property (assign,nonatomic) BOOL hasDictationEndPointCancel;                                                      //@synthesize hasDictationEndPointCancel=_hasDictationEndPointCancel - In the implementation block
@property (nonatomic,retain) SISchemaDictationAlternativeSelected * dictationAlternativeSelected;                  //@synthesize dictationAlternativeSelected=_dictationAlternativeSelected - In the implementation block
@property (assign,nonatomic) BOOL hasDictationAlternativeSelected;                                                 //@synthesize hasDictationAlternativeSelected=_hasDictationAlternativeSelected - In the implementation block
@property (nonatomic,retain) SISchemaDictationTranscriptionMetadata * dictationTranscriptionMetadata;              //@synthesize dictationTranscriptionMetadata=_dictationTranscriptionMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasDictationTranscriptionMetadata;                                               //@synthesize hasDictationTranscriptionMetadata=_hasDictationTranscriptionMetadata - In the implementation block
@property (nonatomic,retain) SISchemaCarPlayHeadUnitContext * carPlayHeadUnitContext;                              //@synthesize carPlayHeadUnitContext=_carPlayHeadUnitContext - In the implementation block
@property (assign,nonatomic) BOOL hasCarPlayHeadUnitContext;                                                       //@synthesize hasCarPlayHeadUnitContext=_hasCarPlayHeadUnitContext - In the implementation block
@property (nonatomic,retain) SISchemaUUFRCompletion * uufrCompletion;                                              //@synthesize uufrCompletion=_uufrCompletion - In the implementation block
@property (assign,nonatomic) BOOL hasUufrCompletion;                                                               //@synthesize hasUufrCompletion=_hasUufrCompletion - In the implementation block
@property (nonatomic,retain) SISchemaUUFRShown * uufrShown;                                                        //@synthesize uufrShown=_uufrShown - In the implementation block
@property (assign,nonatomic) BOOL hasUufrShown;                                                                    //@synthesize hasUufrShown=_hasUufrShown - In the implementation block
@property (nonatomic,retain) SISchemaUUFRSaid * uufrSaid;                                                          //@synthesize uufrSaid=_uufrSaid - In the implementation block
@property (assign,nonatomic) BOOL hasUufrSaid;                                                                     //@synthesize hasUufrSaid=_hasUufrSaid - In the implementation block
@property (nonatomic,retain) SISchemaUUFRFatalError * uufrFatalError;                                              //@synthesize uufrFatalError=_uufrFatalError - In the implementation block
@property (assign,nonatomic) BOOL hasUufrFatalError;                                                               //@synthesize hasUufrFatalError=_hasUufrFatalError - In the implementation block
@property (nonatomic,retain) SISchemaDictationAlternativesViewed * dictationAlternativesViewed;                    //@synthesize dictationAlternativesViewed=_dictationAlternativesViewed - In the implementation block
@property (assign,nonatomic) BOOL hasDictationAlternativesViewed;                                                  //@synthesize hasDictationAlternativesViewed=_hasDictationAlternativesViewed - In the implementation block
@property (nonatomic,retain) SISchemaIntercomMessageRecorded * intercomMessageRecorded;                            //@synthesize intercomMessageRecorded=_intercomMessageRecorded - In the implementation block
@property (assign,nonatomic) BOOL hasIntercomMessageRecorded;                                                      //@synthesize hasIntercomMessageRecorded=_hasIntercomMessageRecorded - In the implementation block
@property (nonatomic,retain) SISchemaCasinoRelationship * casinoRelationship;                                      //@synthesize casinoRelationship=_casinoRelationship - In the implementation block
@property (assign,nonatomic) BOOL hasCasinoRelationship;                                                           //@synthesize hasCasinoRelationship=_hasCasinoRelationship - In the implementation block
@property (nonatomic,retain) SISchemaUserViewRegionInteraction * userViewRegionInteraction;                        //@synthesize userViewRegionInteraction=_userViewRegionInteraction - In the implementation block
@property (assign,nonatomic) BOOL hasUserViewRegionInteraction;                                                    //@synthesize hasUserViewRegionInteraction=_hasUserViewRegionInteraction - In the implementation block
@property (nonatomic,retain) SISchemaDeviceLockStateChanged * deviceLockStateChanged;                              //@synthesize deviceLockStateChanged=_deviceLockStateChanged - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceLockStateChanged;                                                       //@synthesize hasDeviceLockStateChanged=_hasDeviceLockStateChanged - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (nonatomic,readonly) unsigned long long whichEvent_Type;                                                 //@synthesize whichEvent_Type=_whichEvent_Type - In the implementation block
+(id)getTagForEventTypeClass:(Class)arg1 ;
+(Class)getEventTypeClassForTag:(int)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(SISchemaInvocation *)invocation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setEventType:(id)arg1 ;
-(SISchemaLocation *)location;
-(void)setLocation:(SISchemaLocation *)arg1 ;
-(BOOL)hasLocation;
-(id)initWithJSON:(id)arg1 ;
-(void)setHasLocation:(BOOL)arg1 ;
-(SISchemaPunchOut *)punchOut;
-(void)setPunchOut:(SISchemaPunchOut *)arg1 ;
-(NSData *)jsonData;
-(SISchemaClientEventMetadata *)eventMetadata;
-(void)setEventMetadata:(SISchemaClientEventMetadata *)arg1 ;
-(void)setInvocation:(SISchemaInvocation *)arg1 ;
-(int)getAnyEventType;
-(id)getTypeId;
-(void)setTransportMetadata:(SISchemaClientTransportEventMetadata *)arg1 ;
-(void)setAudioFirstBufferRecorded:(SISchemaAudioFirstBufferRecorded *)arg1 ;
-(void)setAudioStopRecording:(SISchemaAudioStopRecording *)arg1 ;
-(void)setClientConversationTrace:(SISchemaConversationTrace *)arg1 ;
-(void)setDeviceDynamicContext:(SISchemaDeviceDynamicContext *)arg1 ;
-(void)setDeviceFixedContext:(SISchemaDeviceFixedContext *)arg1 ;
-(void)setDictationContext:(SISchemaDictationContext *)arg1 ;
-(void)setSiriCue:(SISchemaSiriCue *)arg1 ;
-(void)setUufrPresented:(SISchemaUUFRPresented *)arg1 ;
-(void)setSpeechTranscription:(SISchemaSpeechTranscription *)arg1 ;
-(void)setTextToSpeechBegin:(SISchemaTextToSpeechBegin *)arg1 ;
-(void)setTextToSpeechEnd:(SISchemaTextToSpeechEnd *)arg1 ;
-(void)setUiStateTransition:(SISchemaUIStateTransition *)arg1 ;
-(void)setClientFlow:(SISchemaClientFlow *)arg1 ;
-(void)setDialogOutput:(SISchemaDialogOutput *)arg1 ;
-(void)setDictationEndPointStop:(SISchemaDictationEndPointStop *)arg1 ;
-(void)setDictationEndPointCancel:(SISchemaDictationEndPointCancel *)arg1 ;
-(void)setDictationAlternativeSelected:(SISchemaDictationAlternativeSelected *)arg1 ;
-(void)setDictationTranscriptionMetadata:(SISchemaDictationTranscriptionMetadata *)arg1 ;
-(void)setCarPlayHeadUnitContext:(SISchemaCarPlayHeadUnitContext *)arg1 ;
-(void)setUufrCompletion:(SISchemaUUFRCompletion *)arg1 ;
-(void)setUufrShown:(SISchemaUUFRShown *)arg1 ;
-(void)setUufrSaid:(SISchemaUUFRSaid *)arg1 ;
-(void)setUufrFatalError:(SISchemaUUFRFatalError *)arg1 ;
-(void)setDictationAlternativesViewed:(SISchemaDictationAlternativesViewed *)arg1 ;
-(void)setIntercomMessageRecorded:(SISchemaIntercomMessageRecorded *)arg1 ;
-(void)setCasinoRelationship:(SISchemaCasinoRelationship *)arg1 ;
-(void)setUserViewRegionInteraction:(SISchemaUserViewRegionInteraction *)arg1 ;
-(void)setDeviceLockStateChanged:(SISchemaDeviceLockStateChanged *)arg1 ;
-(SISchemaClientTransportEventMetadata *)transportMetadata;
-(SISchemaAudioFirstBufferRecorded *)audioFirstBufferRecorded;
-(SISchemaAudioStopRecording *)audioStopRecording;
-(SISchemaConversationTrace *)clientConversationTrace;
-(SISchemaDeviceDynamicContext *)deviceDynamicContext;
-(SISchemaDeviceFixedContext *)deviceFixedContext;
-(SISchemaDictationContext *)dictationContext;
-(SISchemaSiriCue *)siriCue;
-(SISchemaUUFRPresented *)uufrPresented;
-(SISchemaSpeechTranscription *)speechTranscription;
-(SISchemaTextToSpeechBegin *)textToSpeechBegin;
-(SISchemaTextToSpeechEnd *)textToSpeechEnd;
-(SISchemaUIStateTransition *)uiStateTransition;
-(SISchemaClientFlow *)clientFlow;
-(SISchemaDialogOutput *)dialogOutput;
-(SISchemaDictationEndPointStop *)dictationEndPointStop;
-(SISchemaDictationEndPointCancel *)dictationEndPointCancel;
-(SISchemaDictationAlternativeSelected *)dictationAlternativeSelected;
-(SISchemaDictationTranscriptionMetadata *)dictationTranscriptionMetadata;
-(SISchemaCarPlayHeadUnitContext *)carPlayHeadUnitContext;
-(SISchemaUUFRCompletion *)uufrCompletion;
-(SISchemaUUFRShown *)uufrShown;
-(SISchemaUUFRSaid *)uufrSaid;
-(SISchemaUUFRFatalError *)uufrFatalError;
-(SISchemaDictationAlternativesViewed *)dictationAlternativesViewed;
-(SISchemaIntercomMessageRecorded *)intercomMessageRecorded;
-(SISchemaCasinoRelationship *)casinoRelationship;
-(SISchemaUserViewRegionInteraction *)userViewRegionInteraction;
-(SISchemaDeviceLockStateChanged *)deviceLockStateChanged;
-(unsigned long long)whichEvent_Type;
-(BOOL)hasEventMetadata;
-(BOOL)hasTransportMetadata;
-(void)setHasEventMetadata:(BOOL)arg1 ;
-(void)setHasTransportMetadata:(BOOL)arg1 ;
-(BOOL)hasAudioFirstBufferRecorded;
-(void)setHasAudioFirstBufferRecorded:(BOOL)arg1 ;
-(BOOL)hasAudioStopRecording;
-(void)setHasAudioStopRecording:(BOOL)arg1 ;
-(BOOL)hasClientConversationTrace;
-(void)setHasClientConversationTrace:(BOOL)arg1 ;
-(BOOL)hasDeviceDynamicContext;
-(void)setHasDeviceDynamicContext:(BOOL)arg1 ;
-(BOOL)hasDeviceFixedContext;
-(void)setHasDeviceFixedContext:(BOOL)arg1 ;
-(BOOL)hasDictationContext;
-(void)setHasDictationContext:(BOOL)arg1 ;
-(BOOL)hasInvocation;
-(void)setHasInvocation:(BOOL)arg1 ;
-(BOOL)hasPunchOut;
-(void)setHasPunchOut:(BOOL)arg1 ;
-(BOOL)hasSiriCue;
-(void)setHasSiriCue:(BOOL)arg1 ;
-(BOOL)hasUufrPresented;
-(void)setHasUufrPresented:(BOOL)arg1 ;
-(BOOL)hasSpeechTranscription;
-(void)setHasSpeechTranscription:(BOOL)arg1 ;
-(BOOL)hasTextToSpeechBegin;
-(void)setHasTextToSpeechBegin:(BOOL)arg1 ;
-(BOOL)hasTextToSpeechEnd;
-(void)setHasTextToSpeechEnd:(BOOL)arg1 ;
-(BOOL)hasUiStateTransition;
-(void)setHasUiStateTransition:(BOOL)arg1 ;
-(BOOL)hasClientFlow;
-(void)setHasClientFlow:(BOOL)arg1 ;
-(BOOL)hasDialogOutput;
-(void)setHasDialogOutput:(BOOL)arg1 ;
-(BOOL)hasDictationEndPointStop;
-(void)setHasDictationEndPointStop:(BOOL)arg1 ;
-(BOOL)hasDictationEndPointCancel;
-(void)setHasDictationEndPointCancel:(BOOL)arg1 ;
-(BOOL)hasDictationAlternativeSelected;
-(void)setHasDictationAlternativeSelected:(BOOL)arg1 ;
-(BOOL)hasDictationTranscriptionMetadata;
-(void)setHasDictationTranscriptionMetadata:(BOOL)arg1 ;
-(BOOL)hasCarPlayHeadUnitContext;
-(void)setHasCarPlayHeadUnitContext:(BOOL)arg1 ;
-(BOOL)hasUufrCompletion;
-(void)setHasUufrCompletion:(BOOL)arg1 ;
-(BOOL)hasUufrShown;
-(void)setHasUufrShown:(BOOL)arg1 ;
-(BOOL)hasUufrSaid;
-(void)setHasUufrSaid:(BOOL)arg1 ;
-(BOOL)hasUufrFatalError;
-(void)setHasUufrFatalError:(BOOL)arg1 ;
-(BOOL)hasDictationAlternativesViewed;
-(void)setHasDictationAlternativesViewed:(BOOL)arg1 ;
-(BOOL)hasIntercomMessageRecorded;
-(void)setHasIntercomMessageRecorded:(BOOL)arg1 ;
-(BOOL)hasCasinoRelationship;
-(void)setHasCasinoRelationship:(BOOL)arg1 ;
-(BOOL)hasUserViewRegionInteraction;
-(void)setHasUserViewRegionInteraction:(BOOL)arg1 ;
-(BOOL)hasDeviceLockStateChanged;
-(void)setHasDeviceLockStateChanged:(BOOL)arg1 ;
@end

